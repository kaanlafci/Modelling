/*
 * Controller_data.c
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

/* Block parameters (default storage) */
P_Controller_T Controller_P = {
  /* Variable: FPWM
   * Referenced by: '<S8>/Gain1'
   */
  200000.0,

  /* Variable: Tpwm
   * Referenced by: '<S8>/Time_Period'
   */
  5.0E-6,

  /* Variable: VSF
   * Referenced by:
   *   '<S1>/VoltageScaling'
   *   '<S1>/VoltageScaling1'
   */
  0.439,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S6>/Constant'
   */
  0.0,

  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S7>/Constant'
   */
  0.0,

  /* Expression: 0.003
   * Referenced by: '<S1>/Constant2'
   */
  0.003,

  /* Expression: 5
   * Referenced by: '<S1>/Constant'
   */
  5.0,

  /* Expression: 1
   * Referenced by: '<S2>/PerUnitConvRate'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S1>/Unit Delay'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S2>/PerUnitConvRate1'
   */
  1.0,

  /* Expression: 0.003
   * Referenced by: '<S1>/Constant1'
   */
  0.003,

  /* Expression: 0
   * Referenced by: '<S5>/Unit Delay'
   */
  0.0,

  /* Expression: 1/TBPRD
   * Referenced by: '<S4>/Inverse TBPRD'
   */
  0.001,

  /* Expression: 9
   * Referenced by: '<S2>/Gain6'
   */
  9.0,

  /* Computed Parameter: Constant_Value_f
   * Referenced by: '<S5>/Constant'
   */
  0,

  /* Computed Parameter: UnitDelay_InitialCondition_f
   * Referenced by: '<S3>/Unit Delay'
   */
  0,

  /* Computed Parameter: Saturation_UpperSat
   * Referenced by: '<S3>/Saturation'
   */
  13421773,

  /* Computed Parameter: Saturation_LowerSat
   * Referenced by: '<S3>/Saturation'
   */
  0,

  /* Expression: TBPRD
   * Referenced by: '<S2>/Gain4'
   */
  1000,

  /* Computed Parameter: UnitDelay1_InitialCondition
   * Referenced by: '<S5>/Unit Delay1'
   */
  false
};
