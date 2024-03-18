/*
 * File: DCDC_Buck_data.c
 *
 * Code generated for Simulink model 'DCDC_Buck'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Sat Mar 16 15:06:16 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "DCDC_Buck.h"
#include "DCDC_Buck_private.h"

/* Block parameters (default storage) */
P_DCDC_Buck_T DCDC_Buck_P = {
  /* Variable: FPWM
   * Referenced by: '<S9>/Gain1'
   */
  200000.0,

  /* Variable: Gi
   * Referenced by: '<S16>/Gain'
   */
  0.439,

  /* Variable: Tpwm
   * Referenced by: '<S9>/Time_Period'
   */
  5.0E-6,

  /* Variable: VSF
   * Referenced by:
   *   '<S1>/VoltageScaling'
   *   '<S1>/VoltageScaling1'
   */
  0.439,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S7>/Constant'
   */
  0.0,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S8>/Constant'
   */
  0.0F,

  /* Expression: 0.003
   * Referenced by: '<S1>/Constant2'
   */
  0.003,

  /* Expression: 0.05
   * Referenced by: '<S2>/Step'
   */
  0.05,

  /* Expression: 0
   * Referenced by: '<S2>/Step'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S2>/Step'
   */
  1.0,

  /* Expression: 9
   * Referenced by: '<S10>/Gain'
   */
  9.0,

  /* Expression: 5
   * Referenced by: '<S1>/Constant'
   */
  5.0,

  /* Expression: 1
   * Referenced by: '<S3>/PerUnitConvRate'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S3>/PerUnitConvRate1'
   */
  1.0,

  /* Expression: 0.003
   * Referenced by: '<S1>/Constant1'
   */
  0.003,

  /* Expression: 0
   * Referenced by: '<S6>/Unit Delay'
   */
  0.0,

  /* Expression: 1/TBPRD
   * Referenced by: '<S5>/Inverse TBPRD'
   */
  0.001,

  /* Expression: 9
   * Referenced by: '<S3>/Gain6'
   */
  9.0,

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S6>/Constant'
   */
  0,

  /* Computed Parameter: UnitDelay_InitialCondition_f
   * Referenced by: '<S4>/Unit Delay'
   */
  0,

  /* Computed Parameter: Saturation_UpperSat
   * Referenced by: '<S4>/Saturation'
   */
  13421773,

  /* Computed Parameter: Saturation_LowerSat
   * Referenced by: '<S4>/Saturation'
   */
  0,

  /* Expression: TBPRD
   * Referenced by: '<S3>/Gain4'
   */
  1000,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S6>/Unit Delay1'
   */
  false
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
