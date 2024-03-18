/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration'.
 */

#include "ne_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_sys_struct.h"
#include "DCDC_Buck_9d5357ce_1_ds_obs_all.h"
#include "DCDC_Buck_9d5357ce_1_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_externals.h"
#include "DCDC_Buck_9d5357ce_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T DCDC_Buck_9d5357ce_1_ds_obs_all(const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t18, NeDsMethodOutput *t19)
{
  PmRealVector out;
  real_T t0[260];
  real_T DC_DC_Buck_PLANT_Active_Load_MOSFET_diode_i;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  real_T DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_p_v;
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
  out = t19->mOBS_ALL;
  DC_DC_Buck_PLANT_Active_Load_MOSFET_diode_i = ((X_idx_0 * -0.5 + X_idx_13 *
    0.5) + X_idx_15 * -0.001) + X_idx_14;
  DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v = X_idx_15 * 0.002 + X_idx_0;
  DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_p_v = (X_idx_15 * 0.002 +
    X_idx_19 * 0.03) + X_idx_0;
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
  t0[2ULL] = 0.0;
  t0[3ULL] = 298.15;
  t0[4ULL] = DC_DC_Buck_PLANT_Active_Load_MOSFET_diode_i;
  t0[5ULL] = 0.0;
  t0[6ULL] = DC_DC_Buck_PLANT_Active_Load_MOSFET_diode_i;
  t0[7ULL] = -X_idx_13;
  t0[8ULL] = X_idx_13;
  t0[9ULL] = X_idx_13;
  t0[10ULL] = 0.0;
  t0[11ULL] = DC_DC_Buck_PLANT_Active_Load_MOSFET_diode_i * -X_idx_13 * 0.001 *
    1000.0;
  t0[12ULL] = -X_idx_13;
  t0[13ULL] = 0.0;
  t0[14ULL] = U_idx_0;
  t0[15ULL] = X_idx_14;
  t0[16ULL] = -(-U_idx_0 + 3.0);
  t0[17ULL] = 0.0;
  t0[18ULL] = X_idx_13;
  t0[19ULL] = X_idx_13;
  t0[20ULL] = X_idx_14 * X_idx_13 * 0.001 * 1000.0;
  t0[21ULL] = U_idx_0;
  t0[22ULL] = X_idx_13;
  t0[23ULL] = 0.0;
  t0[24ULL] = X_idx_16;
  t0[25ULL] = 0.0;
  t0[26ULL] = 9.0;
  t0[27ULL] = 9.0;
  t0[28ULL] = X_idx_1;
  t0[29ULL] = (((((X_idx_0 * -0.6333333333333333 + X_idx_2 *
                   -0.00083333333333333339) + X_idx_13 * 0.5) + X_idx_15 *
                 -1.0012666666666667) + -X_idx_17) + X_idx_18 *
               -1.0000000008333334) + X_idx_19;
  t0[30ULL] = 0.0;
  t0[31ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[32ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[33ULL] = X_idx_3;
  t0[34ULL] = X_idx_15;
  t0[35ULL] = 0.0;
  t0[36ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[37ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[38ULL] = X_idx_0;
  t0[39ULL] = 9.0;
  t0[40ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[41ULL] = 0.0;
  t0[42ULL] = (((X_idx_0 * -0.012195121951219513 + X_idx_15 *
                 -2.4390243902439026E-5) + X_idx_20 * 0.012195121951219513) +
               X_idx_19 * -1.0003658536585365) + X_idx_4;
  t0[43ULL] = X_idx_20;
  t0[44ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_p_v;
  t0[45ULL] = ((X_idx_15 * 0.002 + -X_idx_20) + X_idx_19 * 0.03) + X_idx_0;
  t0[46ULL] = X_idx_5;
  t0[47ULL] = ((((X_idx_0 * -0.012195121951219513 + X_idx_2 *
                  0.00083333333333333339) + X_idx_15 * -2.4390243902439026E-5) +
                X_idx_20 * 0.012195121951219513) + X_idx_18 * 1.0000000008333334)
    + X_idx_17;
  t0[48ULL] = X_idx_20;
  t0[49ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[50ULL] = (X_idx_15 * 0.002 + -X_idx_20) + X_idx_0;
  t0[51ULL] = X_idx_6;
  t0[52ULL] = X_idx_17;
  t0[53ULL] = X_idx_20;
  t0[54ULL] = X_idx_20;
  t0[55ULL] = 0.0;
  t0[56ULL] = X_idx_7;
  t0[57ULL] = ((X_idx_20 * -0.0008333333333333335 + X_idx_19 *
                -0.99999999999999989) + X_idx_17) + X_idx_4;
  t0[58ULL] = 0.0;
  t0[59ULL] = X_idx_20;
  t0[60ULL] = X_idx_20;
  t0[61ULL] = X_idx_8;
  t0[62ULL] = X_idx_18;
  t0[63ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C14_n_v;
  t0[64ULL] = X_idx_20;
  t0[65ULL] = X_idx_18 * 1.0E-6 + X_idx_2;
  t0[66ULL] = X_idx_2;
  t0[67ULL] = X_idx_21;
  t0[68ULL] = 0.0;
  t0[69ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C22_p_v;
  t0[70ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C22_p_v;
  t0[71ULL] = X_idx_9;
  t0[72ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_p_v;
  t0[73ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[74ULL] = 0.0;
  t0[75ULL] = 0.0;
  t0[76ULL] = X_idx_20;
  t0[77ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C14_n_v;
  t0[78ULL] = (X_idx_2 * 0.00083333333333333339 + X_idx_18 * 1.0000000008333334)
    + -X_idx_21;
  t0[79ULL] = X_idx_20;
  t0[80ULL] = 0.0;
  t0[81ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R10_i;
  t0[82ULL] = 0.0;
  t0[83ULL] = X_idx_20;
  t0[84ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R10_i * 1200.0;
  t0[85ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R11_i;
  t0[86ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C14_n_v;
  t0[87ULL] = X_idx_20;
  t0[88ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R11_i * 1200.0;
  t0[89ULL] = X_idx_21;
  t0[90ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C22_p_v;
  t0[91ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C14_n_v;
  t0[92ULL] = X_idx_21 * 1000.0;
  t0[93ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R8_i;
  t0[94ULL] = X_idx_20;
  t0[95ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_p_v;
  t0[96ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R8_i * 82.0;
  t0[97ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R9_i;
  t0[98ULL] = X_idx_20;
  t0[99ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[100ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_R9_i * 82.0;
  t0[101ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C22_p_v;
  t0[102ULL] = 0.0;
  t0[103ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C22_p_v;
  t0[104ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C22_p_v;
  t0[105ULL] = X_idx_22;
  t0[106ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v;
  t0[107ULL] = 0.0;
  t0[108ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_v;
  t0[109ULL] = X_idx_10;
  t0[110ULL] = 298.15;
  t0[111ULL] = t4;
  t0[112ULL] = X_idx_22;
  t0[113ULL] = t4;
  t0[114ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_v;
  t0[115ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v;
  t0[116ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v;
  t0[117ULL] = (-X_idx_24 + X_idx_4) + X_idx_23;
  t0[118ULL] = 0.0;
  t0[119ULL] = 0.0;
  t0[120ULL] = 0.0;
  t0[121ULL] = 0.0;
  t0[122ULL] = 0.0;
  t0[123ULL] = t4 * DC_DC_Buck_PLANT_DC_DC_Buck_Diode_v * 0.001 * 1000.0;
  t0[124ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_v;
  t0[125ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_v;
  t0[126ULL] = X_idx_25;
  t0[127ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_n_v;
  t0[128ULL] = 0.0;
  t0[129ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_v;
  t0[130ULL] = X_idx_11;
  t0[131ULL] = 298.15;
  t0[132ULL] = t5;
  t0[133ULL] = X_idx_25;
  t0[134ULL] = t5;
  t0[135ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_v;
  t0[136ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_n_v;
  t0[137ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_n_v;
  t0[138ULL] = -X_idx_27 + X_idx_26;
  t0[139ULL] = 0.0;
  t0[140ULL] = 0.0;
  t0[141ULL] = 0.0;
  t0[142ULL] = 0.0;
  t0[143ULL] = 0.0;
  t0[144ULL] = t5 * DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_v * 0.001 * 1000.0;
  t0[145ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_v;
  t0[146ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_v;
  t0[147ULL] = X_idx_28;
  t0[148ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_n_v;
  t0[149ULL] = 0.0;
  t0[150ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_v;
  t0[151ULL] = X_idx_12;
  t0[152ULL] = 298.15;
  t0[153ULL] = t6;
  t0[154ULL] = X_idx_28;
  t0[155ULL] = t6;
  t0[156ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_v;
  t0[157ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_n_v;
  t0[158ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_n_v;
  t0[159ULL] = -X_idx_30 + X_idx_29;
  t0[160ULL] = 0.0;
  t0[161ULL] = 0.0;
  t0[162ULL] = 0.0;
  t0[163ULL] = 0.0;
  t0[164ULL] = 0.0;
  t0[165ULL] = t6 * DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_v * 0.001 * 1000.0;
  t0[166ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_v;
  t0[167ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_v;
  t0[168ULL] = X_idx_4;
  t0[169ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_p_v;
  t0[170ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v;
  t0[171ULL] = (((-X_idx_0 + -X_idx_10) + X_idx_15 * -0.002) + X_idx_22 *
                -1.0E-6) + X_idx_19 * -0.03;
  t0[172ULL] = X_idx_4;
  t0[173ULL] = 9.0;
  t0[174ULL] = U_idx_1;
  t0[175ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v;
  t0[176ULL] = 298.15;
  t0[177ULL] = X_idx_23;
  t0[178ULL] = 0.0;
  t0[179ULL] = X_idx_23;
  t0[180ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET1_diode_v;
  t0[181ULL] = 9.0;
  t0[182ULL] = 9.0;
  t0[183ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v;
  t0[184ULL] = X_idx_23 * DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET1_diode_v * 0.001 *
    1000.0;
  t0[185ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_MOSFET1_diode_v;
  t0[186ULL] = 0.0;
  t0[187ULL] = U_idx_1;
  t0[188ULL] = X_idx_24;
  t0[189ULL] = -(-U_idx_1 + 1.5);
  t0[190ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode_n_v;
  t0[191ULL] = 9.0;
  t0[192ULL] = t9;
  t0[193ULL] = X_idx_24 * t9 * 0.001 * 1000.0;
  t0[194ULL] = 9.0;
  t0[195ULL] = U_idx_2;
  t0[196ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_n_v;
  t0[197ULL] = 298.15;
  t0[198ULL] = X_idx_26;
  t0[199ULL] = 0.0;
  t0[200ULL] = X_idx_26;
  t0[201ULL] = t10;
  t0[202ULL] = 9.0;
  t0[203ULL] = 9.0;
  t0[204ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_n_v;
  t0[205ULL] = X_idx_26 * t10 * 0.001 * 1000.0;
  t0[206ULL] = t10;
  t0[207ULL] = 0.0;
  t0[208ULL] = U_idx_2;
  t0[209ULL] = X_idx_27;
  t0[210ULL] = -(-U_idx_2 + 1.5);
  t0[211ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode1_n_v;
  t0[212ULL] = 9.0;
  t0[213ULL] = t12;
  t0[214ULL] = X_idx_27 * t12 * 0.001 * 1000.0;
  t0[215ULL] = 9.0;
  t0[216ULL] = U_idx_3;
  t0[217ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_n_v;
  t0[218ULL] = 298.15;
  t0[219ULL] = X_idx_29;
  t0[220ULL] = 0.0;
  t0[221ULL] = X_idx_29;
  t0[222ULL] = t13;
  t0[223ULL] = 9.0;
  t0[224ULL] = 9.0;
  t0[225ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_n_v;
  t0[226ULL] = X_idx_29 * t13 * 0.001 * 1000.0;
  t0[227ULL] = t13;
  t0[228ULL] = 0.0;
  t0[229ULL] = U_idx_3;
  t0[230ULL] = X_idx_30;
  t0[231ULL] = -(-U_idx_3 + 1.5);
  t0[232ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Diode2_n_v;
  t0[233ULL] = 9.0;
  t0[234ULL] = t15;
  t0[235ULL] = X_idx_30 * t15 * 0.001 * 1000.0;
  t0[236ULL] = X_idx_19;
  t0[237ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[238ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_Current_Sensor_C10_p_v;
  t0[239ULL] = X_idx_19 * 0.03;
  t0[240ULL] = U_idx_1;
  t0[241ULL] = U_idx_3;
  t0[242ULL] = U_idx_2;
  t0[243ULL] = 0.0;
  t0[244ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[245ULL] = 0.0;
  t0[246ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[247ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[248ULL] = t17;
  t0[249ULL] = 0.0;
  t0[250ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[251ULL] = t17 * 7.5;
  t0[252ULL] = DC_DC_Buck_PLANT_PR2_i;
  t0[253ULL] = X_idx_13;
  t0[254ULL] = DC_DC_Buck_PLANT_DC_DC_Buck_C4C5C6_p_v;
  t0[255ULL] = DC_DC_Buck_PLANT_PR2_i * 2.0;
  t0[256ULL] = (((((-X_idx_16 + -X_idx_24) + -X_idx_27) + -X_idx_30) + X_idx_23)
                + X_idx_26) + X_idx_29;
  t0[257ULL] = 0.0;
  t0[258ULL] = 9.0;
  t0[259ULL] = 9.0;
  for (b = 0; b < 260; b++) {
    out.mX[b] = t0[b];
  }

  (void)sys;
  (void)t19;
  return 0;
}
