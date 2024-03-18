/*
 * DCDC_Buck.h
 *
 * Code generation for model "DCDC_Buck".
 *
 * Model version              : 1.6
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Sat Mar 16 15:00:45 2024
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DCDC_Buck_h_
#define RTW_HEADER_DCDC_Buck_h_
#include <string.h>
#include <float.h>
#include <math.h>
#ifndef DCDC_Buck_COMMON_INCLUDES_
#define DCDC_Buck_COMMON_INCLUDES_
#include <IQmathLib.h>
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "nesl_rtw.h"
#include "DCDC_Buck_9d5357ce_1_gateway.h"
#endif                                 /* DCDC_Buck_COMMON_INCLUDES_ */

#include "DCDC_Buck_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "math.h"
#include "rt_matrixlib.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContStateDisabled
#define rtmGetContStateDisabled(rtm)   ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
#define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
#define rtmGetContStates(rtm)          ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
#define rtmSetContStates(rtm, val)     ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetIntgData
#define rtmGetIntgData(rtm)            ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
#define rtmSetIntgData(rtm, val)       ((rtm)->intgData = (val))
#endif

#ifndef rtmGetMassMatrixIr
#define rtmGetMassMatrixIr(rtm)        ((rtm)->massMatrixIr)
#endif

#ifndef rtmSetMassMatrixIr
#define rtmSetMassMatrixIr(rtm, val)   ((rtm)->massMatrixIr = (val))
#endif

#ifndef rtmGetMassMatrixJc
#define rtmGetMassMatrixJc(rtm)        ((rtm)->massMatrixJc)
#endif

#ifndef rtmSetMassMatrixJc
#define rtmSetMassMatrixJc(rtm, val)   ((rtm)->massMatrixJc = (val))
#endif

#ifndef rtmGetMassMatrixNzMax
#define rtmGetMassMatrixNzMax(rtm)     ((rtm)->massMatrixNzMax)
#endif

#ifndef rtmSetMassMatrixNzMax
#define rtmSetMassMatrixNzMax(rtm, val) ((rtm)->massMatrixNzMax = (val))
#endif

#ifndef rtmGetMassMatrixPr
#define rtmGetMassMatrixPr(rtm)        ((rtm)->massMatrixPr)
#endif

#ifndef rtmSetMassMatrixPr
#define rtmSetMassMatrixPr(rtm, val)   ((rtm)->massMatrixPr = (val))
#endif

#ifndef rtmGetMassMatrixType
#define rtmGetMassMatrixType(rtm)      ((rtm)->massMatrixType)
#endif

#ifndef rtmSetMassMatrixType
#define rtmSetMassMatrixType(rtm, val) ((rtm)->massMatrixType = (val))
#endif

#ifndef rtmGetOdeDELTA
#define rtmGetOdeDELTA(rtm)            ((rtm)->odeDELTA)
#endif

#ifndef rtmSetOdeDELTA
#define rtmSetOdeDELTA(rtm, val)       ((rtm)->odeDELTA = (val))
#endif

#ifndef rtmGetOdeDFDX
#define rtmGetOdeDFDX(rtm)             ((rtm)->odeDFDX)
#endif

#ifndef rtmSetOdeDFDX
#define rtmSetOdeDFDX(rtm, val)        ((rtm)->odeDFDX = (val))
#endif

#ifndef rtmGetOdeE
#define rtmGetOdeE(rtm)                ((rtm)->odeE)
#endif

#ifndef rtmSetOdeE
#define rtmSetOdeE(rtm, val)           ((rtm)->odeE = (val))
#endif

#ifndef rtmGetOdeF0
#define rtmGetOdeF0(rtm)               ((rtm)->odeF0)
#endif

#ifndef rtmSetOdeF0
#define rtmSetOdeF0(rtm, val)          ((rtm)->odeF0 = (val))
#endif

#ifndef rtmGetOdeF1
#define rtmGetOdeF1(rtm)               ((rtm)->odeF1)
#endif

#ifndef rtmSetOdeF1
#define rtmSetOdeF1(rtm, val)          ((rtm)->odeF1 = (val))
#endif

#ifndef rtmGetOdeFAC
#define rtmGetOdeFAC(rtm)              ((rtm)->odeFAC)
#endif

#ifndef rtmSetOdeFAC
#define rtmSetOdeFAC(rtm, val)         ((rtm)->odeFAC = (val))
#endif

#ifndef rtmGetOdeMASSMATRIX_M
#define rtmGetOdeMASSMATRIX_M(rtm)     ((rtm)->odeMASSMATRIX_M)
#endif

#ifndef rtmSetOdeMASSMATRIX_M
#define rtmSetOdeMASSMATRIX_M(rtm, val) ((rtm)->odeMASSMATRIX_M = (val))
#endif

#ifndef rtmGetOdePIVOTS
#define rtmGetOdePIVOTS(rtm)           ((rtm)->odePIVOTS)
#endif

#ifndef rtmSetOdePIVOTS
#define rtmSetOdePIVOTS(rtm, val)      ((rtm)->odePIVOTS = (val))
#endif

#ifndef rtmGetOdeW
#define rtmGetOdeW(rtm)                ((rtm)->odeW)
#endif

#ifndef rtmSetOdeW
#define rtmSetOdeW(rtm, val)           ((rtm)->odeW = (val))
#endif

#ifndef rtmGetOdeX0
#define rtmGetOdeX0(rtm)               ((rtm)->odeX0)
#endif

#ifndef rtmSetOdeX0
#define rtmSetOdeX0(rtm, val)          ((rtm)->odeX0 = (val))
#endif

#ifndef rtmGetOdeX1START
#define rtmGetOdeX1START(rtm)          ((rtm)->odeX1START)
#endif

#ifndef rtmSetOdeX1START
#define rtmSetOdeX1START(rtm, val)     ((rtm)->odeX1START = (val))
#endif

#ifndef rtmGetOdeXTMP
#define rtmGetOdeXTMP(rtm)             ((rtm)->odeXTMP)
#endif

#ifndef rtmSetOdeXTMP
#define rtmSetOdeXTMP(rtm, val)        ((rtm)->odeXTMP = (val))
#endif

#ifndef rtmGetOdeZTMP
#define rtmGetOdeZTMP(rtm)             ((rtm)->odeZTMP)
#endif

#ifndef rtmSetOdeZTMP
#define rtmSetOdeZTMP(rtm, val)        ((rtm)->odeZTMP = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
#define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
#define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
#define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
#define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetdX
#define rtmGetdX(rtm)                  ((rtm)->derivs)
#endif

#ifndef rtmSetdX
#define rtmSetdX(rtm, val)             ((rtm)->derivs = (val))
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

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T Duty;                         /* '<S5>/Inverse TBPRD' */
  real_T Gain1;                        /* '<S9>/Gain1' */
  real_T DataTypeConversion1;          /* '<S5>/Data Type Conversion1' */
  real_T Gain6;                        /* '<S3>/Gain6' */
  real_T Gain;                         /* '<S10>/Gain' */
  real_T INPUT_1_1_1[4];               /* '<S26>/INPUT_1_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S26>/INPUT_3_1_1' */
  real_T INPUT_2_1_1[4];               /* '<S26>/INPUT_2_1_1' */
  real_T INPUT_4_1_1[4];               /* '<S26>/INPUT_4_1_1' */
  real_T STATE_1[42];                  /* '<S26>/STATE_1' */
  real_T VoltageScaling;               /* '<S1>/VoltageScaling' */
} B_DCDC_Buck_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S1>/Unit Delay' */
  real_T UnitDelay_DSTATE_b;           /* '<S6>/Unit Delay' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S26>/INPUT_1_1_1' */
  real_T INPUT_3_1_1_Discrete[2];      /* '<S26>/INPUT_3_1_1' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S26>/INPUT_2_1_1' */
  real_T INPUT_4_1_1_Discrete[2];      /* '<S26>/INPUT_4_1_1' */
  real_T STATE_1_Discrete;             /* '<S26>/STATE_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S26>/OUTPUT_1_0' */
  void* STATE_1_Simulator;             /* '<S26>/STATE_1' */
  void* STATE_1_SimData;               /* '<S26>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S26>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S26>/STATE_1' */
  void* STATE_1_TsIndex;               /* '<S26>/STATE_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S26>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S26>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S26>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S26>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsIndex;            /* '<S26>/OUTPUT_1_0' */
  int32_T UnitDelay_DSTATE_m;          /* '<S4>/Unit Delay' */
  int32_T IQNxIQN_FRAC_LEN;            /* '<S4>/IQN x IQN' */
  int32_T IQNxIQN1_FRAC_LEN;           /* '<S4>/IQN x IQN1' */
  int_T STATE_1_Modes[11];             /* '<S26>/STATE_1' */
  int_T OUTPUT_1_0_Modes;              /* '<S26>/OUTPUT_1_0' */
  int32_T STATE_1_MASS_MATRIX_PR;      /* '<S26>/STATE_1' */
  boolean_T UnitDelay1_DSTATE;         /* '<S6>/Unit Delay1' */
  boolean_T STATE_1_FirstOutput;       /* '<S26>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S26>/OUTPUT_1_0' */
} DW_DCDC_Buck_T;

/* Continuous states (default storage) */
typedef struct {
  real_T DCDC_BuckDC_DC_Buck_PLANTDC_DC_[31];/* '<S26>/STATE_1' */
} X_DCDC_Buck_T;

/* State derivatives (default storage) */
typedef struct {
  real_T DCDC_BuckDC_DC_Buck_PLANTDC_DC_[31];/* '<S26>/STATE_1' */
} XDot_DCDC_Buck_T;

/* State disabled  */
typedef struct {
  boolean_T DCDC_BuckDC_DC_Buck_PLANTDC_DC_[31];/* '<S26>/STATE_1' */
} XDis_DCDC_Buck_T;

/* Mass Matrix (global) */
typedef struct {
  int_T ir[13];
  int_T jc[32];
  real_T pr[13];
} MassMatrix_DCDC_Buck_T;

/* Invariant block signals (default storage) */
typedef struct {
  const int32_T DataTypeConversion1;   /* '<S3>/Data Type Conversion1' */
} ConstB_DCDC_Buck_T;

#ifndef ODE14X_INTG
#define ODE14X_INTG

/* ODE14X Integration Data */
typedef struct {
  real_T *x0;
  real_T *f0;
  real_T *x1start;
  real_T *f1;
  real_T *Delta;
  real_T *E;
  real_T *fac;
  real_T *DFDX;
  real_T *W;
  int_T *pivots;
  real_T *xtmp;
  real_T *ztmp;
  real_T *M;
  real_T *M1;
  real_T *Edot;
  real_T *xdot;
  real_T *fminusMxdot;
  boolean_T isFirstStep;
} ODE14X_IntgData;

#endif

/* Real-time Model Data Structure */
struct tag_RTM_DCDC_Buck_T {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X_DCDC_Buck_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  int_T massMatrixType;
  int_T massMatrixNzMax;
  int_T *massMatrixIr;
  int_T *massMatrixJc;
  real_T *massMatrixPr;
  real_T odeX0[31];
  real_T odeF0[31];
  real_T odeX1START[31];
  real_T odeF1[31];
  real_T odeDELTA[31];
  real_T odeE[4*31];
  real_T odeFAC[31];
  real_T odeDFDX[31*31];
  real_T odeW[31*31];
  int_T odePIVOTS[31];
  real_T odeXTMP[31];
  real_T odeZTMP[31];
  real_T odeMASSMATRIX_M[13];
  ODE14X_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

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
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block signals (default storage) */
extern B_DCDC_Buck_T DCDC_Buck_B;

/* Continuous states (default storage) */
extern X_DCDC_Buck_T DCDC_Buck_X;

/* Block states (default storage) */
extern DW_DCDC_Buck_T DCDC_Buck_DW;

/* global MassMatrix */
extern MassMatrix_DCDC_Buck_T DCDC_Buck_MassMatrix;
extern const ConstB_DCDC_Buck_T DCDC_Buck_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void DCDC_Buck_initialize(void);
extern void DCDC_Buck_step(void);
extern void DCDC_Buck_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DCDC_Buck_T *const DCDC_Buck_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S9>/Scope' : Unused code path elimination
 * Block '<S16>/Gain' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<S4>/IQN x IQN1_boundary_DTC' : Eliminate redundant data type conversion
 * Block '<S4>/Subsystem_boundary_DTC1' : Eliminate redundant data type conversion
 * Block '<S3>/PerUnitConvRate' : Eliminated nontunable gain of 1
 * Block '<S3>/PerUnitConvRate1' : Eliminated nontunable gain of 1
 * Block '<S5>/Rate Transition' : Eliminated since input and output rates are identical
 * Block '<S1>/Rate Transition1' : Eliminated since input and output rates are identical
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'DCDC_Buck'
 * '<S1>'   : 'DCDC_Buck/Controller'
 * '<S2>'   : 'DCDC_Buck/DC//DC_Buck_PLANT'
 * '<S3>'   : 'DCDC_Buck/Controller/Controller'
 * '<S4>'   : 'DCDC_Buck/Controller/Controller/PI_Controller'
 * '<S5>'   : 'DCDC_Buck/Controller/Controller/Subsystem'
 * '<S6>'   : 'DCDC_Buck/Controller/Controller/PI_Controller/Subsystem'
 * '<S7>'   : 'DCDC_Buck/Controller/Controller/PI_Controller/Subsystem/Compare To Constant'
 * '<S8>'   : 'DCDC_Buck/Controller/Controller/PI_Controller/Subsystem/Compare To Constant1'
 * '<S9>'   : 'DCDC_Buck/Controller/Controller/Subsystem/Sawtooth_Generator'
 * '<S10>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/Active_Load'
 * '<S11>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck'
 * '<S12>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/PS-Simulink Converter'
 * '<S13>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration'
 * '<S14>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/Simulink-PS Converter1'
 * '<S15>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/Simulink-PS Converter1/EVAL_KEY'
 * '<S16>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor'
 * '<S17>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Simulink-PS Converter'
 * '<S18>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Simulink-PS Converter1'
 * '<S19>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Simulink-PS Converter3'
 * '<S20>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/PS-Simulink Converter'
 * '<S21>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/PS-Simulink Converter/EVAL_KEY'
 * '<S22>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Simulink-PS Converter/EVAL_KEY'
 * '<S23>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Simulink-PS Converter1/EVAL_KEY'
 * '<S24>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Simulink-PS Converter3/EVAL_KEY'
 * '<S25>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/PS-Simulink Converter/EVAL_KEY'
 * '<S26>'  : 'DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration/EVAL_KEY'
 */
#endif                                 /* RTW_HEADER_DCDC_Buck_h_ */
