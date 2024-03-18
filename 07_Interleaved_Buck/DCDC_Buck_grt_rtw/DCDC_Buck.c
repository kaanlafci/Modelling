/*
 * DCDC_Buck.c
 *
 * Code generation for model "DCDC_Buck".
 *
 * Model version              : 1.6
 * Simulink Coder version : 9.6 (R2021b) 14-May-2021
 * C source code generated on : Sat Mar 16 15:00:45 2024
 *
 * Target selection: grt.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "DCDC_Buck.h"
#include "DCDC_Buck_private.h"

/* Block signals (default storage) */
B_DCDC_Buck_T DCDC_Buck_B;

/* Continuous states */
X_DCDC_Buck_T DCDC_Buck_X;

/* Block states (default storage) */
DW_DCDC_Buck_T DCDC_Buck_DW;

/* Mass Matrices */
MassMatrix_DCDC_Buck_T DCDC_Buck_MassMatrix;

/* Real-time model */
static RT_MODEL_DCDC_Buck_T DCDC_Buck_M_;
RT_MODEL_DCDC_Buck_T *const DCDC_Buck_M = &DCDC_Buck_M_;

/* ForcingFunction for root system: '<Root>' */
void DCDC_Buck_forcingfunction(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  XDot_DCDC_Buck_T *_rtXdot;
  real_T tmp_1[16];
  real_T time;
  int32_T tmp_3;
  int_T tmp_2[5];
  boolean_T tmp;
  boolean_T tmp_0;
  _rtXdot = ((XDot_DCDC_Buck_T *) DCDC_Buck_M->derivs);

  /* ForcingFunction for SimscapeExecutionBlock: '<S26>/STATE_1' */
  simulationData = (NeslSimulationData *)DCDC_Buck_DW.STATE_1_SimData;
  time = DCDC_Buck_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 31;
  simulationData->mData->mContStates.mX =
    &DCDC_Buck_X.DCDC_BuckDC_DC_Buck_PLANTDC_DC_[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &DCDC_Buck_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 11;
  simulationData->mData->mModeVector.mX = &DCDC_Buck_DW.STATE_1_Modes[0];
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  tmp = rtmIsMajorTimeStep(DCDC_Buck_M);
  simulationData->mData->mIsMajorTimeStep = tmp;
  tmp_0 = false;
  simulationData->mData->mIsSolverAssertCheck = tmp_0;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp_0 = rtsiIsSolverComputingJacobian(&DCDC_Buck_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp_0;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = tmp;
  tmp_2[0] = 0;
  tmp_1[0] = DCDC_Buck_B.INPUT_1_1_1[0];
  tmp_1[1] = DCDC_Buck_B.INPUT_1_1_1[1];
  tmp_1[2] = DCDC_Buck_B.INPUT_1_1_1[2];
  tmp_1[3] = DCDC_Buck_B.INPUT_1_1_1[3];
  tmp_2[1] = 4;
  tmp_1[4] = DCDC_Buck_B.INPUT_3_1_1[0];
  tmp_1[5] = DCDC_Buck_B.INPUT_3_1_1[1];
  tmp_1[6] = DCDC_Buck_B.INPUT_3_1_1[2];
  tmp_1[7] = DCDC_Buck_B.INPUT_3_1_1[3];
  tmp_2[2] = 8;
  tmp_1[8] = DCDC_Buck_B.INPUT_2_1_1[0];
  tmp_1[9] = DCDC_Buck_B.INPUT_2_1_1[1];
  tmp_1[10] = DCDC_Buck_B.INPUT_2_1_1[2];
  tmp_1[11] = DCDC_Buck_B.INPUT_2_1_1[3];
  tmp_2[3] = 12;
  tmp_1[12] = DCDC_Buck_B.INPUT_4_1_1[0];
  tmp_1[13] = DCDC_Buck_B.INPUT_4_1_1[1];
  tmp_1[14] = DCDC_Buck_B.INPUT_4_1_1[2];
  tmp_1[15] = DCDC_Buck_B.INPUT_4_1_1[3];
  tmp_2[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_1[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_2[0];
  simulationData->mData->mDx.mN = 31;
  simulationData->mData->mDx.mX = &_rtXdot->DCDC_BuckDC_DC_Buck_PLANTDC_DC_[0];
  diagnosticManager = (NeuDiagnosticManager *)DCDC_Buck_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_3 = ne_simulator_method((NeslSimulator *)DCDC_Buck_DW.STATE_1_Simulator,
    NESL_SIM_FORCINGFUNCTION, simulationData, diagnosticManager);
  if (tmp_3 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(DCDC_Buck_M));
    if (tmp) {
      char *msg;
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(DCDC_Buck_M, msg);
    }
  }

  /* End of ForcingFunction for SimscapeExecutionBlock: '<S26>/STATE_1' */
}

/* MassMatrix for root system: '<Root>' */
void DCDC_Buck_massmatrix(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  real_T tmp_1[16];
  real_T time;
  real_T *tmp_3;
  real_T *tmp_4;
  int32_T tmp_5;
  int_T tmp_2[5];
  boolean_T tmp;
  boolean_T tmp_0;

  /* MassMatrix for SimscapeExecutionBlock: '<S26>/STATE_1' */
  simulationData = (NeslSimulationData *)DCDC_Buck_DW.STATE_1_SimData;
  time = DCDC_Buck_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 31;
  simulationData->mData->mContStates.mX =
    &DCDC_Buck_X.DCDC_BuckDC_DC_Buck_PLANTDC_DC_[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &DCDC_Buck_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 11;
  simulationData->mData->mModeVector.mX = &DCDC_Buck_DW.STATE_1_Modes[0];
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  tmp = rtmIsMajorTimeStep(DCDC_Buck_M);
  simulationData->mData->mIsMajorTimeStep = tmp;
  tmp_0 = false;
  simulationData->mData->mIsSolverAssertCheck = tmp_0;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp_0 = rtsiIsSolverComputingJacobian(&DCDC_Buck_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp_0;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = tmp;
  tmp_2[0] = 0;
  tmp_1[0] = DCDC_Buck_B.INPUT_1_1_1[0];
  tmp_1[1] = DCDC_Buck_B.INPUT_1_1_1[1];
  tmp_1[2] = DCDC_Buck_B.INPUT_1_1_1[2];
  tmp_1[3] = DCDC_Buck_B.INPUT_1_1_1[3];
  tmp_2[1] = 4;
  tmp_1[4] = DCDC_Buck_B.INPUT_3_1_1[0];
  tmp_1[5] = DCDC_Buck_B.INPUT_3_1_1[1];
  tmp_1[6] = DCDC_Buck_B.INPUT_3_1_1[2];
  tmp_1[7] = DCDC_Buck_B.INPUT_3_1_1[3];
  tmp_2[2] = 8;
  tmp_1[8] = DCDC_Buck_B.INPUT_2_1_1[0];
  tmp_1[9] = DCDC_Buck_B.INPUT_2_1_1[1];
  tmp_1[10] = DCDC_Buck_B.INPUT_2_1_1[2];
  tmp_1[11] = DCDC_Buck_B.INPUT_2_1_1[3];
  tmp_2[3] = 12;
  tmp_1[12] = DCDC_Buck_B.INPUT_4_1_1[0];
  tmp_1[13] = DCDC_Buck_B.INPUT_4_1_1[1];
  tmp_1[14] = DCDC_Buck_B.INPUT_4_1_1[2];
  tmp_1[15] = DCDC_Buck_B.INPUT_4_1_1[3];
  tmp_2[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_1[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_2[0];
  tmp_3 = DCDC_Buck_MassMatrix.pr;
  tmp_4 = double_pointer_shift(tmp_3, DCDC_Buck_DW.STATE_1_MASS_MATRIX_PR);
  simulationData->mData->mMassMatrixPr.mN = 13;
  simulationData->mData->mMassMatrixPr.mX = tmp_4;
  diagnosticManager = (NeuDiagnosticManager *)DCDC_Buck_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_5 = ne_simulator_method((NeslSimulator *)DCDC_Buck_DW.STATE_1_Simulator,
    NESL_SIM_MASSMATRIX, simulationData, diagnosticManager);
  if (tmp_5 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(DCDC_Buck_M));
    if (tmp) {
      char *msg;
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(DCDC_Buck_M, msg);
    }
  }

  /* End of MassMatrix for SimscapeExecutionBlock: '<S26>/STATE_1' */
}

void local_evaluateMassMatrix(RTWSolverInfo *si, real_T *Mdest )
{
  /* Refresh global mass matrix */
  DCDC_Buck_massmatrix();

  /* Copy the mass matrix from system to the destination, if needed. */
  if (Mdest != rtsiGetSolverMassMatrixPr(si)) {
    real_T *Msrc = rtsiGetSolverMassMatrixPr(si);
    int_T nzmax = rtsiGetSolverMassMatrixNzMax(si);
    (void) memcpy(Mdest, Msrc,
                  (uint_T)nzmax*sizeof(real_T));
  }
}

/* Simplified version of numjac.cpp, for use with RTW. */
void local_numjac( RTWSolverInfo *si, real_T *y, const real_T *Fty, real_T *fac,
                  real_T *dFdy )
{
  /* constants */
  real_T THRESH = 1e-6;
  real_T EPS = 2.2e-16;                /* utGetEps(); */
  real_T BL = pow(EPS, 0.75);
  real_T BU = pow(EPS, 0.25);
  real_T FACMIN = pow(EPS, 0.78);
  real_T FACMAX = 0.1;
  int_T nx = 31;
  real_T *x = rtsiGetContStates(si);
  real_T del;
  real_T difmax;
  real_T FdelRowmax;
  real_T temp;
  real_T Fdiff;
  real_T maybe;
  real_T xscale;
  real_T fscale;
  real_T *p;
  int_T rowmax;
  int_T i,j;
  if (x != y)
    (void) memcpy(x, y,
                  (uint_T)nx*sizeof(real_T));
  rtsiSetSolverComputingJacobian(si,true);
  for (p = dFdy, j = 0; j < nx; j++, p += nx) {
    /* Select an increment del for a difference approximation to
       column j of dFdy.  The vector fac accounts for experience
       gained in previous calls to numjac. */
    xscale = fabs(x[j]);
    if (xscale < THRESH)
      xscale = THRESH;
    temp = (x[j] + fac[j]*xscale);
    del = temp - y[j];
    while (del == 0.0) {
      if (fac[j] < FACMAX) {
        fac[j] *= 100.0;
        if (fac[j] > FACMAX)
          fac[j] = FACMAX;
        temp = (x[j] + fac[j]*xscale);
        del = temp - x[j];
      } else {
        del = THRESH;                  /* thresh is nonzero */
        break;
      }
    }

    /* Keep del pointing into region. */
    if (Fty[j] >= 0.0)
      del = fabs(del);
    else
      del = -fabs(del);

    /* Form a difference approximation to column j of dFdy. */
    temp = x[j];
    x[j] += del;
    DCDC_Buck_step();
    rtsiSetdX(si,p);
    DCDC_Buck_forcingfunction();
    x[j] = temp;
    difmax = 0.0;
    rowmax = 0;
    FdelRowmax = p[0];
    temp = 1.0 / del;
    for (i = 0; i < nx; i++) {
      Fdiff = p[i] - Fty[i];
      maybe = fabs(Fdiff);
      if (maybe > difmax) {
        difmax = maybe;
        rowmax = i;
        FdelRowmax = p[i];
      }

      p[i] = temp * Fdiff;
    }

    /* Adjust fac for next call to numjac. */
    if (((FdelRowmax != 0.0) && (Fty[rowmax] != 0.0)) || (difmax == 0.0)) {
      fscale = fabs(FdelRowmax);
      if (fscale < fabs(Fty[rowmax]))
        fscale = fabs(Fty[rowmax]);
      if (difmax <= BL*fscale) {
        /* The difference is small, so increase the increment. */
        fac[j] *= 10.0;
        if (fac[j] > FACMAX)
          fac[j] = FACMAX;
      } else if (difmax > BU*fscale) {
        /* The difference is large, so reduce the increment. */
        fac[j] *= 0.1;
        if (fac[j] < FACMIN)
          fac[j] = FACMIN;
      }
    }
  }

  rtsiSetSolverComputingJacobian(si,false);
}                                      /* end local_numjac */

/*
 * This function updates continuous states using the ODE14X fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static int_T rt_ODE14x_N[4] = { 12, 8, 6, 4 };

  time_T t0 = rtsiGetT(si);
  time_T t1 = t0;
  time_T h = rtsiGetStepSize(si);
  real_T *x1 = rtsiGetContStates(si);
  int_T order = rtsiGetSolverExtrapolationOrder(si);
  int_T numIter = rtsiGetSolverNumberNewtonIterations(si);
  ODE14X_IntgData *id = (ODE14X_IntgData *)rtsiGetSolverData(si);
  real_T *x0 = id->x0;
  real_T *f0 = id->f0;
  real_T *x1start = id->x1start;
  real_T *f1 = id->f1;
  real_T *Delta = id->Delta;
  real_T *E = id->E;
  real_T *fac = id->fac;
  real_T *dfdx = id->DFDX;
  real_T *W = id->W;
  int_T *pivots = id->pivots;
  real_T *xtmp = id->xtmp;
  real_T *ztmp = id->ztmp;
  int_T *Mpattern_ir = rtsiGetSolverMassMatrixIr(si);
  int_T *Mpattern_jc = rtsiGetSolverMassMatrixJc(si);
  real_T *M = id->M;
  int_T col,row,rowidx;
  int_T *N = &(rt_ODE14x_N[0]);
  int_T i,j,k,iter;
  int_T nx = 31;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(x0, x1,
                (uint_T)nx*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  if (id->isFirstStep) {
    local_evaluateMassMatrix(si,M );
    id->isFirstStep = false;
  }

  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  DCDC_Buck_forcingfunction();
  local_numjac(si,x0,f0,fac,dfdx );
  for (j = 0; j < order; j++) {
    real_T *p;
    real_T hN = h/N[j];

    /* Get the iteration matrix and solution at t0 */

    /* [L,U] = lu(M - hN*J) */
    (void) memcpy(W, dfdx,
                  (uint_T)nx*nx*sizeof(real_T));
    for (p = W, i = 0; i < nx*nx; i++, p++) {
      *p *= (-hN);
    }

    for (col = 0, p = W; col < nx; col++, p += nx) {
      for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++) {
        real_T m_row_col = M[rowidx];
        row = Mpattern_ir[rowidx];
        p[row] += m_row_col;
      }
    }

    rt_lu_real(W, nx,
               pivots);

    /* First Newton's iteration at t0. */
    /* rhs = hN*f0 */
    for (i = 0; i < nx; i++) {
      Delta[i] = hN*f0[i];
    }

    /* Delta = (U \ (L \ rhs)) */
    rt_ForwardSubstitutionRR_Dbl(W, Delta,
      f1, nx,
      1, pivots,
      1);
    rt_BackwardSubstitutionRR_Dbl(W+nx*nx-1, f1+nx-1,
      Delta, nx,
      1, 0);

    /* ytmp = y0 + Delta
       ztmp = (ytmp-y0)/h
     */
    (void) memcpy(x1, x0,
                  (uint_T)nx*sizeof(real_T));
    for (i = 0; i < nx; i++) {
      x1[i] += Delta[i];
      ztmp[i] = Delta[i]/hN;
    }

    /* Additional Newton's iterations, if desired.
       for iter = 2:NewtIter
       rhs = hN*feval(odefun,tn,ytmp,extraArgs{:}) - M*(ytmp - yn);
       if statedepM   % only for state dep. Mdel ~= 0
       Mdel = M - feval(massfun,tn,ytmp);
       rhs = rhs + Mdel*ztmp*h;
       end
       Delta = ( U \ ( L \ rhs ) );
       ytmp = ytmp + Delta;
       ztmp = (ytmp - yn)/h
       end
     */
    rtsiSetT(si, t0);
    rtsiSetdX(si, f1);
    for (iter = 1; iter < numIter; iter++) {
      DCDC_Buck_step();
      DCDC_Buck_forcingfunction();
      for (i = 0; i < nx; i++) {
        Delta[i] = hN*f1[i];
        xtmp[i] = x1[i] - x0[i];
      }

      /* rhs = hN*f(tn,ytmp) - M*(ytmp-yn) */
      for (col = 0; col < nx; col++) {
        for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++) {
          real_T m_row_col = M[rowidx];
          row = Mpattern_ir[rowidx];
          Delta[row] -= m_row_col*xtmp[col];
        }
      }

      rt_ForwardSubstitutionRR_Dbl(W, Delta,
        f1, nx,
        1, pivots,
        1);
      rt_BackwardSubstitutionRR_Dbl(W+nx*nx-1, f1+nx-1,
        Delta, nx,
        1, 0);

      /* ytmp = ytmp + delta
         ztmp = (ytmp - yn)/h
       */
      for (i = 0; i < nx; i++) {
        x1[i] += Delta[i];
        ztmp[i] = (x1[i] - x0[i])/hN;
      }
    }

    /* Steps from t0+hN to t1 -- subintegration of N(j) steps for extrapolation
       ttmp = t0;
       for i = 2:N(j)
       ttmp = ttmp + hN
       ytmp0 = ytmp;
       for iter = 1:NewtIter
       rhs = (ytmp0 - ytmp) + hN*feval(odefun,ttmp,ytmp,extraArgs{:});
       Delta = ( U \ ( L \ rhs ) );
       ytmp = ytmp + Delta;
       end
       end
     */
    for (k = 1; k < N[j]; k++) {
      t1 = t0 + k*hN;
      (void) memcpy(x1start, x1,
                    (uint_T)nx*sizeof(real_T));
      rtsiSetT(si, t1);
      rtsiSetdX(si, f1);
      for (iter = 0; iter < numIter; iter++) {
        DCDC_Buck_step();
        DCDC_Buck_forcingfunction();
        if (iter == 0) {
          for (i = 0; i < nx; i++) {
            Delta[i] = hN*f1[i];
          }
        } else {
          for (i = 0; i < nx; i++) {
            Delta[i] = hN*f1[i];
            xtmp[i] = (x1[i]-x1start[i]);
          }

          /* rhs = hN*f(tn,ytmp) - M*(ytmp-yn) */
          for (col = 0; col < nx; col++) {
            for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx
                 ++) {
              real_T m_row_col = M[rowidx];
              row = Mpattern_ir[rowidx];
              Delta[row] -= m_row_col*xtmp[col];
            }
          }
        }

        rt_ForwardSubstitutionRR_Dbl(W, Delta,
          f1, nx,
          1, pivots,
          1);
        rt_BackwardSubstitutionRR_Dbl(W+nx*nx-1, f1+nx-1,
          Delta, nx,
          1, 0);

        /* ytmp = ytmp + Delta
           ztmp = (ytmp - ytmp0)/h
         */
        for (i = 0; i < nx; i++) {
          x1[i] += Delta[i];
          ztmp[i] = (x1[i] - x1start[i])/hN;
        }
      }
    }

    /* Extrapolate to order j
       E(:,j) = ytmp
       for k = j:-1:2
       coef = N(k-1)/(N(j) - N(k-1))
       E(:,k-1) = E(:,k) + coef*( E(:,k) - E(:,k-1) )
       end
     */
    (void) memcpy(&(E[nx*j]), x1,
                  (uint_T)nx*sizeof(real_T));
    for (k = j; k > 0; k--) {
      real_T coef = (real_T)(N[k-1]) / (N[j]-N[k-1]);
      for (i = 0; i < nx; i++) {
        x1[i] = E[nx*k+i] + coef*(E[nx*k+i] - E[nx*(k-1)+i]);
      }

      (void) memcpy(&(E[nx*(k-1)]), x1,
                    (uint_T)nx*sizeof(real_T));
    }
  }

  /* x1 = E(:,1); */
  (void) memcpy(x1, E,
                (uint_T)nx*sizeof(real_T));

  /* t1 = t0 + h; */
  rtsiSetT(si,rtsiGetSolverStopTime(si));
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

real_T rt_remd_snf(real_T u0, real_T u1)
{
  real_T y;
  if (rtIsNaN(u0) || rtIsNaN(u1) || rtIsInf(u0)) {
    y = (rtNaN);
  } else if (rtIsInf(u1)) {
    y = u0;
  } else if ((u1 != 0.0) && (u1 != trunc(u1))) {
    real_T q;
    q = fabs(u0 / u1);
    if (!(fabs(q - floor(q + 0.5)) > DBL_EPSILON * q)) {
      y = 0.0 * u0;
    } else {
      y = fmod(u0, u1);
    }
  } else {
    y = fmod(u0, u1);
  }

  return y;
}

/* Model step function */
void DCDC_Buck_step(void)
{
  /* local block i/o variables */
  real_T rtb_Subsystem_boundary_DTC3;
  int32_T rtb_Sum1;
  int32_T rtb_IQNxIQN;
  int32_T rtb_Sum2;
  boolean_T rtb_RelationalOperator;
  if (rtmIsMajorTimeStep(DCDC_Buck_M)) {
    /* set solver stop time */
    if (!(DCDC_Buck_M->Timing.clockTick0+1)) {
      rtsiSetSolverStopTime(&DCDC_Buck_M->solverInfo,
                            ((DCDC_Buck_M->Timing.clockTickH0 + 1) *
        DCDC_Buck_M->Timing.stepSize0 * 4294967296.0));
    } else {
      rtsiSetSolverStopTime(&DCDC_Buck_M->solverInfo,
                            ((DCDC_Buck_M->Timing.clockTick0 + 1) *
        DCDC_Buck_M->Timing.stepSize0 + DCDC_Buck_M->Timing.clockTickH0 *
        DCDC_Buck_M->Timing.stepSize0 * 4294967296.0));
    }
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(DCDC_Buck_M)) {
    DCDC_Buck_M->Timing.t[0] = rtsiGetT(&DCDC_Buck_M->solverInfo);
  }

  {
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    real_T tmp_3[58];
    real_T tmp_1[16];
    real_T rtb_OUTPUT_1_0[2];
    real_T rtb_Gain4_tmp;
    real_T time;
    real_T time_0;
    int32_T rtb_Gain4;
    int32_T rtb_Saturation;
    int_T tmp_4[6];
    int_T tmp_2[5];
    boolean_T tmp;
    boolean_T tmp_0;
    if (rtmIsMajorTimeStep(DCDC_Buck_M)) {
      /* S-Function (stiiqmath_iqmpy): '<S4>/IQN x IQN' incorporates:
       *  DataTypeConversion: '<S3>/Data Type Conversion3'
       *  UnitDelay: '<S1>/Unit Delay'
       */
      rtb_IQNxIQN = (int32_T)floor(DCDC_Buck_DW.UnitDelay_DSTATE * 1.6777216E+7);

      /* Sum: '<S4>/Sum' incorporates:
       *  DataTypeConversion: '<S3>/Data Type Conversion'
       *  Gain: '<S3>/Gain4'
       *  S-Function (stiiqmath_iqmpy): '<S4>/IQN x IQN'
       */
      rtb_Gain4 = 36825989 - rtb_IQNxIQN;

      /* S-Function (stiiqmath_iqmpy): '<S4>/IQN x IQN' */

      /* C28x IQmath Library (stiiqmath_iqmpy) - '<S4>/IQN x IQN' */
      {
        rtb_IQNxIQN = _IQ24mpy (rtb_Gain4, DCDC_Buck_ConstB.DataTypeConversion1);
      }

      /* Switch: '<S6>/Switch' incorporates:
       *  Constant: '<S6>/Constant'
       *  Constant: '<S7>/Constant'
       *  Constant: '<S8>/Constant'
       *  DataTypeConversion: '<S3>/Data Type Conversion2'
       *  DataTypeConversion: '<S4>/Subsystem_boundary_DTC'
       *  Gain: '<S3>/Gain4'
       *  Logic: '<S6>/Logical Operator'
       *  RelationalOperator: '<S6>/Relational Operator1'
       *  RelationalOperator: '<S7>/Compare'
       *  RelationalOperator: '<S8>/Compare'
       *  Saturate: '<S4>/Saturation'
       *  UnitDelay: '<S6>/Unit Delay'
       *  UnitDelay: '<S6>/Unit Delay1'
       */
      if (DCDC_Buck_DW.UnitDelay1_DSTATE || (((real_T)rtb_Gain4 *
            5.9604644775390625E-8 <= 0.0) != (DCDC_Buck_DW.UnitDelay_DSTATE_b <=
            0.0))) {
        rtb_Saturation = 50331;
      } else {
        rtb_Saturation = 0;
      }

      /* End of Switch: '<S6>/Switch' */

      /* S-Function (stiiqmath_iqmpy): '<S4>/IQN x IQN1' */

      /* C28x IQmath Library (stiiqmath_iqmpy) - '<S4>/IQN x IQN1' */
      {
        rtb_Sum2 = _IQ24mpy (rtb_Gain4, rtb_Saturation);
      }

      /* Sum: '<S4>/Sum1' incorporates:
       *  Sum: '<S4>/Sum2'
       *  UnitDelay: '<S4>/Unit Delay'
       */
      rtb_Sum1 = rtb_Sum2 + DCDC_Buck_DW.UnitDelay_DSTATE_m;

      /* Sum: '<S4>/Sum2' incorporates:
       *  S-Function (stiiqmath_iqmpy): '<S4>/IQN x IQN'
       *  Sum: '<S4>/Sum1'
       */
      rtb_Sum2 = rtb_IQNxIQN + rtb_Sum1;

      /* Saturate: '<S4>/Saturation' incorporates:
       *  Sum: '<S4>/Sum2'
       */
      if (rtb_Sum2 > 13421773) {
        rtb_Saturation = 13421773;
      } else if (rtb_Sum2 < 0) {
        rtb_Saturation = 0;
      } else {
        rtb_Saturation = rtb_Sum2;
      }

      /* End of Saturate: '<S4>/Saturation' */

      /* DataTypeConversion: '<S3>/Data Type Conversion6' incorporates:
       *  DataTypeConversion: '<S4>/Subsystem_boundary_DTC2'
       *  Saturate: '<S4>/Saturation'
       */
      rtb_Gain4_tmp = (real_T)rtb_Saturation * 5.9604644775390625E-8;

      /* Gain: '<S3>/Gain4' incorporates:
       *  DataTypeConversion: '<S3>/Data Type Conversion6'
       */
      rtb_Gain4 = (int32_T)(rtb_Gain4_tmp * 1000.0 * 1.048576E+6);

      /* Gain: '<S5>/Inverse TBPRD' incorporates:
       *  DataTypeConversion: '<S5>/Data Type Conversion3'
       *  Gain: '<S3>/Gain4'
       */
      DCDC_Buck_B.Duty = (real_T)rtb_Gain4 * 9.5367431640625E-7 * 0.001;

      /* DataTypeConversion: '<S4>/Subsystem_boundary_DTC3' incorporates:
       *  Sum: '<S4>/Sum2'
       */
      rtb_Subsystem_boundary_DTC3 = (real_T)rtb_Sum2 * 5.9604644775390625E-8;

      /* RelationalOperator: '<S6>/Relational Operator' */
      rtb_RelationalOperator = (rtb_Gain4_tmp == rtb_Subsystem_boundary_DTC3);
    }

    /* Clock: '<S9>/Clock1' incorporates:
     *  SimscapeExecutionBlock: '<S26>/OUTPUT_1_0'
     *  SimscapeExecutionBlock: '<S26>/STATE_1'
     */
    rtb_Gain4_tmp = DCDC_Buck_M->Timing.t[0];

    /* Gain: '<S9>/Gain1' incorporates:
     *  Clock: '<S9>/Clock1'
     *  Constant: '<S9>/Time_Period'
     *  Math: '<S9>/Math Function2'
     */
    DCDC_Buck_B.Gain1 = 200000.0 * rt_remd_snf(rtb_Gain4_tmp, 5.0E-6);

    /* DataTypeConversion: '<S5>/Data Type Conversion1' incorporates:
     *  RelationalOperator: '<S5>/Relational Operator'
     */
    DCDC_Buck_B.DataTypeConversion1 = (DCDC_Buck_B.Duty >= DCDC_Buck_B.Gain1);

    /* Gain: '<S3>/Gain6' */
    DCDC_Buck_B.Gain6 = 9.0 * DCDC_Buck_B.DataTypeConversion1;

    /* Gain: '<S10>/Gain' incorporates:
     *  Step: '<S2>/Step'
     */
    DCDC_Buck_B.Gain = (real_T)!(DCDC_Buck_M->Timing.t[0] < 0.05) * 9.0;

    /* SimscapeInputBlock: '<S26>/INPUT_1_1_1' */
    DCDC_Buck_B.INPUT_1_1_1[0] = DCDC_Buck_B.Gain;
    DCDC_Buck_B.INPUT_1_1_1[1] = 0.0;
    DCDC_Buck_B.INPUT_1_1_1[2] = 0.0;
    DCDC_Buck_B.INPUT_1_1_1[3] = 0.0;

    /* SimscapeInputBlock: '<S26>/INPUT_3_1_1' */
    DCDC_Buck_B.INPUT_3_1_1[0] = DCDC_Buck_B.Gain6;
    DCDC_Buck_B.INPUT_3_1_1[1] = 0.0;
    DCDC_Buck_B.INPUT_3_1_1[2] = 0.0;
    DCDC_Buck_B.INPUT_3_1_1[3] = 0.0;

    /* SimscapeInputBlock: '<S26>/INPUT_2_1_1' */
    DCDC_Buck_B.INPUT_2_1_1[0] = DCDC_Buck_B.Gain6;
    DCDC_Buck_B.INPUT_2_1_1[1] = 0.0;
    DCDC_Buck_B.INPUT_2_1_1[2] = 0.0;
    DCDC_Buck_B.INPUT_2_1_1[3] = 0.0;

    /* SimscapeInputBlock: '<S26>/INPUT_4_1_1' */
    DCDC_Buck_B.INPUT_4_1_1[0] = DCDC_Buck_B.Gain6;
    DCDC_Buck_B.INPUT_4_1_1[1] = 0.0;
    DCDC_Buck_B.INPUT_4_1_1[2] = 0.0;
    DCDC_Buck_B.INPUT_4_1_1[3] = 0.0;

    /* SimscapeExecutionBlock: '<S26>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S26>/OUTPUT_1_0'
     */
    simulationData = (NeslSimulationData *)DCDC_Buck_DW.STATE_1_SimData;
    time = rtb_Gain4_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 31;
    simulationData->mData->mContStates.mX =
      &DCDC_Buck_X.DCDC_BuckDC_DC_Buck_PLANTDC_DC_[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &DCDC_Buck_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 11;
    simulationData->mData->mModeVector.mX = &DCDC_Buck_DW.STATE_1_Modes[0];
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    tmp = rtmIsMajorTimeStep(DCDC_Buck_M);
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_0 = rtsiIsSolverComputingJacobian(&DCDC_Buck_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_0;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_2[0] = 0;
    tmp_1[0] = DCDC_Buck_B.INPUT_1_1_1[0];
    tmp_1[1] = DCDC_Buck_B.INPUT_1_1_1[1];
    tmp_1[2] = DCDC_Buck_B.INPUT_1_1_1[2];
    tmp_1[3] = DCDC_Buck_B.INPUT_1_1_1[3];
    tmp_2[1] = 4;
    tmp_1[4] = DCDC_Buck_B.INPUT_3_1_1[0];
    tmp_1[5] = DCDC_Buck_B.INPUT_3_1_1[1];
    tmp_1[6] = DCDC_Buck_B.INPUT_3_1_1[2];
    tmp_1[7] = DCDC_Buck_B.INPUT_3_1_1[3];
    tmp_2[2] = 8;
    tmp_1[8] = DCDC_Buck_B.INPUT_2_1_1[0];
    tmp_1[9] = DCDC_Buck_B.INPUT_2_1_1[1];
    tmp_1[10] = DCDC_Buck_B.INPUT_2_1_1[2];
    tmp_1[11] = DCDC_Buck_B.INPUT_2_1_1[3];
    tmp_2[3] = 12;
    tmp_1[12] = DCDC_Buck_B.INPUT_4_1_1[0];
    tmp_1[13] = DCDC_Buck_B.INPUT_4_1_1[1];
    tmp_1[14] = DCDC_Buck_B.INPUT_4_1_1[2];
    tmp_1[15] = DCDC_Buck_B.INPUT_4_1_1[3];
    tmp_2[4] = 16;
    simulationData->mData->mInputValues.mN = 16;
    simulationData->mData->mInputValues.mX = &tmp_1[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_2[0];
    simulationData->mData->mOutputs.mN = 42;
    simulationData->mData->mOutputs.mX = &DCDC_Buck_B.STATE_1[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)DCDC_Buck_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    rtb_Gain4 = ne_simulator_method((NeslSimulator *)
      DCDC_Buck_DW.STATE_1_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (rtb_Gain4 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(DCDC_Buck_M));
      if (tmp_0) {
        char *msg;
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(DCDC_Buck_M, msg);
      }
    }

    /* SimscapeExecutionBlock: '<S26>/OUTPUT_1_0' */
    simulationData = (NeslSimulationData *)DCDC_Buck_DW.OUTPUT_1_0_SimData;
    time_0 = rtb_Gain4_tmp;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &DCDC_Buck_DW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &DCDC_Buck_DW.OUTPUT_1_0_Modes;
    tmp_0 = false;
    simulationData->mData->mFoundZcEvents = tmp_0;
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_4[0] = 0;
    tmp_3[0] = DCDC_Buck_B.INPUT_1_1_1[0];
    tmp_3[1] = DCDC_Buck_B.INPUT_1_1_1[1];
    tmp_3[2] = DCDC_Buck_B.INPUT_1_1_1[2];
    tmp_3[3] = DCDC_Buck_B.INPUT_1_1_1[3];
    tmp_4[1] = 4;
    tmp_3[4] = DCDC_Buck_B.INPUT_3_1_1[0];
    tmp_3[5] = DCDC_Buck_B.INPUT_3_1_1[1];
    tmp_3[6] = DCDC_Buck_B.INPUT_3_1_1[2];
    tmp_3[7] = DCDC_Buck_B.INPUT_3_1_1[3];
    tmp_4[2] = 8;
    tmp_3[8] = DCDC_Buck_B.INPUT_2_1_1[0];
    tmp_3[9] = DCDC_Buck_B.INPUT_2_1_1[1];
    tmp_3[10] = DCDC_Buck_B.INPUT_2_1_1[2];
    tmp_3[11] = DCDC_Buck_B.INPUT_2_1_1[3];
    tmp_4[3] = 12;
    tmp_3[12] = DCDC_Buck_B.INPUT_4_1_1[0];
    tmp_3[13] = DCDC_Buck_B.INPUT_4_1_1[1];
    tmp_3[14] = DCDC_Buck_B.INPUT_4_1_1[2];
    tmp_3[15] = DCDC_Buck_B.INPUT_4_1_1[3];
    tmp_4[4] = 16;
    memcpy(&tmp_3[16], &DCDC_Buck_B.STATE_1[0], 42U * sizeof(real_T));
    tmp_4[5] = 58;
    simulationData->mData->mInputValues.mN = 58;
    simulationData->mData->mInputValues.mX = &tmp_3[0];
    simulationData->mData->mInputOffsets.mN = 6;
    simulationData->mData->mInputOffsets.mX = &tmp_4[0];
    simulationData->mData->mOutputs.mN = 2;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_0[0];
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    diagnosticManager = (NeuDiagnosticManager *)DCDC_Buck_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    rtb_Gain4 = ne_simulator_method((NeslSimulator *)
      DCDC_Buck_DW.OUTPUT_1_0_Simulator, NESL_SIM_OUTPUTS, simulationData,
      diagnosticManager);
    if (rtb_Gain4 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(DCDC_Buck_M));
      if (tmp) {
        char *msg_0;
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(DCDC_Buck_M, msg_0);
      }
    }

    /* Gain: '<S1>/VoltageScaling' */
    DCDC_Buck_B.VoltageScaling = 0.439 * rtb_OUTPUT_1_0[1];
  }

  if (rtmIsMajorTimeStep(DCDC_Buck_M)) {
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    real_T tmp_1[16];
    real_T time;
    int32_T tmp_3;
    int_T tmp_2[5];
    boolean_T tmp;
    boolean_T tmp_0;
    if (rtmIsMajorTimeStep(DCDC_Buck_M)) {
      /* Update for UnitDelay: '<S1>/Unit Delay' */
      DCDC_Buck_DW.UnitDelay_DSTATE = DCDC_Buck_B.VoltageScaling;

      /* Update for UnitDelay: '<S6>/Unit Delay1' */
      DCDC_Buck_DW.UnitDelay1_DSTATE = rtb_RelationalOperator;

      /* Update for UnitDelay: '<S6>/Unit Delay' */
      DCDC_Buck_DW.UnitDelay_DSTATE_b = rtb_Subsystem_boundary_DTC3;

      /* Update for UnitDelay: '<S4>/Unit Delay' incorporates:
       *  Sum: '<S4>/Sum1'
       */
      DCDC_Buck_DW.UnitDelay_DSTATE_m = rtb_Sum1;
    }

    /* Update for SimscapeExecutionBlock: '<S26>/STATE_1' */
    simulationData = (NeslSimulationData *)DCDC_Buck_DW.STATE_1_SimData;
    time = DCDC_Buck_M->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 31;
    simulationData->mData->mContStates.mX =
      &DCDC_Buck_X.DCDC_BuckDC_DC_Buck_PLANTDC_DC_[0];
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &DCDC_Buck_DW.STATE_1_Discrete;
    simulationData->mData->mModeVector.mN = 11;
    simulationData->mData->mModeVector.mX = &DCDC_Buck_DW.STATE_1_Modes[0];
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    tmp = rtmIsMajorTimeStep(DCDC_Buck_M);
    simulationData->mData->mIsMajorTimeStep = tmp;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_0 = rtsiIsSolverComputingJacobian(&DCDC_Buck_M->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_0;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsOkayToUpdateMode = tmp;
    tmp_2[0] = 0;
    tmp_1[0] = DCDC_Buck_B.INPUT_1_1_1[0];
    tmp_1[1] = DCDC_Buck_B.INPUT_1_1_1[1];
    tmp_1[2] = DCDC_Buck_B.INPUT_1_1_1[2];
    tmp_1[3] = DCDC_Buck_B.INPUT_1_1_1[3];
    tmp_2[1] = 4;
    tmp_1[4] = DCDC_Buck_B.INPUT_3_1_1[0];
    tmp_1[5] = DCDC_Buck_B.INPUT_3_1_1[1];
    tmp_1[6] = DCDC_Buck_B.INPUT_3_1_1[2];
    tmp_1[7] = DCDC_Buck_B.INPUT_3_1_1[3];
    tmp_2[2] = 8;
    tmp_1[8] = DCDC_Buck_B.INPUT_2_1_1[0];
    tmp_1[9] = DCDC_Buck_B.INPUT_2_1_1[1];
    tmp_1[10] = DCDC_Buck_B.INPUT_2_1_1[2];
    tmp_1[11] = DCDC_Buck_B.INPUT_2_1_1[3];
    tmp_2[3] = 12;
    tmp_1[12] = DCDC_Buck_B.INPUT_4_1_1[0];
    tmp_1[13] = DCDC_Buck_B.INPUT_4_1_1[1];
    tmp_1[14] = DCDC_Buck_B.INPUT_4_1_1[2];
    tmp_1[15] = DCDC_Buck_B.INPUT_4_1_1[3];
    tmp_2[4] = 16;
    simulationData->mData->mInputValues.mN = 16;
    simulationData->mData->mInputValues.mX = &tmp_1[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_2[0];
    diagnosticManager = (NeuDiagnosticManager *)DCDC_Buck_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = ne_simulator_method((NeslSimulator *)DCDC_Buck_DW.STATE_1_Simulator,
      NESL_SIM_UPDATE, simulationData, diagnosticManager);
    if (tmp_3 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(DCDC_Buck_M));
      if (tmp) {
        char *msg;
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(DCDC_Buck_M, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S26>/STATE_1' */
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(DCDC_Buck_M)) {
    rt_ertODEUpdateContinuousStates(&DCDC_Buck_M->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     * Timer of this task consists of two 32 bit unsigned integers.
     * The two integers represent the low bits Timing.clockTick0 and the high bits
     * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
     */
    if (!(++DCDC_Buck_M->Timing.clockTick0)) {
      ++DCDC_Buck_M->Timing.clockTickH0;
    }

    DCDC_Buck_M->Timing.t[0] = rtsiGetSolverStopTime(&DCDC_Buck_M->solverInfo);

    {
      /* Update absolute timer for sample time: [5.0E-6s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 5.0E-6, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       * Timer of this task consists of two 32 bit unsigned integers.
       * The two integers represent the low bits Timing.clockTick1 and the high bits
       * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
       */
      DCDC_Buck_M->Timing.clockTick1++;
      if (!DCDC_Buck_M->Timing.clockTick1) {
        DCDC_Buck_M->Timing.clockTickH1++;
      }
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void DCDC_Buck_derivatives(void)
{
  NeslSimulationData *simulationData;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  XDot_DCDC_Buck_T *_rtXdot;
  real_T tmp_1[16];
  real_T time;
  int32_T tmp_3;
  int_T tmp_2[5];
  boolean_T tmp;
  boolean_T tmp_0;
  _rtXdot = ((XDot_DCDC_Buck_T *) DCDC_Buck_M->derivs);

  /* Derivatives for SimscapeExecutionBlock: '<S26>/STATE_1' */
  simulationData = (NeslSimulationData *)DCDC_Buck_DW.STATE_1_SimData;
  time = DCDC_Buck_M->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 31;
  simulationData->mData->mContStates.mX =
    &DCDC_Buck_X.DCDC_BuckDC_DC_Buck_PLANTDC_DC_[0];
  simulationData->mData->mDiscStates.mN = 0;
  simulationData->mData->mDiscStates.mX = &DCDC_Buck_DW.STATE_1_Discrete;
  simulationData->mData->mModeVector.mN = 11;
  simulationData->mData->mModeVector.mX = &DCDC_Buck_DW.STATE_1_Modes[0];
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  tmp = rtmIsMajorTimeStep(DCDC_Buck_M);
  simulationData->mData->mIsMajorTimeStep = tmp;
  tmp_0 = false;
  simulationData->mData->mIsSolverAssertCheck = tmp_0;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp_0 = rtsiIsSolverComputingJacobian(&DCDC_Buck_M->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp_0;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsOkayToUpdateMode = tmp;
  tmp_2[0] = 0;
  tmp_1[0] = DCDC_Buck_B.INPUT_1_1_1[0];
  tmp_1[1] = DCDC_Buck_B.INPUT_1_1_1[1];
  tmp_1[2] = DCDC_Buck_B.INPUT_1_1_1[2];
  tmp_1[3] = DCDC_Buck_B.INPUT_1_1_1[3];
  tmp_2[1] = 4;
  tmp_1[4] = DCDC_Buck_B.INPUT_3_1_1[0];
  tmp_1[5] = DCDC_Buck_B.INPUT_3_1_1[1];
  tmp_1[6] = DCDC_Buck_B.INPUT_3_1_1[2];
  tmp_1[7] = DCDC_Buck_B.INPUT_3_1_1[3];
  tmp_2[2] = 8;
  tmp_1[8] = DCDC_Buck_B.INPUT_2_1_1[0];
  tmp_1[9] = DCDC_Buck_B.INPUT_2_1_1[1];
  tmp_1[10] = DCDC_Buck_B.INPUT_2_1_1[2];
  tmp_1[11] = DCDC_Buck_B.INPUT_2_1_1[3];
  tmp_2[3] = 12;
  tmp_1[12] = DCDC_Buck_B.INPUT_4_1_1[0];
  tmp_1[13] = DCDC_Buck_B.INPUT_4_1_1[1];
  tmp_1[14] = DCDC_Buck_B.INPUT_4_1_1[2];
  tmp_1[15] = DCDC_Buck_B.INPUT_4_1_1[3];
  tmp_2[4] = 16;
  simulationData->mData->mInputValues.mN = 16;
  simulationData->mData->mInputValues.mX = &tmp_1[0];
  simulationData->mData->mInputOffsets.mN = 5;
  simulationData->mData->mInputOffsets.mX = &tmp_2[0];
  simulationData->mData->mDx.mN = 31;
  simulationData->mData->mDx.mX = &_rtXdot->DCDC_BuckDC_DC_Buck_PLANTDC_DC_[0];
  diagnosticManager = (NeuDiagnosticManager *)DCDC_Buck_DW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_3 = ne_simulator_method((NeslSimulator *)DCDC_Buck_DW.STATE_1_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
  if (tmp_3 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(DCDC_Buck_M));
    if (tmp) {
      char *msg;
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(DCDC_Buck_M, msg);
    }
  }

  /* End of Derivatives for SimscapeExecutionBlock: '<S26>/STATE_1' */
}

/* Model initialize function */
void DCDC_Buck_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize real-time model */
  (void) memset((void *)DCDC_Buck_M, 0,
                sizeof(RT_MODEL_DCDC_Buck_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&DCDC_Buck_M->solverInfo,
                          &DCDC_Buck_M->Timing.simTimeStep);
    rtsiSetTPtr(&DCDC_Buck_M->solverInfo, &rtmGetTPtr(DCDC_Buck_M));
    rtsiSetStepSizePtr(&DCDC_Buck_M->solverInfo, &DCDC_Buck_M->Timing.stepSize0);
    rtsiSetdXPtr(&DCDC_Buck_M->solverInfo, &DCDC_Buck_M->derivs);
    rtsiSetContStatesPtr(&DCDC_Buck_M->solverInfo, (real_T **)
                         &DCDC_Buck_M->contStates);
    rtsiSetNumContStatesPtr(&DCDC_Buck_M->solverInfo,
      &DCDC_Buck_M->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&DCDC_Buck_M->solverInfo,
      &DCDC_Buck_M->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&DCDC_Buck_M->solverInfo,
      &DCDC_Buck_M->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&DCDC_Buck_M->solverInfo,
      &DCDC_Buck_M->periodicContStateRanges);
    rtsiSetErrorStatusPtr(&DCDC_Buck_M->solverInfo, (&rtmGetErrorStatus
      (DCDC_Buck_M)));
    rtsiSetSolverMassMatrixIr(&DCDC_Buck_M->solverInfo, DCDC_Buck_MassMatrix.ir);
    rtsiSetSolverMassMatrixJc(&DCDC_Buck_M->solverInfo, DCDC_Buck_MassMatrix.jc);
    rtsiSetSolverMassMatrixPr(&DCDC_Buck_M->solverInfo, DCDC_Buck_MassMatrix.pr);
    rtsiSetRTModelPtr(&DCDC_Buck_M->solverInfo, DCDC_Buck_M);
  }

  rtsiSetSimTimeStep(&DCDC_Buck_M->solverInfo, MAJOR_TIME_STEP);
  DCDC_Buck_M->intgData.x0 = DCDC_Buck_M->odeX0;
  DCDC_Buck_M->intgData.f0 = DCDC_Buck_M->odeF0;
  DCDC_Buck_M->intgData.x1start = DCDC_Buck_M->odeX1START;
  DCDC_Buck_M->intgData.f1 = DCDC_Buck_M->odeF1;
  DCDC_Buck_M->intgData.Delta = DCDC_Buck_M->odeDELTA;
  DCDC_Buck_M->intgData.E = DCDC_Buck_M->odeE;
  DCDC_Buck_M->intgData.fac = DCDC_Buck_M->odeFAC;

  /* initialize */
  {
    int_T i;
    real_T *f = DCDC_Buck_M->intgData.fac;
    for (i = 0; i < (int_T)(sizeof(DCDC_Buck_M->odeFAC)/sizeof(real_T)); i++) {
      f[i] = 1.5e-8;
    }
  }

  DCDC_Buck_M->intgData.DFDX = DCDC_Buck_M->odeDFDX;
  DCDC_Buck_M->intgData.W = DCDC_Buck_M->odeW;
  DCDC_Buck_M->intgData.pivots = DCDC_Buck_M->odePIVOTS;
  DCDC_Buck_M->intgData.xtmp = DCDC_Buck_M->odeXTMP;
  DCDC_Buck_M->intgData.ztmp = DCDC_Buck_M->odeZTMP;
  DCDC_Buck_M->intgData.M = DCDC_Buck_M->odeMASSMATRIX_M;
  DCDC_Buck_M->intgData.isFirstStep = true;
  rtsiSetSolverExtrapolationOrder(&DCDC_Buck_M->solverInfo, 4);
  rtsiSetSolverNumberNewtonIterations(&DCDC_Buck_M->solverInfo, 1);
  DCDC_Buck_M->contStates = ((X_DCDC_Buck_T *) &DCDC_Buck_X);
  DCDC_Buck_M->massMatrixType = ((ssMatrixType)1);
  DCDC_Buck_M->massMatrixNzMax = (13);
  DCDC_Buck_M->massMatrixIr = (DCDC_Buck_MassMatrix.ir);
  DCDC_Buck_M->massMatrixJc = (DCDC_Buck_MassMatrix.jc);
  DCDC_Buck_M->massMatrixPr = (DCDC_Buck_MassMatrix.pr);
  rtsiSetSolverMassMatrixType(&DCDC_Buck_M->solverInfo, (ssMatrixType)1);
  rtsiSetSolverMassMatrixNzMax(&DCDC_Buck_M->solverInfo, 13);
  rtsiSetSolverData(&DCDC_Buck_M->solverInfo, (void *)&DCDC_Buck_M->intgData);
  rtsiSetSolverName(&DCDC_Buck_M->solverInfo,"ode14x");
  rtmSetTPtr(DCDC_Buck_M, &DCDC_Buck_M->Timing.tArray[0]);
  DCDC_Buck_M->Timing.stepSize0 = 5.0E-6;

  /* block I/O */
  (void) memset(((void *) &DCDC_Buck_B), 0,
                sizeof(B_DCDC_Buck_T));

  /* states (continuous) */
  {
    (void) memset((void *)&DCDC_Buck_X, 0,
                  sizeof(X_DCDC_Buck_T));
  }

  /* global mass matrix */
  {
    int_T *ir = DCDC_Buck_MassMatrix.ir;
    int_T *jc = DCDC_Buck_MassMatrix.jc;
    real_T *pr = DCDC_Buck_MassMatrix.pr;
    (void) memset((void *)ir, 0,
                  13*sizeof(int_T));
    (void) memset((void *)jc, 0,
                  (31+1)*sizeof(int_T));
    (void) memset((void *)pr, 0,
                  13*sizeof(real_T));
  }

  /* states (dwork) */
  (void) memset((void *)&DCDC_Buck_DW, 0,
                sizeof(DW_DCDC_Buck_T));

  /* Root-level init GlobalMassMatrixPr offset */
  {
    DCDC_Buck_DW.STATE_1_MASS_MATRIX_PR = 0;/* '<S26>/STATE_1' */
  }

  {
    NeModelParameters modelParameters;
    NeModelParameters modelParameters_0;
    NeslSimulationData *tmp_1;
    NeslSimulator *tmp;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    real_T tmp_2;
    int32_T tmp_3;
    boolean_T tmp_0;

    /* Start for SimscapeExecutionBlock: '<S26>/STATE_1' */
    tmp = nesl_lease_simulator(
      "DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration_1", 0, 0);
    DCDC_Buck_DW.STATE_1_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(DCDC_Buck_DW.STATE_1_Simulator);
    if (tmp_0) {
      DCDC_Buck_9d5357ce_1_gateway();
      tmp = nesl_lease_simulator(
        "DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration_1", 0, 0);
      DCDC_Buck_DW.STATE_1_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    DCDC_Buck_DW.STATE_1_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    DCDC_Buck_DW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters.mSolverTolerance = 0.001;
    modelParameters.mVariableStepSolver = false;
    modelParameters.mIsUsingODEN = false;
    modelParameters.mFixedStepSize = 0.001;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters.mRTWModifiedTimeStamp = 6.32502036E+8;
    modelParameters.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters.mSolverTolerance = tmp_2;
    tmp_2 = 5.0E-6;
    modelParameters.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters.mIsUsingODEN = tmp_0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)DCDC_Buck_DW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)
      DCDC_Buck_DW.STATE_1_Simulator, &modelParameters, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(DCDC_Buck_M));
      if (tmp_0) {
        char *msg;
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(DCDC_Buck_M, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S26>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S26>/OUTPUT_1_0' */
    tmp = nesl_lease_simulator(
      "DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration_1", 1, 0);
    DCDC_Buck_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    tmp_0 = pointer_is_null(DCDC_Buck_DW.OUTPUT_1_0_Simulator);
    if (tmp_0) {
      DCDC_Buck_9d5357ce_1_gateway();
      tmp = nesl_lease_simulator(
        "DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration_1", 1, 0);
      DCDC_Buck_DW.OUTPUT_1_0_Simulator = (void *)tmp;
    }

    tmp_1 = nesl_create_simulation_data();
    DCDC_Buck_DW.OUTPUT_1_0_SimData = (void *)tmp_1;
    diagnosticManager = rtw_create_diagnostics();
    DCDC_Buck_DW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_0.mSolverTolerance = 0.001;
    modelParameters_0.mVariableStepSolver = false;
    modelParameters_0.mIsUsingODEN = false;
    modelParameters_0.mFixedStepSize = 0.001;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_NONE;
    modelParameters_0.mRTWModifiedTimeStamp = 6.32502036E+8;
    modelParameters_0.mZcDisabled = false;
    tmp_2 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_2;
    tmp_2 = 5.0E-6;
    modelParameters_0.mFixedStepSize = tmp_2;
    tmp_0 = false;
    modelParameters_0.mVariableStepSolver = tmp_0;
    tmp_0 = false;
    modelParameters_0.mIsUsingODEN = tmp_0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)DCDC_Buck_DW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_3 = nesl_initialize_simulator((NeslSimulator *)
      DCDC_Buck_DW.OUTPUT_1_0_Simulator, &modelParameters_0, diagnosticManager);
    if (tmp_3 != 0) {
      tmp_0 = error_buffer_is_empty(rtmGetErrorStatus(DCDC_Buck_M));
      if (tmp_0) {
        char *msg_0;
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(DCDC_Buck_M, msg_0);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S26>/OUTPUT_1_0' */
  }

  {
    boolean_T tmp;
    boolean_T tmp_0;

    /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
    DCDC_Buck_DW.UnitDelay_DSTATE = 0.0;

    /* InitializeConditions for UnitDelay: '<S6>/Unit Delay1' */
    DCDC_Buck_DW.UnitDelay1_DSTATE = false;

    /* InitializeConditions for UnitDelay: '<S6>/Unit Delay' */
    DCDC_Buck_DW.UnitDelay_DSTATE_b = 0.0;

    /* InitializeConditions for UnitDelay: '<S4>/Unit Delay' */
    DCDC_Buck_DW.UnitDelay_DSTATE_m = 0;

    /* InitializeConditions for SimscapeExecutionBlock: '<S26>/STATE_1' */
    tmp = false;
    tmp_0 = false;
    if (tmp_0 || tmp) {
      int_T tmp_1;
      int_T tmp_2;
      int_T tmp_3;
      int_T tmp_4;
      int_T tmp_5;
      int_T tmp_6;
      tmp_1 = strcmp(rtsiGetSolverName(&DCDC_Buck_M->solverInfo), "daessc");
      tmp_2 = strcmp(rtsiGetSolverName(&DCDC_Buck_M->solverInfo), "ode14x");
      tmp_3 = strcmp(rtsiGetSolverName(&DCDC_Buck_M->solverInfo), "ode15s");
      tmp_4 = strcmp(rtsiGetSolverName(&DCDC_Buck_M->solverInfo), "ode1be");
      tmp_5 = strcmp(rtsiGetSolverName(&DCDC_Buck_M->solverInfo), "ode23t");
      tmp_6 = strcmp(rtsiGetSolverName(&DCDC_Buck_M->solverInfo), "odeN");
      if ((boolean_T)((tmp_1 != 0) & (tmp_2 != 0) & (tmp_3 != 0) & (tmp_4 != 0)
                      & (tmp_5 != 0) & (tmp_6 != 0))) {
        rtmSetErrorStatus(DCDC_Buck_M,
                          "Detected inconsistent solvers in the model reference hierarchy. Model built with ode14x requires one of {daessc, ode14x, ode15s, ode1be, ode23t, odeN} solvers to run. Use one of the required solvers in the top model.");
      }
    }

    /* End of InitializeConditions for SimscapeExecutionBlock: '<S26>/STATE_1' */

    /* Root-level InitSystemMatrices */
    {
      static int_T modelMassMatrixIr[13] = { 2, 0, 7, 1, 12, 3, 4, 5, 6, 8, 9,
        10, 11 };

      static int_T modelMassMatrixJc[32] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13, 13,
        13, 13, 13 };

      static real_T modelMassMatrixPr[13] = { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
        1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

      (void) memcpy(DCDC_Buck_MassMatrix.ir, modelMassMatrixIr,
                    13*sizeof(int_T));
      (void) memcpy(DCDC_Buck_MassMatrix.jc, modelMassMatrixJc,
                    32*sizeof(int_T));
      (void) memcpy(DCDC_Buck_MassMatrix.pr, modelMassMatrixPr,
                    13*sizeof(real_T));
    }
  }
}

/* Model terminate function */
void DCDC_Buck_terminate(void)
{
  /* Terminate for SimscapeExecutionBlock: '<S26>/STATE_1' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    DCDC_Buck_DW.STATE_1_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    DCDC_Buck_DW.STATE_1_SimData);
  nesl_erase_simulator("DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration_1");
  nesl_destroy_registry();

  /* Terminate for SimscapeExecutionBlock: '<S26>/OUTPUT_1_0' */
  neu_destroy_diagnostic_manager((NeuDiagnosticManager *)
    DCDC_Buck_DW.OUTPUT_1_0_DiagMgr);
  nesl_destroy_simulation_data((NeslSimulationData *)
    DCDC_Buck_DW.OUTPUT_1_0_SimData);
  nesl_erase_simulator("DCDC_Buck/DC//DC_Buck_PLANT/Solver Configuration_1");
  nesl_destroy_registry();
}
