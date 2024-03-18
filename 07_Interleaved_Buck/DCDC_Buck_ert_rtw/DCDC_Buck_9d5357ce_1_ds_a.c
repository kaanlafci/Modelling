/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration'.
 */

#include "ne_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_sys_struct.h"
#include "DCDC_Buck_9d5357ce_1_ds_a.h"
#include "DCDC_Buck_9d5357ce_1_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_externals.h"
#include "DCDC_Buck_9d5357ce_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T DCDC_Buck_9d5357ce_1_ds_a(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t69, NeDsMethodOutput *t70)
{
  PmRealVector out;
  real_T t0[83];
  real_T t1[8];
  real_T t13[8];
  real_T t15[8];
  real_T t17[7];
  real_T t18[7];
  real_T t16[6];
  real_T t3[6];
  real_T t5[5];
  size_t t37;
  (void)t69;
  out = t70->mA;
  t1[0ULL] = 0.6333333333333333;
  t1[1ULL] = -0.0;
  t1[2ULL] = 0.012195121951219513;
  t1[3ULL] = 0.012195121951219513;
  t1[4ULL] = 1.0;
  t1[5ULL] = 1.0012666666666667;
  t1[6ULL] = 1.000000012195122;
  t1[7ULL] = 1.000000012195122;
  t3[0ULL] = 0.00083333333333333339;
  t3[1ULL] = -0.00083333333333333339;
  t3[2ULL] = -0.0;
  t3[3ULL] = 1.6666666666666669E-6;
  t3[4ULL] = -8.3333333333333335E-10;
  t3[5ULL] = 0.001;
  t5[0ULL] = -1.0;
  t5[1ULL] = -1.0;
  t5[2ULL] = 0.0105;
  t5[3ULL] = -1.0E-6;
  t5[4ULL] = -1.0E-6;
  t13[0ULL] = 1.0012666666666667;
  t13[1ULL] = -1.0;
  t13[2ULL] = 2.4390243902439026E-5;
  t13[3ULL] = 2.4390243902439026E-5;
  t13[4ULL] = 0.002;
  t13[5ULL] = 0.004002533333333334;
  t13[6ULL] = 0.0020000000243902438;
  t13[7ULL] = 0.0020000000243902438;
  t15[0ULL] = 1.0;
  t15[1ULL] = -1.0;
  t15[2ULL] = -1.0;
  t15[3ULL] = -1.0;
  t15[4ULL] = 0.002;
  t15[5ULL] = -1.0E-6;
  t15[6ULL] = -1.0E-6;
  t15[7ULL] = -1.0E-6;
  t16[0ULL] = 1.0000000008333334;
  t16[1ULL] = -1.0000000008333334;
  t16[2ULL] = -1.0;
  t16[3ULL] = 0.0020000000016666668;
  t16[4ULL] = -1.0000000008333334E-6;
  t16[5ULL] = 9.9999999999999986E-10;
  t17[0ULL] = -1.0;
  t17[1ULL] = 1.0003658536585365;
  t17[2ULL] = 0.99999999999999989;
  t17[3ULL] = 0.03;
  t17[4ULL] = -0.002;
  t17[5ULL] = 0.030001000365853656;
  t17[6ULL] = 9.9999999999999974E-7;
  t18[0ULL] = -0.012195121951219513;
  t18[1ULL] = -0.012195121951219513;
  t18[2ULL] = 0.0008333333333333335;
  t18[3ULL] = -1.000000012195122;
  t18[4ULL] = -1.000000012195122;
  t18[5ULL] = 1.0000000008333334;
  t18[6ULL] = -0.001;
  for (t37 = 0ULL; t37 < 8ULL; t37++) {
    t0[t37] = t1[t37];
  }

  t0[8ULL] = -0.0;
  t0[9ULL] = -1.0;
  for (t37 = 0ULL; t37 < 6ULL; t37++) {
    t0[t37 + 10ULL] = t3[t37];
  }

  t0[16ULL] = -0.0;
  t0[17ULL] = -1.0;
  for (t37 = 0ULL; t37 < 5ULL; t37++) {
    t0[t37 + 18ULL] = t5[t37];
  }

  t0[23ULL] = -0.0;
  t0[24ULL] = -1.0;
  t0[25ULL] = -0.0;
  t0[26ULL] = -1.0;
  t0[27ULL] = -0.0;
  t0[28ULL] = -1.0;
  t0[29ULL] = -0.0;
  t0[30ULL] = -1.0;
  t0[31ULL] = -0.0;
  t0[32ULL] = 0.001;
  t0[33ULL] = -0.0;
  t0[34ULL] = 1.0;
  t0[35ULL] = -0.0;
  t0[36ULL] = -0.0;
  t0[37ULL] = -0.5;
  t0[38ULL] = -0.001;
  for (t37 = 0ULL; t37 < 8ULL; t37++) {
    t0[t37 + 39ULL] = t13[t37];
  }

  t0[47ULL] = -1.0;
  t0[48ULL] = -1.0E-6;
  for (t37 = 0ULL; t37 < 8ULL; t37++) {
    t0[t37 + 49ULL] = t15[t37];
  }

  for (t37 = 0ULL; t37 < 6ULL; t37++) {
    t0[t37 + 57ULL] = t16[t37];
  }

  for (t37 = 0ULL; t37 < 7ULL; t37++) {
    t0[t37 + 63ULL] = t17[t37];
  }

  for (t37 = 0ULL; t37 < 7ULL; t37++) {
    t0[t37 + 70ULL] = t18[t37];
  }

  out.mX[0] = t0[0];
  out.mX[1] = t0[1];
  out.mX[2] = t0[2];
  out.mX[3] = t0[3];
  out.mX[4] = t0[4];
  out.mX[5] = t0[5];
  out.mX[6] = t0[6];
  out.mX[7] = t0[7];
  out.mX[8] = t0[8];
  out.mX[9] = t0[9];
  out.mX[10] = t0[10];
  out.mX[11] = t0[11];
  out.mX[12] = t0[12];
  out.mX[13] = t0[13];
  out.mX[14] = t0[14];
  out.mX[15] = t0[15];
  out.mX[16] = t0[16];
  out.mX[17] = t0[17];
  out.mX[18] = t0[18];
  out.mX[19] = t0[19];
  out.mX[20] = t0[20];
  out.mX[21] = t0[21];
  out.mX[22] = t0[22];
  out.mX[23] = t0[23];
  out.mX[24] = t0[24];
  out.mX[25] = t0[25];
  out.mX[26] = t0[26];
  out.mX[27] = t0[27];
  out.mX[28] = t0[28];
  out.mX[29] = t0[29];
  out.mX[30] = t0[30];
  out.mX[31] = t0[31];
  out.mX[32] = t0[32];
  out.mX[33] = t0[33];
  out.mX[34] = t0[34];
  out.mX[35] = t0[35];
  out.mX[36] = t0[36];
  out.mX[37] = t0[37];
  out.mX[38] = t0[38];
  out.mX[39] = t0[39];
  out.mX[40] = t0[40];
  out.mX[41] = t0[41];
  out.mX[42] = t0[42];
  out.mX[43] = t0[43];
  out.mX[44] = t0[44];
  out.mX[45] = t0[45];
  out.mX[46] = t0[46];
  out.mX[47] = t0[47];
  out.mX[48] = t0[48];
  out.mX[49] = t0[49];
  out.mX[50] = t0[50];
  out.mX[51] = t0[51];
  out.mX[52] = t0[52];
  out.mX[53] = t0[53];
  out.mX[54] = t0[54];
  out.mX[55] = t0[55];
  out.mX[56] = t0[56];
  out.mX[57] = t0[57];
  out.mX[58] = t0[58];
  out.mX[59] = t0[59];
  out.mX[60] = t0[60];
  out.mX[61] = t0[61];
  out.mX[62] = t0[62];
  out.mX[63] = t0[63];
  out.mX[64] = t0[64];
  out.mX[65] = t0[65];
  out.mX[66] = t0[66];
  out.mX[67] = t0[67];
  out.mX[68] = t0[68];
  out.mX[69] = t0[69];
  out.mX[70] = t0[70];
  out.mX[71] = t0[71];
  out.mX[72] = t0[72];
  out.mX[73] = t0[73];
  out.mX[74] = t0[74];
  out.mX[75] = t0[75];
  out.mX[76] = t0[76];
  out.mX[77] = -1.0;
  out.mX[78] = 1.000000001;
  out.mX[79] = -1.0;
  out.mX[80] = 1.0E-6;
  out.mX[81] = -1.0;
  out.mX[82] = -1.0;
  (void)sys;
  (void)t70;
  return 0;
}
