
clc;
clear;
% Gerekli girişlerin tanımlanması
tqTqReq = 2000; % nm
tqEmMaxNp1 = 2500; % nm
tqBattDeraMotLim = 1800; % nm
tqMotTempDeraMax = 2200; % nm
tqMotTempDeraMin = 1500; % nm
facMotTempDera = 0.8;
tqSpLimMax = 3000; % nm
tqSpLimMin = -3000; % nm

% Tork sınırlarının belirlenmesi
tqLimMotor = min([tqTqReq, tqEmMaxNp1, tqBattDeraMotLim, tqMotTempDeraMax, tqMotTempDeraMin * facMotTempDera])
tqLimGenerator = max([tqTqReq, tqEmMaxNp1, tqBattDeraMotLim, tqMotTempDeraMax, tqMotTempDeraMin * facMotTempDera])

% Gradyan sınırlayıcı faktörlerinin tanımlanması
facGrdLimrUlim_C = 50000;
facGrdLimrLlim_C = -50000;

% Gradyan sınırlayıcı hesaplamaları
tqDeraMot = min(tqLimMotor, tqSpLimMax / facGrdLimrUlim_C)
tqDeraGen = max(tqLimGenerator, tqSpLimMin / facGrdLimrLlim_C)

% Arbitrasyon
if tqTqReq < 0
    tqSpLim = tqDeraGen
else
    tqSpLim = tqDeraMot
end

% De-rating faktörünün hesaplanması
deratingFactor = tqTqReq / tqSpLim

% De-rating durumunun hesaplanması
% Burada belirli koşullara göre de-rating durumu hesaplanabilir, ancak detaylı bir koşul belirtilmemiş.
% Bu nedenle, de-rating durumu doğrudan belirli bir değere atandı.
deratingStatus = 1; % Örnek bir değer

% Sonuçların görüntülenmesi
disp(['Limited Torque Setpoint (tqSpLim): ' num2str(tqSpLim)])
disp(['Derated Torque for Motor Mode (tqDeraMot): ' num2str(tqDeraMot)])
disp(['Derating Factor: ' num2str(deratingFactor)])
disp(['Derating Status: ' num2str(deratingStatus)])