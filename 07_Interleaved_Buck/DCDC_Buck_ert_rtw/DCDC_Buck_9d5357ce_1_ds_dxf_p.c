/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration'.
 */

#include "ne_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_sys_struct.h"
#include "DCDC_Buck_9d5357ce_1_ds_dxf_p.h"
#include "DCDC_Buck_9d5357ce_1_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_externals.h"
#include "DCDC_Buck_9d5357ce_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T DCDC_Buck_9d5357ce_1_ds_dxf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXF_P;
  out.mNumCol = 31ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 1;
  out.mJc[3] = 1;
  out.mJc[4] = 1;
  out.mJc[5] = 2;
  out.mJc[6] = 2;
  out.mJc[7] = 2;
  out.mJc[8] = 2;
  out.mJc[9] = 2;
  out.mJc[10] = 2;
  out.mJc[11] = 5;
  out.mJc[12] = 8;
  out.mJc[13] = 11;
  out.mJc[14] = 13;
  out.mJc[15] = 15;
  out.mJc[16] = 16;
  out.mJc[17] = 16;
  out.mJc[18] = 16;
  out.mJc[19] = 16;
  out.mJc[20] = 16;
  out.mJc[21] = 16;
  out.mJc[22] = 16;
  out.mJc[23] = 19;
  out.mJc[24] = 21;
  out.mJc[25] = 23;
  out.mJc[26] = 26;
  out.mJc[27] = 28;
  out.mJc[28] = 30;
  out.mJc[29] = 33;
  out.mJc[30] = 35;
  out.mJc[31] = 37;
  out.mIr[0] = 13;
  out.mIr[1] = 22;
  out.mIr[2] = 22;
  out.mIr[3] = 25;
  out.mIr[4] = 26;
  out.mIr[5] = 23;
  out.mIr[6] = 27;
  out.mIr[7] = 28;
  out.mIr[8] = 24;
  out.mIr[9] = 29;
  out.mIr[10] = 30;
  out.mIr[11] = 13;
  out.mIr[12] = 14;
  out.mIr[13] = 13;
  out.mIr[14] = 14;
  out.mIr[15] = 13;
  out.mIr[16] = 22;
  out.mIr[17] = 25;
  out.mIr[18] = 26;
  out.mIr[19] = 22;
  out.mIr[20] = 25;
  out.mIr[21] = 22;
  out.mIr[22] = 26;
  out.mIr[23] = 23;
  out.mIr[24] = 27;
  out.mIr[25] = 28;
  out.mIr[26] = 23;
  out.mIr[27] = 27;
  out.mIr[28] = 23;
  out.mIr[29] = 28;
  out.mIr[30] = 24;
  out.mIr[31] = 29;
  out.mIr[32] = 30;
  out.mIr[33] = 24;
  out.mIr[34] = 29;
  out.mIr[35] = 24;
  out.mIr[36] = 30;
  (void)sys;
  (void)t2;
  return 0;
}
