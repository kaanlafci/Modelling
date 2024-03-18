/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration'.
 */

#include "ne_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_sys_struct.h"
#include "DCDC_Buck_9d5357ce_1_ds_log.h"
#include "DCDC_Buck_9d5357ce_1_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_externals.h"
#include "DCDC_Buck_9d5357ce_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T DCDC_Buck_9d5357ce_1_ds_log(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t18, NeDsMethodOutput *t19)
{
  PmRealVector out;
  real_T t0[208];
  real_T DC_DC_Buck_PLANT_Active_Load_MOSFET_diode_i;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_i;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_i;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_p_v;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C11_i;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C13_i;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C14_n_v;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C22_p_v;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R10_i;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R11_i;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R8_i;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R9_i;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_n_v;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_v;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_n_v;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_v;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Diode_v;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET1_diode_v;
  real_T DC_DC_Buck_PLANT_PR2_i;
  real_T U_idx_0;
  real_T U_idx_1;
  real_T U_idx_2;
  real_T U_idx_3;
  real_T X_idx_0;
  real_T X_idx_1;
  real_T X_idx_10;
  real_T X_idx_11;
  real_T X_idx_12;
  real_T X_idx_13;
  real_T X_idx_14;
  real_T X_idx_15;
  real_T X_idx_16;
  real_T X_idx_17;
  real_T X_idx_18;
  real_T X_idx_19;
  real_T X_idx_2;
  real_T X_idx_20;
  real_T X_idx_21;
  real_T X_idx_22;
  real_T X_idx_23;
  real_T X_idx_24;
  real_T X_idx_25;
  real_T X_idx_26;
  real_T X_idx_27;
  real_T X_idx_28;
  real_T X_idx_29;
  real_T X_idx_3;
  real_T X_idx_30;
  real_T X_idx_4;
  real_T X_idx_5;
  real_T X_idx_6;
  real_T X_idx_7;
  real_T X_idx_8;
  real_T X_idx_9;
  real_T t10;
  real_T t12;
  real_T t13;
  real_T t15;
  real_T t17;
  real_T t4;
  real_T t5;
  real_T t6;
  real_T t9;
  int32_T b;
  U_idx_0 = t18->mU.mX[0];
  U_idx_1 = t18->mU.mX[1];
  U_idx_2 = t18->mU.mX[2];
  U_idx_3 = t18->mU.mX[3];
  X_idx_0 = t18->mX.mX[0];
  X_idx_1 = t18->mX.mX[1];
  X_idx_2 = t18->mX.mX[2];
  X_idx_3 = t18->mX.mX[3];
  X_idx_4 = t18->mX.mX[4];
  X_idx_5 = t18->mX.mX[5];
  X_idx_6 = t18->mX.mX[6];
  X_idx_7 = t18->mX.mX[7];
  X_idx_8 = t18->mX.mX[8];
  X_idx_9 = t18->mX.mX[9];
  X_idx_10 = t18->mX.mX[10];
  X_idx_11 = t18->mX.mX[11];
  X_idx_12 = t18->mX.mX[12];
  X_idx_13 = t18->mX.mX[13];
  X_idx_14 = t18->mX.mX[14];
  X_idx_15 = t18->mX.mX[15];
  X_idx_16 = t18->mX.mX[16];
  X_idx_17 = t18->mX.mX[17];
  X_idx_18 = t18->mX.mX[18];
  X_idx_19 = t18->mX.mX[19];
  X_idx_20 = t18->mX.mX[20];
  X_idx_21 = t18->mX.mX[21];
  X_idx_22 = t18->mX.mX[22];
  X_idx_23 = t18->mX.mX[23];
  X_idx_24 = t18->mX.mX[24];
  X_idx_25 = t18->mX.mX[25];
  X_idx_26 = t18->mX.mX[26];
  X_idx_27 = t18->mX.mX[27];
  X_idx_28 = t18->mX.mX[28];
  X_idx_29 = t18->mX.mX[29];
  X_idx_30 = t18->mX.mX[30];
  out = t19->mLOG;
  DC_DC_Buck_PLANT_Active_Load_MOSFET_diode_i = ((X_idx_0 * -0.5 + X_idx_13 *
    0.5) + X_idx_15 * -0.001) + X_idx_14;
  DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_i = (((((X_idx_0 * -0.6333333333333333 +
    X_idx_2 * -0.00083333333333333339) + X_idx_13 * 0.5) + X_idx_15 *
    -1.0012666666666667) + -X_idx_17) + X_idx_18 * -1.0000000008333334) +
    X_idx_19;
  DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v = X_idx_15 * 0.002 + X_idx_0;
  DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_i = (((X_idx_0 *
    -0.012195121951219513 + X_idx_15 * -2.4390243902439026E-5) + X_idx_20 *
    0.012195121951219513) + X_idx_19 * -1.0003658536585365) + X_idx_4;
  DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_p_v = (X_idx_15 * 0.002 +
    X_idx_19 * 0.03) + X_idx_0;
  DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C11_i = ((((X_idx_0 *
    -0.012195121951219513 + X_idx_2 * 0.00083333333333333339) + X_idx_15 *
    -2.4390243902439026E-5) + X_idx_20 * 0.012195121951219513) + X_idx_18 *
    1.0000000008333334) + X_idx_17;
  DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C13_i = ((X_idx_20 *
    -0.0008333333333333335 + X_idx_19 * -0.99999999999999989) + X_idx_17) +
    X_idx_4;
  DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C14_n_v = (-X_idx_2 + X_idx_18 *
    -1.0E-6) + X_idx_20;
  DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C22_p_v = X_idx_21 * 1.0E-6 +
    X_idx_9;
  DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R10_i = X_idx_20 *
    0.00083333333333333339;
  DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R11_i = X_idx_2 *
    0.00083333333333333339 + X_idx_18 * 8.3333333333333335E-10;
  DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R8_i = ((X_idx_0 *
    0.012195121951219513 + X_idx_15 * 2.4390243902439026E-5) + X_idx_20 *
    -0.012195121951219513) + X_idx_19 * 0.00036585365853658537;
  DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R9_i = (X_idx_0 *
    0.012195121951219513 + X_idx_15 * 2.4390243902439026E-5) + X_idx_20 *
    -0.012195121951219513;
  t4 = ((-X_idx_22 + -X_idx_24) + X_idx_4) + X_idx_23;
  DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v = -X_idx_10 + X_idx_22 * -1.0E-6;
  DC_DC_Buck_PLANT_DC_DC_Buck_Diode_v = X_idx_22 * 1.0E-6 + X_idx_10;
  t5 = (-X_idx_25 + -X_idx_27) + X_idx_26;
  DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_n_v = -X_idx_11 + X_idx_25 * -1.0E-6;
  DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_v = X_idx_25 * 1.0E-6 + X_idx_11;
  t6 = (-X_idx_28 + -X_idx_30) + X_idx_29;
  DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_n_v = -X_idx_12 + X_idx_28 * -1.0E-6;
  DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_v = X_idx_28 * 1.0E-6 + X_idx_12;
  DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET1_diode_v = (-X_idx_10 + X_idx_22 * -1.0E-6)
    + -9.0;
  t9 = (X_idx_22 * 1.0E-6 + X_idx_10) + 9.0;
  t10 = (-X_idx_11 + X_idx_25 * -1.0E-6) + -9.0;
  t12 = (X_idx_25 * 1.0E-6 + X_idx_11) + 9.0;
  t13 = (-X_idx_12 + X_idx_28 * -1.0E-6) + -9.0;
  t15 = (X_idx_28 * 1.0E-6 + X_idx_12) + 9.0;
  t17 = X_idx_0 * 0.13333333333333333 + X_idx_15 * 0.00026666666666666668;
  DC_DC_Buck_PLANT_PR2_i = (X_idx_0 * 0.5 + X_idx_13 * -0.5) + X_idx_15 * 0.001;
  t0[0ULL] = X_idx_13;
  t0[1ULL] = U_idx_0;
  t0[2ULL] = DC_DC_Buck_PLANT_Active_Load_MOSFET_diode_i;
  t0[3ULL] = DC_DC_Buck_PLANT_Active_Load_MOSFET_diode_i;
  t0[4ULL] = -X_idx_13;
  t0[5ULL] = X_idx_13;
  t0[6ULL] = X_idx_13;
  t0[7ULL] = DC_DC_Buck_PLANT_Active_Load_MOSFET_diode_i * -X_idx_13 * 0.001 *
    1000.0;
  t0[8ULL] = -X_idx_13;
  t0[9ULL] = U_idx_0;
  t0[10ULL] = X_idx_14;
  t0[11ULL] = -(-U_idx_0 + 3.0);
  t0[12ULL] = X_idx_13;
  t0[13ULL] = X_idx_13;
  t0[14ULL] = X_idx_14 * X_idx_13 * 0.001 * 1000.0;
  t0[15ULL] = U_idx_0;
  t0[16ULL] = X_idx_13;
  t0[17ULL] = X_idx_16;
  t0[18ULL] = X_idx_1;
  t0[19ULL] = X_idx_16 * X_idx_16 * 1.0E-9;
  t0[20ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_i;
  t0[21ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[22ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[23ULL] = X_idx_3;
  t0[24ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_i *
    DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_i * 2.0E-6;
  t0[25ULL] = X_idx_15;
  t0[26ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[27ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[28ULL] = X_idx_0;
  t0[29ULL] = X_idx_15 * X_idx_15 * 2.0E-6;
  t0[30ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[31ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_i;
  t0[32ULL] = X_idx_20;
  t0[33ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_p_v;
  t0[34ULL] = ((X_idx_15 * 0.002 + -X_idx_20) + X_idx_19 * 0.03) + X_idx_0;
  t0[35ULL] = X_idx_5;
  t0[36ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_i *
    DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_i * 1.0E-9;
  t0[37ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C11_i;
  t0[38ULL] = X_idx_20;
  t0[39ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[40ULL] = (X_idx_15 * 0.002 + -X_idx_20) + X_idx_0;
  t0[41ULL] = X_idx_6;
  t0[42ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C11_i *
    DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C11_i * 1.0E-9;
  t0[43ULL] = X_idx_17;
  t0[44ULL] = X_idx_20;
  t0[45ULL] = X_idx_20;
  t0[46ULL] = X_idx_7;
  t0[47ULL] = X_idx_17 * X_idx_17 * 1.0E-9;
  t0[48ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C13_i;
  t0[49ULL] = X_idx_20;
  t0[50ULL] = X_idx_20;
  t0[51ULL] = X_idx_8;
  t0[52ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C13_i *
    DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C13_i * 1.0E-9;
  t0[53ULL] = X_idx_18;
  t0[54ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C14_n_v;
  t0[55ULL] = X_idx_20;
  t0[56ULL] = X_idx_18 * 1.0E-6 + X_idx_2;
  t0[57ULL] = X_idx_2;
  t0[58ULL] = X_idx_18 * X_idx_18 * 1.0E-9;
  t0[59ULL] = X_idx_21;
  t0[60ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C22_p_v;
  t0[61ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C22_p_v;
  t0[62ULL] = X_idx_9;
  t0[63ULL] = X_idx_21 * X_idx_21 * 1.0E-9;
  t0[64ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_p_v;
  t0[65ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[66ULL] = X_idx_20;
  t0[67ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C14_n_v;
  t0[68ULL] = (X_idx_2 * 0.00083333333333333339 + X_idx_18 * 1.0000000008333334)
    + -X_idx_21;
  t0[69ULL] = X_idx_20;
  t0[70ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R10_i;
  t0[71ULL] = X_idx_20;
  t0[72ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R10_i * 1200.0;
  t0[73ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R10_i *
    DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R10_i * 1200.0;
  t0[74ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R11_i;
  t0[75ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C14_n_v;
  t0[76ULL] = X_idx_20;
  t0[77ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R11_i * 1200.0;
  t0[78ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R11_i *
    DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R11_i * 1200.0;
  t0[79ULL] = X_idx_21;
  t0[80ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C22_p_v;
  t0[81ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C14_n_v;
  t0[82ULL] = X_idx_21 * 1000.0;
  t0[83ULL] = X_idx_21 * X_idx_21 * 1000.0;
  t0[84ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R8_i;
  t0[85ULL] = X_idx_20;
  t0[86ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_p_v;
  t0[87ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R8_i * 82.0;
  t0[88ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R8_i *
    DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R8_i * 82.0;
  t0[89ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R9_i;
  t0[90ULL] = X_idx_20;
  t0[91ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[92ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R9_i * 82.0;
  t0[93ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R9_i *
    DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R9_i * 82.0;
  t0[94ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C22_p_v;
  t0[95ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C22_p_v;
  t0[96ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C22_p_v;
  t0[97ULL] = X_idx_22;
  t0[98ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v;
  t0[99ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_v;
  t0[100ULL] = X_idx_10;
  t0[101ULL] = t4;
  t0[102ULL] = X_idx_22;
  t0[103ULL] = t4;
  t0[104ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_v;
  t0[105ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v;
  t0[106ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v;
  t0[107ULL] = (-X_idx_24 + X_idx_4) + X_idx_23;
  t0[108ULL] = t4 * DC_DC_Buck_PLANT_DC_DC_Buck_Diode_v * 0.001 * 1000.0;
  t0[109ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_v;
  t0[110ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_v;
  t0[111ULL] = X_idx_25;
  t0[112ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_n_v;
  t0[113ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_v;
  t0[114ULL] = X_idx_11;
  t0[115ULL] = t5;
  t0[116ULL] = X_idx_25;
  t0[117ULL] = t5;
  t0[118ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_v;
  t0[119ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_n_v;
  t0[120ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_n_v;
  t0[121ULL] = -X_idx_27 + X_idx_26;
  t0[122ULL] = t5 * DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_v * 0.001 * 1000.0;
  t0[123ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_v;
  t0[124ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_v;
  t0[125ULL] = X_idx_28;
  t0[126ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_n_v;
  t0[127ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_v;
  t0[128ULL] = X_idx_12;
  t0[129ULL] = t6;
  t0[130ULL] = X_idx_28;
  t0[131ULL] = t6;
  t0[132ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_v;
  t0[133ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_n_v;
  t0[134ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_n_v;
  t0[135ULL] = -X_idx_30 + X_idx_29;
  t0[136ULL] = t6 * DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_v * 0.001 * 1000.0;
  t0[137ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_v;
  t0[138ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_v;
  t0[139ULL] = X_idx_4;
  t0[140ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_p_v;
  t0[141ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v;
  t0[142ULL] = (((-X_idx_0 + -X_idx_10) + X_idx_15 * -0.002) + X_idx_22 *
                -1.0E-6) + X_idx_19 * -0.03;
  t0[143ULL] = X_idx_4;
  t0[144ULL] = X_idx_4 * X_idx_4 * 1.0500000000000001E-5;
  t0[145ULL] = U_idx_1;
  t0[146ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v;
  t0[147ULL] = X_idx_23;
  t0[148ULL] = X_idx_23;
  t0[149ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET1_diode_v;
  t0[150ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v;
  t0[151ULL] = X_idx_23 * DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET1_diode_v * 0.001 *
    1000.0;
  t0[152ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET1_diode_v;
  t0[153ULL] = U_idx_1;
  t0[154ULL] = X_idx_24;
  t0[155ULL] = -(-U_idx_1 + 1.5);
  t0[156ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v;
  t0[157ULL] = t9;
  t0[158ULL] = X_idx_24 * t9 * 0.001 * 1000.0;
  t0[159ULL] = U_idx_2;
  t0[160ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_n_v;
  t0[161ULL] = X_idx_26;
  t0[162ULL] = X_idx_26;
  t0[163ULL] = t10;
  t0[164ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_n_v;
  t0[165ULL] = X_idx_26 * t10 * 0.001 * 1000.0;
  t0[166ULL] = t10;
  t0[167ULL] = U_idx_2;
  t0[168ULL] = X_idx_27;
  t0[169ULL] = -(-U_idx_2 + 1.5);
  t0[170ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_n_v;
  t0[171ULL] = t12;
  t0[172ULL] = X_idx_27 * t12 * 0.001 * 1000.0;
  t0[173ULL] = U_idx_3;
  t0[174ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_n_v;
  t0[175ULL] = X_idx_29;
  t0[176ULL] = X_idx_29;
  t0[177ULL] = t13;
  t0[178ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_n_v;
  t0[179ULL] = X_idx_29 * t13 * 0.001 * 1000.0;
  t0[180ULL] = t13;
  t0[181ULL] = U_idx_3;
  t0[182ULL] = X_idx_30;
  t0[183ULL] = -(-U_idx_3 + 1.5);
  t0[184ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_n_v;
  t0[185ULL] = t15;
  t0[186ULL] = X_idx_30 * t15 * 0.001 * 1000.0;
  t0[187ULL] = X_idx_19;
  t0[188ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[189ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_p_v;
  t0[190ULL] = X_idx_19 * 0.03;
  t0[191ULL] = X_idx_19 * X_idx_19 * 0.03;
  t0[192ULL] = U_idx_1;
  t0[193ULL] = U_idx_3;
  t0[194ULL] = U_idx_2;
  t0[195ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[196ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[197ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[198ULL] = t17;
  t0[199ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[200ULL] = t17 * 7.5;
  t0[201ULL] = t17 * t17 * 7.5;
  t0[202ULL] = DC_DC_Buck_PLANT_PR2_i;
  t0[203ULL] = X_idx_13;
  t0[204ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[205ULL] = DC_DC_Buck_PLANT_PR2_i * 2.0;
  t0[206ULL] = DC_DC_Buck_PLANT_PR2_i * DC_DC_Buck_PLANT_PR2_i * 2.0;
  t0[207ULL] = (((((-X_idx_16 + -X_idx_24) + -X_idx_27) + -X_idx_30) + X_idx_23)
                + X_idx_26) + X_idx_29;
  for (b = 0; b < 208; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t19;
  return 0;
}
