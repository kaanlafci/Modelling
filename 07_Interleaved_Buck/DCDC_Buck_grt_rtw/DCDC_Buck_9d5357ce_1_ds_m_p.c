/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration'.
 */

#include "ne_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_sys_struct.h"
#include "DCDC_Buck_9d5357ce_1_ds_m_p.h"
#include "DCDC_Buck_9d5357ce_1_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_externals.h"
#include "DCDC_Buck_9d5357ce_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T DCDC_Buck_9d5357ce_1_ds_m_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mM_P;
  out.mNumCol = 31ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 4;
  out.mJc[5] = 5;
  out.mJc[6] = 6;
  out.mJc[7] = 7;
  out.mJc[8] = 8;
  out.mJc[9] = 9;
  out.mJc[10] = 10;
  out.mJc[11] = 11;
  out.mJc[12] = 12;
  out.mJc[13] = 13;
  out.mJc[14] = 13;
  out.mJc[15] = 13;
  out.mJc[16] = 13;
  out.mJc[17] = 13;
  out.mJc[18] = 13;
  out.mJc[19] = 13;
  out.mJc[20] = 13;
  out.mJc[21] = 13;
  out.mJc[22] = 13;
  out.mJc[23] = 13;
  out.mJc[24] = 13;
  out.mJc[25] = 13;
  out.mJc[26] = 13;
  out.mJc[27] = 13;
  out.mJc[28] = 13;
  out.mJc[29] = 13;
  out.mJc[30] = 13;
  out.mJc[31] = 13;
  out.mIr[0] = 2;
  out.mIr[1] = 0;
  out.mIr[2] = 7;
  out.mIr[3] = 1;
  out.mIr[4] = 12;
  out.mIr[5] = 3;
  out.mIr[6] = 4;
  out.mIr[7] = 5;
  out.mIr[8] = 6;
  out.mIr[9] = 8;
  out.mIr[10] = 9;
  out.mIr[11] = 10;
  out.mIr[12] = 11;
  (void)sys;
  (void)t2;
  return 0;
}
