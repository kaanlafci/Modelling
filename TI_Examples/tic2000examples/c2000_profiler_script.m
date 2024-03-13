function c2000_profiler_script(~)
%C2000_PROFILER_SCRIPT Helper function to open a profiler model and get
%profiling data.

%   Copyright 2008-2009 The MathWorks, Inc.

%Generates and profiles code for the current active model

% Generate code
rtwbuild(bdroot); 
% Pause for a period of 10 secs
pause(10);
% Get IDE_Obj from base workspace
objName = get_param(bdroot, 'ideObjName');
cc_obj = evalin('base', objName);
% Halt and profile code
cc_obj.halt;
profile(cc_obj, 'execution', 'report');
