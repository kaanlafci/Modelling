/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration'.
 */

#include "ne_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_sys_struct.h"
#include "DCDC_Buck_9d5357ce_1_ds_tdxf_p.h"
#include "DCDC_Buck_9d5357ce_1_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_externals.h"
#include "DCDC_Buck_9d5357ce_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T DCDC_Buck_9d5357ce_1_ds_tdxf_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  static int32_T _cg_const_2[120] = { 1, 2, 3, 4, 12, 13, 16, 17, 18, 0, 15, 1,
    4, 7, 16, 18, 21, 1, 16, 3, 6, 12, 17, 20, 22, 3, 17, 4, 18, 5, 19, 6, 20, 8,
    21, 9, 12, 22, 25, 26, 10, 23, 27, 28, 11, 24, 29, 30, 1, 13, 14, 16, 13, 14,
    1, 2, 3, 4, 12, 13, 16, 17, 18, 0, 15, 1, 4, 5, 6, 16, 18, 19, 20, 1, 4, 7,
    16, 18, 21, 1, 3, 6, 12, 16, 17, 20, 3, 4, 6, 17, 18, 20, 21, 8, 21, 9, 12,
    22, 25, 26, 22, 25, 22, 26, 10, 23, 27, 28, 23, 27, 23, 28, 11, 24, 29, 30,
    24, 29, 24, 30 };

  PmSparsityPattern out;
  int32_T b;
  (void)t1;
  out = t2->mTDXF_P;
  out.mNumCol = 31ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 9;
  out.mJc[2] = 11;
  out.mJc[3] = 17;
  out.mJc[4] = 19;
  out.mJc[5] = 25;
  out.mJc[6] = 27;
  out.mJc[7] = 29;
  out.mJc[8] = 31;
  out.mJc[9] = 33;
  out.mJc[10] = 35;
  out.mJc[11] = 40;
  out.mJc[12] = 44;
  out.mJc[13] = 48;
  out.mJc[14] = 52;
  out.mJc[15] = 54;
  out.mJc[16] = 63;
  out.mJc[17] = 65;
  out.mJc[18] = 73;
  out.mJc[19] = 79;
  out.mJc[20] = 86;
  out.mJc[21] = 93;
  out.mJc[22] = 95;
  out.mJc[23] = 100;
  out.mJc[24] = 102;
  out.mJc[25] = 104;
  out.mJc[26] = 108;
  out.mJc[27] = 110;
  out.mJc[28] = 112;
  out.mJc[29] = 116;
  out.mJc[30] = 118;
  out.mJc[31] = 120;
  for (b = 0; b < 120; b++) {
    out.mIr[b] = _cg_const_2[b];
  }

  (void)sys;
  (void)t2;
  return 0;
}
