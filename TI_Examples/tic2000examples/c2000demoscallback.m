function c2000demoscallback(varargin)
% This MATLAB file is set as a callback for all the TIC6000 demos. When the demo
% model opens, this callback executes. For now, we check if Embedded
% Coder is installed, and if it does, we switch the model to use
% ti_c6000_ert.tlc target, else ti_c6000.tlc target.

% Copyright 2003-2010 The MathWorks, Inc.

try
    ert_to_grt_switch(gcs, linkfoundation.util.getSTFName('grt'), linkfoundation.util.getSTFName('ert'));
catch
    % model will use GRT instead
    % when we use backward compatibility tool the warning will show
    % unnecessarily since the switch above will always fail due to
    % target being c2000_ert or c2000_grt
    % warning('Cannot auto-set system target file.');
end

