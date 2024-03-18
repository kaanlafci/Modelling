/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration'.
 */

#ifdef MATLAB_MEX_FILE
#include "tmwtypes.h"
#else
#include "rtwtypes.h"
#endif

#include "nesl_rtw.h"
#include "DCDC_Buck_9d5357ce_1.h"
#include "DCDC_Buck_9d5357ce_1_gateway.h"

void DCDC_Buck_9d5357ce_1_gateway(void)
{
  NeModelParameters modelparams = { (NeSolverType) 0, 0.001, 0, 0, 0.001, 0, 0,
    0, 0, (SscLoggingSetting) 0, 632502036, 0, };

  NeSolverParameters solverparams = { 0, 0, 1, 0, 0, 0.001, 1e-06, 1e-09, 0, 0,
    100, 0, 1, 0, 1e-08, 0, (NeLocalSolverChoice) 1, 5e-09, 0, 3, 2, 0, 2,
    (NeLinearAlgebraChoice) 1, (NeEquationFormulationChoice) 0, 1024, 1, 0.001,
    (NePartitionStorageMethod) 0, 1024, (NePartitionMethod) 1, };

  const NeOutputParameters* outputparameters = NULL;
  NeDae* dae;
  size_t numOutputs = 0;
  int* rtpDaes = NULL;
  int* rtwLogDaes = NULL;

  {
    static const NeOutputParameters outputparameters_init[] = { { 0, 0, }, };

    outputparameters = outputparameters_init;
    numOutputs = sizeof(outputparameters_init)/sizeof(outputparameters_init[0]);
  }

  DCDC_Buck_9d5357ce_1_dae(&dae,
    &modelparams,
    &solverparams);
  nesl_register_simulator_group(
    "DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration_1",
    1,
    &dae,
    &solverparams,
    &modelparams,
    numOutputs,
    outputparameters,
    0,
    rtpDaes,
    0,
    rtwLogDaes);
}
