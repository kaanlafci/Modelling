/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration'.
 */

#include "ne_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_sys_struct.h"
#include "DCDC_Buck_9d5357ce_1_ds_dxy_p.h"
#include "DCDC_Buck_9d5357ce_1_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_externals.h"
#include "DCDC_Buck_9d5357ce_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T DCDC_Buck_9d5357ce_1_ds_dxy_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXY_P;
  out.mNumCol = 31ULL;
  out.mNumRow = 2ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 1;
  out.mJc[3] = 1;
  out.mJc[4] = 1;
  out.mJc[5] = 1;
  out.mJc[6] = 1;
  out.mJc[7] = 1;
  out.mJc[8] = 1;
  out.mJc[9] = 1;
  out.mJc[10] = 2;
  out.mJc[11] = 2;
  out.mJc[12] = 2;
  out.mJc[13] = 2;
  out.mJc[14] = 2;
  out.mJc[15] = 2;
  out.mJc[16] = 3;
  out.mJc[17] = 3;
  out.mJc[18] = 3;
  out.mJc[19] = 3;
  out.mJc[20] = 3;
  out.mJc[21] = 3;
  out.mJc[22] = 4;
  out.mJc[23] = 4;
  out.mJc[24] = 4;
  out.mJc[25] = 4;
  out.mJc[26] = 4;
  out.mJc[27] = 4;
  out.mJc[28] = 4;
  out.mJc[29] = 4;
  out.mJc[30] = 4;
  out.mJc[31] = 4;
  out.mIr[0] = 1;
  out.mIr[1] = 0;
  out.mIr[2] = 1;
  out.mIr[3] = 0;
  (void)sys;
  (void)t2;
  return 0;
}
