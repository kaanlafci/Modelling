function setParamCallback(modelname)
%SETPARAMCALLBACK Set Model parameters according to block settings

% Copyright 2006-2013 The MathWorks, Inc.


editparamblk = find_system(modelname,'Type','Block','MaskType','Edit Parameters');
if (length(editparamblk) == 1) 
    polePairs = str2double(get_param(editparamblk{1},'polePairs'));
    encoderResolution = str2double(get_param(editparamblk{1},'encoderResolution'));
    indexOffset = str2double(get_param(editparamblk{1},'IndexOffset'));   
    
    assignin('base', 'polePairs', polePairs);
    assignin('base', 'encoderResolution', encoderResolution);
    assignin('base', 'indexOffset', indexOffset);
else
    DAStudio.error('TIC2000:blocks:EditParameterBlockInstance');
end