% Model         :   Open Loop Control of 3-phase motors
% Description   :   Set Parameters for Open Loop Control of 3-phase motors
% File name     :   mcb_c2000_open_loop_control_data.m

% Copyright 2021 The MathWorks, Inc.

%% Set parameters from Dashboard selection
PWM_frequency = eval(get_param([bdroot '/Open Loop Control/Parameters/PWM Frequency'], 'Value'));               %Hz   PWM frquency
motor.polePairs     = eval(get_param([bdroot '/Open Loop Control/Parameters/Number of pole pairs'], 'Value'));  %     Pole Pairs for the motor
motor.base_speed    = eval(get_param([bdroot '/Open Loop Control/Parameters/Base Speed'], 'Value'));            %rpm  Rated speed (Synchronous Speed)
% For f28035 and f28027 processor
dataType = fixdt(1,32,17);
%% Derive paramters for the model
T_pwm           = 1/PWM_frequency;  %[sec] PWM switching time period
Ts          	= T_pwm;            %[sec] Sample time for controller
motor.base_freq     = motor.base_speed*motor.polePairs/60; % Derive motor base frequency


%% Variables for algorithm Export / customized models 

% PWM_frequency         = 20000;            % Hz
% motor.polePairs       = 4;                % Number of pole pairs
% motor.base_speed      = 4000;             % Base speed of the motor
% dataType              = 'single';         % Data type used in algorithm is floating poinnt
% % dataType            = fixdt(1,32,17);   % Data type used in algorithm is fixed point
% inverter.EnableLogic  = 1;                % Active high enable inverter: 1, Active low enable: 0
% T_pwm                 = 1/PWM_frequency;  %[sec] PWM switching time period
% Ts                    = T_pwm;            %[sec] Sample time for controller
% motor.base_freq       = motor.base_speed*motor.polePairs/60; % Derive motor base frequency