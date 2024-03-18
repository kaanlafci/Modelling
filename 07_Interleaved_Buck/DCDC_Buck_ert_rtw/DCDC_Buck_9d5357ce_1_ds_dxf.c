/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration'.
 */

#include "ne_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_sys_struct.h"
#include "DCDC_Buck_9d5357ce_1_ds_dxf.h"
#include "DCDC_Buck_9d5357ce_1_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_externals.h"
#include "DCDC_Buck_9d5357ce_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T DCDC_Buck_9d5357ce_1_ds_dxf(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t89, NeDsMethodOutput *t90)
{
  PmRealVector out;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_22;
  real_T X_idx_25;
  real_T X_idx_28;
  real_T intrm_sf_mf_14;
  real_T t12;
  real_T t2;
  real_T t3;
  real_T t4;
  real_T t6;
  real_T t7;
  real_T t8;
  real_T t9;
  int32_T M_idx_0;
  int32_T M_idx_1;
  int32_T M_idx_10;
  int32_T M_idx_2;
  int32_T M_idx_3;
  int32_T M_idx_4;
  int32_T M_idx_5;
  int32_T M_idx_6;
  int32_T M_idx_7;
  int32_T M_idx_8;
  int32_T M_idx_9;
  M_idx_0 = t89->mM.mX[0];
  M_idx_1 = t89->mM.mX[1];
  M_idx_2 = t89->mM.mX[2];
  M_idx_3 = t89->mM.mX[3];
  M_idx_4 = t89->mM.mX[4];
  M_idx_5 = t89->mM.mX[5];
  M_idx_6 = t89->mM.mX[6];
  M_idx_7 = t89->mM.mX[7];
  M_idx_8 = t89->mM.mX[8];
  M_idx_9 = t89->mM.mX[9];
  M_idx_10 = t89->mM.mX[10];
  X_idx_10 = t89->mX.mX[10];
  X_idx_11 = t89->mX.mX[11];
  X_idx_12 = t89->mX.mX[12];
  X_idx_22 = t89->mX.mX[22];
  X_idx_25 = t89->mX.mX[25];
  X_idx_28 = t89->mX.mX[28];
  out = t90->mDXF;
  intrm_sf_mf_14 = (X_idx_28 * 1.0E-6 + X_idx_12) * 1.602176487E-19 /
    4.3497335432938027E-21;
  t8 = (X_idx_22 * 1.0E-6 + X_idx_10) * 1.602176487E-19 / 4.3497335432938027E-21;
  X_idx_12 = (X_idx_25 * 1.0E-6 + X_idx_11) * 1.602176487E-19 /
    4.3497335432938027E-21;
  X_idx_28 = 1.602176487E-19;
  X_idx_10 = X_idx_28 / 4.3497335432938027E-21;
  X_idx_22 = 1.6021764869999998E-25;
  X_idx_11 = X_idx_22 / 4.3497335432938027E-21;
  X_idx_25 = X_idx_28 / 4.3497335432938027E-21;
  t9 = X_idx_22 / 4.3497335432938027E-21;
  t3 = X_idx_28 / 4.3497335432938027E-21;
  X_idx_28 = X_idx_22 / 4.3497335432938027E-21;
  if (t8 > 80.0) {
    X_idx_22 = -(X_idx_25 * 3.4567260021088461E-12 * 5.54062238439351E+34);
  } else if (M_idx_3 != 0) {
    X_idx_22 = -(X_idx_25 * 3.4567260021088461E-12 * 4.9060947306492808E-35);
  } else {
    X_idx_22 = -(exp(t8) * X_idx_25 * 3.4567260021088461E-12);
  }

  if (M_idx_6 != 0) {
    X_idx_25 = 1000.0;
  } else {
    X_idx_25 = 1.0E-5;
  }

  if (X_idx_12 > 80.0) {
    t2 = -(t3 * 3.4567260021088461E-12 * 5.54062238439351E+34);
  } else if (M_idx_4 != 0) {
    t2 = -(t3 * 3.4567260021088461E-12 * 4.9060947306492808E-35);
  } else {
    t2 = -(exp(X_idx_12) * t3 * 3.4567260021088461E-12);
  }

  if (M_idx_8 != 0) {
    t3 = 1000.0;
  } else {
    t3 = 1.0E-5;
  }

  if (intrm_sf_mf_14 > 80.0) {
    t4 = -(X_idx_10 * 3.4567260021088461E-12 * 5.54062238439351E+34);
  } else if (M_idx_5 != 0) {
    t4 = -(X_idx_10 * 3.4567260021088461E-12 * 4.9060947306492808E-35);
  } else {
    t4 = -(exp(intrm_sf_mf_14) * X_idx_10 * 3.4567260021088461E-12);
  }

  if (M_idx_10 != 0) {
    X_idx_10 = 1000.0;
  } else {
    X_idx_10 = 1.0E-5;
  }

  if (M_idx_0 != 0) {
    t6 = 1000.5;
  } else {
    t6 = 0.50001;
  }

  if (t8 > 80.0) {
    t7 = -1.0 - t9 * 3.4567260021088461E-12 * 5.54062238439351E+34;
  } else if (M_idx_3 != 0) {
    t7 = -1.0 - t9 * 3.4567260021088461E-12 * 4.9060947306492808E-35;
  } else {
    t7 = -1.0 - exp(t8) * t9 * 3.4567260021088461E-12;
  }

  if (M_idx_6 != 0) {
    t8 = 0.001;
  } else {
    t8 = 1.0000000000000001E-11;
  }

  if (X_idx_12 > 80.0) {
    t9 = -1.0 - X_idx_28 * 3.4567260021088461E-12 * 5.54062238439351E+34;
  } else if (M_idx_4 != 0) {
    t9 = -1.0 - X_idx_28 * 3.4567260021088461E-12 * 4.9060947306492808E-35;
  } else {
    t9 = -1.0 - exp(X_idx_12) * X_idx_28 * 3.4567260021088461E-12;
  }

  if (M_idx_8 != 0) {
    X_idx_12 = 0.001;
  } else {
    X_idx_12 = 1.0000000000000001E-11;
  }

  if (intrm_sf_mf_14 > 80.0) {
    X_idx_28 = -1.0 - X_idx_11 * 3.4567260021088461E-12 * 5.54062238439351E+34;
  } else if (M_idx_5 != 0) {
    X_idx_28 = -1.0 - X_idx_11 * 3.4567260021088461E-12 * 4.9060947306492808E-35;
  } else {
    X_idx_28 = -1.0 - exp(intrm_sf_mf_14) * X_idx_11 * 3.4567260021088461E-12;
  }

  if (M_idx_10 != 0) {
    t12 = 0.001;
  } else {
    t12 = 1.0000000000000001E-11;
  }

  intrm_sf_mf_14 = 1.0E-6;
  X_idx_11 = 1.0E-12;
  out.mX[0] = -0.5;
  out.mX[1] = 1.0;
  out.mX[2] = X_idx_22;
  out.mX[3] = X_idx_25;
  out.mX[4] = intrm_sf_mf_14;
  out.mX[5] = t2;
  out.mX[6] = t3;
  out.mX[7] = intrm_sf_mf_14;
  out.mX[8] = t4;
  out.mX[9] = X_idx_10;
  out.mX[10] = intrm_sf_mf_14;
  out.mX[11] = t6;
  out.mX[12] = intrm_sf_mf_14;
  out.mX[13] = 1.0;
  out.mX[14] = (M_idx_1 != 0 ? -0.2 : -1.0E+6) / 1.0E+6;
  out.mX[15] = -0.001;
  out.mX[16] = t7;
  out.mX[17] = t8;
  out.mX[18] = X_idx_11;
  out.mX[19] = 1.0;
  out.mX[20] = 1.0;
  out.mX[21] = -1.0;
  out.mX[22] = (M_idx_7 != 0 ? -0.009 : -1.0E+6) / 1.0E+6;
  out.mX[23] = t9;
  out.mX[24] = X_idx_12;
  out.mX[25] = X_idx_11;
  out.mX[26] = 1.0;
  out.mX[27] = 1.0;
  out.mX[28] = -1.0;
  out.mX[29] = (M_idx_9 != 0 ? -0.009 : -1.0E+6) / 1.0E+6;
  out.mX[30] = X_idx_28;
  out.mX[31] = t12;
  out.mX[32] = X_idx_11;
  out.mX[33] = 1.0;
  out.mX[34] = 1.0;
  out.mX[35] = -1.0;
  out.mX[36] = (M_idx_2 != 0 ? -0.009 : -1.0E+6) / 1.0E+6;
  (void)sys;
  (void)t90;
  return 0;
}
