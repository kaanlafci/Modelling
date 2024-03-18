/*
 * Controller.h
 *
 * Code generation for model "Controller".
 *
 * Model version              : 1.6
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Sat Mar 16 14:59:00 2024
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Controller_h_
#define RTW_HEADER_Controller_h_
#include <float.h>
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Controller_COMMON_INCLUDES_
#define Controller_COMMON_INCLUDES_
#include <IQmathLib.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "rt_logging.h"
#endif                                 /* Controller_COMMON_INCLUDES_ */

#include "Controller_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWLogInfo
#define rtmGetRTWLogInfo(rtm)          ((rtm)->rtwLogInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Duty;                         /* '<S4>/Inverse TBPRD' */
  real_T Clock1;                       /* '<S8>/Clock1' */
  real_T MathFunction2;                /* '<S8>/Math Function2' */
  real_T Gain1;                        /* '<S8>/Gain1' */
  real_T Gain6;                        /* '<S2>/Gain6' */
} B_Controller_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T UnitDelay_DSTATE_b;           /* '<S5>/Unit Delay' */
  int32_T UnitDelay_DSTATE_m;          /* '<S3>/Unit Delay' */
  int32_T IQNxIQN_FRAC_LEN;            /* '<S3>/IQN x IQN' */
  int32_T IQNxIQN1_FRAC_LEN;           /* '<S3>/IQN x IQN1' */
  boolean_T UnitDelay1_DSTATE;         /* '<S5>/Unit Delay1' */
} DW_Controller_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T VoltageOutput;                /* '<Root>/Vout' */
} ExtU_Controller_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Sw1;                          /* '<Root>/Sw1' */
} ExtY_Controller_T;

/* Parameters (default storage) */
struct P_Controller_T_ {
  real_T FPWM;                         /* Variable: FPWM
                                        * Referenced by: '<S8>/Gain1'
                                        */
  real_T Tpwm;                         /* Variable: Tpwm
                                        * Referenced by: '<S8>/Time_Period'
                                        */
  real_T VSF;                          /* Variable: VSF
                                        * Referenced by:
                                        *   '<S1>/VoltageScaling'
                                        *   '<S1>/VoltageScaling1'
                                        */
  real_T CompareToConstant_const;     /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S6>/Constant'
                                       */
  real_T CompareToConstant1_const;   /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S7>/Constant'
                                      */
  real_T Constant2_Value;              /* Expression: 0.003
                                        * Referenced by: '<S1>/Constant2'
                                        */
  real_T Constant_Value;               /* Expression: 5
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T PerUnitConvRate_Gain;         /* Expression: 1
                                        * Referenced by: '<S2>/PerUnitConvRate'
                                        */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S1>/Unit Delay'
                                        */
  real_T PerUnitConvRate1_Gain;        /* Expression: 1
                                        * Referenced by: '<S2>/PerUnitConvRate1'
                                        */
  real_T Constant1_Value;              /* Expression: 0.003
                                        * Referenced by: '<S1>/Constant1'
                                        */
  real_T UnitDelay_InitialCondition_a; /* Expression: 0
                                        * Referenced by: '<S5>/Unit Delay'
                                        */
  real_T InverseTBPRD_Gain;            /* Expression: 1/TBPRD
                                        * Referenced by: '<S4>/Inverse TBPRD'
                                        */
  real_T Gain6_Gain;                   /* Expression: 9
                                        * Referenced by: '<S2>/Gain6'
                                        */
  int32_T Constant_Value_f;            /* Computed Parameter: Constant_Value_f
                                        * Referenced by: '<S5>/Constant'
                                        */
  int32_T UnitDelay_InitialCondition_f;
                             /* Computed Parameter: UnitDelay_InitialCondition_f
                              * Referenced by: '<S3>/Unit Delay'
                              */
  int32_T Saturation_UpperSat;        /* Computed Parameter: Saturation_UpperSat
                                       * Referenced by: '<S3>/Saturation'
                                       */
  int32_T Saturation_LowerSat;        /* Computed Parameter: Saturation_LowerSat
                                       * Referenced by: '<S3>/Saturation'
                                       */
  int16_T Gain4_Gain;                  /* Expression: TBPRD
                                        * Referenced by: '<S2>/Gain4'
                                        */
  boolean_T UnitDelay1_InitialCondition;
                              /* Computed Parameter: UnitDelay1_InitialCondition
                               * Referenced by: '<S5>/Unit Delay1'
                               */
};

/* Real-time Model Data Structure */
struct tag_RTM_Controller_T {
  const char_T *errorStatus;
  RTWLogInfo *rtwLogInfo;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T tFinal;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Controller_T Controller_P;

/* Block signals (default storage) */
extern B_Controller_T Controller_B;

/* Block states (default storage) */
extern DW_Controller_T Controller_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_Controller_T Controller_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_Controller_T Controller_Y;

/* Model entry point functions */
extern void Controller_initialize(void);
extern void Controller_step(void);
extern void Controller_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Controller_T *const Controller_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('DCDC_Buck/Controller')    - opens subsystem DCDC_Buck/Controller
 * hilite_system('DCDC_Buck/Controller/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'DCDC_Buck'
 * '<S1>'   : 'DCDC_Buck/Controller'
 * '<S2>'   : 'DCDC_Buck/Controller/Controller'
 * '<S3>'   : 'DCDC_Buck/Controller/Controller/PI_Controller'
 * '<S4>'   : 'DCDC_Buck/Controller/Controller/Subsystem'
 * '<S5>'   : 'DCDC_Buck/Controller/Controller/PI_Controller/Subsystem'
 * '<S6>'   : 'DCDC_Buck/Controller/Controller/PI_Controller/Subsystem/Compare To Constant'
 * '<S7>'   : 'DCDC_Buck/Controller/Controller/PI_Controller/Subsystem/Compare To Constant1'
 * '<S8>'   : 'DCDC_Buck/Controller/Controller/Subsystem/Sawtooth_Generator'
 */
#endif                                 /* RTW_HEADER_Controller_h_ */
