/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Sat Feb 24 02:47:04 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"

/* Block signals (default storage) */
B_untitled_T untitled_B;

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  /* S-Function (c280xgpio_di): '<Root>/Digital Input' */
  {
    untitled_B.DigitalInput = GpioDataRegs.GPADAT.bit.GPIO0;
  }

  /* S-Function (c280xgpio_do): '<Root>/Digital Output' */
  {
    if (untitled_B.DigitalInput)
      GpioDataRegs.GPASET.bit.GPIO31 = 1;
    else
      GpioDataRegs.GPACLEAR.bit.GPIO31 = 1;
  }
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(untitled_M, (NULL));

  /* block I/O */
  (void) memset(((void *) &untitled_B), 0,
                sizeof(B_untitled_T));

  /* Start for S-Function (c280xgpio_di): '<Root>/Digital Input' */
  EALLOW;
  GpioCtrlRegs.GPAMUX1.all &= 0xFFFFFFFC;
  GpioCtrlRegs.GPADIR.all &= 0xFFFFFFFE;
  EDIS;

  /* Start for S-Function (c280xgpio_do): '<Root>/Digital Output' */
  EALLOW;
  GpioCtrlRegs.GPAMUX2.all &= 0x3FFFFFFF;
  GpioCtrlRegs.GPADIR.all |= 0x80000000;
  EDIS;
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
