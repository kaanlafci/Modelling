/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration'.
 */

#include "ne_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_sys_struct.h"
#include "DCDC_Buck_9d5357ce_1_ds_a_p.h"
#include "DCDC_Buck_9d5357ce_1_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_externals.h"
#include "DCDC_Buck_9d5357ce_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T DCDC_Buck_9d5357ce_1_ds_a_p(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mA_P;
  out.mNumCol = 31ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 8;
  out.mJc[2] = 10;
  out.mJc[3] = 16;
  out.mJc[4] = 18;
  out.mJc[5] = 23;
  out.mJc[6] = 25;
  out.mJc[7] = 27;
  out.mJc[8] = 29;
  out.mJc[9] = 31;
  out.mJc[10] = 33;
  out.mJc[11] = 35;
  out.mJc[12] = 36;
  out.mJc[13] = 37;
  out.mJc[14] = 39;
  out.mJc[15] = 39;
  out.mJc[16] = 47;
  out.mJc[17] = 49;
  out.mJc[18] = 57;
  out.mJc[19] = 63;
  out.mJc[20] = 70;
  out.mJc[21] = 77;
  out.mJc[22] = 79;
  out.mJc[23] = 81;
  out.mJc[24] = 81;
  out.mJc[25] = 81;
  out.mJc[26] = 82;
  out.mJc[27] = 82;
  out.mJc[28] = 82;
  out.mJc[29] = 83;
  out.mJc[30] = 83;
  out.mJc[31] = 83;
  out.mIr[0] = 1;
  out.mIr[1] = 2;
  out.mIr[2] = 3;
  out.mIr[3] = 4;
  out.mIr[4] = 12;
  out.mIr[5] = 16;
  out.mIr[6] = 17;
  out.mIr[7] = 18;
  out.mIr[8] = 0;
  out.mIr[9] = 15;
  out.mIr[10] = 1;
  out.mIr[11] = 4;
  out.mIr[12] = 7;
  out.mIr[13] = 16;
  out.mIr[14] = 18;
  out.mIr[15] = 21;
  out.mIr[16] = 1;
  out.mIr[17] = 16;
  out.mIr[18] = 3;
  out.mIr[19] = 6;
  out.mIr[20] = 12;
  out.mIr[21] = 17;
  out.mIr[22] = 20;
  out.mIr[23] = 3;
  out.mIr[24] = 17;
  out.mIr[25] = 4;
  out.mIr[26] = 18;
  out.mIr[27] = 5;
  out.mIr[28] = 19;
  out.mIr[29] = 6;
  out.mIr[30] = 20;
  out.mIr[31] = 8;
  out.mIr[32] = 21;
  out.mIr[33] = 9;
  out.mIr[34] = 12;
  out.mIr[35] = 10;
  out.mIr[36] = 11;
  out.mIr[37] = 1;
  out.mIr[38] = 16;
  out.mIr[39] = 1;
  out.mIr[40] = 2;
  out.mIr[41] = 3;
  out.mIr[42] = 4;
  out.mIr[43] = 12;
  out.mIr[44] = 16;
  out.mIr[45] = 17;
  out.mIr[46] = 18;
  out.mIr[47] = 0;
  out.mIr[48] = 15;
  out.mIr[49] = 1;
  out.mIr[50] = 4;
  out.mIr[51] = 5;
  out.mIr[52] = 6;
  out.mIr[53] = 16;
  out.mIr[54] = 18;
  out.mIr[55] = 19;
  out.mIr[56] = 20;
  out.mIr[57] = 1;
  out.mIr[58] = 4;
  out.mIr[59] = 7;
  out.mIr[60] = 16;
  out.mIr[61] = 18;
  out.mIr[62] = 21;
  out.mIr[63] = 1;
  out.mIr[64] = 3;
  out.mIr[65] = 6;
  out.mIr[66] = 12;
  out.mIr[67] = 16;
  out.mIr[68] = 17;
  out.mIr[69] = 20;
  out.mIr[70] = 3;
  out.mIr[71] = 4;
  out.mIr[72] = 6;
  out.mIr[73] = 17;
  out.mIr[74] = 18;
  out.mIr[75] = 20;
  out.mIr[76] = 21;
  out.mIr[77] = 8;
  out.mIr[78] = 21;
  out.mIr[79] = 9;
  out.mIr[80] = 12;
  out.mIr[81] = 10;
  out.mIr[82] = 11;
  (void)sys;
  (void)t2;
  return 0;
}
