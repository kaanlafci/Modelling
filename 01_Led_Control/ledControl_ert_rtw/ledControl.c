/*
 * File: ledControl.c
 *
 * Code generated for Simulink model 'ledControl'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Sat Feb 24 02:32:27 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ledControl.h"
#include "ledControl_private.h"

/* Block signals (default storage) */
B_ledControl_T ledControl_B;

/* Block states (default storage) */
DW_ledControl_T ledControl_DW;

/* Real-time model */
static RT_MODEL_ledControl_T ledControl_M_;
RT_MODEL_ledControl_T *const ledControl_M = &ledControl_M_;
static void rate_monotonic_scheduler(void);

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void ledControl_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(ledControl_M, 1));
}

/*
 *         This function updates active task flag for each subrate
 *         and rate transition flags for tasks that exchange data.
 *         The function assumes rate-monotonic multitasking scheduler.
 *         The function must be called at model base rate so that
 *         the generated code self-manages all its subrates and rate
 *         transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (ledControl_M->Timing.TaskCounters.TID[1])++;
  if ((ledControl_M->Timing.TaskCounters.TID[1]) > 1) {/* Sample time: [0.25s, 0.0s] */
    ledControl_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/* Model step function for TID0 */
void ledControl_step0(void)            /* Sample time: [0.125s, 0.0s] */
{
  {                                    /* Sample time: [0.125s, 0.0s] */
    rate_monotonic_scheduler();
  }

  /* DiscretePulseGenerator: '<Root>/Pulse Generator1' */
  ledControl_B.PulseGenerator1 = (ledControl_DW.clockTickCounter <
    ledControl_P.PulseGenerator1_Duty) && (ledControl_DW.clockTickCounter >= 0L)
    ? ledControl_P.PulseGenerator1_Amp : 0.0;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator1' */
  if (ledControl_DW.clockTickCounter >= ledControl_P.PulseGenerator1_Period -
      1.0) {
    ledControl_DW.clockTickCounter = 0L;
  } else {
    ledControl_DW.clockTickCounter++;
  }

  /* S-Function (c280xgpio_do): '<Root>/Digital Output1' */
  {
    if (ledControl_B.PulseGenerator1)
      GpioDataRegs.GPASET.bit.GPIO31 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO31 = 1;
  }
}

/* Model step function for TID1 */
void ledControl_step1(void)            /* Sample time: [0.25s, 0.0s] */
{
  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  ledControl_B.PulseGenerator = (ledControl_DW.clockTickCounter_d <
    ledControl_P.PulseGenerator_Duty) && (ledControl_DW.clockTickCounter_d >= 0L)
    ? ledControl_P.PulseGenerator_Amp : 0.0;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  if (ledControl_DW.clockTickCounter_d >= ledControl_P.PulseGenerator_Period -
      1.0) {
    ledControl_DW.clockTickCounter_d = 0L;
  } else {
    ledControl_DW.clockTickCounter_d++;
  }

  /* S-Function (c280xgpio_do): '<Root>/Digital Output' */
  {
    if (ledControl_B.PulseGenerator)
      GpioDataRegs.GPASET.bit.GPIO24 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO24 = 1;
  }
}

/* Model initialize function */
void ledControl_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)ledControl_M, 0,
                sizeof(RT_MODEL_ledControl_T));

  /* block I/O */
  (void) memset(((void *) &ledControl_B), 0,
                sizeof(B_ledControl_T));

  /* states (dwork) */
  (void) memset((void *)&ledControl_DW, 0,
                sizeof(DW_ledControl_T));

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator1' */
  ledControl_DW.clockTickCounter = 0L;

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output1' */
  EALLOW;
  GpioCtrlRegs.GPAMUX2.all &= 0x3FFFFFFF;
  GpioCtrlRegs.GPADIR.all |= 0x80000000;
  EDIS;

  /* Start for DiscretePulseGenerator: '<Root>/Pulse Generator' */
  ledControl_DW.clockTickCounter_d = 0L;

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output' */
  EALLOW;
  GpioCtrlRegs.GPAMUX2.all &= 0xFFFCFFFF;
  GpioCtrlRegs.GPADIR.all |= 0x1000000;
  EDIS;
}

/* Model terminate function */
void ledControl_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
