/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration'.
 */
/* DCDC_Buck_9d5357ce_1_ds.c - body for module DCDC_Buck_9d5357ce_1_ds */

#include "ne_ds.h"
#include "DCDC_Buck_9d5357ce_1_ds_zc.h"
#include "DCDC_Buck_9d5357ce_1_ds_tdxy_p.h"
#include "DCDC_Buck_9d5357ce_1_ds_dxy_p.h"
#include "DCDC_Buck_9d5357ce_1_ds_obs_exp.h"
#include "DCDC_Buck_9d5357ce_1_ds_m_p.h"
#include "DCDC_Buck_9d5357ce_1_ds_log.h"
#include "DCDC_Buck_9d5357ce_1_ds_obs_all.h"
#include "DCDC_Buck_9d5357ce_1_ds_imax.h"
#include "DCDC_Buck_9d5357ce_1_ds_obs_act.h"
#include "DCDC_Buck_9d5357ce_1_ds_imin.h"
#include "DCDC_Buck_9d5357ce_1_ds_tdxf_p.h"
#include "DCDC_Buck_9d5357ce_1_ds_a_p.h"
#include "DCDC_Buck_9d5357ce_1_ds_obs_il.h"
#include "DCDC_Buck_9d5357ce_1_ds_a.h"
#include "DCDC_Buck_9d5357ce_1_ds_dxf_p.h"
#include "DCDC_Buck_9d5357ce_1_ds_dxf.h"
#include "DCDC_Buck_9d5357ce_1_ds_mode.h"
#include "DCDC_Buck_9d5357ce_1_ds_f.h"
#include "DCDC_Buck_9d5357ce_1_ds_assert.h"
#include "DCDC_Buck_9d5357ce_1_ds.h"
#include "ssc_ml_fun.h"
#include "DCDC_Buck_9d5357ce_1_ds_external_struct.h"
#include "DCDC_Buck_9d5357ce_1_ds_sys_struct.h"
#include "DCDC_Buck_9d5357ce_1_ds_externals.h"

static int32_T ds_m(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vmm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dum_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dum(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dpm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dpm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_b(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_c_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_c(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_vmf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_vpf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_vsf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_slf0(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_duf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dtf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_ddf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dpdxf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_dpdxf(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dwf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_tduf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dnf_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dnf(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dnf_v_x(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_cer(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dxcer(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxcer_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_ic(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_icr(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_icr_im(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_id(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icr_il(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_ddicr(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_tduicr_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_icrm(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dxicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_ddicrm(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_mdxy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_tduy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_y(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                    NeDsMethodOutput *out);
static int32_T ds_dxy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_duy_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_duy(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_dty_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dty(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_cache_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_cache_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_update_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_update2_r(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_update2_i(const NeDynamicSystem *ds, const
  NeDynamicSystemInput *in, NeDsMethodOutput *out);
static int32_T ds_lock_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lock2_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_lock2_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_sfo(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_sfp(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_init_r(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_init_i(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_passert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_iassert(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_del_t(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_v0(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_del_tmax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dxdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dudelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dtdelt(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dp_l(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_i(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_j(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dp_r(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qx(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qu(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qt(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_q1(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_qx_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qu_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_qt_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_q1_p(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_var_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput *
  in, NeDsMethodOutput *out);
static int32_T ds_eq_tol(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_lv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                     NeDsMethodOutput *out);
static int32_T ds_slv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                      NeDsMethodOutput *out);
static int32_T ds_nldv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_sclv(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
  NeDsMethodOutput *out);
static int32_T ds_dimin(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static int32_T ds_dimax(const NeDynamicSystem *ds, const NeDynamicSystemInput
  *in, NeDsMethodOutput *out);
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dpm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dpm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_vsf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dpdxf_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dpdxf(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cer(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxcer(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxcer_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator);
static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_nldv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_sclv(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator);
static NeDsMethodOutput *ds_output_dimin(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static NeDsMethodOutput *ds_output_dimax(const NeDynamicSystem *ds, PmAllocator *
  allocator);
static void release_reference(NeDynamicSystem *ds);
static void get_reference(NeDynamicSystem *ds);
static NeDynamicSystem *diagnostics(NeDynamicSystem *ds, boolean_T);
static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out, boolean_T kp);
static void rtpmap(const NeDynamicSystem * ds, const PmIntVector* inl, const
                   PmIntVector* ini, const PmIntVector* inj, const PmRealVector*
                   inr, PmIntVector* outl, PmIntVector* outi, PmIntVector* outj,
                   PmRealVector* outr);
static NeEquationData s_equation_data[31] = { { "", 0U, 8,
    NE_EQUATION_DOMAIN_TIME, "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C2+C3", 1U,
    0U, TRUE, 1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C4+C5+C6", 1U, 1U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C8", 1U, 2U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C10", 1U, 3U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C11", 1U, 4U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C12", 1U, 5U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C13", 1U, 6U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C14", 1U, 7U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C22", 1U, 8U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 9U, TRUE, 1.0, "1", },
    { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 10U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 11U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/L1", 2U, 12U, TRUE, 1.0, "1", }, {
    "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 3U, 14U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 3U, 17U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C2+C3", 1U, 20U, TRUE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C4+C5+C6", 1U, 21U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C10", 1U, 22U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C11", 1U, 23U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C12", 1U, 24U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C13", 1U, 25U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R22", 1U, 26U, TRUE,
    1.0, "1", }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 5U, 27U, FALSE, 1.0, "1", },
  { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 5U, 32U, FALSE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 5U, 37U, FALSE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 3U, 42U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 3U, 45U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 3U, 48U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 3U, 51U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 3U, 54U, TRUE, 1.0, "1",
  }, { "", 0U, 8, NE_EQUATION_DOMAIN_TIME,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 3U, 57U, TRUE, 1.0, "1",
  } };

static NeCERData *s_cer_data = NULL;
static NeICRData *s_icr_data = NULL;
static NeVariableData s_variable_data[31] = { {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C8.vc", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C8", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C2C3.vc", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C2+C3", 1.0, "1", 0.0, TRUE, FALSE,
    1U, 1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C14.vc", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C14", 1.0, "1", 0.0,
    TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C4C5C6.vc", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C4+C5+C6", 1.0, "1", 0.0, TRUE,
    FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.L1.i_L", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/L1", 1.0, "1", 0.0, TRUE, FALSE, 1U,
    1U, NE_INIT_MODE_MANDATORY, "Inductor current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C10.vc", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C10", 1.0, "1", 0.0,
    TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C11.vc", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C11", 1.0, "1", 0.0,
    TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C12.vc", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C12", 1.0, "1", 0.0,
    TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C13.vc", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C13", 1.0, "1", 0.0,
    TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C22.vc", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C22", 1.0, "1", 0.0,
    TRUE, FALSE, 1U, 1U, NE_INIT_MODE_MANDATORY, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.private.Cjunction.vc", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1.0, "1", 0.0, TRUE, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.private.Cjunction.vc", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1.0, "1", 0.0, TRUE, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.private.Cjunction.vc", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1.0, "1", 0.0, TRUE, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.D.v", 0U, 1,
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.mosfet_equation.i", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C8.i", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C8", 1.0, "1", 0.0, FALSE, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C2C3.i", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C2+C3", 1.0, "1", 0.0, FALSE, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C12.i", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C12", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C14.i", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C14", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.R4.i", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/R4", 1.0, "1", 0.0, FALSE, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C11.n.v", 0U, 1,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C11", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C22.i", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C22", 1.0, "1", 0.0,
    FALSE, FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.i_capacitor", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1.0, "1", 0.0, FALSE, FALSE,
    1U, 1U, NE_INIT_MODE_NONE, "Junction capacitance current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode.i", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.mosfet_equation.i", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.i_capacitor", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Junction capacitance current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode.i", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.mosfet_equation.i", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.i_capacitor", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Junction capacitance current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode.i", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.mosfet_equation.i", 0U, 0,
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1.0, "1", 0.0, FALSE,
    FALSE, 1U, 1U, NE_INIT_MODE_NONE, "i", } };

static NeVariableData *s_discrete_data = NULL;
static NeObservableData s_observable_data[278] = { {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.D.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.G",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.S.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.diode.Tsim",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.diode.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.diode.i_capacitor",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.diode.i_diode",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.diode.v_diode",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.diode.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.diode.ni.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.diode.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.diode.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.diode.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.diode.v_capacitor",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.mosfet_equation.G",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.mosfet_equation.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.mosfet_equation.isOn",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.mosfet_equation.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.mosfet_equation.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.mosfet_equation.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.mosfet_equation.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "DC_DC_Buck_PLANT.Active_Load.Simulink_PS_Converter1_output",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/Simulink-PS\nConverter1", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter1_output", }, {
    "DC_DC_Buck_PLANT.Active_Load.x0.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.Active_Load.x1.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C2C3.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C2+C3", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C2C3.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C2+C3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C2C3.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C2+C3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C2C3.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C2+C3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C2C3.vc",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C2+C3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C2C3.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C2+C3", 1U, 1U, "kW", 1.0e-6, "kW",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C4C5C6.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C4+C5+C6", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C4C5C6.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C4+C5+C6", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C4C5C6.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C4+C5+C6", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C4C5C6.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C4+C5+C6", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C4C5C6.vc",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C4+C5+C6", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C4C5C6.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C4+C5+C6", 1U, 1U, "kW", 1.0e-6,
    "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C8.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C8", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C8.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C8", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C8.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C8", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C8.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C8", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C8.vc",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C8", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.C8.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C8", 1U, 1U, "kW", 1.0e-6, "kW",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Conn1.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Conn2.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Conn3.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C10.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C10", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C10.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C10", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C10.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C10", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C10.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C10", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C10.vc",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C10", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C10.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C10", 1U, 1U, "kW",
    1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C11.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C11", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C11.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C11", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C11.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C11", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C11.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C11", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C11.vc",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C11", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C11.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C11", 1U, 1U, "kW",
    1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C12.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C12", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C12.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C12", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C12.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C12", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C12.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C12", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C12.vc",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C12", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C12.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C12", 1U, 1U, "kW",
    1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C13.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C13", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C13.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C13", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C13.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C13", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C13.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C13", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C13.vc",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C13", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C13.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C13", 1U, 1U, "kW",
    1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C14.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C14", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C14.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C14", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C14.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C14", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C14.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C14", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C14.vc",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C14", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C14.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C14", 1U, 1U, "kW",
    1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C22.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C22", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C22.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C22", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C22.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C22", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C22.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C22", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C22.vc",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C22", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C22.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C22", 1U, 1U, "kW",
    1.0e-6, "kW", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.Conn0.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.Conn1.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor", 1U, 1U, "V", 1.0,
    "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.Electrical_Reference.V.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/Electrical Reference",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE,
    FALSE, NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.Op_Amp.i1",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/Op-Amp", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Input current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.Op_Amp.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/Op-Amp", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.Op_Amp.out.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/Op-Amp", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.Op_Amp.outI",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/Op-Amp", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current into output node", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.Op_Amp.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/Op-Amp", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.Op_Amp.v1",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/Op-Amp", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Input voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R10.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R10", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R10.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R10", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R10.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R10", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R10.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R10", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R10.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R10", 1U, 1U,
    "A^2*Ohm", 1.0e-6, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R11.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R11", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R11.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R11", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R11.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R11", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R11.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R11", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R11.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R11", 1U, 1U,
    "A^2*Ohm", 1.0e-6, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R22.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R22", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R22.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R22", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R22.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R22", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R22.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R22", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R22.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R22", 1U, 1U,
    "A^2*Ohm", 1.0e-6, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R8.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R8", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R8.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R8", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R8.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R8", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R8.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R8", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R8.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R8", 1U, 1U,
    "A^2*Ohm", 1.0e-6, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R9.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R9", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R9.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R9", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R9.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R9", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R9.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R9", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R9.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R9", 1U, 1U,
    "A^2*Ohm", 1.0e-6, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE,
    FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.Voltage_Sensor.V",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/Voltage Sensor", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.Voltage_Sensor.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/Voltage Sensor", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.Voltage_Sensor.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/Voltage Sensor", 1U,
    1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.Voltage_Sensor_V",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/PS-Simulink\nConverter",
    1U, 1U, "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE,
    FALSE, NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage_Sensor_V", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.private.Cjunction.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.private.Cjunction.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.private.Cjunction.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.private.Cjunction.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.private.Cjunction.vc",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.Tsim",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.i_capacitor",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.i_diode",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.v_diode",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.ni.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.private.ohmicResistance.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.private.ohmicResistance.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.private.ohmicResistance.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.private.ohmicResistance.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.private.pi.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.v_capacitor",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.private.Cjunction.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.private.Cjunction.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.private.Cjunction.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.private.Cjunction.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.private.Cjunction.vc",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.Tsim",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.i_capacitor",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.i_diode",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.v_diode",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.ni.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.private.ohmicResistance.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.private.ohmicResistance.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.private.ohmicResistance.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.private.ohmicResistance.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.private.pi.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.v_capacitor",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.private.Cjunction.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.private.Cjunction.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.private.Cjunction.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.private.Cjunction.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.private.Cjunction.vc",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Capacitor voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.Tsim",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.i_capacitor",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.i_diode",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.v_diode",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.ni.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.private.ohmicResistance.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.private.ohmicResistance.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.private.ohmicResistance.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.private.ohmicResistance.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.private.pi.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.v_capacitor",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.L1.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/L1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.L1.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/L1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.L1.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/L1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.L1.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/L1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.L1.i_L",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/L1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_MANDATORY, FALSE, TRUE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Inductor current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.L1.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/L1", 1U, 1U, "kW", 1.0e-6, "kW",
    NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.D.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.G",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.S.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode.Tsim",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode.i_capacitor",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode.i_diode",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode.v_diode",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode.ni.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode.v_capacitor",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.mosfet_equation.G",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.mosfet_equation.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.mosfet_equation.isOn",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.mosfet_equation.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.mosfet_equation.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.mosfet_equation.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.mosfet_equation.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.D.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.G",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.S.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode.Tsim",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode.i_capacitor",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode.i_diode",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode.v_diode",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode.ni.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode.v_capacitor",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.mosfet_equation.G",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.mosfet_equation.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.mosfet_equation.isOn",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.mosfet_equation.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.mosfet_equation.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.mosfet_equation.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.mosfet_equation.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.D.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.G",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "G", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.S.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode.Tsim",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "K", 1.0, "K",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Tsim", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode.i_capacitor",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode.i_diode",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode.v_diode",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Intrinsic diode voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode.ni.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode.v_capacitor",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Junction capacitance voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.mosfet_equation.G",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "PS", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.mosfet_equation.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "i", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.mosfet_equation.isOn",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "1", 1.0, "1",
    NE_NOMINAL_SOURCE_DERIVED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "isOn", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.mosfet_equation.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.mosfet_equation.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.mosfet_equation.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "v", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.mosfet_equation.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 1U, "W", 1.0, "kW",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Power dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.R4.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/R4", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.R4.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/R4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.R4.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/R4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.R4.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/R4", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.R4.power_dissipated",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/R4", 1U, 1U, "A^2*Ohm", 1.0e-6,
    "A^2*Ohm", NE_NOMINAL_SOURCE_NONE, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, FALSE, "power_dissipated", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Simulink_PS_Converter1_output",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Simulink-PS\nConverter1", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter1_output", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Simulink_PS_Converter3_output",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Simulink-PS\nConverter3", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter3_output", }, {
    "DC_DC_Buck_PLANT.DC_DC_Buck.Simulink_PS_Converter_output",
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Simulink-PS\nConverter", 1U, 1U,
    "1", 1.0, "1", NE_NOMINAL_SOURCE_FIXED, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Simulink_PS_Converter_output", }, {
    "DC_DC_Buck_PLANT.Electrical_Reference.V.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/Electrical Reference", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.Output_Voltage.V",
    "DCDC_Buck/DC//DC_Buck_PLANT/Output Voltage", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "V", }, {
    "DC_DC_Buck_PLANT.Output_Voltage.n.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/Output Voltage", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.Output_Voltage.p.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/Output Voltage", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.Output_Voltage_V",
    "DCDC_Buck/DC//DC_Buck_PLANT/PS-Simulink\nConverter", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, FALSE, TRUE, "Output_Voltage_V", }, {
    "DC_DC_Buck_PLANT.PR1.i", "DCDC_Buck/DC//DC_Buck_PLANT/PR1", 1U, 1U, "A",
    1.0, "A", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.PR1.n.v", "DCDC_Buck/DC//DC_Buck_PLANT/PR1", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.PR1.p.v", "DCDC_Buck/DC//DC_Buck_PLANT/PR1", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "DC_DC_Buck_PLANT.PR1.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/PR1", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.PR1.power_dissipated", "DCDC_Buck/DC//DC_Buck_PLANT/PR1",
    1U, 1U, "A^2*Ohm", 1.0e-6, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, { "DC_DC_Buck_PLANT.PR2.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/PR2", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.PR2.n.v", "DCDC_Buck/DC//DC_Buck_PLANT/PR2", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.PR2.p.v", "DCDC_Buck/DC//DC_Buck_PLANT/PR2", 1U, 1U, "V",
    1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, { "DC_DC_Buck_PLANT.PR2.v",
    "DCDC_Buck/DC//DC_Buck_PLANT/PR2", 1U, 1U, "V", 1.0, "V",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.PR2.power_dissipated", "DCDC_Buck/DC//DC_Buck_PLANT/PR2",
    1U, 1U, "A^2*Ohm", 1.0e-6, "A^2*Ohm", NE_NOMINAL_SOURCE_NONE,
    NE_INIT_MODE_NONE, FALSE, FALSE, NE_FREQTIME_TYPE_TIME, TRUE, FALSE,
    "power_dissipated", }, { "DC_DC_Buck_PLANT.Source.i",
    "DCDC_Buck/DC//DC_Buck_PLANT/Source", 1U, 1U, "A", 1.0, "A",
    NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, FALSE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Current", }, {
    "DC_DC_Buck_PLANT.Source.n.v", "DCDC_Buck/DC//DC_Buck_PLANT/Source", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.Source.p.v", "DCDC_Buck/DC//DC_Buck_PLANT/Source", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", }, {
    "DC_DC_Buck_PLANT.Source.v", "DCDC_Buck/DC//DC_Buck_PLANT/Source", 1U, 1U,
    "V", 1.0, "V", NE_NOMINAL_SOURCE_MODEL, NE_INIT_MODE_NONE, TRUE, FALSE,
    NE_FREQTIME_TYPE_TIME, TRUE, TRUE, "Voltage", } };

static NeModeData *s_major_mode_data = NULL;
static NeZCData s_zc_data[11] = { {
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 0U,
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U,
    1U, "DC_DC_Buck_PLANT.DC_DC_Buck.Diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U,
    2U, "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U,
    3U, "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U,
    4U, "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U,
    5U, "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U,
    6U, "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    NE_ZC_TYPE_FALSE, }, { "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U,
    7U, "DC_DC_Buck_PLANT.Active_Load.MOSFET.mosfet_equation",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U,
    8U, "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.mosfet_equation",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U,
    9U, "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.mosfet_equation",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    NE_ZC_TYPE_FALSE, }, { "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U,
    10U, "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.mosfet_equation",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    NE_ZC_TYPE_FALSE, } };

static NeRange s_range[11] = { {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData s_assert_data[78] = { {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C2+C3", 1U, 0U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.C2C3.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C2+C3", 1U, 1U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.C2C3.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C2+C3", 1U, 2U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.C2C3.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C2+C3", 1U, 3U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.C2C3.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C4+C5+C6", 1U, 4U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.C4C5C6.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C4+C5+C6", 1U, 5U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.C4C5C6.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C4+C5+C6", 1U, 6U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.C4C5C6.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C4+C5+C6", 1U, 7U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.C4C5C6.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C8", 1U, 8U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.C8.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C8", 1U, 9U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.C8.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C8", 1U, 10U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.C8.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/C8", 1U, 11U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.C8.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C10", 1U, 12U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C10.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C10", 1U, 13U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C10.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C10", 1U, 14U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C10.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C10", 1U, 15U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C10.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C11", 1U, 16U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C11.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C11", 1U, 17U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C11.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C11", 1U, 18U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C11.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C11", 1U, 19U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C11.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C12", 1U, 20U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C12.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C12", 1U, 21U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C12.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C12", 1U, 22U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C12.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C12", 1U, 23U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C12.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C13", 1U, 24U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C13.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C13", 1U, 25U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C13.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C13", 1U, 26U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C13.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C13", 1U, 27U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C13.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C14", 1U, 28U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C14.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C14", 1U, 29U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C14.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C14", 1U, 30U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C14.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C14", 1U, 31U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C14.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C22", 1U, 32U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C22.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C22", 1U, 33U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C22.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C22", 1U, 34U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C22.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/C22", 1U, 35U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.C22.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R10", 1U, 36U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R10.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R10", 1U, 37U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R10.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R11", 1U, 38U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R11.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R11", 1U, 39U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R11.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R22", 1U, 40U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R22.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R22", 1U, 41U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R22.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R8", 1U, 42U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R8.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R8", 1U, 43U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R8.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R9", 1U, 44U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R9.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Current_Sensor/R9", 1U, 45U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.R9.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 46U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.private.ohmicResistance.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode", 1U, 47U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode.private.ohmicResistance.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 48U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.private.ohmicResistance.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode1", 1U, 49U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode1.private.ohmicResistance.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 50U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.private.ohmicResistance.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/Diode2", 1U, 51U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.Diode2.private.ohmicResistance.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/L1", 1U, 52U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.L1.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/L1", 1U, 53U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.L1.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/L1", 1U, 54U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.L1.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/L1", 1U, 55U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.L1.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/R4", 1U, 56U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.R4.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/R4", 1U, 57U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.R4.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/PR1", 1U, 58U,
    "DC_DC_Buck_PLANT.PR1.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/PR1", 1U, 59U,
    "DC_DC_Buck_PLANT.PR1.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/PR2", 1U, 60U,
    "DC_DC_Buck_PLANT.PR2.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the exponent must be positive when the base is equal to zero.",
    "physmod:common:mf:expr:analyze:RequireExponentPositive", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/PR2", 1U, 61U,
    "DC_DC_Buck_PLANT.PR2.power_dissipated",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    FALSE,
    "In power, the base must be nonnegative when the exponent is not an integer.",
    "physmod:common:mf:expr:analyze:RequireBaseNonnegative", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 62U,
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 63U,
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 64U,
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/Active_Load/MOSFET", 1U, 65U,
    "DC_DC_Buck_PLANT.Active_Load.MOSFET.mosfet_equation",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 66U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 67U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 68U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET1", 1U, 69U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET1.mosfet_equation",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 70U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 71U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 72U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET2", 1U, 73U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET2.mosfet_equation",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 74U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 75U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 76U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.diode",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", }, {
    "DCDC_Buck/DC//DC_Buck_PLANT/DC//DC Buck/MOSFET3", 1U, 77U,
    "DC_DC_Buck_PLANT.DC_DC_Buck.MOSFET3.mosfet_equation",
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    FALSE, "In divide, the denominator must be nonzero.",
    "physmod:common:mf:expr:analyze:RequireDenominatorNonzero", } };

static NeRange s_assert_range[78] = { {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 29U, 26U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 27U, 26U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 36U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 33U, 26U, 35U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 29U, 26U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 27U, 26U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 36U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 33U, 26U, 35U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 29U, 26U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 27U, 26U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 36U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 33U, 26U, 35U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 29U, 26U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 27U, 26U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 36U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 33U, 26U, 35U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 29U, 26U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 27U, 26U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 36U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 33U, 26U, 35U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 29U, 26U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 27U, 26U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 36U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 33U, 26U, 35U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 29U, 26U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 27U, 26U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 36U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 33U, 26U, 35U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 29U, 26U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 27U, 26U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 36U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 33U, 26U, 35U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 29U, 26U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 27U, 26U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 36U, 26U, 37U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    26U, 33U, 26U, 35U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 29U, 20U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 27U, 20U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 29U, 20U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 27U, 20U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 29U, 20U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 27U, 20U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 29U, 20U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 27U, 20U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 29U, 20U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 27U, 20U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 29U, 20U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 27U, 20U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 29U, 20U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 27U, 20U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 29U, 20U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 27U, 20U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    25U, 31U, 25U, 32U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    25U, 27U, 25U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    25U, 39U, 25U, 40U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    25U, 37U, 25U, 38U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 29U, 20U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 27U, 20U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 29U, 20U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 27U, 20U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 29U, 20U, 30U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/resistor.ssc",
    20U, 27U, 20U, 28U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeAssertData *s_param_assert_data = NULL;
static NeRange *s_param_assert_range = NULL;
static NeAssertData *s_initial_assert_data = NULL;
static NeRange *s_initial_assert_range = NULL;
static NeRange s_equation_range[60] = { {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    36U, 5U, 36U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    36U, 5U, 36U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    36U, 5U, 36U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    36U, 5U, 36U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    36U, 5U, 36U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    36U, 5U, 36U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    36U, 5U, 36U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    36U, 5U, 36U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    36U, 5U, 36U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    36U, 5U, 36U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    36U, 5U, 36U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    36U, 5U, 36U, 25U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    34U, 5U, 34U, 23U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/inductor.ssc",
    34U, 20U, 34U, 27U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    35U, 5U, 35U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    35U, 5U, 35U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    35U, 5U, 35U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    35U, 5U, 35U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    35U, 5U, 35U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc",
    35U, 5U, 35U, 18U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/simscape/library/m/+foundation/+electrical/branch.ssc",
    23U, 5U, 23U, 19U, NE_RANGE_TYPE_NORMAL, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/diode_base.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, }, {
    "C:/Program Files/MATLAB/R2021b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+mosfet_ideal/mosfet_equation.sscp",
    1U, 1U, 1U, 1U, NE_RANGE_TYPE_PROTECTED, } };

static NeRange *s_cer_range = NULL;
static NeRange *s_icr_range = NULL;
static NeParameterData *s_logical_parameter_data = NULL;
static NeParameterData *s_integer_parameter_data = NULL;
static NeParameterData *s_index_parameter_data = NULL;
static NeParameterData *s_real_parameter_data = NULL;
static NeDsMethodOutput *ds_output_m_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM_P.mNumCol = 31;
  out->mM_P.mNumRow = 31;
  out->mM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    32);
  out->mM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    13);
  return out;
}

static NeDsMethodOutput *ds_output_m(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mM.mN = 13;
  out->mM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 13);
  return out;
}

static NeDsMethodOutput *ds_output_vmm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMM.mN = 13;
  out->mVMM.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    13);
  return out;
}

static NeDsMethodOutput *ds_output_dxm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM_P.mNumCol = 31;
  out->mDXM_P.mNumRow = 13;
  out->mDXM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    32);
  out->mDXM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXM.mN = 0;
  out->mDXM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM_P.mNumCol = 0;
  out->mDDM_P.mNumRow = 13;
  out->mDDM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDM.mN = 0;
  out->mDDM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dum_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM_P.mNumCol = 4;
  out->mDUM_P.mNumRow = 13;
  out->mDUM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mDUM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dum(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUM.mN = 0;
  out->mDUM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM_P.mNumCol = 1;
  out->mDTM_P.mNumRow = 13;
  out->mDTM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTM.mN = 0;
  out->mDTM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpm_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPM_P.mNumCol = 0;
  out->mDPM_P.mNumRow = 13;
  out->mDPM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDPM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dpm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPM.mN = 0;
  out->mDPM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_a_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA_P.mNumCol = 31;
  out->mA_P.mNumRow = 31;
  out->mA_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    32);
  out->mA_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    83);
  return out;
}

static NeDsMethodOutput *ds_output_a(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mA.mN = 83;
  out->mA.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 83);
  return out;
}

static NeDsMethodOutput *ds_output_b_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB_P.mNumCol = 4;
  out->mB_P.mNumRow = 31;
  out->mB_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mB_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_b(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mB.mN = 0;
  out->mB.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_c_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC_P.mNumCol = 1;
  out->mC_P.mNumRow = 31;
  out->mC_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mC_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_c(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mC.mN = 0;
  out->mC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_f(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mF.mN = 31;
  out->mF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 31);
  return out;
}

static NeDsMethodOutput *ds_output_vmf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVMF.mN = 31;
  out->mVMF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    31);
  return out;
}

static NeDsMethodOutput *ds_output_vpf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVPF.mN = 31;
  out->mVPF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    31);
  return out;
}

static NeDsMethodOutput *ds_output_vsf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVSF.mN = 31;
  out->mVSF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    31);
  return out;
}

static NeDsMethodOutput *ds_output_slf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF.mN = 31;
  out->mSLF.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    31);
  return out;
}

static NeDsMethodOutput *ds_output_slf0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLF0.mN = 31;
  out->mSLF0.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 31);
  return out;
}

static NeDsMethodOutput *ds_output_dxf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF_P.mNumCol = 31;
  out->mDXF_P.mNumRow = 31;
  out->mDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    32);
  out->mDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    37);
  return out;
}

static NeDsMethodOutput *ds_output_dxf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXF.mN = 37;
  out->mDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 37);
  return out;
}

static NeDsMethodOutput *ds_output_duf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF_P.mNumCol = 4;
  out->mDUF_P.mNumRow = 31;
  out->mDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUF.mN = 0;
  out->mDUF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF_P.mNumCol = 1;
  out->mDTF_P.mNumRow = 31;
  out->mDTF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTF.mN = 0;
  out->mDTF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF_P.mNumCol = 0;
  out->mDDF_P.mNumRow = 31;
  out->mDDF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDDF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDF.mN = 0;
  out->mDDF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpdxf_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPDXF_P.mNumCol = 0;
  out->mDPDXF_P.mNumRow = 37;
  out->mDPDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDPDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dpdxf(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDPDXF.mN = 0;
  out->mDPDXF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF_P.mNumCol = 0;
  out->mDWF_P.mNumRow = 31;
  out->mDWF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    1);
  out->mDWF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dwf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDWF.mN = 0;
  out->mDWF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUF_P.mNumCol = 4;
  out->mTDUF_P.mNumRow = 31;
  out->mTDUF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mTDUF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
  return out;
}

static NeDsMethodOutput *ds_output_tdxf_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXF_P.mNumCol = 31;
  out->mTDXF_P.mNumRow = 31;
  out->mTDXF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    32);
  out->mTDXF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    120);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_P.mNumCol = 32;
  out->mDNF_P.mNumRow = 31;
  out->mDNF_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    33);
  out->mDNF_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF.mN = 0;
  out->mDNF.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dnf_v_x(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDNF_V_X.mN = 31;
  out->mDNF_V_X.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 31);
  return out;
}

static NeDsMethodOutput *ds_output_cer(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCER.mN = 0;
  out->mCER.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxcer(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXCER.mN = 0;
  out->mDXCER.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxcer_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXCER_P.mNumCol = 31;
  out->mDXCER_P.mNumRow = 0;
  out->mDXCER_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 32);
  out->mDXCER_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ic(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIC.mN = 31;
  out->mIC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 31);
  return out;
}

static NeDsMethodOutput *ds_output_icr(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR.mN = 0;
  out->mICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icr_im(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IM.mN = 0;
  out->mICR_IM.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_icr_id(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_ID.mN = 0;
  out->mICR_ID.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icr_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICR_IL.mN = 0;
  out->mICR_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR.mN = 0;
  out->mDXICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICR_P.mNumCol = 31;
  out->mDXICR_P.mNumRow = 0;
  out->mDXICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 32);
  out->mDXICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR.mN = 0;
  out->mDDICR.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICR_P.mNumCol = 0;
  out->mDDICR_P.mNumRow = 0;
  out->mDDICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_tduicr_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUICR_P.mNumCol = 4;
  out->mTDUICR_P.mNumRow = 0;
  out->mTDUICR_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 5);
  out->mTDUICR_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM_P.mNumCol = 31;
  out->mICRM_P.mNumRow = 0;
  out->mICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    32);
  out->mICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_icrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mICRM.mN = 0;
  out->mICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM_P.mNumCol = 31;
  out->mDXICRM_P.mNumRow = 0;
  out->mDXICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 32);
  out->mDXICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXICRM.mN = 0;
  out->mDXICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM_P.mNumCol = 0;
  out->mDDICRM_P.mNumRow = 0;
  out->mDDICRM_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 1);
  out->mDDICRM_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_ddicrm(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDDICRM.mN = 0;
  out->mDDICRM.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDUY_P.mNumCol = 4;
  out->mMDUY_P.mNumRow = 2;
  out->mMDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mMDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_mdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMDXY_P.mNumCol = 31;
  out->mMDXY_P.mNumRow = 2;
  out->mMDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    32);
  out->mMDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tduy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDUY_P.mNumCol = 4;
  out->mTDUY_P.mNumRow = 2;
  out->mTDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mTDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_tdxy_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mTDXY_P.mNumCol = 31;
  out->mTDXY_P.mNumRow = 2;
  out->mTDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    32);
  out->mTDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
  return out;
}

static NeDsMethodOutput *ds_output_y(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mY.mN = 2;
  out->mY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 2);
  return out;
}

static NeDsMethodOutput *ds_output_dxy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY_P.mNumCol = 31;
  out->mDXY_P.mNumRow = 2;
  out->mDXY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    32);
  out->mDXY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    4);
  return out;
}

static NeDsMethodOutput *ds_output_dxy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXY.mN = 4;
  out->mDXY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 4);
  return out;
}

static NeDsMethodOutput *ds_output_duy_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY_P.mNumCol = 4;
  out->mDUY_P.mNumRow = 2;
  out->mDUY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mDUY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_duy(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUY.mN = 0;
  out->mDUY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dty_p(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY_P.mNumCol = 1;
  out->mDTY_P.mNumRow = 2;
  out->mDTY_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mDTY_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dty(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTY.mN = 0;
  out->mDTY.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_mode(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mMODE.mN = 11;
  out->mMODE.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    11);
  return out;
}

static NeDsMethodOutput *ds_output_zc(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mZC.mN = 11;
  out->mZC.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 11);
  return out;
}

static NeDsMethodOutput *ds_output_cache_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_R.mN = 0;
  out->mCACHE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_cache_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mCACHE_I.mN = 0;
  out->mCACHE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_R.mN = 0;
  out->mUPDATE_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE_I.mN = 0;
  out->mUPDATE_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_R.mN = 0;
  out->mUPDATE2_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_update2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mUPDATE2_I.mN = 0;
  out->mUPDATE2_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_R.mN = 0;
  out->mLOCK_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK_I.mN = 0;
  out->mLOCK_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_r(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_R.mN = 0;
  out->mLOCK2_R.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_lock2_i(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOCK2_I.mN = 0;
  out->mLOCK2_I.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfo(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFO.mN = 0;
  out->mSFO.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_sfp(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSFP.mN = 0;
  out->mSFP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_init_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_R.mN = 0;
  out->mINIT_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_init_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mINIT_I.mN = 0;
  out->mINIT_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_log(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLOG.mN = 208;
  out->mLOG.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 208);
  return out;
}

static NeDsMethodOutput *ds_output_assert(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mASSERT.mN = 78;
  out->mASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    78);
  return out;
}

static NeDsMethodOutput *ds_output_passert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mPASSERT.mN = 0;
  out->mPASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_iassert(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIASSERT.mN = 0;
  out->mIASSERT.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_t(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_T.mN = 0;
  out->mDEL_T.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V.mN = 0;
  out->mDEL_V.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_del_v0(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_V0.mN = 0;
  out->mDEL_V0.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_del_tmax(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDEL_TMAX.mN = 0;
  out->mDEL_TMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT_P.mNumCol = 31;
  out->mDXDELT_P.mNumRow = 0;
  out->mDXDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 32);
  out->mDXDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dxdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDXDELT.mN = 0;
  out->mDXDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT_P.mNumCol = 4;
  out->mDUDELT_P.mNumRow = 0;
  out->mDUDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 5);
  out->mDUDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dudelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDUDELT.mN = 0;
  out->mDUDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt_p(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT_P.mNumCol = 1;
  out->mDTDELT_P.mNumRow = 0;
  out->mDTDELT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 2);
  out->mDTDELT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof
    (int32_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dtdelt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDTDELT.mN = 0;
  out->mDTDELT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_obs_exp(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_EXP.mN = 260;
  out->mOBS_EXP.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    260);
  return out;
}

static NeDsMethodOutput *ds_output_obs_act(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ACT.mN = 260;
  out->mOBS_ACT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    260);
  return out;
}

static NeDsMethodOutput *ds_output_obs_all(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_ALL.mN = 260;
  out->mOBS_ALL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    260);
  return out;
}

static NeDsMethodOutput *ds_output_obs_il(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mOBS_IL.mN = 260;
  out->mOBS_IL.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 260);
  return out;
}

static NeDsMethodOutput *ds_output_dp_l(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_L.mN = 0;
  out->mDP_L.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_i(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_I.mN = 0;
  out->mDP_I.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_j(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_J.mN = 0;
  out->mDP_J.mX = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_dp_r(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDP_R.mN = 0;
  out->mDP_R.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX.mN = 0;
  out->mQX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qu(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU.mN = 0;
  out->mQU.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qt(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT.mN = 0;
  out->mQT.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_q1(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1.mN = 0;
  out->mQ1.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_qx_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQX_P.mNumCol = 31;
  out->mQX_P.mNumRow = 31;
  out->mQX_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    32);
  out->mQX_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qu_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQU_P.mNumCol = 4;
  out->mQU_P.mNumRow = 31;
  out->mQU_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    5);
  out->mQU_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_qt_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQT_P.mNumCol = 1;
  out->mQT_P.mNumRow = 31;
  out->mQT_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQT_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_q1_p(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mQ1_P.mNumCol = 1;
  out->mQ1_P.mNumRow = 31;
  out->mQ1_P.mJc = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    2);
  out->mQ1_P.mIr = (int32_T *) allocator->mCallocFcn(allocator, sizeof(int32_T),
    0);
  return out;
}

static NeDsMethodOutput *ds_output_var_tol(const NeDynamicSystem *ds,
  PmAllocator *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mVAR_TOL.mN = 31;
  out->mVAR_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    31);
  return out;
}

static NeDsMethodOutput *ds_output_eq_tol(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mEQ_TOL.mN = 31;
  out->mEQ_TOL.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T),
    31);
  return out;
}

static NeDsMethodOutput *ds_output_lv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mLV.mN = 31;
  out->mLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    31);
  return out;
}

static NeDsMethodOutput *ds_output_slv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSLV.mN = 31;
  out->mSLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof(boolean_T),
    31);
  return out;
}

static NeDsMethodOutput *ds_output_nldv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mNLDV.mN = 31;
  out->mNLDV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 31);
  return out;
}

static NeDsMethodOutput *ds_output_sclv(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mSCLV.mN = 31;
  out->mSCLV.mX = (boolean_T *) allocator->mCallocFcn(allocator, sizeof
    (boolean_T), 31);
  return out;
}

static NeDsMethodOutput *ds_output_imin(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMIN.mN = 31;
  out->mIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 31);
  return out;
}

static NeDsMethodOutput *ds_output_imax(const NeDynamicSystem *ds, PmAllocator
  *allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mIMAX.mN = 31;
  out->mIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 31);
  return out;
}

static NeDsMethodOutput *ds_output_dimin(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDIMIN.mN = 0;
  out->mDIMIN.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static NeDsMethodOutput *ds_output_dimax(const NeDynamicSystem *ds, PmAllocator *
  allocator)
{
  NeDsMethodOutput *out;
  (void)ds;
  out = (NeDsMethodOutput *) allocator->mCallocFcn(allocator, sizeof
    (NeDsMethodOutput), 1);
  out->mDIMAX.mN = 0;
  out->mDIMAX.mX = (real_T *) allocator->mCallocFcn(allocator, sizeof(real_T), 0);
  return out;
}

static void release_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  if (--_ds->mRefCnt == 0) {
    _ds->mAlloc.mFreeFcn(&_ds->mAlloc, _ds);
  }
}

static void get_reference(NeDynamicSystem *ds)
{
  _NeDynamicSystem *_ds;
  _ds = (_NeDynamicSystem *)ds;
  ++_ds->mRefCnt;
}

static NeDynamicSystem *diagnostics(NeDynamicSystem *ds, boolean_T kp)
{
  _NeDynamicSystem *_ds = (_NeDynamicSystem *)ds;
  (void) kp;
  ne_ds_get_reference(&_ds->mBase);
  return &_ds->mBase;
}

static void expand(const NeDynamicSystem *ds, const NeDynamicSystemInput *in,
                   PmRealVector *out, boolean_T kp)
{
  (void)ds;
  (void)kp;
  memcpy(out->mX, in->mX.mX, sizeof(real_T)*out->mN);
}

static void rtpmap(const NeDynamicSystem * ds, const PmIntVector* inl, const
                   PmIntVector* ini, const PmIntVector* inj, const PmRealVector*
                   inr, PmIntVector* outl, PmIntVector* outi, PmIntVector* outj,
                   PmRealVector* outr)
{
  (void)ds;
  memcpy(outl->mX, inl->mX, sizeof(int32_T)*inl->mN);
  memcpy(outi->mX, ini->mX, sizeof(int32_T)*ini->mN);
  memcpy(outj->mX, inj->mX, sizeof(int32_T)*inj->mN);
  memcpy(outr->mX, inr->mX, sizeof(real_T)*inr->mN);
}

NeDynamicSystem *DCDC_Buck_9d5357ce_1_dae_ds(PmAllocator *allocator)
{
  NeDynamicSystem *ds;
  _NeDynamicSystem *_ds;
  static NeDsIoInfo input_info[4];
  static NeDsIoInfo output_info[2];

  /* allocate dynamic system data and extended data */
  _ds = (_NeDynamicSystem *)allocator->mCallocFcn( allocator, sizeof
    (_NeDynamicSystem), 1);
  _ds->mAlloc = *allocator;
  _ds->mRefCnt = 1;
  ds = &_ds->mBase;

  /* setup sizes */
  ds->mNumVariables = 31;
  ds->mNumDiscreteRealVariables = 0;
  ds->mNumDifferentialVariables = 13;
  ds->mNumEquations = 31;
  ds->mNumCEResiduals = 0;
  ds->mNumICResiduals = 0;
  ds->mNumModes = 11;
  ds->mNumMajorModes = 0;
  ds->mNumRealCache = 0;
  ds->mNumIntCache = 0;
  ds->mNumObservables = 278;
  ds->mNumObservableElements = 260;
  ds->mNumZcs = 11;
  ds->mNumAsserts = 78;
  ds->mNumAssertRanges = 78;
  ds->mNumParamAsserts = 0;
  ds->mNumParamAssertRanges = 0;
  ds->mNumInitialAsserts = 0;
  ds->mNumInitialAssertRanges = 0;
  ds->mNumRanges = 11;
  ds->mNumEquationRanges = 60;
  ds->mNumCERRanges = 0;
  ds->mNumICRRanges = 0;
  ds->mNumFundamentalSamples = 0;
  ds->mNumDelays = 0;
  ds->mNumLogicalParameters = 0;
  ds->mNumIntegerParameters = 0;
  ds->mNumIndexParameters = 0;
  ds->mNumRealParameters = 0;
  ds->mNumLogicalDerivedParameters = 0;
  ds->mNumIntegerDerivedParameters = 0;
  ds->mNumIndexDerivedParameters = 0;
  ds->mNumRealDerivedParameters = 0;
  ds->mIsOutputLinear = TRUE;
  ds->mIsOutputSwitchedLinear = TRUE;
  ds->mIsScalable = FALSE;

  /* setup ios */
  ds->mNumIo[NE_INPUT_IO_TYPE] = 4;
  input_info[0].mIdentifier =
    "DC_DC_Buck_PLANT.Active_Load.Simulink_PS_Converter1_output";
  input_info[0].mM = 1;
  input_info[0].mN = 1;
  input_info[0].mName =
    "DC_DC_Buck_PLANT.Active_Load.Simulink_PS_Converter1_output";
  input_info[0].mUnit = "1";
  input_info[1].mIdentifier =
    "DC_DC_Buck_PLANT.DC_DC_Buck.Simulink_PS_Converter1_output";
  input_info[1].mM = 1;
  input_info[1].mN = 1;
  input_info[1].mName =
    "DC_DC_Buck_PLANT.DC_DC_Buck.Simulink_PS_Converter1_output";
  input_info[1].mUnit = "1";
  input_info[2].mIdentifier =
    "DC_DC_Buck_PLANT.DC_DC_Buck.Simulink_PS_Converter_output";
  input_info[2].mM = 1;
  input_info[2].mN = 1;
  input_info[2].mName =
    "DC_DC_Buck_PLANT.DC_DC_Buck.Simulink_PS_Converter_output";
  input_info[2].mUnit = "1";
  input_info[3].mIdentifier =
    "DC_DC_Buck_PLANT.DC_DC_Buck.Simulink_PS_Converter3_output";
  input_info[3].mM = 1;
  input_info[3].mN = 1;
  input_info[3].mName =
    "DC_DC_Buck_PLANT.DC_DC_Buck.Simulink_PS_Converter3_output";
  input_info[3].mUnit = "1";
  ds->mIo[NE_INPUT_IO_TYPE] = input_info;
  ds->mNumIo[NE_OUTPUT_IO_TYPE] = 2;
  output_info[0].mIdentifier =
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.Voltage_Sensor_V";
  output_info[0].mM = 1;
  output_info[0].mN = 1;
  output_info[0].mName =
    "DC_DC_Buck_PLANT.DC_DC_Buck.Current_Sensor.Voltage_Sensor_V";
  output_info[0].mUnit = "V";
  output_info[1].mIdentifier = "DC_DC_Buck_PLANT.Output_Voltage_V";
  output_info[1].mM = 1;
  output_info[1].mN = 1;
  output_info[1].mName = "DC_DC_Buck_PLANT.Output_Voltage_V";
  output_info[1].mUnit = "V";
  ds->mIo[NE_OUTPUT_IO_TYPE] = output_info;

  /* setup administration methods */
  ds->mReleaseReference = release_reference;
  ds->mGetReference = get_reference;
  ds->mDiagnosticsDsFcn = diagnostics;
  ds->mExpandFcn = expand;
  ds->mRtpMapFcn = rtpmap;
  ds->mMethods[NE_DS_METHOD_M_P] = DCDC_Buck_9d5357ce_1_ds_m_p;
  ds->mMakeOutput[NE_DS_METHOD_M_P] = ds_output_m_p;
  ds->mMethods[NE_DS_METHOD_M] = ds_m;
  ds->mMakeOutput[NE_DS_METHOD_M] = ds_output_m;
  ds->mMethods[NE_DS_METHOD_VMM] = ds_vmm;
  ds->mMakeOutput[NE_DS_METHOD_VMM] = ds_output_vmm;
  ds->mMethods[NE_DS_METHOD_DXM_P] = ds_dxm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXM_P] = ds_output_dxm_p;
  ds->mMethods[NE_DS_METHOD_DXM] = ds_dxm;
  ds->mMakeOutput[NE_DS_METHOD_DXM] = ds_output_dxm;
  ds->mMethods[NE_DS_METHOD_DDM_P] = ds_ddm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDM_P] = ds_output_ddm_p;
  ds->mMethods[NE_DS_METHOD_DDM] = ds_ddm;
  ds->mMakeOutput[NE_DS_METHOD_DDM] = ds_output_ddm;
  ds->mMethods[NE_DS_METHOD_DUM_P] = ds_dum_p;
  ds->mMakeOutput[NE_DS_METHOD_DUM_P] = ds_output_dum_p;
  ds->mMethods[NE_DS_METHOD_DUM] = ds_dum;
  ds->mMakeOutput[NE_DS_METHOD_DUM] = ds_output_dum;
  ds->mMethods[NE_DS_METHOD_DTM_P] = ds_dtm_p;
  ds->mMakeOutput[NE_DS_METHOD_DTM_P] = ds_output_dtm_p;
  ds->mMethods[NE_DS_METHOD_DTM] = ds_dtm;
  ds->mMakeOutput[NE_DS_METHOD_DTM] = ds_output_dtm;
  ds->mMethods[NE_DS_METHOD_DPM_P] = ds_dpm_p;
  ds->mMakeOutput[NE_DS_METHOD_DPM_P] = ds_output_dpm_p;
  ds->mMethods[NE_DS_METHOD_DPM] = ds_dpm;
  ds->mMakeOutput[NE_DS_METHOD_DPM] = ds_output_dpm;
  ds->mMethods[NE_DS_METHOD_A_P] = DCDC_Buck_9d5357ce_1_ds_a_p;
  ds->mMakeOutput[NE_DS_METHOD_A_P] = ds_output_a_p;
  ds->mMethods[NE_DS_METHOD_A] = DCDC_Buck_9d5357ce_1_ds_a;
  ds->mMakeOutput[NE_DS_METHOD_A] = ds_output_a;
  ds->mMethods[NE_DS_METHOD_B_P] = ds_b_p;
  ds->mMakeOutput[NE_DS_METHOD_B_P] = ds_output_b_p;
  ds->mMethods[NE_DS_METHOD_B] = ds_b;
  ds->mMakeOutput[NE_DS_METHOD_B] = ds_output_b;
  ds->mMethods[NE_DS_METHOD_C_P] = ds_c_p;
  ds->mMakeOutput[NE_DS_METHOD_C_P] = ds_output_c_p;
  ds->mMethods[NE_DS_METHOD_C] = ds_c;
  ds->mMakeOutput[NE_DS_METHOD_C] = ds_output_c;
  ds->mMethods[NE_DS_METHOD_F] = DCDC_Buck_9d5357ce_1_ds_f;
  ds->mMakeOutput[NE_DS_METHOD_F] = ds_output_f;
  ds->mMethods[NE_DS_METHOD_VMF] = ds_vmf;
  ds->mMakeOutput[NE_DS_METHOD_VMF] = ds_output_vmf;
  ds->mMethods[NE_DS_METHOD_VPF] = ds_vpf;
  ds->mMakeOutput[NE_DS_METHOD_VPF] = ds_output_vpf;
  ds->mMethods[NE_DS_METHOD_VSF] = ds_vsf;
  ds->mMakeOutput[NE_DS_METHOD_VSF] = ds_output_vsf;
  ds->mMethods[NE_DS_METHOD_SLF] = ds_slf;
  ds->mMakeOutput[NE_DS_METHOD_SLF] = ds_output_slf;
  ds->mMethods[NE_DS_METHOD_SLF0] = ds_slf0;
  ds->mMakeOutput[NE_DS_METHOD_SLF0] = ds_output_slf0;
  ds->mMethods[NE_DS_METHOD_DXF_P] = DCDC_Buck_9d5357ce_1_ds_dxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DXF_P] = ds_output_dxf_p;
  ds->mMethods[NE_DS_METHOD_DXF] = DCDC_Buck_9d5357ce_1_ds_dxf;
  ds->mMakeOutput[NE_DS_METHOD_DXF] = ds_output_dxf;
  ds->mMethods[NE_DS_METHOD_DUF_P] = ds_duf_p;
  ds->mMakeOutput[NE_DS_METHOD_DUF_P] = ds_output_duf_p;
  ds->mMethods[NE_DS_METHOD_DUF] = ds_duf;
  ds->mMakeOutput[NE_DS_METHOD_DUF] = ds_output_duf;
  ds->mMethods[NE_DS_METHOD_DTF_P] = ds_dtf_p;
  ds->mMakeOutput[NE_DS_METHOD_DTF_P] = ds_output_dtf_p;
  ds->mMethods[NE_DS_METHOD_DTF] = ds_dtf;
  ds->mMakeOutput[NE_DS_METHOD_DTF] = ds_output_dtf;
  ds->mMethods[NE_DS_METHOD_DDF_P] = ds_ddf_p;
  ds->mMakeOutput[NE_DS_METHOD_DDF_P] = ds_output_ddf_p;
  ds->mMethods[NE_DS_METHOD_DDF] = ds_ddf;
  ds->mMakeOutput[NE_DS_METHOD_DDF] = ds_output_ddf;
  ds->mMethods[NE_DS_METHOD_DPDXF_P] = ds_dpdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_DPDXF_P] = ds_output_dpdxf_p;
  ds->mMethods[NE_DS_METHOD_DPDXF] = ds_dpdxf;
  ds->mMakeOutput[NE_DS_METHOD_DPDXF] = ds_output_dpdxf;
  ds->mMethods[NE_DS_METHOD_DWF_P] = ds_dwf_p;
  ds->mMakeOutput[NE_DS_METHOD_DWF_P] = ds_output_dwf_p;
  ds->mMethods[NE_DS_METHOD_DWF] = ds_dwf;
  ds->mMakeOutput[NE_DS_METHOD_DWF] = ds_output_dwf;
  ds->mMethods[NE_DS_METHOD_TDUF_P] = ds_tduf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUF_P] = ds_output_tduf_p;
  ds->mMethods[NE_DS_METHOD_TDXF_P] = DCDC_Buck_9d5357ce_1_ds_tdxf_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXF_P] = ds_output_tdxf_p;
  ds->mMethods[NE_DS_METHOD_DNF_P] = ds_dnf_p;
  ds->mMakeOutput[NE_DS_METHOD_DNF_P] = ds_output_dnf_p;
  ds->mMethods[NE_DS_METHOD_DNF] = ds_dnf;
  ds->mMakeOutput[NE_DS_METHOD_DNF] = ds_output_dnf;
  ds->mMethods[NE_DS_METHOD_DNF_V_X] = ds_dnf_v_x;
  ds->mMakeOutput[NE_DS_METHOD_DNF_V_X] = ds_output_dnf_v_x;
  ds->mMethods[NE_DS_METHOD_CER] = ds_cer;
  ds->mMakeOutput[NE_DS_METHOD_CER] = ds_output_cer;
  ds->mMethods[NE_DS_METHOD_DXCER] = ds_dxcer;
  ds->mMakeOutput[NE_DS_METHOD_DXCER] = ds_output_dxcer;
  ds->mMethods[NE_DS_METHOD_DXCER_P] = ds_dxcer_p;
  ds->mMakeOutput[NE_DS_METHOD_DXCER_P] = ds_output_dxcer_p;
  ds->mMethods[NE_DS_METHOD_IC] = ds_ic;
  ds->mMakeOutput[NE_DS_METHOD_IC] = ds_output_ic;
  ds->mMethods[NE_DS_METHOD_ICR] = ds_icr;
  ds->mMakeOutput[NE_DS_METHOD_ICR] = ds_output_icr;
  ds->mMethods[NE_DS_METHOD_ICR_IM] = ds_icr_im;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IM] = ds_output_icr_im;
  ds->mMethods[NE_DS_METHOD_ICR_ID] = ds_icr_id;
  ds->mMakeOutput[NE_DS_METHOD_ICR_ID] = ds_output_icr_id;
  ds->mMethods[NE_DS_METHOD_ICR_IL] = ds_icr_il;
  ds->mMakeOutput[NE_DS_METHOD_ICR_IL] = ds_output_icr_il;
  ds->mMethods[NE_DS_METHOD_DXICR] = ds_dxicr;
  ds->mMakeOutput[NE_DS_METHOD_DXICR] = ds_output_dxicr;
  ds->mMethods[NE_DS_METHOD_DXICR_P] = ds_dxicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICR_P] = ds_output_dxicr_p;
  ds->mMethods[NE_DS_METHOD_DDICR] = ds_ddicr;
  ds->mMakeOutput[NE_DS_METHOD_DDICR] = ds_output_ddicr;
  ds->mMethods[NE_DS_METHOD_DDICR_P] = ds_ddicr_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICR_P] = ds_output_ddicr_p;
  ds->mMethods[NE_DS_METHOD_TDUICR_P] = ds_tduicr_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUICR_P] = ds_output_tduicr_p;
  ds->mMethods[NE_DS_METHOD_ICRM_P] = ds_icrm_p;
  ds->mMakeOutput[NE_DS_METHOD_ICRM_P] = ds_output_icrm_p;
  ds->mMethods[NE_DS_METHOD_ICRM] = ds_icrm;
  ds->mMakeOutput[NE_DS_METHOD_ICRM] = ds_output_icrm;
  ds->mMethods[NE_DS_METHOD_DXICRM_P] = ds_dxicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM_P] = ds_output_dxicrm_p;
  ds->mMethods[NE_DS_METHOD_DXICRM] = ds_dxicrm;
  ds->mMakeOutput[NE_DS_METHOD_DXICRM] = ds_output_dxicrm;
  ds->mMethods[NE_DS_METHOD_DDICRM_P] = ds_ddicrm_p;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM_P] = ds_output_ddicrm_p;
  ds->mMethods[NE_DS_METHOD_DDICRM] = ds_ddicrm;
  ds->mMakeOutput[NE_DS_METHOD_DDICRM] = ds_output_ddicrm;
  ds->mMethods[NE_DS_METHOD_MDUY_P] = ds_mduy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDUY_P] = ds_output_mduy_p;
  ds->mMethods[NE_DS_METHOD_MDXY_P] = ds_mdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_MDXY_P] = ds_output_mdxy_p;
  ds->mMethods[NE_DS_METHOD_TDUY_P] = ds_tduy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDUY_P] = ds_output_tduy_p;
  ds->mMethods[NE_DS_METHOD_TDXY_P] = DCDC_Buck_9d5357ce_1_ds_tdxy_p;
  ds->mMakeOutput[NE_DS_METHOD_TDXY_P] = ds_output_tdxy_p;
  ds->mMethods[NE_DS_METHOD_Y] = ds_y;
  ds->mMakeOutput[NE_DS_METHOD_Y] = ds_output_y;
  ds->mMethods[NE_DS_METHOD_DXY_P] = DCDC_Buck_9d5357ce_1_ds_dxy_p;
  ds->mMakeOutput[NE_DS_METHOD_DXY_P] = ds_output_dxy_p;
  ds->mMethods[NE_DS_METHOD_DXY] = ds_dxy;
  ds->mMakeOutput[NE_DS_METHOD_DXY] = ds_output_dxy;
  ds->mMethods[NE_DS_METHOD_DUY_P] = ds_duy_p;
  ds->mMakeOutput[NE_DS_METHOD_DUY_P] = ds_output_duy_p;
  ds->mMethods[NE_DS_METHOD_DUY] = ds_duy;
  ds->mMakeOutput[NE_DS_METHOD_DUY] = ds_output_duy;
  ds->mMethods[NE_DS_METHOD_DTY_P] = ds_dty_p;
  ds->mMakeOutput[NE_DS_METHOD_DTY_P] = ds_output_dty_p;
  ds->mMethods[NE_DS_METHOD_DTY] = ds_dty;
  ds->mMakeOutput[NE_DS_METHOD_DTY] = ds_output_dty;
  ds->mMethods[NE_DS_METHOD_MODE] = DCDC_Buck_9d5357ce_1_ds_mode;
  ds->mMakeOutput[NE_DS_METHOD_MODE] = ds_output_mode;
  ds->mMethods[NE_DS_METHOD_ZC] = DCDC_Buck_9d5357ce_1_ds_zc;
  ds->mMakeOutput[NE_DS_METHOD_ZC] = ds_output_zc;
  ds->mMethods[NE_DS_METHOD_CACHE_R] = ds_cache_r;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_R] = ds_output_cache_r;
  ds->mMethods[NE_DS_METHOD_CACHE_I] = ds_cache_i;
  ds->mMakeOutput[NE_DS_METHOD_CACHE_I] = ds_output_cache_i;
  ds->mMethods[NE_DS_METHOD_UPDATE_R] = ds_update_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_R] = ds_output_update_r;
  ds->mMethods[NE_DS_METHOD_UPDATE_I] = ds_update_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE_I] = ds_output_update_i;
  ds->mMethods[NE_DS_METHOD_UPDATE2_R] = ds_update2_r;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_R] = ds_output_update2_r;
  ds->mMethods[NE_DS_METHOD_UPDATE2_I] = ds_update2_i;
  ds->mMakeOutput[NE_DS_METHOD_UPDATE2_I] = ds_output_update2_i;
  ds->mMethods[NE_DS_METHOD_LOCK_R] = ds_lock_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_R] = ds_output_lock_r;
  ds->mMethods[NE_DS_METHOD_LOCK_I] = ds_lock_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK_I] = ds_output_lock_i;
  ds->mMethods[NE_DS_METHOD_LOCK2_R] = ds_lock2_r;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_R] = ds_output_lock2_r;
  ds->mMethods[NE_DS_METHOD_LOCK2_I] = ds_lock2_i;
  ds->mMakeOutput[NE_DS_METHOD_LOCK2_I] = ds_output_lock2_i;
  ds->mMethods[NE_DS_METHOD_SFO] = ds_sfo;
  ds->mMakeOutput[NE_DS_METHOD_SFO] = ds_output_sfo;
  ds->mMethods[NE_DS_METHOD_SFP] = ds_sfp;
  ds->mMakeOutput[NE_DS_METHOD_SFP] = ds_output_sfp;
  ds->mMethods[NE_DS_METHOD_INIT_R] = ds_init_r;
  ds->mMakeOutput[NE_DS_METHOD_INIT_R] = ds_output_init_r;
  ds->mMethods[NE_DS_METHOD_INIT_I] = ds_init_i;
  ds->mMakeOutput[NE_DS_METHOD_INIT_I] = ds_output_init_i;
  ds->mMethods[NE_DS_METHOD_LOG] = DCDC_Buck_9d5357ce_1_ds_log;
  ds->mMakeOutput[NE_DS_METHOD_LOG] = ds_output_log;
  ds->mMethods[NE_DS_METHOD_ASSERT] = DCDC_Buck_9d5357ce_1_ds_assert;
  ds->mMakeOutput[NE_DS_METHOD_ASSERT] = ds_output_assert;
  ds->mMethods[NE_DS_METHOD_PASSERT] = ds_passert;
  ds->mMakeOutput[NE_DS_METHOD_PASSERT] = ds_output_passert;
  ds->mMethods[NE_DS_METHOD_IASSERT] = ds_iassert;
  ds->mMakeOutput[NE_DS_METHOD_IASSERT] = ds_output_iassert;
  ds->mMethods[NE_DS_METHOD_DEL_T] = ds_del_t;
  ds->mMakeOutput[NE_DS_METHOD_DEL_T] = ds_output_del_t;
  ds->mMethods[NE_DS_METHOD_DEL_V] = ds_del_v;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V] = ds_output_del_v;
  ds->mMethods[NE_DS_METHOD_DEL_V0] = ds_del_v0;
  ds->mMakeOutput[NE_DS_METHOD_DEL_V0] = ds_output_del_v0;
  ds->mMethods[NE_DS_METHOD_DEL_TMAX] = ds_del_tmax;
  ds->mMakeOutput[NE_DS_METHOD_DEL_TMAX] = ds_output_del_tmax;
  ds->mMethods[NE_DS_METHOD_DXDELT_P] = ds_dxdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT_P] = ds_output_dxdelt_p;
  ds->mMethods[NE_DS_METHOD_DXDELT] = ds_dxdelt;
  ds->mMakeOutput[NE_DS_METHOD_DXDELT] = ds_output_dxdelt;
  ds->mMethods[NE_DS_METHOD_DUDELT_P] = ds_dudelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT_P] = ds_output_dudelt_p;
  ds->mMethods[NE_DS_METHOD_DUDELT] = ds_dudelt;
  ds->mMakeOutput[NE_DS_METHOD_DUDELT] = ds_output_dudelt;
  ds->mMethods[NE_DS_METHOD_DTDELT_P] = ds_dtdelt_p;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT_P] = ds_output_dtdelt_p;
  ds->mMethods[NE_DS_METHOD_DTDELT] = ds_dtdelt;
  ds->mMakeOutput[NE_DS_METHOD_DTDELT] = ds_output_dtdelt;
  ds->mMethods[NE_DS_METHOD_OBS_EXP] = DCDC_Buck_9d5357ce_1_ds_obs_exp;
  ds->mMakeOutput[NE_DS_METHOD_OBS_EXP] = ds_output_obs_exp;
  ds->mMethods[NE_DS_METHOD_OBS_ACT] = DCDC_Buck_9d5357ce_1_ds_obs_act;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ACT] = ds_output_obs_act;
  ds->mMethods[NE_DS_METHOD_OBS_ALL] = DCDC_Buck_9d5357ce_1_ds_obs_all;
  ds->mMakeOutput[NE_DS_METHOD_OBS_ALL] = ds_output_obs_all;
  ds->mMethods[NE_DS_METHOD_OBS_IL] = DCDC_Buck_9d5357ce_1_ds_obs_il;
  ds->mMakeOutput[NE_DS_METHOD_OBS_IL] = ds_output_obs_il;
  ds->mMethods[NE_DS_METHOD_DP_L] = ds_dp_l;
  ds->mMakeOutput[NE_DS_METHOD_DP_L] = ds_output_dp_l;
  ds->mMethods[NE_DS_METHOD_DP_I] = ds_dp_i;
  ds->mMakeOutput[NE_DS_METHOD_DP_I] = ds_output_dp_i;
  ds->mMethods[NE_DS_METHOD_DP_J] = ds_dp_j;
  ds->mMakeOutput[NE_DS_METHOD_DP_J] = ds_output_dp_j;
  ds->mMethods[NE_DS_METHOD_DP_R] = ds_dp_r;
  ds->mMakeOutput[NE_DS_METHOD_DP_R] = ds_output_dp_r;
  ds->mMethods[NE_DS_METHOD_QX] = ds_qx;
  ds->mMakeOutput[NE_DS_METHOD_QX] = ds_output_qx;
  ds->mMethods[NE_DS_METHOD_QU] = ds_qu;
  ds->mMakeOutput[NE_DS_METHOD_QU] = ds_output_qu;
  ds->mMethods[NE_DS_METHOD_QT] = ds_qt;
  ds->mMakeOutput[NE_DS_METHOD_QT] = ds_output_qt;
  ds->mMethods[NE_DS_METHOD_Q1] = ds_q1;
  ds->mMakeOutput[NE_DS_METHOD_Q1] = ds_output_q1;
  ds->mMethods[NE_DS_METHOD_QX_P] = ds_qx_p;
  ds->mMakeOutput[NE_DS_METHOD_QX_P] = ds_output_qx_p;
  ds->mMethods[NE_DS_METHOD_QU_P] = ds_qu_p;
  ds->mMakeOutput[NE_DS_METHOD_QU_P] = ds_output_qu_p;
  ds->mMethods[NE_DS_METHOD_QT_P] = ds_qt_p;
  ds->mMakeOutput[NE_DS_METHOD_QT_P] = ds_output_qt_p;
  ds->mMethods[NE_DS_METHOD_Q1_P] = ds_q1_p;
  ds->mMakeOutput[NE_DS_METHOD_Q1_P] = ds_output_q1_p;
  ds->mMethods[NE_DS_METHOD_VAR_TOL] = ds_var_tol;
  ds->mMakeOutput[NE_DS_METHOD_VAR_TOL] = ds_output_var_tol;
  ds->mMethods[NE_DS_METHOD_EQ_TOL] = ds_eq_tol;
  ds->mMakeOutput[NE_DS_METHOD_EQ_TOL] = ds_output_eq_tol;
  ds->mMethods[NE_DS_METHOD_LV] = ds_lv;
  ds->mMakeOutput[NE_DS_METHOD_LV] = ds_output_lv;
  ds->mMethods[NE_DS_METHOD_SLV] = ds_slv;
  ds->mMakeOutput[NE_DS_METHOD_SLV] = ds_output_slv;
  ds->mMethods[NE_DS_METHOD_NLDV] = ds_nldv;
  ds->mMakeOutput[NE_DS_METHOD_NLDV] = ds_output_nldv;
  ds->mMethods[NE_DS_METHOD_SCLV] = ds_sclv;
  ds->mMakeOutput[NE_DS_METHOD_SCLV] = ds_output_sclv;
  ds->mMethods[NE_DS_METHOD_IMIN] = DCDC_Buck_9d5357ce_1_ds_imin;
  ds->mMakeOutput[NE_DS_METHOD_IMIN] = ds_output_imin;
  ds->mMethods[NE_DS_METHOD_IMAX] = DCDC_Buck_9d5357ce_1_ds_imax;
  ds->mMakeOutput[NE_DS_METHOD_IMAX] = ds_output_imax;
  ds->mMethods[NE_DS_METHOD_DIMIN] = ds_dimin;
  ds->mMakeOutput[NE_DS_METHOD_DIMIN] = ds_output_dimin;
  ds->mMethods[NE_DS_METHOD_DIMAX] = ds_dimax;
  ds->mMakeOutput[NE_DS_METHOD_DIMAX] = ds_output_dimax;

  /* equation data */
  ds->mEquationData = s_equation_data;

  /* cer data */
  ds->mCERData = s_cer_data;

  /* icr data */
  ds->mICRData = s_icr_data;

  /* continuous variable data */
  ds->mVariableData = s_variable_data;

  /* discrete variable data */
  ds->mDiscreteData = s_discrete_data;

  /* observable data */
  ds->mObservableData = s_observable_data;

  /* major mode data */
  ds->mMajorModeData = s_major_mode_data;

  /* zc data */
  ds->mZCData = s_zc_data;

  /* ranges */
  ds->mRanges = s_range;

  /* assert data */
  ds->mAssertData = s_assert_data;

  /* assert ranges */
  ds->mAssertRanges = s_assert_range;

  /* param assert data */
  ds->mParamAssertData = s_param_assert_data;

  /* param assert ranges */
  ds->mParamAssertRanges = s_param_assert_range;

  /* initial assert data */
  ds->mInitialAssertData = s_initial_assert_data;

  /* initial assert ranges */
  ds->mInitialAssertRanges = s_initial_assert_range;

  /* equation ranges */
  ds->mEquationRanges = s_equation_range;

  /* cer ranges */
  ds->mCERRanges = s_cer_range;

  /* icr ranges */
  ds->mICRRanges = s_icr_range;

  /* parameters */
  ds->mLogicalParameters = s_logical_parameter_data;
  ds->mIntegerParameters = s_integer_parameter_data;
  ds->mIndexParameters = s_index_parameter_data;
  ds->mRealParameters = s_real_parameter_data;

  /* constant tables */
  ds->mNumLargeArray = 0;
  return (NeDynamicSystem *)_ds;
}

static int32_T ds_passert (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_iassert (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_cer (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxcer (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxcer_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXCER_P;
  out.mNumCol = 31ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  out.mJc[30] = 0;
  out.mJc[31] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_v (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_v0 (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_tmax (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_del_t (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxdelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXDELT_P;
  out.mNumCol = 31ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  out.mJc[30] = 0;
  out.mJc[31] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dudelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUDELT_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtdelt_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTDELT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_cache_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_init_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_cache_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_init_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update2_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock2_r (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_update2_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lock2_i (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_sfp (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_sfo (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUF_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTF_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_b (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_b_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mB_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_c (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_c_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mC_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tduf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUF_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 1;
  out.mJc[2] = 2;
  out.mJc[3] = 3;
  out.mJc[4] = 4;
  out.mIr[0] = 14;
  out.mIr[1] = 26;
  out.mIr[2] = 28;
  out.mIr[3] = 30;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dwf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dwf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDWF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dpdxf (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dpdxf_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDPDXF_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 37ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_vmf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVMF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = true;
  out.mX[23] = true;
  out.mX[24] = true;
  out.mX[25] = true;
  out.mX[26] = true;
  out.mX[27] = true;
  out.mX[28] = true;
  out.mX[29] = true;
  out.mX[30] = true;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_slf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mSLF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  out.mX[29] = false;
  out.mX[30] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dnf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dnf_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDNF_P;
  out.mNumCol = 32ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  out.mJc[30] = 0;
  out.mJc[31] = 0;
  out.mJc[32] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dnf_v_x (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mDNF_V_X;
  out.mX[0] = true;
  out.mX[1] = true;
  out.mX[2] = true;
  out.mX[3] = true;
  out.mX[4] = true;
  out.mX[5] = true;
  out.mX[6] = true;
  out.mX[7] = true;
  out.mX[8] = true;
  out.mX[9] = true;
  out.mX[10] = true;
  out.mX[11] = true;
  out.mX[12] = true;
  out.mX[13] = true;
  out.mX[14] = true;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = true;
  out.mX[23] = true;
  out.mX[24] = true;
  out.mX[25] = true;
  out.mX[26] = true;
  out.mX[27] = true;
  out.mX[28] = true;
  out.mX[29] = true;
  out.mX[30] = true;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_slf0 (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mSLF0;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  out.mX[29] = false;
  out.mX[30] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_vpf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVPF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  out.mX[29] = false;
  out.mX[30] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_vsf (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVSF;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  out.mX[29] = false;
  out.mX[30] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ic (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mIC;
  out.mX[0] = 0.0;
  out.mX[1] = 0.0;
  out.mX[2] = 0.0;
  out.mX[3] = 0.0;
  out.mX[4] = 0.0;
  out.mX[5] = 0.0;
  out.mX[6] = 0.0;
  out.mX[7] = 0.0;
  out.mX[8] = 0.0;
  out.mX[9] = 0.0;
  out.mX[10] = 0.0;
  out.mX[11] = 0.0;
  out.mX[12] = 0.0;
  out.mX[13] = 0.0;
  out.mX[14] = 0.0;
  out.mX[15] = 0.0;
  out.mX[16] = 0.0;
  out.mX[17] = 0.0;
  out.mX[18] = 0.0;
  out.mX[19] = 0.0;
  out.mX[20] = 0.0;
  out.mX[21] = 0.0;
  out.mX[22] = 0.0;
  out.mX[23] = 0.0;
  out.mX[24] = 0.0;
  out.mX[25] = 0.0;
  out.mX[26] = 0.0;
  out.mX[27] = 0.0;
  out.mX[28] = 0.0;
  out.mX[29] = 0.0;
  out.mX[30] = 0.0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_im (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_id (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icr_il (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXICR_P;
  out.mNumCol = 31ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  out.mJc[30] = 0;
  out.mJc[31] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicr (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDICR_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tduicr_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUICR_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icrm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_icrm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mICRM_P;
  out.mNumCol = 31ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  out.mJc[30] = 0;
  out.mJc[31] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicrm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxicrm_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXICRM_P;
  out.mNumCol = 31ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  out.mJc[30] = 0;
  out.mJc[31] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicrm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddicrm_p (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDICRM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 0ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dimin (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dimax (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_m (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                     NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mM;
  out.mX[0] = -0.00033;
  out.mX[1] = -4.4E-5;
  out.mX[2] = -1.0E-11;
  out.mX[3] = -6.5999999999999992E-5;
  out.mX[4] = -4.8E-6;
  out.mX[5] = -2.2E-10;
  out.mX[6] = -2.2E-10;
  out.mX[7] = -1.0E-9;
  out.mX[8] = -1.0E-11;
  out.mX[9] = -3.3E-9;
  out.mX[10] = -5.0E-12;
  out.mX[11] = -5.0E-12;
  out.mX[12] = -5.0E-12;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dxm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDXM_P;
  out.mNumCol = 31ULL;
  out.mNumRow = 13ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  out.mJc[30] = 0;
  out.mJc[31] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_ddm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDDM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 13ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dum (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dum_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUM_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 13ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dtm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTM_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 13ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dpm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dpm_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDPM_P;
  out.mNumCol = 0ULL;
  out.mNumRow = 13ULL;
  out.mJc[0] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_vmm (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mVMM;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_l (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_i (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_j (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dp_r (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qx (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qu (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qt (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_q1 (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qx_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQX_P;
  out.mNumCol = 31ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  out.mJc[30] = 0;
  out.mJc[31] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qu_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQU_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_qt_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQT_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_q1_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mQ1_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 31ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_var_tol (const NeDynamicSystem *sys, const
  NeDynamicSystemInput *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mVAR_TOL;
  out.mX[0] = 1.0E-8;
  out.mX[1] = 1.0E-8;
  out.mX[2] = 1.0E-8;
  out.mX[3] = 1.0E-8;
  out.mX[4] = 1.0E-8;
  out.mX[5] = 1.0E-8;
  out.mX[6] = 1.0E-8;
  out.mX[7] = 1.0E-8;
  out.mX[8] = 1.0E-8;
  out.mX[9] = 1.0E-8;
  out.mX[10] = 1.0E-8;
  out.mX[11] = 1.0E-8;
  out.mX[12] = 1.0E-8;
  out.mX[13] = 1.0E-8;
  out.mX[14] = 1.0E-8;
  out.mX[15] = 1.0E-8;
  out.mX[16] = 1.0E-8;
  out.mX[17] = 1.0E-8;
  out.mX[18] = 1.0E-8;
  out.mX[19] = 1.0E-8;
  out.mX[20] = 1.0E-8;
  out.mX[21] = 1.0E-8;
  out.mX[22] = 1.0E-8;
  out.mX[23] = 1.0E-8;
  out.mX[24] = 1.0E-8;
  out.mX[25] = 1.0E-8;
  out.mX[26] = 1.0E-8;
  out.mX[27] = 1.0E-8;
  out.mX[28] = 1.0E-8;
  out.mX[29] = 1.0E-8;
  out.mX[30] = 1.0E-8;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_eq_tol (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmRealVector out;
  (void)t1;
  out = t2->mEQ_TOL;
  out.mX[0] = 1.0E-8;
  out.mX[1] = 1.0E-8;
  out.mX[2] = 1.0E-8;
  out.mX[3] = 1.0E-8;
  out.mX[4] = 1.0E-8;
  out.mX[5] = 1.0E-8;
  out.mX[6] = 1.0E-8;
  out.mX[7] = 1.0E-8;
  out.mX[8] = 1.0E-8;
  out.mX[9] = 1.0E-8;
  out.mX[10] = 1.0E-8;
  out.mX[11] = 1.0E-8;
  out.mX[12] = 1.0E-8;
  out.mX[13] = 1.0E-8;
  out.mX[14] = 1.0E-8;
  out.mX[15] = 1.0E-8;
  out.mX[16] = 1.0E-8;
  out.mX[17] = 1.0E-8;
  out.mX[18] = 1.0E-8;
  out.mX[19] = 1.0E-8;
  out.mX[20] = 1.0E-8;
  out.mX[21] = 1.0E-8;
  out.mX[22] = 1.0E-8;
  out.mX[23] = 1.0E-8;
  out.mX[24] = 1.0E-8;
  out.mX[25] = 1.0E-8;
  out.mX[26] = 1.0E-8;
  out.mX[27] = 1.0E-8;
  out.mX[28] = 1.0E-8;
  out.mX[29] = 1.0E-8;
  out.mX[30] = 1.0E-8;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_lv (const NeDynamicSystem *sys, const NeDynamicSystemInput *t1,
                      NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = true;
  out.mX[19] = true;
  out.mX[20] = true;
  out.mX[21] = true;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  out.mX[29] = false;
  out.mX[30] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_slv (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mSLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = true;
  out.mX[17] = true;
  out.mX[18] = true;
  out.mX[19] = true;
  out.mX[20] = true;
  out.mX[21] = true;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  out.mX[29] = false;
  out.mX[30] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_nldv (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mNLDV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  out.mX[29] = false;
  out.mX[30] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_sclv (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmBoolVector out;
  (void)t1;
  out = t2->mSCLV;
  out.mX[0] = false;
  out.mX[1] = false;
  out.mX[2] = false;
  out.mX[3] = false;
  out.mX[4] = false;
  out.mX[5] = false;
  out.mX[6] = false;
  out.mX[7] = false;
  out.mX[8] = false;
  out.mX[9] = false;
  out.mX[10] = false;
  out.mX[11] = false;
  out.mX[12] = false;
  out.mX[13] = false;
  out.mX[14] = false;
  out.mX[15] = false;
  out.mX[16] = false;
  out.mX[17] = false;
  out.mX[18] = false;
  out.mX[19] = false;
  out.mX[20] = false;
  out.mX[21] = false;
  out.mX[22] = false;
  out.mX[23] = false;
  out.mX[24] = false;
  out.mX[25] = false;
  out.mX[26] = false;
  out.mX[27] = false;
  out.mX[28] = false;
  out.mX[29] = false;
  out.mX[30] = false;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_y (const NeDynamicSystem *sys, const NeDynamicSystemInput *t3,
                     NeDsMethodOutput *t4)
{
  PmRealVector out;
  real_T X_idx_0;
  real_T X_idx_15;
  real_T X_idx_21;
  real_T X_idx_9;
  X_idx_0 = t3->mX.mX[0];
  X_idx_9 = t3->mX.mX[9];
  X_idx_15 = t3->mX.mX[15];
  X_idx_21 = t3->mX.mX[21];
  out = t4->mY;
  out.mX[0] = X_idx_21 * 1.0E-6 + X_idx_9;
  out.mX[1] = X_idx_15 * 0.002 + X_idx_0;
  (void)sys;
  (void)t4;
  return 0;
}

static int32_T ds_dxy (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t5, NeDsMethodOutput *t6)
{
  PmRealVector out;
  (void)t5;
  out = t6->mDXY;
  out.mX[0] = 1.0;
  out.mX[1] = 1.0;
  out.mX[2] = 0.002;
  out.mX[3] = 1.0E-6;
  (void)sys;
  (void)t6;
  return 0;
}

static int32_T ds_duy (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_duy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDUY_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 2ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_mduy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mMDUY_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 2ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_mdxy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mMDXY_P;
  out.mNumCol = 31ULL;
  out.mNumRow = 2ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  out.mJc[5] = 0;
  out.mJc[6] = 0;
  out.mJc[7] = 0;
  out.mJc[8] = 0;
  out.mJc[9] = 0;
  out.mJc[10] = 0;
  out.mJc[11] = 0;
  out.mJc[12] = 0;
  out.mJc[13] = 0;
  out.mJc[14] = 0;
  out.mJc[15] = 0;
  out.mJc[16] = 0;
  out.mJc[17] = 0;
  out.mJc[18] = 0;
  out.mJc[19] = 0;
  out.mJc[20] = 0;
  out.mJc[21] = 0;
  out.mJc[22] = 0;
  out.mJc[23] = 0;
  out.mJc[24] = 0;
  out.mJc[25] = 0;
  out.mJc[26] = 0;
  out.mJc[27] = 0;
  out.mJc[28] = 0;
  out.mJc[29] = 0;
  out.mJc[30] = 0;
  out.mJc[31] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_tduy_p (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mTDUY_P;
  out.mNumCol = 4ULL;
  out.mNumRow = 2ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  out.mJc[2] = 0;
  out.mJc[3] = 0;
  out.mJc[4] = 0;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dty (const NeDynamicSystem *sys, const NeDynamicSystemInput
  *t1, NeDsMethodOutput *t2)
{
  (void)t1;
  (void)sys;
  (void)t2;
  return 0;
}

static int32_T ds_dty_p (const NeDynamicSystem *sys, const NeDynamicSystemInput *
  t1, NeDsMethodOutput *t2)
{
  PmSparsityPattern out;
  (void)t1;
  out = t2->mDTY_P;
  out.mNumCol = 1ULL;
  out.mNumRow = 2ULL;
  out.mJc[0] = 0;
  out.mJc[1] = 0;
  (void)sys;
  (void)t2;
  return 0;
}
