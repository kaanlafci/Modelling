###########################################################################
## Makefile generated for component 'DCDC_Buck'. 
## 
## Makefile     : DCDC_Buck.mk
## Generated on : Sat Mar 16 15:03:17 2024
## Final product: $(RELATIVE_PATH_TO_ANCHOR)/DCDC_Buck.out
## Product type : executable
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile

PRODUCT_NAME              = DCDC_Buck
MAKEFILE                  = DCDC_Buck.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2021b
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2021b/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = C:/Users/win/Desktop/GitHub/Modelling/Modelling/07_Interleaved_Buck
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = TI C28x
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ..
C_STANDARD_OPTS           = 
CPP_STANDARD_OPTS         = 
LIBSSC_SLI_OBJS           = ./ssc_sli_0267402d.obj ./ssc_sli_0763c151.obj ./ssc_sli_0bd269e6.obj ./ssc_sli_0d6d0780.obj ./ssc_sli_136b443c.obj ./ssc_sli_136f97a1.obj ./ssc_sli_140b3534.obj ./ssc_sli_15d5f6ce.obj ./ssc_sli_1c690f90.obj ./ssc_sli_1db813e8.obj ./ssc_sli_256cd4b6.obj ./ssc_sli_2bbd58a4.obj ./ssc_sli_2f6ea1cd.obj ./ssc_sli_360cfd63.obj ./ssc_sli_3fb4607e.obj ./ssc_sli_40d56d93.obj ./ssc_sli_42b14021.obj ./ssc_sli_43618287.obj ./ssc_sli_466b08dd.obj ./ssc_sli_496799bd.obj ./ssc_sli_4e028390.obj ./ssc_sli_51dbd3b5.obj ./ssc_sli_550a4805.obj ./ssc_sli_5a0cb974.obj ./ssc_sli_5d63aeeb.obj ./ssc_sli_62d81790.obj ./ssc_sli_77063d8b.obj ./ssc_sli_7a618260.obj ./ssc_sli_7f65db03.obj ./ssc_sli_880e593a.obj ./ssc_sli_89d0f30a.obj ./ssc_sli_8a64c4e2.obj ./ssc_sli_93019ea6.obj ./ssc_sli_9abcdb7f.obj ./ssc_sli_9b67747c.obj ./ssc_sli_9c030181.obj ./ssc_sli_c7dda239.obj ./ssc_sli_d064c978.obj ./ssc_sli_d80c44d2.obj ./ssc_sli_dcd66f69.obj ./ssc_sli_e66fe6d5.obj ./ssc_sli_e7b327bb.obj ./ssc_sli_eb0a5702.obj ./ssc_sli_edbee55c.obj ./ssc_sli_f6bd9cc8.obj ./ssc_sli_f9b5dbc5.obj ./ssc_sli_fa0ce53e.obj ./ssc_sli_fbdf29da.obj
LIBSSC_CORE_OBJS          = ./ssc_core_01dcc633.obj ./ssc_core_04da2c69.obj ./ssc_core_05058dd9.obj ./ssc_core_06ba68a6.obj ./ssc_core_09b5fa6e.obj ./ssc_core_0bd666aa.obj ./ssc_core_0d65be6c.obj ./ssc_core_0f019bd9.obj ./ssc_core_0f0420a6.obj ./ssc_core_18bf4d77.obj ./ssc_core_1b0cafd5.obj ./ssc_core_1c6b0332.obj ./ssc_core_1fd25120.obj ./ssc_core_24b4cdee.obj ./ssc_core_2568b075.obj ./ssc_core_280c0222.obj ./ssc_core_2cd54448.obj ./ssc_core_3169e4b7.obj ./ssc_core_32d8b307.obj ./ssc_core_360a4baf.obj ./ssc_core_37d4ea84.obj ./ssc_core_40dfdbdc.obj ./ssc_core_41017299.obj ./ssc_core_4666b45b.obj ./ssc_core_48b08af1.obj ./ssc_core_48b1386a.obj ./ssc_core_4965213d.obj ./ssc_core_4ad9135b.obj ./ssc_core_4db6bd68.obj ./ssc_core_4db86fcc.obj ./ssc_core_4e03e39d.obj ./ssc_core_4e04eecd.obj ./ssc_core_4e06e3bd.obj ./ssc_core_54d55ae9.obj ./ssc_core_5505224d.obj ./ssc_core_56b1a2bf.obj ./ssc_core_576cd129.obj ./ssc_core_59b034b8.obj ./ssc_core_5a046b27.obj ./ssc_core_5d6ba758.obj ./ssc_core_60b0e4dc.obj ./ssc_core_67d1f118.obj ./ssc_core_68da074b.obj ./ssc_core_6b663a17.obj ./ssc_core_6b6b89d2.obj ./ssc_core_6dd833f3.obj ./ssc_core_7209d3a5.obj ./ssc_core_73d9c2b7.obj ./ssc_core_76d825be.obj ./ssc_core_770cead7.obj ./ssc_core_79dd08ab.obj ./ssc_core_7a613edb.obj ./ssc_core_83db8762.obj ./ssc_core_856738f2.obj ./ssc_core_8569edc5.obj ./ssc_core_89d7fa79.obj ./ssc_core_8a6471dc.obj ./ssc_core_8cd9cb37.obj ./ssc_core_8d0064b8.obj ./ssc_core_96061071.obj ./ssc_core_97d767fe.obj ./ssc_core_990fe1a4.obj ./ssc_core_9b607b15.obj ./ssc_core_9b671e57.obj ./ssc_core_9c016445.obj ./ssc_core_9c01d168.obj ./ssc_core_9dd110ad.obj ./ssc_core_9fb0e229.obj ./ssc_core_9fb25b4f.obj ./ssc_core_9fb2e56c.obj ./ssc_core_a1d393be.obj ./ssc_core_a269ab09.obj ./ssc_core_a4d4c45e.obj ./ssc_core_a4da1d0a.obj ./ssc_core_a6b78ccc.obj ./ssc_core_a76299bc.obj ./ssc_core_a867d880.obj ./ssc_core_a9bf1ff2.obj ./ssc_core_aa09f23c.obj ./ssc_core_abd05c18.obj ./ssc_core_abd5e7b4.obj ./ssc_core_acb64294.obj ./ssc_core_acb6462e.obj ./ssc_core_b1038cbb.obj ./ssc_core_b10e34f4.obj ./ssc_core_b2b3b239.obj ./ssc_core_b369cd13.obj ./ssc_core_b402b40d.obj ./ssc_core_b7b88213.obj ./ssc_core_b96ebc21.obj ./ssc_core_bad68669.obj ./ssc_core_bc648043.obj ./ssc_core_bfdb08db.obj ./ssc_core_c3003040.obj ./ssc_core_c5b050d7.obj ./ssc_core_c5b63cb2.obj ./ssc_core_c607b660.obj ./ssc_core_c8d33536.obj ./ssc_core_c8d83e88.obj ./ssc_core_cab615c8.obj ./ssc_core_cabdc251.obj ./ssc_core_cc067f58.obj ./ssc_core_cc0bcab0.obj ./ssc_core_ce6a84bb.obj ./ssc_core_d06d763c.obj ./ssc_core_d3d34d7c.obj ./ssc_core_d4b9397b.obj ./ssc_core_d70a6a09.obj ./ssc_core_d807fa59.obj ./ssc_core_dcda6edd.obj ./ssc_core_deb7fd8d.obj ./ssc_core_e0d0866d.obj ./ssc_core_e2b61d72.obj ./ssc_core_e400c1c2.obj ./ssc_core_ead8f455.obj ./ssc_core_edb836de.obj ./ssc_core_ee000fbe.obj ./ssc_core_ee01086d.obj ./ssc_core_ee0f0141.obj ./ssc_core_f9b6dbed.obj ./ssc_core_fa09e9e6.obj ./ssc_core_fbd34e62.obj ./ssc_core_ff06d9a4.obj
LIBNE_OBJS                = ./ne_59b4e14a.obj
LIBMC_OBJS                = ./mc_026e4f4b.obj ./mc_03b98f6f.obj ./mc_0764157d.obj ./mc_0bd30dee.obj ./mc_0d6fd085.obj ./mc_0ed73c49.obj ./mc_0edc34e3.obj ./mc_10d4ab75.obj ./mc_11086079.obj ./mc_110e6c6c.obj ./mc_140e3c4c.obj ./mc_15d12d95.obj ./mc_15d828ca.obj ./mc_220ba961.obj ./mc_2565d6e0.obj ./mc_2a642f54.obj ./mc_2a6a9b24.obj ./mc_2bbf87e3.obj ./mc_2cdc96b4.obj ./mc_32d501e3.obj ./mc_32dc008a.obj ./mc_3b6a945d.obj ./mc_3e66abdf.obj ./mc_4105189f.obj ./mc_47b8cebe.obj ./mc_47b91db1.obj ./mc_4b0301c6.obj ./mc_4c6117e3.obj ./mc_51d4094e.obj ./mc_52623861.obj ./mc_52688a58.obj ./mc_53b1fc84.obj ./mc_53b6fcf3.obj ./mc_550847c3.obj ./mc_5766048f.obj ./mc_59b6e413.obj ./mc_5bd2c9c1.obj ./mc_5d65cd86.obj ./mc_5edd42ef.obj ./mc_630208f8.obj ./mc_630dda0e.obj ./mc_67da200d.obj ./mc_67da4f41.obj ./mc_6b6d311a.obj ./mc_6e61d16c.obj ./mc_6fb1c336.obj ./mc_7809a65c.obj ./mc_7a613aec.obj ./mc_7bbf41f0.obj ./mc_7cd58f0b.obj ./mc_7cdbe436.obj ./mc_7d0547c8.obj ./mc_7d099de7.obj ./mc_7eb21b39.obj ./mc_81b0ada5.obj ./mc_81b5717e.obj ./mc_81bc7943.obj ./mc_870ec75e.obj ./mc_89d597cf.obj ./mc_90b6aa0a.obj ./mc_95b62b73.obj ./mc_9ab7d9b0.obj ./mc_9b6376d1.obj ./mc_9b6c1529.obj ./mc_a2647600.obj ./mc_a26bab1a.obj ./mc_a3b90582.obj ./mc_a7684938.obj ./mc_a865d1dd.obj ./mc_acb3fad7.obj ./mc_af0bc203.obj ./mc_af0cc4c9.obj ./mc_b0de9cbc.obj ./mc_b362c5eb.obj ./mc_b7b03d44.obj ./mc_b96a0bad.obj ./mc_bb0520ee.obj ./mc_bdbb9b78.obj ./mc_c2dbf4b2.obj ./mc_c8d25d23.obj ./mc_cab8a1f9.obj ./mc_ce6656ce.obj ./mc_d20085b7.obj ./mc_d9d38185.obj ./mc_dbbb14d2.obj ./mc_dcdddfae.obj ./mc_debb448f.obj ./mc_e7b99cf6.obj ./mc_e7bc2f1a.obj ./mc_e969ae87.obj ./mc_edbf543c.obj ./mc_ee000fbe.obj ./mc_efdea3a7.obj ./mc_f0012953.obj ./mc_f00d2f9b.obj ./mc_f3be157c.obj ./mc_fbd54145.obj ./mc_fcb15a9b.obj ./mc_fd619d14.obj ./mc_fd6341bb.obj
LIBEX_OBJS                = ./ex_04d5441d.obj ./ex_0d6d0784.obj ./ex_136645f8.obj ./ex_17bc61ac.obj ./ex_18b4440a.obj ./ex_1b03ca17.obj ./ex_2ebcd5b2.obj ./ex_316a81de.obj ./ex_36012fa7.obj ./ex_40d5be33.obj ./ex_47b11894.obj ./ex_57660158.obj ./ex_690b7cd0.obj ./ex_770385e6.obj ./ex_79d100f1.obj ./ex_8a6fc761.obj ./ex_98d223a6.obj ./ex_aed5de1e.obj ./ex_b2b40ad5.obj ./ex_bb0efd4b.obj ./ex_bfdb009c.obj ./ex_c9069dae.obj ./ex_d9d686a8.obj ./ex_debffef2.obj ./ex_e40d74b8.obj ./ex_eb0d559b.obj ./ex_f6bb4c2d.obj ./ex_f866102d.obj ./slu_stubbed_definitions.obj
LIBPM_OBJS                = ./pm_09bc42e2.obj ./pm_14098e54.obj ./pm_26dc3230.obj ./pm_4fd5f5b9.obj ./pm_fed8c2c9.obj

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          Texas Instruments Code Composer Studio (C2000)
# Supported Version(s):    
# ToolchainInfo Version:   2021b
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# CCSINSTALLDIR
# CCSSCRIPTINGDIR
# TARGET_LOAD_CMD_ARGS
# TIF28XXXSYSSWDIR

#-----------
# MACROS
#-----------

TARGET_SCRIPTINGTOOLS_INSTALLDIR = $(CCSSCRIPTINGDIR)
TI_C2000_SHARED_DIR              = $(TARGET_PKG_INSTALLDIR)/../../../shared/supportpackages/tic2000
TI_TOOLS                         = $(CCSINSTALLDIR)/bin
TI_INCLUDE                       = $(CCSINSTALLDIR)/include
TI_LIB                           = $(CCSINSTALLDIR)/lib
F28_HEADERS                      = $(TIF28XXXSYSSWDIR)/~SupportFiles/DSP280x_headers
CCOUTPUTFLAG                     = --output_file=
LDOUTPUTFLAG                     = --output_file=
EXE_FILE_EXT                     = $(PROGRAM_FILE_EXT)
PRODUCT_HEX                      = $(RELATIVE_PATH_TO_ANCHOR)/$(PRODUCT_NAME).hex
PRODUCT_DWO                      = $(RELATIVE_PATH_TO_ANCHOR)/$(PRODUCT_NAME).dwo
PRODUCT_ELF                      = $(RELATIVE_PATH_TO_ANCHOR)/$(PRODUCT_NAME).elf
DOWN_EXE_JS                      = $(TARGET_PKG_INSTALLDIR)/tic2000/CCS_Config/runProgram_generic.js
CCS_CONFIG                       = $(TARGET_PKG_INSTALLDIR)/tic2000/CCS_Config/f28x_generic.ccxml
SHELL                            = %SystemRoot%/system32/cmd.exe

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = 

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# Assembler: C2000 Assembler
AS_PATH = $(TI_TOOLS)
AS = "$(AS_PATH)/cl2000"

# C Compiler: C2000 C Compiler
CC_PATH = $(TI_TOOLS)
CC = "$(CC_PATH)/cl2000"

# Linker: C2000 Linker
LD_PATH = $(TI_TOOLS)
LD = "$(LD_PATH)/cl2000"

# C++ Compiler: C2000 C++ Compiler
CPP_PATH = $(TI_TOOLS)
CPP = "$(CPP_PATH)/cl2000"

# C++ Linker: C2000 C++ Linker
CPP_LD_PATH = $(TI_TOOLS)
CPP_LD = "$(CPP_LD_PATH)/cl2000"

# Archiver: C2000 Archiver
AR_PATH = $(TI_TOOLS)
AR = "$(AR_PATH)/ar2000"

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Hex Converter: Hex Converter

# DWO Converter: DWO Converter

# Download: Download
DOWNLOAD_PATH = $(TARGET_SCRIPTINGTOOLS_INSTALLDIR)/bin
DOWNLOAD = "$(DOWNLOAD_PATH)/dss.bat"

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%\bin\win64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

ASDEBUG             = -g
AS_OUTPUT_FLAG      = --output_file=
CDEBUG              = -g
C_OUTPUT_FLAG       = --output_file=
LDDEBUG             =
OUTPUT_FLAG         = --output_file=
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = --output_file=
CPPLDDEBUG          =
OUTPUT_FLAG         = --output_file=
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @del /F
ECHO                = @echo
MV                  = @move
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =



#---------------------------
# Model-Specific Options
#---------------------------

ASFLAGS = --abi=coffabi -s -v28 -ml $(ASFLAGS_ADDITIONAL)

CFLAGS = --abi=coffabi --compile_only --preproc_dependency="$(@:%.obj=%.dep)" --preproc_with_compile  --large_memory_model --silicon_version=28 --define="LARGE_MODEL" -I"$(F28_HEADERS)" -I"$(F28_HEADERS)/include" -I"$(TI_INCLUDE)" -g

LDFLAGS = --abi=coffabi -z -I$(TI_LIB) --stack_size=$(STACK_SIZE) --warn_sections --heap_size=$(HEAP_SIZE) --reread_libs --rom_model --priority -m"$(PRODUCT_NAME).map"

SHAREDLIB_LDFLAGS = 

CPPFLAGS = -g

CPP_LDFLAGS = 

CPP_SHAREDLIB_LDFLAGS = 

ARFLAGS = -r

OBJCOPYFLAGS_HEX = -i "$<" -o "$@" -order MS -romwidth 16 -q

OBJCOPYFLAGS_DWO = "$<"

DOWNLOAD_FLAGS = $(TARGET_LOAD_CMD_ARGS) $(PRODUCT)

EXECUTE_FLAGS = 

MAKE_FLAGS = -f $(MAKEFILE)

###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = $(RELATIVE_PATH_TO_ANCHOR)/DCDC_Buck.out
PRODUCT_TYPE = "executable"
BUILD_TYPE = "Top-Level Standalone Executable"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = -I$(START_DIR) -I$(START_DIR)/DCDC_Buck_ert_rtw -I$(MATLAB_ROOT)/extern/include -I$(MATLAB_ROOT)/simulink/include -I$(MATLAB_ROOT)/rtw/c/src -I$(MATLAB_ROOT)/rtw/c/src/ext_mode/common -I$(MATLAB_ROOT)/rtw/c/ert -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/include -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/common -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/protocol/src -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/protocol/include -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/transport/include -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/transport/src -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/platform/include -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/platform/default -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/include -I$(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src -I$(MATLAB_ROOT)/rtw/c/ext_mode/common -I$(MATLAB_ROOT)/toolbox/coder/rtiostream/src -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64 -I$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64 -IC:/PROGRA~3/MATLAB/SUPPOR~1/R2021b/toolbox/target/SUPPOR~1/tic2000/inc -I$(MATLAB_ROOT)/toolbox/shared/can/src/scanutil -IC:/PROGRA~3/MATLAB/SUPPOR~1/R2021b/toolbox/target/SUPPOR~1/tic2000/src -IC:/PROGRA~3/MATLAB/SUPPOR~1/R2021b/toolbox/shared/SUPPOR~1/tic2000/src -IC:/PROGRA~3/MATLAB/SUPPOR~1/R2021b/toolbox/shared/SUPPOR~1/tic2000/inc -IC:/PROGRA~3/MATLAB/SUPPOR~1/R2021b/toolbox/target/shared/EXTERN~1/include -I$(MATLAB_ROOT)/toolbox/rtw/targets/common/can/blocks/tlc_c

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_ = -D__MW_TARGET_USE_HARDWARE_RESOURCES_H__ -DXCP_MAX_CTO_SIZE=32 -DXCP_MAX_DTO_SIZE=65532 -DXCP_MAX_ODT_ENTRY_SIZE=255 -DXCP_MAX_DAQ=65535 -DXCP_MIN_DAQ=0 -DXCP_MAX_EVENT_CHANNEL=128 -DXCP_ID_FIELD_TYPE=0 -DXCP_TIMESTAMP_SIZE=4 -DXCP_ADDRESS_GRANULARITY=XCP_ADDRESS_GRANULARITY_WORD -DXCP_MEM_RESERVED_POOLS_TOTAL_SIZE=265 -DXCP_MEM_DAQ_RESERVED_POOL_BLOCKS_NUMBER=3
DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTERMFCN=1 -DONESTEPFCN=1 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DEXT_MODE=1 -DINTEGER_CODE=0 -DMT=0
DEFINES_CUSTOM = 
DEFINES_OPTS = -DXCP_EXTMODE_SIMULATION_TIME_IN_TICKS -DXCP_DAQ_SUPPORT -DXCP_CALIBRATION_SUPPORT -DXCP_TIMESTAMP_SUPPORT -DXCP_TIMESTAMP_BASED_ON_SIMULATION_TIME -DXCP_SET_MTA_SUPPORT -DXCP_MEM_DAQ_RESERVED_POOLS_NUMBER=2 -DEXTMODE_XCP_TRIGGER_SUPPORT -DEXTMODE_STATIC -DEXTMODE_STATIC_SIZE=1000000 -DON_TARGET_WAIT_FOR_START=0 -DTID01EQ=1 -DXCP_MEM_BLOCK_1_SIZE=16 -DXCP_MEM_BLOCK_1_NUMBER=1 -DXCP_MEM_BLOCK_2_SIZE=32 -DXCP_MEM_BLOCK_2_NUMBER=1 -DXCP_MEM_BLOCK_3_SIZE=48 -DXCP_MEM_BLOCK_3_NUMBER=1
DEFINES_SKIPFORSIL = -DDAEMON_MODE=1 -DXCP_CUSTOM_PLATFORM -DEXTMODE_DISABLE_ARGS_PROCESSING=1 -DMW_PIL_SCIFIFOLEN=16 -DMW_F2833X -DSTACK_SIZE=1024 -DRT -DF28335 -DBOOT_FROM_FLASH=0 -DMW_FAST_RTS_INCLUDED=0
DEFINES_STANDARD = -DMODEL=DCDC_Buck -DNUMST=2 -DNCSTATES=31 -DHAVESTDIO -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0

DEFINES = $(DEFINES_) $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_SKIPFORSIL) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_zc.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_tdxy_p.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_dxy_p.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_obs_exp.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_m_p.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_log.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_obs_all.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_imax.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_obs_act.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_imin.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_tdxf_p.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_a_p.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_obs_il.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_a.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_dxf_p.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_dxf.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_mode.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_f.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_assert.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_gateway.c $(START_DIR)/DCDC_Buck_ert_rtw/pm_printf.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_mode.c $(START_DIR)/DCDC_Buck_ert_rtw/MW_c28xx_csl.c $(START_DIR)/DCDC_Buck_ert_rtw/MW_c28xx_board.c $(START_DIR)/DCDC_Buck_ert_rtw/rt_backsubrr_dbl.c $(START_DIR)/DCDC_Buck_ert_rtw/rt_forwardsubrr_dbl.c $(START_DIR)/DCDC_Buck_ert_rtw/rt_lu_real.c $(START_DIR)/DCDC_Buck_ert_rtw/rt_matrixlib_dbl.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck.c $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_data.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_common.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_classic_trigger.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/protocol/src/xcp.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/protocol/src/xcp_standard.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/protocol/src/xcp_daq.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/protocol/src/xcp_calibration.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/transport/src/xcp_fifo.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/transport/src/xcp_transport.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/platform/default/xcp_mem_default.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/platform/default/xcp_drv_rtiostream.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/transport/src/xcp_frame_serial.c $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_param_default_serial.c C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/c2833xBoard_Realtime_Support.c C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/shared/supportpackages/tic2000/src/MW_c28xGlobalInterrupts.c C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_MemCopy.c C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_CpuTimers.c C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_DefaultIsr.c C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_GlobalVariableDefs.c C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_PieCtrl.c C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_PieVect.c C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_SysCtrl.c C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_usDelay.asm C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_CodeStartBranch.asm C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_ADC_cal.asm C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_DMA.c C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/profiler_Support.c C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/shared/supportpackages/tic2000/src/MW_c28xGPIO.c C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/c2833xSchedulerTimer0.c C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/shared/supportpackages/tic2000/src/rtiostream_serial_c28x_ext_xcp.c C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/shared/supportpackages/tic2000/src/datamodify_xcp.c

MAIN_SRC = $(START_DIR)/DCDC_Buck_ert_rtw/ert_main.c

ALL_SRCS = $(SRCS) $(MAIN_SRC)

###########################################################################
## OBJECTS
###########################################################################

OBJS = DCDC_Buck_9d5357ce_1_ds.obj DCDC_Buck_9d5357ce_1_ds_zc.obj DCDC_Buck_9d5357ce_1_ds_tdxy_p.obj DCDC_Buck_9d5357ce_1_ds_dxy_p.obj DCDC_Buck_9d5357ce_1_ds_obs_exp.obj DCDC_Buck_9d5357ce_1_ds_m_p.obj DCDC_Buck_9d5357ce_1_ds_log.obj DCDC_Buck_9d5357ce_1_ds_obs_all.obj DCDC_Buck_9d5357ce_1_ds_imax.obj DCDC_Buck_9d5357ce_1_ds_obs_act.obj DCDC_Buck_9d5357ce_1_ds_imin.obj DCDC_Buck_9d5357ce_1_ds_tdxf_p.obj DCDC_Buck_9d5357ce_1_ds_a_p.obj DCDC_Buck_9d5357ce_1_ds_obs_il.obj DCDC_Buck_9d5357ce_1_ds_a.obj DCDC_Buck_9d5357ce_1_ds_dxf_p.obj DCDC_Buck_9d5357ce_1_ds_dxf.obj DCDC_Buck_9d5357ce_1_ds_mode.obj DCDC_Buck_9d5357ce_1_ds_f.obj DCDC_Buck_9d5357ce_1_ds_assert.obj DCDC_Buck_9d5357ce_1.obj DCDC_Buck_9d5357ce_1_gateway.obj pm_printf.obj xcp_ext_mode.obj MW_c28xx_csl.obj MW_c28xx_board.obj rt_backsubrr_dbl.obj rt_forwardsubrr_dbl.obj rt_lu_real.obj rt_matrixlib_dbl.obj DCDC_Buck.obj DCDC_Buck_data.obj xcp_ext_common.obj xcp_ext_classic_trigger.obj xcp.obj xcp_standard.obj xcp_daq.obj xcp_calibration.obj xcp_fifo.obj xcp_transport.obj xcp_mem_default.obj xcp_drv_rtiostream.obj xcp_frame_serial.obj xcp_ext_param_default_serial.obj c2833xBoard_Realtime_Support.obj MW_c28xGlobalInterrupts.obj DSP2833x_MemCopy.obj DSP2833x_CpuTimers.obj DSP2833x_DefaultIsr.obj DSP2833x_GlobalVariableDefs.obj DSP2833x_PieCtrl.obj DSP2833x_PieVect.obj DSP2833x_SysCtrl.obj DSP2833x_usDelay.obj DSP2833x_CodeStartBranch.obj DSP2833x_ADC_cal.obj DSP2833x_DMA.obj profiler_Support.obj MW_c28xGPIO.obj c2833xSchedulerTimer0.obj rtiostream_serial_c28x_ext_xcp.obj datamodify_xcp.obj

MAIN_OBJ = ert_main.obj

ALL_OBJS = $(OBJS) $(MAIN_OBJ)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = C:/ti/controlSUITE/libs/math/FPUfastRTS/V100/lib/rts2800_fpu32_fast_supplement.lib ./ssc_sli.lib ./ssc_core.lib ./ne.lib ./mc.lib ./ex.lib ./pm.lib C:/ProgramData/MATLAB/SupportPackages/3P.instrset/tic28xcodegentools.instrset/ti-cgt-c2000_20.2.1.LTS/lib/rts2800_fpu32.lib C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/shared/supportpackages/tic2000/rtlib/IQmath_fpu32.lib C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/c2833xPeripherals.cmd C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/c28335.cmd

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS = 

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_ =  --define="EXTMODE_DISABLEPRINTF" 
CFLAGS_SKIPFORSIL = -v28 --float_support=fpu32 -ml -DF28335 -DBOOT_FROM_FLASH=0
CFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CFLAGS += $(CFLAGS_) $(CFLAGS_SKIPFORSIL) $(CFLAGS_BASIC)

#-----------
# Linker
#-----------

LDFLAGS_SKIPFORSIL = --define F28335 --define PWM_DMAACCESS=0 --define BOOT_FROM_FLASH=0 --define BOOT_USING_BL=0

LDFLAGS += $(LDFLAGS_SKIPFORSIL)

#--------------------------
# Shared Library Linker
#--------------------------

SHAREDLIB_LDFLAGS_SKIPFORSIL = --define F28335 --define PWM_DMAACCESS=0 --define BOOT_FROM_FLASH=0 --define BOOT_USING_BL=0

SHAREDLIB_LDFLAGS += $(SHAREDLIB_LDFLAGS_SKIPFORSIL)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_ =  --define="EXTMODE_DISABLEPRINTF" 
CPPFLAGS_SKIPFORSIL = -v28 --float_support=fpu32 -ml -DF28335 -DBOOT_FROM_FLASH=0
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES)

CPPFLAGS += $(CPPFLAGS_) $(CPPFLAGS_SKIPFORSIL) $(CPPFLAGS_BASIC)

#---------------
# C++ Linker
#---------------

CPP_LDFLAGS_SKIPFORSIL = --define F28335 --define PWM_DMAACCESS=0 --define BOOT_FROM_FLASH=0 --define BOOT_USING_BL=0

CPP_LDFLAGS += $(CPP_LDFLAGS_SKIPFORSIL)

#------------------------------
# C++ Shared Library Linker
#------------------------------

CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL = --define F28335 --define PWM_DMAACCESS=0 --define BOOT_FROM_FLASH=0 --define BOOT_USING_BL=0

CPP_SHAREDLIB_LDFLAGS += $(CPP_SHAREDLIB_LDFLAGS_SKIPFORSIL)

###########################################################################
## INLINED COMMANDS
###########################################################################


#--------------------------
# ELF to hex converter
#--------------------------
all :

ifeq ($(PRODUCT_TYPE),"executable")
postbuild : $(PRODUCT_HEX)

$(PRODUCT_HEX): $(PRODUCT)
	@echo "### Invoking postbuild tool "Hex Converter" on "$<"..."
	$(CCSINSTALLDIR)/bin/hex2000 $(OBJCOPYFLAGS_HEX)
	@echo "### Done Invoking postbuild tool "Hex Converter" ..."

postbuild : $(PRODUCT_DWO)

$(PRODUCT_DWO): $(PRODUCT)
	@echo "### Invoking postbuild tool "DWO Converter" on "$<"..."
	$(TI_C2000_SHARED_DIR)/tools/bin/win64/extractDWARF.exe $(OBJCOPYFLAGS_DWO)
	@echo "### Done Invoking postbuild tool "DWO Converter" ..."

endif

#--------------------------
# Dependency based build
#--------------------------
ifeq ($(DEPRULES),1) 
ALL_DEPS:=$(patsubst %.obj,%.dep,$(ALL_OBJS))
all:
else
ALL_DEPS:=
endif




-include codertarget_assembly_flags.mk
-include ../codertarget_assembly_flags.mk
-include ../../codertarget_assembly_flags.mk
-include $(ALL_DEPS)


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build buildobj clean info prebuild postbuild download execute


all : build postbuild
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


buildobj : prebuild $(OBJS) $(PREBUILT_OBJS) $(LIBS)
	@echo "### Successfully generated all binary outputs."


prebuild : 


postbuild : $(PRODUCT)


download : postbuild
	@echo "### Invoking postbuild tool "Download" ..."
	$(DOWNLOAD) $(DOWNLOAD_FLAGS)
	@echo "### Done invoking postbuild tool."


execute : download
	@echo "### Invoking postbuild tool "Execute" ..."
	$(EXECUTE) $(EXECUTE_FLAGS)
	@echo "### Done invoking postbuild tool."


###########################################################################
## FINAL TARGET
###########################################################################

#-------------------------------------------
# Create a standalone executable            
#-------------------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS) $(LIBS) $(MAIN_OBJ)
	@echo "### Creating standalone executable "$(PRODUCT)" ..."
	$(LD) $(LDFLAGS) --output_file=$(PRODUCT) $(OBJS) $(MAIN_OBJ) $(LIBS) $(SYSTEM_LIBS) $(TOOLCHAIN_LIBS)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.obj : %.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : %.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : %.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : %.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(START_DIR)/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(START_DIR)/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(START_DIR)/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(START_DIR)/DCDC_Buck_ert_rtw/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(START_DIR)/DCDC_Buck_ert_rtw/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(START_DIR)/DCDC_Buck_ert_rtw/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(START_DIR)/DCDC_Buck_ert_rtw/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/simulink/src/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/simulink/src/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/protocol/src/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/protocol/src/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/protocol/src/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/protocol/src/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/transport/src/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/transport/src/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/transport/src/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/transport/src/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/platform/default/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/platform/default/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/platform/default/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/platform/default/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/network_engine/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cla
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_zc.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_zc.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_tdxy_p.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_tdxy_p.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_dxy_p.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_dxy_p.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_obs_exp.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_obs_exp.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_m_p.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_m_p.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_log.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_log.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_obs_all.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_obs_all.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_imax.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_imax.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_obs_act.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_obs_act.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_imin.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_imin.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_tdxf_p.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_tdxf_p.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_a_p.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_a_p.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_obs_il.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_obs_il.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_a.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_a.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_dxf_p.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_dxf_p.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_dxf.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_dxf.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_mode.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_mode.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_f.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_f.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_ds_assert.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_ds_assert.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_9d5357ce_1_gateway.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_9d5357ce_1_gateway.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


pm_printf.obj : $(START_DIR)/DCDC_Buck_ert_rtw/pm_printf.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


xcp_ext_mode.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_mode.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


MW_c28xx_csl.obj : $(START_DIR)/DCDC_Buck_ert_rtw/MW_c28xx_csl.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


MW_c28xx_board.obj : $(START_DIR)/DCDC_Buck_ert_rtw/MW_c28xx_board.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


rt_backsubrr_dbl.obj : $(START_DIR)/DCDC_Buck_ert_rtw/rt_backsubrr_dbl.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


rt_forwardsubrr_dbl.obj : $(START_DIR)/DCDC_Buck_ert_rtw/rt_forwardsubrr_dbl.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


rt_lu_real.obj : $(START_DIR)/DCDC_Buck_ert_rtw/rt_lu_real.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


rt_matrixlib_dbl.obj : $(START_DIR)/DCDC_Buck_ert_rtw/rt_matrixlib_dbl.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DCDC_Buck_data.obj : $(START_DIR)/DCDC_Buck_ert_rtw/DCDC_Buck_data.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


ert_main.obj : $(START_DIR)/DCDC_Buck_ert_rtw/ert_main.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


xcp_ext_common.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_common.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


xcp_ext_classic_trigger.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_classic_trigger.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


xcp.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/protocol/src/xcp.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


xcp_standard.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/protocol/src/xcp_standard.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


xcp_daq.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/protocol/src/xcp_daq.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


xcp_calibration.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/protocol/src/xcp_calibration.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


xcp_fifo.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/transport/src/xcp_fifo.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


xcp_transport.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/transport/src/xcp_transport.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


xcp_mem_default.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/platform/default/xcp_mem_default.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


xcp_drv_rtiostream.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/platform/default/xcp_drv_rtiostream.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


xcp_frame_serial.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/slave/transport/src/xcp_frame_serial.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


xcp_ext_param_default_serial.obj : $(MATLAB_ROOT)/toolbox/coder/xcp/src/target/ext_mode/src/xcp_ext_param_default_serial.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


c2833xBoard_Realtime_Support.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/c2833xBoard_Realtime_Support.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


MW_c28xGlobalInterrupts.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/shared/supportpackages/tic2000/src/MW_c28xGlobalInterrupts.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DSP2833x_MemCopy.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_MemCopy.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DSP2833x_CpuTimers.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_CpuTimers.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DSP2833x_DefaultIsr.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_DefaultIsr.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DSP2833x_GlobalVariableDefs.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_GlobalVariableDefs.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DSP2833x_PieCtrl.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_PieCtrl.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DSP2833x_PieVect.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_PieVect.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DSP2833x_SysCtrl.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_SysCtrl.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


DSP2833x_usDelay.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_usDelay.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


DSP2833x_CodeStartBranch.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_CodeStartBranch.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


DSP2833x_ADC_cal.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_ADC_cal.asm
	$(AS) $(ASFLAGS) --output_file="$@" "$<"


DSP2833x_DMA.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/DSP2833x_DMA.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


profiler_Support.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/profiler_Support.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


MW_c28xGPIO.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/shared/supportpackages/tic2000/src/MW_c28xGPIO.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


c2833xSchedulerTimer0.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/target/supportpackages/tic2000/src/c2833xSchedulerTimer0.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


rtiostream_serial_c28x_ext_xcp.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/shared/supportpackages/tic2000/src/rtiostream_serial_c28x_ext_xcp.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


datamodify_xcp.obj : C:/ProgramData/MATLAB/SupportPackages/R2021b/toolbox/shared/supportpackages/tic2000/src/datamodify_xcp.c
	$(CC) $(CFLAGS) --output_file="$@" "$<"


#------------------------
# BUILDABLE LIBRARIES
#------------------------

./ssc_sli.lib : $(LIBSSC_SLI_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_SLI_OBJS)


./ssc_core.lib : $(LIBSSC_CORE_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_CORE_OBJS)


./ne.lib : $(LIBNE_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBNE_OBJS)


./mc.lib : $(LIBMC_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBMC_OBJS)


./ex.lib : $(LIBEX_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBEX_OBJS)


./pm.lib : $(LIBPM_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBPM_OBJS)


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### ASFLAGS = $(ASFLAGS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### OBJCOPYFLAGS_HEX = $(OBJCOPYFLAGS_HEX)"
	@echo "### OBJCOPYFLAGS_DWO = $(OBJCOPYFLAGS_DWO)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(RM) *Object
	$(ECHO) "### Deleted all derived files."


