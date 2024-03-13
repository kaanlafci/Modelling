function varargout = c2837xD_serial_send(ComPort,ImageName,varargin)
% c2837xD_serial_send function will read image in host computer.
% It will to the F28379D Launchpad through Serial Communication Interface (SCI).
%
% c2837xD_serial_send function takes three arguments among which two
% (ComPort , ImageName) are mandatory.
%
% To run the c2837xD_serial_send function on a folder, use c2837xD_serial_send('ComPort','ImageName') command.
%
% ComPort is the COM Port to which target F28379D is connected. 
% Check COM port settings at Device Manager > Ports [COM & LTP] 
%
% ImageName is the full path of the image which needs to be displayed.
% 
% varargin is optional and can be used for debugging purpose. 
% If it is passed as 1 then varargout will return last buffer data else it
% will return 0.
%
% Copyright 2019 MathWorks, Inc.

    c2837xD_Display_Param;  %Initialize display parameters
    
    % Reading and re-sizing the image as per display diamensions 
    Image = imread(ImageName);
    I = imresize(Image,[240 320]); 

    instrreset; % Reset the previously created serial objects

    % Initialization for Serial Communication Interface
    serial_obj = serial(ComPort,'BaudRate',5000000);
    serial_obj.FlowControl = 'hardware';
    serial_obj.OutputBufferSize = SCI_ping_buffer_size + SCI_chunk_size;
    
    fopen(serial_obj);
    ACK_watchdog = 0;   % Check whether we received ACK or not
    
    CurrentBufferData = zeros(1,3840);  % Store each buffer data for debugging purpose

    for inc1 = 1:image_width/lines_in_packet
            CurrentBuffercount=1;
            delimiter = uint16([1 2 3 4 5 6]);
            fwrite(serial_obj, delimiter,'uint16');
            
            for inc2 = 1:lines_in_packet
                
                % Converting 24-bit image format to 16-bit image format 
                IR = uint16(bitsll(fi(bitand(I(:,(inc1-1)*lines_in_packet+inc2,1),hex2dec('F8')),0,16,0),8));
                IG = uint16(bitsll(fi(bitand(I(:,(inc1-1)*lines_in_packet+inc2,2),hex2dec('FC')),0,16,0),3));
                IB = uint16(bitsrl(fi(bitand(I(:,(inc1-1)*lines_in_packet+inc2,3),hex2dec('F8')),0,16,0),3));
                IRG = bitor(IR,IG,'uint16');
                IRGB = bitor(IRG,IB,'uint16');
                
                fwrite(serial_obj, IRGB,'uint16');
                
                CurrentBufferData(1,CurrentBuffercount:CurrentBuffercount+239) = IRGB;
                CurrentBuffercount= CurrentBuffercount + 240;
            end
            ACK_array = [0;0;0]; % ACK_array to receive ACK
            if serial_obj.BytesAvailable >= 3 %Have we received an ACK Packet?
                ACK_array = fread(serial_obj, 3, 'uint16');
                ACK_watchdog = ACK_watchdog - 1;
            else
                ACK_watchdog = ACK_watchdog + 1; % Increment the ACK watchdog as we haven't recevied an ACK
                while ACK_watchdog >= 2 % wait for ACK string if ACK_watchdog is 2
                    if serial_obj.BytesAvailable>=3
                        ACK_array = fread(serial_obj, 3, 'uint16');
                        ACK_watchdog = ACK_watchdog-1;
                    end
                end
            end
    end

    if ((nargin == 3) && (varargin{1} == 1))
        varargout{1} = CurrentBufferData; % Return data of last buffer for debugging purpose
    else
        varargout{1} = 0;
    end

    fclose(serial_obj);
    delete(serial_obj);
    clear serial_obj;
end