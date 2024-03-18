/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration'.
 */

#include "ne_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_sys_struct.h"
#include "DCDC_Buck_9d5357ce_1_ds_f.h"
#include "DCDC_Buck_9d5357ce_1_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_externals.h"
#include "DCDC_Buck_9d5357ce_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T DCDC_Buck_9d5357ce_1_ds_f(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t23, NeDsMethodOutput *t24)
{
  PmRealVector out;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET1_mosfet_equation_v;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET2_diode_v;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET2_mosfet_equation_v;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET3_diode_v;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET3_mosfet_equation_v;
  real_T X_idx_0;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_22;
  real_T X_idx_23;
  real_T X_idx_24;
  real_T X_idx_25;
  real_T X_idx_26;
  real_T X_idx_27;
  real_T X_idx_28;
  real_T X_idx_29;
  real_T X_idx_30;
  real_T X_idx_4;
  real_T t1;
  real_T t10;
  real_T t4;
  real_T t7;
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
  M_idx_0 = t23->mM.mX[0];
  M_idx_1 = t23->mM.mX[1];
  M_idx_2 = t23->mM.mX[2];
  M_idx_3 = t23->mM.mX[3];
  M_idx_4 = t23->mM.mX[4];
  M_idx_5 = t23->mM.mX[5];
  M_idx_6 = t23->mM.mX[6];
  M_idx_7 = t23->mM.mX[7];
  M_idx_8 = t23->mM.mX[8];
  M_idx_9 = t23->mM.mX[9];
  M_idx_10 = t23->mM.mX[10];
  X_idx_0 = t23->mX.mX[0];
  X_idx_4 = t23->mX.mX[4];
  X_idx_10 = t23->mX.mX[10];
  X_idx_11 = t23->mX.mX[11];
  X_idx_12 = t23->mX.mX[12];
  X_idx_13 = t23->mX.mX[13];
  X_idx_14 = t23->mX.mX[14];
  X_idx_15 = t23->mX.mX[15];
  X_idx_22 = t23->mX.mX[22];
  X_idx_23 = t23->mX.mX[23];
  X_idx_24 = t23->mX.mX[24];
  X_idx_25 = t23->mX.mX[25];
  X_idx_26 = t23->mX.mX[26];
  X_idx_27 = t23->mX.mX[27];
  X_idx_28 = t23->mX.mX[28];
  X_idx_29 = t23->mX.mX[29];
  X_idx_30 = t23->mX.mX[30];
  out = t24->mF;
  t1 = ((X_idx_0 * -0.5 + X_idx_13 * 0.5) + X_idx_15 * -0.001) + X_idx_14;
  t4 = ((-X_idx_22 + -X_idx_24) + X_idx_4) + X_idx_23;
  t7 = (-X_idx_25 + -X_idx_27) + X_idx_26;
  t9 = (-X_idx_28 + -X_idx_30) + X_idx_29;
  X_idx_0 = (-X_idx_10 + X_idx_22 * -1.0E-6) + -9.0;
  DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET1_mosfet_equation_v = (X_idx_22 * 1.0E-6 +
    X_idx_10) + 9.0;
  DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET2_diode_v = (-X_idx_11 + X_idx_25 * -1.0E-6)
    + -9.0;
  DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET2_mosfet_equation_v = (X_idx_25 * 1.0E-6 +
    X_idx_11) + 9.0;
  DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET3_diode_v = (-X_idx_12 + X_idx_28 * -1.0E-6)
    + -9.0;
  DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET3_mosfet_equation_v = (X_idx_28 * 1.0E-6 +
    X_idx_12) + 9.0;
  t10 = (X_idx_28 * 1.0E-6 + X_idx_12) * 1.602176487E-19 /
    4.3497335432938027E-21;
  X_idx_10 = (X_idx_22 * 1.0E-6 + X_idx_10) * 1.602176487E-19 /
    4.3497335432938027E-21;
  X_idx_12 = (X_idx_25 * 1.0E-6 + X_idx_11) * 1.602176487E-19 /
    4.3497335432938027E-21;
  if (M_idx_0 != 0) {
    X_idx_28 = t1 - (-X_idx_13 - 1.599999984) / 0.001;
  } else {
    X_idx_28 = t1 - -X_idx_13 * 1.0E-5;
  }

  if (M_idx_1 != 0) {
    t1 = X_idx_13 - X_idx_14 * 0.2;
  } else {
    t1 = X_idx_13 - X_idx_14 / 1.0E-6;
  }

  if (X_idx_10 > 80.0) {
    X_idx_15 = t4 - ((X_idx_10 - 79.0) * 5.54062238439351E+34 - 1.0) *
      3.4567260021088461E-12;
  } else if (M_idx_3 != 0) {
    X_idx_15 = t4 - ((X_idx_10 + 80.0) * 4.9060947306492808E-35 - 1.0) *
      3.4567260021088461E-12;
  } else {
    X_idx_15 = t4 - (exp(X_idx_10) - 1.0) * 3.4567260021088461E-12;
  }

  if (X_idx_12 > 80.0) {
    X_idx_4 = t7 - ((X_idx_12 - 79.0) * 5.54062238439351E+34 - 1.0) *
      3.4567260021088461E-12;
  } else if (M_idx_4 != 0) {
    X_idx_4 = t7 - ((X_idx_12 + 80.0) * 4.9060947306492808E-35 - 1.0) *
      3.4567260021088461E-12;
  } else {
    X_idx_4 = t7 - (exp(X_idx_12) - 1.0) * 3.4567260021088461E-12;
  }

  if (t10 > 80.0) {
    t4 = t9 - ((t10 - 79.0) * 5.54062238439351E+34 - 1.0) *
      3.4567260021088461E-12;
  } else if (M_idx_5 != 0) {
    t4 = t9 - ((t10 + 80.0) * 4.9060947306492808E-35 - 1.0) *
      3.4567260021088461E-12;
  } else {
    t4 = t9 - (exp(t10) - 1.0) * 3.4567260021088461E-12;
  }

  if (M_idx_6 != 0) {
    X_idx_0 = X_idx_23 - (X_idx_0 - 0.84999999149999994) / 0.001;
  } else {
    X_idx_0 = X_idx_23 - X_idx_0 * 1.0E-5;
  }

  if (M_idx_7 != 0) {
    X_idx_10 = DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET1_mosfet_equation_v - X_idx_24 *
      0.009;
  } else {
    X_idx_10 = DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET1_mosfet_equation_v - X_idx_24 /
      1.0E-6;
  }

  if (M_idx_8 != 0) {
    t7 = X_idx_26 - (DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET2_diode_v -
                     0.84999999149999994) / 0.001;
  } else {
    t7 = X_idx_26 - DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET2_diode_v * 1.0E-5;
  }

  if (M_idx_9 != 0) {
    X_idx_12 = DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET2_mosfet_equation_v - X_idx_27 *
      0.009;
  } else {
    X_idx_12 = DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET2_mosfet_equation_v - X_idx_27 /
      1.0E-6;
  }

  if (M_idx_10 != 0) {
    t9 = X_idx_29 - (DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET3_diode_v -
                     0.84999999149999994) / 0.001;
  } else {
    t9 = X_idx_29 - DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET3_diode_v * 1.0E-5;
  }

  if (M_idx_2 != 0) {
    t10 = DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET3_mosfet_equation_v - X_idx_30 *
      0.009;
  } else {
    t10 = DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET3_mosfet_equation_v - X_idx_30 /
      1.0E-6;
  }

  out.mX[0] = -0.0;
  out.mX[1] = -0.0;
  out.mX[2] = -0.0;
  out.mX[3] = -0.0;
  out.mX[4] = -0.0;
  out.mX[5] = -0.0;
  out.mX[6] = -0.0;
  out.mX[7] = -0.0;
  out.mX[8] = -0.0;
  out.mX[9] = -0.0;
  out.mX[10] = -0.0;
  out.mX[11] = -0.0;
  out.mX[12] = -0.0;
  out.mX[13] = X_idx_28;
  out.mX[14] = t1 / 1.0E+6;
  out.mX[15] = 9.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 0.0;
  out.mX[21] = 0.0;
  out.mX[22] = X_idx_15;
  out.mX[23] = X_idx_4;
  out.mX[24] = t4;
  out.mX[25] = X_idx_0;
  out.mX[26] = X_idx_10 / 1.0E+6;
  out.mX[27] = t7;
  out.mX[28] = X_idx_12 / 1.0E+6;
  out.mX[29] = t9;
  out.mX[30] = t10 / 1.0E+6;
  (void)sys;
  (void)t24;
  return 0;
}
