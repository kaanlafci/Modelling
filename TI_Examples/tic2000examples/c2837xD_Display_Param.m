% Script to initialize parameters for Interfacing LCD display Booster Pack
% with TI C2000 Processors example

% Copyright 2019 The MathWorks, Inc.

% Dimension of display
image_width = 320;
image_height = 240;

% Buffer size and buffer calculations
lines_in_packet = 16;
SCI_ping_buffer_size = image_height*lines_in_packet;
TI_ping_buffer_size = SCI_ping_buffer_size; % 16-bit addressable but using 8-bit per location

% Entire buffer data will transferred to target F28379D in small chunks of chunk size through serial interface.
SCI_chunk_size = 6;
TI_chunk_size = SCI_chunk_size; % TI is 16-bit addressable but using 8-bit transfers
SPI_chunk_size = 6;

% Number of counts required to send buffer data in small chunks
SCI_counter = SCI_ping_buffer_size/SCI_chunk_size;

% Data store memory parameters
Image_Array = Simulink.Signal;
Image_Array.CoderInfo.StorageClass = 'ExportedGlobal';
Image_Array.DataType = 'uint16';
Image_Array.Dimensions = TI_ping_buffer_size*2; % Ping-Pong buffer 
Image_Array.InitialValue = ['[' num2str(zeros(1,SCI_ping_buffer_size*2)) ']'];