/* Initialization */
#include "sCO2PBCalculator_Using_PinchPHX_model.h"
#include "sCO2PBCalculator_Using_PinchPHX_11mix.h"
#include "sCO2PBCalculator_Using_PinchPHX_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void sCO2PBCalculator_Using_PinchPHX_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
E_elec = $START.E_elec
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[0] /* E_elec STATE(1,P_elec) */ = data->modelData->realVarsData[0].attribute /* E_elec STATE(1,P_elec) */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._port_a._h_outflow = 0.0
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[259] /* powerBlock.mainCompressor.port_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
powerBlock._exchanger._CO2_port_a._h_outflow = 0.0
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[202] /* powerBlock.exchanger.CO2_port_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
powerBlock._reCompressor._port_a._h_outflow = 0.0
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[269] /* powerBlock.reCompressor.port_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
source._medium._R = 80.61759766268693
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[295] /* source.medium.R variable */ = 80.61759766268693;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
source._medium._MM = 0.10313381
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[294] /* source.medium.MM variable */ = 0.10313381;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
source._medium._X[1] = 0.2
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[298] /* source.medium.X[1] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
source._medium._X[2] = 0.2
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[299] /* source.medium.X[2] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
source._medium._X[3] = 0.2
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[300] /* source.medium.X[3] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
source._medium._X[4] = 0.2
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[301] /* source.medium.X[4] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
source._medium._X[5] = 0.2
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[302] /* source.medium.X[5] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
sink._medium._R = 80.61759766268693
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[282] /* sink.medium.R variable */ = 80.61759766268693;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
sink._medium._MM = 0.10313381
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[281] /* sink.medium.MM variable */ = 0.10313381;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
sink._medium._X[1] = 0.2
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[285] /* sink.medium.X[1] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
sink._medium._X[2] = 0.2
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[286] /* sink.medium.X[2] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
sink._medium._X[3] = 0.2
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[287] /* sink.medium.X[3] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
sink._medium._X[4] = 0.2
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[288] /* sink.medium.X[4] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
sink._medium._X[5] = 0.2
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[289] /* sink.medium.X[5] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
liftSimple._fluid_a._h_outflow = 0.0
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[36] /* liftSimple.fluid_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
powerBlock._exchanger._HTF_port_a._h_outflow = 0.0
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[204] /* powerBlock.exchanger.HTF_port_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
sink._medium._p_bar = 1e-05 * sink.p
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[291] /* sink.medium.p_bar variable */ = (1e-05) * (data->simulationInfo->realParameter[681] /* sink.p PARAM */);
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
source._state._h = if noEvent(source.T < 0.0) then 0.0 else -196601.368854 + 113.1902543343771 * source.T ^ 1.3093
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Less(data->simulationInfo->realParameter[684] /* source.T PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[684] /* source.T PARAM */;
    tmp2 = 1.3093;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = -196601.368854 + (113.1902543343771) * (tmp3);
  }
  data->localData[0]->realVars[307] /* source.state.h variable */ = tmp9;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
source._medium._u = -50.0 + source.state.h
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[305] /* source.medium.u variable */ = -50.0 + data->localData[0]->realVars[307] /* source.state.h variable */;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
source._medium._T = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(source.state.h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[296] /* source.medium.T variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[307] /* source.state.h variable */);
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
source._medium._T_degC = -273.15 + source.medium.T
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[297] /* source.medium.T_degC variable */ = -273.15 + data->localData[0]->realVars[296] /* source.medium.T variable */;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
powerBlock._exchanger._T_HTF_in = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(source.state.h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[207] /* powerBlock.exchanger.T_HTF_in variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[307] /* source.state.h variable */);
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
powerBlock._C_generator = 15.44538203362177 * powerBlock.pri_generator
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->simulationInfo->realParameter[33] /* powerBlock.C_generator PARAM */ = (15.44538203362177) * (data->simulationInfo->realParameter[616] /* powerBlock.pri_generator PARAM */);
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_in_HTF_des = SolarTherm.Media.SolidParticles.CarboHSP_utilities.h_T(powerBlock.T_HTF_in_des)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->simulationInfo->realParameter[498] /* powerBlock.exchanger.h_in_HTF_des PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_h__T(threadData, data->simulationInfo->realParameter[312] /* powerBlock.T_HTF_in_des PARAM */);
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
powerBlock._reCompressor._p_out_des = powerBlock.reCompressor.p_high_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->simulationInfo->realParameter[633] /* powerBlock.reCompressor.p_out_des PARAM */ = data->simulationInfo->realParameter[631] /* powerBlock.reCompressor.p_high_des PARAM */;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
powerBlock._reCompressor._state_isen_des._p = powerBlock.reCompressor.p_out_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->simulationInfo->realParameter[639] /* powerBlock.reCompressor.state_isen_des.p PARAM */ = data->simulationInfo->realParameter[633] /* powerBlock.reCompressor.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
_omcQuot_245354415254._powerBlock._reCompressor._p_out = powerBlock.reCompressor.p_out_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->modelData->realVarsData[267].attribute /* powerBlock.reCompressor.p_out variable */.start = data->simulationInfo->realParameter[633] /* powerBlock.reCompressor.p_out_des PARAM */;
    data->localData[0]->realVars[267] /* powerBlock.reCompressor.p_out variable */ = data->modelData->realVarsData[267].attribute /* powerBlock.reCompressor.p_out variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[267].info /* powerBlock.reCompressor.p_out */.name, (modelica_real) data->localData[0]->realVars[267] /* powerBlock.reCompressor.p_out variable */);
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[15]._h = powerBlock.exchanger.h_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->simulationInfo->realParameter[567] /* powerBlock.exchanger.state_HTF_des[15].h PARAM */ = data->simulationInfo->realParameter[498] /* powerBlock.exchanger.h_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
powerBlock._exchanger._T_CO2_des[15] = powerBlock.exchanger.T_out_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->simulationInfo->realParameter[448] /* powerBlock.exchanger.T_CO2_des[15] PARAM */ = data->simulationInfo->realParameter[465] /* powerBlock.exchanger.T_out_CO2_des PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_34(DATA*, threadData_t*);
/*
equation index: 35
indexNonlinear: 0
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[15]}
eqns: {34}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 35 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->simulationInfo->realParameter[463] /* powerBlock.exchanger.T_HTF_des[15] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,35};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 35 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[463] /* powerBlock.exchanger.T_HTF_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
powerBlock._cooler._P_cool_des = 3000000.0
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->simulationInfo->realParameter[321] /* powerBlock.cooler.P_cool_des PARAM */ = 3000000.0;
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
powerBlock._cooler._P_cooling = min(200.0 * exp(0.3537 * (-273.15 + T_amb_input)), powerBlock.cooler.P_cool_des)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[194] /* powerBlock.cooler.P_cooling variable */ = fmin((200.0) * (exp((0.3537) * (-273.15 + data->simulationInfo->realParameter[4] /* T_amb_input PARAM */))),data->simulationInfo->realParameter[321] /* powerBlock.cooler.P_cool_des PARAM */);
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
powerBlock._cooler._T_CO2_des[15] = powerBlock.cooler.T_low
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->simulationInfo->realParameter[339] /* powerBlock.cooler.T_CO2_des[15] PARAM */ = data->simulationInfo->realParameter[342] /* powerBlock.cooler.T_low PARAM */;
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[15] = powerBlock.cooler.T_CO2_des[15] - powerBlock.cooler.T_amb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
  data->simulationInfo->realParameter[372] /* powerBlock.cooler.deltaT_des[15] PARAM */ = data->simulationInfo->realParameter[339] /* powerBlock.cooler.T_CO2_des[15] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._p_out_des = powerBlock.mainCompressor.p_high_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->simulationInfo->realParameter[600] /* powerBlock.mainCompressor.p_out_des PARAM */ = data->simulationInfo->realParameter[598] /* powerBlock.mainCompressor.p_high_des PARAM */;
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._state_isen_des._p = powerBlock.mainCompressor.p_out_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->simulationInfo->realParameter[606] /* powerBlock.mainCompressor.state_isen_des.p PARAM */ = data->simulationInfo->realParameter[600] /* powerBlock.mainCompressor.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
powerBlock._LTR._p_in_comp_des = powerBlock.mainCompressor.p_out_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */ = data->simulationInfo->realParameter[600] /* powerBlock.mainCompressor.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[1]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->simulationInfo->realParameter[262] /* powerBlock.LTR.state_comp_des[1].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[2]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  data->simulationInfo->realParameter[263] /* powerBlock.LTR.state_comp_des[2].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[3]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->simulationInfo->realParameter[264] /* powerBlock.LTR.state_comp_des[3].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[4]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->simulationInfo->realParameter[265] /* powerBlock.LTR.state_comp_des[4].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[5]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->simulationInfo->realParameter[266] /* powerBlock.LTR.state_comp_des[5].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[6]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->simulationInfo->realParameter[267] /* powerBlock.LTR.state_comp_des[6].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[7]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->simulationInfo->realParameter[268] /* powerBlock.LTR.state_comp_des[7].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[8]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->simulationInfo->realParameter[269] /* powerBlock.LTR.state_comp_des[8].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[9]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->simulationInfo->realParameter[270] /* powerBlock.LTR.state_comp_des[9].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[10]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->simulationInfo->realParameter[271] /* powerBlock.LTR.state_comp_des[10].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[11]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->simulationInfo->realParameter[272] /* powerBlock.LTR.state_comp_des[11].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[12]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->simulationInfo->realParameter[273] /* powerBlock.LTR.state_comp_des[12].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[13]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->simulationInfo->realParameter[274] /* powerBlock.LTR.state_comp_des[13].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[14]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_56(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,56};
  data->simulationInfo->realParameter[275] /* powerBlock.LTR.state_comp_des[14].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[15]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  data->simulationInfo->realParameter[276] /* powerBlock.LTR.state_comp_des[15].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
powerBlock._LTR._p_out_comp_des = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
  data->simulationInfo->realParameter[243] /* powerBlock.LTR.p_out_comp_des PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
powerBlock._HTR._p_in_comp_des = powerBlock.ratio_m_des * powerBlock.LTR.p_out_comp_des + (1.0 - powerBlock.ratio_m_des) * powerBlock.reCompressor.p_out_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_59(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,59};
  data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */ = (data->simulationInfo->realParameter[619] /* powerBlock.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[243] /* powerBlock.LTR.p_out_comp_des PARAM */) + (1.0 - data->simulationInfo->realParameter[619] /* powerBlock.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[633] /* powerBlock.reCompressor.p_out_des PARAM */);
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
_omcQuot_245354415254._powerBlock._LTR._state_from_comp[15]._p = powerBlock.mainCompressor.p_out_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_60(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,60};
  data->modelData->realVarsData[189].attribute /* powerBlock.LTR.state_from_comp[15].p variable */.start = data->simulationInfo->realParameter[600] /* powerBlock.mainCompressor.p_out_des PARAM */;
    data->localData[0]->realVars[189] /* powerBlock.LTR.state_from_comp[15].p variable */ = data->modelData->realVarsData[189].attribute /* powerBlock.LTR.state_from_comp[15].p variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[189].info /* powerBlock.LTR.state_from_comp[15].p */.name, (modelica_real) data->localData[0]->realVars[189] /* powerBlock.LTR.state_from_comp[15].p variable */);
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
powerBlock._HTR._p_out_comp_des = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_61(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,61};
  data->simulationInfo->realParameter[108] /* powerBlock.HTR.p_out_comp_des PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
powerBlock._exchanger._p_in_CO2_des = powerBlock.HTR.p_out_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_62(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,62};
  data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */ = data->simulationInfo->realParameter[108] /* powerBlock.HTR.p_out_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[1]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_63(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,63};
  data->simulationInfo->realParameter[523] /* powerBlock.exchanger.state_CO2_des[1].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[2]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_64(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,64};
  data->simulationInfo->realParameter[524] /* powerBlock.exchanger.state_CO2_des[2].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 65
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[3]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  data->simulationInfo->realParameter[525] /* powerBlock.exchanger.state_CO2_des[3].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 66
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[4]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_66(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,66};
  data->simulationInfo->realParameter[526] /* powerBlock.exchanger.state_CO2_des[4].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 67
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[5]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  data->simulationInfo->realParameter[527] /* powerBlock.exchanger.state_CO2_des[5].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 68
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[6]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_68(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,68};
  data->simulationInfo->realParameter[528] /* powerBlock.exchanger.state_CO2_des[6].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 69
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[7]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  data->simulationInfo->realParameter[529] /* powerBlock.exchanger.state_CO2_des[7].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 70
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[8]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_70(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,70};
  data->simulationInfo->realParameter[530] /* powerBlock.exchanger.state_CO2_des[8].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 71
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[9]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  data->simulationInfo->realParameter[531] /* powerBlock.exchanger.state_CO2_des[9].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 72
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[10]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_72(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,72};
  data->simulationInfo->realParameter[532] /* powerBlock.exchanger.state_CO2_des[10].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 73
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[11]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  data->simulationInfo->realParameter[533] /* powerBlock.exchanger.state_CO2_des[11].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[12]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_74(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,74};
  data->simulationInfo->realParameter[534] /* powerBlock.exchanger.state_CO2_des[12].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[13]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  data->simulationInfo->realParameter[535] /* powerBlock.exchanger.state_CO2_des[13].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[14]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_76(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,76};
  data->simulationInfo->realParameter[536] /* powerBlock.exchanger.state_CO2_des[14].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[15]._h = SolarTherm.Media.CO2.CO2_utilities.h_p_T(powerBlock.exchanger.p_in_CO2_des, powerBlock.exchanger.T_CO2_des[15], tableIDh_p_T)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  data->simulationInfo->realParameter[522] /* powerBlock.exchanger.state_CO2_des[15].h PARAM */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[448] /* powerBlock.exchanger.T_CO2_des[15] PARAM */, data->simulationInfo->extObjs[38]);
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_out_CO2_des = powerBlock.exchanger.state_CO2_des[15].h
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_78(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,78};
  data->simulationInfo->realParameter[499] /* powerBlock.exchanger.h_out_CO2_des PARAM */ = data->simulationInfo->realParameter[522] /* powerBlock.exchanger.state_CO2_des[15].h PARAM */;
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
powerBlock._turbine._h_in_des = powerBlock.exchanger.h_out_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  data->simulationInfo->realParameter[653] /* powerBlock.turbine.h_in_des PARAM */ = data->simulationInfo->realParameter[499] /* powerBlock.exchanger.h_out_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
powerBlock._turbine._state_in_des._h = powerBlock.turbine.h_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_80(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,80};
  data->simulationInfo->realParameter[658] /* powerBlock.turbine.state_in_des.h PARAM */ = data->simulationInfo->realParameter[653] /* powerBlock.turbine.h_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
_omcQuot_245354415254._powerBlock._exchanger._h_CO2[15] = powerBlock.turbine.h_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  data->modelData->realVarsData[239].attribute /* powerBlock.exchanger.h_CO2[15] variable */.start = data->simulationInfo->realParameter[653] /* powerBlock.turbine.h_in_des PARAM */;
    data->localData[0]->realVars[239] /* powerBlock.exchanger.h_CO2[15] variable */ = data->modelData->realVarsData[239].attribute /* powerBlock.exchanger.h_CO2[15] variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[239].info /* powerBlock.exchanger.h_CO2[15] */.name, (modelica_real) data->localData[0]->realVars[239] /* powerBlock.exchanger.h_CO2[15] variable */);
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[15]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_82(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,82};
  data->simulationInfo->realParameter[537] /* powerBlock.exchanger.state_CO2_des[15].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[15] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[15].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[15].p, powerBlock.exchanger.state_CO2_des[15].h, tableIDT_p_h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  data->simulationInfo->realParameter[496] /* powerBlock.exchanger.deltaT_des[15] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[567] /* powerBlock.exchanger.state_HTF_des[15].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[537] /* powerBlock.exchanger.state_CO2_des[15].p PARAM */, data->simulationInfo->realParameter[522] /* powerBlock.exchanger.state_CO2_des[15].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
powerBlock._exchanger._p_out_CO2_des = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_84(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,84};
  data->simulationInfo->realParameter[505] /* powerBlock.exchanger.p_out_CO2_des PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
powerBlock._turbine._p_in_des = powerBlock.exchanger.p_out_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  data->simulationInfo->realParameter[656] /* powerBlock.turbine.p_in_des PARAM */ = data->simulationInfo->realParameter[505] /* powerBlock.exchanger.p_out_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 86
type: SIMPLE_ASSIGN
powerBlock._turbine._state_in_des._p = powerBlock.turbine.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  data->simulationInfo->realParameter[659] /* powerBlock.turbine.state_in_des.p PARAM */ = data->simulationInfo->realParameter[656] /* powerBlock.turbine.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 87
type: SIMPLE_ASSIGN
powerBlock._turbine._state_isen_des._h = SolarTherm.Media.CO2.CO2_utilities.h_p_s(powerBlock.turbine.p_in_des / powerBlock.turbine.PR, SolarTherm.Media.CO2.CO2_utilities.s_p_h(powerBlock.turbine.state_in_des.p, powerBlock.turbine.state_in_des.h, Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Entropy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)), tableIDh_p_s)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  data->simulationInfo->realParameter[660] /* powerBlock.turbine.state_isen_des.h PARAM */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__s(threadData, DIVISION_SIM(data->simulationInfo->realParameter[656] /* powerBlock.turbine.p_in_des PARAM */,data->simulationInfo->realParameter[648] /* powerBlock.turbine.PR PARAM */,"powerBlock.turbine.PR",equationIndexes), omc_SolarTherm_Media_CO2_CO2__utilities_s__p__h(threadData, data->simulationInfo->realParameter[659] /* powerBlock.turbine.state_in_des.p PARAM */, data->simulationInfo->realParameter[658] /* powerBlock.turbine.state_in_des.h PARAM */, omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT34, _OMC_LIT35, _OMC_LIT36, 1)), data->simulationInfo->extObjs[39]);
  TRACE_POP
}

/*
equation index: 88
type: SIMPLE_ASSIGN
powerBlock._turbine._h_out_des = powerBlock.turbine.state_in_des.h + (powerBlock.turbine.state_isen_des.h - powerBlock.turbine.state_in_des.h) * powerBlock.turbine.eta_design
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  data->simulationInfo->realParameter[654] /* powerBlock.turbine.h_out_des PARAM */ = data->simulationInfo->realParameter[658] /* powerBlock.turbine.state_in_des.h PARAM */ + (data->simulationInfo->realParameter[660] /* powerBlock.turbine.state_isen_des.h PARAM */ - data->simulationInfo->realParameter[658] /* powerBlock.turbine.state_in_des.h PARAM */) * (data->simulationInfo->realParameter[652] /* powerBlock.turbine.eta_design PARAM */);
  TRACE_POP
}

/*
equation index: 89
type: SIMPLE_ASSIGN
powerBlock._turbine._state_out_des._h = powerBlock.turbine.h_out_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  data->simulationInfo->realParameter[662] /* powerBlock.turbine.state_out_des.h PARAM */ = data->simulationInfo->realParameter[654] /* powerBlock.turbine.h_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 90
type: SIMPLE_ASSIGN
powerBlock._HTR._h_in_turb_des = powerBlock.turbine.h_out_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  data->simulationInfo->realParameter[101] /* powerBlock.HTR.h_in_turb_des PARAM */ = data->simulationInfo->realParameter[654] /* powerBlock.turbine.h_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 91
type: SIMPLE_ASSIGN
_omcQuot_24544D502456415224393124305824414253 = pre(powerBlock.turbine.C_spouting_des)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  data->localData[0]->realVars[4] /* $TMP$VAR$91$0X$ABS variable */ = data->simulationInfo->realParameter[646] /* powerBlock.turbine.C_spouting_des PARAM */;
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
powerBlock._turbine._C_spouting_des = $_signNoNull($TMP$VAR$91$0X$ABS) * abs((2.0 * (powerBlock.turbine.state_in_des.h - powerBlock.turbine.state_isen_des.h)) ^ 0.5)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  modelica_real tmp0;
  tmp0 = (2.0) * (data->simulationInfo->realParameter[658] /* powerBlock.turbine.state_in_des.h PARAM */ - data->simulationInfo->realParameter[660] /* powerBlock.turbine.state_isen_des.h PARAM */);
  if(!(tmp0 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(2.0 * (powerBlock.turbine.state_in_des.h - powerBlock.turbine.state_isen_des.h)) was %g should be >= 0", tmp0);
  }
  data->simulationInfo->realParameter[646] /* powerBlock.turbine.C_spouting_des PARAM */ = ((data->localData[0]->realVars[4] /* $TMP$VAR$91$0X$ABS variable */ >= 0.0 ? 1.0:-1.0)) * (fabs(sqrt(tmp0)));
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
powerBlock._turbine._tipSpeed_des = 0.707 * powerBlock.turbine.C_spouting_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  data->simulationInfo->realParameter[664] /* powerBlock.turbine.tipSpeed_des PARAM */ = (0.707) * (data->simulationInfo->realParameter[646] /* powerBlock.turbine.C_spouting_des PARAM */);
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
powerBlock._turbine._diam_turb = 2.0 * powerBlock.turbine.tipSpeed_des / powerBlock.turbine.N_shaft
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  data->simulationInfo->realParameter[651] /* powerBlock.turbine.diam_turb PARAM */ = DIVISION_SIM((2.0) * (data->simulationInfo->realParameter[664] /* powerBlock.turbine.tipSpeed_des PARAM */),data->simulationInfo->realParameter[647] /* powerBlock.turbine.N_shaft PARAM */,"powerBlock.turbine.N_shaft",equationIndexes);
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
_omcQuot_245354415254._powerBlock._turbine._C_spouting = powerBlock.turbine.C_spouting_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  data->modelData->realVarsData[275].attribute /* powerBlock.turbine.C_spouting variable */.start = data->simulationInfo->realParameter[646] /* powerBlock.turbine.C_spouting_des PARAM */;
    data->localData[0]->realVars[275] /* powerBlock.turbine.C_spouting variable */ = data->modelData->realVarsData[275].attribute /* powerBlock.turbine.C_spouting variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[275].info /* powerBlock.turbine.C_spouting */.name, (modelica_real) data->localData[0]->realVars[275] /* powerBlock.turbine.C_spouting variable */);
  TRACE_POP
}

/*
equation index: 96
type: SIMPLE_ASSIGN
powerBlock._turbine._state_isen_des._p = powerBlock.turbine.p_in_des / powerBlock.turbine.PR
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  data->simulationInfo->realParameter[661] /* powerBlock.turbine.state_isen_des.p PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[656] /* powerBlock.turbine.p_in_des PARAM */,data->simulationInfo->realParameter[648] /* powerBlock.turbine.PR PARAM */,"powerBlock.turbine.PR",equationIndexes);
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
powerBlock._turbine._p_out_des = powerBlock.turbine.p_in_des / powerBlock.turbine.PR
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->simulationInfo->realParameter[657] /* powerBlock.turbine.p_out_des PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[656] /* powerBlock.turbine.p_in_des PARAM */,data->simulationInfo->realParameter[648] /* powerBlock.turbine.PR PARAM */,"powerBlock.turbine.PR",equationIndexes);
  TRACE_POP
}

/*
equation index: 98
type: SIMPLE_ASSIGN
powerBlock._turbine._state_out_des._p = powerBlock.turbine.p_out_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  data->simulationInfo->realParameter[663] /* powerBlock.turbine.state_out_des.p PARAM */ = data->simulationInfo->realParameter[657] /* powerBlock.turbine.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 99
type: SIMPLE_ASSIGN
powerBlock._HTR._p_in_turb_des = powerBlock.turbine.p_out_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */ = data->simulationInfo->realParameter[657] /* powerBlock.turbine.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 100
type: SIMPLE_ASSIGN
powerBlock._HTR._p_out_turb_des = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  data->simulationInfo->realParameter[109] /* powerBlock.HTR.p_out_turb_des PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 101
type: SIMPLE_ASSIGN
powerBlock._LTR._p_in_turb_des = powerBlock.HTR.p_out_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */ = data->simulationInfo->realParameter[109] /* powerBlock.HTR.p_out_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 102
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[1]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  data->simulationInfo->realParameter[292] /* powerBlock.LTR.state_turb_des[1].p PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 103
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[2]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->simulationInfo->realParameter[293] /* powerBlock.LTR.state_turb_des[2].p PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[3]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->simulationInfo->realParameter[294] /* powerBlock.LTR.state_turb_des[3].p PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[4]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->simulationInfo->realParameter[295] /* powerBlock.LTR.state_turb_des[4].p PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[5]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->simulationInfo->realParameter[296] /* powerBlock.LTR.state_turb_des[5].p PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[6]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->simulationInfo->realParameter[297] /* powerBlock.LTR.state_turb_des[6].p PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[7]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->simulationInfo->realParameter[298] /* powerBlock.LTR.state_turb_des[7].p PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[8]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->simulationInfo->realParameter[299] /* powerBlock.LTR.state_turb_des[8].p PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 110
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[9]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->simulationInfo->realParameter[300] /* powerBlock.LTR.state_turb_des[9].p PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 111
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[10]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->simulationInfo->realParameter[301] /* powerBlock.LTR.state_turb_des[10].p PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[11]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  data->simulationInfo->realParameter[302] /* powerBlock.LTR.state_turb_des[11].p PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[12]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->simulationInfo->realParameter[303] /* powerBlock.LTR.state_turb_des[12].p PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[13]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->simulationInfo->realParameter[304] /* powerBlock.LTR.state_turb_des[13].p PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[14]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->simulationInfo->realParameter[305] /* powerBlock.LTR.state_turb_des[14].p PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[15]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->simulationInfo->realParameter[306] /* powerBlock.LTR.state_turb_des[15].p PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
powerBlock._LTR._p_out_turb_des = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->simulationInfo->realParameter[244] /* powerBlock.LTR.p_out_turb_des PARAM */ = data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
powerBlock._cooler._p_in_des = powerBlock.LTR.p_out_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */ = data->simulationInfo->realParameter[244] /* powerBlock.LTR.p_out_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[1]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->simulationInfo->realParameter[409] /* powerBlock.cooler.state_des[1].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[2]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->simulationInfo->realParameter[410] /* powerBlock.cooler.state_des[2].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[3]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->simulationInfo->realParameter[411] /* powerBlock.cooler.state_des[3].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[4]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->simulationInfo->realParameter[412] /* powerBlock.cooler.state_des[4].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[5]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->simulationInfo->realParameter[413] /* powerBlock.cooler.state_des[5].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[6]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->simulationInfo->realParameter[414] /* powerBlock.cooler.state_des[6].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[7]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->simulationInfo->realParameter[415] /* powerBlock.cooler.state_des[7].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[8]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->simulationInfo->realParameter[416] /* powerBlock.cooler.state_des[8].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[9]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->simulationInfo->realParameter[417] /* powerBlock.cooler.state_des[9].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[10]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->simulationInfo->realParameter[418] /* powerBlock.cooler.state_des[10].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[11]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->simulationInfo->realParameter[419] /* powerBlock.cooler.state_des[11].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[12]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->simulationInfo->realParameter[420] /* powerBlock.cooler.state_des[12].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[13]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->simulationInfo->realParameter[421] /* powerBlock.cooler.state_des[13].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[14]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->simulationInfo->realParameter[422] /* powerBlock.cooler.state_des[14].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[15]._h = SolarTherm.Media.CO2.CO2_utilities.h_p_T(powerBlock.cooler.p_in_des, powerBlock.cooler.T_CO2_des[15], tableIDh_p_T)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->simulationInfo->realParameter[408] /* powerBlock.cooler.state_des[15].h PARAM */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[339] /* powerBlock.cooler.T_CO2_des[15] PARAM */, data->simulationInfo->extObjs[38]);
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[15] = powerBlock.cooler.state_des[15].h
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->simulationInfo->realParameter[388] /* powerBlock.cooler.h_CO2_des[15] PARAM */ = data->simulationInfo->realParameter[408] /* powerBlock.cooler.state_des[15].h PARAM */;
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
powerBlock._cooler._h_out_des = powerBlock.cooler.h_CO2_des[15]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->simulationInfo->realParameter[390] /* powerBlock.cooler.h_out_des PARAM */ = data->simulationInfo->realParameter[388] /* powerBlock.cooler.h_CO2_des[15] PARAM */;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._h_in_des = powerBlock.cooler.h_out_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->simulationInfo->realParameter[595] /* powerBlock.mainCompressor.h_in_des PARAM */ = data->simulationInfo->realParameter[390] /* powerBlock.cooler.h_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._state_in_des._h = powerBlock.mainCompressor.h_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->simulationInfo->realParameter[603] /* powerBlock.mainCompressor.state_in_des.h PARAM */ = data->simulationInfo->realParameter[595] /* powerBlock.mainCompressor.h_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[15]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->simulationInfo->realParameter[423] /* powerBlock.cooler.state_des[15].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
powerBlock._cooler._p_out_des = powerBlock.cooler.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->simulationInfo->realParameter[393] /* powerBlock.cooler.p_out_des PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._p_in_des = powerBlock.cooler.p_out_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->simulationInfo->realParameter[599] /* powerBlock.mainCompressor.p_in_des PARAM */ = data->simulationInfo->realParameter[393] /* powerBlock.cooler.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._state_in_des._p = powerBlock.mainCompressor.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->simulationInfo->realParameter[604] /* powerBlock.mainCompressor.state_in_des.p PARAM */ = data->simulationInfo->realParameter[599] /* powerBlock.mainCompressor.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._state_isen_des._h = SolarTherm.Media.CO2.CO2_utilities.h_p_s(powerBlock.mainCompressor.p_out_des, SolarTherm.Media.CO2.CO2_utilities.s_p_h(powerBlock.mainCompressor.state_in_des.p, powerBlock.mainCompressor.state_in_des.h, Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Entropy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)), tableIDh_p_s)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->simulationInfo->realParameter[605] /* powerBlock.mainCompressor.state_isen_des.h PARAM */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__s(threadData, data->simulationInfo->realParameter[600] /* powerBlock.mainCompressor.p_out_des PARAM */, omc_SolarTherm_Media_CO2_CO2__utilities_s__p__h(threadData, data->simulationInfo->realParameter[604] /* powerBlock.mainCompressor.state_in_des.p PARAM */, data->simulationInfo->realParameter[603] /* powerBlock.mainCompressor.state_in_des.h PARAM */, omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT34, _OMC_LIT35, _OMC_LIT36, 1)), data->simulationInfo->extObjs[39]);
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._h_out_des = powerBlock.mainCompressor.state_in_des.h + (powerBlock.mainCompressor.state_isen_des.h - powerBlock.mainCompressor.state_in_des.h) / powerBlock.mainCompressor.eta_design
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->simulationInfo->realParameter[596] /* powerBlock.mainCompressor.h_out_des PARAM */ = data->simulationInfo->realParameter[603] /* powerBlock.mainCompressor.state_in_des.h PARAM */ + DIVISION_SIM(data->simulationInfo->realParameter[605] /* powerBlock.mainCompressor.state_isen_des.h PARAM */ - data->simulationInfo->realParameter[603] /* powerBlock.mainCompressor.state_in_des.h PARAM */,data->simulationInfo->realParameter[594] /* powerBlock.mainCompressor.eta_design PARAM */,"powerBlock.mainCompressor.eta_design",equationIndexes);
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
powerBlock._LTR._h_in_comp_des = powerBlock.mainCompressor.h_out_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->simulationInfo->realParameter[235] /* powerBlock.LTR.h_in_comp_des PARAM */ = data->simulationInfo->realParameter[596] /* powerBlock.mainCompressor.h_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[1]._h = powerBlock.LTR.h_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->simulationInfo->realParameter[247] /* powerBlock.LTR.state_comp_des[1].h PARAM */ = data->simulationInfo->realParameter[235] /* powerBlock.LTR.h_in_comp_des PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_146(DATA*, threadData_t*);
/*
equation index: 147
indexNonlinear: 1
type: NONLINEAR

vars: {powerBlock._LTR._T_comp_des[1]}
eqns: {146}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 147 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->simulationInfo->realParameter[175] /* powerBlock.LTR.T_comp_des[1] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,147};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 147 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[175] /* powerBlock.LTR.T_comp_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
powerBlock._reCompressor._p_in_des = powerBlock.LTR.p_out_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->simulationInfo->realParameter[632] /* powerBlock.reCompressor.p_in_des PARAM */ = data->simulationInfo->realParameter[244] /* powerBlock.LTR.p_out_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
powerBlock._reCompressor._state_in_des._p = powerBlock.reCompressor.p_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->simulationInfo->realParameter[637] /* powerBlock.reCompressor.state_in_des.p PARAM */ = data->simulationInfo->realParameter[632] /* powerBlock.reCompressor.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
_omcQuot_245354415254._powerBlock._LTR._state_from_turb[15]._p = powerBlock.turbine.p_out_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->modelData->realVarsData[190].attribute /* powerBlock.LTR.state_from_turb[15].p variable */.start = data->simulationInfo->realParameter[657] /* powerBlock.turbine.p_out_des PARAM */;
    data->localData[0]->realVars[190] /* powerBlock.LTR.state_from_turb[15].p variable */ = data->modelData->realVarsData[190].attribute /* powerBlock.LTR.state_from_turb[15].p variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[190].info /* powerBlock.LTR.state_from_turb[15].p */.name, (modelica_real) data->localData[0]->realVars[190] /* powerBlock.LTR.state_from_turb[15].p variable */);
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[15]._h = powerBlock.HTR.h_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->simulationInfo->realParameter[156] /* powerBlock.HTR.state_turb_des[15].h PARAM */ = data->simulationInfo->realParameter[101] /* powerBlock.HTR.h_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[15]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->simulationInfo->realParameter[141] /* powerBlock.HTR.state_comp_des[15].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[15]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->simulationInfo->realParameter[171] /* powerBlock.HTR.state_turb_des[15].p PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_154(DATA*, threadData_t*);
/*
equation index: 155
indexNonlinear: 2
type: NONLINEAR

vars: {powerBlock._HTR._T_turb_des[15]}
eqns: {154}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 155 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->simulationInfo->realParameter[69] /* powerBlock.HTR.T_turb_des[15] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,155};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 155 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[69] /* powerBlock.HTR.T_turb_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[14]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->simulationInfo->realParameter[140] /* powerBlock.HTR.state_comp_des[14].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[14]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->simulationInfo->realParameter[170] /* powerBlock.HTR.state_turb_des[14].p PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[13]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->simulationInfo->realParameter[139] /* powerBlock.HTR.state_comp_des[13].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[13]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->simulationInfo->realParameter[169] /* powerBlock.HTR.state_turb_des[13].p PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[12]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->simulationInfo->realParameter[138] /* powerBlock.HTR.state_comp_des[12].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[12]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->simulationInfo->realParameter[168] /* powerBlock.HTR.state_turb_des[12].p PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[11]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->simulationInfo->realParameter[137] /* powerBlock.HTR.state_comp_des[11].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[11]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->simulationInfo->realParameter[167] /* powerBlock.HTR.state_turb_des[11].p PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[10]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  data->simulationInfo->realParameter[136] /* powerBlock.HTR.state_comp_des[10].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[10]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->simulationInfo->realParameter[166] /* powerBlock.HTR.state_turb_des[10].p PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[9]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->simulationInfo->realParameter[135] /* powerBlock.HTR.state_comp_des[9].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[9]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->simulationInfo->realParameter[165] /* powerBlock.HTR.state_turb_des[9].p PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[8]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->simulationInfo->realParameter[134] /* powerBlock.HTR.state_comp_des[8].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[8]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->simulationInfo->realParameter[164] /* powerBlock.HTR.state_turb_des[8].p PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[7]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->simulationInfo->realParameter[133] /* powerBlock.HTR.state_comp_des[7].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[7]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->simulationInfo->realParameter[163] /* powerBlock.HTR.state_turb_des[7].p PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[6]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->simulationInfo->realParameter[132] /* powerBlock.HTR.state_comp_des[6].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[6]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->simulationInfo->realParameter[162] /* powerBlock.HTR.state_turb_des[6].p PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[5]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->simulationInfo->realParameter[131] /* powerBlock.HTR.state_comp_des[5].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[5]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->simulationInfo->realParameter[161] /* powerBlock.HTR.state_turb_des[5].p PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[4]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->simulationInfo->realParameter[130] /* powerBlock.HTR.state_comp_des[4].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[4]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->simulationInfo->realParameter[160] /* powerBlock.HTR.state_turb_des[4].p PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[3]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->simulationInfo->realParameter[129] /* powerBlock.HTR.state_comp_des[3].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[3]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->simulationInfo->realParameter[159] /* powerBlock.HTR.state_turb_des[3].p PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[2]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->simulationInfo->realParameter[128] /* powerBlock.HTR.state_comp_des[2].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[2]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->simulationInfo->realParameter[158] /* powerBlock.HTR.state_turb_des[2].p PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[1]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->simulationInfo->realParameter[127] /* powerBlock.HTR.state_comp_des[1].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[1]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->simulationInfo->realParameter[157] /* powerBlock.HTR.state_turb_des[1].p PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_184(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_185(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_186(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_187(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_188(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_189(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_190(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_191(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_192(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_193(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_194(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_195(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_196(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_197(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_198(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_199(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_200(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_201(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_202(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_203(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_204(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_205(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_206(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_207(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_208(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_209(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_210(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_211(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_212(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_213(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_214(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_215(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_216(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_217(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_218(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_219(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_220(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_221(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_222(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_223(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_224(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_225(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_226(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_227(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_228(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_229(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_230(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_231(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_232(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_233(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_234(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_235(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_236(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_237(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_238(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_239(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_240(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_241(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_242(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_243(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_244(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_245(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_246(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_247(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_248(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_249(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_250(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_251(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_252(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_253(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_254(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_255(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_256(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_257(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_258(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_259(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_260(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_261(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_262(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_263(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_264(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_265(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_266(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_267(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_268(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_269(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_270(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_271(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_272(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_273(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_274(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_275(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_276(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_277(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_278(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_279(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_340(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_339(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_338(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_337(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_336(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_335(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_334(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_333(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_332(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_331(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_330(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_329(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_328(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_327(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_326(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_325(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_324(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_323(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_322(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_321(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_320(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_319(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_318(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_317(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_316(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_315(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_314(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_313(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_312(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_311(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_310(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_309(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_308(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_307(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_306(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_305(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_304(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_303(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_302(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_301(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_300(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_299(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_298(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_297(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_296(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_295(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_294(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_293(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_292(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_291(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_290(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_289(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_288(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_287(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_286(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_285(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_284(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_283(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_282(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_281(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_280(DATA*, threadData_t*);
/*
equation index: 341
indexNonlinear: 3
type: NONLINEAR

vars: {powerBlock._HTR._T_comp_des[5], powerBlock._HTR._T_turb_des[5], powerBlock._HTR._T_comp_des[6], powerBlock._HTR._T_turb_des[6], powerBlock._HTR._T_comp_des[7], powerBlock._HTR._T_turb_des[7], powerBlock._HTR._T_comp_des[8], powerBlock._HTR._T_turb_des[8], powerBlock._HTR._T_comp_des[9], powerBlock._HTR._T_turb_des[9], powerBlock._HTR._T_comp_des[10], powerBlock._HTR._T_turb_des[10], powerBlock._HTR._T_comp_des[11], powerBlock._HTR._T_turb_des[11], powerBlock._HTR._T_comp_des[12], powerBlock._HTR._T_turb_des[12], powerBlock._HTR._T_comp_des[13], powerBlock._HTR._T_turb_des[13], powerBlock._HTR._T_comp_des[14], powerBlock._HTR._T_turb_des[14], powerBlock._HTR._T_comp_des[4], powerBlock._HTR._T_turb_des[4], powerBlock._HTR._T_comp_des[3], powerBlock._HTR._T_turb_des[3], powerBlock._HTR._T_comp_des[2], powerBlock._HTR._T_turb_des[2], powerBlock._HTR._T_comp_des[1], powerBlock._HTR._T_turb_des[1], powerBlock._LTR._T_turb_des[14], powerBlock._LTR._T_comp_des[14], powerBlock._LTR._T_turb_des[13], powerBlock._LTR._T_comp_des[13], powerBlock._LTR._T_turb_des[12], powerBlock._LTR._T_comp_des[12], powerBlock._LTR._T_turb_des[11], powerBlock._LTR._T_comp_des[11], powerBlock._LTR._T_turb_des[10], powerBlock._LTR._T_comp_des[10], powerBlock._LTR._T_turb_des[9], powerBlock._LTR._T_comp_des[9], powerBlock._LTR._T_turb_des[8], powerBlock._LTR._T_comp_des[8], powerBlock._LTR._T_turb_des[7], powerBlock._LTR._T_comp_des[7], powerBlock._LTR._T_turb_des[6], powerBlock._LTR._T_comp_des[6], powerBlock._LTR._T_turb_des[5], powerBlock._LTR._T_comp_des[5], powerBlock._LTR._T_turb_des[4], powerBlock._LTR._T_comp_des[4], powerBlock._LTR._T_turb_des[3], powerBlock._LTR._T_comp_des[3], powerBlock._LTR._deltaT_des[2], powerBlock._LTR._T_comp_des[2], powerBlock._LTR._T_turb_des[15], powerBlock._LTR._T_comp_des[15], powerBlock._LTR._T_turb_des[1], powerBlock._HTR._Q_dis_des, powerBlock._LTR._Q_dis_des, powerBlock._HTR._T_comp_des[15], powerBlock._reCompressor._state_in_des._h}
eqns: {184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 340, 339, 338, 337, 336, 335, 334, 333, 332, 331, 330, 329, 328, 327, 326, 325, 324, 323, 322, 321, 320, 319, 318, 317, 316, 315, 314, 313, 312, 311, 310, 309, 308, 307, 306, 305, 304, 303, 302, 301, 300, 299, 298, 297, 296, 295, 294, 293, 292, 291, 290, 289, 288, 287, 286, 285, 284, 283, 282, 281, 280}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,341};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 341 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->simulationInfo->realParameter[44] /* powerBlock.HTR.T_comp_des[5] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[1] = data->simulationInfo->realParameter[59] /* powerBlock.HTR.T_turb_des[5] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[2] = data->simulationInfo->realParameter[45] /* powerBlock.HTR.T_comp_des[6] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[3] = data->simulationInfo->realParameter[60] /* powerBlock.HTR.T_turb_des[6] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[4] = data->simulationInfo->realParameter[46] /* powerBlock.HTR.T_comp_des[7] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[5] = data->simulationInfo->realParameter[61] /* powerBlock.HTR.T_turb_des[7] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[6] = data->simulationInfo->realParameter[47] /* powerBlock.HTR.T_comp_des[8] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[7] = data->simulationInfo->realParameter[62] /* powerBlock.HTR.T_turb_des[8] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[8] = data->simulationInfo->realParameter[48] /* powerBlock.HTR.T_comp_des[9] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[9] = data->simulationInfo->realParameter[63] /* powerBlock.HTR.T_turb_des[9] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[10] = data->simulationInfo->realParameter[49] /* powerBlock.HTR.T_comp_des[10] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[11] = data->simulationInfo->realParameter[64] /* powerBlock.HTR.T_turb_des[10] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[12] = data->simulationInfo->realParameter[50] /* powerBlock.HTR.T_comp_des[11] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[13] = data->simulationInfo->realParameter[65] /* powerBlock.HTR.T_turb_des[11] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[14] = data->simulationInfo->realParameter[51] /* powerBlock.HTR.T_comp_des[12] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[15] = data->simulationInfo->realParameter[66] /* powerBlock.HTR.T_turb_des[12] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[16] = data->simulationInfo->realParameter[52] /* powerBlock.HTR.T_comp_des[13] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[17] = data->simulationInfo->realParameter[67] /* powerBlock.HTR.T_turb_des[13] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[18] = data->simulationInfo->realParameter[53] /* powerBlock.HTR.T_comp_des[14] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[19] = data->simulationInfo->realParameter[68] /* powerBlock.HTR.T_turb_des[14] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[20] = data->simulationInfo->realParameter[43] /* powerBlock.HTR.T_comp_des[4] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[21] = data->simulationInfo->realParameter[58] /* powerBlock.HTR.T_turb_des[4] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[22] = data->simulationInfo->realParameter[42] /* powerBlock.HTR.T_comp_des[3] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[23] = data->simulationInfo->realParameter[57] /* powerBlock.HTR.T_turb_des[3] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[24] = data->simulationInfo->realParameter[41] /* powerBlock.HTR.T_comp_des[2] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[25] = data->simulationInfo->realParameter[56] /* powerBlock.HTR.T_turb_des[2] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[26] = data->simulationInfo->realParameter[40] /* powerBlock.HTR.T_comp_des[1] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[27] = data->simulationInfo->realParameter[55] /* powerBlock.HTR.T_turb_des[1] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[28] = data->simulationInfo->realParameter[203] /* powerBlock.LTR.T_turb_des[14] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[29] = data->simulationInfo->realParameter[188] /* powerBlock.LTR.T_comp_des[14] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[30] = data->simulationInfo->realParameter[202] /* powerBlock.LTR.T_turb_des[13] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[31] = data->simulationInfo->realParameter[187] /* powerBlock.LTR.T_comp_des[13] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[32] = data->simulationInfo->realParameter[201] /* powerBlock.LTR.T_turb_des[12] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[33] = data->simulationInfo->realParameter[186] /* powerBlock.LTR.T_comp_des[12] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[34] = data->simulationInfo->realParameter[200] /* powerBlock.LTR.T_turb_des[11] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[35] = data->simulationInfo->realParameter[185] /* powerBlock.LTR.T_comp_des[11] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[36] = data->simulationInfo->realParameter[199] /* powerBlock.LTR.T_turb_des[10] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[37] = data->simulationInfo->realParameter[184] /* powerBlock.LTR.T_comp_des[10] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[38] = data->simulationInfo->realParameter[198] /* powerBlock.LTR.T_turb_des[9] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[39] = data->simulationInfo->realParameter[183] /* powerBlock.LTR.T_comp_des[9] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[40] = data->simulationInfo->realParameter[197] /* powerBlock.LTR.T_turb_des[8] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[41] = data->simulationInfo->realParameter[182] /* powerBlock.LTR.T_comp_des[8] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[42] = data->simulationInfo->realParameter[196] /* powerBlock.LTR.T_turb_des[7] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[43] = data->simulationInfo->realParameter[181] /* powerBlock.LTR.T_comp_des[7] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[44] = data->simulationInfo->realParameter[195] /* powerBlock.LTR.T_turb_des[6] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[45] = data->simulationInfo->realParameter[180] /* powerBlock.LTR.T_comp_des[6] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[46] = data->simulationInfo->realParameter[194] /* powerBlock.LTR.T_turb_des[5] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[47] = data->simulationInfo->realParameter[179] /* powerBlock.LTR.T_comp_des[5] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[48] = data->simulationInfo->realParameter[193] /* powerBlock.LTR.T_turb_des[4] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[49] = data->simulationInfo->realParameter[178] /* powerBlock.LTR.T_comp_des[4] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[50] = data->simulationInfo->realParameter[192] /* powerBlock.LTR.T_turb_des[3] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[51] = data->simulationInfo->realParameter[177] /* powerBlock.LTR.T_comp_des[3] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[52] = data->simulationInfo->realParameter[221] /* powerBlock.LTR.deltaT_des[2] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[53] = data->simulationInfo->realParameter[176] /* powerBlock.LTR.T_comp_des[2] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[54] = data->simulationInfo->realParameter[204] /* powerBlock.LTR.T_turb_des[15] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[55] = data->simulationInfo->realParameter[189] /* powerBlock.LTR.T_comp_des[15] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[56] = data->simulationInfo->realParameter[190] /* powerBlock.LTR.T_turb_des[1] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[57] = data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[58] = data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[59] = data->simulationInfo->realParameter[54] /* powerBlock.HTR.T_comp_des[15] PARAM */;
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[60] = data->simulationInfo->realParameter[636] /* powerBlock.reCompressor.state_in_des.h PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,341};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 341 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[44] /* powerBlock.HTR.T_comp_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  data->simulationInfo->realParameter[59] /* powerBlock.HTR.T_turb_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[1];
  data->simulationInfo->realParameter[45] /* powerBlock.HTR.T_comp_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[2];
  data->simulationInfo->realParameter[60] /* powerBlock.HTR.T_turb_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[3];
  data->simulationInfo->realParameter[46] /* powerBlock.HTR.T_comp_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[4];
  data->simulationInfo->realParameter[61] /* powerBlock.HTR.T_turb_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[5];
  data->simulationInfo->realParameter[47] /* powerBlock.HTR.T_comp_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[6];
  data->simulationInfo->realParameter[62] /* powerBlock.HTR.T_turb_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[7];
  data->simulationInfo->realParameter[48] /* powerBlock.HTR.T_comp_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[8];
  data->simulationInfo->realParameter[63] /* powerBlock.HTR.T_turb_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[9];
  data->simulationInfo->realParameter[49] /* powerBlock.HTR.T_comp_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[10];
  data->simulationInfo->realParameter[64] /* powerBlock.HTR.T_turb_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[11];
  data->simulationInfo->realParameter[50] /* powerBlock.HTR.T_comp_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[12];
  data->simulationInfo->realParameter[65] /* powerBlock.HTR.T_turb_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[13];
  data->simulationInfo->realParameter[51] /* powerBlock.HTR.T_comp_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[14];
  data->simulationInfo->realParameter[66] /* powerBlock.HTR.T_turb_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[15];
  data->simulationInfo->realParameter[52] /* powerBlock.HTR.T_comp_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[16];
  data->simulationInfo->realParameter[67] /* powerBlock.HTR.T_turb_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[17];
  data->simulationInfo->realParameter[53] /* powerBlock.HTR.T_comp_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[18];
  data->simulationInfo->realParameter[68] /* powerBlock.HTR.T_turb_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[19];
  data->simulationInfo->realParameter[43] /* powerBlock.HTR.T_comp_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[20];
  data->simulationInfo->realParameter[58] /* powerBlock.HTR.T_turb_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[21];
  data->simulationInfo->realParameter[42] /* powerBlock.HTR.T_comp_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[22];
  data->simulationInfo->realParameter[57] /* powerBlock.HTR.T_turb_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[23];
  data->simulationInfo->realParameter[41] /* powerBlock.HTR.T_comp_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[24];
  data->simulationInfo->realParameter[56] /* powerBlock.HTR.T_turb_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[25];
  data->simulationInfo->realParameter[40] /* powerBlock.HTR.T_comp_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[26];
  data->simulationInfo->realParameter[55] /* powerBlock.HTR.T_turb_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[27];
  data->simulationInfo->realParameter[203] /* powerBlock.LTR.T_turb_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[28];
  data->simulationInfo->realParameter[188] /* powerBlock.LTR.T_comp_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[29];
  data->simulationInfo->realParameter[202] /* powerBlock.LTR.T_turb_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[30];
  data->simulationInfo->realParameter[187] /* powerBlock.LTR.T_comp_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[31];
  data->simulationInfo->realParameter[201] /* powerBlock.LTR.T_turb_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[32];
  data->simulationInfo->realParameter[186] /* powerBlock.LTR.T_comp_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[33];
  data->simulationInfo->realParameter[200] /* powerBlock.LTR.T_turb_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[34];
  data->simulationInfo->realParameter[185] /* powerBlock.LTR.T_comp_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[35];
  data->simulationInfo->realParameter[199] /* powerBlock.LTR.T_turb_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[36];
  data->simulationInfo->realParameter[184] /* powerBlock.LTR.T_comp_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[37];
  data->simulationInfo->realParameter[198] /* powerBlock.LTR.T_turb_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[38];
  data->simulationInfo->realParameter[183] /* powerBlock.LTR.T_comp_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[39];
  data->simulationInfo->realParameter[197] /* powerBlock.LTR.T_turb_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[40];
  data->simulationInfo->realParameter[182] /* powerBlock.LTR.T_comp_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[41];
  data->simulationInfo->realParameter[196] /* powerBlock.LTR.T_turb_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[42];
  data->simulationInfo->realParameter[181] /* powerBlock.LTR.T_comp_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[43];
  data->simulationInfo->realParameter[195] /* powerBlock.LTR.T_turb_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[44];
  data->simulationInfo->realParameter[180] /* powerBlock.LTR.T_comp_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[45];
  data->simulationInfo->realParameter[194] /* powerBlock.LTR.T_turb_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[46];
  data->simulationInfo->realParameter[179] /* powerBlock.LTR.T_comp_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[47];
  data->simulationInfo->realParameter[193] /* powerBlock.LTR.T_turb_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[48];
  data->simulationInfo->realParameter[178] /* powerBlock.LTR.T_comp_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[49];
  data->simulationInfo->realParameter[192] /* powerBlock.LTR.T_turb_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[50];
  data->simulationInfo->realParameter[177] /* powerBlock.LTR.T_comp_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[51];
  data->simulationInfo->realParameter[221] /* powerBlock.LTR.deltaT_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[52];
  data->simulationInfo->realParameter[176] /* powerBlock.LTR.T_comp_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[53];
  data->simulationInfo->realParameter[204] /* powerBlock.LTR.T_turb_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[54];
  data->simulationInfo->realParameter[189] /* powerBlock.LTR.T_comp_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[55];
  data->simulationInfo->realParameter[190] /* powerBlock.LTR.T_turb_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[56];
  data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[57];
  data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[58];
  data->simulationInfo->realParameter[54] /* powerBlock.HTR.T_comp_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[59];
  data->simulationInfo->realParameter[636] /* powerBlock.reCompressor.state_in_des.h PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[60];
  TRACE_POP
}

/*
equation index: 342
type: SIMPLE_ASSIGN
powerBlock._cooler._h_in_des = powerBlock.LTR.h_out_turb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,342};
  data->simulationInfo->realParameter[389] /* powerBlock.cooler.h_in_des PARAM */ = data->simulationInfo->realParameter[238] /* powerBlock.LTR.h_out_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 343
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[1] = powerBlock.cooler.h_in_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,343};
  data->simulationInfo->realParameter[374] /* powerBlock.cooler.h_CO2_des[1] PARAM */ = data->simulationInfo->realParameter[389] /* powerBlock.cooler.h_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 344
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[1]._h = powerBlock.cooler.h_CO2_des[1]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,344};
  data->simulationInfo->realParameter[394] /* powerBlock.cooler.state_des[1].h PARAM */ = data->simulationInfo->realParameter[374] /* powerBlock.cooler.h_CO2_des[1] PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_345(DATA*, threadData_t*);
/*
equation index: 346
indexNonlinear: 4
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[1]}
eqns: {345}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_346(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,346};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 346 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->simulationInfo->realParameter[325] /* powerBlock.cooler.T_CO2_des[1] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,346};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 346 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[325] /* powerBlock.cooler.T_CO2_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  TRACE_POP
}

/*
equation index: 347
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[1] = powerBlock.cooler.T_CO2_des[1] - powerBlock.cooler.T_amb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,347};
  data->simulationInfo->realParameter[358] /* powerBlock.cooler.deltaT_des[1] PARAM */ = data->simulationInfo->realParameter[325] /* powerBlock.cooler.T_CO2_des[1] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 375
type: LINEAR

<var>powerBlock._cooler._Q_dis_des</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void sCO2PBCalculator_Using_PinchPHX_eqFunction_375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,375};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 375 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,375};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 375 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */ = aux_x[0];
  TRACE_POP
}

/*
equation index: 376
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[2]._h = powerBlock.cooler.h_CO2_des[2]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,376};
  data->simulationInfo->realParameter[395] /* powerBlock.cooler.state_des[2].h PARAM */ = data->simulationInfo->realParameter[375] /* powerBlock.cooler.h_CO2_des[2] PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_377(DATA*, threadData_t*);
/*
equation index: 378
indexNonlinear: 5
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[2]}
eqns: {377}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,378};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 378 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->simulationInfo->realParameter[326] /* powerBlock.cooler.T_CO2_des[2] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,378};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 378 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[326] /* powerBlock.cooler.T_CO2_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  TRACE_POP
}

/*
equation index: 379
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[2] = powerBlock.cooler.T_CO2_des[2] - powerBlock.cooler.T_amb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,379};
  data->simulationInfo->realParameter[359] /* powerBlock.cooler.deltaT_des[2] PARAM */ = data->simulationInfo->realParameter[326] /* powerBlock.cooler.T_CO2_des[2] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 380
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[3]._h = powerBlock.cooler.h_CO2_des[3]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,380};
  data->simulationInfo->realParameter[396] /* powerBlock.cooler.state_des[3].h PARAM */ = data->simulationInfo->realParameter[376] /* powerBlock.cooler.h_CO2_des[3] PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_381(DATA*, threadData_t*);
/*
equation index: 382
indexNonlinear: 6
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[3]}
eqns: {381}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,382};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 382 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = data->simulationInfo->realParameter[327] /* powerBlock.cooler.T_CO2_des[3] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,382};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 382 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[327] /* powerBlock.cooler.T_CO2_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  TRACE_POP
}

/*
equation index: 383
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[3] = powerBlock.cooler.T_CO2_des[3] - powerBlock.cooler.T_amb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,383};
  data->simulationInfo->realParameter[360] /* powerBlock.cooler.deltaT_des[3] PARAM */ = data->simulationInfo->realParameter[327] /* powerBlock.cooler.T_CO2_des[3] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 384
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[4]._h = powerBlock.cooler.h_CO2_des[4]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,384};
  data->simulationInfo->realParameter[397] /* powerBlock.cooler.state_des[4].h PARAM */ = data->simulationInfo->realParameter[377] /* powerBlock.cooler.h_CO2_des[4] PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_385(DATA*, threadData_t*);
/*
equation index: 386
indexNonlinear: 7
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[4]}
eqns: {385}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,386};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 386 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[0] = data->simulationInfo->realParameter[328] /* powerBlock.cooler.T_CO2_des[4] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 7);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,386};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 386 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[328] /* powerBlock.cooler.T_CO2_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[7].nlsx[0];
  TRACE_POP
}

/*
equation index: 387
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[4] = powerBlock.cooler.T_CO2_des[4] - powerBlock.cooler.T_amb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,387};
  data->simulationInfo->realParameter[361] /* powerBlock.cooler.deltaT_des[4] PARAM */ = data->simulationInfo->realParameter[328] /* powerBlock.cooler.T_CO2_des[4] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 388
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[5]._h = powerBlock.cooler.h_CO2_des[5]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,388};
  data->simulationInfo->realParameter[398] /* powerBlock.cooler.state_des[5].h PARAM */ = data->simulationInfo->realParameter[378] /* powerBlock.cooler.h_CO2_des[5] PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_389(DATA*, threadData_t*);
/*
equation index: 390
indexNonlinear: 8
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[5]}
eqns: {389}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,390};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 390 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[0] = data->simulationInfo->realParameter[329] /* powerBlock.cooler.T_CO2_des[5] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 8);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,390};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 390 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[329] /* powerBlock.cooler.T_CO2_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[8].nlsx[0];
  TRACE_POP
}

/*
equation index: 391
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[5] = powerBlock.cooler.T_CO2_des[5] - powerBlock.cooler.T_amb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,391};
  data->simulationInfo->realParameter[362] /* powerBlock.cooler.deltaT_des[5] PARAM */ = data->simulationInfo->realParameter[329] /* powerBlock.cooler.T_CO2_des[5] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 392
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[6]._h = powerBlock.cooler.h_CO2_des[6]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,392};
  data->simulationInfo->realParameter[399] /* powerBlock.cooler.state_des[6].h PARAM */ = data->simulationInfo->realParameter[379] /* powerBlock.cooler.h_CO2_des[6] PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_393(DATA*, threadData_t*);
/*
equation index: 394
indexNonlinear: 9
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[6]}
eqns: {393}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,394};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 394 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[0] = data->simulationInfo->realParameter[330] /* powerBlock.cooler.T_CO2_des[6] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 9);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,394};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 394 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[330] /* powerBlock.cooler.T_CO2_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[9].nlsx[0];
  TRACE_POP
}

/*
equation index: 395
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[6] = powerBlock.cooler.T_CO2_des[6] - powerBlock.cooler.T_amb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,395};
  data->simulationInfo->realParameter[363] /* powerBlock.cooler.deltaT_des[6] PARAM */ = data->simulationInfo->realParameter[330] /* powerBlock.cooler.T_CO2_des[6] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 396
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[7]._h = powerBlock.cooler.h_CO2_des[7]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,396};
  data->simulationInfo->realParameter[400] /* powerBlock.cooler.state_des[7].h PARAM */ = data->simulationInfo->realParameter[380] /* powerBlock.cooler.h_CO2_des[7] PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_397(DATA*, threadData_t*);
/*
equation index: 398
indexNonlinear: 10
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[7]}
eqns: {397}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,398};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 398 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[10].nlsxOld[0] = data->simulationInfo->realParameter[331] /* powerBlock.cooler.T_CO2_des[7] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 10);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,398};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 398 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[331] /* powerBlock.cooler.T_CO2_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[10].nlsx[0];
  TRACE_POP
}

/*
equation index: 399
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[7] = powerBlock.cooler.T_CO2_des[7] - powerBlock.cooler.T_amb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  data->simulationInfo->realParameter[364] /* powerBlock.cooler.deltaT_des[7] PARAM */ = data->simulationInfo->realParameter[331] /* powerBlock.cooler.T_CO2_des[7] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[8]._h = powerBlock.cooler.h_CO2_des[8]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->simulationInfo->realParameter[401] /* powerBlock.cooler.state_des[8].h PARAM */ = data->simulationInfo->realParameter[381] /* powerBlock.cooler.h_CO2_des[8] PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_401(DATA*, threadData_t*);
/*
equation index: 402
indexNonlinear: 11
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[8]}
eqns: {401}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 402 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[11].nlsxOld[0] = data->simulationInfo->realParameter[332] /* powerBlock.cooler.T_CO2_des[8] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 11);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,402};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 402 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[332] /* powerBlock.cooler.T_CO2_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[11].nlsx[0];
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[8] = powerBlock.cooler.T_CO2_des[8] - powerBlock.cooler.T_amb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->simulationInfo->realParameter[365] /* powerBlock.cooler.deltaT_des[8] PARAM */ = data->simulationInfo->realParameter[332] /* powerBlock.cooler.T_CO2_des[8] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 404
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[9]._h = powerBlock.cooler.h_CO2_des[9]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,404};
  data->simulationInfo->realParameter[402] /* powerBlock.cooler.state_des[9].h PARAM */ = data->simulationInfo->realParameter[382] /* powerBlock.cooler.h_CO2_des[9] PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_405(DATA*, threadData_t*);
/*
equation index: 406
indexNonlinear: 12
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[9]}
eqns: {405}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,406};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 406 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[12].nlsxOld[0] = data->simulationInfo->realParameter[333] /* powerBlock.cooler.T_CO2_des[9] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 12);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,406};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 406 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[333] /* powerBlock.cooler.T_CO2_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[12].nlsx[0];
  TRACE_POP
}

/*
equation index: 407
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[9] = powerBlock.cooler.T_CO2_des[9] - powerBlock.cooler.T_amb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,407};
  data->simulationInfo->realParameter[366] /* powerBlock.cooler.deltaT_des[9] PARAM */ = data->simulationInfo->realParameter[333] /* powerBlock.cooler.T_CO2_des[9] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 408
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[10]._h = powerBlock.cooler.h_CO2_des[10]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,408};
  data->simulationInfo->realParameter[403] /* powerBlock.cooler.state_des[10].h PARAM */ = data->simulationInfo->realParameter[383] /* powerBlock.cooler.h_CO2_des[10] PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_409(DATA*, threadData_t*);
/*
equation index: 410
indexNonlinear: 13
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[10]}
eqns: {409}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,410};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 410 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[13].nlsxOld[0] = data->simulationInfo->realParameter[334] /* powerBlock.cooler.T_CO2_des[10] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 13);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,410};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 410 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[334] /* powerBlock.cooler.T_CO2_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[13].nlsx[0];
  TRACE_POP
}

/*
equation index: 411
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[10] = powerBlock.cooler.T_CO2_des[10] - powerBlock.cooler.T_amb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,411};
  data->simulationInfo->realParameter[367] /* powerBlock.cooler.deltaT_des[10] PARAM */ = data->simulationInfo->realParameter[334] /* powerBlock.cooler.T_CO2_des[10] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 412
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[11]._h = powerBlock.cooler.h_CO2_des[11]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,412};
  data->simulationInfo->realParameter[404] /* powerBlock.cooler.state_des[11].h PARAM */ = data->simulationInfo->realParameter[384] /* powerBlock.cooler.h_CO2_des[11] PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_413(DATA*, threadData_t*);
/*
equation index: 414
indexNonlinear: 14
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[11]}
eqns: {413}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,414};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 414 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[14].nlsxOld[0] = data->simulationInfo->realParameter[335] /* powerBlock.cooler.T_CO2_des[11] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 14);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,414};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 414 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[335] /* powerBlock.cooler.T_CO2_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[14].nlsx[0];
  TRACE_POP
}

/*
equation index: 415
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[11] = powerBlock.cooler.T_CO2_des[11] - powerBlock.cooler.T_amb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,415};
  data->simulationInfo->realParameter[368] /* powerBlock.cooler.deltaT_des[11] PARAM */ = data->simulationInfo->realParameter[335] /* powerBlock.cooler.T_CO2_des[11] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 416
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[12]._h = powerBlock.cooler.h_CO2_des[12]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,416};
  data->simulationInfo->realParameter[405] /* powerBlock.cooler.state_des[12].h PARAM */ = data->simulationInfo->realParameter[385] /* powerBlock.cooler.h_CO2_des[12] PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_417(DATA*, threadData_t*);
/*
equation index: 418
indexNonlinear: 15
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[12]}
eqns: {417}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,418};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 418 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[0] = data->simulationInfo->realParameter[336] /* powerBlock.cooler.T_CO2_des[12] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 15);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,418};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 418 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[336] /* powerBlock.cooler.T_CO2_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[0];
  TRACE_POP
}

/*
equation index: 419
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[12] = powerBlock.cooler.T_CO2_des[12] - powerBlock.cooler.T_amb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,419};
  data->simulationInfo->realParameter[369] /* powerBlock.cooler.deltaT_des[12] PARAM */ = data->simulationInfo->realParameter[336] /* powerBlock.cooler.T_CO2_des[12] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 420
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[13]._h = powerBlock.cooler.h_CO2_des[13]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,420};
  data->simulationInfo->realParameter[406] /* powerBlock.cooler.state_des[13].h PARAM */ = data->simulationInfo->realParameter[386] /* powerBlock.cooler.h_CO2_des[13] PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_421(DATA*, threadData_t*);
/*
equation index: 422
indexNonlinear: 16
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[13]}
eqns: {421}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,422};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 422 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[0] = data->simulationInfo->realParameter[337] /* powerBlock.cooler.T_CO2_des[13] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 16);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,422};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 422 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[337] /* powerBlock.cooler.T_CO2_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[0];
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[13] = powerBlock.cooler.T_CO2_des[13] - powerBlock.cooler.T_amb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,423};
  data->simulationInfo->realParameter[370] /* powerBlock.cooler.deltaT_des[13] PARAM */ = data->simulationInfo->realParameter[337] /* powerBlock.cooler.T_CO2_des[13] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[14]._h = powerBlock.cooler.h_CO2_des[14]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,424};
  data->simulationInfo->realParameter[407] /* powerBlock.cooler.state_des[14].h PARAM */ = data->simulationInfo->realParameter[387] /* powerBlock.cooler.h_CO2_des[14] PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_425(DATA*, threadData_t*);
/*
equation index: 426
indexNonlinear: 17
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[14]}
eqns: {425}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,426};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 426 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[17].nlsxOld[0] = data->simulationInfo->realParameter[338] /* powerBlock.cooler.T_CO2_des[14] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 17);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,426};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 426 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[338] /* powerBlock.cooler.T_CO2_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[17].nlsx[0];
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[14] = powerBlock.cooler.T_CO2_des[14] - powerBlock.cooler.T_amb_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,427};
  data->simulationInfo->realParameter[371] /* powerBlock.cooler.deltaT_des[14] PARAM */ = data->simulationInfo->realParameter[338] /* powerBlock.cooler.T_CO2_des[14] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 444
type: LINEAR

<var>powerBlock._LTR._m_turb_des</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void sCO2PBCalculator_Using_PinchPHX_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 444 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,444};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 444 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */ = aux_x[0];
  TRACE_POP
}

/*
equation index: 445
type: SIMPLE_ASSIGN
powerBlock._reCompressor._diam_rotor = 1.259921049894873 * (powerBlock.reCompressor.m_des / (powerBlock.reCompressor.phi_opt * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.reCompressor.state_in_des.p, powerBlock.reCompressor.state_in_des.h, tableIDd_p_h) * powerBlock.reCompressor.N_design)) ^ 0.3333333333333333
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[630] /* powerBlock.reCompressor.m_des PARAM */,((data->simulationInfo->realParameter[634] /* powerBlock.reCompressor.phi_opt PARAM */) * (omc_SolarTherm_Media_CO2_CO2__utilities_rho__p__h(threadData, data->simulationInfo->realParameter[637] /* powerBlock.reCompressor.state_in_des.p PARAM */, data->simulationInfo->realParameter[636] /* powerBlock.reCompressor.state_in_des.h PARAM */, data->simulationInfo->extObjs[37]))) * (data->simulationInfo->realParameter[621] /* powerBlock.reCompressor.N_design PARAM */),"powerBlock.reCompressor.phi_opt * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.reCompressor.state_in_des.p, powerBlock.reCompressor.state_in_des.h, tableIDd_p_h) * powerBlock.reCompressor.N_design",equationIndexes);
  tmp1 = 0.3333333333333333;
  if(tmp0 < 0.0 && tmp1 != 0.0)
  {
    tmp3 = modf(tmp1, &tmp4);
    
    if(tmp3 > 0.5)
    {
      tmp3 -= 1.0;
      tmp4 += 1.0;
    }
    else if(tmp3 < -0.5)
    {
      tmp3 += 1.0;
      tmp4 -= 1.0;
    }
    
    if(fabs(tmp3) < 1e-10)
      tmp2 = pow(tmp0, tmp4);
    else
    {
      tmp6 = modf(1.0/tmp1, &tmp5);
      if(tmp6 > 0.5)
      {
        tmp6 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp6 < -0.5)
      {
        tmp6 += 1.0;
        tmp5 -= 1.0;
      }
      if(fabs(tmp6) < 1e-10 && ((unsigned long)tmp5 & 1))
      {
        tmp2 = -pow(-tmp0, tmp3)*pow(tmp0, tmp4);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
      }
    }
  }
  else
  {
    tmp2 = pow(tmp0, tmp1);
  }
  if(isnan(tmp2) || isinf(tmp2))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp0, tmp1);
  }
  data->simulationInfo->realParameter[626] /* powerBlock.reCompressor.diam_rotor PARAM */ = (1.259921049894873) * (tmp2);
  TRACE_POP
}

/*
equation index: 446
type: SIMPLE_ASSIGN
powerBlock._reCompressor._tipSpeed = 0.5 * powerBlock.reCompressor.diam_rotor * powerBlock.reCompressor.N_design
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  data->simulationInfo->realParameter[640] /* powerBlock.reCompressor.tipSpeed PARAM */ = (0.5) * ((data->simulationInfo->realParameter[626] /* powerBlock.reCompressor.diam_rotor PARAM */) * (data->simulationInfo->realParameter[621] /* powerBlock.reCompressor.N_design PARAM */));
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
powerBlock._reCompressor._psi_des = (powerBlock.reCompressor.state_isen_des.h - powerBlock.reCompressor.state_in_des.h) / powerBlock.reCompressor.tipSpeed ^ 2.0
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  modelica_real tmp7;
  tmp7 = data->simulationInfo->realParameter[640] /* powerBlock.reCompressor.tipSpeed PARAM */;
  data->simulationInfo->realParameter[635] /* powerBlock.reCompressor.psi_des PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[638] /* powerBlock.reCompressor.state_isen_des.h PARAM */ - data->simulationInfo->realParameter[636] /* powerBlock.reCompressor.state_in_des.h PARAM */,(tmp7 * tmp7),"powerBlock.reCompressor.tipSpeed ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 448
type: SIMPLE_ASSIGN
powerBlock._LTR._Q_HX_des = 14.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,448};
  data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_HX_des PARAM */ = (14.0) * ((data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */));
  TRACE_POP
}

/*
equation index: 449
type: SIMPLE_ASSIGN
powerBlock._turbine._A_nozzle = powerBlock.turbine.m_des / (powerBlock.turbine.C_spouting_des * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.turbine.state_out_des.p, powerBlock.turbine.state_out_des.h, tableIDd_p_h))
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  data->simulationInfo->realParameter[645] /* powerBlock.turbine.A_nozzle PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[655] /* powerBlock.turbine.m_des PARAM */,(data->simulationInfo->realParameter[646] /* powerBlock.turbine.C_spouting_des PARAM */) * (omc_SolarTherm_Media_CO2_CO2__utilities_rho__p__h(threadData, data->simulationInfo->realParameter[663] /* powerBlock.turbine.state_out_des.p PARAM */, data->simulationInfo->realParameter[662] /* powerBlock.turbine.state_out_des.h PARAM */, data->simulationInfo->extObjs[37])),"powerBlock.turbine.C_spouting_des * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.turbine.state_out_des.p, powerBlock.turbine.state_out_des.h, tableIDd_p_h)",equationIndexes);
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
powerBlock._C_turbine = powerBlock.pri_turbine * ((-0.001) * powerBlock.turbine.W_turb_des) ^ 0.5886
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  tmp8 = (-0.001) * (data->simulationInfo->realParameter[650] /* powerBlock.turbine.W_turb_des PARAM */);
  tmp9 = 0.5886;
  if(tmp8 < 0.0 && tmp9 != 0.0)
  {
    tmp11 = modf(tmp9, &tmp12);
    
    if(tmp11 > 0.5)
    {
      tmp11 -= 1.0;
      tmp12 += 1.0;
    }
    else if(tmp11 < -0.5)
    {
      tmp11 += 1.0;
      tmp12 -= 1.0;
    }
    
    if(fabs(tmp11) < 1e-10)
      tmp10 = pow(tmp8, tmp12);
    else
    {
      tmp14 = modf(1.0/tmp9, &tmp13);
      if(tmp14 > 0.5)
      {
        tmp14 -= 1.0;
        tmp13 += 1.0;
      }
      else if(tmp14 < -0.5)
      {
        tmp14 += 1.0;
        tmp13 -= 1.0;
      }
      if(fabs(tmp14) < 1e-10 && ((unsigned long)tmp13 & 1))
      {
        tmp10 = -pow(-tmp8, tmp11)*pow(tmp8, tmp12);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
      }
    }
  }
  else
  {
    tmp10 = pow(tmp8, tmp9);
  }
  if(isnan(tmp10) || isinf(tmp10))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp8, tmp9);
  }
  data->simulationInfo->realParameter[36] /* powerBlock.C_turbine PARAM */ = (data->simulationInfo->realParameter[618] /* powerBlock.pri_turbine PARAM */) * (tmp10);
  TRACE_POP
}

/*
equation index: 451
type: SIMPLE_ASSIGN
powerBlock._exchanger._m_CO2_des = powerBlock.turbine.m_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_CO2_des PARAM */ = data->simulationInfo->realParameter[655] /* powerBlock.turbine.m_des PARAM */;
  TRACE_POP
}

/*
equation index: 452
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[1] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[1] + powerBlock.cooler.deltaT_des[2])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  data->simulationInfo->realParameter[344] /* powerBlock.cooler.UA_dis[1] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[358] /* powerBlock.cooler.deltaT_des[1] PARAM */ + data->simulationInfo->realParameter[359] /* powerBlock.cooler.deltaT_des[2] PARAM */,"powerBlock.cooler.deltaT_des[1] + powerBlock.cooler.deltaT_des[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[2] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[2] + powerBlock.cooler.deltaT_des[3])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  data->simulationInfo->realParameter[345] /* powerBlock.cooler.UA_dis[2] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[359] /* powerBlock.cooler.deltaT_des[2] PARAM */ + data->simulationInfo->realParameter[360] /* powerBlock.cooler.deltaT_des[3] PARAM */,"powerBlock.cooler.deltaT_des[2] + powerBlock.cooler.deltaT_des[3]",equationIndexes);
  TRACE_POP
}

/*
equation index: 454
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[3] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[3] + powerBlock.cooler.deltaT_des[4])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,454};
  data->simulationInfo->realParameter[346] /* powerBlock.cooler.UA_dis[3] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[360] /* powerBlock.cooler.deltaT_des[3] PARAM */ + data->simulationInfo->realParameter[361] /* powerBlock.cooler.deltaT_des[4] PARAM */,"powerBlock.cooler.deltaT_des[3] + powerBlock.cooler.deltaT_des[4]",equationIndexes);
  TRACE_POP
}

/*
equation index: 455
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[4] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[4] + powerBlock.cooler.deltaT_des[5])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  data->simulationInfo->realParameter[347] /* powerBlock.cooler.UA_dis[4] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[361] /* powerBlock.cooler.deltaT_des[4] PARAM */ + data->simulationInfo->realParameter[362] /* powerBlock.cooler.deltaT_des[5] PARAM */,"powerBlock.cooler.deltaT_des[4] + powerBlock.cooler.deltaT_des[5]",equationIndexes);
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[5] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[5] + powerBlock.cooler.deltaT_des[6])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->simulationInfo->realParameter[348] /* powerBlock.cooler.UA_dis[5] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[362] /* powerBlock.cooler.deltaT_des[5] PARAM */ + data->simulationInfo->realParameter[363] /* powerBlock.cooler.deltaT_des[6] PARAM */,"powerBlock.cooler.deltaT_des[5] + powerBlock.cooler.deltaT_des[6]",equationIndexes);
  TRACE_POP
}

/*
equation index: 457
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[6] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[6] + powerBlock.cooler.deltaT_des[7])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  data->simulationInfo->realParameter[349] /* powerBlock.cooler.UA_dis[6] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[363] /* powerBlock.cooler.deltaT_des[6] PARAM */ + data->simulationInfo->realParameter[364] /* powerBlock.cooler.deltaT_des[7] PARAM */,"powerBlock.cooler.deltaT_des[6] + powerBlock.cooler.deltaT_des[7]",equationIndexes);
  TRACE_POP
}

/*
equation index: 458
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[7] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[7] + powerBlock.cooler.deltaT_des[8])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  data->simulationInfo->realParameter[350] /* powerBlock.cooler.UA_dis[7] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[364] /* powerBlock.cooler.deltaT_des[7] PARAM */ + data->simulationInfo->realParameter[365] /* powerBlock.cooler.deltaT_des[8] PARAM */,"powerBlock.cooler.deltaT_des[7] + powerBlock.cooler.deltaT_des[8]",equationIndexes);
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[8] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[8] + powerBlock.cooler.deltaT_des[9])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->simulationInfo->realParameter[351] /* powerBlock.cooler.UA_dis[8] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[365] /* powerBlock.cooler.deltaT_des[8] PARAM */ + data->simulationInfo->realParameter[366] /* powerBlock.cooler.deltaT_des[9] PARAM */,"powerBlock.cooler.deltaT_des[8] + powerBlock.cooler.deltaT_des[9]",equationIndexes);
  TRACE_POP
}

/*
equation index: 460
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[9] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[9] + powerBlock.cooler.deltaT_des[10])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,460};
  data->simulationInfo->realParameter[352] /* powerBlock.cooler.UA_dis[9] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[366] /* powerBlock.cooler.deltaT_des[9] PARAM */ + data->simulationInfo->realParameter[367] /* powerBlock.cooler.deltaT_des[10] PARAM */,"powerBlock.cooler.deltaT_des[9] + powerBlock.cooler.deltaT_des[10]",equationIndexes);
  TRACE_POP
}

/*
equation index: 461
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[10] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[10] + powerBlock.cooler.deltaT_des[11])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  data->simulationInfo->realParameter[353] /* powerBlock.cooler.UA_dis[10] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[367] /* powerBlock.cooler.deltaT_des[10] PARAM */ + data->simulationInfo->realParameter[368] /* powerBlock.cooler.deltaT_des[11] PARAM */,"powerBlock.cooler.deltaT_des[10] + powerBlock.cooler.deltaT_des[11]",equationIndexes);
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[11] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[11] + powerBlock.cooler.deltaT_des[12])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->simulationInfo->realParameter[354] /* powerBlock.cooler.UA_dis[11] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[368] /* powerBlock.cooler.deltaT_des[11] PARAM */ + data->simulationInfo->realParameter[369] /* powerBlock.cooler.deltaT_des[12] PARAM */,"powerBlock.cooler.deltaT_des[11] + powerBlock.cooler.deltaT_des[12]",equationIndexes);
  TRACE_POP
}

/*
equation index: 463
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[12] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[12] + powerBlock.cooler.deltaT_des[13])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  data->simulationInfo->realParameter[355] /* powerBlock.cooler.UA_dis[12] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[369] /* powerBlock.cooler.deltaT_des[12] PARAM */ + data->simulationInfo->realParameter[370] /* powerBlock.cooler.deltaT_des[13] PARAM */,"powerBlock.cooler.deltaT_des[12] + powerBlock.cooler.deltaT_des[13]",equationIndexes);
  TRACE_POP
}

/*
equation index: 464
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[13] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[13] + powerBlock.cooler.deltaT_des[14])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  data->simulationInfo->realParameter[356] /* powerBlock.cooler.UA_dis[13] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[370] /* powerBlock.cooler.deltaT_des[13] PARAM */ + data->simulationInfo->realParameter[371] /* powerBlock.cooler.deltaT_des[14] PARAM */,"powerBlock.cooler.deltaT_des[13] + powerBlock.cooler.deltaT_des[14]",equationIndexes);
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[14] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[14] + powerBlock.cooler.deltaT_des[15])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->simulationInfo->realParameter[357] /* powerBlock.cooler.UA_dis[14] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[371] /* powerBlock.cooler.deltaT_des[14] PARAM */ + data->simulationInfo->realParameter[372] /* powerBlock.cooler.deltaT_des[15] PARAM */,"powerBlock.cooler.deltaT_des[14] + powerBlock.cooler.deltaT_des[15]",equationIndexes);
  TRACE_POP
}

/*
equation index: 466
type: SIMPLE_ASSIGN
powerBlock._cooler._Q_cooler_des = 14.0 * powerBlock.cooler.Q_dis_des * powerBlock.cooler.m_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,466};
  data->simulationInfo->realParameter[323] /* powerBlock.cooler.Q_cooler_des PARAM */ = (14.0) * ((data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */) * (data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */));
  TRACE_POP
}

/*
equation index: 467
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_cooler = abs(powerBlock.cooler.Q_cooler_des) / (log((powerBlock.cooler.T_CO2_des[1] - powerBlock.cooler.T_amb_des) / (powerBlock.cooler.T_CO2_des[15] - powerBlock.cooler.T_amb_des)) * (powerBlock.cooler.T_CO2_des[1] - powerBlock.cooler.T_amb_des) * (powerBlock.cooler.T_CO2_des[15] - powerBlock.cooler.T_amb_des))
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  modelica_real tmp15;
  tmp15 = DIVISION_SIM(data->simulationInfo->realParameter[325] /* powerBlock.cooler.T_CO2_des[1] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */,data->simulationInfo->realParameter[339] /* powerBlock.cooler.T_CO2_des[15] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */,"powerBlock.cooler.T_CO2_des[15] - powerBlock.cooler.T_amb_des",equationIndexes);
  if(!(tmp15 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((powerBlock.cooler.T_CO2_des[1] - powerBlock.cooler.T_amb_des) / (powerBlock.cooler.T_CO2_des[15] - powerBlock.cooler.T_amb_des)) was %g should be > 0", tmp15);
  }
  data->simulationInfo->realParameter[343] /* powerBlock.cooler.UA_cooler PARAM */ = DIVISION_SIM(fabs(data->simulationInfo->realParameter[323] /* powerBlock.cooler.Q_cooler_des PARAM */),((log(tmp15)) * (data->simulationInfo->realParameter[325] /* powerBlock.cooler.T_CO2_des[1] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */)) * (data->simulationInfo->realParameter[339] /* powerBlock.cooler.T_CO2_des[15] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */),"log((powerBlock.cooler.T_CO2_des[1] - powerBlock.cooler.T_amb_des) / (powerBlock.cooler.T_CO2_des[15] - powerBlock.cooler.T_amb_des)) * (powerBlock.cooler.T_CO2_des[1] - powerBlock.cooler.T_amb_des) * (powerBlock.cooler.T_CO2_des[15] - powerBlock.cooler.T_amb_des)",equationIndexes);
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
powerBlock._C_cooler = powerBlock.pri_cooler * powerBlock.cooler.UA_cooler ^ 0.8919
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  tmp16 = data->simulationInfo->realParameter[343] /* powerBlock.cooler.UA_cooler PARAM */;
  tmp17 = 0.8919;
  if(tmp16 < 0.0 && tmp17 != 0.0)
  {
    tmp19 = modf(tmp17, &tmp20);
    
    if(tmp19 > 0.5)
    {
      tmp19 -= 1.0;
      tmp20 += 1.0;
    }
    else if(tmp19 < -0.5)
    {
      tmp19 += 1.0;
      tmp20 -= 1.0;
    }
    
    if(fabs(tmp19) < 1e-10)
      tmp18 = pow(tmp16, tmp20);
    else
    {
      tmp22 = modf(1.0/tmp17, &tmp21);
      if(tmp22 > 0.5)
      {
        tmp22 -= 1.0;
        tmp21 += 1.0;
      }
      else if(tmp22 < -0.5)
      {
        tmp22 += 1.0;
        tmp21 -= 1.0;
      }
      if(fabs(tmp22) < 1e-10 && ((unsigned long)tmp21 & 1))
      {
        tmp18 = -pow(-tmp16, tmp19)*pow(tmp16, tmp20);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp16, tmp17);
      }
    }
  }
  else
  {
    tmp18 = pow(tmp16, tmp17);
  }
  if(isnan(tmp18) || isinf(tmp18))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp16, tmp17);
  }
  data->simulationInfo->realParameter[31] /* powerBlock.C_cooler PARAM */ = (data->simulationInfo->realParameter[614] /* powerBlock.pri_cooler PARAM */) * (tmp18);
  TRACE_POP
}

/*
equation index: 469
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._diam_rotor = 1.259921049894873 * (powerBlock.mainCompressor.m_des / (powerBlock.mainCompressor.phi_opt * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.mainCompressor.state_in_des.p, powerBlock.mainCompressor.state_in_des.h, tableIDd_p_h) * powerBlock.mainCompressor.N_design)) ^ 0.3333333333333333
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  tmp23 = DIVISION_SIM(data->simulationInfo->realParameter[597] /* powerBlock.mainCompressor.m_des PARAM */,((data->simulationInfo->realParameter[601] /* powerBlock.mainCompressor.phi_opt PARAM */) * (omc_SolarTherm_Media_CO2_CO2__utilities_rho__p__h(threadData, data->simulationInfo->realParameter[604] /* powerBlock.mainCompressor.state_in_des.p PARAM */, data->simulationInfo->realParameter[603] /* powerBlock.mainCompressor.state_in_des.h PARAM */, data->simulationInfo->extObjs[37]))) * (data->simulationInfo->realParameter[588] /* powerBlock.mainCompressor.N_design PARAM */),"powerBlock.mainCompressor.phi_opt * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.mainCompressor.state_in_des.p, powerBlock.mainCompressor.state_in_des.h, tableIDd_p_h) * powerBlock.mainCompressor.N_design",equationIndexes);
  tmp24 = 0.3333333333333333;
  if(tmp23 < 0.0 && tmp24 != 0.0)
  {
    tmp26 = modf(tmp24, &tmp27);
    
    if(tmp26 > 0.5)
    {
      tmp26 -= 1.0;
      tmp27 += 1.0;
    }
    else if(tmp26 < -0.5)
    {
      tmp26 += 1.0;
      tmp27 -= 1.0;
    }
    
    if(fabs(tmp26) < 1e-10)
      tmp25 = pow(tmp23, tmp27);
    else
    {
      tmp29 = modf(1.0/tmp24, &tmp28);
      if(tmp29 > 0.5)
      {
        tmp29 -= 1.0;
        tmp28 += 1.0;
      }
      else if(tmp29 < -0.5)
      {
        tmp29 += 1.0;
        tmp28 -= 1.0;
      }
      if(fabs(tmp29) < 1e-10 && ((unsigned long)tmp28 & 1))
      {
        tmp25 = -pow(-tmp23, tmp26)*pow(tmp23, tmp27);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp23, tmp24);
      }
    }
  }
  else
  {
    tmp25 = pow(tmp23, tmp24);
  }
  if(isnan(tmp25) || isinf(tmp25))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp23, tmp24);
  }
  data->simulationInfo->realParameter[593] /* powerBlock.mainCompressor.diam_rotor PARAM */ = (1.259921049894873) * (tmp25);
  TRACE_POP
}

/*
equation index: 470
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._tipSpeed = 0.5 * powerBlock.mainCompressor.diam_rotor * powerBlock.mainCompressor.N_design
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  data->simulationInfo->realParameter[607] /* powerBlock.mainCompressor.tipSpeed PARAM */ = (0.5) * ((data->simulationInfo->realParameter[593] /* powerBlock.mainCompressor.diam_rotor PARAM */) * (data->simulationInfo->realParameter[588] /* powerBlock.mainCompressor.N_design PARAM */));
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._psi_des = (powerBlock.mainCompressor.state_isen_des.h - powerBlock.mainCompressor.state_in_des.h) / powerBlock.mainCompressor.tipSpeed ^ 2.0
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  modelica_real tmp30;
  tmp30 = data->simulationInfo->realParameter[607] /* powerBlock.mainCompressor.tipSpeed PARAM */;
  data->simulationInfo->realParameter[602] /* powerBlock.mainCompressor.psi_des PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[605] /* powerBlock.mainCompressor.state_isen_des.h PARAM */ - data->simulationInfo->realParameter[603] /* powerBlock.mainCompressor.state_in_des.h PARAM */,(tmp30 * tmp30),"powerBlock.mainCompressor.tipSpeed ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
powerBlock._C_reCompressor = powerBlock.pri_compressor * (0.001 * powerBlock.reCompressor.W_comp_des) ^ 0.9142
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  tmp31 = (0.001) * (data->simulationInfo->realParameter[625] /* powerBlock.reCompressor.W_comp_des PARAM */);
  tmp32 = 0.9142;
  if(tmp31 < 0.0 && tmp32 != 0.0)
  {
    tmp34 = modf(tmp32, &tmp35);
    
    if(tmp34 > 0.5)
    {
      tmp34 -= 1.0;
      tmp35 += 1.0;
    }
    else if(tmp34 < -0.5)
    {
      tmp34 += 1.0;
      tmp35 -= 1.0;
    }
    
    if(fabs(tmp34) < 1e-10)
      tmp33 = pow(tmp31, tmp35);
    else
    {
      tmp37 = modf(1.0/tmp32, &tmp36);
      if(tmp37 > 0.5)
      {
        tmp37 -= 1.0;
        tmp36 += 1.0;
      }
      else if(tmp37 < -0.5)
      {
        tmp37 += 1.0;
        tmp36 -= 1.0;
      }
      if(fabs(tmp37) < 1e-10 && ((unsigned long)tmp36 & 1))
      {
        tmp33 = -pow(-tmp31, tmp34)*pow(tmp31, tmp35);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp31, tmp32);
      }
    }
  }
  else
  {
    tmp33 = pow(tmp31, tmp32);
  }
  if(isnan(tmp33) || isinf(tmp33))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp31, tmp32);
  }
  data->simulationInfo->realParameter[35] /* powerBlock.C_reCompressor PARAM */ = (data->simulationInfo->realParameter[613] /* powerBlock.pri_compressor PARAM */) * (tmp33);
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
powerBlock._P_gross_des = (-powerBlock.turbine.W_turb_des) - powerBlock.mainCompressor.W_comp_des - powerBlock.reCompressor.W_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->simulationInfo->realParameter[309] /* powerBlock.P_gross_des PARAM */ = (-data->simulationInfo->realParameter[650] /* powerBlock.turbine.W_turb_des PARAM */) - data->simulationInfo->realParameter[592] /* powerBlock.mainCompressor.W_comp_des PARAM */ - data->simulationInfo->realParameter[625] /* powerBlock.reCompressor.W_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
powerBlock._HTR._P_nom_des = powerBlock.P_gross_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->simulationInfo->realParameter[37] /* powerBlock.HTR.P_nom_des PARAM */ = data->simulationInfo->realParameter[309] /* powerBlock.P_gross_des PARAM */;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
_omcQuot_245354415254._powerBlock._exchanger._CO2_port_b._m_flow = (-1e-05) * powerBlock.HTR.P_nom_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->modelData->realVarsData[203].attribute /* powerBlock.exchanger.CO2_port_b.m_flow variable */.start = (-1e-05) * (data->simulationInfo->realParameter[37] /* powerBlock.HTR.P_nom_des PARAM */);
    data->localData[0]->realVars[203] /* powerBlock.exchanger.CO2_port_b.m_flow variable */ = data->modelData->realVarsData[203].attribute /* powerBlock.exchanger.CO2_port_b.m_flow variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[203].info /* powerBlock.exchanger.CO2_port_b.m_flow */.name, (modelica_real) data->localData[0]->realVars[203] /* powerBlock.exchanger.CO2_port_b.m_flow variable */);
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
powerBlock._C_mainCompressor = powerBlock.pri_compressor * (0.001 * powerBlock.mainCompressor.W_comp_des) ^ 0.9142
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  tmp38 = (0.001) * (data->simulationInfo->realParameter[592] /* powerBlock.mainCompressor.W_comp_des PARAM */);
  tmp39 = 0.9142;
  if(tmp38 < 0.0 && tmp39 != 0.0)
  {
    tmp41 = modf(tmp39, &tmp42);
    
    if(tmp41 > 0.5)
    {
      tmp41 -= 1.0;
      tmp42 += 1.0;
    }
    else if(tmp41 < -0.5)
    {
      tmp41 += 1.0;
      tmp42 -= 1.0;
    }
    
    if(fabs(tmp41) < 1e-10)
      tmp40 = pow(tmp38, tmp42);
    else
    {
      tmp44 = modf(1.0/tmp39, &tmp43);
      if(tmp44 > 0.5)
      {
        tmp44 -= 1.0;
        tmp43 += 1.0;
      }
      else if(tmp44 < -0.5)
      {
        tmp44 += 1.0;
        tmp43 -= 1.0;
      }
      if(fabs(tmp44) < 1e-10 && ((unsigned long)tmp43 & 1))
      {
        tmp40 = -pow(-tmp38, tmp41)*pow(tmp38, tmp42);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
      }
    }
  }
  else
  {
    tmp40 = pow(tmp38, tmp39);
  }
  if(isnan(tmp40) || isinf(tmp40))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp38, tmp39);
  }
  data->simulationInfo->realParameter[34] /* powerBlock.C_mainCompressor PARAM */ = (data->simulationInfo->realParameter[613] /* powerBlock.pri_compressor PARAM */) * (tmp40);
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
powerBlock._LTR._m_comp_des = powerBlock.mainCompressor.m_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_comp_des PARAM */ = data->simulationInfo->realParameter[597] /* powerBlock.mainCompressor.m_des PARAM */;
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
powerBlock._HTR._m_comp_des = powerBlock.reCompressor.m_des + powerBlock.LTR.m_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_comp_des PARAM */ = data->simulationInfo->realParameter[630] /* powerBlock.reCompressor.m_des PARAM */ + data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[3] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[4] + powerBlock.LTR.deltaT_des[3])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  data->simulationInfo->realParameter[208] /* powerBlock.LTR.UA_dis[3] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[223] /* powerBlock.LTR.deltaT_des[4] PARAM */ + data->simulationInfo->realParameter[222] /* powerBlock.LTR.deltaT_des[3] PARAM */,"powerBlock.LTR.deltaT_des[4] + powerBlock.LTR.deltaT_des[3]",equationIndexes);
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[4] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[5] + powerBlock.LTR.deltaT_des[4])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->simulationInfo->realParameter[209] /* powerBlock.LTR.UA_dis[4] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[224] /* powerBlock.LTR.deltaT_des[5] PARAM */ + data->simulationInfo->realParameter[223] /* powerBlock.LTR.deltaT_des[4] PARAM */,"powerBlock.LTR.deltaT_des[5] + powerBlock.LTR.deltaT_des[4]",equationIndexes);
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[5] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[6] + powerBlock.LTR.deltaT_des[5])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,481};
  data->simulationInfo->realParameter[210] /* powerBlock.LTR.UA_dis[5] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[225] /* powerBlock.LTR.deltaT_des[6] PARAM */ + data->simulationInfo->realParameter[224] /* powerBlock.LTR.deltaT_des[5] PARAM */,"powerBlock.LTR.deltaT_des[6] + powerBlock.LTR.deltaT_des[5]",equationIndexes);
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[6] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[7] + powerBlock.LTR.deltaT_des[6])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,482};
  data->simulationInfo->realParameter[211] /* powerBlock.LTR.UA_dis[6] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[226] /* powerBlock.LTR.deltaT_des[7] PARAM */ + data->simulationInfo->realParameter[225] /* powerBlock.LTR.deltaT_des[6] PARAM */,"powerBlock.LTR.deltaT_des[7] + powerBlock.LTR.deltaT_des[6]",equationIndexes);
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[7] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[8] + powerBlock.LTR.deltaT_des[7])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,483};
  data->simulationInfo->realParameter[212] /* powerBlock.LTR.UA_dis[7] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[227] /* powerBlock.LTR.deltaT_des[8] PARAM */ + data->simulationInfo->realParameter[226] /* powerBlock.LTR.deltaT_des[7] PARAM */,"powerBlock.LTR.deltaT_des[8] + powerBlock.LTR.deltaT_des[7]",equationIndexes);
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[8] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[9] + powerBlock.LTR.deltaT_des[8])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_484(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,484};
  data->simulationInfo->realParameter[213] /* powerBlock.LTR.UA_dis[8] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[228] /* powerBlock.LTR.deltaT_des[9] PARAM */ + data->simulationInfo->realParameter[227] /* powerBlock.LTR.deltaT_des[8] PARAM */,"powerBlock.LTR.deltaT_des[9] + powerBlock.LTR.deltaT_des[8]",equationIndexes);
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[9] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[10] + powerBlock.LTR.deltaT_des[9])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_485(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,485};
  data->simulationInfo->realParameter[214] /* powerBlock.LTR.UA_dis[9] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[229] /* powerBlock.LTR.deltaT_des[10] PARAM */ + data->simulationInfo->realParameter[228] /* powerBlock.LTR.deltaT_des[9] PARAM */,"powerBlock.LTR.deltaT_des[10] + powerBlock.LTR.deltaT_des[9]",equationIndexes);
  TRACE_POP
}

/*
equation index: 486
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[10] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[11] + powerBlock.LTR.deltaT_des[10])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_486(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,486};
  data->simulationInfo->realParameter[215] /* powerBlock.LTR.UA_dis[10] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[230] /* powerBlock.LTR.deltaT_des[11] PARAM */ + data->simulationInfo->realParameter[229] /* powerBlock.LTR.deltaT_des[10] PARAM */,"powerBlock.LTR.deltaT_des[11] + powerBlock.LTR.deltaT_des[10]",equationIndexes);
  TRACE_POP
}

/*
equation index: 487
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[11] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[12] + powerBlock.LTR.deltaT_des[11])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_487(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,487};
  data->simulationInfo->realParameter[216] /* powerBlock.LTR.UA_dis[11] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[231] /* powerBlock.LTR.deltaT_des[12] PARAM */ + data->simulationInfo->realParameter[230] /* powerBlock.LTR.deltaT_des[11] PARAM */,"powerBlock.LTR.deltaT_des[12] + powerBlock.LTR.deltaT_des[11]",equationIndexes);
  TRACE_POP
}

/*
equation index: 488
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[12] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[13] + powerBlock.LTR.deltaT_des[12])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,488};
  data->simulationInfo->realParameter[217] /* powerBlock.LTR.UA_dis[12] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[232] /* powerBlock.LTR.deltaT_des[13] PARAM */ + data->simulationInfo->realParameter[231] /* powerBlock.LTR.deltaT_des[12] PARAM */,"powerBlock.LTR.deltaT_des[13] + powerBlock.LTR.deltaT_des[12]",equationIndexes);
  TRACE_POP
}

/*
equation index: 489
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[13] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[14] + powerBlock.LTR.deltaT_des[13])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,489};
  data->simulationInfo->realParameter[218] /* powerBlock.LTR.UA_dis[13] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[233] /* powerBlock.LTR.deltaT_des[14] PARAM */ + data->simulationInfo->realParameter[232] /* powerBlock.LTR.deltaT_des[13] PARAM */,"powerBlock.LTR.deltaT_des[14] + powerBlock.LTR.deltaT_des[13]",equationIndexes);
  TRACE_POP
}

/*
equation index: 490
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[1] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[2] + powerBlock.LTR.deltaT_des[1])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,490};
  data->simulationInfo->realParameter[206] /* powerBlock.LTR.UA_dis[1] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[221] /* powerBlock.LTR.deltaT_des[2] PARAM */ + data->simulationInfo->realParameter[220] /* powerBlock.LTR.deltaT_des[1] PARAM */,"powerBlock.LTR.deltaT_des[2] + powerBlock.LTR.deltaT_des[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 491
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[2] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[3] + powerBlock.LTR.deltaT_des[2])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,491};
  data->simulationInfo->realParameter[207] /* powerBlock.LTR.UA_dis[2] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[222] /* powerBlock.LTR.deltaT_des[3] PARAM */ + data->simulationInfo->realParameter[221] /* powerBlock.LTR.deltaT_des[2] PARAM */,"powerBlock.LTR.deltaT_des[3] + powerBlock.LTR.deltaT_des[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 492
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[14] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[15] + powerBlock.LTR.deltaT_des[14])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,492};
  data->simulationInfo->realParameter[219] /* powerBlock.LTR.UA_dis[14] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[240] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[174] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[234] /* powerBlock.LTR.deltaT_des[15] PARAM */ + data->simulationInfo->realParameter[233] /* powerBlock.LTR.deltaT_des[14] PARAM */,"powerBlock.LTR.deltaT_des[15] + powerBlock.LTR.deltaT_des[14]",equationIndexes);
  TRACE_POP
}

/*
equation index: 493
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_HTR = powerBlock.LTR.UA_dis[1] + powerBlock.LTR.UA_dis[2] + powerBlock.LTR.UA_dis[3] + powerBlock.LTR.UA_dis[4] + powerBlock.LTR.UA_dis[5] + powerBlock.LTR.UA_dis[6] + powerBlock.LTR.UA_dis[7] + powerBlock.LTR.UA_dis[8] + powerBlock.LTR.UA_dis[9] + powerBlock.LTR.UA_dis[10] + powerBlock.LTR.UA_dis[11] + powerBlock.LTR.UA_dis[12] + powerBlock.LTR.UA_dis[13] + powerBlock.LTR.UA_dis[14]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,493};
  data->simulationInfo->realParameter[205] /* powerBlock.LTR.UA_HTR PARAM */ = data->simulationInfo->realParameter[206] /* powerBlock.LTR.UA_dis[1] PARAM */ + data->simulationInfo->realParameter[207] /* powerBlock.LTR.UA_dis[2] PARAM */ + data->simulationInfo->realParameter[208] /* powerBlock.LTR.UA_dis[3] PARAM */ + data->simulationInfo->realParameter[209] /* powerBlock.LTR.UA_dis[4] PARAM */ + data->simulationInfo->realParameter[210] /* powerBlock.LTR.UA_dis[5] PARAM */ + data->simulationInfo->realParameter[211] /* powerBlock.LTR.UA_dis[6] PARAM */ + data->simulationInfo->realParameter[212] /* powerBlock.LTR.UA_dis[7] PARAM */ + data->simulationInfo->realParameter[213] /* powerBlock.LTR.UA_dis[8] PARAM */ + data->simulationInfo->realParameter[214] /* powerBlock.LTR.UA_dis[9] PARAM */ + data->simulationInfo->realParameter[215] /* powerBlock.LTR.UA_dis[10] PARAM */ + data->simulationInfo->realParameter[216] /* powerBlock.LTR.UA_dis[11] PARAM */ + data->simulationInfo->realParameter[217] /* powerBlock.LTR.UA_dis[12] PARAM */ + data->simulationInfo->realParameter[218] /* powerBlock.LTR.UA_dis[13] PARAM */ + data->simulationInfo->realParameter[219] /* powerBlock.LTR.UA_dis[14] PARAM */;
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
powerBlock._C_LTR = powerBlock.pri_recuperator * powerBlock.LTR.UA_HTR ^ 0.8933
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,494};
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  tmp45 = data->simulationInfo->realParameter[205] /* powerBlock.LTR.UA_HTR PARAM */;
  tmp46 = 0.8933;
  if(tmp45 < 0.0 && tmp46 != 0.0)
  {
    tmp48 = modf(tmp46, &tmp49);
    
    if(tmp48 > 0.5)
    {
      tmp48 -= 1.0;
      tmp49 += 1.0;
    }
    else if(tmp48 < -0.5)
    {
      tmp48 += 1.0;
      tmp49 -= 1.0;
    }
    
    if(fabs(tmp48) < 1e-10)
      tmp47 = pow(tmp45, tmp49);
    else
    {
      tmp51 = modf(1.0/tmp46, &tmp50);
      if(tmp51 > 0.5)
      {
        tmp51 -= 1.0;
        tmp50 += 1.0;
      }
      else if(tmp51 < -0.5)
      {
        tmp51 += 1.0;
        tmp50 -= 1.0;
      }
      if(fabs(tmp51) < 1e-10 && ((unsigned long)tmp50 & 1))
      {
        tmp47 = -pow(-tmp45, tmp48)*pow(tmp45, tmp49);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp45, tmp46);
      }
    }
  }
  else
  {
    tmp47 = pow(tmp45, tmp46);
  }
  if(isnan(tmp47) || isinf(tmp47))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp45, tmp46);
  }
  data->simulationInfo->realParameter[29] /* powerBlock.C_LTR PARAM */ = (data->simulationInfo->realParameter[617] /* powerBlock.pri_recuperator PARAM */) * (tmp47);
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
powerBlock._HTR._Q_HX_des = 14.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,495};
  data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_HX_des PARAM */ = (14.0) * ((data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */));
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[2] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[3] + powerBlock.HTR.deltaT_des[2])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,496};
  data->simulationInfo->realParameter[72] /* powerBlock.HTR.UA_dis[2] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[87] /* powerBlock.HTR.deltaT_des[3] PARAM */ + data->simulationInfo->realParameter[86] /* powerBlock.HTR.deltaT_des[2] PARAM */,"powerBlock.HTR.deltaT_des[3] + powerBlock.HTR.deltaT_des[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[3] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[4] + powerBlock.HTR.deltaT_des[3])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,497};
  data->simulationInfo->realParameter[73] /* powerBlock.HTR.UA_dis[3] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[88] /* powerBlock.HTR.deltaT_des[4] PARAM */ + data->simulationInfo->realParameter[87] /* powerBlock.HTR.deltaT_des[3] PARAM */,"powerBlock.HTR.deltaT_des[4] + powerBlock.HTR.deltaT_des[3]",equationIndexes);
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[4] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[5] + powerBlock.HTR.deltaT_des[4])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,498};
  data->simulationInfo->realParameter[74] /* powerBlock.HTR.UA_dis[4] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[89] /* powerBlock.HTR.deltaT_des[5] PARAM */ + data->simulationInfo->realParameter[88] /* powerBlock.HTR.deltaT_des[4] PARAM */,"powerBlock.HTR.deltaT_des[5] + powerBlock.HTR.deltaT_des[4]",equationIndexes);
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[5] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[6] + powerBlock.HTR.deltaT_des[5])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,499};
  data->simulationInfo->realParameter[75] /* powerBlock.HTR.UA_dis[5] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[90] /* powerBlock.HTR.deltaT_des[6] PARAM */ + data->simulationInfo->realParameter[89] /* powerBlock.HTR.deltaT_des[5] PARAM */,"powerBlock.HTR.deltaT_des[6] + powerBlock.HTR.deltaT_des[5]",equationIndexes);
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[6] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[7] + powerBlock.HTR.deltaT_des[6])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,500};
  data->simulationInfo->realParameter[76] /* powerBlock.HTR.UA_dis[6] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[91] /* powerBlock.HTR.deltaT_des[7] PARAM */ + data->simulationInfo->realParameter[90] /* powerBlock.HTR.deltaT_des[6] PARAM */,"powerBlock.HTR.deltaT_des[7] + powerBlock.HTR.deltaT_des[6]",equationIndexes);
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[7] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[8] + powerBlock.HTR.deltaT_des[7])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,501};
  data->simulationInfo->realParameter[77] /* powerBlock.HTR.UA_dis[7] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[92] /* powerBlock.HTR.deltaT_des[8] PARAM */ + data->simulationInfo->realParameter[91] /* powerBlock.HTR.deltaT_des[7] PARAM */,"powerBlock.HTR.deltaT_des[8] + powerBlock.HTR.deltaT_des[7]",equationIndexes);
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[8] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[9] + powerBlock.HTR.deltaT_des[8])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,502};
  data->simulationInfo->realParameter[78] /* powerBlock.HTR.UA_dis[8] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[93] /* powerBlock.HTR.deltaT_des[9] PARAM */ + data->simulationInfo->realParameter[92] /* powerBlock.HTR.deltaT_des[8] PARAM */,"powerBlock.HTR.deltaT_des[9] + powerBlock.HTR.deltaT_des[8]",equationIndexes);
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[9] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[10] + powerBlock.HTR.deltaT_des[9])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,503};
  data->simulationInfo->realParameter[79] /* powerBlock.HTR.UA_dis[9] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[94] /* powerBlock.HTR.deltaT_des[10] PARAM */ + data->simulationInfo->realParameter[93] /* powerBlock.HTR.deltaT_des[9] PARAM */,"powerBlock.HTR.deltaT_des[10] + powerBlock.HTR.deltaT_des[9]",equationIndexes);
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[10] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[11] + powerBlock.HTR.deltaT_des[10])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,504};
  data->simulationInfo->realParameter[80] /* powerBlock.HTR.UA_dis[10] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[95] /* powerBlock.HTR.deltaT_des[11] PARAM */ + data->simulationInfo->realParameter[94] /* powerBlock.HTR.deltaT_des[10] PARAM */,"powerBlock.HTR.deltaT_des[11] + powerBlock.HTR.deltaT_des[10]",equationIndexes);
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[11] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[12] + powerBlock.HTR.deltaT_des[11])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,505};
  data->simulationInfo->realParameter[81] /* powerBlock.HTR.UA_dis[11] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[96] /* powerBlock.HTR.deltaT_des[12] PARAM */ + data->simulationInfo->realParameter[95] /* powerBlock.HTR.deltaT_des[11] PARAM */,"powerBlock.HTR.deltaT_des[12] + powerBlock.HTR.deltaT_des[11]",equationIndexes);
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[12] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[13] + powerBlock.HTR.deltaT_des[12])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  data->simulationInfo->realParameter[82] /* powerBlock.HTR.UA_dis[12] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[97] /* powerBlock.HTR.deltaT_des[13] PARAM */ + data->simulationInfo->realParameter[96] /* powerBlock.HTR.deltaT_des[12] PARAM */,"powerBlock.HTR.deltaT_des[13] + powerBlock.HTR.deltaT_des[12]",equationIndexes);
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[13] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[14] + powerBlock.HTR.deltaT_des[13])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->simulationInfo->realParameter[83] /* powerBlock.HTR.UA_dis[13] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[98] /* powerBlock.HTR.deltaT_des[14] PARAM */ + data->simulationInfo->realParameter[97] /* powerBlock.HTR.deltaT_des[13] PARAM */,"powerBlock.HTR.deltaT_des[14] + powerBlock.HTR.deltaT_des[13]",equationIndexes);
  TRACE_POP
}

/*
equation index: 508
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[1] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[2] + powerBlock.HTR.deltaT_des[1])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  data->simulationInfo->realParameter[71] /* powerBlock.HTR.UA_dis[1] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[86] /* powerBlock.HTR.deltaT_des[2] PARAM */ + data->simulationInfo->realParameter[85] /* powerBlock.HTR.deltaT_des[1] PARAM */,"powerBlock.HTR.deltaT_des[2] + powerBlock.HTR.deltaT_des[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[14] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[15] + powerBlock.HTR.deltaT_des[14])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->simulationInfo->realParameter[84] /* powerBlock.HTR.UA_dis[14] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[105] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[39] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[99] /* powerBlock.HTR.deltaT_des[15] PARAM */ + data->simulationInfo->realParameter[98] /* powerBlock.HTR.deltaT_des[14] PARAM */,"powerBlock.HTR.deltaT_des[15] + powerBlock.HTR.deltaT_des[14]",equationIndexes);
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_HTR = powerBlock.HTR.UA_dis[1] + powerBlock.HTR.UA_dis[2] + powerBlock.HTR.UA_dis[3] + powerBlock.HTR.UA_dis[4] + powerBlock.HTR.UA_dis[5] + powerBlock.HTR.UA_dis[6] + powerBlock.HTR.UA_dis[7] + powerBlock.HTR.UA_dis[8] + powerBlock.HTR.UA_dis[9] + powerBlock.HTR.UA_dis[10] + powerBlock.HTR.UA_dis[11] + powerBlock.HTR.UA_dis[12] + powerBlock.HTR.UA_dis[13] + powerBlock.HTR.UA_dis[14]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->simulationInfo->realParameter[70] /* powerBlock.HTR.UA_HTR PARAM */ = data->simulationInfo->realParameter[71] /* powerBlock.HTR.UA_dis[1] PARAM */ + data->simulationInfo->realParameter[72] /* powerBlock.HTR.UA_dis[2] PARAM */ + data->simulationInfo->realParameter[73] /* powerBlock.HTR.UA_dis[3] PARAM */ + data->simulationInfo->realParameter[74] /* powerBlock.HTR.UA_dis[4] PARAM */ + data->simulationInfo->realParameter[75] /* powerBlock.HTR.UA_dis[5] PARAM */ + data->simulationInfo->realParameter[76] /* powerBlock.HTR.UA_dis[6] PARAM */ + data->simulationInfo->realParameter[77] /* powerBlock.HTR.UA_dis[7] PARAM */ + data->simulationInfo->realParameter[78] /* powerBlock.HTR.UA_dis[8] PARAM */ + data->simulationInfo->realParameter[79] /* powerBlock.HTR.UA_dis[9] PARAM */ + data->simulationInfo->realParameter[80] /* powerBlock.HTR.UA_dis[10] PARAM */ + data->simulationInfo->realParameter[81] /* powerBlock.HTR.UA_dis[11] PARAM */ + data->simulationInfo->realParameter[82] /* powerBlock.HTR.UA_dis[12] PARAM */ + data->simulationInfo->realParameter[83] /* powerBlock.HTR.UA_dis[13] PARAM */ + data->simulationInfo->realParameter[84] /* powerBlock.HTR.UA_dis[14] PARAM */;
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
powerBlock._C_HTR = powerBlock.pri_recuperator * powerBlock.HTR.UA_HTR ^ 0.8933
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  tmp52 = data->simulationInfo->realParameter[70] /* powerBlock.HTR.UA_HTR PARAM */;
  tmp53 = 0.8933;
  if(tmp52 < 0.0 && tmp53 != 0.0)
  {
    tmp55 = modf(tmp53, &tmp56);
    
    if(tmp55 > 0.5)
    {
      tmp55 -= 1.0;
      tmp56 += 1.0;
    }
    else if(tmp55 < -0.5)
    {
      tmp55 += 1.0;
      tmp56 -= 1.0;
    }
    
    if(fabs(tmp55) < 1e-10)
      tmp54 = pow(tmp52, tmp56);
    else
    {
      tmp58 = modf(1.0/tmp53, &tmp57);
      if(tmp58 > 0.5)
      {
        tmp58 -= 1.0;
        tmp57 += 1.0;
      }
      else if(tmp58 < -0.5)
      {
        tmp58 += 1.0;
        tmp57 -= 1.0;
      }
      if(fabs(tmp58) < 1e-10 && ((unsigned long)tmp57 & 1))
      {
        tmp54 = -pow(-tmp52, tmp55)*pow(tmp52, tmp56);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp52, tmp53);
      }
    }
  }
  else
  {
    tmp54 = pow(tmp52, tmp53);
  }
  if(isnan(tmp54) || isinf(tmp54))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp52, tmp53);
  }
  data->simulationInfo->realParameter[28] /* powerBlock.C_HTR PARAM */ = (data->simulationInfo->realParameter[617] /* powerBlock.pri_recuperator PARAM */) * (tmp54);
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
powerBlock._HTR._h_out_comp_des = powerBlock.HTR.state_comp_des[15].h
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->simulationInfo->realParameter[102] /* powerBlock.HTR.h_out_comp_des PARAM */ = data->simulationInfo->realParameter[126] /* powerBlock.HTR.state_comp_des[15].h PARAM */;
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_in_CO2_des = powerBlock.HTR.h_out_comp_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->simulationInfo->realParameter[497] /* powerBlock.exchanger.h_in_CO2_des PARAM */ = data->simulationInfo->realParameter[102] /* powerBlock.HTR.h_out_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[1]._h = powerBlock.exchanger.h_in_CO2_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->simulationInfo->realParameter[508] /* powerBlock.exchanger.state_CO2_des[1].h PARAM */ = data->simulationInfo->realParameter[497] /* powerBlock.exchanger.h_in_CO2_des PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_515(DATA*, threadData_t*);
/*
equation index: 516
indexNonlinear: 18
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[1]}
eqns: {515}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 516 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[0] = data->simulationInfo->realParameter[434] /* powerBlock.exchanger.T_CO2_des[1] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 18);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,516};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 516 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[434] /* powerBlock.exchanger.T_CO2_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[0];
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
powerBlock._exchanger._T_HTF_des[1] = powerBlock.pinch_PHX + powerBlock.exchanger.T_CO2_des[1]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->simulationInfo->realParameter[449] /* powerBlock.exchanger.T_HTF_des[1] PARAM */ = data->simulationInfo->realParameter[611] /* powerBlock.pinch_PHX PARAM */ + data->simulationInfo->realParameter[434] /* powerBlock.exchanger.T_CO2_des[1] PARAM */;
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[1]._h = if noEvent(powerBlock.exchanger.T_HTF_des[1] < 0.0) then 0.0 else -196601.368854 + 113.1902543343771 * powerBlock.exchanger.T_HTF_des[1] ^ 1.3093
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Less(data->simulationInfo->realParameter[449] /* powerBlock.exchanger.T_HTF_des[1] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[449] /* powerBlock.exchanger.T_HTF_des[1] PARAM */;
    tmp2 = 1.3093;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = -196601.368854 + (113.1902543343771) * (tmp3);
  }
  data->simulationInfo->realParameter[553] /* powerBlock.exchanger.state_HTF_des[1].h PARAM */ = tmp9;
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[1] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[1].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[1].p, powerBlock.exchanger.state_CO2_des[1].h, tableIDT_p_h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->simulationInfo->realParameter[482] /* powerBlock.exchanger.deltaT_des[1] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[553] /* powerBlock.exchanger.state_HTF_des[1].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[523] /* powerBlock.exchanger.state_CO2_des[1].p PARAM */, data->simulationInfo->realParameter[508] /* powerBlock.exchanger.state_CO2_des[1].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

/*
equation index: 547
type: LINEAR

<var>powerBlock._exchanger._state_HTF_des[14]._h</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void sCO2PBCalculator_Using_PinchPHX_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->simulationInfo->realParameter[566] /* powerBlock.exchanger.state_HTF_des[14].h PARAM */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 547 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,547};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 547 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[566] /* powerBlock.exchanger.state_HTF_des[14].h PARAM */ = aux_x[0];
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_548(DATA*, threadData_t*);
/*
equation index: 549
indexNonlinear: 19
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[14]}
eqns: {548}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 549 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[19].nlsxOld[0] = data->simulationInfo->realParameter[462] /* powerBlock.exchanger.T_HTF_des[14] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 19);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,549};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 549 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[462] /* powerBlock.exchanger.T_HTF_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[19].nlsx[0];
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_550(DATA*, threadData_t*);
/*
equation index: 551
indexNonlinear: 20
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[13]}
eqns: {550}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 551 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[20].nlsxOld[0] = data->simulationInfo->realParameter[461] /* powerBlock.exchanger.T_HTF_des[13] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 20);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,551};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 551 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[461] /* powerBlock.exchanger.T_HTF_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[20].nlsx[0];
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_552(DATA*, threadData_t*);
/*
equation index: 553
indexNonlinear: 21
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[12]}
eqns: {552}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 553 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[21].nlsxOld[0] = data->simulationInfo->realParameter[460] /* powerBlock.exchanger.T_HTF_des[12] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 21);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,553};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 553 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[460] /* powerBlock.exchanger.T_HTF_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[21].nlsx[0];
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_554(DATA*, threadData_t*);
/*
equation index: 555
indexNonlinear: 22
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[11]}
eqns: {554}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 555 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[22].nlsxOld[0] = data->simulationInfo->realParameter[459] /* powerBlock.exchanger.T_HTF_des[11] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 22);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,555};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 555 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[459] /* powerBlock.exchanger.T_HTF_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[22].nlsx[0];
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_556(DATA*, threadData_t*);
/*
equation index: 557
indexNonlinear: 23
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[10]}
eqns: {556}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 557 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[23].nlsxOld[0] = data->simulationInfo->realParameter[458] /* powerBlock.exchanger.T_HTF_des[10] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 23);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,557};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 557 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[458] /* powerBlock.exchanger.T_HTF_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[23].nlsx[0];
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_558(DATA*, threadData_t*);
/*
equation index: 559
indexNonlinear: 24
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[9]}
eqns: {558}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 559 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[24].nlsxOld[0] = data->simulationInfo->realParameter[457] /* powerBlock.exchanger.T_HTF_des[9] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 24);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,559};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 559 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[457] /* powerBlock.exchanger.T_HTF_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[24].nlsx[0];
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_560(DATA*, threadData_t*);
/*
equation index: 561
indexNonlinear: 25
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[8]}
eqns: {560}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 561 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[25].nlsxOld[0] = data->simulationInfo->realParameter[456] /* powerBlock.exchanger.T_HTF_des[8] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 25);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,561};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 561 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[456] /* powerBlock.exchanger.T_HTF_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[25].nlsx[0];
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_562(DATA*, threadData_t*);
/*
equation index: 563
indexNonlinear: 26
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[7]}
eqns: {562}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 563 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[26].nlsxOld[0] = data->simulationInfo->realParameter[455] /* powerBlock.exchanger.T_HTF_des[7] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 26);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,563};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 563 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[455] /* powerBlock.exchanger.T_HTF_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[26].nlsx[0];
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_564(DATA*, threadData_t*);
/*
equation index: 565
indexNonlinear: 27
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[6]}
eqns: {564}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_565(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,565};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 565 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[27].nlsxOld[0] = data->simulationInfo->realParameter[454] /* powerBlock.exchanger.T_HTF_des[6] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 27);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,565};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 565 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[454] /* powerBlock.exchanger.T_HTF_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[27].nlsx[0];
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_566(DATA*, threadData_t*);
/*
equation index: 567
indexNonlinear: 28
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[5]}
eqns: {566}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_567(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,567};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 567 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[28].nlsxOld[0] = data->simulationInfo->realParameter[453] /* powerBlock.exchanger.T_HTF_des[5] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 28);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,567};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 567 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[453] /* powerBlock.exchanger.T_HTF_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[28].nlsx[0];
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_568(DATA*, threadData_t*);
/*
equation index: 569
indexNonlinear: 29
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[4]}
eqns: {568}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_569(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,569};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 569 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[29].nlsxOld[0] = data->simulationInfo->realParameter[452] /* powerBlock.exchanger.T_HTF_des[4] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 29);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,569};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 569 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[452] /* powerBlock.exchanger.T_HTF_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[29].nlsx[0];
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_570(DATA*, threadData_t*);
/*
equation index: 571
indexNonlinear: 30
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[3]}
eqns: {570}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_571(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,571};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 571 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[30].nlsxOld[0] = data->simulationInfo->realParameter[451] /* powerBlock.exchanger.T_HTF_des[3] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 30);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,571};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 571 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[451] /* powerBlock.exchanger.T_HTF_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[30].nlsx[0];
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_572(DATA*, threadData_t*);
/*
equation index: 573
indexNonlinear: 31
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[2]}
eqns: {572}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_573(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,573};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 573 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[31].nlsxOld[0] = data->simulationInfo->realParameter[450] /* powerBlock.exchanger.T_HTF_des[2] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 31);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,573};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 573 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[450] /* powerBlock.exchanger.T_HTF_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[31].nlsx[0];
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
powerBlock._C_exchanger = powerBlock.pri_exchanger * powerBlock.exchanger.Q_HX_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_574(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,574};
  data->simulationInfo->realParameter[32] /* powerBlock.C_exchanger PARAM */ = (data->simulationInfo->realParameter[615] /* powerBlock.pri_exchanger PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */);
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
powerBlock._C_PB = powerBlock.C_HTR + powerBlock.C_LTR + powerBlock.C_turbine + powerBlock.C_mainCompressor + powerBlock.C_reCompressor + powerBlock.C_generator + powerBlock.C_cooler + powerBlock.C_exchanger
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_575(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,575};
  data->simulationInfo->realParameter[30] /* powerBlock.C_PB PARAM */ = data->simulationInfo->realParameter[28] /* powerBlock.C_HTR PARAM */ + data->simulationInfo->realParameter[29] /* powerBlock.C_LTR PARAM */ + data->simulationInfo->realParameter[36] /* powerBlock.C_turbine PARAM */ + data->simulationInfo->realParameter[34] /* powerBlock.C_mainCompressor PARAM */ + data->simulationInfo->realParameter[35] /* powerBlock.C_reCompressor PARAM */ + data->simulationInfo->realParameter[33] /* powerBlock.C_generator PARAM */ + data->simulationInfo->realParameter[31] /* powerBlock.C_cooler PARAM */ + data->simulationInfo->realParameter[32] /* powerBlock.C_exchanger PARAM */;
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_out_HTF_des = powerBlock.exchanger.state_HTF_des[1].h
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_576(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,576};
  data->simulationInfo->realParameter[500] /* powerBlock.exchanger.h_out_HTF_des PARAM */ = data->simulationInfo->realParameter[553] /* powerBlock.exchanger.state_HTF_des[1].h PARAM */;
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_590(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_589(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_588(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_587(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_586(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_585(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_584(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_583(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_582(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_581(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_580(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_579(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_578(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_577(DATA*, threadData_t*);
/*
equation index: 605
indexNonlinear: 32
type: NONLINEAR

vars: {powerBlock._exchanger._state_CO2_des[2]._h, powerBlock._exchanger._state_CO2_des[3]._h, powerBlock._exchanger._state_CO2_des[4]._h, powerBlock._exchanger._state_CO2_des[5]._h, powerBlock._exchanger._state_CO2_des[6]._h, powerBlock._exchanger._state_CO2_des[7]._h, powerBlock._exchanger._state_CO2_des[8]._h, powerBlock._exchanger._state_CO2_des[9]._h, powerBlock._exchanger._state_CO2_des[10]._h, powerBlock._exchanger._state_CO2_des[11]._h, powerBlock._exchanger._state_CO2_des[12]._h, powerBlock._exchanger._ratio_m_des, powerBlock._exchanger._state_CO2_des[14]._h, powerBlock._exchanger._state_CO2_des[13]._h}
eqns: {590, 589, 588, 587, 586, 585, 584, 583, 582, 581, 580, 579, 578, 577}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 605 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[0] = data->simulationInfo->realParameter[509] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */;
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[1] = data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */;
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[2] = data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */;
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[3] = data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */;
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[4] = data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */;
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[5] = data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */;
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[6] = data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */;
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[7] = data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */;
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[8] = data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */;
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[9] = data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */;
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[10] = data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */;
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[11] = data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */;
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[12] = data->simulationInfo->realParameter[521] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */;
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[13] = data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 32);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,605};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 605 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[509] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[0];
  data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[1];
  data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[2];
  data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[3];
  data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[4];
  data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[5];
  data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[6];
  data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[7];
  data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[8];
  data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[9];
  data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[10];
  data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[11];
  data->simulationInfo->realParameter[521] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[12];
  data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[13];
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[2] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[2].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[2].p, powerBlock.exchanger.state_CO2_des[2].h, tableIDT_p_h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->simulationInfo->realParameter[483] /* powerBlock.exchanger.deltaT_des[2] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[554] /* powerBlock.exchanger.state_HTF_des[2].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[524] /* powerBlock.exchanger.state_CO2_des[2].p PARAM */, data->simulationInfo->realParameter[509] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_607(DATA*, threadData_t*);
/*
equation index: 608
indexNonlinear: 33
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[2]}
eqns: {607}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 608 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[33].nlsxOld[0] = data->simulationInfo->realParameter[435] /* powerBlock.exchanger.T_CO2_des[2] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 33);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,608};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 608 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[435] /* powerBlock.exchanger.T_CO2_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[33].nlsx[0];
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[3] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[3].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[3].p, powerBlock.exchanger.state_CO2_des[3].h, tableIDT_p_h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->simulationInfo->realParameter[484] /* powerBlock.exchanger.deltaT_des[3] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[555] /* powerBlock.exchanger.state_HTF_des[3].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[525] /* powerBlock.exchanger.state_CO2_des[3].p PARAM */, data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_610(DATA*, threadData_t*);
/*
equation index: 611
indexNonlinear: 34
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[3]}
eqns: {610}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 611 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[34].nlsxOld[0] = data->simulationInfo->realParameter[436] /* powerBlock.exchanger.T_CO2_des[3] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 34);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,611};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 611 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[436] /* powerBlock.exchanger.T_CO2_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[34].nlsx[0];
  TRACE_POP
}

/*
equation index: 612
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[4] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[4].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[4].p, powerBlock.exchanger.state_CO2_des[4].h, tableIDT_p_h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->simulationInfo->realParameter[485] /* powerBlock.exchanger.deltaT_des[4] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[556] /* powerBlock.exchanger.state_HTF_des[4].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[526] /* powerBlock.exchanger.state_CO2_des[4].p PARAM */, data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_613(DATA*, threadData_t*);
/*
equation index: 614
indexNonlinear: 35
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[4]}
eqns: {613}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 614 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[35].nlsxOld[0] = data->simulationInfo->realParameter[437] /* powerBlock.exchanger.T_CO2_des[4] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 35);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,614};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 614 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[437] /* powerBlock.exchanger.T_CO2_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[35].nlsx[0];
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[5] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[5].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[5].p, powerBlock.exchanger.state_CO2_des[5].h, tableIDT_p_h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->simulationInfo->realParameter[486] /* powerBlock.exchanger.deltaT_des[5] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[557] /* powerBlock.exchanger.state_HTF_des[5].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[527] /* powerBlock.exchanger.state_CO2_des[5].p PARAM */, data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_616(DATA*, threadData_t*);
/*
equation index: 617
indexNonlinear: 36
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[5]}
eqns: {616}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 617 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[36].nlsxOld[0] = data->simulationInfo->realParameter[438] /* powerBlock.exchanger.T_CO2_des[5] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 36);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,617};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 617 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[438] /* powerBlock.exchanger.T_CO2_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[36].nlsx[0];
  TRACE_POP
}

/*
equation index: 618
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[6] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[6].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[6].p, powerBlock.exchanger.state_CO2_des[6].h, tableIDT_p_h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->simulationInfo->realParameter[487] /* powerBlock.exchanger.deltaT_des[6] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[558] /* powerBlock.exchanger.state_HTF_des[6].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[528] /* powerBlock.exchanger.state_CO2_des[6].p PARAM */, data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_619(DATA*, threadData_t*);
/*
equation index: 620
indexNonlinear: 37
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[6]}
eqns: {619}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 620 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[37].nlsxOld[0] = data->simulationInfo->realParameter[439] /* powerBlock.exchanger.T_CO2_des[6] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 37);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,620};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 620 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[439] /* powerBlock.exchanger.T_CO2_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[37].nlsx[0];
  TRACE_POP
}

/*
equation index: 621
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[7] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[7].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[7].p, powerBlock.exchanger.state_CO2_des[7].h, tableIDT_p_h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->simulationInfo->realParameter[488] /* powerBlock.exchanger.deltaT_des[7] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[559] /* powerBlock.exchanger.state_HTF_des[7].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[529] /* powerBlock.exchanger.state_CO2_des[7].p PARAM */, data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_622(DATA*, threadData_t*);
/*
equation index: 623
indexNonlinear: 38
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[7]}
eqns: {622}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 623 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[38].nlsxOld[0] = data->simulationInfo->realParameter[440] /* powerBlock.exchanger.T_CO2_des[7] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 38);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,623};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 623 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[440] /* powerBlock.exchanger.T_CO2_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[38].nlsx[0];
  TRACE_POP
}

/*
equation index: 624
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[8] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[8].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[8].p, powerBlock.exchanger.state_CO2_des[8].h, tableIDT_p_h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->simulationInfo->realParameter[489] /* powerBlock.exchanger.deltaT_des[8] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[560] /* powerBlock.exchanger.state_HTF_des[8].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[530] /* powerBlock.exchanger.state_CO2_des[8].p PARAM */, data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_625(DATA*, threadData_t*);
/*
equation index: 626
indexNonlinear: 39
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[8]}
eqns: {625}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 626 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[39].nlsxOld[0] = data->simulationInfo->realParameter[441] /* powerBlock.exchanger.T_CO2_des[8] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 39);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,626};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 626 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[441] /* powerBlock.exchanger.T_CO2_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[39].nlsx[0];
  TRACE_POP
}

/*
equation index: 627
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[9] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[9].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[9].p, powerBlock.exchanger.state_CO2_des[9].h, tableIDT_p_h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  data->simulationInfo->realParameter[490] /* powerBlock.exchanger.deltaT_des[9] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[561] /* powerBlock.exchanger.state_HTF_des[9].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[531] /* powerBlock.exchanger.state_CO2_des[9].p PARAM */, data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_628(DATA*, threadData_t*);
/*
equation index: 629
indexNonlinear: 40
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[9]}
eqns: {628}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 629 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[40].nlsxOld[0] = data->simulationInfo->realParameter[442] /* powerBlock.exchanger.T_CO2_des[9] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 40);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,629};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 629 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[442] /* powerBlock.exchanger.T_CO2_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[40].nlsx[0];
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[10] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[10].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[10].p, powerBlock.exchanger.state_CO2_des[10].h, tableIDT_p_h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->simulationInfo->realParameter[491] /* powerBlock.exchanger.deltaT_des[10] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[562] /* powerBlock.exchanger.state_HTF_des[10].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[532] /* powerBlock.exchanger.state_CO2_des[10].p PARAM */, data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_631(DATA*, threadData_t*);
/*
equation index: 632
indexNonlinear: 41
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[10]}
eqns: {631}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 632 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[41].nlsxOld[0] = data->simulationInfo->realParameter[443] /* powerBlock.exchanger.T_CO2_des[10] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 41);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,632};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 632 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[443] /* powerBlock.exchanger.T_CO2_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[41].nlsx[0];
  TRACE_POP
}

/*
equation index: 633
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[11] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[11].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[11].p, powerBlock.exchanger.state_CO2_des[11].h, tableIDT_p_h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->simulationInfo->realParameter[492] /* powerBlock.exchanger.deltaT_des[11] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[563] /* powerBlock.exchanger.state_HTF_des[11].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[533] /* powerBlock.exchanger.state_CO2_des[11].p PARAM */, data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_634(DATA*, threadData_t*);
/*
equation index: 635
indexNonlinear: 42
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[11]}
eqns: {634}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 635 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[42].nlsxOld[0] = data->simulationInfo->realParameter[444] /* powerBlock.exchanger.T_CO2_des[11] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 42);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,635};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 635 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[444] /* powerBlock.exchanger.T_CO2_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[42].nlsx[0];
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[12] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[12].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[12].p, powerBlock.exchanger.state_CO2_des[12].h, tableIDT_p_h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->simulationInfo->realParameter[493] /* powerBlock.exchanger.deltaT_des[12] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[564] /* powerBlock.exchanger.state_HTF_des[12].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[534] /* powerBlock.exchanger.state_CO2_des[12].p PARAM */, data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_637(DATA*, threadData_t*);
/*
equation index: 638
indexNonlinear: 43
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[12]}
eqns: {637}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 638 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[43].nlsxOld[0] = data->simulationInfo->realParameter[445] /* powerBlock.exchanger.T_CO2_des[12] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 43);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,638};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 638 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[445] /* powerBlock.exchanger.T_CO2_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[43].nlsx[0];
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[14] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[14].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[14].p, powerBlock.exchanger.state_CO2_des[14].h, tableIDT_p_h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  data->simulationInfo->realParameter[495] /* powerBlock.exchanger.deltaT_des[14] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[566] /* powerBlock.exchanger.state_HTF_des[14].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[536] /* powerBlock.exchanger.state_CO2_des[14].p PARAM */, data->simulationInfo->realParameter[521] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_640(DATA*, threadData_t*);
/*
equation index: 641
indexNonlinear: 44
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[14]}
eqns: {640}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 641 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[44].nlsxOld[0] = data->simulationInfo->realParameter[447] /* powerBlock.exchanger.T_CO2_des[14] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 44);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,641};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 641 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[447] /* powerBlock.exchanger.T_CO2_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[44].nlsx[0];
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[13] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[13].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[13].p, powerBlock.exchanger.state_CO2_des[13].h, tableIDT_p_h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  data->simulationInfo->realParameter[494] /* powerBlock.exchanger.deltaT_des[13] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[565] /* powerBlock.exchanger.state_HTF_des[13].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[535] /* powerBlock.exchanger.state_CO2_des[13].p PARAM */, data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBCalculator_Using_PinchPHX_eqFunction_643(DATA*, threadData_t*);
/*
equation index: 644
indexNonlinear: 45
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[13]}
eqns: {643}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 644 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[0] = data->simulationInfo->realParameter[446] /* powerBlock.exchanger.T_CO2_des[13] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 45);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,644};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 644 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[446] /* powerBlock.exchanger.T_CO2_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[45].nlsx[0];
  TRACE_POP
}

/*
equation index: 645
type: SIMPLE_ASSIGN
powerBlock._exchanger._m_HTF_des = powerBlock.exchanger.m_CO2_des / powerBlock.exchanger.ratio_m_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_CO2_des PARAM */,data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */,"powerBlock.exchanger.ratio_m_des",equationIndexes);
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[1] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[1] + powerBlock.exchanger.deltaT_des[2])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->simulationInfo->realParameter[468] /* powerBlock.exchanger.UA_HX_dis[1] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[482] /* powerBlock.exchanger.deltaT_des[1] PARAM */ + data->simulationInfo->realParameter[483] /* powerBlock.exchanger.deltaT_des[2] PARAM */,"powerBlock.exchanger.deltaT_des[1] + powerBlock.exchanger.deltaT_des[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 647
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[2] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[2] + powerBlock.exchanger.deltaT_des[3])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  data->simulationInfo->realParameter[469] /* powerBlock.exchanger.UA_HX_dis[2] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[483] /* powerBlock.exchanger.deltaT_des[2] PARAM */ + data->simulationInfo->realParameter[484] /* powerBlock.exchanger.deltaT_des[3] PARAM */,"powerBlock.exchanger.deltaT_des[2] + powerBlock.exchanger.deltaT_des[3]",equationIndexes);
  TRACE_POP
}

/*
equation index: 648
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[3] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[3] + powerBlock.exchanger.deltaT_des[4])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  data->simulationInfo->realParameter[470] /* powerBlock.exchanger.UA_HX_dis[3] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[484] /* powerBlock.exchanger.deltaT_des[3] PARAM */ + data->simulationInfo->realParameter[485] /* powerBlock.exchanger.deltaT_des[4] PARAM */,"powerBlock.exchanger.deltaT_des[3] + powerBlock.exchanger.deltaT_des[4]",equationIndexes);
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[4] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[4] + powerBlock.exchanger.deltaT_des[5])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->simulationInfo->realParameter[471] /* powerBlock.exchanger.UA_HX_dis[4] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[485] /* powerBlock.exchanger.deltaT_des[4] PARAM */ + data->simulationInfo->realParameter[486] /* powerBlock.exchanger.deltaT_des[5] PARAM */,"powerBlock.exchanger.deltaT_des[4] + powerBlock.exchanger.deltaT_des[5]",equationIndexes);
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[5] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[5] + powerBlock.exchanger.deltaT_des[6])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->simulationInfo->realParameter[472] /* powerBlock.exchanger.UA_HX_dis[5] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[486] /* powerBlock.exchanger.deltaT_des[5] PARAM */ + data->simulationInfo->realParameter[487] /* powerBlock.exchanger.deltaT_des[6] PARAM */,"powerBlock.exchanger.deltaT_des[5] + powerBlock.exchanger.deltaT_des[6]",equationIndexes);
  TRACE_POP
}

/*
equation index: 651
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[6] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[6] + powerBlock.exchanger.deltaT_des[7])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->simulationInfo->realParameter[473] /* powerBlock.exchanger.UA_HX_dis[6] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[487] /* powerBlock.exchanger.deltaT_des[6] PARAM */ + data->simulationInfo->realParameter[488] /* powerBlock.exchanger.deltaT_des[7] PARAM */,"powerBlock.exchanger.deltaT_des[6] + powerBlock.exchanger.deltaT_des[7]",equationIndexes);
  TRACE_POP
}

/*
equation index: 652
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[7] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[7] + powerBlock.exchanger.deltaT_des[8])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->simulationInfo->realParameter[474] /* powerBlock.exchanger.UA_HX_dis[7] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[488] /* powerBlock.exchanger.deltaT_des[7] PARAM */ + data->simulationInfo->realParameter[489] /* powerBlock.exchanger.deltaT_des[8] PARAM */,"powerBlock.exchanger.deltaT_des[7] + powerBlock.exchanger.deltaT_des[8]",equationIndexes);
  TRACE_POP
}

/*
equation index: 653
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[8] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[8] + powerBlock.exchanger.deltaT_des[9])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->simulationInfo->realParameter[475] /* powerBlock.exchanger.UA_HX_dis[8] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[489] /* powerBlock.exchanger.deltaT_des[8] PARAM */ + data->simulationInfo->realParameter[490] /* powerBlock.exchanger.deltaT_des[9] PARAM */,"powerBlock.exchanger.deltaT_des[8] + powerBlock.exchanger.deltaT_des[9]",equationIndexes);
  TRACE_POP
}

/*
equation index: 654
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[9] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[9] + powerBlock.exchanger.deltaT_des[10])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->simulationInfo->realParameter[476] /* powerBlock.exchanger.UA_HX_dis[9] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[490] /* powerBlock.exchanger.deltaT_des[9] PARAM */ + data->simulationInfo->realParameter[491] /* powerBlock.exchanger.deltaT_des[10] PARAM */,"powerBlock.exchanger.deltaT_des[9] + powerBlock.exchanger.deltaT_des[10]",equationIndexes);
  TRACE_POP
}

/*
equation index: 655
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[10] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[10] + powerBlock.exchanger.deltaT_des[11])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  data->simulationInfo->realParameter[477] /* powerBlock.exchanger.UA_HX_dis[10] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[491] /* powerBlock.exchanger.deltaT_des[10] PARAM */ + data->simulationInfo->realParameter[492] /* powerBlock.exchanger.deltaT_des[11] PARAM */,"powerBlock.exchanger.deltaT_des[10] + powerBlock.exchanger.deltaT_des[11]",equationIndexes);
  TRACE_POP
}

/*
equation index: 656
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[11] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[11] + powerBlock.exchanger.deltaT_des[12])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->simulationInfo->realParameter[478] /* powerBlock.exchanger.UA_HX_dis[11] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[492] /* powerBlock.exchanger.deltaT_des[11] PARAM */ + data->simulationInfo->realParameter[493] /* powerBlock.exchanger.deltaT_des[12] PARAM */,"powerBlock.exchanger.deltaT_des[11] + powerBlock.exchanger.deltaT_des[12]",equationIndexes);
  TRACE_POP
}

/*
equation index: 657
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[12] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[12] + powerBlock.exchanger.deltaT_des[13])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->simulationInfo->realParameter[479] /* powerBlock.exchanger.UA_HX_dis[12] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[493] /* powerBlock.exchanger.deltaT_des[12] PARAM */ + data->simulationInfo->realParameter[494] /* powerBlock.exchanger.deltaT_des[13] PARAM */,"powerBlock.exchanger.deltaT_des[12] + powerBlock.exchanger.deltaT_des[13]",equationIndexes);
  TRACE_POP
}

/*
equation index: 658
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[13] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[13] + powerBlock.exchanger.deltaT_des[14])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->simulationInfo->realParameter[480] /* powerBlock.exchanger.UA_HX_dis[13] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[494] /* powerBlock.exchanger.deltaT_des[13] PARAM */ + data->simulationInfo->realParameter[495] /* powerBlock.exchanger.deltaT_des[14] PARAM */,"powerBlock.exchanger.deltaT_des[13] + powerBlock.exchanger.deltaT_des[14]",equationIndexes);
  TRACE_POP
}

/*
equation index: 659
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[14] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[14] + powerBlock.exchanger.deltaT_des[15])
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  data->simulationInfo->realParameter[481] /* powerBlock.exchanger.UA_HX_dis[14] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[495] /* powerBlock.exchanger.deltaT_des[14] PARAM */ + data->simulationInfo->realParameter[496] /* powerBlock.exchanger.deltaT_des[15] PARAM */,"powerBlock.exchanger.deltaT_des[14] + powerBlock.exchanger.deltaT_des[15]",equationIndexes);
  TRACE_POP
}

/*
equation index: 660
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX = powerBlock.exchanger.UA_HX_dis[1] + powerBlock.exchanger.UA_HX_dis[2] + powerBlock.exchanger.UA_HX_dis[3] + powerBlock.exchanger.UA_HX_dis[4] + powerBlock.exchanger.UA_HX_dis[5] + powerBlock.exchanger.UA_HX_dis[6] + powerBlock.exchanger.UA_HX_dis[7] + powerBlock.exchanger.UA_HX_dis[8] + powerBlock.exchanger.UA_HX_dis[9] + powerBlock.exchanger.UA_HX_dis[10] + powerBlock.exchanger.UA_HX_dis[11] + powerBlock.exchanger.UA_HX_dis[12] + powerBlock.exchanger.UA_HX_dis[13] + powerBlock.exchanger.UA_HX_dis[14]
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  data->simulationInfo->realParameter[467] /* powerBlock.exchanger.UA_HX PARAM */ = data->simulationInfo->realParameter[468] /* powerBlock.exchanger.UA_HX_dis[1] PARAM */ + data->simulationInfo->realParameter[469] /* powerBlock.exchanger.UA_HX_dis[2] PARAM */ + data->simulationInfo->realParameter[470] /* powerBlock.exchanger.UA_HX_dis[3] PARAM */ + data->simulationInfo->realParameter[471] /* powerBlock.exchanger.UA_HX_dis[4] PARAM */ + data->simulationInfo->realParameter[472] /* powerBlock.exchanger.UA_HX_dis[5] PARAM */ + data->simulationInfo->realParameter[473] /* powerBlock.exchanger.UA_HX_dis[6] PARAM */ + data->simulationInfo->realParameter[474] /* powerBlock.exchanger.UA_HX_dis[7] PARAM */ + data->simulationInfo->realParameter[475] /* powerBlock.exchanger.UA_HX_dis[8] PARAM */ + data->simulationInfo->realParameter[476] /* powerBlock.exchanger.UA_HX_dis[9] PARAM */ + data->simulationInfo->realParameter[477] /* powerBlock.exchanger.UA_HX_dis[10] PARAM */ + data->simulationInfo->realParameter[478] /* powerBlock.exchanger.UA_HX_dis[11] PARAM */ + data->simulationInfo->realParameter[479] /* powerBlock.exchanger.UA_HX_dis[12] PARAM */ + data->simulationInfo->realParameter[480] /* powerBlock.exchanger.UA_HX_dis[13] PARAM */ + data->simulationInfo->realParameter[481] /* powerBlock.exchanger.UA_HX_dis[14] PARAM */;
  TRACE_POP
}

/*
equation index: 661
type: SIMPLE_ASSIGN
powerBlock._m_HTF_des = powerBlock.exchanger.m_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->simulationInfo->realParameter[587] /* powerBlock.m_HTF_des PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.m_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 662
type: ALGORITHM

  m_HTF_des := $START.m_HTF_des;
  m_HTF_des := powerBlock.m_HTF_des;
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->simulationInfo->realParameter[20] /* m_HTF_des PARAM */ = data->simulationInfo->realParameter[20] /* m_HTF_des PARAM */;

  data->simulationInfo->realParameter[20] /* m_HTF_des PARAM */ = data->simulationInfo->realParameter[587] /* powerBlock.m_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 663
type: SIMPLE_ASSIGN
m_HTF_in = load * m_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->simulationInfo->realParameter[21] /* m_HTF_in PARAM */ = (data->simulationInfo->realParameter[19] /* load PARAM */) * (data->simulationInfo->realParameter[20] /* m_HTF_des PARAM */);
  TRACE_POP
}

/*
equation index: 664
type: SIMPLE_ASSIGN
liftSimple._m_flow = m_HTF_in
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->simulationInfo->realParameter[17] /* liftSimple.m_flow PARAM */ = data->simulationInfo->realParameter[21] /* m_HTF_in PARAM */;
  TRACE_POP
}

/*
equation index: 665
type: SIMPLE_ASSIGN
m_dot._y = m_HTF_in
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->simulationInfo->realParameter[22] /* m_dot.y PARAM */ = data->simulationInfo->realParameter[21] /* m_HTF_in PARAM */;
  TRACE_POP
}

/*
equation index: 666
type: SIMPLE_ASSIGN
source._ports[1]._m_flow = -(if liftSimple.use_input then m_HTF_in else liftSimple.m_flow_fixed)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */ = (-((data->simulationInfo->booleanParameter[2] /* liftSimple.use_input PARAM */?data->simulationInfo->realParameter[21] /* m_HTF_in PARAM */:data->simulationInfo->realParameter[18] /* liftSimple.m_flow_fixed PARAM */)));
  TRACE_POP
}

/*
equation index: 667
type: SIMPLE_ASSIGN
liftSimple._W_loss = 9.806649999999999 * (-source.ports[1].m_flow) * liftSimple.dh * (1.0 - liftSimple.CF) / liftSimple.eff
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->localData[0]->realVars[35] /* liftSimple.W_loss variable */ = (9.806649999999999) * (((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */)) * ((data->simulationInfo->realParameter[13] /* liftSimple.dh PARAM */) * (DIVISION_SIM(1.0 - data->simulationInfo->realParameter[12] /* liftSimple.CF PARAM */,data->simulationInfo->realParameter[15] /* liftSimple.eff PARAM */,"liftSimple.eff",equationIndexes))));
  TRACE_POP
}
extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1213(DATA *data, threadData_t *threadData);


void sCO2PBCalculator_Using_PinchPHX_eqFunction_669(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_670(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_671(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_672(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_673(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_674(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_675(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_676(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_677(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_678(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_679(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_680(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_681(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_682(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_683(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_684(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_685(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_686(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_687(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_688(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_689(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_690(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_691(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_692(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_693(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_694(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_695(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_696(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_697(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_698(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_699(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_700(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_701(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_702(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_703(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_704(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_705(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_706(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_707(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_708(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_709(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_710(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_711(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_712(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_713(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_714(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_715(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_716(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_717(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_718(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_719(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_720(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_721(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_722(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_723(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_724(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_725(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_726(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_727(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_728(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_729(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_730(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_731(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_732(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_733(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_734(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_735(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_736(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_737(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_738(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_739(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_740(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_741(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_742(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_743(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_744(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_745(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_746(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_747(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_748(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_749(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_750(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_751(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_752(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_753(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_754(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_755(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_756(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_757(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_758(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_759(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_760(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_761(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_762(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_763(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_764(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_765(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_766(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_767(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_768(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_769(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_770(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_771(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_772(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_773(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_774(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_775(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_776(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_777(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_778(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_779(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_780(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_781(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_782(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_783(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_784(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_858(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_857(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_856(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_855(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_854(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_853(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_852(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_851(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_850(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_849(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_848(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_847(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_846(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_845(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_844(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_843(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_842(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_841(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_840(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_839(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_838(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_837(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_836(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_835(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_834(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_833(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_832(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_831(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_830(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_829(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_828(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_827(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_826(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_825(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_824(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_823(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_822(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_821(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_820(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_819(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_818(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_817(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_816(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_815(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_814(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_813(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_812(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_811(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_810(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_809(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_808(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_807(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_806(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_805(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_804(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_803(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_802(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_801(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_800(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_799(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_798(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_797(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_796(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_795(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_794(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_793(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_792(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_791(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_790(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_789(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_788(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_787(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_786(DATA*, threadData_t*);
void sCO2PBCalculator_Using_PinchPHX_eqFunction_785(DATA*, threadData_t*);
/*
equation index: 859
indexNonlinear: 46
type: NONLINEAR

vars: {powerBlock._exchanger._h_CO2[15], powerBlock._LTR._h_from_turb[1], powerBlock._exchanger._CO2_port_b._m_flow, powerBlock._LTR._state_from_turb[15]._p, powerBlock._exchanger._h_CO2[14], powerBlock._exchanger._h_CO2[13], powerBlock._exchanger._h_CO2[12], powerBlock._exchanger._h_CO2[11], powerBlock._exchanger._h_CO2[10], powerBlock._exchanger._h_CO2[9], powerBlock._exchanger._h_CO2[3], powerBlock._exchanger._h_CO2[4], powerBlock._exchanger._h_CO2[5], powerBlock._exchanger._h_CO2[6], powerBlock._exchanger._h_CO2[7], powerBlock._exchanger._h_CO2[8], powerBlock._exchanger._h_CO2[2], powerBlock._turbine._C_spouting, powerBlock._HTR._h_from_turb[14], powerBlock._exchanger._h_CO2[1], powerBlock._HTR._h_from_comp[14], powerBlock._HTR._h_from_turb[13], powerBlock._HTR._h_from_comp[13], powerBlock._HTR._h_from_turb[12], powerBlock._HTR._h_from_comp[12], powerBlock._HTR._h_from_turb[11], powerBlock._HTR._h_from_turb[10], powerBlock._HTR._h_from_comp[11], powerBlock._reCompressor._p_out, powerBlock._LTR._h_from_turb[6], powerBlock._LTR._h_from_turb[8], powerBlock._LTR._h_from_turb[9], powerBlock._LTR._h_from_comp[15], powerBlock._HTR._h_from_comp[2], powerBlock._HTR._h_from_turb[3], powerBlock._HTR._h_from_comp[9], powerBlock._HTR._h_from_comp[10], powerBlock._HTR._h_from_turb[9], powerBlock._HTR._h_from_comp[8], powerBlock._HTR._h_from_turb[8], powerBlock._HTR._h_from_comp[7], powerBlock._HTR._h_from_turb[7], powerBlock._HTR._h_from_comp[6], powerBlock._HTR._h_from_turb[6], powerBlock._HTR._h_from_comp[5], powerBlock._HTR._h_from_turb[5], powerBlock._HTR._h_from_comp[4], powerBlock._HTR._h_from_turb[4], powerBlock._HTR._h_from_comp[3], powerBlock._HTR._h_from_turb[2], powerBlock._LTR._h_from_turb[15], powerBlock._LTR._h_from_comp[14], powerBlock._LTR._h_from_turb[14], powerBlock._LTR._h_from_turb[13], powerBlock._LTR._h_from_comp[13], powerBlock._LTR._h_from_turb[12], powerBlock._LTR._h_from_comp[12], powerBlock._LTR._h_from_turb[11], powerBlock._LTR._h_from_comp[11], powerBlock._LTR._h_from_turb[10], powerBlock._LTR._h_from_comp[10], powerBlock._LTR._h_from_comp[9], powerBlock._LTR._h_from_comp[8], powerBlock._LTR._h_from_comp[7], powerBlock._LTR._h_from_turb[7], powerBlock._LTR._h_from_comp[6], powerBlock._LTR._h_from_comp[5], powerBlock._LTR._h_from_turb[5], powerBlock._LTR._h_from_turb[4], powerBlock._LTR._h_from_comp[4], powerBlock._LTR._h_from_turb[3], powerBlock._LTR._h_from_comp[3], powerBlock._LTR._h_from_comp[2], powerBlock._LTR._h_from_turb[2]}
eqns: {669, 670, 671, 672, 673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 858, 857, 856, 855, 854, 853, 852, 851, 850, 849, 848, 847, 846, 845, 844, 843, 842, 841, 840, 839, 838, 837, 836, 835, 834, 833, 832, 831, 830, 829, 828, 827, 826, 825, 824, 823, 822, 821, 820, 819, 818, 817, 816, 815, 814, 813, 812, 811, 810, 809, 808, 807, 806, 805, 804, 803, 802, 801, 800, 799, 798, 797, 796, 795, 794, 793, 792, 791, 790, 789, 788, 787, 786, 785}
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,859};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 859 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[0] = data->localData[0]->realVars[239] /* powerBlock.exchanger.h_CO2[15] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[1] = data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[1] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[2] = data->localData[0]->realVars[203] /* powerBlock.exchanger.CO2_port_b.m_flow variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[3] = data->localData[0]->realVars[190] /* powerBlock.LTR.state_from_turb[15].p variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[4] = data->localData[0]->realVars[238] /* powerBlock.exchanger.h_CO2[14] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[5] = data->localData[0]->realVars[237] /* powerBlock.exchanger.h_CO2[13] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[6] = data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[12] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[7] = data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[11] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[8] = data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[10] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[9] = data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[9] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[10] = data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[3] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[11] = data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[4] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[12] = data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[5] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[13] = data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[6] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[14] = data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[7] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[15] = data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[8] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[16] = data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[2] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[17] = data->localData[0]->realVars[275] /* powerBlock.turbine.C_spouting variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[18] = data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[19] = data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[1] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[20] = data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[21] = data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[22] = data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[23] = data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[24] = data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[25] = data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[26] = data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[27] = data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[28] = data->localData[0]->realVars[267] /* powerBlock.reCompressor.p_out variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[29] = data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[6] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[30] = data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[8] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[31] = data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[9] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[32] = data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_comp[15] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[33] = data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[34] = data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[35] = data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[36] = data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[37] = data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[38] = data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[39] = data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[40] = data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[41] = data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[42] = data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[43] = data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[44] = data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[45] = data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[46] = data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[47] = data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[48] = data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[49] = data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[50] = data->localData[0]->realVars[188] /* powerBlock.LTR.h_from_turb[15] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[51] = data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[14] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[52] = data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[14] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[53] = data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[13] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[54] = data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[13] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[55] = data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[12] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[56] = data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[12] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[57] = data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[11] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[58] = data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[11] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[59] = data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[10] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[60] = data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[10] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[61] = data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[9] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[62] = data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[8] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[63] = data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[7] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[64] = data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[7] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[65] = data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[6] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[66] = data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[5] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[67] = data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[5] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[68] = data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[4] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[69] = data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[4] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[70] = data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[3] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[71] = data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[3] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[72] = data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[2] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[73] = data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 46);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,859};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 859 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[239] /* powerBlock.exchanger.h_CO2[15] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[0];
  data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[1] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[1];
  data->localData[0]->realVars[203] /* powerBlock.exchanger.CO2_port_b.m_flow variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[2];
  data->localData[0]->realVars[190] /* powerBlock.LTR.state_from_turb[15].p variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[3];
  data->localData[0]->realVars[238] /* powerBlock.exchanger.h_CO2[14] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[4];
  data->localData[0]->realVars[237] /* powerBlock.exchanger.h_CO2[13] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[5];
  data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[12] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[6];
  data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[11] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[7];
  data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[10] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[8];
  data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[9] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[9];
  data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[3] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[10];
  data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[4] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[11];
  data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[5] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[12];
  data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[6] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[13];
  data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[7] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[14];
  data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[8] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[15];
  data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[2] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[16];
  data->localData[0]->realVars[275] /* powerBlock.turbine.C_spouting variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[17];
  data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[18];
  data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[1] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[19];
  data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[20];
  data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[21];
  data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[22];
  data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[23];
  data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[24];
  data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[25];
  data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[26];
  data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[27];
  data->localData[0]->realVars[267] /* powerBlock.reCompressor.p_out variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[28];
  data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[6] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[29];
  data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[8] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[30];
  data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[9] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[31];
  data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_comp[15] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[32];
  data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[33];
  data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[34];
  data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[35];
  data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[36];
  data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[37];
  data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[38];
  data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[39];
  data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[40];
  data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[41];
  data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[42];
  data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[43];
  data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[44];
  data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[45];
  data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[46];
  data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[47];
  data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[48];
  data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[49];
  data->localData[0]->realVars[188] /* powerBlock.LTR.h_from_turb[15] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[50];
  data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[14] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[51];
  data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[14] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[52];
  data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[13] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[53];
  data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[13] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[54];
  data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[12] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[55];
  data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[12] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[56];
  data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[11] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[57];
  data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[11] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[58];
  data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[10] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[59];
  data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[10] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[60];
  data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[9] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[61];
  data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[8] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[62];
  data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[7] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[63];
  data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[7] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[64];
  data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[6] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[65];
  data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[5] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[66];
  data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[5] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[67];
  data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[4] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[68];
  data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[4] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[69];
  data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[3] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[70];
  data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[3] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[71];
  data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[2] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[72];
  data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[2] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[73];
  TRACE_POP
}
extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1186(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1184(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1182(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1183(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1165(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1166(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1167(DATA *data, threadData_t *threadData);


/*
equation index: 867
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT[1] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.LTR.state_from_turb[15].p, powerBlock.LTR.h_from_turb[1], tableIDT_p_h) - T_amb_input
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,867};
  data->localData[0]->realVars[197] /* powerBlock.cooler.deltaT[1] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[190] /* powerBlock.LTR.state_from_turb[15].p variable */, data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[1] variable */, data->simulationInfo->extObjs[36]) - data->simulationInfo->realParameter[4] /* T_amb_input PARAM */;
  TRACE_POP
}
extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1173(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1174(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1178(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1194(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1170(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1195(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1196(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1197(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1199(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1198(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1200(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1201(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1169(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1202(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1203(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1204(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1206(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1168(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1205(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1208(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1207(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1193(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1192(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1191(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1190(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1189(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1188(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1187(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1185(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1181(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1172(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1175(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1176(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1212(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1214(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1209(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1177(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1171(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1210(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1211(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1215(DATA *data, threadData_t *threadData);

extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1180(DATA *data, threadData_t *threadData);


/*
equation index: 910
type: SIMPLE_ASSIGN
powerBlock._ratio_m_des_real = powerBlock.exchanger.ratio_m_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_910(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,910};
  data->simulationInfo->realParameter[620] /* powerBlock.ratio_m_des_real PARAM */ = data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */;
  TRACE_POP
}

/*
equation index: 911
type: SIMPLE_ASSIGN
powerBlock._Q_HX_des = powerBlock.exchanger.m_CO2_des * (powerBlock.exchanger.h_out_CO2_des - powerBlock.exchanger.h_in_CO2_des)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_911(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,911};
  data->simulationInfo->realParameter[311] /* powerBlock.Q_HX_des PARAM */ = (data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_CO2_des PARAM */) * (data->simulationInfo->realParameter[499] /* powerBlock.exchanger.h_out_CO2_des PARAM */ - data->simulationInfo->realParameter[497] /* powerBlock.exchanger.h_in_CO2_des PARAM */);
  TRACE_POP
}

/*
equation index: 912
type: SIMPLE_ASSIGN
powerBlock._eta_cycle_design = ((-powerBlock.mainCompressor.W_comp_des) - powerBlock.reCompressor.W_comp_des - powerBlock.turbine.W_turb_des) / powerBlock.Q_HX_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_912(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,912};
  data->simulationInfo->realParameter[426] /* powerBlock.eta_cycle_design PARAM */ = DIVISION_SIM((-data->simulationInfo->realParameter[592] /* powerBlock.mainCompressor.W_comp_des PARAM */) - data->simulationInfo->realParameter[625] /* powerBlock.reCompressor.W_comp_des PARAM */ - data->simulationInfo->realParameter[650] /* powerBlock.turbine.W_turb_des PARAM */,data->simulationInfo->realParameter[311] /* powerBlock.Q_HX_des PARAM */,"powerBlock.Q_HX_des",equationIndexes);
  TRACE_POP
}

/*
equation index: 913
type: SIMPLE_ASSIGN
powerBlock._eta_net_design = ((-powerBlock.mainCompressor.W_comp_des) - powerBlock.reCompressor.W_comp_des - powerBlock.turbine.W_turb_des) * (1.0 - powerBlock.f_fixed_load) * powerBlock.eta_motor * (1.0 - powerBlock.par_fr) / powerBlock.Q_HX_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_913(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,913};
  data->simulationInfo->realParameter[428] /* powerBlock.eta_net_design PARAM */ = ((-data->simulationInfo->realParameter[592] /* powerBlock.mainCompressor.W_comp_des PARAM */) - data->simulationInfo->realParameter[625] /* powerBlock.reCompressor.W_comp_des PARAM */ - data->simulationInfo->realParameter[650] /* powerBlock.turbine.W_turb_des PARAM */) * ((1.0 - data->simulationInfo->realParameter[583] /* powerBlock.f_fixed_load PARAM */) * ((data->simulationInfo->realParameter[427] /* powerBlock.eta_motor PARAM */) * (DIVISION_SIM(1.0 - data->simulationInfo->realParameter[610] /* powerBlock.par_fr PARAM */,data->simulationInfo->realParameter[311] /* powerBlock.Q_HX_des PARAM */,"powerBlock.Q_HX_des",equationIndexes))));
  TRACE_POP
}
extern void sCO2PBCalculator_Using_PinchPHX_eqFunction_1216(DATA *data, threadData_t *threadData);


/*
equation index: 915
type: SIMPLE_ASSIGN
source._medium._d = 2000.0
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_915(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,915};
  data->localData[0]->realVars[303] /* source.medium.d variable */ = 2000.0;
  TRACE_POP
}

/*
equation index: 916
type: SIMPLE_ASSIGN
source._medium._p_bar = 1.0
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_916(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,916};
  data->localData[0]->realVars[304] /* source.medium.p_bar variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 917
type: SIMPLE_ASSIGN
powerBlock._m_sup = true
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_917(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,917};
  data->localData[0]->booleanVars[1] /* powerBlock.m_sup DISCRETE */ = 1;
  TRACE_POP
}

/*
equation index: 918
type: SIMPLE_ASSIGN
always_false._y = false
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_918(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,918};
  data->localData[0]->booleanVars[0] /* always_false.y DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 919
type: SIMPLE_ASSIGN
parasities_input._y = 0.0
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_919(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,919};
  data->localData[0]->realVars[37] /* parasities_input.y variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 920
type: SIMPLE_ASSIGN
source._state._p = 100000.0
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_920(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,920};
  data->localData[0]->realVars[308] /* source.state.p variable */ = 100000.0;
  TRACE_POP
}

/*
equation index: 921
type: SIMPLE_ASSIGN
sink._state._h = if noEvent(sink.T < 0.0) then 0.0 else -196601.368854 + 113.1902543343771 * sink.T ^ 1.3093
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_921(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,921};
  modelica_boolean tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_boolean tmp8;
  modelica_real tmp9;
  tmp0 = Less(data->simulationInfo->realParameter[671] /* sink.T PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[671] /* sink.T PARAM */;
    tmp2 = 1.3093;
    if(tmp1 < 0.0 && tmp2 != 0.0)
    {
      tmp4 = modf(tmp2, &tmp5);
      
      if(tmp4 > 0.5)
      {
        tmp4 -= 1.0;
        tmp5 += 1.0;
      }
      else if(tmp4 < -0.5)
      {
        tmp4 += 1.0;
        tmp5 -= 1.0;
      }
      
      if(fabs(tmp4) < 1e-10)
        tmp3 = pow(tmp1, tmp5);
      else
      {
        tmp7 = modf(1.0/tmp2, &tmp6);
        if(tmp7 > 0.5)
        {
          tmp7 -= 1.0;
          tmp6 += 1.0;
        }
        else if(tmp7 < -0.5)
        {
          tmp7 += 1.0;
          tmp6 -= 1.0;
        }
        if(fabs(tmp7) < 1e-10 && ((unsigned long)tmp6 & 1))
        {
          tmp3 = -pow(-tmp1, tmp4)*pow(tmp1, tmp5);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
        }
      }
    }
    else
    {
      tmp3 = pow(tmp1, tmp2);
    }
    if(isnan(tmp3) || isinf(tmp3))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp1, tmp2);
    }
    tmp9 = -196601.368854 + (113.1902543343771) * (tmp3);
  }
  data->localData[0]->realVars[293] /* sink.state.h variable */ = tmp9;
  TRACE_POP
}

/*
equation index: 922
type: SIMPLE_ASSIGN
sink._medium._u = sink.state.h + (-0.0005) * sink.p
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  data->localData[0]->realVars[292] /* sink.medium.u variable */ = data->localData[0]->realVars[293] /* sink.state.h variable */ + (-0.0005) * (data->simulationInfo->realParameter[681] /* sink.p PARAM */);
  TRACE_POP
}

/*
equation index: 923
type: SIMPLE_ASSIGN
sink._medium._T = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(sink.state.h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_923(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,923};
  data->localData[0]->realVars[283] /* sink.medium.T variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[293] /* sink.state.h variable */);
  TRACE_POP
}

/*
equation index: 924
type: SIMPLE_ASSIGN
sink._medium._T_degC = -273.15 + sink.medium.T
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_924(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,924};
  data->localData[0]->realVars[284] /* sink.medium.T_degC variable */ = -273.15 + data->localData[0]->realVars[283] /* sink.medium.T variable */;
  TRACE_POP
}

/*
equation index: 925
type: SIMPLE_ASSIGN
sink._medium._d = 2000.0
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_925(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,925};
  data->localData[0]->realVars[290] /* sink.medium.d variable */ = 2000.0;
  TRACE_POP
}

/*
equation index: 926
type: SIMPLE_ASSIGN
powerBlock._E_net = $START.powerBlock.E_net
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_926(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,926};
  data->localData[0]->realVars[1] /* powerBlock.E_net STATE(1) */ = data->modelData->realVarsData[1].attribute /* powerBlock.E_net STATE(1) */.start;
  TRACE_POP
}

/*
equation index: 927
type: SIMPLE_ASSIGN
powerBlock._exchanger._p_in_HTF_des = powerBlock.state_HTF_in_des.p
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */ = data->simulationInfo->realParameter[644] /* powerBlock.state_HTF_in_des.p PARAM */;
  TRACE_POP
}

/*
equation index: 928
type: SIMPLE_ASSIGN
powerBlock._exchanger._p_out_HTF_des = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  data->simulationInfo->realParameter[506] /* powerBlock.exchanger.p_out_HTF_des PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 929
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[15]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  data->simulationInfo->realParameter[582] /* powerBlock.exchanger.state_HTF_des[15].p PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 930
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[14]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  data->simulationInfo->realParameter[581] /* powerBlock.exchanger.state_HTF_des[14].p PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 931
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[13]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  data->simulationInfo->realParameter[580] /* powerBlock.exchanger.state_HTF_des[13].p PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 932
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[12]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  data->simulationInfo->realParameter[579] /* powerBlock.exchanger.state_HTF_des[12].p PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 933
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[11]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  data->simulationInfo->realParameter[578] /* powerBlock.exchanger.state_HTF_des[11].p PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 934
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[10]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  data->simulationInfo->realParameter[577] /* powerBlock.exchanger.state_HTF_des[10].p PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 935
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[9]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  data->simulationInfo->realParameter[576] /* powerBlock.exchanger.state_HTF_des[9].p PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 936
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[8]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  data->simulationInfo->realParameter[575] /* powerBlock.exchanger.state_HTF_des[8].p PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 937
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[7]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  data->simulationInfo->realParameter[574] /* powerBlock.exchanger.state_HTF_des[7].p PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 938
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[6]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  data->simulationInfo->realParameter[573] /* powerBlock.exchanger.state_HTF_des[6].p PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 939
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[5]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  data->simulationInfo->realParameter[572] /* powerBlock.exchanger.state_HTF_des[5].p PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 940
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[4]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,940};
  data->simulationInfo->realParameter[571] /* powerBlock.exchanger.state_HTF_des[4].p PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 941
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[3]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,941};
  data->simulationInfo->realParameter[570] /* powerBlock.exchanger.state_HTF_des[3].p PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 942
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[2]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,942};
  data->simulationInfo->realParameter[569] /* powerBlock.exchanger.state_HTF_des[2].p PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 943
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[1]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  data->simulationInfo->realParameter[568] /* powerBlock.exchanger.state_HTF_des[1].p PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 946
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("CARBO HSP 40/70", {"Al2O3", "SiO2", "Fe2O3", "TiO2", "other"}, false, true, sink.X, "FixedBoundary");
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,946};
  static const MMC_DEFSTRINGLIT(tmp10,15,"CARBO HSP 40/70");
  string_array tmp11;
  static const MMC_DEFSTRINGLIT(tmp12,5,"Al2O3");
  static const MMC_DEFSTRINGLIT(tmp13,4,"SiO2");
  static const MMC_DEFSTRINGLIT(tmp14,5,"Fe2O3");
  static const MMC_DEFSTRINGLIT(tmp15,4,"TiO2");
  static const MMC_DEFSTRINGLIT(tmp16,5,"other");
  real_array tmp17;
  static const MMC_DEFSTRINGLIT(tmp18,13,"FixedBoundary");
  array_alloc_scalar_string_array(&tmp11, 5, (modelica_string)MMC_REFSTRINGLIT(tmp12), (modelica_string)MMC_REFSTRINGLIT(tmp13), (modelica_string)MMC_REFSTRINGLIT(tmp14), (modelica_string)MMC_REFSTRINGLIT(tmp15), (modelica_string)MMC_REFSTRINGLIT(tmp16));
  real_array_create(&tmp17, ((modelica_real*)&((&data->simulationInfo->realParameter[672] /* sink.X[1] PARAM */)[calc_base_index_dims_subs(1, 5, ((modelica_integer) 1))])), 1, 5);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp10), tmp11, 0, 1, tmp17, MMC_REFSTRINGLIT(tmp18));
  TRACE_POP
}

/*
equation index: 945
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("CARBO HSP 40/70", {"Al2O3", "SiO2", "Fe2O3", "TiO2", "other"}, false, false, source.X, "FixedBoundary");
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,945};
  static const MMC_DEFSTRINGLIT(tmp19,15,"CARBO HSP 40/70");
  string_array tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,5,"Al2O3");
  static const MMC_DEFSTRINGLIT(tmp22,4,"SiO2");
  static const MMC_DEFSTRINGLIT(tmp23,5,"Fe2O3");
  static const MMC_DEFSTRINGLIT(tmp24,4,"TiO2");
  static const MMC_DEFSTRINGLIT(tmp25,5,"other");
  real_array tmp26;
  static const MMC_DEFSTRINGLIT(tmp27,13,"FixedBoundary");
  array_alloc_scalar_string_array(&tmp20, 5, (modelica_string)MMC_REFSTRINGLIT(tmp21), (modelica_string)MMC_REFSTRINGLIT(tmp22), (modelica_string)MMC_REFSTRINGLIT(tmp23), (modelica_string)MMC_REFSTRINGLIT(tmp24), (modelica_string)MMC_REFSTRINGLIT(tmp25));
  real_array_create(&tmp26, ((modelica_real*)&((&data->simulationInfo->realParameter[685] /* source.X[1] PARAM */)[calc_base_index_dims_subs(1, 5, ((modelica_integer) 1))])), 1, 5);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp19), tmp20, 0, 0, tmp26, MMC_REFSTRINGLIT(tmp27));
  TRACE_POP
}

/*
equation index: 944
type: ALGORITHM

  assert(sink.p >= 0.0, "Pressure (= " + String(sink.p, 6, 0, true) + " Pa) of medium \"" + "CARBO HSP 40/70" + "\" is negative
(Temperature = " + String(sink.medium.T, 6, 0, true) + " K)");
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,944};
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,12,"Pressure (= ");
  modelica_string tmp30;
  static const MMC_DEFSTRINGLIT(tmp31,16," Pa) of medium \"");
  static const MMC_DEFSTRINGLIT(tmp32,15,"CARBO HSP 40/70");
  static const MMC_DEFSTRINGLIT(tmp33,29,"\" is negative\n(Temperature = ");
  modelica_string tmp34;
  static const MMC_DEFSTRINGLIT(tmp35,3," K)");
  static int tmp36 = 0;
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
  {
    tmp28 = GreaterEq(data->simulationInfo->realParameter[681] /* sink.p PARAM */,0.0);
    if(!tmp28)
    {
      tmp30 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[681] /* sink.p PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp31));
      tmpMeta[2] = stringAppend(tmpMeta[1],MMC_REFSTRINGLIT(tmp32));
      tmpMeta[3] = stringAppend(tmpMeta[2],MMC_REFSTRINGLIT(tmp33));
      tmp34 = modelica_real_to_modelica_string(data->localData[0]->realVars[283] /* sink.medium.T variable */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[4] = stringAppend(tmpMeta[3],tmp34);
      tmpMeta[5] = stringAppend(tmpMeta[4],MMC_REFSTRINGLIT(tmp35));
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4529,7,4530,76,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.p >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[5]));
      }
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void sCO2PBCalculator_Using_PinchPHX_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_2(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_3(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_4(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_5(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_6(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_7(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_8(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_9(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_10(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_11(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_12(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_13(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_14(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_15(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_16(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_17(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_18(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_19(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_20(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_21(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_22(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_23(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_24(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_25(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_26(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_27(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_28(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_29(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_30(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_31(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_32(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_33(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_35(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_36(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_37(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_38(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_39(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_40(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_41(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_42(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_43(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_44(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_45(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_46(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_47(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_48(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_49(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_50(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_51(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_52(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_53(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_54(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_55(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_56(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_57(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_58(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_59(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_60(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_61(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_62(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_63(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_64(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_65(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_66(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_67(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_68(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_69(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_70(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_71(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_72(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_73(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_74(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_75(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_76(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_77(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_78(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_79(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_80(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_81(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_82(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_83(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_84(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_85(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_86(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_87(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_88(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_89(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_90(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_91(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_92(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_93(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_94(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_95(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_96(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_97(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_98(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_99(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_100(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_101(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_102(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_103(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_104(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_105(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_106(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_107(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_108(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_109(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_110(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_111(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_112(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_113(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_114(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_115(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_116(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_117(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_118(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_119(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_120(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_121(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_122(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_123(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_124(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_125(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_126(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_127(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_128(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_129(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_130(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_131(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_132(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_133(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_134(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_135(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_136(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_137(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_138(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_139(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_140(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_141(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_142(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_143(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_144(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_145(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_147(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_148(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_149(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_150(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_151(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_152(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_153(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_155(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_156(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_157(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_158(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_159(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_160(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_161(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_162(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_163(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_164(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_165(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_166(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_167(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_168(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_169(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_170(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_171(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_172(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_173(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_174(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_175(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_176(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_177(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_178(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_179(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_180(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_181(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_182(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_183(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_341(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_342(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_343(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_344(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_346(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_347(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_375(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_376(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_378(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_379(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_380(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_382(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_383(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_384(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_386(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_387(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_388(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_390(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_391(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_392(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_394(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_395(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_396(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_398(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_399(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_400(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_402(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_403(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_404(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_406(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_407(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_408(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_410(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_411(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_412(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_414(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_415(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_416(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_418(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_419(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_420(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_422(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_423(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_424(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_426(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_427(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_444(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_445(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_446(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_447(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_448(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_449(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_450(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_451(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_452(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_453(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_454(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_455(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_456(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_457(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_458(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_459(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_460(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_461(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_462(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_463(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_464(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_465(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_466(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_467(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_468(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_469(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_470(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_471(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_472(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_473(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_474(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_475(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_476(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_477(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_478(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_479(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_480(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_481(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_482(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_483(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_484(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_485(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_486(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_487(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_488(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_489(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_490(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_491(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_492(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_493(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_494(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_495(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_496(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_497(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_498(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_499(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_500(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_501(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_502(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_503(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_504(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_505(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_506(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_507(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_508(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_509(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_510(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_511(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_512(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_513(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_514(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_516(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_517(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_518(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_519(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_547(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_549(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_551(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_553(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_555(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_557(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_559(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_561(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_563(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_565(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_567(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_569(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_571(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_573(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_574(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_575(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_576(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_605(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_606(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_608(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_609(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_611(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_612(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_614(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_615(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_617(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_618(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_620(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_621(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_623(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_624(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_626(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_627(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_629(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_630(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_632(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_633(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_635(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_636(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_638(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_639(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_641(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_642(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_644(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_645(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_646(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_647(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_648(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_649(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_650(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_651(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_652(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_653(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_654(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_655(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_656(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_657(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_658(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_659(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_660(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_661(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_662(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_663(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_664(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_665(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_666(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_667(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1213(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_859(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1186(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1184(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1182(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1183(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1165(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1166(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1167(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_867(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1173(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1174(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1178(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1194(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1170(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1195(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1196(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1197(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1199(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1198(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1200(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1201(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1169(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1202(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1203(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1204(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1206(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1168(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1205(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1208(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1207(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1193(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1192(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1191(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1190(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1189(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1188(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1187(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1185(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1181(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1172(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1175(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1176(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1212(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1214(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1209(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1177(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1171(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1210(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1211(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1215(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1180(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_910(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_911(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_912(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_913(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_1216(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_915(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_916(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_917(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_918(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_919(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_920(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_921(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_922(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_923(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_924(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_925(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_926(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_927(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_928(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_929(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_930(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_931(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_932(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_933(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_934(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_935(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_936(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_937(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_938(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_939(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_940(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_941(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_942(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_943(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_946(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_945(data, threadData);
  sCO2PBCalculator_Using_PinchPHX_eqFunction_944(data, threadData);
  TRACE_POP
}


int sCO2PBCalculator_Using_PinchPHX_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  sCO2PBCalculator_Using_PinchPHX_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int sCO2PBCalculator_Using_PinchPHX_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_Using_PinchPHX_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int *equationIndexes = NULL;
  double res = 0.0;

  
  TRACE_POP
  return 0;
}


#if defined(__cplusplus)
}
#endif

