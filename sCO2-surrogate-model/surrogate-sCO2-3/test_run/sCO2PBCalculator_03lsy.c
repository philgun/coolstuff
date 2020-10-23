/* Linear Systems */
#include "sCO2PBCalculator_model.h"
#include "sCO2PBCalculator_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 486
type: SIMPLE_ASSIGN
powerBlock._reCompressor._m_des = powerBlock.gamma * powerBlock.LTR.m_turb_des
*/
void sCO2PBCalculator_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->simulationInfo->realParameter[631] /* powerBlock.reCompressor.m_des PARAM */ = (data->simulationInfo->realParameter[588] /* powerBlock.gamma PARAM */) * (data->simulationInfo->realParameter[241] /* powerBlock.LTR.m_turb_des PARAM */);
  TRACE_POP
}
/*
equation index: 487
type: SIMPLE_ASSIGN
powerBlock._reCompressor._W_comp_des = powerBlock.reCompressor.m_des * (powerBlock.reCompressor.h_out_des - powerBlock.reCompressor.state_in_des.h)
*/
void sCO2PBCalculator_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->simulationInfo->realParameter[626] /* powerBlock.reCompressor.W_comp_des PARAM */ = (data->simulationInfo->realParameter[631] /* powerBlock.reCompressor.m_des PARAM */) * (data->simulationInfo->realParameter[630] /* powerBlock.reCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[637] /* powerBlock.reCompressor.state_in_des.h PARAM */);
  TRACE_POP
}
/*
equation index: 488
type: SIMPLE_ASSIGN
powerBlock._cooler._m_des = powerBlock.LTR.m_turb_des * powerBlock.ratio_m_des
*/
void sCO2PBCalculator_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->simulationInfo->realParameter[393] /* powerBlock.cooler.m_des PARAM */ = (data->simulationInfo->realParameter[241] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[620] /* powerBlock.ratio_m_des PARAM */);
  TRACE_POP
}
/*
equation index: 489
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._m_des = powerBlock.cooler.m_des
*/
void sCO2PBCalculator_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->simulationInfo->realParameter[599] /* powerBlock.mainCompressor.m_des PARAM */ = data->simulationInfo->realParameter[393] /* powerBlock.cooler.m_des PARAM */;
  TRACE_POP
}
/*
equation index: 490
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._W_comp_des = powerBlock.mainCompressor.m_des * (powerBlock.mainCompressor.h_out_des - powerBlock.mainCompressor.state_in_des.h)
*/
void sCO2PBCalculator_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->simulationInfo->realParameter[594] /* powerBlock.mainCompressor.W_comp_des PARAM */ = (data->simulationInfo->realParameter[599] /* powerBlock.mainCompressor.m_des PARAM */) * (data->simulationInfo->realParameter[598] /* powerBlock.mainCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[605] /* powerBlock.mainCompressor.state_in_des.h PARAM */);
  TRACE_POP
}
/*
equation index: 491
type: SIMPLE_ASSIGN
powerBlock._turbine._W_turb_des = ((-25000000.0) / (1.0 - powerBlock.f_fixed_load) - (powerBlock.mainCompressor.W_comp_des + powerBlock.reCompressor.W_comp_des) * (1.0 - powerBlock.par_fr) * powerBlock.eta_motor) / (powerBlock.eta_motor * (1.0 - powerBlock.par_fr))
*/
void sCO2PBCalculator_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  data->simulationInfo->realParameter[651] /* powerBlock.turbine.W_turb_des PARAM */ = DIVISION_SIM(DIVISION_SIM(-25000000.0,1.0 - data->simulationInfo->realParameter[585] /* powerBlock.f_fixed_load PARAM */,"1.0 - powerBlock.f_fixed_load",equationIndexes) - (((data->simulationInfo->realParameter[594] /* powerBlock.mainCompressor.W_comp_des PARAM */ + data->simulationInfo->realParameter[626] /* powerBlock.reCompressor.W_comp_des PARAM */) * (1.0 - data->simulationInfo->realParameter[612] /* powerBlock.par_fr PARAM */)) * (data->simulationInfo->realParameter[429] /* powerBlock.eta_motor PARAM */)),(data->simulationInfo->realParameter[429] /* powerBlock.eta_motor PARAM */) * (1.0 - data->simulationInfo->realParameter[612] /* powerBlock.par_fr PARAM */),"powerBlock.eta_motor * (1.0 - powerBlock.par_fr)",equationIndexes);
  TRACE_POP
}
/*
equation index: 492
type: SIMPLE_ASSIGN
powerBlock._turbine._m_des = powerBlock.turbine.W_turb_des / (powerBlock.turbine.h_out_des - powerBlock.turbine.state_in_des.h)
*/
void sCO2PBCalculator_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  data->simulationInfo->realParameter[656] /* powerBlock.turbine.m_des PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[651] /* powerBlock.turbine.W_turb_des PARAM */,data->simulationInfo->realParameter[655] /* powerBlock.turbine.h_out_des PARAM */ - data->simulationInfo->realParameter[659] /* powerBlock.turbine.state_in_des.h PARAM */,"powerBlock.turbine.h_out_des - powerBlock.turbine.state_in_des.h",equationIndexes);
  TRACE_POP
}
/*
equation index: 493
type: SIMPLE_ASSIGN
powerBlock._HTR._m_turb_des = powerBlock.LTR.m_turb_des
*/
void sCO2PBCalculator_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  data->simulationInfo->realParameter[106] /* powerBlock.HTR.m_turb_des PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.m_turb_des PARAM */;
  TRACE_POP
}

void residualFunc502(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,502};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->simulationInfo->realParameter[241] /* powerBlock.LTR.m_turb_des PARAM */ = xloc[0];
  /* local constraints */
  sCO2PBCalculator_eqFunction_486(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_487(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_488(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_489(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_490(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_491(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_492(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_493(data, threadData);
  res[0] = data->simulationInfo->realParameter[656] /* powerBlock.turbine.m_des PARAM */ - data->simulationInfo->realParameter[106] /* powerBlock.HTR.m_turb_des PARAM */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData502(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for powerBlock.LTR.m_turb_des */
  linearSystemData->nominal[i] = data->modelData->realParameterData[241].attribute /* powerBlock.LTR.m_turb_des */.nominal;
  linearSystemData->min[i]     = data->modelData->realParameterData[241].attribute /* powerBlock.LTR.m_turb_des */.min;
  linearSystemData->max[i++]   = data->modelData->realParameterData[241].attribute /* powerBlock.LTR.m_turb_des */.max;
}


/*
equation index: 406
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[2] = powerBlock.cooler.h_CO2_des[1] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  data->simulationInfo->realParameter[377] /* powerBlock.cooler.h_CO2_des[2] PARAM */ = data->simulationInfo->realParameter[376] /* powerBlock.cooler.h_CO2_des[1] PARAM */ + data->simulationInfo->realParameter[326] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 407
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[3] = powerBlock.cooler.h_CO2_des[2] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->realParameter[378] /* powerBlock.cooler.h_CO2_des[3] PARAM */ = data->simulationInfo->realParameter[377] /* powerBlock.cooler.h_CO2_des[2] PARAM */ + data->simulationInfo->realParameter[326] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 408
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[4] = powerBlock.cooler.h_CO2_des[3] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->realParameter[379] /* powerBlock.cooler.h_CO2_des[4] PARAM */ = data->simulationInfo->realParameter[378] /* powerBlock.cooler.h_CO2_des[3] PARAM */ + data->simulationInfo->realParameter[326] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 409
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[5] = powerBlock.cooler.h_CO2_des[4] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_eqFunction_409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,409};
  data->simulationInfo->realParameter[380] /* powerBlock.cooler.h_CO2_des[5] PARAM */ = data->simulationInfo->realParameter[379] /* powerBlock.cooler.h_CO2_des[4] PARAM */ + data->simulationInfo->realParameter[326] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 410
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[6] = powerBlock.cooler.h_CO2_des[5] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  data->simulationInfo->realParameter[381] /* powerBlock.cooler.h_CO2_des[6] PARAM */ = data->simulationInfo->realParameter[380] /* powerBlock.cooler.h_CO2_des[5] PARAM */ + data->simulationInfo->realParameter[326] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 411
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[7] = powerBlock.cooler.h_CO2_des[6] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->simulationInfo->realParameter[382] /* powerBlock.cooler.h_CO2_des[7] PARAM */ = data->simulationInfo->realParameter[381] /* powerBlock.cooler.h_CO2_des[6] PARAM */ + data->simulationInfo->realParameter[326] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 412
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[8] = powerBlock.cooler.h_CO2_des[7] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->realParameter[383] /* powerBlock.cooler.h_CO2_des[8] PARAM */ = data->simulationInfo->realParameter[382] /* powerBlock.cooler.h_CO2_des[7] PARAM */ + data->simulationInfo->realParameter[326] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 413
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[9] = powerBlock.cooler.h_CO2_des[8] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_eqFunction_413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,413};
  data->simulationInfo->realParameter[384] /* powerBlock.cooler.h_CO2_des[9] PARAM */ = data->simulationInfo->realParameter[383] /* powerBlock.cooler.h_CO2_des[8] PARAM */ + data->simulationInfo->realParameter[326] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 414
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[10] = powerBlock.cooler.h_CO2_des[9] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  data->simulationInfo->realParameter[385] /* powerBlock.cooler.h_CO2_des[10] PARAM */ = data->simulationInfo->realParameter[384] /* powerBlock.cooler.h_CO2_des[9] PARAM */ + data->simulationInfo->realParameter[326] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 415
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[11] = powerBlock.cooler.h_CO2_des[10] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->realParameter[386] /* powerBlock.cooler.h_CO2_des[11] PARAM */ = data->simulationInfo->realParameter[385] /* powerBlock.cooler.h_CO2_des[10] PARAM */ + data->simulationInfo->realParameter[326] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 416
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[12] = powerBlock.cooler.h_CO2_des[11] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->simulationInfo->realParameter[387] /* powerBlock.cooler.h_CO2_des[12] PARAM */ = data->simulationInfo->realParameter[386] /* powerBlock.cooler.h_CO2_des[11] PARAM */ + data->simulationInfo->realParameter[326] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 417
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[13] = powerBlock.cooler.h_CO2_des[12] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_eqFunction_417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,417};
  data->simulationInfo->realParameter[388] /* powerBlock.cooler.h_CO2_des[13] PARAM */ = data->simulationInfo->realParameter[387] /* powerBlock.cooler.h_CO2_des[12] PARAM */ + data->simulationInfo->realParameter[326] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 418
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[14] = powerBlock.cooler.h_CO2_des[13] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  data->simulationInfo->realParameter[389] /* powerBlock.cooler.h_CO2_des[14] PARAM */ = data->simulationInfo->realParameter[388] /* powerBlock.cooler.h_CO2_des[13] PARAM */ + data->simulationInfo->realParameter[326] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}

void residualFunc433(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,433};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->simulationInfo->realParameter[326] /* powerBlock.cooler.Q_dis_des PARAM */ = xloc[0];
  /* local constraints */
  sCO2PBCalculator_eqFunction_406(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_407(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_408(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_409(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_410(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_411(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_412(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_413(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_414(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_415(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_416(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_417(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_418(data, threadData);
  res[0] = data->simulationInfo->realParameter[390] /* powerBlock.cooler.h_CO2_des[15] PARAM */ + (-data->simulationInfo->realParameter[389] /* powerBlock.cooler.h_CO2_des[14] PARAM */) - data->simulationInfo->realParameter[326] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData433(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for powerBlock.cooler.Q_dis_des */
  linearSystemData->nominal[i] = data->modelData->realParameterData[326].attribute /* powerBlock.cooler.Q_dis_des */.nominal;
  linearSystemData->min[i]     = data->modelData->realParameterData[326].attribute /* powerBlock.cooler.Q_dis_des */.min;
  linearSystemData->max[i++]   = data->modelData->realParameterData[326].attribute /* powerBlock.cooler.Q_dis_des */.max;
}


/*
equation index: 38
type: SIMPLE_ASSIGN
powerBlock._exchanger._Q_HX_des = powerBlock.exchanger.state_HTF_des[2].h - powerBlock.exchanger.state_HTF_des[1].h
*/
void sCO2PBCalculator_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->simulationInfo->realParameter[435] /* powerBlock.exchanger.Q_HX_des PARAM */ = data->simulationInfo->realParameter[556] /* powerBlock.exchanger.state_HTF_des[2].h PARAM */ - data->simulationInfo->realParameter[555] /* powerBlock.exchanger.state_HTF_des[1].h PARAM */;
  TRACE_POP
}
/*
equation index: 39
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[3]._h = powerBlock.exchanger.state_HTF_des[2].h + powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->simulationInfo->realParameter[557] /* powerBlock.exchanger.state_HTF_des[3].h PARAM */ = data->simulationInfo->realParameter[556] /* powerBlock.exchanger.state_HTF_des[2].h PARAM */ + data->simulationInfo->realParameter[435] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 40
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[4]._h = powerBlock.exchanger.state_HTF_des[3].h + powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->simulationInfo->realParameter[558] /* powerBlock.exchanger.state_HTF_des[4].h PARAM */ = data->simulationInfo->realParameter[557] /* powerBlock.exchanger.state_HTF_des[3].h PARAM */ + data->simulationInfo->realParameter[435] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 41
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[5]._h = powerBlock.exchanger.state_HTF_des[4].h + powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->simulationInfo->realParameter[559] /* powerBlock.exchanger.state_HTF_des[5].h PARAM */ = data->simulationInfo->realParameter[558] /* powerBlock.exchanger.state_HTF_des[4].h PARAM */ + data->simulationInfo->realParameter[435] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 42
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[6]._h = powerBlock.exchanger.state_HTF_des[5].h + powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->simulationInfo->realParameter[560] /* powerBlock.exchanger.state_HTF_des[6].h PARAM */ = data->simulationInfo->realParameter[559] /* powerBlock.exchanger.state_HTF_des[5].h PARAM */ + data->simulationInfo->realParameter[435] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 43
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[7]._h = powerBlock.exchanger.state_HTF_des[6].h + powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->simulationInfo->realParameter[561] /* powerBlock.exchanger.state_HTF_des[7].h PARAM */ = data->simulationInfo->realParameter[560] /* powerBlock.exchanger.state_HTF_des[6].h PARAM */ + data->simulationInfo->realParameter[435] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 44
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[8]._h = powerBlock.exchanger.state_HTF_des[7].h + powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->simulationInfo->realParameter[562] /* powerBlock.exchanger.state_HTF_des[8].h PARAM */ = data->simulationInfo->realParameter[561] /* powerBlock.exchanger.state_HTF_des[7].h PARAM */ + data->simulationInfo->realParameter[435] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 45
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[9]._h = powerBlock.exchanger.state_HTF_des[8].h + powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->simulationInfo->realParameter[563] /* powerBlock.exchanger.state_HTF_des[9].h PARAM */ = data->simulationInfo->realParameter[562] /* powerBlock.exchanger.state_HTF_des[8].h PARAM */ + data->simulationInfo->realParameter[435] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 46
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[10]._h = powerBlock.exchanger.state_HTF_des[9].h + powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->simulationInfo->realParameter[564] /* powerBlock.exchanger.state_HTF_des[10].h PARAM */ = data->simulationInfo->realParameter[563] /* powerBlock.exchanger.state_HTF_des[9].h PARAM */ + data->simulationInfo->realParameter[435] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 47
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[11]._h = powerBlock.exchanger.state_HTF_des[10].h + powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->simulationInfo->realParameter[565] /* powerBlock.exchanger.state_HTF_des[11].h PARAM */ = data->simulationInfo->realParameter[564] /* powerBlock.exchanger.state_HTF_des[10].h PARAM */ + data->simulationInfo->realParameter[435] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 48
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[12]._h = powerBlock.exchanger.state_HTF_des[11].h + powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->simulationInfo->realParameter[566] /* powerBlock.exchanger.state_HTF_des[12].h PARAM */ = data->simulationInfo->realParameter[565] /* powerBlock.exchanger.state_HTF_des[11].h PARAM */ + data->simulationInfo->realParameter[435] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 49
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[13]._h = powerBlock.exchanger.state_HTF_des[12].h + powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->simulationInfo->realParameter[567] /* powerBlock.exchanger.state_HTF_des[13].h PARAM */ = data->simulationInfo->realParameter[566] /* powerBlock.exchanger.state_HTF_des[12].h PARAM */ + data->simulationInfo->realParameter[435] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 50
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[14]._h = powerBlock.exchanger.state_HTF_des[13].h + powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->simulationInfo->realParameter[568] /* powerBlock.exchanger.state_HTF_des[14].h PARAM */ = data->simulationInfo->realParameter[567] /* powerBlock.exchanger.state_HTF_des[13].h PARAM */ + data->simulationInfo->realParameter[435] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}

void residualFunc65(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,65};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->simulationInfo->realParameter[556] /* powerBlock.exchanger.state_HTF_des[2].h PARAM */ = xloc[0];
  /* local constraints */
  sCO2PBCalculator_eqFunction_38(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_39(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_40(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_41(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_42(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_43(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_44(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_45(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_46(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_47(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_48(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_49(data, threadData);

  /* local constraints */
  sCO2PBCalculator_eqFunction_50(data, threadData);
  res[0] = data->simulationInfo->realParameter[569] /* powerBlock.exchanger.state_HTF_des[15].h PARAM */ + (-data->simulationInfo->realParameter[568] /* powerBlock.exchanger.state_HTF_des[14].h PARAM */) - data->simulationInfo->realParameter[435] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData65(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for powerBlock.exchanger.state_HTF_des[2].h */
  linearSystemData->nominal[i] = data->modelData->realParameterData[556].attribute /* powerBlock.exchanger.state_HTF_des[2].h */.nominal;
  linearSystemData->min[i]     = data->modelData->realParameterData[556].attribute /* powerBlock.exchanger.state_HTF_des[2].h */.min;
  linearSystemData->max[i++]   = data->modelData->realParameterData[556].attribute /* powerBlock.exchanger.state_HTF_des[2].h */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void sCO2PBCalculator_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[2].equationIndex = 502;
  linearSystemData[2].size = 1;
  linearSystemData[2].nnz = 0;
  linearSystemData[2].method = 1;
  linearSystemData[2].residualFunc = residualFunc502;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].analyticalJacobianColumn = sCO2PBCalculator_functionJacLSJac34_column;
  linearSystemData[2].initialAnalyticalJacobian = sCO2PBCalculator_initialAnalyticJacobianLSJac34;
  linearSystemData[2].jacobianIndex = 2 /*jacInx*/;
  linearSystemData[2].setA = NULL;//setLinearMatrixA502;
  linearSystemData[2].setb = NULL; //setLinearVectorb502;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData502;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 433;
  linearSystemData[1].size = 1;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;
  linearSystemData[1].residualFunc = residualFunc433;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = sCO2PBCalculator_functionJacLSJac20_column;
  linearSystemData[1].initialAnalyticalJacobian = sCO2PBCalculator_initialAnalyticJacobianLSJac20;
  linearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[1].setA = NULL;//setLinearMatrixA433;
  linearSystemData[1].setb = NULL; //setLinearVectorb433;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData433;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 65;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;
  linearSystemData[0].residualFunc = residualFunc65;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = sCO2PBCalculator_functionJacLSJac1_column;
  linearSystemData[0].initialAnalyticalJacobian = sCO2PBCalculator_initialAnalyticJacobianLSJac1;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;//setLinearMatrixA65;
  linearSystemData[0].setb = NULL; //setLinearVectorb65;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData65;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

