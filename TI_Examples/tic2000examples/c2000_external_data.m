% Script to setup Simulink data objects used by ASAP2 / CCP

%   Copyright 2008-2009 The MathWorks, Inc.
 
% canlib.Signal for DAQ List Signal Monitoring
POSITION_SIGNAL = canlib.Signal;
POSITION_SIGNAL.Description = 'Count in CAP interrupt';
POSITION_SIGNAL.DocUnits = 'count';
POSITION_SIGNAL.Min = 0;
POSITION_SIGNAL.Max = 65535;
POSITION_SIGNAL.DataType = 'uint32';
 
% canlib.Signal for DAQ List Signal Monitoring
KNOB_SIGNAL = canlib.Signal;
KNOB_SIGNAL.Description = 'ADC Voltage Value';
KNOB_SIGNAL.DocUnits = 'count';
KNOB_SIGNAL.Min = 0;
KNOB_SIGNAL.Max = 65535;
KNOB_SIGNAL.DataType = 'uint32';
