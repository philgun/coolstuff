/* Linear Systems */
#include "sCO2SurrogatePBRig_model.h"
#include "sCO2SurrogatePBRig_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 564
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._m_des = sCO2PBDesignPointCalculator.powerBlock.gamma * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_564(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,564};
  data->simulationInfo->realParameter[725] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.m_des PARAM */ = (data->simulationInfo->realParameter[681] /* sCO2PBDesignPointCalculator.powerBlock.gamma PARAM */) * (data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */);
  TRACE_POP
}
/*
equation index: 565
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._W_comp_des = sCO2PBDesignPointCalculator.powerBlock.reCompressor.m_des * (sCO2PBDesignPointCalculator.powerBlock.reCompressor.h_out_des - sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_in_des.h)
*/
void sCO2SurrogatePBRig_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  data->simulationInfo->realParameter[720] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp_des PARAM */ = (data->simulationInfo->realParameter[725] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.m_des PARAM */) * (data->simulationInfo->realParameter[724] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[731] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_in_des.h PARAM */);
  TRACE_POP
}
/*
equation index: 566
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._m_des = sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.ratio_m_des
*/
void sCO2SurrogatePBRig_eqFunction_566(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,566};
  data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */ = (data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[714] /* sCO2PBDesignPointCalculator.powerBlock.ratio_m_des PARAM */);
  TRACE_POP
}
/*
equation index: 567
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._m_des = sCO2PBDesignPointCalculator.powerBlock.cooler.m_des
*/
void sCO2SurrogatePBRig_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  data->simulationInfo->realParameter[692] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.m_des PARAM */ = data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */;
  TRACE_POP
}
/*
equation index: 568
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._W_comp_des = sCO2PBDesignPointCalculator.powerBlock.mainCompressor.m_des * (sCO2PBDesignPointCalculator.powerBlock.mainCompressor.h_out_des - sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h)
*/
void sCO2SurrogatePBRig_eqFunction_568(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,568};
  data->simulationInfo->realParameter[687] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp_des PARAM */ = (data->simulationInfo->realParameter[692] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.m_des PARAM */) * (data->simulationInfo->realParameter[691] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[698] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h PARAM */);
  TRACE_POP
}
/*
equation index: 569
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._W_turb_des = ((-150000000.0) / (1.0 - sCO2PBDesignPointCalculator.powerBlock.f_fixed_load) - (sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp_des + sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp_des) * (1.0 - sCO2PBDesignPointCalculator.powerBlock.par_fr) * sCO2PBDesignPointCalculator.powerBlock.eta_motor) / (sCO2PBDesignPointCalculator.powerBlock.eta_motor * (1.0 - sCO2PBDesignPointCalculator.powerBlock.par_fr))
*/
void sCO2SurrogatePBRig_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  data->simulationInfo->realParameter[745] /* sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb_des PARAM */ = DIVISION_SIM(DIVISION_SIM(-150000000.0,1.0 - data->simulationInfo->realParameter[678] /* sCO2PBDesignPointCalculator.powerBlock.f_fixed_load PARAM */,"1.0 - sCO2PBDesignPointCalculator.powerBlock.f_fixed_load",equationIndexes) - (((data->simulationInfo->realParameter[687] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp_des PARAM */ + data->simulationInfo->realParameter[720] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp_des PARAM */) * (1.0 - data->simulationInfo->realParameter[705] /* sCO2PBDesignPointCalculator.powerBlock.par_fr PARAM */)) * (data->simulationInfo->realParameter[521] /* sCO2PBDesignPointCalculator.powerBlock.eta_motor PARAM */)),(data->simulationInfo->realParameter[521] /* sCO2PBDesignPointCalculator.powerBlock.eta_motor PARAM */) * (1.0 - data->simulationInfo->realParameter[705] /* sCO2PBDesignPointCalculator.powerBlock.par_fr PARAM */),"sCO2PBDesignPointCalculator.powerBlock.eta_motor * (1.0 - sCO2PBDesignPointCalculator.powerBlock.par_fr)",equationIndexes);
  TRACE_POP
}
/*
equation index: 570
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._m_des = sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb_des / (sCO2PBDesignPointCalculator.powerBlock.turbine.h_out_des - sCO2PBDesignPointCalculator.powerBlock.turbine.state_in_des.h)
*/
void sCO2SurrogatePBRig_eqFunction_570(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,570};
  data->simulationInfo->realParameter[750] /* sCO2PBDesignPointCalculator.powerBlock.turbine.m_des PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[745] /* sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb_des PARAM */,data->simulationInfo->realParameter[749] /* sCO2PBDesignPointCalculator.powerBlock.turbine.h_out_des PARAM */ - data->simulationInfo->realParameter[753] /* sCO2PBDesignPointCalculator.powerBlock.turbine.state_in_des.h PARAM */,"sCO2PBDesignPointCalculator.powerBlock.turbine.h_out_des - sCO2PBDesignPointCalculator.powerBlock.turbine.state_in_des.h",equationIndexes);
  TRACE_POP
}
/*
equation index: 571
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._m_turb_des = sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */ = data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */;
  TRACE_POP
}

void residualFunc580(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,580};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */ = xloc[0];
  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_564(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_565(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_566(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_567(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_568(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_569(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_570(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_571(data, threadData);
  res[0] = data->simulationInfo->realParameter[750] /* sCO2PBDesignPointCalculator.powerBlock.turbine.m_des PARAM */ - data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData580(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des */
  linearSystemData->nominal[i] = data->modelData->realParameterData[334].attribute /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des */.nominal;
  linearSystemData->min[i]     = data->modelData->realParameterData[334].attribute /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des */.min;
  linearSystemData->max[i++]   = data->modelData->realParameterData[334].attribute /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des */.max;
}


/*
equation index: 479
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des[2] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[1] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des
*/
void sCO2SurrogatePBRig_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->simulationInfo->realParameter[469] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[2] PARAM */ = data->simulationInfo->realParameter[468] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[1] PARAM */ + data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 480
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des[3] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[2] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des
*/
void sCO2SurrogatePBRig_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->simulationInfo->realParameter[470] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[3] PARAM */ = data->simulationInfo->realParameter[469] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[2] PARAM */ + data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 481
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des[4] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[3] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des
*/
void sCO2SurrogatePBRig_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->simulationInfo->realParameter[471] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[4] PARAM */ = data->simulationInfo->realParameter[470] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[3] PARAM */ + data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 482
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des[5] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[4] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des
*/
void sCO2SurrogatePBRig_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->simulationInfo->realParameter[472] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[5] PARAM */ = data->simulationInfo->realParameter[471] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[4] PARAM */ + data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 483
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des[6] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[5] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des
*/
void sCO2SurrogatePBRig_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->simulationInfo->realParameter[473] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[6] PARAM */ = data->simulationInfo->realParameter[472] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[5] PARAM */ + data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 484
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des[7] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[6] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des
*/
void sCO2SurrogatePBRig_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->simulationInfo->realParameter[474] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[7] PARAM */ = data->simulationInfo->realParameter[473] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[6] PARAM */ + data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 485
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des[8] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[7] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des
*/
void sCO2SurrogatePBRig_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  data->simulationInfo->realParameter[475] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[8] PARAM */ = data->simulationInfo->realParameter[474] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[7] PARAM */ + data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 486
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des[9] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[8] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des
*/
void sCO2SurrogatePBRig_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->simulationInfo->realParameter[476] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[9] PARAM */ = data->simulationInfo->realParameter[475] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[8] PARAM */ + data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 487
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des[10] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[9] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des
*/
void sCO2SurrogatePBRig_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->simulationInfo->realParameter[477] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[10] PARAM */ = data->simulationInfo->realParameter[476] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[9] PARAM */ + data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 488
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des[11] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[10] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des
*/
void sCO2SurrogatePBRig_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->simulationInfo->realParameter[478] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[11] PARAM */ = data->simulationInfo->realParameter[477] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[10] PARAM */ + data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 489
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des[12] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[11] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des
*/
void sCO2SurrogatePBRig_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->simulationInfo->realParameter[479] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[12] PARAM */ = data->simulationInfo->realParameter[478] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[11] PARAM */ + data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 490
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des[13] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[12] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des
*/
void sCO2SurrogatePBRig_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->simulationInfo->realParameter[480] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[13] PARAM */ = data->simulationInfo->realParameter[479] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[12] PARAM */ + data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 491
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des[14] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[13] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des
*/
void sCO2SurrogatePBRig_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  data->simulationInfo->realParameter[481] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[14] PARAM */ = data->simulationInfo->realParameter[480] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[13] PARAM */ + data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}

void residualFunc506(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,506};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */ = xloc[0];
  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_479(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_480(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_481(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_482(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_483(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_484(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_485(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_486(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_487(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_488(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_489(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_490(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_491(data, threadData);
  res[0] = data->simulationInfo->realParameter[482] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[15] PARAM */ + (-data->simulationInfo->realParameter[481] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[14] PARAM */) - data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData506(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des */
  linearSystemData->nominal[i] = data->modelData->realParameterData[418].attribute /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des */.nominal;
  linearSystemData->min[i]     = data->modelData->realParameterData[418].attribute /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des */.min;
  linearSystemData->max[i++]   = data->modelData->realParameterData[418].attribute /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des */.max;
}


/*
equation index: 59
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._Q_HX_des = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h - sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[1].h
*/
void sCO2SurrogatePBRig_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */ = data->simulationInfo->realParameter[649] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h PARAM */ - data->simulationInfo->realParameter[648] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[1].h PARAM */;
  TRACE_POP
}
/*
equation index: 60
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[3]._h = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h + sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->simulationInfo->realParameter[650] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[3].h PARAM */ = data->simulationInfo->realParameter[649] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h PARAM */ + data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 61
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[4]._h = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[3].h + sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->simulationInfo->realParameter[651] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[4].h PARAM */ = data->simulationInfo->realParameter[650] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[3].h PARAM */ + data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 62
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[5]._h = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[4].h + sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->simulationInfo->realParameter[652] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[5].h PARAM */ = data->simulationInfo->realParameter[651] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[4].h PARAM */ + data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 63
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[6]._h = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[5].h + sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->simulationInfo->realParameter[653] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[6].h PARAM */ = data->simulationInfo->realParameter[652] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[5].h PARAM */ + data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 64
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[7]._h = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[6].h + sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->simulationInfo->realParameter[654] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[7].h PARAM */ = data->simulationInfo->realParameter[653] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[6].h PARAM */ + data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 65
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[8]._h = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[7].h + sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->simulationInfo->realParameter[655] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[8].h PARAM */ = data->simulationInfo->realParameter[654] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[7].h PARAM */ + data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 66
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[9]._h = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[8].h + sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->simulationInfo->realParameter[656] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[9].h PARAM */ = data->simulationInfo->realParameter[655] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[8].h PARAM */ + data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 67
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[10]._h = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[9].h + sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->simulationInfo->realParameter[657] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[10].h PARAM */ = data->simulationInfo->realParameter[656] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[9].h PARAM */ + data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 68
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[11]._h = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[10].h + sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->simulationInfo->realParameter[658] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[11].h PARAM */ = data->simulationInfo->realParameter[657] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[10].h PARAM */ + data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 69
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[12]._h = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[11].h + sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->simulationInfo->realParameter[659] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[12].h PARAM */ = data->simulationInfo->realParameter[658] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[11].h PARAM */ + data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 70
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[13]._h = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[12].h + sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->simulationInfo->realParameter[660] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[13].h PARAM */ = data->simulationInfo->realParameter[659] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[12].h PARAM */ + data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 71
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[14]._h = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[13].h + sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->simulationInfo->realParameter[661] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[14].h PARAM */ = data->simulationInfo->realParameter[660] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[13].h PARAM */ + data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}

void residualFunc86(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,86};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->simulationInfo->realParameter[649] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h PARAM */ = xloc[0];
  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_59(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_60(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_61(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_62(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_63(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_64(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_65(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_66(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_67(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_68(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_69(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_70(data, threadData);

  /* local constraints */
  sCO2SurrogatePBRig_eqFunction_71(data, threadData);
  res[0] = data->simulationInfo->realParameter[662] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[15].h PARAM */ + (-data->simulationInfo->realParameter[661] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[14].h PARAM */) - data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData86(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h */
  linearSystemData->nominal[i] = data->modelData->realParameterData[649].attribute /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h */.nominal;
  linearSystemData->min[i]     = data->modelData->realParameterData[649].attribute /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h */.min;
  linearSystemData->max[i++]   = data->modelData->realParameterData[649].attribute /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void sCO2SurrogatePBRig_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[2].equationIndex = 580;
  linearSystemData[2].size = 1;
  linearSystemData[2].nnz = 0;
  linearSystemData[2].method = 1;
  linearSystemData[2].residualFunc = residualFunc580;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].analyticalJacobianColumn = sCO2SurrogatePBRig_functionJacLSJac47_column;
  linearSystemData[2].initialAnalyticalJacobian = sCO2SurrogatePBRig_initialAnalyticJacobianLSJac47;
  linearSystemData[2].jacobianIndex = 2 /*jacInx*/;
  linearSystemData[2].setA = NULL;//setLinearMatrixA580;
  linearSystemData[2].setb = NULL; //setLinearVectorb580;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData580;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 506;
  linearSystemData[1].size = 1;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;
  linearSystemData[1].residualFunc = residualFunc506;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = sCO2SurrogatePBRig_functionJacLSJac32_column;
  linearSystemData[1].initialAnalyticalJacobian = sCO2SurrogatePBRig_initialAnalyticJacobianLSJac32;
  linearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[1].setA = NULL;//setLinearMatrixA506;
  linearSystemData[1].setb = NULL; //setLinearVectorb506;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData506;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 86;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;
  linearSystemData[0].residualFunc = residualFunc86;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = sCO2SurrogatePBRig_functionJacLSJac1_column;
  linearSystemData[0].initialAnalyticalJacobian = sCO2SurrogatePBRig_initialAnalyticJacobianLSJac1;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;//setLinearMatrixA86;
  linearSystemData[0].setb = NULL; //setLinearVectorb86;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData86;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

