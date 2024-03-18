% Sampling Time for the Plant
Ts = 5e-8;

% Sampling Time for the Controller
Tcont = 5e-6;

%PWM Switching Time period
Tpwm = 5e-6;
FPWM = 200e3;              % PWM Frequency

%Output Voltage scaling
VSF = 0.493;

%Inductor Current Scaling
Gi = 0.439;

%Conversion to per unit
Gpu = 1/3;

% PWM 200Khz switching Frequency Period Count = 200Mhz/(200Khz) = 1000
TBPRD = 1000;