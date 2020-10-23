/* Initialization */
#include "sCO2SurrogatePBRig_model.h"
#include "sCO2SurrogatePBRig_11mix.h"
#include "sCO2SurrogatePBRig_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void sCO2SurrogatePBRig_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
E_elec = $START.E_elec
*/
void sCO2SurrogatePBRig_eqFunction_1(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1};
  data->localData[0]->realVars[0] /* E_elec STATE(1,P_elec) */ = data->modelData->realVarsData[0].attribute /* E_elec STATE(1,P_elec) */.start;
  TRACE_POP
}

/*
equation index: 2
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._E_elec = $START.sCO2PBDesignPointCalculator.E_elec
*/
void sCO2SurrogatePBRig_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[2] /* sCO2PBDesignPointCalculator.E_elec STATE(1,sCO2PBDesignPointCalculator.P_elec) */ = data->modelData->realVarsData[2].attribute /* sCO2PBDesignPointCalculator.E_elec STATE(1,sCO2PBDesignPointCalculator.P_elec) */.start;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
source._medium._R = 80.61759766268693
*/
void sCO2SurrogatePBRig_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[346] /* source.medium.R variable */ = 80.61759766268693;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
source._medium._MM = 0.10313381
*/
void sCO2SurrogatePBRig_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[345] /* source.medium.MM variable */ = 0.10313381;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
source._medium._X[1] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_5(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,5};
  data->localData[0]->realVars[349] /* source.medium.X[1] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 6
type: SIMPLE_ASSIGN
source._medium._X[2] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_6(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,6};
  data->localData[0]->realVars[350] /* source.medium.X[2] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 7
type: SIMPLE_ASSIGN
source._medium._X[3] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_7(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,7};
  data->localData[0]->realVars[351] /* source.medium.X[3] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 8
type: SIMPLE_ASSIGN
source._medium._X[4] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_8(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,8};
  data->localData[0]->realVars[352] /* source.medium.X[4] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 9
type: SIMPLE_ASSIGN
source._medium._X[5] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_9(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,9};
  data->localData[0]->realVars[353] /* source.medium.X[5] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 10
type: SIMPLE_ASSIGN
sink._medium._R = 80.61759766268693
*/
void sCO2SurrogatePBRig_eqFunction_10(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,10};
  data->localData[0]->realVars[333] /* sink.medium.R variable */ = 80.61759766268693;
  TRACE_POP
}

/*
equation index: 11
type: SIMPLE_ASSIGN
sink._medium._MM = 0.10313381
*/
void sCO2SurrogatePBRig_eqFunction_11(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,11};
  data->localData[0]->realVars[332] /* sink.medium.MM variable */ = 0.10313381;
  TRACE_POP
}

/*
equation index: 12
type: SIMPLE_ASSIGN
sink._medium._X[1] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_12(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,12};
  data->localData[0]->realVars[336] /* sink.medium.X[1] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 13
type: SIMPLE_ASSIGN
sink._medium._X[2] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_13(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,13};
  data->localData[0]->realVars[337] /* sink.medium.X[2] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 14
type: SIMPLE_ASSIGN
sink._medium._X[3] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_14(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,14};
  data->localData[0]->realVars[338] /* sink.medium.X[3] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 15
type: SIMPLE_ASSIGN
sink._medium._X[4] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_15(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,15};
  data->localData[0]->realVars[339] /* sink.medium.X[4] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 16
type: SIMPLE_ASSIGN
sink._medium._X[5] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_16(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,16};
  data->localData[0]->realVars[340] /* sink.medium.X[5] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 17
type: SIMPLE_ASSIGN
liftSimple._fluid_a._h_outflow = 0.0
*/
void sCO2SurrogatePBRig_eqFunction_17(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,17};
  data->localData[0]->realVars[44] /* liftSimple.fluid_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 18
type: SIMPLE_ASSIGN
powerBlock._fluid_a._h_outflow = 0.0
*/
void sCO2SurrogatePBRig_eqFunction_18(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,18};
  data->localData[0]->realVars[49] /* powerBlock.fluid_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 19
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._port_a._h_outflow = 0.0
*/
void sCO2SurrogatePBRig_eqFunction_19(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,19};
  data->localData[0]->realVars[281] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.port_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 20
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._CO2_port_a._h_outflow = 0.0
*/
void sCO2SurrogatePBRig_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[224] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._port_a._h_outflow = 0.0
*/
void sCO2SurrogatePBRig_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[292] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.port_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._medium._R = 80.61759766268693
*/
void sCO2SurrogatePBRig_eqFunction_22(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,22};
  data->localData[0]->realVars[318] /* sCO2PBDesignPointCalculator.source.medium.R variable */ = 80.61759766268693;
  TRACE_POP
}

/*
equation index: 23
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._medium._MM = 0.10313381
*/
void sCO2SurrogatePBRig_eqFunction_23(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,23};
  data->localData[0]->realVars[317] /* sCO2PBDesignPointCalculator.source.medium.MM variable */ = 0.10313381;
  TRACE_POP
}

/*
equation index: 24
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._medium._X[1] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_24(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,24};
  data->localData[0]->realVars[321] /* sCO2PBDesignPointCalculator.source.medium.X[1] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 25
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._medium._X[2] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_25(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,25};
  data->localData[0]->realVars[322] /* sCO2PBDesignPointCalculator.source.medium.X[2] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 26
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._medium._X[3] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[323] /* sCO2PBDesignPointCalculator.source.medium.X[3] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._medium._X[4] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->localData[0]->realVars[324] /* sCO2PBDesignPointCalculator.source.medium.X[4] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._medium._X[5] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->localData[0]->realVars[325] /* sCO2PBDesignPointCalculator.source.medium.X[5] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._medium._R = 80.61759766268693
*/
void sCO2SurrogatePBRig_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->localData[0]->realVars[305] /* sCO2PBDesignPointCalculator.sink.medium.R variable */ = 80.61759766268693;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._medium._MM = 0.10313381
*/
void sCO2SurrogatePBRig_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->localData[0]->realVars[304] /* sCO2PBDesignPointCalculator.sink.medium.MM variable */ = 0.10313381;
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._medium._X[1] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->localData[0]->realVars[308] /* sCO2PBDesignPointCalculator.sink.medium.X[1] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._medium._X[2] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->localData[0]->realVars[309] /* sCO2PBDesignPointCalculator.sink.medium.X[2] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._medium._X[3] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->localData[0]->realVars[310] /* sCO2PBDesignPointCalculator.sink.medium.X[3] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._medium._X[4] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->localData[0]->realVars[311] /* sCO2PBDesignPointCalculator.sink.medium.X[4] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 35
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._medium._X[5] = 0.2
*/
void sCO2SurrogatePBRig_eqFunction_35(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,35};
  data->localData[0]->realVars[312] /* sCO2PBDesignPointCalculator.sink.medium.X[5] variable */ = 0.2;
  TRACE_POP
}

/*
equation index: 36
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._liftSimple._fluid_a._h_outflow = 0.0
*/
void sCO2SurrogatePBRig_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  data->localData[0]->realVars[58] /* sCO2PBDesignPointCalculator.liftSimple.fluid_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._HTF_port_a._h_outflow = 0.0
*/
void sCO2SurrogatePBRig_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
  data->localData[0]->realVars[226] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 38
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._medium._p_bar = 1e-05 * sCO2PBDesignPointCalculator.sink.p
*/
void sCO2SurrogatePBRig_eqFunction_38(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,38};
  data->localData[0]->realVars[314] /* sCO2PBDesignPointCalculator.sink.medium.p_bar variable */ = (1e-05) * (data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */);
  TRACE_POP
}

/*
equation index: 39
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._state._h = if noEvent(sCO2PBDesignPointCalculator.source.T < 0.0) then 0.0 else -196601.368854 + 113.1902543343771 * sCO2PBDesignPointCalculator.source.T ^ 1.3093
*/
void sCO2SurrogatePBRig_eqFunction_39(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,39};
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
  tmp0 = Less(data->simulationInfo->realParameter[779] /* sCO2PBDesignPointCalculator.source.T PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[779] /* sCO2PBDesignPointCalculator.source.T PARAM */;
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
  data->localData[0]->realVars[330] /* sCO2PBDesignPointCalculator.source.state.h variable */ = tmp9;
  TRACE_POP
}

/*
equation index: 40
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._medium._u = -50.0 + sCO2PBDesignPointCalculator.source.state.h
*/
void sCO2SurrogatePBRig_eqFunction_40(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,40};
  data->localData[0]->realVars[328] /* sCO2PBDesignPointCalculator.source.medium.u variable */ = -50.0 + data->localData[0]->realVars[330] /* sCO2PBDesignPointCalculator.source.state.h variable */;
  TRACE_POP
}

/*
equation index: 41
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._medium._T = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(sCO2PBDesignPointCalculator.source.state.h)
*/
void sCO2SurrogatePBRig_eqFunction_41(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,41};
  data->localData[0]->realVars[319] /* sCO2PBDesignPointCalculator.source.medium.T variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[330] /* sCO2PBDesignPointCalculator.source.state.h variable */);
  TRACE_POP
}

/*
equation index: 42
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._medium._T_degC = -273.15 + sCO2PBDesignPointCalculator.source.medium.T
*/
void sCO2SurrogatePBRig_eqFunction_42(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,42};
  data->localData[0]->realVars[320] /* sCO2PBDesignPointCalculator.source.medium.T_degC variable */ = -273.15 + data->localData[0]->realVars[319] /* sCO2PBDesignPointCalculator.source.medium.T variable */;
  TRACE_POP
}

/*
equation index: 43
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_in = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(sCO2PBDesignPointCalculator.source.state.h)
*/
void sCO2SurrogatePBRig_eqFunction_43(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,43};
  data->localData[0]->realVars[229] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_in variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[330] /* sCO2PBDesignPointCalculator.source.state.h variable */);
  TRACE_POP
}

/*
equation index: 44
type: SIMPLE_ASSIGN
source._state._h = if noEvent(source.T < 0.0) then 0.0 else -196601.368854 + 113.1902543343771 * source.T ^ 1.3093
*/
void sCO2SurrogatePBRig_eqFunction_44(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,44};
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  tmp10 = Less(data->simulationInfo->realParameter[801] /* source.T PARAM */,0.0);
  tmp18 = (modelica_boolean)tmp10;
  if(tmp18)
  {
    tmp19 = 0.0;
  }
  else
  {
    tmp11 = data->simulationInfo->realParameter[801] /* source.T PARAM */;
    tmp12 = 1.3093;
    if(tmp11 < 0.0 && tmp12 != 0.0)
    {
      tmp14 = modf(tmp12, &tmp15);
      
      if(tmp14 > 0.5)
      {
        tmp14 -= 1.0;
        tmp15 += 1.0;
      }
      else if(tmp14 < -0.5)
      {
        tmp14 += 1.0;
        tmp15 -= 1.0;
      }
      
      if(fabs(tmp14) < 1e-10)
        tmp13 = pow(tmp11, tmp15);
      else
      {
        tmp17 = modf(1.0/tmp12, &tmp16);
        if(tmp17 > 0.5)
        {
          tmp17 -= 1.0;
          tmp16 += 1.0;
        }
        else if(tmp17 < -0.5)
        {
          tmp17 += 1.0;
          tmp16 -= 1.0;
        }
        if(fabs(tmp17) < 1e-10 && ((unsigned long)tmp16 & 1))
        {
          tmp13 = -pow(-tmp11, tmp14)*pow(tmp11, tmp15);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp11, tmp12);
        }
      }
    }
    else
    {
      tmp13 = pow(tmp11, tmp12);
    }
    if(isnan(tmp13) || isinf(tmp13))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp11, tmp12);
    }
    tmp19 = -196601.368854 + (113.1902543343771) * (tmp13);
  }
  data->localData[0]->realVars[358] /* source.state.h variable */ = tmp19;
  TRACE_POP
}

/*
equation index: 45
type: SIMPLE_ASSIGN
source._medium._u = -50.0 + source.state.h
*/
void sCO2SurrogatePBRig_eqFunction_45(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,45};
  data->localData[0]->realVars[356] /* source.medium.u variable */ = -50.0 + data->localData[0]->realVars[358] /* source.state.h variable */;
  TRACE_POP
}

/*
equation index: 46
type: SIMPLE_ASSIGN
source._medium._T = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(source.state.h)
*/
void sCO2SurrogatePBRig_eqFunction_46(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,46};
  data->localData[0]->realVars[347] /* source.medium.T variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[358] /* source.state.h variable */);
  TRACE_POP
}

/*
equation index: 47
type: SIMPLE_ASSIGN
source._medium._T_degC = -273.15 + source.medium.T
*/
void sCO2SurrogatePBRig_eqFunction_47(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,47};
  data->localData[0]->realVars[348] /* source.medium.T_degC variable */ = -273.15 + data->localData[0]->realVars[347] /* source.medium.T variable */;
  TRACE_POP
}

/*
equation index: 48
type: SIMPLE_ASSIGN
powerBlock._raw_input[8] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(source.state.h)
*/
void sCO2SurrogatePBRig_eqFunction_48(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,48};
  data->localData[0]->realVars[53] /* powerBlock.raw_input[8] variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[358] /* source.state.h variable */);
  TRACE_POP
}

/*
equation index: 49
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._C_generator = 15.44538203362177 * sCO2PBDesignPointCalculator.powerBlock.pri_generator
*/
void sCO2SurrogatePBRig_eqFunction_49(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,49};
  data->simulationInfo->realParameter[127] /* sCO2PBDesignPointCalculator.powerBlock.C_generator PARAM */ = (15.44538203362177) * (data->simulationInfo->realParameter[711] /* sCO2PBDesignPointCalculator.powerBlock.pri_generator PARAM */);
  TRACE_POP
}

/*
equation index: 50
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_des[1] = sCO2PBDesignPointCalculator.powerBlock.T_HTF_out
*/
void sCO2SurrogatePBRig_eqFunction_50(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,50};
  data->simulationInfo->realParameter[543] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[1] PARAM */ = data->simulationInfo->realParameter[407] /* sCO2PBDesignPointCalculator.powerBlock.T_HTF_out PARAM */;
  TRACE_POP
}

/*
equation index: 51
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._h_in_HTF_des = SolarTherm.Media.SolidParticles.CarboHSP_utilities.h_T(sCO2PBDesignPointCalculator.powerBlock.T_HTF_in_des)
*/
void sCO2SurrogatePBRig_eqFunction_51(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,51};
  data->simulationInfo->realParameter[592] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_in_HTF_des PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_h__T(threadData, data->simulationInfo->realParameter[406] /* sCO2PBDesignPointCalculator.powerBlock.T_HTF_in_des PARAM */);
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._p_out_des = sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_high_des
*/
void sCO2SurrogatePBRig_eqFunction_52(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,52};
  data->simulationInfo->realParameter[728] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out_des PARAM */ = data->simulationInfo->realParameter[726] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_high_des PARAM */;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._state_isen_des._p = sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out_des
*/
void sCO2SurrogatePBRig_eqFunction_53(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,53};
  data->simulationInfo->realParameter[734] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_isen_des.p PARAM */ = data->simulationInfo->realParameter[728] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
_omcQuot_245354415254._sCO2PBDesignPointCalculator._powerBlock._reCompressor._p_out = sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out_des
*/
void sCO2SurrogatePBRig_eqFunction_54(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,54};
  data->modelData->realVarsData[290].attribute /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out variable */.start = data->simulationInfo->realParameter[728] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out_des PARAM */;
    data->localData[0]->realVars[290] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out variable */ = data->modelData->realVarsData[290].attribute /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[290].info /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out */.name, (modelica_real) data->localData[0]->realVars[290] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out variable */);
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[15]._h = sCO2PBDesignPointCalculator.powerBlock.exchanger.h_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_55(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,55};
  data->simulationInfo->realParameter[662] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[15].h PARAM */ = data->simulationInfo->realParameter[592] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_in_HTF_des PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_56(DATA*, threadData_t*);
/*
equation index: 57
indexNonlinear: 0
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_des[15]}
eqns: {56}
*/
void sCO2SurrogatePBRig_eqFunction_57(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,57};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 57 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->simulationInfo->realParameter[557] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[15] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,57};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 57 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[557] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[1]._h = if noEvent(sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[1] < 0.0) then 0.0 else -196601.368854 + 113.1902543343771 * sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[1] ^ 1.3093
*/
void sCO2SurrogatePBRig_eqFunction_58(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,58};
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
  tmp0 = Less(data->simulationInfo->realParameter[543] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[1] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[543] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[1] PARAM */;
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
  data->simulationInfo->realParameter[648] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[1].h PARAM */ = tmp9;
  TRACE_POP
}

/*
equation index: 86
type: LINEAR

<var>sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[2]._h</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void sCO2SurrogatePBRig_eqFunction_86(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,86};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->simulationInfo->realParameter[649] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h PARAM */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 86 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,86};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 86 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[649] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h PARAM */ = aux_x[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_87(DATA*, threadData_t*);
/*
equation index: 88
indexNonlinear: 1
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_des[2]}
eqns: {87}
*/
void sCO2SurrogatePBRig_eqFunction_88(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,88};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 88 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->simulationInfo->realParameter[544] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[2] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,88};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 88 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[544] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_89(DATA*, threadData_t*);
/*
equation index: 90
indexNonlinear: 2
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_des[3]}
eqns: {89}
*/
void sCO2SurrogatePBRig_eqFunction_90(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,90};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 90 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->simulationInfo->realParameter[545] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[3] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,90};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 90 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[545] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_91(DATA*, threadData_t*);
/*
equation index: 92
indexNonlinear: 3
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_des[4]}
eqns: {91}
*/
void sCO2SurrogatePBRig_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 92 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->simulationInfo->realParameter[546] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[4] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,92};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 92 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[546] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_93(DATA*, threadData_t*);
/*
equation index: 94
indexNonlinear: 4
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_des[5]}
eqns: {93}
*/
void sCO2SurrogatePBRig_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 94 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->simulationInfo->realParameter[547] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[5] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,94};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 94 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[547] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_95(DATA*, threadData_t*);
/*
equation index: 96
indexNonlinear: 5
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_des[6]}
eqns: {95}
*/
void sCO2SurrogatePBRig_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 96 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->simulationInfo->realParameter[548] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[6] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,96};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 96 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[548] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_97(DATA*, threadData_t*);
/*
equation index: 98
indexNonlinear: 6
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_des[7]}
eqns: {97}
*/
void sCO2SurrogatePBRig_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 98 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = data->simulationInfo->realParameter[549] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[7] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,98};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 98 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[549] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_99(DATA*, threadData_t*);
/*
equation index: 100
indexNonlinear: 7
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_des[14]}
eqns: {99}
*/
void sCO2SurrogatePBRig_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 100 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[0] = data->simulationInfo->realParameter[556] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[14] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 7);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,100};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 100 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[556] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[7].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_101(DATA*, threadData_t*);
/*
equation index: 102
indexNonlinear: 8
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_des[13]}
eqns: {101}
*/
void sCO2SurrogatePBRig_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 102 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[0] = data->simulationInfo->realParameter[555] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[13] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 8);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,102};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 102 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[555] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[8].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_103(DATA*, threadData_t*);
/*
equation index: 104
indexNonlinear: 9
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_des[12]}
eqns: {103}
*/
void sCO2SurrogatePBRig_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 104 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[0] = data->simulationInfo->realParameter[554] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[12] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 9);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,104};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 104 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[554] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[9].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_105(DATA*, threadData_t*);
/*
equation index: 106
indexNonlinear: 10
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_des[11]}
eqns: {105}
*/
void sCO2SurrogatePBRig_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 106 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[10].nlsxOld[0] = data->simulationInfo->realParameter[553] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[11] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 10);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,106};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 106 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[553] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[10].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_107(DATA*, threadData_t*);
/*
equation index: 108
indexNonlinear: 11
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_des[10]}
eqns: {107}
*/
void sCO2SurrogatePBRig_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 108 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[11].nlsxOld[0] = data->simulationInfo->realParameter[552] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[10] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 11);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,108};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 108 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[552] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[11].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_109(DATA*, threadData_t*);
/*
equation index: 110
indexNonlinear: 12
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_des[9]}
eqns: {109}
*/
void sCO2SurrogatePBRig_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 110 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[12].nlsxOld[0] = data->simulationInfo->realParameter[551] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[9] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 12);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,110};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 110 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[551] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[12].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_111(DATA*, threadData_t*);
/*
equation index: 112
indexNonlinear: 13
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_HTF_des[8]}
eqns: {111}
*/
void sCO2SurrogatePBRig_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 112 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[13].nlsxOld[0] = data->simulationInfo->realParameter[550] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[8] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 13);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,112};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 112 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[550] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[13].nlsx[0];
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._C_exchanger = sCO2PBDesignPointCalculator.powerBlock.pri_exchanger * sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->simulationInfo->realParameter[126] /* sCO2PBDesignPointCalculator.powerBlock.C_exchanger PARAM */ = (data->simulationInfo->realParameter[710] /* sCO2PBDesignPointCalculator.powerBlock.pri_exchanger PARAM */) * (data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */);
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._h_out_HTF_des = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[1].h
*/
void sCO2SurrogatePBRig_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->simulationInfo->realParameter[594] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_out_HTF_des PARAM */ = data->simulationInfo->realParameter[648] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[1].h PARAM */;
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._P_cool_des = 3000000.0
*/
void sCO2SurrogatePBRig_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->simulationInfo->realParameter[415] /* sCO2PBDesignPointCalculator.powerBlock.cooler.P_cool_des PARAM */ = 3000000.0;
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._P_cooling = min(200.0 * exp(0.3537 * (-273.15 + sCO2PBDesignPointCalculator.T_amb_input)), sCO2PBDesignPointCalculator.powerBlock.cooler.P_cool_des)
*/
void sCO2SurrogatePBRig_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->localData[0]->realVars[216] /* sCO2PBDesignPointCalculator.powerBlock.cooler.P_cooling variable */ = fmin((200.0) * (exp((0.3537) * (-273.15 + data->simulationInfo->realParameter[98] /* sCO2PBDesignPointCalculator.T_amb_input PARAM */))),data->simulationInfo->realParameter[415] /* sCO2PBDesignPointCalculator.powerBlock.cooler.P_cool_des PARAM */);
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._T_CO2_des[15] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_low
*/
void sCO2SurrogatePBRig_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->simulationInfo->realParameter[433] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[15] PARAM */ = data->simulationInfo->realParameter[436] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_low PARAM */;
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT_des[15] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[15] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des
*/
void sCO2SurrogatePBRig_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->simulationInfo->realParameter[466] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[15] PARAM */ = data->simulationInfo->realParameter[433] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[15] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._p_out_des = sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_high_des
*/
void sCO2SurrogatePBRig_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->simulationInfo->realParameter[695] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_out_des PARAM */ = data->simulationInfo->realParameter[693] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_high_des PARAM */;
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._state_isen_des._p = sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_out_des
*/
void sCO2SurrogatePBRig_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->simulationInfo->realParameter[701] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen_des.p PARAM */ = data->simulationInfo->realParameter[695] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._p_in_comp_des = sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_out_des
*/
void sCO2SurrogatePBRig_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */ = data->simulationInfo->realParameter[695] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[1]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->simulationInfo->realParameter[356] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[1].p PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[2]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->simulationInfo->realParameter[357] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[2].p PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[3]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->simulationInfo->realParameter[358] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[3].p PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[4]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->simulationInfo->realParameter[359] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[4].p PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[5]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->simulationInfo->realParameter[360] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[5].p PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[6]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->simulationInfo->realParameter[361] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[6].p PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[7]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->simulationInfo->realParameter[362] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[7].p PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[8]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->simulationInfo->realParameter[363] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[8].p PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[9]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->simulationInfo->realParameter[364] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[9].p PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[10]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->simulationInfo->realParameter[365] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[10].p PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[11]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->simulationInfo->realParameter[366] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[11].p PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[12]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->simulationInfo->realParameter[367] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[12].p PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[13]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->simulationInfo->realParameter[368] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[13].p PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[14]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->simulationInfo->realParameter[369] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[14].p PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[15]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->simulationInfo->realParameter[370] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[15].p PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._p_out_comp_des = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->simulationInfo->realParameter[337] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_out_comp_des PARAM */ = data->simulationInfo->realParameter[335] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._p_in_comp_des = sCO2PBDesignPointCalculator.powerBlock.ratio_m_des * sCO2PBDesignPointCalculator.powerBlock.LTR.p_out_comp_des + (1.0 - sCO2PBDesignPointCalculator.powerBlock.ratio_m_des) * sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out_des
*/
void sCO2SurrogatePBRig_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */ = (data->simulationInfo->realParameter[714] /* sCO2PBDesignPointCalculator.powerBlock.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[337] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_out_comp_des PARAM */) + (1.0 - data->simulationInfo->realParameter[714] /* sCO2PBDesignPointCalculator.powerBlock.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[728] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out_des PARAM */);
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
_omcQuot_245354415254._sCO2PBDesignPointCalculator._powerBlock._LTR._state_from_comp[15]._p = sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_out_des
*/
void sCO2SurrogatePBRig_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->modelData->realVarsData[211].attribute /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_comp[15].p variable */.start = data->simulationInfo->realParameter[695] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_out_des PARAM */;
    data->localData[0]->realVars[211] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_comp[15].p variable */ = data->modelData->realVarsData[211].attribute /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_comp[15].p variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[211].info /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_comp[15].p */.name, (modelica_real) data->localData[0]->realVars[211] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_comp[15].p variable */);
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._p_out_comp_des = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->simulationInfo->realParameter[202] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_out_comp_des PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._p_in_CO2_des = sCO2PBDesignPointCalculator.powerBlock.HTR.p_out_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */ = data->simulationInfo->realParameter[202] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_out_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[1]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->simulationInfo->realParameter[618] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[1].p PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[2]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->simulationInfo->realParameter[619] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[2].p PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[3]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->simulationInfo->realParameter[620] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[3].p PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[4]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->simulationInfo->realParameter[621] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[4].p PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[5]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->simulationInfo->realParameter[622] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[5].p PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[6]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->simulationInfo->realParameter[623] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[6].p PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[7]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->simulationInfo->realParameter[624] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[7].p PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[8]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->simulationInfo->realParameter[625] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[8].p PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[9]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  data->simulationInfo->realParameter[626] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[9].p PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[10]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->simulationInfo->realParameter[627] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[10].p PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[11]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->simulationInfo->realParameter[628] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[11].p PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[12]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->simulationInfo->realParameter[629] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[12].p PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[13]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->simulationInfo->realParameter[630] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[13].p PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[14]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->simulationInfo->realParameter[631] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[14].p PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[15]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->simulationInfo->realParameter[632] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[15].p PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._p_out_CO2_des = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->simulationInfo->realParameter[599] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_out_CO2_des PARAM */ = data->simulationInfo->realParameter[597] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._p_in_des = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_out_CO2_des
*/
void sCO2SurrogatePBRig_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->simulationInfo->realParameter[751] /* sCO2PBDesignPointCalculator.powerBlock.turbine.p_in_des PARAM */ = data->simulationInfo->realParameter[599] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_out_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._state_in_des._p = sCO2PBDesignPointCalculator.powerBlock.turbine.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->simulationInfo->realParameter[754] /* sCO2PBDesignPointCalculator.powerBlock.turbine.state_in_des.p PARAM */ = data->simulationInfo->realParameter[751] /* sCO2PBDesignPointCalculator.powerBlock.turbine.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._state_isen_des._p = sCO2PBDesignPointCalculator.powerBlock.turbine.p_in_des / sCO2PBDesignPointCalculator.powerBlock.turbine.PR
*/
void sCO2SurrogatePBRig_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->simulationInfo->realParameter[756] /* sCO2PBDesignPointCalculator.powerBlock.turbine.state_isen_des.p PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[751] /* sCO2PBDesignPointCalculator.powerBlock.turbine.p_in_des PARAM */,data->simulationInfo->realParameter[743] /* sCO2PBDesignPointCalculator.powerBlock.turbine.PR PARAM */,"sCO2PBDesignPointCalculator.powerBlock.turbine.PR",equationIndexes);
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._p_out_des = sCO2PBDesignPointCalculator.powerBlock.turbine.p_in_des / sCO2PBDesignPointCalculator.powerBlock.turbine.PR
*/
void sCO2SurrogatePBRig_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->simulationInfo->realParameter[752] /* sCO2PBDesignPointCalculator.powerBlock.turbine.p_out_des PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[751] /* sCO2PBDesignPointCalculator.powerBlock.turbine.p_in_des PARAM */,data->simulationInfo->realParameter[743] /* sCO2PBDesignPointCalculator.powerBlock.turbine.PR PARAM */,"sCO2PBDesignPointCalculator.powerBlock.turbine.PR",equationIndexes);
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._state_out_des._p = sCO2PBDesignPointCalculator.powerBlock.turbine.p_out_des
*/
void sCO2SurrogatePBRig_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->simulationInfo->realParameter[758] /* sCO2PBDesignPointCalculator.powerBlock.turbine.state_out_des.p PARAM */ = data->simulationInfo->realParameter[752] /* sCO2PBDesignPointCalculator.powerBlock.turbine.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._p_in_turb_des = sCO2PBDesignPointCalculator.powerBlock.turbine.p_out_des
*/
void sCO2SurrogatePBRig_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */ = data->simulationInfo->realParameter[752] /* sCO2PBDesignPointCalculator.powerBlock.turbine.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._p_out_turb_des = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  data->simulationInfo->realParameter[203] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_out_turb_des PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._p_in_turb_des = sCO2PBDesignPointCalculator.powerBlock.HTR.p_out_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */ = data->simulationInfo->realParameter[203] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_out_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_turb_des[1]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->simulationInfo->realParameter[386] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_turb_des[1].p PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_turb_des[2]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->simulationInfo->realParameter[387] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_turb_des[2].p PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_turb_des[3]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->simulationInfo->realParameter[388] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_turb_des[3].p PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_turb_des[4]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->simulationInfo->realParameter[389] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_turb_des[4].p PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_turb_des[5]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->simulationInfo->realParameter[390] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_turb_des[5].p PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_turb_des[6]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->simulationInfo->realParameter[391] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_turb_des[6].p PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_turb_des[7]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->simulationInfo->realParameter[392] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_turb_des[7].p PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_turb_des[8]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->simulationInfo->realParameter[393] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_turb_des[8].p PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_turb_des[9]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->simulationInfo->realParameter[394] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_turb_des[9].p PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_turb_des[10]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->simulationInfo->realParameter[395] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_turb_des[10].p PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_turb_des[11]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->simulationInfo->realParameter[396] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_turb_des[11].p PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_turb_des[12]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->simulationInfo->realParameter[397] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_turb_des[12].p PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_turb_des[13]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->simulationInfo->realParameter[398] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_turb_des[13].p PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_turb_des[14]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->simulationInfo->realParameter[399] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_turb_des[14].p PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_turb_des[15]._p = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->simulationInfo->realParameter[400] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_turb_des[15].p PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._p_out_turb_des = sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->simulationInfo->realParameter[338] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_out_turb_des PARAM */ = data->simulationInfo->realParameter[336] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._p_in_des = sCO2PBDesignPointCalculator.powerBlock.LTR.p_out_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */ = data->simulationInfo->realParameter[338] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_out_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[1]._p = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->simulationInfo->realParameter[503] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[1].p PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[2]._p = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->simulationInfo->realParameter[504] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[2].p PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[3]._p = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  data->simulationInfo->realParameter[505] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[3].p PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[4]._p = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->simulationInfo->realParameter[506] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[4].p PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[5]._p = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->simulationInfo->realParameter[507] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[5].p PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[6]._p = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->simulationInfo->realParameter[508] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[6].p PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 189
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[7]._p = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->simulationInfo->realParameter[509] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[7].p PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[8]._p = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->simulationInfo->realParameter[510] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[8].p PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[9]._p = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->simulationInfo->realParameter[511] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[9].p PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[10]._p = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->simulationInfo->realParameter[512] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[10].p PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[11]._p = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->simulationInfo->realParameter[513] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[11].p PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[12]._p = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->simulationInfo->realParameter[514] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[12].p PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[13]._p = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->simulationInfo->realParameter[515] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[13].p PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[14]._p = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->simulationInfo->realParameter[516] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[14].p PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[15]._h = SolarTherm.Media.CO2.CO2_utilities.h_p_T(sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des, sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[15], tableIDh_p_T)
*/
void sCO2SurrogatePBRig_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->simulationInfo->realParameter[502] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[15].h PARAM */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[433] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[15] PARAM */, data->simulationInfo->extObjs[47]);
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des[15] = sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[15].h
*/
void sCO2SurrogatePBRig_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->simulationInfo->realParameter[482] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[15] PARAM */ = data->simulationInfo->realParameter[502] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[15].h PARAM */;
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_out_des = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[15]
*/
void sCO2SurrogatePBRig_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->simulationInfo->realParameter[484] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_out_des PARAM */ = data->simulationInfo->realParameter[482] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[15] PARAM */;
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._h_in_des = sCO2PBDesignPointCalculator.powerBlock.cooler.h_out_des
*/
void sCO2SurrogatePBRig_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->simulationInfo->realParameter[690] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.h_in_des PARAM */ = data->simulationInfo->realParameter[484] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._state_in_des._h = sCO2PBDesignPointCalculator.powerBlock.mainCompressor.h_in_des
*/
void sCO2SurrogatePBRig_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->simulationInfo->realParameter[698] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h PARAM */ = data->simulationInfo->realParameter[690] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.h_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[15]._p = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->simulationInfo->realParameter[517] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[15].p PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._p_out_des = sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->simulationInfo->realParameter[487] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_out_des PARAM */ = data->simulationInfo->realParameter[486] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 204
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._p_in_des = sCO2PBDesignPointCalculator.powerBlock.cooler.p_out_des
*/
void sCO2SurrogatePBRig_eqFunction_204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,204};
  data->simulationInfo->realParameter[694] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_in_des PARAM */ = data->simulationInfo->realParameter[487] /* sCO2PBDesignPointCalculator.powerBlock.cooler.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 205
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._state_in_des._p = sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  data->simulationInfo->realParameter[699] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.p PARAM */ = data->simulationInfo->realParameter[694] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._state_isen_des._h = SolarTherm.Media.CO2.CO2_utilities.h_p_s(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_out_des, SolarTherm.Media.CO2.CO2_utilities.s_p_h(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.p, sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h, Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Entropy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)), tableIDh_p_s)
*/
void sCO2SurrogatePBRig_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->simulationInfo->realParameter[700] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen_des.h PARAM */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__s(threadData, data->simulationInfo->realParameter[695] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_out_des PARAM */, omc_SolarTherm_Media_CO2_CO2__utilities_s__p__h(threadData, data->simulationInfo->realParameter[699] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.p PARAM */, data->simulationInfo->realParameter[698] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h PARAM */, omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT34, _OMC_LIT35, _OMC_LIT36, 1)), data->simulationInfo->extObjs[48]);
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._h_out_des = sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h + (sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen_des.h - sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h) / sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_design
*/
void sCO2SurrogatePBRig_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->simulationInfo->realParameter[691] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.h_out_des PARAM */ = data->simulationInfo->realParameter[698] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h PARAM */ + DIVISION_SIM(data->simulationInfo->realParameter[700] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen_des.h PARAM */ - data->simulationInfo->realParameter[698] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h PARAM */,data->simulationInfo->realParameter[689] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_design PARAM */,"sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_design",equationIndexes);
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._h_in_comp_des = sCO2PBDesignPointCalculator.powerBlock.mainCompressor.h_out_des
*/
void sCO2SurrogatePBRig_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  data->simulationInfo->realParameter[329] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_in_comp_des PARAM */ = data->simulationInfo->realParameter[691] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.h_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._state_comp_des[1]._h = sCO2PBDesignPointCalculator.powerBlock.LTR.h_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  data->simulationInfo->realParameter[341] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_comp_des[1].h PARAM */ = data->simulationInfo->realParameter[329] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_in_comp_des PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_210(DATA*, threadData_t*);
/*
equation index: 211
indexNonlinear: 14
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._LTR._T_comp_des[1]}
eqns: {210}
*/
void sCO2SurrogatePBRig_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 211 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[14].nlsxOld[0] = data->simulationInfo->realParameter[269] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[1] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 14);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,211};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 211 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[269] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[14].nlsx[0];
  TRACE_POP
}

/*
equation index: 212
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._p_in_des = sCO2PBDesignPointCalculator.powerBlock.LTR.p_out_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,212};
  data->simulationInfo->realParameter[727] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_in_des PARAM */ = data->simulationInfo->realParameter[338] /* sCO2PBDesignPointCalculator.powerBlock.LTR.p_out_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 213
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._state_in_des._p = sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_in_des
*/
void sCO2SurrogatePBRig_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  data->simulationInfo->realParameter[732] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_in_des.p PARAM */ = data->simulationInfo->realParameter[727] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
_omcQuot_245354415254._sCO2PBDesignPointCalculator._powerBlock._LTR._state_from_turb[15]._p = sCO2PBDesignPointCalculator.powerBlock.turbine.p_out_des
*/
void sCO2SurrogatePBRig_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  data->modelData->realVarsData[212].attribute /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p variable */.start = data->simulationInfo->realParameter[752] /* sCO2PBDesignPointCalculator.powerBlock.turbine.p_out_des PARAM */;
    data->localData[0]->realVars[212] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p variable */ = data->modelData->realVarsData[212].attribute /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[212].info /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p */.name, (modelica_real) data->localData[0]->realVars[212] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p variable */);
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_comp_des[15]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  data->simulationInfo->realParameter[235] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_comp_des[15].p PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_turb_des[15]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  data->simulationInfo->realParameter[265] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_turb_des[15].p PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 217
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_comp_des[14]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->simulationInfo->realParameter[234] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_comp_des[14].p PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_turb_des[14]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->simulationInfo->realParameter[264] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_turb_des[14].p PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_comp_des[13]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->simulationInfo->realParameter[233] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_comp_des[13].p PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_turb_des[13]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  data->simulationInfo->realParameter[263] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_turb_des[13].p PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_comp_des[12]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->simulationInfo->realParameter[232] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_comp_des[12].p PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 222
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_turb_des[12]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->simulationInfo->realParameter[262] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_turb_des[12].p PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_comp_des[11]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->simulationInfo->realParameter[231] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_comp_des[11].p PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_turb_des[11]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->simulationInfo->realParameter[261] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_turb_des[11].p PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_comp_des[10]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  data->simulationInfo->realParameter[230] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_comp_des[10].p PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_turb_des[10]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->simulationInfo->realParameter[260] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_turb_des[10].p PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_comp_des[9]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->simulationInfo->realParameter[229] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_comp_des[9].p PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_turb_des[9]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->simulationInfo->realParameter[259] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_turb_des[9].p PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_comp_des[8]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->simulationInfo->realParameter[228] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_comp_des[8].p PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_turb_des[8]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->simulationInfo->realParameter[258] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_turb_des[8].p PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_comp_des[7]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->simulationInfo->realParameter[227] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_comp_des[7].p PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_turb_des[7]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->simulationInfo->realParameter[257] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_turb_des[7].p PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_comp_des[6]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->simulationInfo->realParameter[226] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_comp_des[6].p PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_turb_des[6]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->simulationInfo->realParameter[256] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_turb_des[6].p PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_comp_des[5]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->simulationInfo->realParameter[225] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_comp_des[5].p PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_turb_des[5]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->simulationInfo->realParameter[255] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_turb_des[5].p PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_comp_des[4]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->simulationInfo->realParameter[224] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_comp_des[4].p PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_turb_des[4]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->simulationInfo->realParameter[254] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_turb_des[4].p PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_comp_des[3]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->simulationInfo->realParameter[223] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_comp_des[3].p PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_turb_des[3]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->simulationInfo->realParameter[253] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_turb_des[3].p PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_comp_des[2]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->simulationInfo->realParameter[222] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_comp_des[2].p PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 242
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_turb_des[2]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  data->simulationInfo->realParameter[252] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_turb_des[2].p PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 243
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_comp_des[1]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->simulationInfo->realParameter[221] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_comp_des[1].p PARAM */ = data->simulationInfo->realParameter[200] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 244
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._state_turb_des[1]._p = sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->simulationInfo->realParameter[251] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_turb_des[1].p PARAM */ = data->simulationInfo->realParameter[201] /* sCO2PBDesignPointCalculator.powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_245(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_246(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_247(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_248(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_249(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_250(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_251(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_252(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_253(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_254(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_255(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_256(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_257(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_258(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_259(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_260(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_261(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_262(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_263(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_264(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_265(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_266(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_267(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_268(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_269(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_270(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_271(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_272(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_273(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_274(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_275(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_276(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_277(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_278(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_279(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_280(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_281(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_282(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_283(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_284(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_285(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_286(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_287(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_288(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_289(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_290(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_291(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_292(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_293(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_294(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_295(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_296(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_297(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_298(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_299(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_300(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_301(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_302(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_303(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_304(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_305(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_306(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_307(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_308(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_309(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_310(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_311(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_312(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_313(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_314(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_315(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_316(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_317(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_318(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_319(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_320(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_321(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_322(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_323(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_324(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_325(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_326(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_327(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_328(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_329(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_330(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_331(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_332(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_333(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_334(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_335(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_336(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_337(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_338(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_339(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_340(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_341(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_342(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_343(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_344(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_345(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_346(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_347(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_348(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_349(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_350(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_351(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_352(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_353(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_354(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_355(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_356(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_357(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_358(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_359(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_360(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_361(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_362(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_363(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_364(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_442(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_441(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_440(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_439(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_438(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_437(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_436(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_435(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_434(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_433(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_432(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_431(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_430(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_429(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_428(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_427(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_426(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_425(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_424(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_423(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_422(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_421(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_420(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_419(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_418(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_417(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_416(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_415(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_414(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_413(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_412(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_411(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_410(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_409(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_408(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_407(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_406(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_405(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_404(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_403(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_402(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_401(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_400(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_399(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_398(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_397(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_396(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_395(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_394(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_393(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_392(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_391(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_390(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_389(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_388(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_387(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_386(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_385(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_384(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_383(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_382(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_381(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_380(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_379(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_378(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_377(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_376(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_375(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_374(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_373(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_372(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_371(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_370(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_369(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_368(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_367(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_366(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_365(DATA*, threadData_t*);
/*
equation index: 443
indexNonlinear: 15
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT_des[5], sCO2PBDesignPointCalculator._powerBlock._HTR._T_turb_des[5], sCO2PBDesignPointCalculator._powerBlock._LTR._T_turb_des[15], sCO2PBDesignPointCalculator._powerBlock._LTR._T_comp_des[15], sCO2PBDesignPointCalculator._powerBlock._LTR._T_comp_des[14], sCO2PBDesignPointCalculator._powerBlock._LTR._T_turb_des[14], sCO2PBDesignPointCalculator._powerBlock._LTR._T_comp_des[13], sCO2PBDesignPointCalculator._powerBlock._LTR._T_turb_des[13], sCO2PBDesignPointCalculator._powerBlock._LTR._T_comp_des[12], sCO2PBDesignPointCalculator._powerBlock._LTR._T_turb_des[12], sCO2PBDesignPointCalculator._powerBlock._LTR._T_comp_des[11], sCO2PBDesignPointCalculator._powerBlock._LTR._T_turb_des[11], sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT_des[10], sCO2PBDesignPointCalculator._powerBlock._LTR._T_turb_des[10], sCO2PBDesignPointCalculator._powerBlock._LTR._T_comp_des[9], sCO2PBDesignPointCalculator._powerBlock._LTR._T_turb_des[9], sCO2PBDesignPointCalculator._powerBlock._LTR._T_comp_des[8], sCO2PBDesignPointCalculator._powerBlock._LTR._T_turb_des[8], sCO2PBDesignPointCalculator._powerBlock._LTR._T_comp_des[7], sCO2PBDesignPointCalculator._powerBlock._LTR._T_turb_des[7], sCO2PBDesignPointCalculator._powerBlock._LTR._T_comp_des[6], sCO2PBDesignPointCalculator._powerBlock._LTR._T_turb_des[6], sCO2PBDesignPointCalculator._powerBlock._LTR._T_comp_des[5], sCO2PBDesignPointCalculator._powerBlock._LTR._T_turb_des[5], sCO2PBDesignPointCalculator._powerBlock._LTR._T_comp_des[4], sCO2PBDesignPointCalculator._powerBlock._LTR._T_turb_des[4], sCO2PBDesignPointCalculator._powerBlock._LTR._T_comp_des[3], sCO2PBDesignPointCalculator._powerBlock._LTR._T_turb_des[3], sCO2PBDesignPointCalculator._powerBlock._LTR._T_comp_des[2], sCO2PBDesignPointCalculator._powerBlock._LTR._T_turb_des[2], sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT_des[1], sCO2PBDesignPointCalculator._powerBlock._HTR._T_comp_des[1], sCO2PBDesignPointCalculator._powerBlock._HTR._T_turb_des[2], sCO2PBDesignPointCalculator._powerBlock._HTR._T_comp_des[2], sCO2PBDesignPointCalculator._powerBlock._HTR._T_turb_des[3], sCO2PBDesignPointCalculator._powerBlock._HTR._T_comp_des[3], sCO2PBDesignPointCalculator._powerBlock._HTR._T_turb_des[4], sCO2PBDesignPointCalculator._powerBlock._HTR._T_comp_des[4], sCO2PBDesignPointCalculator._powerBlock._HTR._T_turb_des[15], sCO2PBDesignPointCalculator._powerBlock._HTR._T_comp_des[15], sCO2PBDesignPointCalculator._powerBlock._HTR._T_turb_des[14], sCO2PBDesignPointCalculator._powerBlock._HTR._T_comp_des[14], sCO2PBDesignPointCalculator._powerBlock._HTR._T_turb_des[13], sCO2PBDesignPointCalculator._powerBlock._HTR._T_comp_des[13], sCO2PBDesignPointCalculator._powerBlock._HTR._T_turb_des[12], sCO2PBDesignPointCalculator._powerBlock._HTR._T_comp_des[12], sCO2PBDesignPointCalculator._powerBlock._HTR._T_turb_des[11], sCO2PBDesignPointCalculator._powerBlock._HTR._T_comp_des[11], sCO2PBDesignPointCalculator._powerBlock._HTR._T_turb_des[10], sCO2PBDesignPointCalculator._powerBlock._HTR._T_comp_des[10], sCO2PBDesignPointCalculator._powerBlock._HTR._T_turb_des[9], sCO2PBDesignPointCalculator._powerBlock._HTR._T_comp_des[9], sCO2PBDesignPointCalculator._powerBlock._HTR._T_turb_des[8], sCO2PBDesignPointCalculator._powerBlock._HTR._T_comp_des[8], sCO2PBDesignPointCalculator._powerBlock._HTR._T_turb_des[7], sCO2PBDesignPointCalculator._powerBlock._HTR._T_comp_des[7], sCO2PBDesignPointCalculator._powerBlock._HTR._T_turb_des[6], sCO2PBDesignPointCalculator._powerBlock._HTR._T_comp_des[6], sCO2PBDesignPointCalculator._powerBlock._LTR._T_turb_des[1], sCO2PBDesignPointCalculator._powerBlock._LTR._Q_dis_des, sCO2PBDesignPointCalculator._powerBlock._HTR._Q_dis_des, sCO2PBDesignPointCalculator._powerBlock._reCompressor._state_in_des._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[15]._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[1]._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[2]._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[3]._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[4]._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[5]._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[6]._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[7]._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[8]._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[9]._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[10]._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[11]._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[12]._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[13]._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._state_CO2_des[14]._h, sCO2PBDesignPointCalculator._powerBlock._exchanger._ratio_m_des}
eqns: {245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 338, 339, 340, 341, 342, 343, 344, 345, 346, 347, 348, 349, 350, 351, 352, 353, 354, 355, 356, 357, 358, 359, 360, 361, 362, 363, 364, 442, 441, 440, 439, 438, 437, 436, 435, 434, 433, 432, 431, 430, 429, 428, 427, 426, 425, 424, 423, 422, 421, 420, 419, 418, 417, 416, 415, 414, 413, 412, 411, 410, 409, 408, 407, 406, 405, 404, 403, 402, 401, 400, 399, 398, 397, 396, 395, 394, 393, 392, 391, 390, 389, 388, 387, 386, 385, 384, 383, 382, 381, 380, 379, 378, 377, 376, 375, 374, 373, 372, 371, 370, 369, 368, 367, 366, 365}
*/
void sCO2SurrogatePBRig_eqFunction_443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,443};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 443 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[0] = data->simulationInfo->realParameter[183] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[5] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[1] = data->simulationInfo->realParameter[153] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[5] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[2] = data->simulationInfo->realParameter[298] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[15] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[3] = data->simulationInfo->realParameter[283] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[15] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[4] = data->simulationInfo->realParameter[282] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[14] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[5] = data->simulationInfo->realParameter[297] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[14] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[6] = data->simulationInfo->realParameter[281] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[13] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[7] = data->simulationInfo->realParameter[296] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[13] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[8] = data->simulationInfo->realParameter[280] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[12] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[9] = data->simulationInfo->realParameter[295] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[12] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[10] = data->simulationInfo->realParameter[279] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[11] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[11] = data->simulationInfo->realParameter[294] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[11] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[12] = data->simulationInfo->realParameter[323] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[10] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[13] = data->simulationInfo->realParameter[293] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[10] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[14] = data->simulationInfo->realParameter[277] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[9] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[15] = data->simulationInfo->realParameter[292] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[9] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[16] = data->simulationInfo->realParameter[276] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[8] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[17] = data->simulationInfo->realParameter[291] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[8] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[18] = data->simulationInfo->realParameter[275] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[7] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[19] = data->simulationInfo->realParameter[290] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[7] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[20] = data->simulationInfo->realParameter[274] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[6] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[21] = data->simulationInfo->realParameter[289] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[6] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[22] = data->simulationInfo->realParameter[273] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[5] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[23] = data->simulationInfo->realParameter[288] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[5] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[24] = data->simulationInfo->realParameter[272] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[4] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[25] = data->simulationInfo->realParameter[287] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[4] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[26] = data->simulationInfo->realParameter[271] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[3] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[27] = data->simulationInfo->realParameter[286] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[3] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[28] = data->simulationInfo->realParameter[270] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[2] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[29] = data->simulationInfo->realParameter[285] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[2] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[30] = data->simulationInfo->realParameter[179] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[1] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[31] = data->simulationInfo->realParameter[134] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[1] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[32] = data->simulationInfo->realParameter[150] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[2] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[33] = data->simulationInfo->realParameter[135] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[2] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[34] = data->simulationInfo->realParameter[151] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[3] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[35] = data->simulationInfo->realParameter[136] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[3] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[36] = data->simulationInfo->realParameter[152] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[4] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[37] = data->simulationInfo->realParameter[137] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[4] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[38] = data->simulationInfo->realParameter[163] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[15] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[39] = data->simulationInfo->realParameter[148] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[15] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[40] = data->simulationInfo->realParameter[162] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[14] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[41] = data->simulationInfo->realParameter[147] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[14] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[42] = data->simulationInfo->realParameter[161] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[13] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[43] = data->simulationInfo->realParameter[146] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[13] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[44] = data->simulationInfo->realParameter[160] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[12] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[45] = data->simulationInfo->realParameter[145] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[12] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[46] = data->simulationInfo->realParameter[159] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[11] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[47] = data->simulationInfo->realParameter[144] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[11] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[48] = data->simulationInfo->realParameter[158] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[10] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[49] = data->simulationInfo->realParameter[143] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[10] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[50] = data->simulationInfo->realParameter[157] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[9] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[51] = data->simulationInfo->realParameter[142] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[9] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[52] = data->simulationInfo->realParameter[156] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[8] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[53] = data->simulationInfo->realParameter[141] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[8] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[54] = data->simulationInfo->realParameter[155] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[7] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[55] = data->simulationInfo->realParameter[140] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[7] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[56] = data->simulationInfo->realParameter[154] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[6] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[57] = data->simulationInfo->realParameter[139] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[6] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[58] = data->simulationInfo->realParameter[284] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[1] PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[59] = data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[60] = data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[61] = data->simulationInfo->realParameter[731] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_in_des.h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[62] = data->simulationInfo->realParameter[617] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[15].h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[63] = data->simulationInfo->realParameter[603] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[1].h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[64] = data->simulationInfo->realParameter[604] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[2].h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[65] = data->simulationInfo->realParameter[605] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[3].h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[66] = data->simulationInfo->realParameter[606] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[4].h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[67] = data->simulationInfo->realParameter[607] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[5].h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[68] = data->simulationInfo->realParameter[608] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[6].h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[69] = data->simulationInfo->realParameter[609] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[7].h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[70] = data->simulationInfo->realParameter[610] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[8].h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[71] = data->simulationInfo->realParameter[611] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[9].h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[72] = data->simulationInfo->realParameter[612] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[10].h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[73] = data->simulationInfo->realParameter[613] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[11].h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[74] = data->simulationInfo->realParameter[614] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[12].h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[75] = data->simulationInfo->realParameter[615] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[13].h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[76] = data->simulationInfo->realParameter[616] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[14].h PARAM */;
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[77] = data->simulationInfo->realParameter[602] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.ratio_m_des PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 15);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,443};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 443 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[183] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[0];
  data->simulationInfo->realParameter[153] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[1];
  data->simulationInfo->realParameter[298] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[2];
  data->simulationInfo->realParameter[283] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[3];
  data->simulationInfo->realParameter[282] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[4];
  data->simulationInfo->realParameter[297] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[5];
  data->simulationInfo->realParameter[281] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[6];
  data->simulationInfo->realParameter[296] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[7];
  data->simulationInfo->realParameter[280] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[8];
  data->simulationInfo->realParameter[295] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[9];
  data->simulationInfo->realParameter[279] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[10];
  data->simulationInfo->realParameter[294] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[11];
  data->simulationInfo->realParameter[323] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[12];
  data->simulationInfo->realParameter[293] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[13];
  data->simulationInfo->realParameter[277] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[14];
  data->simulationInfo->realParameter[292] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[15];
  data->simulationInfo->realParameter[276] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[16];
  data->simulationInfo->realParameter[291] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[17];
  data->simulationInfo->realParameter[275] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[18];
  data->simulationInfo->realParameter[290] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[19];
  data->simulationInfo->realParameter[274] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[20];
  data->simulationInfo->realParameter[289] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[21];
  data->simulationInfo->realParameter[273] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[22];
  data->simulationInfo->realParameter[288] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[23];
  data->simulationInfo->realParameter[272] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[24];
  data->simulationInfo->realParameter[287] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[25];
  data->simulationInfo->realParameter[271] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[26];
  data->simulationInfo->realParameter[286] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[27];
  data->simulationInfo->realParameter[270] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_comp_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[28];
  data->simulationInfo->realParameter[285] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[29];
  data->simulationInfo->realParameter[179] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[30];
  data->simulationInfo->realParameter[134] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[31];
  data->simulationInfo->realParameter[150] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[32];
  data->simulationInfo->realParameter[135] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[33];
  data->simulationInfo->realParameter[151] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[34];
  data->simulationInfo->realParameter[136] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[35];
  data->simulationInfo->realParameter[152] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[36];
  data->simulationInfo->realParameter[137] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[37];
  data->simulationInfo->realParameter[163] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[38];
  data->simulationInfo->realParameter[148] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[39];
  data->simulationInfo->realParameter[162] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[40];
  data->simulationInfo->realParameter[147] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[41];
  data->simulationInfo->realParameter[161] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[42];
  data->simulationInfo->realParameter[146] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[43];
  data->simulationInfo->realParameter[160] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[44];
  data->simulationInfo->realParameter[145] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[45];
  data->simulationInfo->realParameter[159] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[46];
  data->simulationInfo->realParameter[144] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[47];
  data->simulationInfo->realParameter[158] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[48];
  data->simulationInfo->realParameter[143] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[49];
  data->simulationInfo->realParameter[157] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[50];
  data->simulationInfo->realParameter[142] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[51];
  data->simulationInfo->realParameter[156] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[52];
  data->simulationInfo->realParameter[141] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[53];
  data->simulationInfo->realParameter[155] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[54];
  data->simulationInfo->realParameter[140] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[55];
  data->simulationInfo->realParameter[154] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_turb_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[56];
  data->simulationInfo->realParameter[139] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_comp_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[57];
  data->simulationInfo->realParameter[284] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_turb_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[58];
  data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[59];
  data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[60];
  data->simulationInfo->realParameter[731] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_in_des.h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[61];
  data->simulationInfo->realParameter[617] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[15].h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[62];
  data->simulationInfo->realParameter[603] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[1].h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[63];
  data->simulationInfo->realParameter[604] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[2].h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[64];
  data->simulationInfo->realParameter[605] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[3].h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[65];
  data->simulationInfo->realParameter[606] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[4].h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[66];
  data->simulationInfo->realParameter[607] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[5].h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[67];
  data->simulationInfo->realParameter[608] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[6].h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[68];
  data->simulationInfo->realParameter[609] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[7].h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[69];
  data->simulationInfo->realParameter[610] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[8].h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[70];
  data->simulationInfo->realParameter[611] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[9].h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[71];
  data->simulationInfo->realParameter[612] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[10].h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[72];
  data->simulationInfo->realParameter[613] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[11].h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[73];
  data->simulationInfo->realParameter[614] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[12].h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[74];
  data->simulationInfo->realParameter[615] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[13].h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[75];
  data->simulationInfo->realParameter[616] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_CO2_des[14].h PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[76];
  data->simulationInfo->realParameter[602] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.ratio_m_des PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[77];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_444(DATA*, threadData_t*);
/*
equation index: 445
indexNonlinear: 16
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_CO2_des[1]}
eqns: {444}
*/
void sCO2SurrogatePBRig_eqFunction_445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,445};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 445 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[0] = data->simulationInfo->realParameter[528] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[1] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 16);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,445};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 445 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[528] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_446(DATA*, threadData_t*);
/*
equation index: 447
indexNonlinear: 17
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_CO2_des[2]}
eqns: {446}
*/
void sCO2SurrogatePBRig_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 447 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[17].nlsxOld[0] = data->simulationInfo->realParameter[529] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[2] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 17);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,447};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 447 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[529] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[17].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_448(DATA*, threadData_t*);
/*
equation index: 449
indexNonlinear: 18
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_CO2_des[3]}
eqns: {448}
*/
void sCO2SurrogatePBRig_eqFunction_449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,449};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 449 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[0] = data->simulationInfo->realParameter[530] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[3] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 18);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,449};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 449 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[530] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_450(DATA*, threadData_t*);
/*
equation index: 451
indexNonlinear: 19
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_CO2_des[4]}
eqns: {450}
*/
void sCO2SurrogatePBRig_eqFunction_451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,451};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 451 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[19].nlsxOld[0] = data->simulationInfo->realParameter[531] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[4] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 19);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,451};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 451 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[531] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[19].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_452(DATA*, threadData_t*);
/*
equation index: 453
indexNonlinear: 20
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_CO2_des[5]}
eqns: {452}
*/
void sCO2SurrogatePBRig_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 453 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[20].nlsxOld[0] = data->simulationInfo->realParameter[532] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[5] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 20);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,453};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 453 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[532] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[20].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_454(DATA*, threadData_t*);
/*
equation index: 455
indexNonlinear: 21
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_CO2_des[6]}
eqns: {454}
*/
void sCO2SurrogatePBRig_eqFunction_455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,455};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 455 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[21].nlsxOld[0] = data->simulationInfo->realParameter[533] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[6] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 21);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,455};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 455 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[533] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[21].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_456(DATA*, threadData_t*);
/*
equation index: 457
indexNonlinear: 22
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_CO2_des[7]}
eqns: {456}
*/
void sCO2SurrogatePBRig_eqFunction_457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,457};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 457 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[22].nlsxOld[0] = data->simulationInfo->realParameter[534] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[7] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 22);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,457};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 457 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[534] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[22].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_458(DATA*, threadData_t*);
/*
equation index: 459
indexNonlinear: 23
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_CO2_des[8]}
eqns: {458}
*/
void sCO2SurrogatePBRig_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 459 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[23].nlsxOld[0] = data->simulationInfo->realParameter[535] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[8] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 23);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,459};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 459 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[535] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[23].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_460(DATA*, threadData_t*);
/*
equation index: 461
indexNonlinear: 24
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_CO2_des[9]}
eqns: {460}
*/
void sCO2SurrogatePBRig_eqFunction_461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,461};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 461 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[24].nlsxOld[0] = data->simulationInfo->realParameter[536] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[9] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 24);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,461};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 461 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[536] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[24].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_462(DATA*, threadData_t*);
/*
equation index: 463
indexNonlinear: 25
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_CO2_des[10]}
eqns: {462}
*/
void sCO2SurrogatePBRig_eqFunction_463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,463};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 463 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[25].nlsxOld[0] = data->simulationInfo->realParameter[537] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[10] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 25);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,463};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 463 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[537] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[25].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_464(DATA*, threadData_t*);
/*
equation index: 465
indexNonlinear: 26
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_CO2_des[11]}
eqns: {464}
*/
void sCO2SurrogatePBRig_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 465 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[26].nlsxOld[0] = data->simulationInfo->realParameter[538] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[11] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 26);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,465};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 465 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[538] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[26].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_466(DATA*, threadData_t*);
/*
equation index: 467
indexNonlinear: 27
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_CO2_des[12]}
eqns: {466}
*/
void sCO2SurrogatePBRig_eqFunction_467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,467};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 467 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[27].nlsxOld[0] = data->simulationInfo->realParameter[539] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[12] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 27);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,467};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 467 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[539] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[27].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_468(DATA*, threadData_t*);
/*
equation index: 469
indexNonlinear: 28
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_CO2_des[13]}
eqns: {468}
*/
void sCO2SurrogatePBRig_eqFunction_469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,469};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 469 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[28].nlsxOld[0] = data->simulationInfo->realParameter[540] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[13] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 28);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,469};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 469 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[540] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[28].nlsx[0];
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_470(DATA*, threadData_t*);
/*
equation index: 471
indexNonlinear: 29
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_CO2_des[15]}
eqns: {470}
*/
void sCO2SurrogatePBRig_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 471 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[29].nlsxOld[0] = data->simulationInfo->realParameter[542] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[15] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 29);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,471};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 471 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[542] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[29].nlsx[0];
  TRACE_POP
}

/*
equation index: 472
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._state_out_des._h = sCO2PBDesignPointCalculator.powerBlock.turbine.h_out_des
*/
void sCO2SurrogatePBRig_eqFunction_472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,472};
  data->simulationInfo->realParameter[757] /* sCO2PBDesignPointCalculator.powerBlock.turbine.state_out_des.h PARAM */ = data->simulationInfo->realParameter[749] /* sCO2PBDesignPointCalculator.powerBlock.turbine.h_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 473
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_in_des = sCO2PBDesignPointCalculator.powerBlock.LTR.h_out_turb_des
*/
void sCO2SurrogatePBRig_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  data->simulationInfo->realParameter[483] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_in_des PARAM */ = data->simulationInfo->realParameter[332] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_out_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des[1] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_in_des
*/
void sCO2SurrogatePBRig_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->simulationInfo->realParameter[468] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[1] PARAM */ = data->simulationInfo->realParameter[483] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[1]._h = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[1]
*/
void sCO2SurrogatePBRig_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->simulationInfo->realParameter[488] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[1].h PARAM */ = data->simulationInfo->realParameter[468] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[1] PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_476(DATA*, threadData_t*);
/*
equation index: 477
indexNonlinear: 30
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._cooler._T_CO2_des[1]}
eqns: {476}
*/
void sCO2SurrogatePBRig_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 477 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[30].nlsxOld[0] = data->simulationInfo->realParameter[419] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[1] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 30);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,477};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 477 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[419] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[30].nlsx[0];
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT_des[1] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[1] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des
*/
void sCO2SurrogatePBRig_eqFunction_478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,478};
  data->simulationInfo->realParameter[452] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[1] PARAM */ = data->simulationInfo->realParameter[419] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[1] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 506
type: LINEAR

<var>sCO2PBDesignPointCalculator._powerBlock._cooler._Q_dis_des</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void sCO2SurrogatePBRig_eqFunction_506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,506};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 506 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,506};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 506 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */ = aux_x[0];
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[2]._h = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[2]
*/
void sCO2SurrogatePBRig_eqFunction_507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,507};
  data->simulationInfo->realParameter[489] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[2].h PARAM */ = data->simulationInfo->realParameter[469] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[2] PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_508(DATA*, threadData_t*);
/*
equation index: 509
indexNonlinear: 31
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._cooler._T_CO2_des[2]}
eqns: {508}
*/
void sCO2SurrogatePBRig_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 509 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[31].nlsxOld[0] = data->simulationInfo->realParameter[420] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[2] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 31);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,509};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 509 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[420] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[31].nlsx[0];
  TRACE_POP
}

/*
equation index: 510
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT_des[2] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[2] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des
*/
void sCO2SurrogatePBRig_eqFunction_510(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,510};
  data->simulationInfo->realParameter[453] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[2] PARAM */ = data->simulationInfo->realParameter[420] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[2] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 511
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[3]._h = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[3]
*/
void sCO2SurrogatePBRig_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  data->simulationInfo->realParameter[490] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[3].h PARAM */ = data->simulationInfo->realParameter[470] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[3] PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_512(DATA*, threadData_t*);
/*
equation index: 513
indexNonlinear: 32
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._cooler._T_CO2_des[3]}
eqns: {512}
*/
void sCO2SurrogatePBRig_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 513 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[0] = data->simulationInfo->realParameter[421] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[3] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 32);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,513};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 513 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[421] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[0];
  TRACE_POP
}

/*
equation index: 514
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT_des[3] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[3] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des
*/
void sCO2SurrogatePBRig_eqFunction_514(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,514};
  data->simulationInfo->realParameter[454] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[3] PARAM */ = data->simulationInfo->realParameter[421] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[3] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 515
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[4]._h = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[4]
*/
void sCO2SurrogatePBRig_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  data->simulationInfo->realParameter[491] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[4].h PARAM */ = data->simulationInfo->realParameter[471] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[4] PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_516(DATA*, threadData_t*);
/*
equation index: 517
indexNonlinear: 33
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._cooler._T_CO2_des[4]}
eqns: {516}
*/
void sCO2SurrogatePBRig_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 517 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[33].nlsxOld[0] = data->simulationInfo->realParameter[422] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[4] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 33);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,517};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 517 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[422] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[33].nlsx[0];
  TRACE_POP
}

/*
equation index: 518
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT_des[4] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[4] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des
*/
void sCO2SurrogatePBRig_eqFunction_518(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,518};
  data->simulationInfo->realParameter[455] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[4] PARAM */ = data->simulationInfo->realParameter[422] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[4] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 519
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[5]._h = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[5]
*/
void sCO2SurrogatePBRig_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  data->simulationInfo->realParameter[492] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[5].h PARAM */ = data->simulationInfo->realParameter[472] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[5] PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_520(DATA*, threadData_t*);
/*
equation index: 521
indexNonlinear: 34
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._cooler._T_CO2_des[5]}
eqns: {520}
*/
void sCO2SurrogatePBRig_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 521 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[34].nlsxOld[0] = data->simulationInfo->realParameter[423] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[5] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 34);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,521};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 521 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[423] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[34].nlsx[0];
  TRACE_POP
}

/*
equation index: 522
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT_des[5] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[5] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des
*/
void sCO2SurrogatePBRig_eqFunction_522(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,522};
  data->simulationInfo->realParameter[456] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[5] PARAM */ = data->simulationInfo->realParameter[423] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[5] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 523
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[6]._h = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[6]
*/
void sCO2SurrogatePBRig_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  data->simulationInfo->realParameter[493] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[6].h PARAM */ = data->simulationInfo->realParameter[473] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[6] PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_524(DATA*, threadData_t*);
/*
equation index: 525
indexNonlinear: 35
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._cooler._T_CO2_des[6]}
eqns: {524}
*/
void sCO2SurrogatePBRig_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 525 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[35].nlsxOld[0] = data->simulationInfo->realParameter[424] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[6] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 35);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,525};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 525 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[424] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[35].nlsx[0];
  TRACE_POP
}

/*
equation index: 526
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT_des[6] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[6] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des
*/
void sCO2SurrogatePBRig_eqFunction_526(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,526};
  data->simulationInfo->realParameter[457] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[6] PARAM */ = data->simulationInfo->realParameter[424] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[6] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 527
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[7]._h = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[7]
*/
void sCO2SurrogatePBRig_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  data->simulationInfo->realParameter[494] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[7].h PARAM */ = data->simulationInfo->realParameter[474] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[7] PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_528(DATA*, threadData_t*);
/*
equation index: 529
indexNonlinear: 36
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._cooler._T_CO2_des[7]}
eqns: {528}
*/
void sCO2SurrogatePBRig_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 529 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[36].nlsxOld[0] = data->simulationInfo->realParameter[425] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[7] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 36);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,529};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 529 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[425] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[36].nlsx[0];
  TRACE_POP
}

/*
equation index: 530
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT_des[7] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[7] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des
*/
void sCO2SurrogatePBRig_eqFunction_530(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,530};
  data->simulationInfo->realParameter[458] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[7] PARAM */ = data->simulationInfo->realParameter[425] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[7] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 531
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[14]._h = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[14]
*/
void sCO2SurrogatePBRig_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  data->simulationInfo->realParameter[501] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[14].h PARAM */ = data->simulationInfo->realParameter[481] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[14] PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_532(DATA*, threadData_t*);
/*
equation index: 533
indexNonlinear: 37
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._cooler._T_CO2_des[14]}
eqns: {532}
*/
void sCO2SurrogatePBRig_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 533 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[37].nlsxOld[0] = data->simulationInfo->realParameter[432] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[14] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 37);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,533};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 533 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[432] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[37].nlsx[0];
  TRACE_POP
}

/*
equation index: 534
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT_des[14] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[14] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des
*/
void sCO2SurrogatePBRig_eqFunction_534(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,534};
  data->simulationInfo->realParameter[465] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[14] PARAM */ = data->simulationInfo->realParameter[432] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[14] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 535
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[13]._h = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[13]
*/
void sCO2SurrogatePBRig_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  data->simulationInfo->realParameter[500] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[13].h PARAM */ = data->simulationInfo->realParameter[480] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[13] PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_536(DATA*, threadData_t*);
/*
equation index: 537
indexNonlinear: 38
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._cooler._T_CO2_des[13]}
eqns: {536}
*/
void sCO2SurrogatePBRig_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 537 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[38].nlsxOld[0] = data->simulationInfo->realParameter[431] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[13] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 38);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,537};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 537 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[431] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[38].nlsx[0];
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT_des[13] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[13] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des
*/
void sCO2SurrogatePBRig_eqFunction_538(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,538};
  data->simulationInfo->realParameter[464] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[13] PARAM */ = data->simulationInfo->realParameter[431] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[13] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 539
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[12]._h = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[12]
*/
void sCO2SurrogatePBRig_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  data->simulationInfo->realParameter[499] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[12].h PARAM */ = data->simulationInfo->realParameter[479] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[12] PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_540(DATA*, threadData_t*);
/*
equation index: 541
indexNonlinear: 39
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._cooler._T_CO2_des[12]}
eqns: {540}
*/
void sCO2SurrogatePBRig_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 541 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[39].nlsxOld[0] = data->simulationInfo->realParameter[430] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[12] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 39);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,541};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 541 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[430] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[39].nlsx[0];
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT_des[12] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[12] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des
*/
void sCO2SurrogatePBRig_eqFunction_542(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,542};
  data->simulationInfo->realParameter[463] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[12] PARAM */ = data->simulationInfo->realParameter[430] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[12] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[11]._h = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[11]
*/
void sCO2SurrogatePBRig_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  data->simulationInfo->realParameter[498] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[11].h PARAM */ = data->simulationInfo->realParameter[478] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[11] PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_544(DATA*, threadData_t*);
/*
equation index: 545
indexNonlinear: 40
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._cooler._T_CO2_des[11]}
eqns: {544}
*/
void sCO2SurrogatePBRig_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 545 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[40].nlsxOld[0] = data->simulationInfo->realParameter[429] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[11] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 40);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,545};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 545 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[429] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[40].nlsx[0];
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT_des[11] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[11] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des
*/
void sCO2SurrogatePBRig_eqFunction_546(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,546};
  data->simulationInfo->realParameter[462] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[11] PARAM */ = data->simulationInfo->realParameter[429] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[11] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 547
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[10]._h = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[10]
*/
void sCO2SurrogatePBRig_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  data->simulationInfo->realParameter[497] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[10].h PARAM */ = data->simulationInfo->realParameter[477] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[10] PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_548(DATA*, threadData_t*);
/*
equation index: 549
indexNonlinear: 41
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._cooler._T_CO2_des[10]}
eqns: {548}
*/
void sCO2SurrogatePBRig_eqFunction_549(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[41].nlsxOld[0] = data->simulationInfo->realParameter[428] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[10] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 41);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,549};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 549 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[428] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[41].nlsx[0];
  TRACE_POP
}

/*
equation index: 550
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT_des[10] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[10] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des
*/
void sCO2SurrogatePBRig_eqFunction_550(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,550};
  data->simulationInfo->realParameter[461] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[10] PARAM */ = data->simulationInfo->realParameter[428] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[10] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 551
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[9]._h = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[9]
*/
void sCO2SurrogatePBRig_eqFunction_551(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,551};
  data->simulationInfo->realParameter[496] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[9].h PARAM */ = data->simulationInfo->realParameter[476] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[9] PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_552(DATA*, threadData_t*);
/*
equation index: 553
indexNonlinear: 42
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._cooler._T_CO2_des[9]}
eqns: {552}
*/
void sCO2SurrogatePBRig_eqFunction_553(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[42].nlsxOld[0] = data->simulationInfo->realParameter[427] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[9] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 42);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,553};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 553 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[427] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[42].nlsx[0];
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT_des[9] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[9] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des
*/
void sCO2SurrogatePBRig_eqFunction_554(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,554};
  data->simulationInfo->realParameter[460] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[9] PARAM */ = data->simulationInfo->realParameter[427] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[9] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._state_des[8]._h = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[8]
*/
void sCO2SurrogatePBRig_eqFunction_555(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,555};
  data->simulationInfo->realParameter[495] /* sCO2PBDesignPointCalculator.powerBlock.cooler.state_des[8].h PARAM */ = data->simulationInfo->realParameter[475] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des[8] PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_556(DATA*, threadData_t*);
/*
equation index: 557
indexNonlinear: 43
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._cooler._T_CO2_des[8]}
eqns: {556}
*/
void sCO2SurrogatePBRig_eqFunction_557(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[43].nlsxOld[0] = data->simulationInfo->realParameter[426] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[8] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 43);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,557};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 557 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[426] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[43].nlsx[0];
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT_des[8] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[8] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des
*/
void sCO2SurrogatePBRig_eqFunction_558(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,558};
  data->simulationInfo->realParameter[459] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[8] PARAM */ = data->simulationInfo->realParameter[426] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[8] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
_omcQuot_24544D50245641522435353924305824414253 = pre(sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting_des)
*/
void sCO2SurrogatePBRig_eqFunction_559(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,559};
  data->localData[0]->realVars[8] /* $TMP$VAR$559$0X$ABS variable */ = data->simulationInfo->realParameter[741] /* sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting_des PARAM */;
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._C_spouting_des = $_signNoNull($TMP$VAR$559$0X$ABS) * abs((2.0 * (sCO2PBDesignPointCalculator.powerBlock.turbine.state_in_des.h - sCO2PBDesignPointCalculator.powerBlock.turbine.state_isen_des.h)) ^ 0.5)
*/
void sCO2SurrogatePBRig_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  modelica_real tmp0;
  tmp0 = (2.0) * (data->simulationInfo->realParameter[753] /* sCO2PBDesignPointCalculator.powerBlock.turbine.state_in_des.h PARAM */ - data->simulationInfo->realParameter[755] /* sCO2PBDesignPointCalculator.powerBlock.turbine.state_isen_des.h PARAM */);
  if(!(tmp0 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(2.0 * (sCO2PBDesignPointCalculator.powerBlock.turbine.state_in_des.h - sCO2PBDesignPointCalculator.powerBlock.turbine.state_isen_des.h)) was %g should be >= 0", tmp0);
  }
  data->simulationInfo->realParameter[741] /* sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting_des PARAM */ = ((data->localData[0]->realVars[8] /* $TMP$VAR$559$0X$ABS variable */ >= 0.0 ? 1.0:-1.0)) * (fabs(sqrt(tmp0)));
  TRACE_POP
}

/*
equation index: 561
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._tipSpeed_des = 0.707 * sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting_des
*/
void sCO2SurrogatePBRig_eqFunction_561(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,561};
  data->simulationInfo->realParameter[759] /* sCO2PBDesignPointCalculator.powerBlock.turbine.tipSpeed_des PARAM */ = (0.707) * (data->simulationInfo->realParameter[741] /* sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting_des PARAM */);
  TRACE_POP
}

/*
equation index: 562
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._diam_turb = 2.0 * sCO2PBDesignPointCalculator.powerBlock.turbine.tipSpeed_des / sCO2PBDesignPointCalculator.powerBlock.turbine.N_shaft
*/
void sCO2SurrogatePBRig_eqFunction_562(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,562};
  data->simulationInfo->realParameter[746] /* sCO2PBDesignPointCalculator.powerBlock.turbine.diam_turb PARAM */ = DIVISION_SIM((2.0) * (data->simulationInfo->realParameter[759] /* sCO2PBDesignPointCalculator.powerBlock.turbine.tipSpeed_des PARAM */),data->simulationInfo->realParameter[742] /* sCO2PBDesignPointCalculator.powerBlock.turbine.N_shaft PARAM */,"sCO2PBDesignPointCalculator.powerBlock.turbine.N_shaft",equationIndexes);
  TRACE_POP
}

/*
equation index: 563
type: SIMPLE_ASSIGN
_omcQuot_245354415254._sCO2PBDesignPointCalculator._powerBlock._turbine._C_spouting = sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting_des
*/
void sCO2SurrogatePBRig_eqFunction_563(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,563};
  data->modelData->realVarsData[298].attribute /* sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting variable */.start = data->simulationInfo->realParameter[741] /* sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting_des PARAM */;
    data->localData[0]->realVars[298] /* sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting variable */ = data->modelData->realVarsData[298].attribute /* sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[298].info /* sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting */.name, (modelica_real) data->localData[0]->realVars[298] /* sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting variable */);
  TRACE_POP
}

/*
equation index: 580
type: LINEAR

<var>sCO2PBDesignPointCalculator._powerBlock._LTR._m_turb_des</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void sCO2SurrogatePBRig_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 580 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,580};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 580 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */ = aux_x[0];
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._diam_rotor = 1.259921049894873 * (sCO2PBDesignPointCalculator.powerBlock.reCompressor.m_des / (sCO2PBDesignPointCalculator.powerBlock.reCompressor.phi_opt * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_in_des.p, sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_in_des.h, tableIDd_p_h) * sCO2PBDesignPointCalculator.powerBlock.reCompressor.N_design)) ^ 0.3333333333333333
*/
void sCO2SurrogatePBRig_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  tmp1 = DIVISION_SIM(data->simulationInfo->realParameter[725] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.m_des PARAM */,((data->simulationInfo->realParameter[729] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.phi_opt PARAM */) * (omc_SolarTherm_Media_CO2_CO2__utilities_rho__p__h(threadData, data->simulationInfo->realParameter[732] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_in_des.p PARAM */, data->simulationInfo->realParameter[731] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_in_des.h PARAM */, data->simulationInfo->extObjs[46]))) * (data->simulationInfo->realParameter[716] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.N_design PARAM */),"sCO2PBDesignPointCalculator.powerBlock.reCompressor.phi_opt * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_in_des.p, sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_in_des.h, tableIDd_p_h) * sCO2PBDesignPointCalculator.powerBlock.reCompressor.N_design",equationIndexes);
  tmp2 = 0.3333333333333333;
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
  data->simulationInfo->realParameter[721] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.diam_rotor PARAM */ = (1.259921049894873) * (tmp3);
  TRACE_POP
}

/*
equation index: 582
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._tipSpeed = 0.5 * sCO2PBDesignPointCalculator.powerBlock.reCompressor.diam_rotor * sCO2PBDesignPointCalculator.powerBlock.reCompressor.N_design
*/
void sCO2SurrogatePBRig_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  data->simulationInfo->realParameter[735] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.tipSpeed PARAM */ = (0.5) * ((data->simulationInfo->realParameter[721] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.diam_rotor PARAM */) * (data->simulationInfo->realParameter[716] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.N_design PARAM */));
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._psi_des = (sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_isen_des.h - sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_in_des.h) / sCO2PBDesignPointCalculator.powerBlock.reCompressor.tipSpeed ^ 2.0
*/
void sCO2SurrogatePBRig_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  modelica_real tmp8;
  tmp8 = data->simulationInfo->realParameter[735] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.tipSpeed PARAM */;
  data->simulationInfo->realParameter[730] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.psi_des PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[733] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_isen_des.h PARAM */ - data->simulationInfo->realParameter[731] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_in_des.h PARAM */,(tmp8 * tmp8),"sCO2PBDesignPointCalculator.powerBlock.reCompressor.tipSpeed ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._Q_HX_des = 14.0 * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des
*/
void sCO2SurrogatePBRig_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  data->simulationInfo->realParameter[267] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_HX_des PARAM */ = (14.0) * ((data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */));
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._UA_dis[1] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[2] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[1])
*/
void sCO2SurrogatePBRig_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->simulationInfo->realParameter[300] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[1] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[315] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[2] PARAM */ + data->simulationInfo->realParameter[314] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[1] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[2] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._UA_dis[2] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[3] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[2])
*/
void sCO2SurrogatePBRig_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->simulationInfo->realParameter[301] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[2] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[316] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[3] PARAM */ + data->simulationInfo->realParameter[315] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[2] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[3] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._UA_dis[3] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[4] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[3])
*/
void sCO2SurrogatePBRig_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  data->simulationInfo->realParameter[302] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[3] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[317] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[4] PARAM */ + data->simulationInfo->realParameter[316] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[3] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[4] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[3]",equationIndexes);
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._UA_dis[4] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[5] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[4])
*/
void sCO2SurrogatePBRig_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->simulationInfo->realParameter[303] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[4] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[318] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[5] PARAM */ + data->simulationInfo->realParameter[317] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[4] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[5] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[4]",equationIndexes);
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._UA_dis[5] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[6] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[5])
*/
void sCO2SurrogatePBRig_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->simulationInfo->realParameter[304] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[5] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[319] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[6] PARAM */ + data->simulationInfo->realParameter[318] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[5] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[6] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[5]",equationIndexes);
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._UA_dis[6] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[7] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[6])
*/
void sCO2SurrogatePBRig_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  data->simulationInfo->realParameter[305] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[6] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[320] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[7] PARAM */ + data->simulationInfo->realParameter[319] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[6] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[7] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[6]",equationIndexes);
  TRACE_POP
}

/*
equation index: 591
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._UA_dis[7] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[8] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[7])
*/
void sCO2SurrogatePBRig_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  data->simulationInfo->realParameter[306] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[7] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[321] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[8] PARAM */ + data->simulationInfo->realParameter[320] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[7] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[8] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[7]",equationIndexes);
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._UA_dis[8] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[9] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[8])
*/
void sCO2SurrogatePBRig_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  data->simulationInfo->realParameter[307] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[8] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[322] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[9] PARAM */ + data->simulationInfo->realParameter[321] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[8] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[9] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[8]",equationIndexes);
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._UA_dis[9] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[10] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[9])
*/
void sCO2SurrogatePBRig_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  data->simulationInfo->realParameter[308] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[9] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[323] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[10] PARAM */ + data->simulationInfo->realParameter[322] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[9] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[10] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[9]",equationIndexes);
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._UA_dis[10] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[11] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[10])
*/
void sCO2SurrogatePBRig_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  data->simulationInfo->realParameter[309] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[10] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[324] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[11] PARAM */ + data->simulationInfo->realParameter[323] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[10] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[11] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[10]",equationIndexes);
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._UA_dis[11] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[12] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[11])
*/
void sCO2SurrogatePBRig_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  data->simulationInfo->realParameter[310] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[11] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[325] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[12] PARAM */ + data->simulationInfo->realParameter[324] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[11] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[12] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[11]",equationIndexes);
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._UA_dis[12] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[13] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[12])
*/
void sCO2SurrogatePBRig_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  data->simulationInfo->realParameter[311] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[12] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[326] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[13] PARAM */ + data->simulationInfo->realParameter[325] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[12] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[13] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[12]",equationIndexes);
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._UA_dis[13] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[14] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[13])
*/
void sCO2SurrogatePBRig_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->simulationInfo->realParameter[312] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[13] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[327] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[14] PARAM */ + data->simulationInfo->realParameter[326] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[13] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[14] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[13]",equationIndexes);
  TRACE_POP
}

/*
equation index: 598
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._UA_dis[14] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[15] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[14])
*/
void sCO2SurrogatePBRig_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  data->simulationInfo->realParameter[313] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[14] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[334] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[268] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[328] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[15] PARAM */ + data->simulationInfo->realParameter[327] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[14] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[15] + sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT_des[14]",equationIndexes);
  TRACE_POP
}

/*
equation index: 599
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._UA_HTR = sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[1] + sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[2] + sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[3] + sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[4] + sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[5] + sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[6] + sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[7] + sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[8] + sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[9] + sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[10] + sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[11] + sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[12] + sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[13] + sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[14]
*/
void sCO2SurrogatePBRig_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  data->simulationInfo->realParameter[299] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_HTR PARAM */ = data->simulationInfo->realParameter[300] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[1] PARAM */ + data->simulationInfo->realParameter[301] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[2] PARAM */ + data->simulationInfo->realParameter[302] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[3] PARAM */ + data->simulationInfo->realParameter[303] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[4] PARAM */ + data->simulationInfo->realParameter[304] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[5] PARAM */ + data->simulationInfo->realParameter[305] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[6] PARAM */ + data->simulationInfo->realParameter[306] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[7] PARAM */ + data->simulationInfo->realParameter[307] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[8] PARAM */ + data->simulationInfo->realParameter[308] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[9] PARAM */ + data->simulationInfo->realParameter[309] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[10] PARAM */ + data->simulationInfo->realParameter[310] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[11] PARAM */ + data->simulationInfo->realParameter[311] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[12] PARAM */ + data->simulationInfo->realParameter[312] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[13] PARAM */ + data->simulationInfo->realParameter[313] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_dis[14] PARAM */;
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._C_LTR = sCO2PBDesignPointCalculator.powerBlock.pri_recuperator * sCO2PBDesignPointCalculator.powerBlock.LTR.UA_HTR ^ 0.8933
*/
void sCO2SurrogatePBRig_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  tmp9 = data->simulationInfo->realParameter[299] /* sCO2PBDesignPointCalculator.powerBlock.LTR.UA_HTR PARAM */;
  tmp10 = 0.8933;
  if(tmp9 < 0.0 && tmp10 != 0.0)
  {
    tmp12 = modf(tmp10, &tmp13);
    
    if(tmp12 > 0.5)
    {
      tmp12 -= 1.0;
      tmp13 += 1.0;
    }
    else if(tmp12 < -0.5)
    {
      tmp12 += 1.0;
      tmp13 -= 1.0;
    }
    
    if(fabs(tmp12) < 1e-10)
      tmp11 = pow(tmp9, tmp13);
    else
    {
      tmp15 = modf(1.0/tmp10, &tmp14);
      if(tmp15 > 0.5)
      {
        tmp15 -= 1.0;
        tmp14 += 1.0;
      }
      else if(tmp15 < -0.5)
      {
        tmp15 += 1.0;
        tmp14 -= 1.0;
      }
      if(fabs(tmp15) < 1e-10 && ((unsigned long)tmp14 & 1))
      {
        tmp11 = -pow(-tmp9, tmp12)*pow(tmp9, tmp13);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
      }
    }
  }
  else
  {
    tmp11 = pow(tmp9, tmp10);
  }
  if(isnan(tmp11) || isinf(tmp11))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp9, tmp10);
  }
  data->simulationInfo->realParameter[123] /* sCO2PBDesignPointCalculator.powerBlock.C_LTR PARAM */ = (data->simulationInfo->realParameter[712] /* sCO2PBDesignPointCalculator.powerBlock.pri_recuperator PARAM */) * (tmp11);
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._Q_HX_des = 14.0 * sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des
*/
void sCO2SurrogatePBRig_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->simulationInfo->realParameter[132] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_HX_des PARAM */ = (14.0) * ((data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */));
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._UA_dis[2] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[3] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[2])
*/
void sCO2SurrogatePBRig_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  data->simulationInfo->realParameter[166] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[2] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[181] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[3] PARAM */ + data->simulationInfo->realParameter[180] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[2] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[3] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 603
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._UA_dis[3] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[4] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[3])
*/
void sCO2SurrogatePBRig_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  data->simulationInfo->realParameter[167] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[3] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[182] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[4] PARAM */ + data->simulationInfo->realParameter[181] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[3] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[4] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[3]",equationIndexes);
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._UA_dis[6] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[7] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[6])
*/
void sCO2SurrogatePBRig_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  data->simulationInfo->realParameter[170] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[6] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[185] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[7] PARAM */ + data->simulationInfo->realParameter[184] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[6] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[7] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[6]",equationIndexes);
  TRACE_POP
}

/*
equation index: 605
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._UA_dis[7] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[8] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[7])
*/
void sCO2SurrogatePBRig_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->simulationInfo->realParameter[171] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[7] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[186] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[8] PARAM */ + data->simulationInfo->realParameter[185] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[7] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[8] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[7]",equationIndexes);
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._UA_dis[8] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[9] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[8])
*/
void sCO2SurrogatePBRig_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->simulationInfo->realParameter[172] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[8] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[187] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[9] PARAM */ + data->simulationInfo->realParameter[186] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[8] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[9] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[8]",equationIndexes);
  TRACE_POP
}

/*
equation index: 607
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._UA_dis[9] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[10] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[9])
*/
void sCO2SurrogatePBRig_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  data->simulationInfo->realParameter[173] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[9] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[188] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[10] PARAM */ + data->simulationInfo->realParameter[187] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[9] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[10] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[9]",equationIndexes);
  TRACE_POP
}

/*
equation index: 608
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._UA_dis[10] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[11] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[10])
*/
void sCO2SurrogatePBRig_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  data->simulationInfo->realParameter[174] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[10] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[189] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[11] PARAM */ + data->simulationInfo->realParameter[188] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[10] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[11] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[10]",equationIndexes);
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._UA_dis[11] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[12] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[11])
*/
void sCO2SurrogatePBRig_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->simulationInfo->realParameter[175] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[11] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[190] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[12] PARAM */ + data->simulationInfo->realParameter[189] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[11] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[12] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[11]",equationIndexes);
  TRACE_POP
}

/*
equation index: 610
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._UA_dis[12] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[13] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[12])
*/
void sCO2SurrogatePBRig_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->simulationInfo->realParameter[176] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[12] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[191] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[13] PARAM */ + data->simulationInfo->realParameter[190] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[12] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[13] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[12]",equationIndexes);
  TRACE_POP
}

/*
equation index: 611
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._UA_dis[13] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[14] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[13])
*/
void sCO2SurrogatePBRig_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->simulationInfo->realParameter[177] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[13] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[192] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[14] PARAM */ + data->simulationInfo->realParameter[191] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[13] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[14] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[13]",equationIndexes);
  TRACE_POP
}

/*
equation index: 612
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._UA_dis[14] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[15] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[14])
*/
void sCO2SurrogatePBRig_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->simulationInfo->realParameter[178] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[14] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[193] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[15] PARAM */ + data->simulationInfo->realParameter[192] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[14] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[15] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[14]",equationIndexes);
  TRACE_POP
}

/*
equation index: 613
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._A_nozzle = sCO2PBDesignPointCalculator.powerBlock.turbine.m_des / (sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting_des * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(sCO2PBDesignPointCalculator.powerBlock.turbine.state_out_des.p, sCO2PBDesignPointCalculator.powerBlock.turbine.state_out_des.h, tableIDd_p_h))
*/
void sCO2SurrogatePBRig_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  data->simulationInfo->realParameter[740] /* sCO2PBDesignPointCalculator.powerBlock.turbine.A_nozzle PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[750] /* sCO2PBDesignPointCalculator.powerBlock.turbine.m_des PARAM */,(data->simulationInfo->realParameter[741] /* sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting_des PARAM */) * (omc_SolarTherm_Media_CO2_CO2__utilities_rho__p__h(threadData, data->simulationInfo->realParameter[758] /* sCO2PBDesignPointCalculator.powerBlock.turbine.state_out_des.p PARAM */, data->simulationInfo->realParameter[757] /* sCO2PBDesignPointCalculator.powerBlock.turbine.state_out_des.h PARAM */, data->simulationInfo->extObjs[46])),"sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting_des * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(sCO2PBDesignPointCalculator.powerBlock.turbine.state_out_des.p, sCO2PBDesignPointCalculator.powerBlock.turbine.state_out_des.h, tableIDd_p_h)",equationIndexes);
  TRACE_POP
}

/*
equation index: 614
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._m_CO2_des = sCO2PBDesignPointCalculator.powerBlock.turbine.m_des
*/
void sCO2SurrogatePBRig_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  data->simulationInfo->realParameter[595] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_CO2_des PARAM */ = data->simulationInfo->realParameter[750] /* sCO2PBDesignPointCalculator.powerBlock.turbine.m_des PARAM */;
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._UA_dis[1] = (-2.0) * sCO2PBDesignPointCalculator.powerBlock.cooler.m_des * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[1] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[2])
*/
void sCO2SurrogatePBRig_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->simulationInfo->realParameter[438] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_dis[1] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[452] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[1] PARAM */ + data->simulationInfo->realParameter[453] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[2] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[1] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 616
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._UA_dis[2] = (-2.0) * sCO2PBDesignPointCalculator.powerBlock.cooler.m_des * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[2] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[3])
*/
void sCO2SurrogatePBRig_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  data->simulationInfo->realParameter[439] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_dis[2] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[453] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[2] PARAM */ + data->simulationInfo->realParameter[454] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[3] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[2] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[3]",equationIndexes);
  TRACE_POP
}

/*
equation index: 617
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._UA_dis[3] = (-2.0) * sCO2PBDesignPointCalculator.powerBlock.cooler.m_des * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[3] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[4])
*/
void sCO2SurrogatePBRig_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  data->simulationInfo->realParameter[440] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_dis[3] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[454] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[3] PARAM */ + data->simulationInfo->realParameter[455] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[4] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[3] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[4]",equationIndexes);
  TRACE_POP
}

/*
equation index: 618
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._UA_dis[4] = (-2.0) * sCO2PBDesignPointCalculator.powerBlock.cooler.m_des * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[4] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[5])
*/
void sCO2SurrogatePBRig_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->simulationInfo->realParameter[441] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_dis[4] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[455] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[4] PARAM */ + data->simulationInfo->realParameter[456] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[5] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[4] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[5]",equationIndexes);
  TRACE_POP
}

/*
equation index: 619
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._UA_dis[5] = (-2.0) * sCO2PBDesignPointCalculator.powerBlock.cooler.m_des * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[5] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[6])
*/
void sCO2SurrogatePBRig_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->simulationInfo->realParameter[442] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_dis[5] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[456] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[5] PARAM */ + data->simulationInfo->realParameter[457] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[6] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[5] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[6]",equationIndexes);
  TRACE_POP
}

/*
equation index: 620
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._UA_dis[6] = (-2.0) * sCO2PBDesignPointCalculator.powerBlock.cooler.m_des * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[6] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[7])
*/
void sCO2SurrogatePBRig_eqFunction_620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,620};
  data->simulationInfo->realParameter[443] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_dis[6] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[457] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[6] PARAM */ + data->simulationInfo->realParameter[458] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[7] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[6] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[7]",equationIndexes);
  TRACE_POP
}

/*
equation index: 621
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._UA_dis[7] = (-2.0) * sCO2PBDesignPointCalculator.powerBlock.cooler.m_des * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[7] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[8])
*/
void sCO2SurrogatePBRig_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->simulationInfo->realParameter[444] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_dis[7] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[458] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[7] PARAM */ + data->simulationInfo->realParameter[459] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[8] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[7] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[8]",equationIndexes);
  TRACE_POP
}

/*
equation index: 622
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._UA_dis[8] = (-2.0) * sCO2PBDesignPointCalculator.powerBlock.cooler.m_des * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[8] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[9])
*/
void sCO2SurrogatePBRig_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->simulationInfo->realParameter[445] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_dis[8] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[459] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[8] PARAM */ + data->simulationInfo->realParameter[460] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[9] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[8] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[9]",equationIndexes);
  TRACE_POP
}

/*
equation index: 623
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._UA_dis[9] = (-2.0) * sCO2PBDesignPointCalculator.powerBlock.cooler.m_des * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[9] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[10])
*/
void sCO2SurrogatePBRig_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  data->simulationInfo->realParameter[446] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_dis[9] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[460] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[9] PARAM */ + data->simulationInfo->realParameter[461] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[10] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[9] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[10]",equationIndexes);
  TRACE_POP
}

/*
equation index: 624
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._UA_dis[10] = (-2.0) * sCO2PBDesignPointCalculator.powerBlock.cooler.m_des * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[10] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[11])
*/
void sCO2SurrogatePBRig_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->simulationInfo->realParameter[447] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_dis[10] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[461] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[10] PARAM */ + data->simulationInfo->realParameter[462] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[11] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[10] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[11]",equationIndexes);
  TRACE_POP
}

/*
equation index: 625
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._UA_dis[11] = (-2.0) * sCO2PBDesignPointCalculator.powerBlock.cooler.m_des * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[11] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[12])
*/
void sCO2SurrogatePBRig_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->simulationInfo->realParameter[448] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_dis[11] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[462] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[11] PARAM */ + data->simulationInfo->realParameter[463] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[12] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[11] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[12]",equationIndexes);
  TRACE_POP
}

/*
equation index: 626
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._UA_dis[12] = (-2.0) * sCO2PBDesignPointCalculator.powerBlock.cooler.m_des * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[12] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[13])
*/
void sCO2SurrogatePBRig_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->simulationInfo->realParameter[449] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_dis[12] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[463] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[12] PARAM */ + data->simulationInfo->realParameter[464] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[13] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[12] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[13]",equationIndexes);
  TRACE_POP
}

/*
equation index: 627
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._UA_dis[13] = (-2.0) * sCO2PBDesignPointCalculator.powerBlock.cooler.m_des * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[13] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[14])
*/
void sCO2SurrogatePBRig_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  data->simulationInfo->realParameter[450] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_dis[13] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[464] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[13] PARAM */ + data->simulationInfo->realParameter[465] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[14] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[13] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[14]",equationIndexes);
  TRACE_POP
}

/*
equation index: 628
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._UA_dis[14] = (-2.0) * sCO2PBDesignPointCalculator.powerBlock.cooler.m_des * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[14] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[15])
*/
void sCO2SurrogatePBRig_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  data->simulationInfo->realParameter[451] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_dis[14] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[465] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[14] PARAM */ + data->simulationInfo->realParameter[466] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[15] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[14] + sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT_des[15]",equationIndexes);
  TRACE_POP
}

/*
equation index: 629
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._Q_cooler_des = 14.0 * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des * sCO2PBDesignPointCalculator.powerBlock.cooler.m_des
*/
void sCO2SurrogatePBRig_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  data->simulationInfo->realParameter[417] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_cooler_des PARAM */ = (14.0) * ((data->simulationInfo->realParameter[418] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des PARAM */) * (data->simulationInfo->realParameter[485] /* sCO2PBDesignPointCalculator.powerBlock.cooler.m_des PARAM */));
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._UA_cooler = abs(sCO2PBDesignPointCalculator.powerBlock.cooler.Q_cooler_des) / (log((sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[1] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des) / (sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[15] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des)) * (sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[1] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des) * (sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[15] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des))
*/
void sCO2SurrogatePBRig_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  modelica_real tmp16;
  tmp16 = DIVISION_SIM(data->simulationInfo->realParameter[419] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[1] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */,data->simulationInfo->realParameter[433] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[15] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */,"sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[15] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des",equationIndexes);
  if(!(tmp16 > 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of log((sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[1] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des) / (sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[15] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des)) was %g should be > 0", tmp16);
  }
  data->simulationInfo->realParameter[437] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_cooler PARAM */ = DIVISION_SIM(fabs(data->simulationInfo->realParameter[417] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_cooler_des PARAM */),((log(tmp16)) * (data->simulationInfo->realParameter[419] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[1] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */)) * (data->simulationInfo->realParameter[433] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[15] PARAM */ - data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */),"log((sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[1] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des) / (sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[15] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des)) * (sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[1] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des) * (sCO2PBDesignPointCalculator.powerBlock.cooler.T_CO2_des[15] - sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des)",equationIndexes);
  TRACE_POP
}

/*
equation index: 631
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._C_cooler = sCO2PBDesignPointCalculator.powerBlock.pri_cooler * sCO2PBDesignPointCalculator.powerBlock.cooler.UA_cooler ^ 0.8919
*/
void sCO2SurrogatePBRig_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  tmp17 = data->simulationInfo->realParameter[437] /* sCO2PBDesignPointCalculator.powerBlock.cooler.UA_cooler PARAM */;
  tmp18 = 0.8919;
  if(tmp17 < 0.0 && tmp18 != 0.0)
  {
    tmp20 = modf(tmp18, &tmp21);
    
    if(tmp20 > 0.5)
    {
      tmp20 -= 1.0;
      tmp21 += 1.0;
    }
    else if(tmp20 < -0.5)
    {
      tmp20 += 1.0;
      tmp21 -= 1.0;
    }
    
    if(fabs(tmp20) < 1e-10)
      tmp19 = pow(tmp17, tmp21);
    else
    {
      tmp23 = modf(1.0/tmp18, &tmp22);
      if(tmp23 > 0.5)
      {
        tmp23 -= 1.0;
        tmp22 += 1.0;
      }
      else if(tmp23 < -0.5)
      {
        tmp23 += 1.0;
        tmp22 -= 1.0;
      }
      if(fabs(tmp23) < 1e-10 && ((unsigned long)tmp22 & 1))
      {
        tmp19 = -pow(-tmp17, tmp20)*pow(tmp17, tmp21);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
      }
    }
  }
  else
  {
    tmp19 = pow(tmp17, tmp18);
  }
  if(isnan(tmp19) || isinf(tmp19))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp17, tmp18);
  }
  data->simulationInfo->realParameter[125] /* sCO2PBDesignPointCalculator.powerBlock.C_cooler PARAM */ = (data->simulationInfo->realParameter[709] /* sCO2PBDesignPointCalculator.powerBlock.pri_cooler PARAM */) * (tmp19);
  TRACE_POP
}

/*
equation index: 632
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._diam_rotor = 1.259921049894873 * (sCO2PBDesignPointCalculator.powerBlock.mainCompressor.m_des / (sCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi_opt * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.p, sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h, tableIDd_p_h) * sCO2PBDesignPointCalculator.powerBlock.mainCompressor.N_design)) ^ 0.3333333333333333
*/
void sCO2SurrogatePBRig_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  tmp24 = DIVISION_SIM(data->simulationInfo->realParameter[692] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.m_des PARAM */,((data->simulationInfo->realParameter[696] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi_opt PARAM */) * (omc_SolarTherm_Media_CO2_CO2__utilities_rho__p__h(threadData, data->simulationInfo->realParameter[699] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.p PARAM */, data->simulationInfo->realParameter[698] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h PARAM */, data->simulationInfo->extObjs[46]))) * (data->simulationInfo->realParameter[683] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.N_design PARAM */),"sCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi_opt * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.p, sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h, tableIDd_p_h) * sCO2PBDesignPointCalculator.powerBlock.mainCompressor.N_design",equationIndexes);
  tmp25 = 0.3333333333333333;
  if(tmp24 < 0.0 && tmp25 != 0.0)
  {
    tmp27 = modf(tmp25, &tmp28);
    
    if(tmp27 > 0.5)
    {
      tmp27 -= 1.0;
      tmp28 += 1.0;
    }
    else if(tmp27 < -0.5)
    {
      tmp27 += 1.0;
      tmp28 -= 1.0;
    }
    
    if(fabs(tmp27) < 1e-10)
      tmp26 = pow(tmp24, tmp28);
    else
    {
      tmp30 = modf(1.0/tmp25, &tmp29);
      if(tmp30 > 0.5)
      {
        tmp30 -= 1.0;
        tmp29 += 1.0;
      }
      else if(tmp30 < -0.5)
      {
        tmp30 += 1.0;
        tmp29 -= 1.0;
      }
      if(fabs(tmp30) < 1e-10 && ((unsigned long)tmp29 & 1))
      {
        tmp26 = -pow(-tmp24, tmp27)*pow(tmp24, tmp28);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp24, tmp25);
      }
    }
  }
  else
  {
    tmp26 = pow(tmp24, tmp25);
  }
  if(isnan(tmp26) || isinf(tmp26))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp24, tmp25);
  }
  data->simulationInfo->realParameter[688] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.diam_rotor PARAM */ = (1.259921049894873) * (tmp26);
  TRACE_POP
}

/*
equation index: 633
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._tipSpeed = 0.5 * sCO2PBDesignPointCalculator.powerBlock.mainCompressor.diam_rotor * sCO2PBDesignPointCalculator.powerBlock.mainCompressor.N_design
*/
void sCO2SurrogatePBRig_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->simulationInfo->realParameter[702] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.tipSpeed PARAM */ = (0.5) * ((data->simulationInfo->realParameter[688] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.diam_rotor PARAM */) * (data->simulationInfo->realParameter[683] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.N_design PARAM */));
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._psi_des = (sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen_des.h - sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h) / sCO2PBDesignPointCalculator.powerBlock.mainCompressor.tipSpeed ^ 2.0
*/
void sCO2SurrogatePBRig_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  modelica_real tmp31;
  tmp31 = data->simulationInfo->realParameter[702] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.tipSpeed PARAM */;
  data->simulationInfo->realParameter[697] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.psi_des PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[700] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen_des.h PARAM */ - data->simulationInfo->realParameter[698] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h PARAM */,(tmp31 * tmp31),"sCO2PBDesignPointCalculator.powerBlock.mainCompressor.tipSpeed ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 635
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._C_mainCompressor = sCO2PBDesignPointCalculator.powerBlock.pri_compressor * (0.001 * sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp_des) ^ 0.9142
*/
void sCO2SurrogatePBRig_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  tmp32 = (0.001) * (data->simulationInfo->realParameter[687] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp_des PARAM */);
  tmp33 = 0.9142;
  if(tmp32 < 0.0 && tmp33 != 0.0)
  {
    tmp35 = modf(tmp33, &tmp36);
    
    if(tmp35 > 0.5)
    {
      tmp35 -= 1.0;
      tmp36 += 1.0;
    }
    else if(tmp35 < -0.5)
    {
      tmp35 += 1.0;
      tmp36 -= 1.0;
    }
    
    if(fabs(tmp35) < 1e-10)
      tmp34 = pow(tmp32, tmp36);
    else
    {
      tmp38 = modf(1.0/tmp33, &tmp37);
      if(tmp38 > 0.5)
      {
        tmp38 -= 1.0;
        tmp37 += 1.0;
      }
      else if(tmp38 < -0.5)
      {
        tmp38 += 1.0;
        tmp37 -= 1.0;
      }
      if(fabs(tmp38) < 1e-10 && ((unsigned long)tmp37 & 1))
      {
        tmp34 = -pow(-tmp32, tmp35)*pow(tmp32, tmp36);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp32, tmp33);
      }
    }
  }
  else
  {
    tmp34 = pow(tmp32, tmp33);
  }
  if(isnan(tmp34) || isinf(tmp34))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp32, tmp33);
  }
  data->simulationInfo->realParameter[128] /* sCO2PBDesignPointCalculator.powerBlock.C_mainCompressor PARAM */ = (data->simulationInfo->realParameter[708] /* sCO2PBDesignPointCalculator.powerBlock.pri_compressor PARAM */) * (tmp34);
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._m_comp_des = sCO2PBDesignPointCalculator.powerBlock.mainCompressor.m_des
*/
void sCO2SurrogatePBRig_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->simulationInfo->realParameter[333] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_comp_des PARAM */ = data->simulationInfo->realParameter[692] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.m_des PARAM */;
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._m_comp_des = sCO2PBDesignPointCalculator.powerBlock.reCompressor.m_des + sCO2PBDesignPointCalculator.powerBlock.LTR.m_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
  data->simulationInfo->realParameter[198] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_comp_des PARAM */ = data->simulationInfo->realParameter[725] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.m_des PARAM */ + data->simulationInfo->realParameter[333] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 638
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._C_reCompressor = sCO2PBDesignPointCalculator.powerBlock.pri_compressor * (0.001 * sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp_des) ^ 0.9142
*/
void sCO2SurrogatePBRig_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  tmp39 = (0.001) * (data->simulationInfo->realParameter[720] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp_des PARAM */);
  tmp40 = 0.9142;
  if(tmp39 < 0.0 && tmp40 != 0.0)
  {
    tmp42 = modf(tmp40, &tmp43);
    
    if(tmp42 > 0.5)
    {
      tmp42 -= 1.0;
      tmp43 += 1.0;
    }
    else if(tmp42 < -0.5)
    {
      tmp42 += 1.0;
      tmp43 -= 1.0;
    }
    
    if(fabs(tmp42) < 1e-10)
      tmp41 = pow(tmp39, tmp43);
    else
    {
      tmp45 = modf(1.0/tmp40, &tmp44);
      if(tmp45 > 0.5)
      {
        tmp45 -= 1.0;
        tmp44 += 1.0;
      }
      else if(tmp45 < -0.5)
      {
        tmp45 += 1.0;
        tmp44 -= 1.0;
      }
      if(fabs(tmp45) < 1e-10 && ((unsigned long)tmp44 & 1))
      {
        tmp41 = -pow(-tmp39, tmp42)*pow(tmp39, tmp43);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp39, tmp40);
      }
    }
  }
  else
  {
    tmp41 = pow(tmp39, tmp40);
  }
  if(isnan(tmp41) || isinf(tmp41))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp39, tmp40);
  }
  data->simulationInfo->realParameter[129] /* sCO2PBDesignPointCalculator.powerBlock.C_reCompressor PARAM */ = (data->simulationInfo->realParameter[708] /* sCO2PBDesignPointCalculator.powerBlock.pri_compressor PARAM */) * (tmp41);
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._P_gross_des = (-sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb_des) - sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp_des - sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp_des
*/
void sCO2SurrogatePBRig_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  data->simulationInfo->realParameter[403] /* sCO2PBDesignPointCalculator.powerBlock.P_gross_des PARAM */ = (-data->simulationInfo->realParameter[745] /* sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb_des PARAM */) - data->simulationInfo->realParameter[687] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp_des PARAM */ - data->simulationInfo->realParameter[720] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._P_nom_des = sCO2PBDesignPointCalculator.powerBlock.P_gross_des
*/
void sCO2SurrogatePBRig_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->simulationInfo->realParameter[131] /* sCO2PBDesignPointCalculator.powerBlock.HTR.P_nom_des PARAM */ = data->simulationInfo->realParameter[403] /* sCO2PBDesignPointCalculator.powerBlock.P_gross_des PARAM */;
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
_omcQuot_245354415254._sCO2PBDesignPointCalculator._powerBlock._exchanger._CO2_port_b._m_flow = (-1e-05) * sCO2PBDesignPointCalculator.powerBlock.HTR.P_nom_des
*/
void sCO2SurrogatePBRig_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  data->modelData->realVarsData[225].attribute /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow variable */.start = (-1e-05) * (data->simulationInfo->realParameter[131] /* sCO2PBDesignPointCalculator.powerBlock.HTR.P_nom_des PARAM */);
    data->localData[0]->realVars[225] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow variable */ = data->modelData->realVarsData[225].attribute /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[225].info /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow */.name, (modelica_real) data->localData[0]->realVars[225] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow variable */);
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._C_turbine = sCO2PBDesignPointCalculator.powerBlock.pri_turbine * ((-0.001) * sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb_des) ^ 0.5886
*/
void sCO2SurrogatePBRig_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  tmp46 = (-0.001) * (data->simulationInfo->realParameter[745] /* sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb_des PARAM */);
  tmp47 = 0.5886;
  if(tmp46 < 0.0 && tmp47 != 0.0)
  {
    tmp49 = modf(tmp47, &tmp50);
    
    if(tmp49 > 0.5)
    {
      tmp49 -= 1.0;
      tmp50 += 1.0;
    }
    else if(tmp49 < -0.5)
    {
      tmp49 += 1.0;
      tmp50 -= 1.0;
    }
    
    if(fabs(tmp49) < 1e-10)
      tmp48 = pow(tmp46, tmp50);
    else
    {
      tmp52 = modf(1.0/tmp47, &tmp51);
      if(tmp52 > 0.5)
      {
        tmp52 -= 1.0;
        tmp51 += 1.0;
      }
      else if(tmp52 < -0.5)
      {
        tmp52 += 1.0;
        tmp51 -= 1.0;
      }
      if(fabs(tmp52) < 1e-10 && ((unsigned long)tmp51 & 1))
      {
        tmp48 = -pow(-tmp46, tmp49)*pow(tmp46, tmp50);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp46, tmp47);
      }
    }
  }
  else
  {
    tmp48 = pow(tmp46, tmp47);
  }
  if(isnan(tmp48) || isinf(tmp48))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp46, tmp47);
  }
  data->simulationInfo->realParameter[130] /* sCO2PBDesignPointCalculator.powerBlock.C_turbine PARAM */ = (data->simulationInfo->realParameter[713] /* sCO2PBDesignPointCalculator.powerBlock.pri_turbine PARAM */) * (tmp48);
  TRACE_POP
}

/*
equation index: 643
type: SIMPLE_ASSIGN
_omcQuot_245354415254._sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[15] = sCO2PBDesignPointCalculator.powerBlock.turbine.h_in_des
*/
void sCO2SurrogatePBRig_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  data->modelData->realVarsData[261].attribute /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] variable */.start = data->simulationInfo->realParameter[748] /* sCO2PBDesignPointCalculator.powerBlock.turbine.h_in_des PARAM */;
    data->localData[0]->realVars[261] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] variable */ = data->modelData->realVarsData[261].attribute /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[261].info /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] */.name, (modelica_real) data->localData[0]->realVars[261] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] variable */);
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_644(DATA*, threadData_t*);
/*
equation index: 645
indexNonlinear: 44
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._T_CO2_des[14]}
eqns: {644}
*/
void sCO2SurrogatePBRig_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 645 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[44].nlsxOld[0] = data->simulationInfo->realParameter[541] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[14] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 44);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,645};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 645 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[541] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[44].nlsx[0];
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._m_HTF_des = sCO2PBDesignPointCalculator.powerBlock.exchanger.m_CO2_des / sCO2PBDesignPointCalculator.powerBlock.exchanger.ratio_m_des
*/
void sCO2SurrogatePBRig_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[595] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_CO2_des PARAM */,data->simulationInfo->realParameter[602] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.ratio_m_des PARAM */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.ratio_m_des",equationIndexes);
  TRACE_POP
}

/*
equation index: 647
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._UA_HX_dis[1] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des * sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des / (sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[1] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[2])
*/
void sCO2SurrogatePBRig_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  data->simulationInfo->realParameter[562] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[1] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[576] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[1] PARAM */ + data->simulationInfo->realParameter[577] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[2] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[1] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 648
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._UA_HX_dis[2] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des * sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des / (sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[2] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[3])
*/
void sCO2SurrogatePBRig_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  data->simulationInfo->realParameter[563] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[2] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[577] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[2] PARAM */ + data->simulationInfo->realParameter[578] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[3] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[2] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[3]",equationIndexes);
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._UA_HX_dis[3] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des * sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des / (sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[3] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[4])
*/
void sCO2SurrogatePBRig_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->simulationInfo->realParameter[564] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[3] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[578] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[3] PARAM */ + data->simulationInfo->realParameter[579] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[4] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[3] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[4]",equationIndexes);
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._UA_HX_dis[4] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des * sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des / (sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[4] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[5])
*/
void sCO2SurrogatePBRig_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->simulationInfo->realParameter[565] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[4] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[579] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[4] PARAM */ + data->simulationInfo->realParameter[580] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[5] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[4] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[5]",equationIndexes);
  TRACE_POP
}

/*
equation index: 651
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._UA_HX_dis[5] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des * sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des / (sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[5] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[6])
*/
void sCO2SurrogatePBRig_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->simulationInfo->realParameter[566] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[5] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[580] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[5] PARAM */ + data->simulationInfo->realParameter[581] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[6] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[5] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[6]",equationIndexes);
  TRACE_POP
}

/*
equation index: 652
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._UA_HX_dis[6] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des * sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des / (sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[6] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[7])
*/
void sCO2SurrogatePBRig_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->simulationInfo->realParameter[567] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[6] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[581] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[6] PARAM */ + data->simulationInfo->realParameter[582] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[7] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[6] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[7]",equationIndexes);
  TRACE_POP
}

/*
equation index: 653
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._UA_HX_dis[7] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des * sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des / (sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[7] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[8])
*/
void sCO2SurrogatePBRig_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->simulationInfo->realParameter[568] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[7] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[582] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[7] PARAM */ + data->simulationInfo->realParameter[583] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[8] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[7] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[8]",equationIndexes);
  TRACE_POP
}

/*
equation index: 654
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._UA_HX_dis[8] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des * sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des / (sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[8] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[9])
*/
void sCO2SurrogatePBRig_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  data->simulationInfo->realParameter[569] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[8] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[583] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[8] PARAM */ + data->simulationInfo->realParameter[584] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[9] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[8] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[9]",equationIndexes);
  TRACE_POP
}

/*
equation index: 655
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._UA_HX_dis[9] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des * sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des / (sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[9] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[10])
*/
void sCO2SurrogatePBRig_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  data->simulationInfo->realParameter[570] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[9] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[584] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[9] PARAM */ + data->simulationInfo->realParameter[585] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[10] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[9] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[10]",equationIndexes);
  TRACE_POP
}

/*
equation index: 656
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._UA_HX_dis[10] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des * sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des / (sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[10] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[11])
*/
void sCO2SurrogatePBRig_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->simulationInfo->realParameter[571] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[10] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[585] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[10] PARAM */ + data->simulationInfo->realParameter[586] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[11] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[10] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[11]",equationIndexes);
  TRACE_POP
}

/*
equation index: 657
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._UA_HX_dis[11] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des * sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des / (sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[11] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[12])
*/
void sCO2SurrogatePBRig_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->simulationInfo->realParameter[572] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[11] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[586] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[11] PARAM */ + data->simulationInfo->realParameter[587] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[12] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[11] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[12]",equationIndexes);
  TRACE_POP
}

/*
equation index: 658
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._UA_HX_dis[12] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des * sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des / (sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[12] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[13])
*/
void sCO2SurrogatePBRig_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->simulationInfo->realParameter[573] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[12] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[587] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[12] PARAM */ + data->simulationInfo->realParameter[588] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[13] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[12] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[13]",equationIndexes);
  TRACE_POP
}

/*
equation index: 659
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._UA_HX_dis[13] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des * sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des / (sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[13] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[14])
*/
void sCO2SurrogatePBRig_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  data->simulationInfo->realParameter[574] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[13] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[588] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[13] PARAM */ + data->simulationInfo->realParameter[589] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[14] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[13] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[14]",equationIndexes);
  TRACE_POP
}

/*
equation index: 660
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._UA_HX_dis[14] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des * sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des / (sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[14] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[15])
*/
void sCO2SurrogatePBRig_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  data->simulationInfo->realParameter[575] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[14] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[527] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[589] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[14] PARAM */ + data->simulationInfo->realParameter[590] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[15] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[14] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT_des[15]",equationIndexes);
  TRACE_POP
}

/*
equation index: 661
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._UA_HX = sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[1] + sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[2] + sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[3] + sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[4] + sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[5] + sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[6] + sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[7] + sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[8] + sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[9] + sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[10] + sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[11] + sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[12] + sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[13] + sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[14]
*/
void sCO2SurrogatePBRig_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->simulationInfo->realParameter[561] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX PARAM */ = data->simulationInfo->realParameter[562] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[1] PARAM */ + data->simulationInfo->realParameter[563] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[2] PARAM */ + data->simulationInfo->realParameter[564] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[3] PARAM */ + data->simulationInfo->realParameter[565] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[4] PARAM */ + data->simulationInfo->realParameter[566] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[5] PARAM */ + data->simulationInfo->realParameter[567] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[6] PARAM */ + data->simulationInfo->realParameter[568] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[7] PARAM */ + data->simulationInfo->realParameter[569] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[8] PARAM */ + data->simulationInfo->realParameter[570] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[9] PARAM */ + data->simulationInfo->realParameter[571] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[10] PARAM */ + data->simulationInfo->realParameter[572] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[11] PARAM */ + data->simulationInfo->realParameter[573] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[12] PARAM */ + data->simulationInfo->realParameter[574] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[13] PARAM */ + data->simulationInfo->realParameter[575] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.UA_HX_dis[14] PARAM */;
  TRACE_POP
}

/*
equation index: 662
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._m_HTF_des = sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->simulationInfo->realParameter[682] /* sCO2PBDesignPointCalculator.powerBlock.m_HTF_des PARAM */ = data->simulationInfo->realParameter[596] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 663
type: ALGORITHM

  sCO2PBDesignPointCalculator.m_HTF_des := $START.sCO2PBDesignPointCalculator.m_HTF_des;
  sCO2PBDesignPointCalculator.m_HTF_des := sCO2PBDesignPointCalculator.powerBlock.m_HTF_des;
*/
void sCO2SurrogatePBRig_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->simulationInfo->realParameter[114] /* sCO2PBDesignPointCalculator.m_HTF_des PARAM */ = data->simulationInfo->realParameter[114] /* sCO2PBDesignPointCalculator.m_HTF_des PARAM */;

  data->simulationInfo->realParameter[114] /* sCO2PBDesignPointCalculator.m_HTF_des PARAM */ = data->simulationInfo->realParameter[682] /* sCO2PBDesignPointCalculator.powerBlock.m_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 664
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._m_HTF_in = sCO2PBDesignPointCalculator.load * sCO2PBDesignPointCalculator.m_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->simulationInfo->realParameter[115] /* sCO2PBDesignPointCalculator.m_HTF_in PARAM */ = (data->simulationInfo->realParameter[113] /* sCO2PBDesignPointCalculator.load PARAM */) * (data->simulationInfo->realParameter[114] /* sCO2PBDesignPointCalculator.m_HTF_des PARAM */);
  TRACE_POP
}

/*
equation index: 665
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._liftSimple._m_flow = sCO2PBDesignPointCalculator.m_HTF_in
*/
void sCO2SurrogatePBRig_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->simulationInfo->realParameter[111] /* sCO2PBDesignPointCalculator.liftSimple.m_flow PARAM */ = data->simulationInfo->realParameter[115] /* sCO2PBDesignPointCalculator.m_HTF_in PARAM */;
  TRACE_POP
}

/*
equation index: 666
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._m_dot._y = sCO2PBDesignPointCalculator.m_HTF_in
*/
void sCO2SurrogatePBRig_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->simulationInfo->realParameter[116] /* sCO2PBDesignPointCalculator.m_dot.y PARAM */ = data->simulationInfo->realParameter[115] /* sCO2PBDesignPointCalculator.m_HTF_in PARAM */;
  TRACE_POP
}

/*
equation index: 667
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._ports[1]._m_flow = -(if sCO2PBDesignPointCalculator.liftSimple.use_input then sCO2PBDesignPointCalculator.m_HTF_in else sCO2PBDesignPointCalculator.liftSimple.m_flow_fixed)
*/
void sCO2SurrogatePBRig_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->localData[0]->realVars[329] /* sCO2PBDesignPointCalculator.source.ports[1].m_flow variable */ = (-((data->simulationInfo->booleanParameter[7] /* sCO2PBDesignPointCalculator.liftSimple.use_input PARAM */?data->simulationInfo->realParameter[115] /* sCO2PBDesignPointCalculator.m_HTF_in PARAM */:data->simulationInfo->realParameter[112] /* sCO2PBDesignPointCalculator.liftSimple.m_flow_fixed PARAM */)));
  TRACE_POP
}

/*
equation index: 668
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._liftSimple._W_loss = 9.806649999999999 * (-sCO2PBDesignPointCalculator.source.ports[1].m_flow) * sCO2PBDesignPointCalculator.liftSimple.dh * (1.0 - sCO2PBDesignPointCalculator.liftSimple.CF) / sCO2PBDesignPointCalculator.liftSimple.eff
*/
void sCO2SurrogatePBRig_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  data->localData[0]->realVars[57] /* sCO2PBDesignPointCalculator.liftSimple.W_loss variable */ = (9.806649999999999) * (((-data->localData[0]->realVars[329] /* sCO2PBDesignPointCalculator.source.ports[1].m_flow variable */)) * ((data->simulationInfo->realParameter[107] /* sCO2PBDesignPointCalculator.liftSimple.dh PARAM */) * (DIVISION_SIM(1.0 - data->simulationInfo->realParameter[106] /* sCO2PBDesignPointCalculator.liftSimple.CF PARAM */,data->simulationInfo->realParameter[109] /* sCO2PBDesignPointCalculator.liftSimple.eff PARAM */,"sCO2PBDesignPointCalculator.liftSimple.eff",equationIndexes))));
  TRACE_POP
}

/*
equation index: 669
type: SIMPLE_ASSIGN
m_HTF_des = sCO2PBDesignPointCalculator.powerBlock.m_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->simulationInfo->realParameter[38] /* m_HTF_des PARAM */ = data->simulationInfo->realParameter[682] /* sCO2PBDesignPointCalculator.powerBlock.m_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 670
type: SIMPLE_ASSIGN
m_HTF_in = load * m_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->simulationInfo->realParameter[39] /* m_HTF_in PARAM */ = (data->simulationInfo->realParameter[37] /* load PARAM */) * (data->simulationInfo->realParameter[38] /* m_HTF_des PARAM */);
  TRACE_POP
}

/*
equation index: 671
type: SIMPLE_ASSIGN
liftSimple._m_flow = m_HTF_in
*/
void sCO2SurrogatePBRig_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  data->simulationInfo->realParameter[35] /* liftSimple.m_flow PARAM */ = data->simulationInfo->realParameter[39] /* m_HTF_in PARAM */;
  TRACE_POP
}

/*
equation index: 672
type: SIMPLE_ASSIGN
m_dot._y = m_HTF_in
*/
void sCO2SurrogatePBRig_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->simulationInfo->realParameter[40] /* m_dot.y PARAM */ = data->simulationInfo->realParameter[39] /* m_HTF_in PARAM */;
  TRACE_POP
}

/*
equation index: 673
type: SIMPLE_ASSIGN
source._ports[1]._m_flow = -(if liftSimple.use_input then m_HTF_in else liftSimple.m_flow_fixed)
*/
void sCO2SurrogatePBRig_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  data->localData[0]->realVars[357] /* source.ports[1].m_flow variable */ = (-((data->simulationInfo->booleanParameter[2] /* liftSimple.use_input PARAM */?data->simulationInfo->realParameter[39] /* m_HTF_in PARAM */:data->simulationInfo->realParameter[36] /* liftSimple.m_flow_fixed PARAM */)));
  TRACE_POP
}

/*
equation index: 674
type: SIMPLE_ASSIGN
liftSimple._W_loss = 9.806649999999999 * (-source.ports[1].m_flow) * liftSimple.dh * (1.0 - liftSimple.CF) / liftSimple.eff
*/
void sCO2SurrogatePBRig_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  data->localData[0]->realVars[43] /* liftSimple.W_loss variable */ = (9.806649999999999) * (((-data->localData[0]->realVars[357] /* source.ports[1].m_flow variable */)) * ((data->simulationInfo->realParameter[31] /* liftSimple.dh PARAM */) * (DIVISION_SIM(1.0 - data->simulationInfo->realParameter[30] /* liftSimple.CF PARAM */,data->simulationInfo->realParameter[33] /* liftSimple.eff PARAM */,"liftSimple.eff",equationIndexes))));
  TRACE_POP
}

/*
equation index: 675
type: SIMPLE_ASSIGN
powerBlock._m_HTF_des = m_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  data->simulationInfo->realParameter[74] /* powerBlock.m_HTF_des PARAM */ = data->simulationInfo->realParameter[38] /* m_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 676
type: SIMPLE_ASSIGN
powerBlock._raw_input[7] = (-source.ports[1].m_flow) / powerBlock.m_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  data->localData[0]->realVars[52] /* powerBlock.raw_input[7] variable */ = DIVISION_SIM((-data->localData[0]->realVars[357] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[74] /* powerBlock.m_HTF_des PARAM */,"powerBlock.m_HTF_des",equationIndexes);
  TRACE_POP
}

/*
equation index: 679
type: ARRAY_CALL_ASSIGN

_omcQuot_24544D505F363737 = SolarTherm.Utilities.SurrogateModelsMultiOutput.predict(powerBlock.session, {150000000.0, powerBlock.T_in_ref_blk, powerBlock.p_high, powerBlock.PR, powerBlock.pinch_PHX, powerBlock.dTemp_HTF_PHX, powerBlock.raw_input[7], powerBlock.raw_input[8], T_amb_input}, 9, 2, powerBlock.X_max, powerBlock.X_min, powerBlock.out_max, powerBlock.out_min)
*/
void sCO2SurrogatePBRig_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  real_array tmp0;
  real_array tmp1;
  real_array tmp2;
  real_array tmp3;
  real_array tmp4;
  real_array tmp5;
  array_alloc_scalar_real_array(&tmp0, 9, (modelica_real)150000000.0, (modelica_real)data->simulationInfo->realParameter[50] /* powerBlock.T_in_ref_blk PARAM */, (modelica_real)data->simulationInfo->realParameter[80] /* powerBlock.p_high PARAM */, (modelica_real)data->simulationInfo->realParameter[46] /* powerBlock.PR PARAM */, (modelica_real)data->simulationInfo->realParameter[81] /* powerBlock.pinch_PHX PARAM */, (modelica_real)data->simulationInfo->realParameter[69] /* powerBlock.dTemp_HTF_PHX PARAM */, (modelica_real)data->localData[0]->realVars[52] /* powerBlock.raw_input[7] variable */, (modelica_real)data->localData[0]->realVars[53] /* powerBlock.raw_input[8] variable */, (modelica_real)data->simulationInfo->realParameter[5] /* T_amb_input PARAM */);
  real_array_create(&tmp1, ((modelica_real*)&((&data->simulationInfo->realParameter[51] /* powerBlock.X_max[1] PARAM */)[calc_base_index_dims_subs(1, 9, ((modelica_integer) 1))])), 1, 9);
  real_array_create(&tmp2, ((modelica_real*)&((&data->simulationInfo->realParameter[60] /* powerBlock.X_min[1] PARAM */)[calc_base_index_dims_subs(1, 9, ((modelica_integer) 1))])), 1, 9);
  real_array_create(&tmp3, ((modelica_real*)&((&data->simulationInfo->realParameter[76] /* powerBlock.out_max[1] PARAM */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  real_array_create(&tmp4, ((modelica_real*)&((&data->simulationInfo->realParameter[78] /* powerBlock.out_min[1] PARAM */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  real_array_create(&tmp5, ((modelica_real*)&((&data->localData[0]->realVars[11] /* $TMP_677[1] variable */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  copy_real_array_data(omc_SolarTherm_Utilities_SurrogateModelsMultiOutput_predict(threadData, data->simulationInfo->extObjs[0], tmp0, ((modelica_integer) 9), ((modelica_integer) 2), tmp1, tmp2, tmp3, tmp4), &tmp5);
  TRACE_POP
}

/*
equation index: 677
type: SIMPLE_ASSIGN
eta_gross = $TMP_677[1]
*/
void sCO2SurrogatePBRig_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  data->localData[0]->realVars[42] /* eta_gross variable */ = data->localData[0]->realVars[11] /* $TMP_677[1] variable */;
  TRACE_POP
}

/*
equation index: 678
type: SIMPLE_ASSIGN
eta_Q = $TMP_677[2]
*/
void sCO2SurrogatePBRig_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->localData[0]->realVars[41] /* eta_Q variable */ = data->localData[0]->realVars[12] /* $TMP_677[2] variable */;
  TRACE_POP
}
extern void sCO2SurrogatePBRig_eqFunction_1259(DATA *data, threadData_t *threadData);


/*
equation index: 681
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._ratio_m_des_real = sCO2PBDesignPointCalculator.powerBlock.exchanger.ratio_m_des
*/
void sCO2SurrogatePBRig_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  data->simulationInfo->realParameter[715] /* sCO2PBDesignPointCalculator.powerBlock.ratio_m_des_real PARAM */ = data->simulationInfo->realParameter[602] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.ratio_m_des PARAM */;
  TRACE_POP
}

/*
equation index: 682
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._Q_HX_des = sCO2PBDesignPointCalculator.powerBlock.exchanger.m_CO2_des * (sCO2PBDesignPointCalculator.powerBlock.exchanger.h_out_CO2_des - sCO2PBDesignPointCalculator.powerBlock.exchanger.h_in_CO2_des)
*/
void sCO2SurrogatePBRig_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  data->simulationInfo->realParameter[405] /* sCO2PBDesignPointCalculator.powerBlock.Q_HX_des PARAM */ = (data->simulationInfo->realParameter[595] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.m_CO2_des PARAM */) * (data->simulationInfo->realParameter[593] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_out_CO2_des PARAM */ - data->simulationInfo->realParameter[591] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_in_CO2_des PARAM */);
  TRACE_POP
}

/*
equation index: 683
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._eta_cycle_design = ((-sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp_des) - sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp_des - sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb_des) / sCO2PBDesignPointCalculator.powerBlock.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  data->simulationInfo->realParameter[520] /* sCO2PBDesignPointCalculator.powerBlock.eta_cycle_design PARAM */ = DIVISION_SIM((-data->simulationInfo->realParameter[687] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp_des PARAM */) - data->simulationInfo->realParameter[720] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp_des PARAM */ - data->simulationInfo->realParameter[745] /* sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb_des PARAM */,data->simulationInfo->realParameter[405] /* sCO2PBDesignPointCalculator.powerBlock.Q_HX_des PARAM */,"sCO2PBDesignPointCalculator.powerBlock.Q_HX_des",equationIndexes);
  TRACE_POP
}

/*
equation index: 684
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._eta_net_design = ((-sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp_des) - sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp_des - sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb_des) * (1.0 - sCO2PBDesignPointCalculator.powerBlock.f_fixed_load) * sCO2PBDesignPointCalculator.powerBlock.eta_motor * (1.0 - sCO2PBDesignPointCalculator.powerBlock.par_fr) / sCO2PBDesignPointCalculator.powerBlock.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  data->simulationInfo->realParameter[522] /* sCO2PBDesignPointCalculator.powerBlock.eta_net_design PARAM */ = ((-data->simulationInfo->realParameter[687] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp_des PARAM */) - data->simulationInfo->realParameter[720] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp_des PARAM */ - data->simulationInfo->realParameter[745] /* sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb_des PARAM */) * ((1.0 - data->simulationInfo->realParameter[678] /* sCO2PBDesignPointCalculator.powerBlock.f_fixed_load PARAM */) * ((data->simulationInfo->realParameter[521] /* sCO2PBDesignPointCalculator.powerBlock.eta_motor PARAM */) * (DIVISION_SIM(1.0 - data->simulationInfo->realParameter[705] /* sCO2PBDesignPointCalculator.powerBlock.par_fr PARAM */,data->simulationInfo->realParameter[405] /* sCO2PBDesignPointCalculator.powerBlock.Q_HX_des PARAM */,"sCO2PBDesignPointCalculator.powerBlock.Q_HX_des",equationIndexes))));
  TRACE_POP
}

/*
equation index: 685
type: SIMPLE_ASSIGN
Q_HX_des = sCO2PBDesignPointCalculator.powerBlock.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  data->simulationInfo->realParameter[2] /* Q_HX_des PARAM */ = data->simulationInfo->realParameter[405] /* sCO2PBDesignPointCalculator.powerBlock.Q_HX_des PARAM */;
  TRACE_POP
}

/*
equation index: 686
type: SIMPLE_ASSIGN
powerBlock._Q_HX_des = Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  data->simulationInfo->realParameter[48] /* powerBlock.Q_HX_des PARAM */ = data->simulationInfo->realParameter[2] /* Q_HX_des PARAM */;
  TRACE_POP
}
extern void sCO2SurrogatePBRig_eqFunction_1266(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1267(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1268(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1269(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1272(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1271(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1270(DATA *data, threadData_t *threadData);


/*
equation index: 694
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._UA_dis[4] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[5] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[4])
*/
void sCO2SurrogatePBRig_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->simulationInfo->realParameter[168] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[4] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[183] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[5] PARAM */ + data->simulationInfo->realParameter[182] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[4] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[5] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[4]",equationIndexes);
  TRACE_POP
}

/*
equation index: 695
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._UA_dis[5] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[6] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[5])
*/
void sCO2SurrogatePBRig_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->simulationInfo->realParameter[169] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[5] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[184] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[6] PARAM */ + data->simulationInfo->realParameter[183] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[5] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[6] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[5]",equationIndexes);
  TRACE_POP
}

/*
equation index: 696
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._UA_dis[1] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des * sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des / (sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[2] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[1])
*/
void sCO2SurrogatePBRig_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  data->simulationInfo->realParameter[165] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[1] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[199] /* sCO2PBDesignPointCalculator.powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[180] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[2] PARAM */ + data->simulationInfo->realParameter[179] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[1] PARAM */,"sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[2] + sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT_des[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 697
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._UA_HTR = sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[1] + sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[2] + sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[3] + sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[4] + sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[5] + sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[6] + sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[7] + sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[8] + sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[9] + sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[10] + sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[11] + sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[12] + sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[13] + sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[14]
*/
void sCO2SurrogatePBRig_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  data->simulationInfo->realParameter[164] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_HTR PARAM */ = data->simulationInfo->realParameter[165] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[1] PARAM */ + data->simulationInfo->realParameter[166] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[2] PARAM */ + data->simulationInfo->realParameter[167] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[3] PARAM */ + data->simulationInfo->realParameter[168] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[4] PARAM */ + data->simulationInfo->realParameter[169] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[5] PARAM */ + data->simulationInfo->realParameter[170] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[6] PARAM */ + data->simulationInfo->realParameter[171] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[7] PARAM */ + data->simulationInfo->realParameter[172] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[8] PARAM */ + data->simulationInfo->realParameter[173] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[9] PARAM */ + data->simulationInfo->realParameter[174] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[10] PARAM */ + data->simulationInfo->realParameter[175] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[11] PARAM */ + data->simulationInfo->realParameter[176] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[12] PARAM */ + data->simulationInfo->realParameter[177] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[13] PARAM */ + data->simulationInfo->realParameter[178] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_dis[14] PARAM */;
  TRACE_POP
}

/*
equation index: 698
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._C_HTR = sCO2PBDesignPointCalculator.powerBlock.pri_recuperator * sCO2PBDesignPointCalculator.powerBlock.HTR.UA_HTR ^ 0.8933
*/
void sCO2SurrogatePBRig_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  tmp6 = data->simulationInfo->realParameter[164] /* sCO2PBDesignPointCalculator.powerBlock.HTR.UA_HTR PARAM */;
  tmp7 = 0.8933;
  if(tmp6 < 0.0 && tmp7 != 0.0)
  {
    tmp9 = modf(tmp7, &tmp10);
    
    if(tmp9 > 0.5)
    {
      tmp9 -= 1.0;
      tmp10 += 1.0;
    }
    else if(tmp9 < -0.5)
    {
      tmp9 += 1.0;
      tmp10 -= 1.0;
    }
    
    if(fabs(tmp9) < 1e-10)
      tmp8 = pow(tmp6, tmp10);
    else
    {
      tmp12 = modf(1.0/tmp7, &tmp11);
      if(tmp12 > 0.5)
      {
        tmp12 -= 1.0;
        tmp11 += 1.0;
      }
      else if(tmp12 < -0.5)
      {
        tmp12 += 1.0;
        tmp11 -= 1.0;
      }
      if(fabs(tmp12) < 1e-10 && ((unsigned long)tmp11 & 1))
      {
        tmp8 = -pow(-tmp6, tmp9)*pow(tmp6, tmp10);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp6, tmp7);
      }
    }
  }
  else
  {
    tmp8 = pow(tmp6, tmp7);
  }
  if(isnan(tmp8) || isinf(tmp8))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp6, tmp7);
  }
  data->simulationInfo->realParameter[122] /* sCO2PBDesignPointCalculator.powerBlock.C_HTR PARAM */ = (data->simulationInfo->realParameter[712] /* sCO2PBDesignPointCalculator.powerBlock.pri_recuperator PARAM */) * (tmp8);
  TRACE_POP
}

/*
equation index: 699
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._C_PB = sCO2PBDesignPointCalculator.powerBlock.C_HTR + sCO2PBDesignPointCalculator.powerBlock.C_LTR + sCO2PBDesignPointCalculator.powerBlock.C_turbine + sCO2PBDesignPointCalculator.powerBlock.C_mainCompressor + sCO2PBDesignPointCalculator.powerBlock.C_reCompressor + sCO2PBDesignPointCalculator.powerBlock.C_generator + sCO2PBDesignPointCalculator.powerBlock.C_cooler + sCO2PBDesignPointCalculator.powerBlock.C_exchanger
*/
void sCO2SurrogatePBRig_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  data->simulationInfo->realParameter[124] /* sCO2PBDesignPointCalculator.powerBlock.C_PB PARAM */ = data->simulationInfo->realParameter[122] /* sCO2PBDesignPointCalculator.powerBlock.C_HTR PARAM */ + data->simulationInfo->realParameter[123] /* sCO2PBDesignPointCalculator.powerBlock.C_LTR PARAM */ + data->simulationInfo->realParameter[130] /* sCO2PBDesignPointCalculator.powerBlock.C_turbine PARAM */ + data->simulationInfo->realParameter[128] /* sCO2PBDesignPointCalculator.powerBlock.C_mainCompressor PARAM */ + data->simulationInfo->realParameter[129] /* sCO2PBDesignPointCalculator.powerBlock.C_reCompressor PARAM */ + data->simulationInfo->realParameter[127] /* sCO2PBDesignPointCalculator.powerBlock.C_generator PARAM */ + data->simulationInfo->realParameter[125] /* sCO2PBDesignPointCalculator.powerBlock.C_cooler PARAM */ + data->simulationInfo->realParameter[126] /* sCO2PBDesignPointCalculator.powerBlock.C_exchanger PARAM */;
  TRACE_POP
}

void sCO2SurrogatePBRig_eqFunction_700(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_701(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_702(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_703(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_704(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_705(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_706(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_707(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_708(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_709(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_710(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_711(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_712(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_713(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_714(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_715(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_716(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_717(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_718(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_719(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_720(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_721(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_722(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_723(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_724(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_725(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_726(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_727(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_728(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_729(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_730(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_731(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_732(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_733(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_734(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_735(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_736(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_737(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_738(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_739(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_740(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_741(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_742(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_743(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_744(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_745(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_746(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_747(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_748(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_749(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_750(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_751(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_752(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_753(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_754(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_755(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_756(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_757(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_758(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_759(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_760(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_761(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_762(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_763(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_764(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_765(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_766(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_767(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_768(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_769(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_770(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_771(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_772(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_773(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_774(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_775(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_776(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_777(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_778(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_779(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_780(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_781(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_782(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_783(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_784(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_785(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_786(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_787(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_788(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_789(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_790(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_791(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_792(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_793(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_794(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_795(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_796(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_797(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_798(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_799(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_800(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_801(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_802(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_803(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_804(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_805(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_806(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_807(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_808(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_809(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_810(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_811(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_812(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_813(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_814(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_815(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_889(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_888(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_887(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_886(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_885(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_884(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_883(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_882(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_881(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_880(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_879(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_878(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_877(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_876(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_875(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_874(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_873(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_872(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_871(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_870(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_869(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_868(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_867(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_866(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_865(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_864(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_863(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_862(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_861(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_860(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_859(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_858(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_857(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_856(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_855(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_854(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_853(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_852(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_851(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_850(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_849(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_848(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_847(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_846(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_845(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_844(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_843(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_842(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_841(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_840(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_839(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_838(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_837(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_836(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_835(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_834(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_833(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_832(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_831(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_830(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_829(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_828(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_827(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_826(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_825(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_824(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_823(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_822(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_821(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_820(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_819(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_818(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_817(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_816(DATA*, threadData_t*);
/*
equation index: 890
indexNonlinear: 45
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[15], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[1], sCO2PBDesignPointCalculator._powerBlock._exchanger._CO2_port_b._m_flow, sCO2PBDesignPointCalculator._powerBlock._LTR._state_from_turb[15]._p, sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[4], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[8], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[9], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[3], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[4], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[6], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[7], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[8], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[9], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[10], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[11], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[13], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[14], sCO2PBDesignPointCalculator._powerBlock._turbine._C_spouting, sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[14], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[14], sCO2PBDesignPointCalculator._powerBlock._reCompressor._p_out, sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[12], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[15], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[15], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[2], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[3], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[4], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[5], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[6], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[7], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[8], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[9], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[10], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[11], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[12], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[13], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[14], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[14], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[13], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[13], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[12], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[11], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[11], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[10], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[10], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[9], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[9], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[8], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[8], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[7], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[7], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[6], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[6], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[5], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[5], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[4], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[4], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[3], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[3], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[2], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[2], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[12], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[5], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[2], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[12], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[10], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[7], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[6], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[1], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[13], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[11], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[5], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[3], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[2]}
eqns: {700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 789, 790, 791, 792, 793, 794, 795, 796, 797, 798, 799, 800, 801, 802, 803, 804, 805, 806, 807, 808, 809, 810, 811, 812, 813, 814, 815, 889, 888, 887, 886, 885, 884, 883, 882, 881, 880, 879, 878, 877, 876, 875, 874, 873, 872, 871, 870, 869, 868, 867, 866, 865, 864, 863, 862, 861, 860, 859, 858, 857, 856, 855, 854, 853, 852, 851, 850, 849, 848, 847, 846, 845, 844, 843, 842, 841, 840, 839, 838, 837, 836, 835, 834, 833, 832, 831, 830, 829, 828, 827, 826, 825, 824, 823, 822, 821, 820, 819, 818, 817, 816}
*/
void sCO2SurrogatePBRig_eqFunction_890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,890};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 890 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[0] = data->localData[0]->realVars[261] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[1] = data->localData[0]->realVars[196] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[2] = data->localData[0]->realVars[225] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[3] = data->localData[0]->realVars[212] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[4] = data->localData[0]->realVars[122] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[4] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[5] = data->localData[0]->realVars[126] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[8] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[6] = data->localData[0]->realVars[127] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[9] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[7] = data->localData[0]->realVars[249] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[3] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[8] = data->localData[0]->realVars[250] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[4] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[9] = data->localData[0]->realVars[252] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[6] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[10] = data->localData[0]->realVars[253] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[7] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[11] = data->localData[0]->realVars[254] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[8] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[12] = data->localData[0]->realVars[255] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[9] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[13] = data->localData[0]->realVars[256] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[10] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[14] = data->localData[0]->realVars[257] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[11] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[15] = data->localData[0]->realVars[259] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[13] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[16] = data->localData[0]->realVars[260] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[14] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[17] = data->localData[0]->realVars[298] /* sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[18] = data->localData[0]->realVars[132] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[14] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[19] = data->localData[0]->realVars[119] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[14] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[20] = data->localData[0]->realVars[290] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[21] = data->localData[0]->realVars[207] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[12] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[22] = data->localData[0]->realVars[210] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[23] = data->localData[0]->realVars[195] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[15] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[24] = data->localData[0]->realVars[120] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[2] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[25] = data->localData[0]->realVars[121] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[3] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[26] = data->localData[0]->realVars[109] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[4] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[27] = data->localData[0]->realVars[123] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[5] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[28] = data->localData[0]->realVars[111] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[6] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[29] = data->localData[0]->realVars[112] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[7] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[30] = data->localData[0]->realVars[113] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[8] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[31] = data->localData[0]->realVars[114] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[9] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[32] = data->localData[0]->realVars[115] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[10] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[33] = data->localData[0]->realVars[129] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[11] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[34] = data->localData[0]->realVars[117] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[12] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[35] = data->localData[0]->realVars[131] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[13] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[36] = data->localData[0]->realVars[209] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[14] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[37] = data->localData[0]->realVars[194] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[14] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[38] = data->localData[0]->realVars[193] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[13] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[39] = data->localData[0]->realVars[208] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[13] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[40] = data->localData[0]->realVars[192] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[12] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[41] = data->localData[0]->realVars[206] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[11] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[42] = data->localData[0]->realVars[191] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[11] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[43] = data->localData[0]->realVars[205] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[10] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[44] = data->localData[0]->realVars[190] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[10] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[45] = data->localData[0]->realVars[204] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[9] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[46] = data->localData[0]->realVars[189] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[9] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[47] = data->localData[0]->realVars[188] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[8] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[48] = data->localData[0]->realVars[203] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[8] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[49] = data->localData[0]->realVars[187] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[7] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[50] = data->localData[0]->realVars[202] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[7] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[51] = data->localData[0]->realVars[201] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[6] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[52] = data->localData[0]->realVars[186] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[6] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[53] = data->localData[0]->realVars[185] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[5] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[54] = data->localData[0]->realVars[200] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[5] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[55] = data->localData[0]->realVars[184] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[4] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[56] = data->localData[0]->realVars[199] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[4] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[57] = data->localData[0]->realVars[183] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[3] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[58] = data->localData[0]->realVars[198] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[3] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[59] = data->localData[0]->realVars[182] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[2] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[60] = data->localData[0]->realVars[197] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[2] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[61] = data->localData[0]->realVars[258] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[12] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[62] = data->localData[0]->realVars[251] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[5] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[63] = data->localData[0]->realVars[248] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[2] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[64] = data->localData[0]->realVars[130] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[12] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[65] = data->localData[0]->realVars[128] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[10] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[66] = data->localData[0]->realVars[125] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[7] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[67] = data->localData[0]->realVars[124] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[6] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[68] = data->localData[0]->realVars[247] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[69] = data->localData[0]->realVars[118] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[13] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[70] = data->localData[0]->realVars[116] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[11] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[71] = data->localData[0]->realVars[110] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[5] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[72] = data->localData[0]->realVars[108] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[3] variable */;
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[73] = data->localData[0]->realVars[107] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[2] variable */;
  retValue = solve_nonlinear_system(data, threadData, 45);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,890};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 890 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[261] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[0];
  data->localData[0]->realVars[196] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[1];
  data->localData[0]->realVars[225] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[2];
  data->localData[0]->realVars[212] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[3];
  data->localData[0]->realVars[122] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[4] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[4];
  data->localData[0]->realVars[126] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[8] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[5];
  data->localData[0]->realVars[127] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[9] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[6];
  data->localData[0]->realVars[249] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[3] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[7];
  data->localData[0]->realVars[250] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[4] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[8];
  data->localData[0]->realVars[252] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[6] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[9];
  data->localData[0]->realVars[253] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[7] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[10];
  data->localData[0]->realVars[254] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[8] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[11];
  data->localData[0]->realVars[255] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[9] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[12];
  data->localData[0]->realVars[256] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[10] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[13];
  data->localData[0]->realVars[257] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[11] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[14];
  data->localData[0]->realVars[259] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[13] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[15];
  data->localData[0]->realVars[260] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[14] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[16];
  data->localData[0]->realVars[298] /* sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[17];
  data->localData[0]->realVars[132] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[14] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[18];
  data->localData[0]->realVars[119] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[14] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[19];
  data->localData[0]->realVars[290] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[20];
  data->localData[0]->realVars[207] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[12] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[21];
  data->localData[0]->realVars[210] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[22];
  data->localData[0]->realVars[195] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[15] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[23];
  data->localData[0]->realVars[120] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[2] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[24];
  data->localData[0]->realVars[121] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[3] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[25];
  data->localData[0]->realVars[109] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[4] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[26];
  data->localData[0]->realVars[123] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[5] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[27];
  data->localData[0]->realVars[111] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[6] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[28];
  data->localData[0]->realVars[112] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[7] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[29];
  data->localData[0]->realVars[113] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[8] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[30];
  data->localData[0]->realVars[114] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[9] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[31];
  data->localData[0]->realVars[115] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[10] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[32];
  data->localData[0]->realVars[129] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[11] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[33];
  data->localData[0]->realVars[117] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[12] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[34];
  data->localData[0]->realVars[131] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[13] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[35];
  data->localData[0]->realVars[209] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[14] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[36];
  data->localData[0]->realVars[194] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[14] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[37];
  data->localData[0]->realVars[193] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[13] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[38];
  data->localData[0]->realVars[208] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[13] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[39];
  data->localData[0]->realVars[192] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[12] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[40];
  data->localData[0]->realVars[206] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[11] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[41];
  data->localData[0]->realVars[191] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[11] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[42];
  data->localData[0]->realVars[205] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[10] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[43];
  data->localData[0]->realVars[190] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[10] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[44];
  data->localData[0]->realVars[204] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[9] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[45];
  data->localData[0]->realVars[189] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[9] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[46];
  data->localData[0]->realVars[188] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[8] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[47];
  data->localData[0]->realVars[203] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[8] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[48];
  data->localData[0]->realVars[187] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[7] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[49];
  data->localData[0]->realVars[202] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[7] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[50];
  data->localData[0]->realVars[201] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[6] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[51];
  data->localData[0]->realVars[186] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[6] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[52];
  data->localData[0]->realVars[185] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[5] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[53];
  data->localData[0]->realVars[200] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[5] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[54];
  data->localData[0]->realVars[184] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[4] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[55];
  data->localData[0]->realVars[199] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[4] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[56];
  data->localData[0]->realVars[183] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[3] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[57];
  data->localData[0]->realVars[198] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[3] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[58];
  data->localData[0]->realVars[182] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[2] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[59];
  data->localData[0]->realVars[197] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[2] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[60];
  data->localData[0]->realVars[258] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[12] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[61];
  data->localData[0]->realVars[251] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[5] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[62];
  data->localData[0]->realVars[248] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[2] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[63];
  data->localData[0]->realVars[130] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[12] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[64];
  data->localData[0]->realVars[128] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[10] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[65];
  data->localData[0]->realVars[125] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[7] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[66];
  data->localData[0]->realVars[124] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[6] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[67];
  data->localData[0]->realVars[247] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[68];
  data->localData[0]->realVars[118] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[13] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[69];
  data->localData[0]->realVars[116] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[11] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[70];
  data->localData[0]->realVars[110] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[5] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[71];
  data->localData[0]->realVars[108] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[3] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[72];
  data->localData[0]->realVars[107] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[2] variable */ = data->simulationInfo->nonlinearSystemData[45].nlsx[73];
  TRACE_POP
}
extern void sCO2SurrogatePBRig_eqFunction_1222(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1212(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1238(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1239(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1240(DATA *data, threadData_t *threadData);


/*
equation index: 896
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT[1] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p, sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1], tableIDT_p_h) - sCO2PBDesignPointCalculator.T_amb_input
*/
void sCO2SurrogatePBRig_eqFunction_896(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,896};
  data->localData[0]->realVars[219] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT[1] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[212] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p variable */, data->localData[0]->realVars[196] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] variable */, data->simulationInfo->extObjs[45]) - data->simulationInfo->realParameter[98] /* sCO2PBDesignPointCalculator.T_amb_input PARAM */;
  TRACE_POP
}
extern void sCO2SurrogatePBRig_eqFunction_1213(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1218(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1216(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1215(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1214(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1244(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1245(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1246(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1247(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1248(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1210(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1249(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1250(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1251(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1252(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1253(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1236(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1235(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1254(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1237(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1233(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1234(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1232(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1231(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1230(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1229(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1228(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1227(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1225(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1226(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1224(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1223(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1211(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1241(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1242(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1258(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1260(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1255(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1243(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1221(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1256(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1257(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1261(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1262(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1219(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_1220(DATA *data, threadData_t *threadData);


/*
equation index: 943
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._medium._d = 2000.0
*/
void sCO2SurrogatePBRig_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  data->localData[0]->realVars[326] /* sCO2PBDesignPointCalculator.source.medium.d variable */ = 2000.0;
  TRACE_POP
}

/*
equation index: 944
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._medium._p_bar = 1.0
*/
void sCO2SurrogatePBRig_eqFunction_944(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,944};
  data->localData[0]->realVars[327] /* sCO2PBDesignPointCalculator.source.medium.p_bar variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 945
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._m_sup = true
*/
void sCO2SurrogatePBRig_eqFunction_945(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,945};
  data->localData[0]->booleanVars[3] /* sCO2PBDesignPointCalculator.powerBlock.m_sup DISCRETE */ = 1;
  TRACE_POP
}

/*
equation index: 946
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._always_false._y = false
*/
void sCO2SurrogatePBRig_eqFunction_946(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,946};
  data->localData[0]->booleanVars[2] /* sCO2PBDesignPointCalculator.always_false.y DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 947
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._parasities_input._y = 0.0
*/
void sCO2SurrogatePBRig_eqFunction_947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,947};
  data->localData[0]->realVars[59] /* sCO2PBDesignPointCalculator.parasities_input.y variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 948
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._state._p = 100000.0
*/
void sCO2SurrogatePBRig_eqFunction_948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,948};
  data->localData[0]->realVars[331] /* sCO2PBDesignPointCalculator.source.state.p variable */ = 100000.0;
  TRACE_POP
}

/*
equation index: 949
type: SIMPLE_ASSIGN
sink._medium._p_bar = 1e-05 * sink.p
*/
void sCO2SurrogatePBRig_eqFunction_949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,949};
  data->localData[0]->realVars[342] /* sink.medium.p_bar variable */ = (1e-05) * (data->simulationInfo->realParameter[798] /* sink.p PARAM */);
  TRACE_POP
}

/*
equation index: 950
type: SIMPLE_ASSIGN
source._medium._d = 2000.0
*/
void sCO2SurrogatePBRig_eqFunction_950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,950};
  data->localData[0]->realVars[354] /* source.medium.d variable */ = 2000.0;
  TRACE_POP
}

/*
equation index: 951
type: SIMPLE_ASSIGN
source._medium._p_bar = 1.0
*/
void sCO2SurrogatePBRig_eqFunction_951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,951};
  data->localData[0]->realVars[355] /* source.medium.p_bar variable */ = 1.0;
  TRACE_POP
}

/*
equation index: 952
type: SIMPLE_ASSIGN
powerBlock._m_sup = true
*/
void sCO2SurrogatePBRig_eqFunction_952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,952};
  data->localData[0]->booleanVars[1] /* powerBlock.m_sup DISCRETE */ = 1;
  TRACE_POP
}

/*
equation index: 953
type: SIMPLE_ASSIGN
powerBlock._raw_input[1] = 150000000.0
*/
void sCO2SurrogatePBRig_eqFunction_953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,953};
  data->localData[0]->realVars[51] /* powerBlock.raw_input[1] variable */ = 150000000.0;
  TRACE_POP
}

/*
equation index: 954
type: SIMPLE_ASSIGN
source._state._p = 100000.0
*/
void sCO2SurrogatePBRig_eqFunction_954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,954};
  data->localData[0]->realVars[359] /* source.state.p variable */ = 100000.0;
  TRACE_POP
}

/*
equation index: 955
type: SIMPLE_ASSIGN
always_false._y = false
*/
void sCO2SurrogatePBRig_eqFunction_955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,955};
  data->localData[0]->booleanVars[0] /* always_false.y DISCRETE */ = 0;
  TRACE_POP
}

/*
equation index: 956
type: SIMPLE_ASSIGN
parasities_input._y = 0.0
*/
void sCO2SurrogatePBRig_eqFunction_956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,956};
  data->localData[0]->realVars[45] /* parasities_input.y variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 957
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._state._h = if noEvent(sCO2PBDesignPointCalculator.sink.T < 0.0) then 0.0 else -196601.368854 + 113.1902543343771 * sCO2PBDesignPointCalculator.sink.T ^ 1.3093
*/
void sCO2SurrogatePBRig_eqFunction_957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,957};
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
  tmp0 = Less(data->simulationInfo->realParameter[766] /* sCO2PBDesignPointCalculator.sink.T PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[766] /* sCO2PBDesignPointCalculator.sink.T PARAM */;
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
  data->localData[0]->realVars[316] /* sCO2PBDesignPointCalculator.sink.state.h variable */ = tmp9;
  TRACE_POP
}

/*
equation index: 958
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._medium._u = sCO2PBDesignPointCalculator.sink.state.h + (-0.0005) * sCO2PBDesignPointCalculator.sink.p
*/
void sCO2SurrogatePBRig_eqFunction_958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,958};
  data->localData[0]->realVars[315] /* sCO2PBDesignPointCalculator.sink.medium.u variable */ = data->localData[0]->realVars[316] /* sCO2PBDesignPointCalculator.sink.state.h variable */ + (-0.0005) * (data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */);
  TRACE_POP
}

/*
equation index: 959
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._medium._T = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(sCO2PBDesignPointCalculator.sink.state.h)
*/
void sCO2SurrogatePBRig_eqFunction_959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,959};
  data->localData[0]->realVars[306] /* sCO2PBDesignPointCalculator.sink.medium.T variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[316] /* sCO2PBDesignPointCalculator.sink.state.h variable */);
  TRACE_POP
}

/*
equation index: 960
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._medium._T_degC = -273.15 + sCO2PBDesignPointCalculator.sink.medium.T
*/
void sCO2SurrogatePBRig_eqFunction_960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,960};
  data->localData[0]->realVars[307] /* sCO2PBDesignPointCalculator.sink.medium.T_degC variable */ = -273.15 + data->localData[0]->realVars[306] /* sCO2PBDesignPointCalculator.sink.medium.T variable */;
  TRACE_POP
}

/*
equation index: 961
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._medium._d = 2000.0
*/
void sCO2SurrogatePBRig_eqFunction_961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,961};
  data->localData[0]->realVars[313] /* sCO2PBDesignPointCalculator.sink.medium.d variable */ = 2000.0;
  TRACE_POP
}

/*
equation index: 962
type: SIMPLE_ASSIGN
sink._state._h = if noEvent(sink.T < 0.0) then 0.0 else -196601.368854 + 113.1902543343771 * sink.T ^ 1.3093
*/
void sCO2SurrogatePBRig_eqFunction_962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,962};
  modelica_boolean tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_boolean tmp18;
  modelica_real tmp19;
  tmp10 = Less(data->simulationInfo->realParameter[788] /* sink.T PARAM */,0.0);
  tmp18 = (modelica_boolean)tmp10;
  if(tmp18)
  {
    tmp19 = 0.0;
  }
  else
  {
    tmp11 = data->simulationInfo->realParameter[788] /* sink.T PARAM */;
    tmp12 = 1.3093;
    if(tmp11 < 0.0 && tmp12 != 0.0)
    {
      tmp14 = modf(tmp12, &tmp15);
      
      if(tmp14 > 0.5)
      {
        tmp14 -= 1.0;
        tmp15 += 1.0;
      }
      else if(tmp14 < -0.5)
      {
        tmp14 += 1.0;
        tmp15 -= 1.0;
      }
      
      if(fabs(tmp14) < 1e-10)
        tmp13 = pow(tmp11, tmp15);
      else
      {
        tmp17 = modf(1.0/tmp12, &tmp16);
        if(tmp17 > 0.5)
        {
          tmp17 -= 1.0;
          tmp16 += 1.0;
        }
        else if(tmp17 < -0.5)
        {
          tmp17 += 1.0;
          tmp16 -= 1.0;
        }
        if(fabs(tmp17) < 1e-10 && ((unsigned long)tmp16 & 1))
        {
          tmp13 = -pow(-tmp11, tmp14)*pow(tmp11, tmp15);
        }
        else
        {
          throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp11, tmp12);
        }
      }
    }
    else
    {
      tmp13 = pow(tmp11, tmp12);
    }
    if(isnan(tmp13) || isinf(tmp13))
    {
      throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp11, tmp12);
    }
    tmp19 = -196601.368854 + (113.1902543343771) * (tmp13);
  }
  data->localData[0]->realVars[344] /* sink.state.h variable */ = tmp19;
  TRACE_POP
}

/*
equation index: 963
type: SIMPLE_ASSIGN
sink._medium._u = sink.state.h + (-0.0005) * sink.p
*/
void sCO2SurrogatePBRig_eqFunction_963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,963};
  data->localData[0]->realVars[343] /* sink.medium.u variable */ = data->localData[0]->realVars[344] /* sink.state.h variable */ + (-0.0005) * (data->simulationInfo->realParameter[798] /* sink.p PARAM */);
  TRACE_POP
}

/*
equation index: 964
type: SIMPLE_ASSIGN
sink._medium._T = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(sink.state.h)
*/
void sCO2SurrogatePBRig_eqFunction_964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,964};
  data->localData[0]->realVars[334] /* sink.medium.T variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[344] /* sink.state.h variable */);
  TRACE_POP
}

/*
equation index: 965
type: SIMPLE_ASSIGN
sink._medium._T_degC = -273.15 + sink.medium.T
*/
void sCO2SurrogatePBRig_eqFunction_965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,965};
  data->localData[0]->realVars[335] /* sink.medium.T_degC variable */ = -273.15 + data->localData[0]->realVars[334] /* sink.medium.T variable */;
  TRACE_POP
}

/*
equation index: 966
type: SIMPLE_ASSIGN
sink._medium._d = 2000.0
*/
void sCO2SurrogatePBRig_eqFunction_966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,966};
  data->localData[0]->realVars[341] /* sink.medium.d variable */ = 2000.0;
  TRACE_POP
}

/*
equation index: 967
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._E_net = $START.sCO2PBDesignPointCalculator.powerBlock.E_net
*/
void sCO2SurrogatePBRig_eqFunction_967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,967};
  data->localData[0]->realVars[3] /* sCO2PBDesignPointCalculator.powerBlock.E_net STATE(1) */ = data->modelData->realVarsData[3].attribute /* sCO2PBDesignPointCalculator.powerBlock.E_net STATE(1) */.start;
  TRACE_POP
}

/*
equation index: 968
type: SIMPLE_ASSIGN
powerBlock._E_net = $START.powerBlock.E_net
*/
void sCO2SurrogatePBRig_eqFunction_968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,968};
  data->localData[0]->realVars[1] /* powerBlock.E_net STATE(1,P_elec) */ = data->modelData->realVarsData[1].attribute /* powerBlock.E_net STATE(1,P_elec) */.start;
  TRACE_POP
}

/*
equation index: 969
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._p_in_HTF_des = sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.p
*/
void sCO2SurrogatePBRig_eqFunction_969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,969};
  data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */ = data->simulationInfo->realParameter[739] /* sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.p PARAM */;
  TRACE_POP
}

/*
equation index: 970
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._p_out_HTF_des = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,970};
  data->simulationInfo->realParameter[600] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_out_HTF_des PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 971
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[15]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,971};
  data->simulationInfo->realParameter[677] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[15].p PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 972
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[14]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,972};
  data->simulationInfo->realParameter[676] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[14].p PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 973
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[13]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,973};
  data->simulationInfo->realParameter[675] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[13].p PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 974
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[12]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,974};
  data->simulationInfo->realParameter[674] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[12].p PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 975
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[11]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,975};
  data->simulationInfo->realParameter[673] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[11].p PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 976
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[10]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,976};
  data->simulationInfo->realParameter[672] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[10].p PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 977
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[9]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,977};
  data->simulationInfo->realParameter[671] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[9].p PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 978
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[8]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,978};
  data->simulationInfo->realParameter[670] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[8].p PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 979
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[7]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,979};
  data->simulationInfo->realParameter[669] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[7].p PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 980
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[6]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,980};
  data->simulationInfo->realParameter[668] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[6].p PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 981
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[5]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,981};
  data->simulationInfo->realParameter[667] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[5].p PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 982
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[4]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,982};
  data->simulationInfo->realParameter[666] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[4].p PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 983
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[3]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,983};
  data->simulationInfo->realParameter[665] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[3].p PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 984
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[2]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,984};
  data->simulationInfo->realParameter[664] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].p PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 985
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des[1]._p = sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,985};
  data->simulationInfo->realParameter[663] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[1].p PARAM */ = data->simulationInfo->realParameter[598] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 991
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("CARBO HSP 40/70", {"Al2O3", "SiO2", "Fe2O3", "TiO2", "other"}, false, true, sCO2PBDesignPointCalculator.sink.X, "FixedBoundary");
*/
void sCO2SurrogatePBRig_eqFunction_991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,991};
  static const MMC_DEFSTRINGLIT(tmp20,15,"CARBO HSP 40/70");
  string_array tmp21;
  static const MMC_DEFSTRINGLIT(tmp22,5,"Al2O3");
  static const MMC_DEFSTRINGLIT(tmp23,4,"SiO2");
  static const MMC_DEFSTRINGLIT(tmp24,5,"Fe2O3");
  static const MMC_DEFSTRINGLIT(tmp25,4,"TiO2");
  static const MMC_DEFSTRINGLIT(tmp26,5,"other");
  real_array tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,13,"FixedBoundary");
  array_alloc_scalar_string_array(&tmp21, 5, (modelica_string)MMC_REFSTRINGLIT(tmp22), (modelica_string)MMC_REFSTRINGLIT(tmp23), (modelica_string)MMC_REFSTRINGLIT(tmp24), (modelica_string)MMC_REFSTRINGLIT(tmp25), (modelica_string)MMC_REFSTRINGLIT(tmp26));
  real_array_create(&tmp27, ((modelica_real*)&((&data->simulationInfo->realParameter[767] /* sCO2PBDesignPointCalculator.sink.X[1] PARAM */)[calc_base_index_dims_subs(1, 5, ((modelica_integer) 1))])), 1, 5);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp20), tmp21, 0, 1, tmp27, MMC_REFSTRINGLIT(tmp28));
  TRACE_POP
}

/*
equation index: 990
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("CARBO HSP 40/70", {"Al2O3", "SiO2", "Fe2O3", "TiO2", "other"}, false, false, sCO2PBDesignPointCalculator.source.X, "FixedBoundary");
*/
void sCO2SurrogatePBRig_eqFunction_990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,990};
  static const MMC_DEFSTRINGLIT(tmp29,15,"CARBO HSP 40/70");
  string_array tmp30;
  static const MMC_DEFSTRINGLIT(tmp31,5,"Al2O3");
  static const MMC_DEFSTRINGLIT(tmp32,4,"SiO2");
  static const MMC_DEFSTRINGLIT(tmp33,5,"Fe2O3");
  static const MMC_DEFSTRINGLIT(tmp34,4,"TiO2");
  static const MMC_DEFSTRINGLIT(tmp35,5,"other");
  real_array tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,13,"FixedBoundary");
  array_alloc_scalar_string_array(&tmp30, 5, (modelica_string)MMC_REFSTRINGLIT(tmp31), (modelica_string)MMC_REFSTRINGLIT(tmp32), (modelica_string)MMC_REFSTRINGLIT(tmp33), (modelica_string)MMC_REFSTRINGLIT(tmp34), (modelica_string)MMC_REFSTRINGLIT(tmp35));
  real_array_create(&tmp36, ((modelica_real*)&((&data->simulationInfo->realParameter[780] /* sCO2PBDesignPointCalculator.source.X[1] PARAM */)[calc_base_index_dims_subs(1, 5, ((modelica_integer) 1))])), 1, 5);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp29), tmp30, 0, 0, tmp36, MMC_REFSTRINGLIT(tmp37));
  TRACE_POP
}

/*
equation index: 989
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("CARBO HSP 40/70", {"Al2O3", "SiO2", "Fe2O3", "TiO2", "other"}, false, true, sink.X, "FixedBoundary");
*/
void sCO2SurrogatePBRig_eqFunction_989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,989};
  static const MMC_DEFSTRINGLIT(tmp38,15,"CARBO HSP 40/70");
  string_array tmp39;
  static const MMC_DEFSTRINGLIT(tmp40,5,"Al2O3");
  static const MMC_DEFSTRINGLIT(tmp41,4,"SiO2");
  static const MMC_DEFSTRINGLIT(tmp42,5,"Fe2O3");
  static const MMC_DEFSTRINGLIT(tmp43,4,"TiO2");
  static const MMC_DEFSTRINGLIT(tmp44,5,"other");
  real_array tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,13,"FixedBoundary");
  array_alloc_scalar_string_array(&tmp39, 5, (modelica_string)MMC_REFSTRINGLIT(tmp40), (modelica_string)MMC_REFSTRINGLIT(tmp41), (modelica_string)MMC_REFSTRINGLIT(tmp42), (modelica_string)MMC_REFSTRINGLIT(tmp43), (modelica_string)MMC_REFSTRINGLIT(tmp44));
  real_array_create(&tmp45, ((modelica_real*)&((&data->simulationInfo->realParameter[789] /* sink.X[1] PARAM */)[calc_base_index_dims_subs(1, 5, ((modelica_integer) 1))])), 1, 5);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp38), tmp39, 0, 1, tmp45, MMC_REFSTRINGLIT(tmp46));
  TRACE_POP
}

/*
equation index: 988
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("CARBO HSP 40/70", {"Al2O3", "SiO2", "Fe2O3", "TiO2", "other"}, false, false, source.X, "FixedBoundary");
*/
void sCO2SurrogatePBRig_eqFunction_988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,988};
  static const MMC_DEFSTRINGLIT(tmp47,15,"CARBO HSP 40/70");
  string_array tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,5,"Al2O3");
  static const MMC_DEFSTRINGLIT(tmp50,4,"SiO2");
  static const MMC_DEFSTRINGLIT(tmp51,5,"Fe2O3");
  static const MMC_DEFSTRINGLIT(tmp52,4,"TiO2");
  static const MMC_DEFSTRINGLIT(tmp53,5,"other");
  real_array tmp54;
  static const MMC_DEFSTRINGLIT(tmp55,13,"FixedBoundary");
  array_alloc_scalar_string_array(&tmp48, 5, (modelica_string)MMC_REFSTRINGLIT(tmp49), (modelica_string)MMC_REFSTRINGLIT(tmp50), (modelica_string)MMC_REFSTRINGLIT(tmp51), (modelica_string)MMC_REFSTRINGLIT(tmp52), (modelica_string)MMC_REFSTRINGLIT(tmp53));
  real_array_create(&tmp54, ((modelica_real*)&((&data->simulationInfo->realParameter[802] /* source.X[1] PARAM */)[calc_base_index_dims_subs(1, 5, ((modelica_integer) 1))])), 1, 5);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp47), tmp48, 0, 0, tmp54, MMC_REFSTRINGLIT(tmp55));
  TRACE_POP
}

/*
equation index: 987
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.p >= 0.0, "Pressure (= " + String(sCO2PBDesignPointCalculator.sink.p, 6, 0, true) + " Pa) of medium \"" + "CARBO HSP 40/70" + "\" is negative
(Temperature = " + String(sCO2PBDesignPointCalculator.sink.medium.T, 6, 0, true) + " K)");
*/
void sCO2SurrogatePBRig_eqFunction_987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,987};
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,12,"Pressure (= ");
  modelica_string tmp58;
  static const MMC_DEFSTRINGLIT(tmp59,16," Pa) of medium \"");
  static const MMC_DEFSTRINGLIT(tmp60,15,"CARBO HSP 40/70");
  static const MMC_DEFSTRINGLIT(tmp61,29,"\" is negative\n(Temperature = ");
  modelica_string tmp62;
  static const MMC_DEFSTRINGLIT(tmp63,3," K)");
  static int tmp64 = 0;
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
  {
    tmp56 = GreaterEq(data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */,0.0);
    if(!tmp56)
    {
      tmp58 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp59));
      tmpMeta[2] = stringAppend(tmpMeta[1],MMC_REFSTRINGLIT(tmp60));
      tmpMeta[3] = stringAppend(tmpMeta[2],MMC_REFSTRINGLIT(tmp61));
      tmp62 = modelica_real_to_modelica_string(data->localData[0]->realVars[306] /* sCO2PBDesignPointCalculator.sink.medium.T variable */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[4] = stringAppend(tmpMeta[3],tmp62);
      tmpMeta[5] = stringAppend(tmpMeta[4],MMC_REFSTRINGLIT(tmp63));
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4529,7,4530,76,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.p >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[5]));
      }
    }
  }
  TRACE_POP
}

/*
equation index: 986
type: ALGORITHM

  assert(sink.p >= 0.0, "Pressure (= " + String(sink.p, 6, 0, true) + " Pa) of medium \"" + "CARBO HSP 40/70" + "\" is negative
(Temperature = " + String(sink.medium.T, 6, 0, true) + " K)");
*/
void sCO2SurrogatePBRig_eqFunction_986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,986};
  modelica_boolean tmp65;
  static const MMC_DEFSTRINGLIT(tmp66,12,"Pressure (= ");
  modelica_string tmp67;
  static const MMC_DEFSTRINGLIT(tmp68,16," Pa) of medium \"");
  static const MMC_DEFSTRINGLIT(tmp69,15,"CARBO HSP 40/70");
  static const MMC_DEFSTRINGLIT(tmp70,29,"\" is negative\n(Temperature = ");
  modelica_string tmp71;
  static const MMC_DEFSTRINGLIT(tmp72,3," K)");
  static int tmp73 = 0;
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
  {
    tmp65 = GreaterEq(data->simulationInfo->realParameter[798] /* sink.p PARAM */,0.0);
    if(!tmp65)
    {
      tmp67 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[798] /* sink.p PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp66),tmp67);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp68));
      tmpMeta[2] = stringAppend(tmpMeta[1],MMC_REFSTRINGLIT(tmp69));
      tmpMeta[3] = stringAppend(tmpMeta[2],MMC_REFSTRINGLIT(tmp70));
      tmp71 = modelica_real_to_modelica_string(data->localData[0]->realVars[334] /* sink.medium.T variable */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[4] = stringAppend(tmpMeta[3],tmp71);
      tmpMeta[5] = stringAppend(tmpMeta[4],MMC_REFSTRINGLIT(tmp72));
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
void sCO2SurrogatePBRig_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  sCO2SurrogatePBRig_eqFunction_1(data, threadData);
  sCO2SurrogatePBRig_eqFunction_2(data, threadData);
  sCO2SurrogatePBRig_eqFunction_3(data, threadData);
  sCO2SurrogatePBRig_eqFunction_4(data, threadData);
  sCO2SurrogatePBRig_eqFunction_5(data, threadData);
  sCO2SurrogatePBRig_eqFunction_6(data, threadData);
  sCO2SurrogatePBRig_eqFunction_7(data, threadData);
  sCO2SurrogatePBRig_eqFunction_8(data, threadData);
  sCO2SurrogatePBRig_eqFunction_9(data, threadData);
  sCO2SurrogatePBRig_eqFunction_10(data, threadData);
  sCO2SurrogatePBRig_eqFunction_11(data, threadData);
  sCO2SurrogatePBRig_eqFunction_12(data, threadData);
  sCO2SurrogatePBRig_eqFunction_13(data, threadData);
  sCO2SurrogatePBRig_eqFunction_14(data, threadData);
  sCO2SurrogatePBRig_eqFunction_15(data, threadData);
  sCO2SurrogatePBRig_eqFunction_16(data, threadData);
  sCO2SurrogatePBRig_eqFunction_17(data, threadData);
  sCO2SurrogatePBRig_eqFunction_18(data, threadData);
  sCO2SurrogatePBRig_eqFunction_19(data, threadData);
  sCO2SurrogatePBRig_eqFunction_20(data, threadData);
  sCO2SurrogatePBRig_eqFunction_21(data, threadData);
  sCO2SurrogatePBRig_eqFunction_22(data, threadData);
  sCO2SurrogatePBRig_eqFunction_23(data, threadData);
  sCO2SurrogatePBRig_eqFunction_24(data, threadData);
  sCO2SurrogatePBRig_eqFunction_25(data, threadData);
  sCO2SurrogatePBRig_eqFunction_26(data, threadData);
  sCO2SurrogatePBRig_eqFunction_27(data, threadData);
  sCO2SurrogatePBRig_eqFunction_28(data, threadData);
  sCO2SurrogatePBRig_eqFunction_29(data, threadData);
  sCO2SurrogatePBRig_eqFunction_30(data, threadData);
  sCO2SurrogatePBRig_eqFunction_31(data, threadData);
  sCO2SurrogatePBRig_eqFunction_32(data, threadData);
  sCO2SurrogatePBRig_eqFunction_33(data, threadData);
  sCO2SurrogatePBRig_eqFunction_34(data, threadData);
  sCO2SurrogatePBRig_eqFunction_35(data, threadData);
  sCO2SurrogatePBRig_eqFunction_36(data, threadData);
  sCO2SurrogatePBRig_eqFunction_37(data, threadData);
  sCO2SurrogatePBRig_eqFunction_38(data, threadData);
  sCO2SurrogatePBRig_eqFunction_39(data, threadData);
  sCO2SurrogatePBRig_eqFunction_40(data, threadData);
  sCO2SurrogatePBRig_eqFunction_41(data, threadData);
  sCO2SurrogatePBRig_eqFunction_42(data, threadData);
  sCO2SurrogatePBRig_eqFunction_43(data, threadData);
  sCO2SurrogatePBRig_eqFunction_44(data, threadData);
  sCO2SurrogatePBRig_eqFunction_45(data, threadData);
  sCO2SurrogatePBRig_eqFunction_46(data, threadData);
  sCO2SurrogatePBRig_eqFunction_47(data, threadData);
  sCO2SurrogatePBRig_eqFunction_48(data, threadData);
  sCO2SurrogatePBRig_eqFunction_49(data, threadData);
  sCO2SurrogatePBRig_eqFunction_50(data, threadData);
  sCO2SurrogatePBRig_eqFunction_51(data, threadData);
  sCO2SurrogatePBRig_eqFunction_52(data, threadData);
  sCO2SurrogatePBRig_eqFunction_53(data, threadData);
  sCO2SurrogatePBRig_eqFunction_54(data, threadData);
  sCO2SurrogatePBRig_eqFunction_55(data, threadData);
  sCO2SurrogatePBRig_eqFunction_57(data, threadData);
  sCO2SurrogatePBRig_eqFunction_58(data, threadData);
  sCO2SurrogatePBRig_eqFunction_86(data, threadData);
  sCO2SurrogatePBRig_eqFunction_88(data, threadData);
  sCO2SurrogatePBRig_eqFunction_90(data, threadData);
  sCO2SurrogatePBRig_eqFunction_92(data, threadData);
  sCO2SurrogatePBRig_eqFunction_94(data, threadData);
  sCO2SurrogatePBRig_eqFunction_96(data, threadData);
  sCO2SurrogatePBRig_eqFunction_98(data, threadData);
  sCO2SurrogatePBRig_eqFunction_100(data, threadData);
  sCO2SurrogatePBRig_eqFunction_102(data, threadData);
  sCO2SurrogatePBRig_eqFunction_104(data, threadData);
  sCO2SurrogatePBRig_eqFunction_106(data, threadData);
  sCO2SurrogatePBRig_eqFunction_108(data, threadData);
  sCO2SurrogatePBRig_eqFunction_110(data, threadData);
  sCO2SurrogatePBRig_eqFunction_112(data, threadData);
  sCO2SurrogatePBRig_eqFunction_113(data, threadData);
  sCO2SurrogatePBRig_eqFunction_114(data, threadData);
  sCO2SurrogatePBRig_eqFunction_115(data, threadData);
  sCO2SurrogatePBRig_eqFunction_116(data, threadData);
  sCO2SurrogatePBRig_eqFunction_117(data, threadData);
  sCO2SurrogatePBRig_eqFunction_118(data, threadData);
  sCO2SurrogatePBRig_eqFunction_119(data, threadData);
  sCO2SurrogatePBRig_eqFunction_120(data, threadData);
  sCO2SurrogatePBRig_eqFunction_121(data, threadData);
  sCO2SurrogatePBRig_eqFunction_122(data, threadData);
  sCO2SurrogatePBRig_eqFunction_123(data, threadData);
  sCO2SurrogatePBRig_eqFunction_124(data, threadData);
  sCO2SurrogatePBRig_eqFunction_125(data, threadData);
  sCO2SurrogatePBRig_eqFunction_126(data, threadData);
  sCO2SurrogatePBRig_eqFunction_127(data, threadData);
  sCO2SurrogatePBRig_eqFunction_128(data, threadData);
  sCO2SurrogatePBRig_eqFunction_129(data, threadData);
  sCO2SurrogatePBRig_eqFunction_130(data, threadData);
  sCO2SurrogatePBRig_eqFunction_131(data, threadData);
  sCO2SurrogatePBRig_eqFunction_132(data, threadData);
  sCO2SurrogatePBRig_eqFunction_133(data, threadData);
  sCO2SurrogatePBRig_eqFunction_134(data, threadData);
  sCO2SurrogatePBRig_eqFunction_135(data, threadData);
  sCO2SurrogatePBRig_eqFunction_136(data, threadData);
  sCO2SurrogatePBRig_eqFunction_137(data, threadData);
  sCO2SurrogatePBRig_eqFunction_138(data, threadData);
  sCO2SurrogatePBRig_eqFunction_139(data, threadData);
  sCO2SurrogatePBRig_eqFunction_140(data, threadData);
  sCO2SurrogatePBRig_eqFunction_141(data, threadData);
  sCO2SurrogatePBRig_eqFunction_142(data, threadData);
  sCO2SurrogatePBRig_eqFunction_143(data, threadData);
  sCO2SurrogatePBRig_eqFunction_144(data, threadData);
  sCO2SurrogatePBRig_eqFunction_145(data, threadData);
  sCO2SurrogatePBRig_eqFunction_146(data, threadData);
  sCO2SurrogatePBRig_eqFunction_147(data, threadData);
  sCO2SurrogatePBRig_eqFunction_148(data, threadData);
  sCO2SurrogatePBRig_eqFunction_149(data, threadData);
  sCO2SurrogatePBRig_eqFunction_150(data, threadData);
  sCO2SurrogatePBRig_eqFunction_151(data, threadData);
  sCO2SurrogatePBRig_eqFunction_152(data, threadData);
  sCO2SurrogatePBRig_eqFunction_153(data, threadData);
  sCO2SurrogatePBRig_eqFunction_154(data, threadData);
  sCO2SurrogatePBRig_eqFunction_155(data, threadData);
  sCO2SurrogatePBRig_eqFunction_156(data, threadData);
  sCO2SurrogatePBRig_eqFunction_157(data, threadData);
  sCO2SurrogatePBRig_eqFunction_158(data, threadData);
  sCO2SurrogatePBRig_eqFunction_159(data, threadData);
  sCO2SurrogatePBRig_eqFunction_160(data, threadData);
  sCO2SurrogatePBRig_eqFunction_161(data, threadData);
  sCO2SurrogatePBRig_eqFunction_162(data, threadData);
  sCO2SurrogatePBRig_eqFunction_163(data, threadData);
  sCO2SurrogatePBRig_eqFunction_164(data, threadData);
  sCO2SurrogatePBRig_eqFunction_165(data, threadData);
  sCO2SurrogatePBRig_eqFunction_166(data, threadData);
  sCO2SurrogatePBRig_eqFunction_167(data, threadData);
  sCO2SurrogatePBRig_eqFunction_168(data, threadData);
  sCO2SurrogatePBRig_eqFunction_169(data, threadData);
  sCO2SurrogatePBRig_eqFunction_170(data, threadData);
  sCO2SurrogatePBRig_eqFunction_171(data, threadData);
  sCO2SurrogatePBRig_eqFunction_172(data, threadData);
  sCO2SurrogatePBRig_eqFunction_173(data, threadData);
  sCO2SurrogatePBRig_eqFunction_174(data, threadData);
  sCO2SurrogatePBRig_eqFunction_175(data, threadData);
  sCO2SurrogatePBRig_eqFunction_176(data, threadData);
  sCO2SurrogatePBRig_eqFunction_177(data, threadData);
  sCO2SurrogatePBRig_eqFunction_178(data, threadData);
  sCO2SurrogatePBRig_eqFunction_179(data, threadData);
  sCO2SurrogatePBRig_eqFunction_180(data, threadData);
  sCO2SurrogatePBRig_eqFunction_181(data, threadData);
  sCO2SurrogatePBRig_eqFunction_182(data, threadData);
  sCO2SurrogatePBRig_eqFunction_183(data, threadData);
  sCO2SurrogatePBRig_eqFunction_184(data, threadData);
  sCO2SurrogatePBRig_eqFunction_185(data, threadData);
  sCO2SurrogatePBRig_eqFunction_186(data, threadData);
  sCO2SurrogatePBRig_eqFunction_187(data, threadData);
  sCO2SurrogatePBRig_eqFunction_188(data, threadData);
  sCO2SurrogatePBRig_eqFunction_189(data, threadData);
  sCO2SurrogatePBRig_eqFunction_190(data, threadData);
  sCO2SurrogatePBRig_eqFunction_191(data, threadData);
  sCO2SurrogatePBRig_eqFunction_192(data, threadData);
  sCO2SurrogatePBRig_eqFunction_193(data, threadData);
  sCO2SurrogatePBRig_eqFunction_194(data, threadData);
  sCO2SurrogatePBRig_eqFunction_195(data, threadData);
  sCO2SurrogatePBRig_eqFunction_196(data, threadData);
  sCO2SurrogatePBRig_eqFunction_197(data, threadData);
  sCO2SurrogatePBRig_eqFunction_198(data, threadData);
  sCO2SurrogatePBRig_eqFunction_199(data, threadData);
  sCO2SurrogatePBRig_eqFunction_200(data, threadData);
  sCO2SurrogatePBRig_eqFunction_201(data, threadData);
  sCO2SurrogatePBRig_eqFunction_202(data, threadData);
  sCO2SurrogatePBRig_eqFunction_203(data, threadData);
  sCO2SurrogatePBRig_eqFunction_204(data, threadData);
  sCO2SurrogatePBRig_eqFunction_205(data, threadData);
  sCO2SurrogatePBRig_eqFunction_206(data, threadData);
  sCO2SurrogatePBRig_eqFunction_207(data, threadData);
  sCO2SurrogatePBRig_eqFunction_208(data, threadData);
  sCO2SurrogatePBRig_eqFunction_209(data, threadData);
  sCO2SurrogatePBRig_eqFunction_211(data, threadData);
  sCO2SurrogatePBRig_eqFunction_212(data, threadData);
  sCO2SurrogatePBRig_eqFunction_213(data, threadData);
  sCO2SurrogatePBRig_eqFunction_214(data, threadData);
  sCO2SurrogatePBRig_eqFunction_215(data, threadData);
  sCO2SurrogatePBRig_eqFunction_216(data, threadData);
  sCO2SurrogatePBRig_eqFunction_217(data, threadData);
  sCO2SurrogatePBRig_eqFunction_218(data, threadData);
  sCO2SurrogatePBRig_eqFunction_219(data, threadData);
  sCO2SurrogatePBRig_eqFunction_220(data, threadData);
  sCO2SurrogatePBRig_eqFunction_221(data, threadData);
  sCO2SurrogatePBRig_eqFunction_222(data, threadData);
  sCO2SurrogatePBRig_eqFunction_223(data, threadData);
  sCO2SurrogatePBRig_eqFunction_224(data, threadData);
  sCO2SurrogatePBRig_eqFunction_225(data, threadData);
  sCO2SurrogatePBRig_eqFunction_226(data, threadData);
  sCO2SurrogatePBRig_eqFunction_227(data, threadData);
  sCO2SurrogatePBRig_eqFunction_228(data, threadData);
  sCO2SurrogatePBRig_eqFunction_229(data, threadData);
  sCO2SurrogatePBRig_eqFunction_230(data, threadData);
  sCO2SurrogatePBRig_eqFunction_231(data, threadData);
  sCO2SurrogatePBRig_eqFunction_232(data, threadData);
  sCO2SurrogatePBRig_eqFunction_233(data, threadData);
  sCO2SurrogatePBRig_eqFunction_234(data, threadData);
  sCO2SurrogatePBRig_eqFunction_235(data, threadData);
  sCO2SurrogatePBRig_eqFunction_236(data, threadData);
  sCO2SurrogatePBRig_eqFunction_237(data, threadData);
  sCO2SurrogatePBRig_eqFunction_238(data, threadData);
  sCO2SurrogatePBRig_eqFunction_239(data, threadData);
  sCO2SurrogatePBRig_eqFunction_240(data, threadData);
  sCO2SurrogatePBRig_eqFunction_241(data, threadData);
  sCO2SurrogatePBRig_eqFunction_242(data, threadData);
  sCO2SurrogatePBRig_eqFunction_243(data, threadData);
  sCO2SurrogatePBRig_eqFunction_244(data, threadData);
  sCO2SurrogatePBRig_eqFunction_443(data, threadData);
  sCO2SurrogatePBRig_eqFunction_445(data, threadData);
  sCO2SurrogatePBRig_eqFunction_447(data, threadData);
  sCO2SurrogatePBRig_eqFunction_449(data, threadData);
  sCO2SurrogatePBRig_eqFunction_451(data, threadData);
  sCO2SurrogatePBRig_eqFunction_453(data, threadData);
  sCO2SurrogatePBRig_eqFunction_455(data, threadData);
  sCO2SurrogatePBRig_eqFunction_457(data, threadData);
  sCO2SurrogatePBRig_eqFunction_459(data, threadData);
  sCO2SurrogatePBRig_eqFunction_461(data, threadData);
  sCO2SurrogatePBRig_eqFunction_463(data, threadData);
  sCO2SurrogatePBRig_eqFunction_465(data, threadData);
  sCO2SurrogatePBRig_eqFunction_467(data, threadData);
  sCO2SurrogatePBRig_eqFunction_469(data, threadData);
  sCO2SurrogatePBRig_eqFunction_471(data, threadData);
  sCO2SurrogatePBRig_eqFunction_472(data, threadData);
  sCO2SurrogatePBRig_eqFunction_473(data, threadData);
  sCO2SurrogatePBRig_eqFunction_474(data, threadData);
  sCO2SurrogatePBRig_eqFunction_475(data, threadData);
  sCO2SurrogatePBRig_eqFunction_477(data, threadData);
  sCO2SurrogatePBRig_eqFunction_478(data, threadData);
  sCO2SurrogatePBRig_eqFunction_506(data, threadData);
  sCO2SurrogatePBRig_eqFunction_507(data, threadData);
  sCO2SurrogatePBRig_eqFunction_509(data, threadData);
  sCO2SurrogatePBRig_eqFunction_510(data, threadData);
  sCO2SurrogatePBRig_eqFunction_511(data, threadData);
  sCO2SurrogatePBRig_eqFunction_513(data, threadData);
  sCO2SurrogatePBRig_eqFunction_514(data, threadData);
  sCO2SurrogatePBRig_eqFunction_515(data, threadData);
  sCO2SurrogatePBRig_eqFunction_517(data, threadData);
  sCO2SurrogatePBRig_eqFunction_518(data, threadData);
  sCO2SurrogatePBRig_eqFunction_519(data, threadData);
  sCO2SurrogatePBRig_eqFunction_521(data, threadData);
  sCO2SurrogatePBRig_eqFunction_522(data, threadData);
  sCO2SurrogatePBRig_eqFunction_523(data, threadData);
  sCO2SurrogatePBRig_eqFunction_525(data, threadData);
  sCO2SurrogatePBRig_eqFunction_526(data, threadData);
  sCO2SurrogatePBRig_eqFunction_527(data, threadData);
  sCO2SurrogatePBRig_eqFunction_529(data, threadData);
  sCO2SurrogatePBRig_eqFunction_530(data, threadData);
  sCO2SurrogatePBRig_eqFunction_531(data, threadData);
  sCO2SurrogatePBRig_eqFunction_533(data, threadData);
  sCO2SurrogatePBRig_eqFunction_534(data, threadData);
  sCO2SurrogatePBRig_eqFunction_535(data, threadData);
  sCO2SurrogatePBRig_eqFunction_537(data, threadData);
  sCO2SurrogatePBRig_eqFunction_538(data, threadData);
  sCO2SurrogatePBRig_eqFunction_539(data, threadData);
  sCO2SurrogatePBRig_eqFunction_541(data, threadData);
  sCO2SurrogatePBRig_eqFunction_542(data, threadData);
  sCO2SurrogatePBRig_eqFunction_543(data, threadData);
  sCO2SurrogatePBRig_eqFunction_545(data, threadData);
  sCO2SurrogatePBRig_eqFunction_546(data, threadData);
  sCO2SurrogatePBRig_eqFunction_547(data, threadData);
  sCO2SurrogatePBRig_eqFunction_549(data, threadData);
  sCO2SurrogatePBRig_eqFunction_550(data, threadData);
  sCO2SurrogatePBRig_eqFunction_551(data, threadData);
  sCO2SurrogatePBRig_eqFunction_553(data, threadData);
  sCO2SurrogatePBRig_eqFunction_554(data, threadData);
  sCO2SurrogatePBRig_eqFunction_555(data, threadData);
  sCO2SurrogatePBRig_eqFunction_557(data, threadData);
  sCO2SurrogatePBRig_eqFunction_558(data, threadData);
  sCO2SurrogatePBRig_eqFunction_559(data, threadData);
  sCO2SurrogatePBRig_eqFunction_560(data, threadData);
  sCO2SurrogatePBRig_eqFunction_561(data, threadData);
  sCO2SurrogatePBRig_eqFunction_562(data, threadData);
  sCO2SurrogatePBRig_eqFunction_563(data, threadData);
  sCO2SurrogatePBRig_eqFunction_580(data, threadData);
  sCO2SurrogatePBRig_eqFunction_581(data, threadData);
  sCO2SurrogatePBRig_eqFunction_582(data, threadData);
  sCO2SurrogatePBRig_eqFunction_583(data, threadData);
  sCO2SurrogatePBRig_eqFunction_584(data, threadData);
  sCO2SurrogatePBRig_eqFunction_585(data, threadData);
  sCO2SurrogatePBRig_eqFunction_586(data, threadData);
  sCO2SurrogatePBRig_eqFunction_587(data, threadData);
  sCO2SurrogatePBRig_eqFunction_588(data, threadData);
  sCO2SurrogatePBRig_eqFunction_589(data, threadData);
  sCO2SurrogatePBRig_eqFunction_590(data, threadData);
  sCO2SurrogatePBRig_eqFunction_591(data, threadData);
  sCO2SurrogatePBRig_eqFunction_592(data, threadData);
  sCO2SurrogatePBRig_eqFunction_593(data, threadData);
  sCO2SurrogatePBRig_eqFunction_594(data, threadData);
  sCO2SurrogatePBRig_eqFunction_595(data, threadData);
  sCO2SurrogatePBRig_eqFunction_596(data, threadData);
  sCO2SurrogatePBRig_eqFunction_597(data, threadData);
  sCO2SurrogatePBRig_eqFunction_598(data, threadData);
  sCO2SurrogatePBRig_eqFunction_599(data, threadData);
  sCO2SurrogatePBRig_eqFunction_600(data, threadData);
  sCO2SurrogatePBRig_eqFunction_601(data, threadData);
  sCO2SurrogatePBRig_eqFunction_602(data, threadData);
  sCO2SurrogatePBRig_eqFunction_603(data, threadData);
  sCO2SurrogatePBRig_eqFunction_604(data, threadData);
  sCO2SurrogatePBRig_eqFunction_605(data, threadData);
  sCO2SurrogatePBRig_eqFunction_606(data, threadData);
  sCO2SurrogatePBRig_eqFunction_607(data, threadData);
  sCO2SurrogatePBRig_eqFunction_608(data, threadData);
  sCO2SurrogatePBRig_eqFunction_609(data, threadData);
  sCO2SurrogatePBRig_eqFunction_610(data, threadData);
  sCO2SurrogatePBRig_eqFunction_611(data, threadData);
  sCO2SurrogatePBRig_eqFunction_612(data, threadData);
  sCO2SurrogatePBRig_eqFunction_613(data, threadData);
  sCO2SurrogatePBRig_eqFunction_614(data, threadData);
  sCO2SurrogatePBRig_eqFunction_615(data, threadData);
  sCO2SurrogatePBRig_eqFunction_616(data, threadData);
  sCO2SurrogatePBRig_eqFunction_617(data, threadData);
  sCO2SurrogatePBRig_eqFunction_618(data, threadData);
  sCO2SurrogatePBRig_eqFunction_619(data, threadData);
  sCO2SurrogatePBRig_eqFunction_620(data, threadData);
  sCO2SurrogatePBRig_eqFunction_621(data, threadData);
  sCO2SurrogatePBRig_eqFunction_622(data, threadData);
  sCO2SurrogatePBRig_eqFunction_623(data, threadData);
  sCO2SurrogatePBRig_eqFunction_624(data, threadData);
  sCO2SurrogatePBRig_eqFunction_625(data, threadData);
  sCO2SurrogatePBRig_eqFunction_626(data, threadData);
  sCO2SurrogatePBRig_eqFunction_627(data, threadData);
  sCO2SurrogatePBRig_eqFunction_628(data, threadData);
  sCO2SurrogatePBRig_eqFunction_629(data, threadData);
  sCO2SurrogatePBRig_eqFunction_630(data, threadData);
  sCO2SurrogatePBRig_eqFunction_631(data, threadData);
  sCO2SurrogatePBRig_eqFunction_632(data, threadData);
  sCO2SurrogatePBRig_eqFunction_633(data, threadData);
  sCO2SurrogatePBRig_eqFunction_634(data, threadData);
  sCO2SurrogatePBRig_eqFunction_635(data, threadData);
  sCO2SurrogatePBRig_eqFunction_636(data, threadData);
  sCO2SurrogatePBRig_eqFunction_637(data, threadData);
  sCO2SurrogatePBRig_eqFunction_638(data, threadData);
  sCO2SurrogatePBRig_eqFunction_639(data, threadData);
  sCO2SurrogatePBRig_eqFunction_640(data, threadData);
  sCO2SurrogatePBRig_eqFunction_641(data, threadData);
  sCO2SurrogatePBRig_eqFunction_642(data, threadData);
  sCO2SurrogatePBRig_eqFunction_643(data, threadData);
  sCO2SurrogatePBRig_eqFunction_645(data, threadData);
  sCO2SurrogatePBRig_eqFunction_646(data, threadData);
  sCO2SurrogatePBRig_eqFunction_647(data, threadData);
  sCO2SurrogatePBRig_eqFunction_648(data, threadData);
  sCO2SurrogatePBRig_eqFunction_649(data, threadData);
  sCO2SurrogatePBRig_eqFunction_650(data, threadData);
  sCO2SurrogatePBRig_eqFunction_651(data, threadData);
  sCO2SurrogatePBRig_eqFunction_652(data, threadData);
  sCO2SurrogatePBRig_eqFunction_653(data, threadData);
  sCO2SurrogatePBRig_eqFunction_654(data, threadData);
  sCO2SurrogatePBRig_eqFunction_655(data, threadData);
  sCO2SurrogatePBRig_eqFunction_656(data, threadData);
  sCO2SurrogatePBRig_eqFunction_657(data, threadData);
  sCO2SurrogatePBRig_eqFunction_658(data, threadData);
  sCO2SurrogatePBRig_eqFunction_659(data, threadData);
  sCO2SurrogatePBRig_eqFunction_660(data, threadData);
  sCO2SurrogatePBRig_eqFunction_661(data, threadData);
  sCO2SurrogatePBRig_eqFunction_662(data, threadData);
  sCO2SurrogatePBRig_eqFunction_663(data, threadData);
  sCO2SurrogatePBRig_eqFunction_664(data, threadData);
  sCO2SurrogatePBRig_eqFunction_665(data, threadData);
  sCO2SurrogatePBRig_eqFunction_666(data, threadData);
  sCO2SurrogatePBRig_eqFunction_667(data, threadData);
  sCO2SurrogatePBRig_eqFunction_668(data, threadData);
  sCO2SurrogatePBRig_eqFunction_669(data, threadData);
  sCO2SurrogatePBRig_eqFunction_670(data, threadData);
  sCO2SurrogatePBRig_eqFunction_671(data, threadData);
  sCO2SurrogatePBRig_eqFunction_672(data, threadData);
  sCO2SurrogatePBRig_eqFunction_673(data, threadData);
  sCO2SurrogatePBRig_eqFunction_674(data, threadData);
  sCO2SurrogatePBRig_eqFunction_675(data, threadData);
  sCO2SurrogatePBRig_eqFunction_676(data, threadData);
  sCO2SurrogatePBRig_eqFunction_679(data, threadData);
  sCO2SurrogatePBRig_eqFunction_677(data, threadData);
  sCO2SurrogatePBRig_eqFunction_678(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1259(data, threadData);
  sCO2SurrogatePBRig_eqFunction_681(data, threadData);
  sCO2SurrogatePBRig_eqFunction_682(data, threadData);
  sCO2SurrogatePBRig_eqFunction_683(data, threadData);
  sCO2SurrogatePBRig_eqFunction_684(data, threadData);
  sCO2SurrogatePBRig_eqFunction_685(data, threadData);
  sCO2SurrogatePBRig_eqFunction_686(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1266(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1267(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1268(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1269(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1272(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1271(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1270(data, threadData);
  sCO2SurrogatePBRig_eqFunction_694(data, threadData);
  sCO2SurrogatePBRig_eqFunction_695(data, threadData);
  sCO2SurrogatePBRig_eqFunction_696(data, threadData);
  sCO2SurrogatePBRig_eqFunction_697(data, threadData);
  sCO2SurrogatePBRig_eqFunction_698(data, threadData);
  sCO2SurrogatePBRig_eqFunction_699(data, threadData);
  sCO2SurrogatePBRig_eqFunction_890(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1222(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1212(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1238(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1239(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1240(data, threadData);
  sCO2SurrogatePBRig_eqFunction_896(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1213(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1218(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1216(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1215(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1214(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1244(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1245(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1246(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1247(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1248(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1210(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1249(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1250(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1251(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1252(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1253(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1236(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1235(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1254(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1237(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1233(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1234(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1232(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1231(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1230(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1229(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1228(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1227(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1225(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1226(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1224(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1223(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1211(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1241(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1242(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1258(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1260(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1255(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1243(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1221(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1256(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1257(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1261(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1262(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1219(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1220(data, threadData);
  sCO2SurrogatePBRig_eqFunction_943(data, threadData);
  sCO2SurrogatePBRig_eqFunction_944(data, threadData);
  sCO2SurrogatePBRig_eqFunction_945(data, threadData);
  sCO2SurrogatePBRig_eqFunction_946(data, threadData);
  sCO2SurrogatePBRig_eqFunction_947(data, threadData);
  sCO2SurrogatePBRig_eqFunction_948(data, threadData);
  sCO2SurrogatePBRig_eqFunction_949(data, threadData);
  sCO2SurrogatePBRig_eqFunction_950(data, threadData);
  sCO2SurrogatePBRig_eqFunction_951(data, threadData);
  sCO2SurrogatePBRig_eqFunction_952(data, threadData);
  sCO2SurrogatePBRig_eqFunction_953(data, threadData);
  sCO2SurrogatePBRig_eqFunction_954(data, threadData);
  sCO2SurrogatePBRig_eqFunction_955(data, threadData);
  sCO2SurrogatePBRig_eqFunction_956(data, threadData);
  sCO2SurrogatePBRig_eqFunction_957(data, threadData);
  sCO2SurrogatePBRig_eqFunction_958(data, threadData);
  sCO2SurrogatePBRig_eqFunction_959(data, threadData);
  sCO2SurrogatePBRig_eqFunction_960(data, threadData);
  sCO2SurrogatePBRig_eqFunction_961(data, threadData);
  sCO2SurrogatePBRig_eqFunction_962(data, threadData);
  sCO2SurrogatePBRig_eqFunction_963(data, threadData);
  sCO2SurrogatePBRig_eqFunction_964(data, threadData);
  sCO2SurrogatePBRig_eqFunction_965(data, threadData);
  sCO2SurrogatePBRig_eqFunction_966(data, threadData);
  sCO2SurrogatePBRig_eqFunction_967(data, threadData);
  sCO2SurrogatePBRig_eqFunction_968(data, threadData);
  sCO2SurrogatePBRig_eqFunction_969(data, threadData);
  sCO2SurrogatePBRig_eqFunction_970(data, threadData);
  sCO2SurrogatePBRig_eqFunction_971(data, threadData);
  sCO2SurrogatePBRig_eqFunction_972(data, threadData);
  sCO2SurrogatePBRig_eqFunction_973(data, threadData);
  sCO2SurrogatePBRig_eqFunction_974(data, threadData);
  sCO2SurrogatePBRig_eqFunction_975(data, threadData);
  sCO2SurrogatePBRig_eqFunction_976(data, threadData);
  sCO2SurrogatePBRig_eqFunction_977(data, threadData);
  sCO2SurrogatePBRig_eqFunction_978(data, threadData);
  sCO2SurrogatePBRig_eqFunction_979(data, threadData);
  sCO2SurrogatePBRig_eqFunction_980(data, threadData);
  sCO2SurrogatePBRig_eqFunction_981(data, threadData);
  sCO2SurrogatePBRig_eqFunction_982(data, threadData);
  sCO2SurrogatePBRig_eqFunction_983(data, threadData);
  sCO2SurrogatePBRig_eqFunction_984(data, threadData);
  sCO2SurrogatePBRig_eqFunction_985(data, threadData);
  sCO2SurrogatePBRig_eqFunction_991(data, threadData);
  sCO2SurrogatePBRig_eqFunction_990(data, threadData);
  sCO2SurrogatePBRig_eqFunction_989(data, threadData);
  sCO2SurrogatePBRig_eqFunction_988(data, threadData);
  sCO2SurrogatePBRig_eqFunction_987(data, threadData);
  sCO2SurrogatePBRig_eqFunction_986(data, threadData);
  TRACE_POP
}


int sCO2SurrogatePBRig_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  sCO2SurrogatePBRig_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int sCO2SurrogatePBRig_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int sCO2SurrogatePBRig_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

