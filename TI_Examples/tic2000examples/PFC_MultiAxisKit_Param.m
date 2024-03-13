% Data Initialization for PFC using Multi-Axis DMC Kit example

%   Copyright 2019 MathWorks, Inc.

Vin_peak = 15*sqrt(2); % Peak value of input AC voltage (V)
fin = 50; % Input AC voltage frequency (Hz)
L_boost = 56e-6; % Boost converter inductance (H)
C_boost = 3000e-6; % Boost converter capacitance (F)
C_filter = 880e-6; % Additional capacitance on the kit (F)
f_PWM = 100000; %PWM frequency (Hz)
Ts_plant = 2e-7; %Plant sample time
Ts_control = 2e-5; %Controller sample time