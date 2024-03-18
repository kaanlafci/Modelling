/*
 * Controller.c
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

#include "Controller.h"
#include "Controller_private.h"

/* Block signals (default storage) */
B_Controller_T Controller_B;

/* Block states (default storage) */
DW_Controller_T Controller_DW;

/* External inputs (root inport signals with default storage) */
ExtU_Controller_T Controller_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_Controller_T Controller_Y;

/* Real-time model */
static RT_MODEL_Controller_T Controller_M_;
RT_MODEL_Controller_T *const Controller_M = &Controller_M_;
real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else if ((u1 != 0.0) && (u1 != trunc(u1))) {
    real_T q;
    q = fabs(u0 / u1);
    if (!(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q)) {
      y = 0.0 * u0;
    } else {
      y = fmod(u0, u1);
    }
  } else {
    y = fmod(u0, u1);
  }

  return y;
}

/* Model step function */
void Controller_step(void)
{
  /* local block i/o variables */
  real_T rtb_Subsystem_boundary_DTC3;
  real_T rtb_VoltageScaling;
  int32_T rtb_Sum1;
  int32_T rtb_IQNxIQN;
  int32_T rtb_Sum2;
  boolean_T rtb_RelationalOperator;
  real_T tmp;
  real_T tmp_0;
  int32_T rtb_Gain4;
  int32_T rtb_Saturation;

  /* DataTypeConversion: '<S2>/Data Type Conversion' incorporates:
   *  Constant: '<S1>/Constant'
   *  Gain: '<S1>/VoltageScaling1'
   *  Gain: '<S2>/PerUnitConvRate'
   */
  tmp_0 = floor(Controller_P.VSF * Controller_P.Constant_Value *
                Controller_P.PerUnitConvRate_Gain * 1.6777216E+7);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 4.294967296E+9);
  }

  /* S-Function (stiiqmath_iqmpy): '<S3>/IQN x IQN' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion'
   */
  rtb_IQNxIQN = tmp_0 < 0.0 ? -(int32_T)(uint32_T)-tmp_0 : (int32_T)(uint32_T)
    tmp_0;

  /* DataTypeConversion: '<S2>/Data Type Conversion3' incorporates:
   *  Gain: '<S2>/Gain4'
   *  Gain: '<S2>/PerUnitConvRate1'
   *  UnitDelay: '<S1>/Unit Delay'
   */
  tmp_0 = floor(Controller_P.PerUnitConvRate1_Gain *
                Controller_DW.UnitDelay_DSTATE * 1.6777216E+7);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 4.294967296E+9);
  }

  rtb_Gain4 = tmp_0 < 0.0 ? -(int32_T)(uint32_T)-tmp_0 : (int32_T)(uint32_T)
    tmp_0;

  /* End of DataTypeConversion: '<S2>/Data Type Conversion3' */

  /* Sum: '<S3>/Sum' incorporates:
   *  Gain: '<S2>/Gain4'
   *  S-Function (stiiqmath_iqmpy): '<S3>/IQN x IQN'
   *  Saturate: '<S3>/Saturation'
   */
  rtb_Saturation = rtb_IQNxIQN - rtb_Gain4;

  /* DataTypeConversion: '<S2>/Data Type Conversion1' incorporates:
   *  Constant: '<S1>/Constant1'
   *  Gain: '<S2>/Gain4'
   */
  tmp_0 = floor(Controller_P.Constant1_Value * 1.6777216E+7);
  if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
    tmp_0 = 0.0;
  } else {
    tmp_0 = fmod(tmp_0, 4.294967296E+9);
  }

  rtb_Gain4 = tmp_0 < 0.0 ? -(int32_T)(uint32_T)-tmp_0 : (int32_T)(uint32_T)
    tmp_0;

  /* End of DataTypeConversion: '<S2>/Data Type Conversion1' */

  /* S-Function (stiiqmath_iqmpy): '<S3>/IQN x IQN' */

  /* C28x IQmath Library (stiiqmath_iqmpy) - '<S3>/IQN x IQN' */
  {
    rtb_IQNxIQN = _IQ24mpy (rtb_Saturation, rtb_Gain4);
  }

  /* Switch: '<S5>/Switch' incorporates:
   *  Constant: '<S5>/Constant'
   *  Constant: '<S6>/Constant'
   *  Constant: '<S7>/Constant'
   *  DataTypeConversion: '<S2>/Data Type Conversion2'
   *  DataTypeConversion: '<S3>/Subsystem_boundary_DTC'
   *  Gain: '<S2>/Gain4'
   *  Logic: '<S5>/Logical Operator'
   *  RelationalOperator: '<S5>/Relational Operator1'
   *  RelationalOperator: '<S6>/Compare'
   *  RelationalOperator: '<S7>/Compare'
   *  Saturate: '<S3>/Saturation'
   *  UnitDelay: '<S5>/Unit Delay'
   *  UnitDelay: '<S5>/Unit Delay1'
   */
  if (Controller_DW.UnitDelay1_DSTATE || (((real_T)rtb_Saturation *
        5.9604644775390625E-8 <= Controller_P.CompareToConstant1_const) !=
       (Controller_DW.UnitDelay_DSTATE_b <= Controller_P.CompareToConstant_const)))
  {
    /* DataTypeConversion: '<S2>/Data Type Conversion2' incorporates:
     *  Constant: '<S1>/Constant2'
     */
    tmp_0 = floor(Controller_P.Constant2_Value * 1.6777216E+7);
    if (rtIsNaN(tmp_0) || rtIsInf(tmp_0)) {
      tmp_0 = 0.0;
    } else {
      tmp_0 = fmod(tmp_0, 4.294967296E+9);
    }

    rtb_Gain4 = tmp_0 < 0.0 ? -(int32_T)(uint32_T)-tmp_0 : (int32_T)(uint32_T)
      tmp_0;
  } else {
    rtb_Gain4 = Controller_P.Constant_Value_f;
  }

  /* End of Switch: '<S5>/Switch' */

  /* S-Function (stiiqmath_iqmpy): '<S3>/IQN x IQN1' */

  /* C28x IQmath Library (stiiqmath_iqmpy) - '<S3>/IQN x IQN1' */
  {
    rtb_Sum2 = _IQ24mpy (rtb_Saturation, rtb_Gain4);
  }

  /* Sum: '<S3>/Sum1' incorporates:
   *  Sum: '<S3>/Sum2'
   *  UnitDelay: '<S3>/Unit Delay'
   */
  rtb_Sum1 = rtb_Sum2 + Controller_DW.UnitDelay_DSTATE_m;

  /* Sum: '<S3>/Sum2' incorporates:
   *  S-Function (stiiqmath_iqmpy): '<S3>/IQN x IQN'
   *  Sum: '<S3>/Sum1'
   */
  rtb_Sum2 = rtb_IQNxIQN + rtb_Sum1;

  /* Saturate: '<S3>/Saturation' incorporates:
   *  Sum: '<S3>/Sum2'
   */
  if (rtb_Sum2 > Controller_P.Saturation_UpperSat) {
    rtb_Saturation = Controller_P.Saturation_UpperSat;
  } else if (rtb_Sum2 < Controller_P.Saturation_LowerSat) {
    rtb_Saturation = Controller_P.Saturation_LowerSat;
  } else {
    rtb_Saturation = rtb_Sum2;
  }

  /* End of Saturate: '<S3>/Saturation' */

  /* DataTypeConversion: '<S2>/Data Type Conversion6' incorporates:
   *  DataTypeConversion: '<S3>/Subsystem_boundary_DTC2'
   *  Saturate: '<S3>/Saturation'
   */
  tmp_0 = (real_T)rtb_Saturation * 5.9604644775390625E-8;

  /* Gain: '<S2>/Gain4' incorporates:
   *  DataTypeConversion: '<S2>/Data Type Conversion6'
   */
  tmp = fmod(trunc(tmp_0 * (real_T)Controller_P.Gain4_Gain * 1.048576E+6),
             4.294967296E+9);
  rtb_Gain4 = tmp < 0.0 ? -(int32_T)(uint32_T)-tmp : (int32_T)(uint32_T)tmp;

  /* Gain: '<S4>/Inverse TBPRD' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion3'
   *  Gain: '<S2>/Gain4'
   */
  Controller_B.Duty = (real_T)rtb_Gain4 * 9.5367431640625E-7 *
    Controller_P.InverseTBPRD_Gain;

  /* Clock: '<S8>/Clock1' */
  Controller_B.Clock1 = Controller_M->Timing.t[0];

  /* Math: '<S8>/Math Function2' incorporates:
   *  Constant: '<S8>/Time_Period'
   */
  Controller_B.MathFunction2 = rt_remd_snf(Controller_B.Clock1,
    Controller_P.Tpwm);

  /* Gain: '<S8>/Gain1' */
  Controller_B.Gain1 = Controller_P.FPWM * Controller_B.MathFunction2;

  /* Gain: '<S2>/Gain6' incorporates:
   *  DataTypeConversion: '<S4>/Data Type Conversion1'
   *  RelationalOperator: '<S4>/Relational Operator'
   */
  Controller_B.Gain6 = (real_T)(Controller_B.Duty >= Controller_B.Gain1) *
    Controller_P.Gain6_Gain;

  /* Outport: '<Root>/Sw1' */
  Controller_Y.Sw1 = Controller_B.Gain6;

  /* DataTypeConversion: '<S3>/Subsystem_boundary_DTC3' incorporates:
   *  Sum: '<S3>/Sum2'
   */
  rtb_Subsystem_boundary_DTC3 = (real_T)rtb_Sum2 * 5.9604644775390625E-8;

  /* RelationalOperator: '<S5>/Relational Operator' */
  rtb_RelationalOperator = (tmp_0 == rtb_Subsystem_boundary_DTC3);

  /* Gain: '<S1>/VoltageScaling' incorporates:
   *  Inport: '<Root>/Vout'
   */
  rtb_VoltageScaling = Controller_P.VSF * Controller_U.VoltageOutput;

  /* Matfile logging */
  rt_UpdateTXYLogVars(Controller_M->rtwLogInfo, (Controller_M->Timing.t));

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  Controller_DW.UnitDelay_DSTATE = rtb_VoltageScaling;

  /* Update for UnitDelay: '<S5>/Unit Delay1' */
  Controller_DW.UnitDelay1_DSTATE = rtb_RelationalOperator;

  /* Update for UnitDelay: '<S5>/Unit Delay' */
  Controller_DW.UnitDelay_DSTATE_b = rtb_Subsystem_boundary_DTC3;

  /* Update for UnitDelay: '<S3>/Unit Delay' incorporates:
   *  Sum: '<S3>/Sum1'
   */
  Controller_DW.UnitDelay_DSTATE_m = rtb_Sum1;

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.0s, 0.0s] */
    if ((rtmGetTFinal(Controller_M)!=-1) &&
        !((rtmGetTFinal(Controller_M)-Controller_M->Timing.t[0]) >
          Controller_M->Timing.t[0] * (DBL_EPSILON))) {
      rtmSetErrorStatus(Controller_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++Controller_M->Timing.clockTick0)) {
    ++Controller_M->Timing.clockTickH0;
  }

  Controller_M->Timing.t[0] = Controller_M->Timing.clockTick0 *
    Controller_M->Timing.stepSize0 + Controller_M->Timing.clockTickH0 *
    Controller_M->Timing.stepSize0 * 4294967296.0;

  {
    /* Update absolute timer for sample time: [5.0E-6s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 5.0E-6, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick1 and the high bits
     * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
     */
    Controller_M->Timing.clockTick1++;
    if (!Controller_M->Timing.clockTick1) {
      Controller_M->Timing.clockTickH1++;
    }
  }
}

/* Model initialize function */
void Controller_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)Controller_M, 0,
                sizeof(RT_MODEL_Controller_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&Controller_M->solverInfo,
                          &Controller_M->Timing.simTimeStep);
    rtsiSetTPtr(&Controller_M->solverInfo, &rtmGetTPtr(Controller_M));
    rtsiSetStepSizePtr(&Controller_M->solverInfo,
                       &Controller_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&Controller_M->solverInfo, (&rtmGetErrorStatus
      (Controller_M)));
    rtsiSetRTModelPtr(&Controller_M->solverInfo, Controller_M);
  }

  rtsiSetSimTimeStep(&Controller_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&Controller_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(Controller_M, &Controller_M->Timing.tArray[0]);
  rtmSetTFinal(Controller_M, 0.1);
  Controller_M->Timing.stepSize0 = 5.0E-6;

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    Controller_M->rtwLogInfo = &rt_DataLoggingInfo;
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(Controller_M->rtwLogInfo, (NULL));
    rtliSetLogXSignalPtrs(Controller_M->rtwLogInfo, (NULL));
    rtliSetLogT(Controller_M->rtwLogInfo, "tout");
    rtliSetLogX(Controller_M->rtwLogInfo, "");
    rtliSetLogXFinal(Controller_M->rtwLogInfo, "");
    rtliSetLogVarNameModifier(Controller_M->rtwLogInfo, "rt_");
    rtliSetLogFormat(Controller_M->rtwLogInfo, 4);
    rtliSetLogMaxRows(Controller_M->rtwLogInfo, 0);
    rtliSetLogDecimation(Controller_M->rtwLogInfo, 1);
    rtliSetLogY(Controller_M->rtwLogInfo, "");
    rtliSetLogYSignalInfo(Controller_M->rtwLogInfo, (NULL));
    rtliSetLogYSignalPtrs(Controller_M->rtwLogInfo, (NULL));
  }

  /* block I/O */
  (void) memset(((void *) &Controller_B), 0,
                sizeof(B_Controller_T));

  /* states (dwork) */
  (void) memset((void *)&Controller_DW, 0,
                sizeof(DW_Controller_T));

  /* external inputs */
  Controller_U.VoltageOutput = 0.0;

  /* external outputs */
  Controller_Y.Sw1 = 0.0;

  /* Matfile logging */
  rt_StartDataLoggingWithStartTime(Controller_M->rtwLogInfo, 0.0, rtmGetTFinal
    (Controller_M), Controller_M->Timing.stepSize0, (&rtmGetErrorStatus
    (Controller_M)));

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  Controller_DW.UnitDelay_DSTATE = Controller_P.UnitDelay_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S5>/Unit Delay1' */
  Controller_DW.UnitDelay1_DSTATE = Controller_P.UnitDelay1_InitialCondition;

  /* InitializeConditions for UnitDelay: '<S5>/Unit Delay' */
  Controller_DW.UnitDelay_DSTATE_b = Controller_P.UnitDelay_InitialCondition_a;

  /* InitializeConditions for UnitDelay: '<S3>/Unit Delay' */
  Controller_DW.UnitDelay_DSTATE_m = Controller_P.UnitDelay_InitialCondition_f;
}

/* Model terminate function */
void Controller_terminate(void)
{
  /* (no terminate code required) */
}
