% Script to setup Simulink data objects used by ASAP2 / CCP

%   Copyright 2003-2015 The MathWorks, Inc.
 
% canlib.Signal for DAQ List Signal Monitoring
COUNTER_SIGNAL = canlib.Signal;
COUNTER_SIGNAL.Description = 'Count in seconds';
COUNTER_SIGNAL.DocUnits = 'count';
COUNTER_SIGNAL.Min = 0;
COUNTER_SIGNAL.Max = 10000;
COUNTER_SIGNAL.DataType = 'uint16';
 
% Simulink.Parameter for Parameter Tuning
STEP_PARAM = tic2000demospkg.Parameter;
STEP_PARAM.Value = 1;
STEP_PARAM.CoderInfo.StorageClass = 'Custom';
STEP_PARAM.CoderInfo.Alias = '';
STEP_PARAM.CoderInfo.Alignment = -1;
STEP_PARAM.CoderInfo.CustomStorageClass = 'const_data_ramfuncs';
STEP_PARAM.Description = '';
STEP_PARAM.DataType = 'uint16';
STEP_PARAM.Min = [];
STEP_PARAM.Max = [];
STEP_PARAM.DocUnits = '';

% canlib.Signal for DAQ List Signal Monitoring
SINE_SIGNAL = canlib.Signal;
SINE_SIGNAL.Description = 'Sine Wave Signal';
SINE_SIGNAL.DocUnits = '';
SINE_SIGNAL.Min = -128;
SINE_SIGNAL.Max = 127;
SINE_SIGNAL.DataType = 'int8';

% canlib.Signal for DAQ List Signal Monitoring
PULSE_SIGNAL = canlib.Signal;
PULSE_SIGNAL.Description = 'Step signal';
PULSE_SIGNAL.DocUnits = '';
PULSE_SIGNAL.Min = 0;
PULSE_SIGNAL.Max = 65000;
PULSE_SIGNAL.DataType = 'uint16';

% canlib.Signal for DAQ List Signal Monitoring
RANDOM1 = canlib.Signal;
RANDOM1.Description = '';
RANDOM1.DocUnits = '';
RANDOM1.Min = 0;
RANDOM1.Max = 10;
RANDOM1.DataType = 'uint8'; 

% canlib.Signal for DAQ List Signal Monitoring
RANDOM2 = canlib.Signal;
RANDOM2.Description = '';
RANDOM2.DocUnits = '';
RANDOM2.Min = 0;
RANDOM2.Max = 10;
RANDOM2.DataType = 'uint8'; 
