% Data Initialization for c28035pmsmfoc example

%   Copyright 2013-2017 MathWorks, Inc.

% Processor Frequency
CPU_frequency = 60e6; %(Hz)

% PMS Motor Pole Pairs
Pole_pairs = 4;
motor.rs = 0.79; % Stator resistance (ohm)
motor.rr = 0; % Rotor resistance (ohm)
motor.ls = 0.0012; % Stator inductance (H)
motor.lr = 0; % Rotor inductance (H)
motor.lm = 0; % Magnetizing inductance (H)
motor.base_voltage = 38.29; % Base peak phase voltage (volt), maximum measurable DC Bus(66.32V)/sqrt(3)
motor.base_current = 8.6; % Base peak phase current (amp) , maximum measurable peak current
motor.base_freq = 200; % Base electrical frequency (Hz)

% PWM Settings
PWM_frequency = 20e3; %(Hz)
PWM_Counter_Period = CPU_frequency/PWM_frequency/2; %(PWM timer counts)

% Speed Per Unit Scaler
Speed_per_unit_scaler = 1200; %(+/-1200rpm <=> +/-1 in Q format)

% Hall Sensors
Speed_rpm_scaler = 60*CPU_frequency/Pole_pairs/2; %(Speed_rpm_scaler/number of speed counts = RPM)
Hall_position_offset = 0.57; %(per unit format: 1 <=> one electrical revolution)

% SMO
Max_ideal_measurable_speed = 20000;
Speed_loop_delay = floor(60*PWM_frequency/Pole_pairs/2/Max_ideal_measurable_speed);
Max_measurable_speed = 60*PWM_frequency/Pole_pairs/2/Speed_loop_delay;
Speed_loop_to_PU_scaler = Max_measurable_speed/Speed_per_unit_scaler;
SMO_params.Fsmopos = exp(-motor.rs/motor.ls/PWM_frequency);
SMO_params.Gsmopos = motor.base_voltage/motor.base_current/motor.rs*(1-SMO_params.Fsmopos);
SMO_params.Kslide = 0.05; %0.15; % Sliding control gain
SMO_params.Kslf = 0.1; % Sliding control filter gain
SMO_params.E0 = 0.5;
