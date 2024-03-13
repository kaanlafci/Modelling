% Script to Read configuration parameter for clocking info of processor and
% create a sine table to load for DMA example

% Copyright 2018 The MathWorks, Inc.

if codertarget.target.isCoderTarget(bdroot)
    cs = getActiveConfigSet(bdroot);
    clk = codertarget.data.getSystemClock(cs);
    sysclkout = str2double(clk) * 1e6;
    % ePWM clock
    ePWM = codertarget.data.getParameterValue(cs, 'ePWM');
    if isfield(ePWM,'ClockDiv')
        clockDiv = str2double(strrep(ePWM.ClockDiv,'SYSCLKOUT/',''));
    else
        clockDiv = 1;
    end
    ePWMClkFrequency = sysclkout / clockDiv;
else
    % Set default value of 90 MHz
    ePWMClkFrequency = 90e6;
end

% Required ePWM frequency = 500 Hz and Sine wave frequency = 1 Hz
epwmFrequency = 500;
sinewaveFrequency = 1;

% Up-down counter mode, TBCKL prescalar set to 128 and HSPCLKDIV set to 1
epwmPeriod = floor(ePWMClkFrequency / (128 * 2 * epwmFrequency));

% dutycycle array size calculations
arraySize = floor(epwmFrequency/(sinewaveFrequency));

% Sine value scaled and offset to ePWM period
sineTableInput = 0 : (2 * pi / arraySize) : ((2 * pi) - (2 * pi / arraySize));
sineTable = floor(sin(sineTableInput) * (epwmPeriod) + (epwmPeriod));

%Creation of variable for duty cycle
duty_cycle_table = Simulink.Signal;
duty_cycle_table.CoderInfo.StorageClass = 'ExportedGlobal';
duty_cycle_table.DataType = 'uint16';
duty_cycle_table.Dimensions = arraySize;
duty_cycle_table.InitialValue = ['[' num2str(sineTable) ']'];