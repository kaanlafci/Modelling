%% Data Dictionary for F28335 Permanent Magnet Synchronous Machine Controller Example
% Contains data used by both the motor and controller.

%   Copyright 2011-2017 The MathWorks, Inc.

%% Create structure of motor attributes
pmsm = struct;
pmsm.StatorPhaseResistance = 0.8/2;     % Ohms
pmsm.InductanceLd = 0.6e-3;             % Henries
pmsm.InductanceLq = pmsm.InductanceLd;  % Henries
pmsm.TorqueConstant = 0.035308;         % N m / A_peak
pmsm.Inertia = 4.801855e-6;             % Kg m^2
pmsm.ViscousDamping = 1.301336e-5;      % N m s
pmsm.StaticFriction = 0;                % N m
pmsm.PolePairs = 4;

pmsm.ThetaInitDegrees = 19.66;
pmsm.ElectricalZeroPhaseOffsetRads = -(pi/2)/pmsm.PolePairs;

%% Sensor attributes
% Hardware ADC sensor measures negative current then goes through an
% inverting amplifier
sensors = struct;
sensors.ADC.Bits = 12;
sensors.ADC.AmpsToVolts = (-1) * (-3/20);
sensors.ADC.BiasVolts = 1.65;
sensors.ADC.MaxDriverUnits = (2^sensors.ADC.Bits -1);
sensors.ADC.VoltsToDriverUnits = sensors.ADC.MaxDriverUnits/3;
sensors.ADC.NoiseEnable = false;
sensors.ADC.NoiseLevelDriverUnits = 4;
sensors.ADC.NoiseOffsetDriverUnits = 3;

sensors.Encoder.InitialAngleRads = 0;
sensors.Encoder.MechanicalToEncoderZeroOffsetRads = 0;
sensors.Encoder.PositionValidAtStartup = false;

%% Create constants which will not change during simulation or code generation
% Sample times of high and low rate controller operations
ctrlConst = struct;
ctrlConst.TsHi = 40e-6;
ctrlConst.TsLo =  5e-3;

% Maximum value for PWM counter (100% Duty Cycle)
ctrlConst.PwmCountsPerRevolution = 3000;

% DC bus voltage supplied to inverter
ctrlConst.BusVoltage = 24;
ctrlConst.VoltageLimit = ctrlConst.BusVoltage/2; % Volts
ctrlConst.CurrentLimit = 20; % Amps

% Encoder attributes
ctrlConst.EncoderCountsPerRevolution = 8000;

%% Create tunable controller parameter structure for code generation
ctrlParams = struct;

% Controller values tuned in simulation
ctrlParams.Current_P             = single(0.01);
ctrlParams.Current_I             = single(0.6);
ctrlParams.Velocity_P            = single(1.0);
ctrlParams.Velocity_I            = single(5.0);
ctrlParams.Position_P            = single(0.1);
ctrlParams.Position_I            = single(0.6);

%%
% Open loop startup state parameters
ctrlParams.StartupAcceleration = single(1); % Radians per second squared
ctrlParams.StartupCurrent = single(12);    % Amps

% Velocity threshold used to determine if motor has slowed enough
% to move into stand by state
ctrlParams.RampToStopVelocity = single(20);

%% ADC Parameters
ctrlParams.AdcZeroOffsetDriverUnits = single(...
    sensors.ADC.VoltsToDriverUnits * sensors.ADC.BiasVolts);

ctrlParams.AdcDriverUnitsToAmps = single(...
    (1/sensors.ADC.VoltsToDriverUnits) * ...
    (1/sensors.ADC.AmpsToVolts));

%% Encoder Parameters
% Offset between encoder index pulse and electrical zero
% Ideally this is the negative of the constant used in the plant model.
% Having a separate variable enables introduction of error to test
% robustness of the controller.
ctrlParams.EncoderToMechanicalZeroOffsetRads = single(...
    -sensors.Encoder.MechanicalToEncoderZeroOffsetRads);

%% Motor Parameters
ctrlParams.PmsmPolePairs = single(pmsm.PolePairs);

%% Create sensors bus
clear SENSORS_STRUCT
SENSORS_STRUCT.adc_phase_currents = uint16([0;0]);
SENSORS_STRUCT.encoder_valid      = uint16(0);
SENSORS_STRUCT.encoder_counter    = uint16(0);

tmp_BusName = Simulink.Bus.createObject(SENSORS_STRUCT);
tmp_Bus = evalin('base',tmp_BusName.busName);
evalin('base',['clear ' tmp_BusName.busName]);
assignin('base','SENSORS_STRUCT',tmp_Bus);
clear tmp_BusName tmp_Bus

%% Create parameter structure in generated code
tmp_P = Simulink.Parameter;
tmp_P.Value=ctrlParams;
tmp_P.RTWInfo.StorageClass='ExportedGlobal';
ctrlParams = tmp_P;
clear tmp_P

tmp_BusInfo = Simulink.Bus.createObject(ctrlParams.Value);
CTRLPARAMS_STRUCT = eval(tmp_BusInfo.busName);
ctrlParams.DataType='Bus: CTRLPARAMS_STRUCT';
clear(tmp_BusInfo.busName);
clear tmp_BusInfo;

%% Create enumerated types
if exist('EnumControllerMode','class')~=8
    Simulink.defineIntEnumType('EnumControllerMode',...
        {'StandBy','Startup','TorqueControl','VelocityControl','PositionControl'},...
        [0,1,2,3,4]);
end
if exist('EnumCommandType','class')~=8
    Simulink.defineIntEnumType('EnumCommandType',...
        {'Torque','Velocity','Position'},...
        [0,1,2]);
end
if exist('EnumErrorType','class')~=8
    Simulink.defineIntEnumType('EnumErrorType',...
        {'NoError','MeasuredVelocityError'},...
        [0,1]);
end
 



