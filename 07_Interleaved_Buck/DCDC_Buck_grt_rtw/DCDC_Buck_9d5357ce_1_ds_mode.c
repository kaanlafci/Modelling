/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration'.
 */

#include "ne_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_sys_struct.h"
#include "DCDC_Buck_9d5357ce_1_ds_mode.h"
#include "DCDC_Buck_9d5357ce_1_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_externals.h"
#include "DCDC_Buck_9d5357ce_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T DCDC_Buck_9d5357ce_1_ds_mode(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t3, NeDsMethodOutput *t4)
{
  PmIntVector out;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_22;
  real_T X_idx_25;
  real_T X_idx_28;
  U_idx_0 = t3->mU.mX[0];
  U_idx_1 = t3->mU.mX[1];
  U_idx_2 = t3->mU.mX[2];
  U_idx_3 = t3->mU.mX[3];
  X_idx_10 = t3->mX.mX[10];
  X_idx_11 = t3->mX.mX[11];
  X_idx_12 = t3->mX.mX[12];
  X_idx_13 = t3->mX.mX[13];
  X_idx_22 = t3->mX.mX[22];
  X_idx_25 = t3->mX.mX[25];
  X_idx_28 = t3->mX.mX[28];
  out = t4->mMODE;
  out.mX[0] = (int32_T)(-X_idx_13 > 1.6);
  out.mX[1] = (int32_T)(U_idx_0 > 3.0);
  out.mX[2] = (int32_T)(U_idx_3 > 1.5);
  out.mX[3] = (int32_T)((X_idx_22 * 1.0E-6 + X_idx_10) * 1.602176487E-19 /
                        4.3497335432938027E-21 < -79.0);
  out.mX[4] = (int32_T)((X_idx_25 * 1.0E-6 + X_idx_11) * 1.602176487E-19 /
                        4.3497335432938027E-21 < -79.0);
  out.mX[5] = (int32_T)((X_idx_28 * 1.0E-6 + X_idx_12) * 1.602176487E-19 /
                        4.3497335432938027E-21 < -79.0);
  out.mX[6] = (int32_T)((-X_idx_10 + X_idx_22 * -1.0E-6) + -9.0 > 0.85);
  out.mX[7] = (int32_T)(U_idx_1 > 1.5);
  out.mX[8] = (int32_T)((-X_idx_11 + X_idx_25 * -1.0E-6) + -9.0 > 0.85);
  out.mX[9] = (int32_T)(U_idx_2 > 1.5);
  out.mX[10] = (int32_T)((-X_idx_12 + X_idx_28 * -1.0E-6) + -9.0 > 0.85);
  (void)sys;
  (void)t4;
  return 0;
}
