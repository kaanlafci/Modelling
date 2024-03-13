% Model         :   PMSM Field Oriented Control
% Description   :   Set Parameters for PMSM Field Oriented Control
% File name     :   mcb_pmsm_foc_hall_hvkit_f28069m_data.m

% Copyright 2021 The MathWorks, Inc.

%% Set PWM Switching frequency
PWM_frequency 	= 20e3;    %Hz          // converter s/w freq
T_pwm           = 1/PWM_frequency;  %s  // PWM switching time period

%% Set Sample Times
Ts          	= T_pwm;        %sec        // Sample time for control system
Ts_simulink     = T_pwm/2;      %sec        // Simulation time step for model simulation
Ts_motor        = T_pwm/2;      %Sec        // Simulation time step for pmsm
Ts_inverter     = T_pwm/2;      %sec        // Simulation time step for inverter
Ts_speed        = 10*Ts;        %Sec        // Sample time for speed controller

%% Set data type for controller & code-gen
%dataType = fixdt(1,32,17);    % Fixed point code-generation
dataType = 'single';
%% System Parameters // Hardware parameters

pmsm = mcb_SetPMSMMotorParameters('BLY171D');
%pmsm = mcb_SetPMSMMotorParameters('Teknic2310P');
pmsm.PositionOffset = 0.8975;     % Per-Unit position offset

%% Target & Inverter Parameters

target = mcb_SetProcessorDetails('F28069M',PWM_frequency);

inverter.model         = 'HVKit Inverter'; 	% 		// Manufacturer Model Number
inverter.sn            = 'INV_XXXX';        % 		// Manufacturer Serial Number
inverter.V_dc          = 24;       			%V      // DC Link Voltage of the Inverter
inverter.I_trip        = 12;      			%Amps   // Max current for trip
inverter.Rds_on        = 80e-3;    			%Ohms   // Rds ON for inverter
inverter.Rshunt        = 0.020;    			%Ohms   // Rshunt for inverter
inverter.MaxADCCnt     = 4095;     			%Counts // ADC Counts Max Value
inverter.CtSensAOffset = 2048;        		%Counts // ADC Offset for phase-A
inverter.CtSensBOffset = 2048;        		%Counts // ADC Offset for phase-B
inverter.ADCGain       = 1;        			%       // ADC Gain factor scaled by SPI
inverter.EnableLogic   = 1;    				% 		// Active high for enable pin of inverter
inverter.invertingAmp  = 1;  				% 		// Inverting current measurement amplifier
inverter.R_board        = inverter.Rds_on + inverter.Rshunt/3;  %Ohms
inverter.ISenseVref    = 3.3;					%V 		// Voltage ref of inverter current sense circuit
inverter.ISenseVoltPerAmp = 0.165;				%V/Amps // Current sense voltage output per 1 A current (Rshunt * iSense op-amp gain)
inverter.ISenseMax     = inverter.ISenseVref/(2*inverter.ISenseVoltPerAmp); %Amps // Maximum Peak-Neutral current that can be measured by inverter current sense

%% Derive Characteristics
pmsm.N_base = mcb_getBaseSpeed(pmsm,inverter); %rpm // Base speed of motor at given Vdc

% mcb_getCharacteristics(pmsm,inverter);

%% PU System details // Set base values for pu conversion

PU_System = mcb_SetPUSystem(pmsm,inverter);

%% Controller design // Get ballpark values!

PI_params = mcb.internal.SetControllerParameters(pmsm,inverter,PU_System,T_pwm,Ts,Ts_speed);

%Updating delays for simulation
PI_params.delay_Currents    = int32(Ts/Ts_simulink);
PI_params.delay_Position    = int32(Ts/Ts_simulink);
PI_params.delay_Speed       = int32(Ts_speed/Ts_simulink);
PI_params.delay_Speed1      = (PI_params.delay_IIR + 0.5*Ts)/Ts_speed;

% mcb_getControlAnalysis(pmsm,inverter,PU_System,PI_params,Ts,Ts_speed); 

%% Displaying model variables
disp(pmsm);
disp(inverter);
disp(target);
disp(PU_System);
