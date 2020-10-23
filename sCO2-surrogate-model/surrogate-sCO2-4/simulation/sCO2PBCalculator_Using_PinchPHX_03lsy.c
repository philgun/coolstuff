/* Linear Systems */
#include "sCO2PBCalculator_Using_PinchPHX_model.h"
#include "sCO2PBCalculator_Using_PinchPHX_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* linear systems */

/*
equation index: 520
type: SIMPLE_ASSIGN
powerBlock._exchanger._Q_HX_des = powerBlock.exchanger.state_HTF_des[15].h - powerBlock.exchanger.state_HTF_des[14].h
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */ = data->simulationInfo->realParameter[567] /* powerBlock.exchanger.state_HTF_des[15].h PARAM */ - data->simulationInfo->realParameter[566] /* powerBlock.exchanger.state_HTF_des[14].h PARAM */;
  TRACE_POP
}
/*
equation index: 521
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[13]._h = powerBlock.exchanger.state_HTF_des[14].h - powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->simulationInfo->realParameter[565] /* powerBlock.exchanger.state_HTF_des[13].h PARAM */ = data->simulationInfo->realParameter[566] /* powerBlock.exchanger.state_HTF_des[14].h PARAM */ - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 522
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[12]._h = powerBlock.exchanger.state_HTF_des[13].h - powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->simulationInfo->realParameter[564] /* powerBlock.exchanger.state_HTF_des[12].h PARAM */ = data->simulationInfo->realParameter[565] /* powerBlock.exchanger.state_HTF_des[13].h PARAM */ - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 523
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[11]._h = powerBlock.exchanger.state_HTF_des[12].h - powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->simulationInfo->realParameter[563] /* powerBlock.exchanger.state_HTF_des[11].h PARAM */ = data->simulationInfo->realParameter[564] /* powerBlock.exchanger.state_HTF_des[12].h PARAM */ - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 524
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[10]._h = powerBlock.exchanger.state_HTF_des[11].h - powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->simulationInfo->realParameter[562] /* powerBlock.exchanger.state_HTF_des[10].h PARAM */ = data->simulationInfo->realParameter[563] /* powerBlock.exchanger.state_HTF_des[11].h PARAM */ - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 525
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[9]._h = powerBlock.exchanger.state_HTF_des[10].h - powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->simulationInfo->realParameter[561] /* powerBlock.exchanger.state_HTF_des[9].h PARAM */ = data->simulationInfo->realParameter[562] /* powerBlock.exchanger.state_HTF_des[10].h PARAM */ - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 526
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[8]._h = powerBlock.exchanger.state_HTF_des[9].h - powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->simulationInfo->realParameter[560] /* powerBlock.exchanger.state_HTF_des[8].h PARAM */ = data->simulationInfo->realParameter[561] /* powerBlock.exchanger.state_HTF_des[9].h PARAM */ - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 527
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[7]._h = powerBlock.exchanger.state_HTF_des[8].h - powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->simulationInfo->realParameter[559] /* powerBlock.exchanger.state_HTF_des[7].h PARAM */ = data->simulationInfo->realParameter[560] /* powerBlock.exchanger.state_HTF_des[8].h PARAM */ - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 528
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[6]._h = powerBlock.exchanger.state_HTF_des[7].h - powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->simulationInfo->realParameter[558] /* powerBlock.exchanger.state_HTF_des[6].h PARAM */ = data->simulationInfo->realParameter[559] /* powerBlock.exchanger.state_HTF_des[7].h PARAM */ - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 529
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[5]._h = powerBlock.exchanger.state_HTF_des[6].h - powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->simulationInfo->realParameter[557] /* powerBlock.exchanger.state_HTF_des[5].h PARAM */ = data->simulationInfo->realParameter[558] /* powerBlock.exchanger.state_HTF_des[6].h PARAM */ - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 530
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[4]._h = powerBlock.exchanger.state_HTF_des[5].h - powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->simulationInfo->realParameter[556] /* powerBlock.exchanger.state_HTF_des[4].h PARAM */ = data->simulationInfo->realParameter[557] /* powerBlock.exchanger.state_HTF_des[5].h PARAM */ - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 531
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[3]._h = powerBlock.exchanger.state_HTF_des[4].h - powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->simulationInfo->realParameter[555] /* powerBlock.exchanger.state_HTF_des[3].h PARAM */ = data->simulationInfo->realParameter[556] /* powerBlock.exchanger.state_HTF_des[4].h PARAM */ - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
/*
equation index: 532
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[2]._h = powerBlock.exchanger.state_HTF_des[3].h - powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->simulationInfo->realParameter[554] /* powerBlock.exchanger.state_HTF_des[2].h PARAM */ = data->simulationInfo->realParameter[555] /* powerBlock.exchanger.state_HTF_des[3].h PARAM */ - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}

void residualFunc547(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,547};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->simulationInfo->realParameter[566] /* powerBlock.exchanger.state_HTF_des[14].h PARAM */ = xloc[0];
  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_520(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_521(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_522(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_523(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_524(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_525(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_526(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_527(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_528(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_529(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_530(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_531(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_532(data, threadData);
  res[0] = data->simulationInfo->realParameter[554] /* powerBlock.exchanger.state_HTF_des[2].h PARAM */ + (-data->simulationInfo->realParameter[553] /* powerBlock.exchanger.state_HTF_des[1].h PARAM */) - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData547(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for powerBlock.exchanger.state_HTF_des[14].h */
  linearSystemData->nominal[i] = data->modelData->realParameterData[566].attribute /* powerBlock.exchanger.state_HTF_des[14].h */.nominal;
  linearSystemData->min[i]     = data->modelData->realParameterData[566].attribute /* powerBlock.exchanger.state_HTF_des[14].h */.min;
  linearSystemData->max[i++]   = data->modelData->realParameterData[566].attribute /* powerBlock.exchanger.state_HTF_des[14].h */.max;
}


/*
equation index: 428
type: SIMPLE_ASSIGN
powerBlock._reCompressor._m_des = powerBlock.gamma * powerBlock.LTR.m_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,428};
  data->simulationInfo->realParameter[630] /* powerBlock.reCompressor.m_des PARAM */ = (data->simulationInfo->realParameter[586] /* powerBlock.gamma PARAM */) * (data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */);
  TRACE_POP
}
/*
equation index: 429
type: SIMPLE_ASSIGN
powerBlock._reCompressor._W_comp_des = powerBlock.reCompressor.m_des * (powerBlock.reCompressor.h_out_des - powerBlock.reCompressor.state_in_des.h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,429};
  data->simulationInfo->realParameter[625] /* powerBlock.reCompressor.W_comp_des PARAM */ = (data->simulationInfo->realParameter[630] /* powerBlock.reCompressor.m_des PARAM */) * (data->simulationInfo->realParameter[629] /* powerBlock.reCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[636] /* powerBlock.reCompressor.state_in_des.h PARAM */);
  TRACE_POP
}
/*
equation index: 430
type: SIMPLE_ASSIGN
powerBlock._cooler._m_des = powerBlock.LTR.m_turb_des * powerBlock.ratio_m_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,430};
  data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */ = (data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[619] /* powerBlock.ratio_m_des PARAM */);
  TRACE_POP
}
/*
equation index: 431
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._m_des = powerBlock.cooler.m_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,431};
  data->simulationInfo->realParameter[597] /* powerBlock.mainCompressor.m_des PARAM */ = data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */;
  TRACE_POP
}
/*
equation index: 432
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._W_comp_des = powerBlock.mainCompressor.m_des * (powerBlock.mainCompressor.h_out_des - powerBlock.mainCompressor.state_in_des.h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,432};
  data->simulationInfo->realParameter[592] /* powerBlock.mainCompressor.W_comp_des PARAM */ = (data->simulationInfo->realParameter[597] /* powerBlock.mainCompressor.m_des PARAM */) * (data->simulationInfo->realParameter[596] /* powerBlock.mainCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[603] /* powerBlock.mainCompressor.state_in_des.h PARAM */);
  TRACE_POP
}
/*
equation index: 433
type: SIMPLE_ASSIGN
powerBlock._turbine._W_turb_des = ((-150000000.0) / (1.0 - powerBlock.f_fixed_load) - (powerBlock.mainCompressor.W_comp_des + powerBlock.reCompressor.W_comp_des) * (1.0 - powerBlock.par_fr) * powerBlock.eta_motor) / (powerBlock.eta_motor * (1.0 - powerBlock.par_fr))
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,433};
  data->simulationInfo->realParameter[650] /* powerBlock.turbine.W_turb_des PARAM */ = DIVISION_SIM(DIVISION_SIM(-150000000.0,1.0 - data->simulationInfo->realParameter[583] /* powerBlock.f_fixed_load PARAM */,"1.0 - powerBlock.f_fixed_load",equationIndexes) - (((data->simulationInfo->realParameter[592] /* powerBlock.mainCompressor.W_comp_des PARAM */ + data->simulationInfo->realParameter[625] /* powerBlock.reCompressor.W_comp_des PARAM */) * (1.0 - data->simulationInfo->realParameter[610] /* powerBlock.par_fr PARAM */)) * (data->simulationInfo->realParameter[427] /* powerBlock.eta_motor PARAM */)),(data->simulationInfo->realParameter[427] /* powerBlock.eta_motor PARAM */) * (1.0 - data->simulationInfo->realParameter[610] /* powerBlock.par_fr PARAM */),"powerBlock.eta_motor * (1.0 - powerBlock.par_fr)",equationIndexes);
  TRACE_POP
}
/*
equation index: 434
type: SIMPLE_ASSIGN
powerBlock._turbine._m_des = powerBlock.turbine.W_turb_des / (powerBlock.turbine.h_out_des - powerBlock.turbine.state_in_des.h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  data->simulationInfo->realParameter[655] /* powerBlock.turbine.m_des PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[650] /* powerBlock.turbine.W_turb_des PARAM */,data->simulationInfo->realParameter[654] /* powerBlock.turbine.h_out_des PARAM */ - data->simulationInfo->realParameter[658] /* powerBlock.turbine.state_in_des.h PARAM */,"powerBlock.turbine.h_out_des - powerBlock.turbine.state_in_des.h",equationIndexes);
  TRACE_POP
}
/*
equation index: 435
type: SIMPLE_ASSIGN
powerBlock._HTR._m_turb_des = powerBlock.LTR.m_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */;
  TRACE_POP
}

void residualFunc444(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,444};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */ = xloc[0];
  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_428(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_429(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_430(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_431(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_432(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_433(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_434(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_435(data, threadData);
  res[0] = data->simulationInfo->realParameter[655] /* powerBlock.turbine.m_des PARAM */ - data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData444(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for powerBlock.LTR.m_turb_des */
  linearSystemData->nominal[i] = data->modelData->realParameterData[240].attribute /* powerBlock.LTR.m_turb_des */.nominal;
  linearSystemData->min[i]     = data->modelData->realParameterData[240].attribute /* powerBlock.LTR.m_turb_des */.min;
  linearSystemData->max[i++]   = data->modelData->realParameterData[240].attribute /* powerBlock.LTR.m_turb_des */.max;
}


/*
equation index: 348
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[2] = powerBlock.cooler.h_CO2_des[1] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,348};
  data->simulationInfo->realParameter[375] /* powerBlock.cooler.h_CO2_des[2] PARAM */ = data->simulationInfo->realParameter[374] /* powerBlock.cooler.h_CO2_des[1] PARAM */ + data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 349
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[3] = powerBlock.cooler.h_CO2_des[2] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,349};
  data->simulationInfo->realParameter[376] /* powerBlock.cooler.h_CO2_des[3] PARAM */ = data->simulationInfo->realParameter[375] /* powerBlock.cooler.h_CO2_des[2] PARAM */ + data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 350
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[4] = powerBlock.cooler.h_CO2_des[3] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,350};
  data->simulationInfo->realParameter[377] /* powerBlock.cooler.h_CO2_des[4] PARAM */ = data->simulationInfo->realParameter[376] /* powerBlock.cooler.h_CO2_des[3] PARAM */ + data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 351
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[5] = powerBlock.cooler.h_CO2_des[4] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,351};
  data->simulationInfo->realParameter[378] /* powerBlock.cooler.h_CO2_des[5] PARAM */ = data->simulationInfo->realParameter[377] /* powerBlock.cooler.h_CO2_des[4] PARAM */ + data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 352
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[6] = powerBlock.cooler.h_CO2_des[5] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,352};
  data->simulationInfo->realParameter[379] /* powerBlock.cooler.h_CO2_des[6] PARAM */ = data->simulationInfo->realParameter[378] /* powerBlock.cooler.h_CO2_des[5] PARAM */ + data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 353
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[7] = powerBlock.cooler.h_CO2_des[6] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,353};
  data->simulationInfo->realParameter[380] /* powerBlock.cooler.h_CO2_des[7] PARAM */ = data->simulationInfo->realParameter[379] /* powerBlock.cooler.h_CO2_des[6] PARAM */ + data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 354
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[8] = powerBlock.cooler.h_CO2_des[7] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,354};
  data->simulationInfo->realParameter[381] /* powerBlock.cooler.h_CO2_des[8] PARAM */ = data->simulationInfo->realParameter[380] /* powerBlock.cooler.h_CO2_des[7] PARAM */ + data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 355
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[9] = powerBlock.cooler.h_CO2_des[8] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,355};
  data->simulationInfo->realParameter[382] /* powerBlock.cooler.h_CO2_des[9] PARAM */ = data->simulationInfo->realParameter[381] /* powerBlock.cooler.h_CO2_des[8] PARAM */ + data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 356
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[10] = powerBlock.cooler.h_CO2_des[9] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,356};
  data->simulationInfo->realParameter[383] /* powerBlock.cooler.h_CO2_des[10] PARAM */ = data->simulationInfo->realParameter[382] /* powerBlock.cooler.h_CO2_des[9] PARAM */ + data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 357
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[11] = powerBlock.cooler.h_CO2_des[10] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,357};
  data->simulationInfo->realParameter[384] /* powerBlock.cooler.h_CO2_des[11] PARAM */ = data->simulationInfo->realParameter[383] /* powerBlock.cooler.h_CO2_des[10] PARAM */ + data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 358
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[12] = powerBlock.cooler.h_CO2_des[11] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,358};
  data->simulationInfo->realParameter[385] /* powerBlock.cooler.h_CO2_des[12] PARAM */ = data->simulationInfo->realParameter[384] /* powerBlock.cooler.h_CO2_des[11] PARAM */ + data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 359
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[13] = powerBlock.cooler.h_CO2_des[12] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,359};
  data->simulationInfo->realParameter[386] /* powerBlock.cooler.h_CO2_des[13] PARAM */ = data->simulationInfo->realParameter[385] /* powerBlock.cooler.h_CO2_des[12] PARAM */ + data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 360
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[14] = powerBlock.cooler.h_CO2_des[13] + powerBlock.cooler.Q_dis_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,360};
  data->simulationInfo->realParameter[387] /* powerBlock.cooler.h_CO2_des[14] PARAM */ = data->simulationInfo->realParameter[386] /* powerBlock.cooler.h_CO2_des[13] PARAM */ + data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}

void residualFunc375(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,375};
  ANALYTIC_JACOBIAN* jacobian = NULL;
  data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */ = xloc[0];
  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_348(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_349(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_350(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_351(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_352(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_353(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_354(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_355(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_356(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_357(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_358(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_359(data, threadData);

  /* local constraints */
  sCO2PBCalculator_Using_PinchPHX_eqFunction_360(data, threadData);
  res[0] = data->simulationInfo->realParameter[388] /* powerBlock.cooler.h_CO2_des[15] PARAM */ + (-data->simulationInfo->realParameter[387] /* powerBlock.cooler.h_CO2_des[14] PARAM */) - data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */;
  TRACE_POP
}
OMC_DISABLE_OPT
void initializeStaticLSData375(void *inData, threadData_t *threadData, void *systemData)
{
  DATA* data = (DATA*) inData;
  LINEAR_SYSTEM_DATA* linearSystemData = (LINEAR_SYSTEM_DATA*) systemData;
  int i=0;
  /* static ls data for powerBlock.cooler.Q_dis_des */
  linearSystemData->nominal[i] = data->modelData->realParameterData[324].attribute /* powerBlock.cooler.Q_dis_des */.nominal;
  linearSystemData->min[i]     = data->modelData->realParameterData[324].attribute /* powerBlock.cooler.Q_dis_des */.min;
  linearSystemData->max[i++]   = data->modelData->realParameterData[324].attribute /* powerBlock.cooler.Q_dis_des */.max;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize linear systems */
void sCO2PBCalculator_Using_PinchPHX_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA* linearSystemData)
{
  /* linear systems */
  assertStreamPrint(NULL, nLinearSystems > 2, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[2].equationIndex = 547;
  linearSystemData[2].size = 1;
  linearSystemData[2].nnz = 0;
  linearSystemData[2].method = 1;
  linearSystemData[2].residualFunc = residualFunc547;
  linearSystemData[2].strictTearingFunctionCall = NULL;
  linearSystemData[2].analyticalJacobianColumn = sCO2PBCalculator_Using_PinchPHX_functionJacLSJac22_column;
  linearSystemData[2].initialAnalyticalJacobian = sCO2PBCalculator_Using_PinchPHX_initialAnalyticJacobianLSJac22;
  linearSystemData[2].jacobianIndex = 2 /*jacInx*/;
  linearSystemData[2].setA = NULL;//setLinearMatrixA547;
  linearSystemData[2].setb = NULL; //setLinearVectorb547;
  linearSystemData[2].initializeStaticLSData = initializeStaticLSData547;
  linearSystemData[2].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 1, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[1].equationIndex = 444;
  linearSystemData[1].size = 1;
  linearSystemData[1].nnz = 0;
  linearSystemData[1].method = 1;
  linearSystemData[1].residualFunc = residualFunc444;
  linearSystemData[1].strictTearingFunctionCall = NULL;
  linearSystemData[1].analyticalJacobianColumn = sCO2PBCalculator_Using_PinchPHX_functionJacLSJac20_column;
  linearSystemData[1].initialAnalyticalJacobian = sCO2PBCalculator_Using_PinchPHX_initialAnalyticJacobianLSJac20;
  linearSystemData[1].jacobianIndex = 1 /*jacInx*/;
  linearSystemData[1].setA = NULL;//setLinearMatrixA444;
  linearSystemData[1].setb = NULL; //setLinearVectorb444;
  linearSystemData[1].initializeStaticLSData = initializeStaticLSData444;
  linearSystemData[1].parentJacobian = NULL;
  
  assertStreamPrint(NULL, nLinearSystems > 0, "Internal Error: indexlinearSystem mismatch!");
  linearSystemData[0].equationIndex = 375;
  linearSystemData[0].size = 1;
  linearSystemData[0].nnz = 0;
  linearSystemData[0].method = 1;
  linearSystemData[0].residualFunc = residualFunc375;
  linearSystemData[0].strictTearingFunctionCall = NULL;
  linearSystemData[0].analyticalJacobianColumn = sCO2PBCalculator_Using_PinchPHX_functionJacLSJac6_column;
  linearSystemData[0].initialAnalyticalJacobian = sCO2PBCalculator_Using_PinchPHX_initialAnalyticJacobianLSJac6;
  linearSystemData[0].jacobianIndex = 0 /*jacInx*/;
  linearSystemData[0].setA = NULL;//setLinearMatrixA375;
  linearSystemData[0].setb = NULL; //setLinearVectorb375;
  linearSystemData[0].initializeStaticLSData = initializeStaticLSData375;
  linearSystemData[0].parentJacobian = NULL;
}

#if defined(__cplusplus)
}
#endif

