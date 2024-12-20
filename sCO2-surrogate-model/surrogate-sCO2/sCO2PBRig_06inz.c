/* Initialization */
#include "sCO2PBRig_model.h"
#include "sCO2PBRig_11mix.h"
#include "sCO2PBRig_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

void sCO2PBRig_functionInitialEquations_0(DATA *data, threadData_t *threadData);

/*
equation index: 1
type: SIMPLE_ASSIGN
E_elec = $START.E_elec
*/
void sCO2PBRig_eqFunction_1(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_2(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,2};
  data->localData[0]->realVars[258] /* powerBlock.mainCompressor.port_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 3
type: SIMPLE_ASSIGN
powerBlock._exchanger._CO2_port_a._h_outflow = 0.0
*/
void sCO2PBRig_eqFunction_3(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,3};
  data->localData[0]->realVars[199] /* powerBlock.exchanger.CO2_port_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 4
type: SIMPLE_ASSIGN
powerBlock._reCompressor._port_a._h_outflow = 0.0
*/
void sCO2PBRig_eqFunction_4(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,4};
  data->localData[0]->realVars[268] /* powerBlock.reCompressor.port_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 5
type: SIMPLE_ASSIGN
source._medium._R = 80.61759766268693
*/
void sCO2PBRig_eqFunction_5(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_6(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_7(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_8(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_9(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_10(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_11(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_12(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_13(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_14(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_15(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_16(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_17(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_18(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_19(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_20(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,20};
  data->localData[0]->realVars[201] /* powerBlock.exchanger.HTF_port_a.h_outflow variable */ = 0.0;
  TRACE_POP
}

/*
equation index: 21
type: SIMPLE_ASSIGN
sink._medium._p_bar = 1e-05 * sink.p
*/
void sCO2PBRig_eqFunction_21(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,21};
  data->localData[0]->realVars[291] /* sink.medium.p_bar variable */ = (1e-05) * (data->simulationInfo->realParameter[679] /* sink.p PARAM */);
  TRACE_POP
}

/*
equation index: 22
type: SIMPLE_ASSIGN
source._state._h = if noEvent(source.T < 0.0) then 0.0 else -196601.368854 + 113.1902543343771 * source.T ^ 1.3093
*/
void sCO2PBRig_eqFunction_22(DATA *data, threadData_t *threadData)
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
  tmp0 = Less(data->simulationInfo->realParameter[682] /* source.T PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[682] /* source.T PARAM */;
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
void sCO2PBRig_eqFunction_23(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_24(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_25(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_26(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,26};
  data->localData[0]->realVars[204] /* powerBlock.exchanger.T_HTF_in variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[307] /* source.state.h variable */);
  TRACE_POP
}

/*
equation index: 27
type: SIMPLE_ASSIGN
powerBlock._C_generator = 7.712415280251864 * powerBlock.pri_generator
*/
void sCO2PBRig_eqFunction_27(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,27};
  data->simulationInfo->realParameter[32] /* powerBlock.C_generator PARAM */ = (7.712415280251864) * (data->simulationInfo->realParameter[614] /* powerBlock.pri_generator PARAM */);
  TRACE_POP
}

/*
equation index: 28
type: SIMPLE_ASSIGN
powerBlock._exchanger._T_HTF_des[1] = powerBlock.T_HTF_out
*/
void sCO2PBRig_eqFunction_28(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,28};
  data->simulationInfo->realParameter[449] /* powerBlock.exchanger.T_HTF_des[1] PARAM */ = data->simulationInfo->realParameter[312] /* powerBlock.T_HTF_out PARAM */;
  TRACE_POP
}

/*
equation index: 29
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_in_HTF_des = powerBlock.state_HTF_in_des.h
*/
void sCO2PBRig_eqFunction_29(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,29};
  data->simulationInfo->realParameter[497] /* powerBlock.exchanger.h_in_HTF_des PARAM */ = data->simulationInfo->realParameter[641] /* powerBlock.state_HTF_in_des.h PARAM */;
  TRACE_POP
}

/*
equation index: 30
type: SIMPLE_ASSIGN
powerBlock._reCompressor._p_out_des = powerBlock.reCompressor.p_high_des
*/
void sCO2PBRig_eqFunction_30(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,30};
  data->simulationInfo->realParameter[631] /* powerBlock.reCompressor.p_out_des PARAM */ = data->simulationInfo->realParameter[629] /* powerBlock.reCompressor.p_high_des PARAM */;
  TRACE_POP
}

/*
equation index: 31
type: SIMPLE_ASSIGN
powerBlock._reCompressor._state_isen_des._p = powerBlock.reCompressor.p_out_des
*/
void sCO2PBRig_eqFunction_31(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,31};
  data->simulationInfo->realParameter[637] /* powerBlock.reCompressor.state_isen_des.p PARAM */ = data->simulationInfo->realParameter[631] /* powerBlock.reCompressor.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 32
type: SIMPLE_ASSIGN
_omcQuot_245354415254._powerBlock._reCompressor._p_out = powerBlock.reCompressor.p_out_des
*/
void sCO2PBRig_eqFunction_32(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,32};
  data->modelData->realVarsData[266].attribute /* powerBlock.reCompressor.p_out variable */.start = data->simulationInfo->realParameter[631] /* powerBlock.reCompressor.p_out_des PARAM */;
    data->localData[0]->realVars[266] /* powerBlock.reCompressor.p_out variable */ = data->modelData->realVarsData[266].attribute /* powerBlock.reCompressor.p_out variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[266].info /* powerBlock.reCompressor.p_out */.name, (modelica_real) data->localData[0]->realVars[266] /* powerBlock.reCompressor.p_out variable */);
  TRACE_POP
}

/*
equation index: 33
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[15]._h = powerBlock.exchanger.h_in_HTF_des
*/
void sCO2PBRig_eqFunction_33(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,33};
  data->simulationInfo->realParameter[566] /* powerBlock.exchanger.state_HTF_des[15].h PARAM */ = data->simulationInfo->realParameter[497] /* powerBlock.exchanger.h_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 34
type: SIMPLE_ASSIGN
powerBlock._exchanger._T_CO2_des[15] = powerBlock.exchanger.T_out_CO2_des
*/
void sCO2PBRig_eqFunction_34(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,34};
  data->simulationInfo->realParameter[448] /* powerBlock.exchanger.T_CO2_des[15] PARAM */ = data->simulationInfo->realParameter[465] /* powerBlock.exchanger.T_out_CO2_des PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_35(DATA*, threadData_t*);
/*
equation index: 36
indexNonlinear: 0
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[15]}
eqns: {35}
*/
void sCO2PBRig_eqFunction_36(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,36};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 36 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[0].nlsxOld[0] = data->simulationInfo->realParameter[463] /* powerBlock.exchanger.T_HTF_des[15] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 0);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,36};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 36 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[463] /* powerBlock.exchanger.T_HTF_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[0].nlsx[0];
  TRACE_POP
}

/*
equation index: 37
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[1]._h = if noEvent(powerBlock.exchanger.T_HTF_des[1] < 0.0) then 0.0 else -196601.368854 + 113.1902543343771 * powerBlock.exchanger.T_HTF_des[1] ^ 1.3093
*/
void sCO2PBRig_eqFunction_37(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,37};
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
  data->simulationInfo->realParameter[552] /* powerBlock.exchanger.state_HTF_des[1].h PARAM */ = tmp9;
  TRACE_POP
}

/*
equation index: 65
type: LINEAR

<var>powerBlock._exchanger._state_HTF_des[2]._h</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void sCO2PBRig_eqFunction_65(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,65};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->simulationInfo->realParameter[553] /* powerBlock.exchanger.state_HTF_des[2].h PARAM */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 65 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 0, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,65};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 65 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[553] /* powerBlock.exchanger.state_HTF_des[2].h PARAM */ = aux_x[0];
  TRACE_POP
}

void sCO2PBRig_eqFunction_66(DATA*, threadData_t*);
/*
equation index: 67
indexNonlinear: 1
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[2]}
eqns: {66}
*/
void sCO2PBRig_eqFunction_67(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,67};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 67 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[1].nlsxOld[0] = data->simulationInfo->realParameter[450] /* powerBlock.exchanger.T_HTF_des[2] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 1);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,67};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 67 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[450] /* powerBlock.exchanger.T_HTF_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[1].nlsx[0];
  TRACE_POP
}

void sCO2PBRig_eqFunction_68(DATA*, threadData_t*);
/*
equation index: 69
indexNonlinear: 2
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[3]}
eqns: {68}
*/
void sCO2PBRig_eqFunction_69(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,69};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 69 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[2].nlsxOld[0] = data->simulationInfo->realParameter[451] /* powerBlock.exchanger.T_HTF_des[3] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 2);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,69};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 69 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[451] /* powerBlock.exchanger.T_HTF_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[2].nlsx[0];
  TRACE_POP
}

void sCO2PBRig_eqFunction_70(DATA*, threadData_t*);
/*
equation index: 71
indexNonlinear: 3
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[4]}
eqns: {70}
*/
void sCO2PBRig_eqFunction_71(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,71};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 71 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[3].nlsxOld[0] = data->simulationInfo->realParameter[452] /* powerBlock.exchanger.T_HTF_des[4] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 3);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,71};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 71 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[452] /* powerBlock.exchanger.T_HTF_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[3].nlsx[0];
  TRACE_POP
}

void sCO2PBRig_eqFunction_72(DATA*, threadData_t*);
/*
equation index: 73
indexNonlinear: 4
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[5]}
eqns: {72}
*/
void sCO2PBRig_eqFunction_73(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,73};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 73 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[4].nlsxOld[0] = data->simulationInfo->realParameter[453] /* powerBlock.exchanger.T_HTF_des[5] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 4);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,73};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 73 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[453] /* powerBlock.exchanger.T_HTF_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[4].nlsx[0];
  TRACE_POP
}

void sCO2PBRig_eqFunction_74(DATA*, threadData_t*);
/*
equation index: 75
indexNonlinear: 5
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[6]}
eqns: {74}
*/
void sCO2PBRig_eqFunction_75(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,75};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 75 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[5].nlsxOld[0] = data->simulationInfo->realParameter[454] /* powerBlock.exchanger.T_HTF_des[6] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 5);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,75};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 75 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[454] /* powerBlock.exchanger.T_HTF_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[5].nlsx[0];
  TRACE_POP
}

void sCO2PBRig_eqFunction_76(DATA*, threadData_t*);
/*
equation index: 77
indexNonlinear: 6
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[7]}
eqns: {76}
*/
void sCO2PBRig_eqFunction_77(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,77};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 77 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[6].nlsxOld[0] = data->simulationInfo->realParameter[455] /* powerBlock.exchanger.T_HTF_des[7] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 6);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,77};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 77 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[455] /* powerBlock.exchanger.T_HTF_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[6].nlsx[0];
  TRACE_POP
}

void sCO2PBRig_eqFunction_78(DATA*, threadData_t*);
/*
equation index: 79
indexNonlinear: 7
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[8]}
eqns: {78}
*/
void sCO2PBRig_eqFunction_79(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,79};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 79 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[7].nlsxOld[0] = data->simulationInfo->realParameter[456] /* powerBlock.exchanger.T_HTF_des[8] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 7);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,79};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 79 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[456] /* powerBlock.exchanger.T_HTF_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[7].nlsx[0];
  TRACE_POP
}

void sCO2PBRig_eqFunction_80(DATA*, threadData_t*);
/*
equation index: 81
indexNonlinear: 8
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[9]}
eqns: {80}
*/
void sCO2PBRig_eqFunction_81(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,81};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 81 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[8].nlsxOld[0] = data->simulationInfo->realParameter[457] /* powerBlock.exchanger.T_HTF_des[9] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 8);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,81};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 81 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[457] /* powerBlock.exchanger.T_HTF_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[8].nlsx[0];
  TRACE_POP
}

void sCO2PBRig_eqFunction_82(DATA*, threadData_t*);
/*
equation index: 83
indexNonlinear: 9
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[10]}
eqns: {82}
*/
void sCO2PBRig_eqFunction_83(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,83};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 83 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[9].nlsxOld[0] = data->simulationInfo->realParameter[458] /* powerBlock.exchanger.T_HTF_des[10] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 9);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,83};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 83 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[458] /* powerBlock.exchanger.T_HTF_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[9].nlsx[0];
  TRACE_POP
}

void sCO2PBRig_eqFunction_84(DATA*, threadData_t*);
/*
equation index: 85
indexNonlinear: 10
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[11]}
eqns: {84}
*/
void sCO2PBRig_eqFunction_85(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,85};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 85 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[10].nlsxOld[0] = data->simulationInfo->realParameter[459] /* powerBlock.exchanger.T_HTF_des[11] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 10);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,85};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 85 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[459] /* powerBlock.exchanger.T_HTF_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[10].nlsx[0];
  TRACE_POP
}

void sCO2PBRig_eqFunction_86(DATA*, threadData_t*);
/*
equation index: 87
indexNonlinear: 11
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[12]}
eqns: {86}
*/
void sCO2PBRig_eqFunction_87(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,87};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 87 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[11].nlsxOld[0] = data->simulationInfo->realParameter[460] /* powerBlock.exchanger.T_HTF_des[12] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 11);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,87};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 87 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[460] /* powerBlock.exchanger.T_HTF_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[11].nlsx[0];
  TRACE_POP
}

void sCO2PBRig_eqFunction_88(DATA*, threadData_t*);
/*
equation index: 89
indexNonlinear: 12
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[13]}
eqns: {88}
*/
void sCO2PBRig_eqFunction_89(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,89};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 89 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[12].nlsxOld[0] = data->simulationInfo->realParameter[461] /* powerBlock.exchanger.T_HTF_des[13] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 12);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,89};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 89 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[461] /* powerBlock.exchanger.T_HTF_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[12].nlsx[0];
  TRACE_POP
}

void sCO2PBRig_eqFunction_90(DATA*, threadData_t*);
/*
equation index: 91
indexNonlinear: 13
type: NONLINEAR

vars: {powerBlock._exchanger._T_HTF_des[14]}
eqns: {90}
*/
void sCO2PBRig_eqFunction_91(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,91};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 91 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[13].nlsxOld[0] = data->simulationInfo->realParameter[462] /* powerBlock.exchanger.T_HTF_des[14] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 13);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,91};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 91 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[462] /* powerBlock.exchanger.T_HTF_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[13].nlsx[0];
  TRACE_POP
}

/*
equation index: 92
type: SIMPLE_ASSIGN
powerBlock._C_exchanger = powerBlock.pri_exchanger * powerBlock.exchanger.Q_HX_des
*/
void sCO2PBRig_eqFunction_92(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,92};
  data->simulationInfo->realParameter[31] /* powerBlock.C_exchanger PARAM */ = (data->simulationInfo->realParameter[613] /* powerBlock.pri_exchanger PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */);
  TRACE_POP
}

/*
equation index: 93
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_out_HTF_des = powerBlock.exchanger.state_HTF_des[1].h
*/
void sCO2PBRig_eqFunction_93(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,93};
  data->simulationInfo->realParameter[499] /* powerBlock.exchanger.h_out_HTF_des PARAM */ = data->simulationInfo->realParameter[552] /* powerBlock.exchanger.state_HTF_des[1].h PARAM */;
  TRACE_POP
}

/*
equation index: 94
type: SIMPLE_ASSIGN
powerBlock._cooler._P_cool_des = 841450.4422
*/
void sCO2PBRig_eqFunction_94(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,94};
  data->simulationInfo->realParameter[321] /* powerBlock.cooler.P_cool_des PARAM */ = 841450.4422;
  TRACE_POP
}

/*
equation index: 95
type: SIMPLE_ASSIGN
powerBlock._cooler._P_cooling = min(200.0 * exp(0.3537 * (-273.15 + T_amb_input)), powerBlock.cooler.P_cool_des)
*/
void sCO2PBRig_eqFunction_95(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,95};
  data->localData[0]->realVars[191] /* powerBlock.cooler.P_cooling variable */ = fmin((200.0) * (exp((0.3537) * (-273.15 + data->simulationInfo->realParameter[4] /* T_amb_input PARAM */))),data->simulationInfo->realParameter[321] /* powerBlock.cooler.P_cool_des PARAM */);
  TRACE_POP
}

/*
equation index: 96
type: SIMPLE_ASSIGN
powerBlock._cooler._T_CO2_des[15] = powerBlock.cooler.T_low
*/
void sCO2PBRig_eqFunction_96(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,96};
  data->simulationInfo->realParameter[339] /* powerBlock.cooler.T_CO2_des[15] PARAM */ = data->simulationInfo->realParameter[342] /* powerBlock.cooler.T_low PARAM */;
  TRACE_POP
}

/*
equation index: 97
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[15] = powerBlock.cooler.T_CO2_des[15] - powerBlock.cooler.T_amb_des
*/
void sCO2PBRig_eqFunction_97(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,97};
  data->simulationInfo->realParameter[372] /* powerBlock.cooler.deltaT_des[15] PARAM */ = data->simulationInfo->realParameter[339] /* powerBlock.cooler.T_CO2_des[15] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 98
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._p_out_des = powerBlock.mainCompressor.p_high_des
*/
void sCO2PBRig_eqFunction_98(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,98};
  data->simulationInfo->realParameter[599] /* powerBlock.mainCompressor.p_out_des PARAM */ = data->simulationInfo->realParameter[597] /* powerBlock.mainCompressor.p_high_des PARAM */;
  TRACE_POP
}

/*
equation index: 99
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._state_isen_des._p = powerBlock.mainCompressor.p_out_des
*/
void sCO2PBRig_eqFunction_99(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,99};
  data->simulationInfo->realParameter[605] /* powerBlock.mainCompressor.state_isen_des.p PARAM */ = data->simulationInfo->realParameter[599] /* powerBlock.mainCompressor.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 100
type: SIMPLE_ASSIGN
powerBlock._LTR._p_in_comp_des = powerBlock.mainCompressor.p_out_des
*/
void sCO2PBRig_eqFunction_100(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,100};
  data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */ = data->simulationInfo->realParameter[599] /* powerBlock.mainCompressor.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 101
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[1]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_101(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,101};
  data->simulationInfo->realParameter[261] /* powerBlock.LTR.state_comp_des[1].p PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 102
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[2]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_102(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,102};
  data->simulationInfo->realParameter[262] /* powerBlock.LTR.state_comp_des[2].p PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 103
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[3]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_103(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,103};
  data->simulationInfo->realParameter[263] /* powerBlock.LTR.state_comp_des[3].p PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 104
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[4]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_104(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,104};
  data->simulationInfo->realParameter[264] /* powerBlock.LTR.state_comp_des[4].p PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 105
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[5]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_105(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,105};
  data->simulationInfo->realParameter[265] /* powerBlock.LTR.state_comp_des[5].p PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 106
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[6]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_106(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,106};
  data->simulationInfo->realParameter[266] /* powerBlock.LTR.state_comp_des[6].p PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 107
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[7]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_107(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,107};
  data->simulationInfo->realParameter[267] /* powerBlock.LTR.state_comp_des[7].p PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 108
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[8]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_108(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,108};
  data->simulationInfo->realParameter[268] /* powerBlock.LTR.state_comp_des[8].p PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 109
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[9]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_109(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,109};
  data->simulationInfo->realParameter[269] /* powerBlock.LTR.state_comp_des[9].p PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 110
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[10]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_110(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,110};
  data->simulationInfo->realParameter[270] /* powerBlock.LTR.state_comp_des[10].p PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 111
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[11]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_111(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,111};
  data->simulationInfo->realParameter[271] /* powerBlock.LTR.state_comp_des[11].p PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 112
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[12]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_112(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,112};
  data->simulationInfo->realParameter[272] /* powerBlock.LTR.state_comp_des[12].p PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 113
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[13]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_113(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,113};
  data->simulationInfo->realParameter[273] /* powerBlock.LTR.state_comp_des[13].p PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 114
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[14]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_114(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,114};
  data->simulationInfo->realParameter[274] /* powerBlock.LTR.state_comp_des[14].p PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 115
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[15]._p = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_115(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,115};
  data->simulationInfo->realParameter[275] /* powerBlock.LTR.state_comp_des[15].p PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 116
type: SIMPLE_ASSIGN
powerBlock._LTR._p_out_comp_des = powerBlock.LTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_116(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,116};
  data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_out_comp_des PARAM */ = data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 117
type: SIMPLE_ASSIGN
powerBlock._HTR._p_in_comp_des = powerBlock.ratio_m_des * powerBlock.LTR.p_out_comp_des + (1.0 - powerBlock.ratio_m_des) * powerBlock.reCompressor.p_out_des
*/
void sCO2PBRig_eqFunction_117(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,117};
  data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */ = (data->simulationInfo->realParameter[617] /* powerBlock.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[242] /* powerBlock.LTR.p_out_comp_des PARAM */) + (1.0 - data->simulationInfo->realParameter[617] /* powerBlock.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[631] /* powerBlock.reCompressor.p_out_des PARAM */);
  TRACE_POP
}

/*
equation index: 118
type: SIMPLE_ASSIGN
_omcQuot_245354415254._powerBlock._mainCompressor._p_out = powerBlock.mainCompressor.p_out_des
*/
void sCO2PBRig_eqFunction_118(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,118};
  data->modelData->realVarsData[256].attribute /* powerBlock.mainCompressor.p_out variable */.start = data->simulationInfo->realParameter[599] /* powerBlock.mainCompressor.p_out_des PARAM */;
    data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */ = data->modelData->realVarsData[256].attribute /* powerBlock.mainCompressor.p_out variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[256].info /* powerBlock.mainCompressor.p_out */.name, (modelica_real) data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */);
  TRACE_POP
}

/*
equation index: 119
type: SIMPLE_ASSIGN
powerBlock._HTR._p_out_comp_des = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_119(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,119};
  data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_out_comp_des PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 120
type: SIMPLE_ASSIGN
powerBlock._exchanger._p_in_CO2_des = powerBlock.HTR.p_out_comp_des
*/
void sCO2PBRig_eqFunction_120(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,120};
  data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */ = data->simulationInfo->realParameter[107] /* powerBlock.HTR.p_out_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 121
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[1]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_121(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,121};
  data->simulationInfo->realParameter[522] /* powerBlock.exchanger.state_CO2_des[1].p PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 122
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[2]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_122(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,122};
  data->simulationInfo->realParameter[523] /* powerBlock.exchanger.state_CO2_des[2].p PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 123
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[3]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_123(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,123};
  data->simulationInfo->realParameter[524] /* powerBlock.exchanger.state_CO2_des[3].p PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 124
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[4]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_124(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,124};
  data->simulationInfo->realParameter[525] /* powerBlock.exchanger.state_CO2_des[4].p PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 125
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[5]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_125(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,125};
  data->simulationInfo->realParameter[526] /* powerBlock.exchanger.state_CO2_des[5].p PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 126
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[6]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_126(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,126};
  data->simulationInfo->realParameter[527] /* powerBlock.exchanger.state_CO2_des[6].p PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 127
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[7]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_127(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,127};
  data->simulationInfo->realParameter[528] /* powerBlock.exchanger.state_CO2_des[7].p PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 128
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[8]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_128(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,128};
  data->simulationInfo->realParameter[529] /* powerBlock.exchanger.state_CO2_des[8].p PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 129
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[9]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_129(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,129};
  data->simulationInfo->realParameter[530] /* powerBlock.exchanger.state_CO2_des[9].p PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 130
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[10]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_130(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,130};
  data->simulationInfo->realParameter[531] /* powerBlock.exchanger.state_CO2_des[10].p PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 131
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[11]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_131(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,131};
  data->simulationInfo->realParameter[532] /* powerBlock.exchanger.state_CO2_des[11].p PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 132
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[12]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_132(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,132};
  data->simulationInfo->realParameter[533] /* powerBlock.exchanger.state_CO2_des[12].p PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 133
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[13]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_133(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,133};
  data->simulationInfo->realParameter[534] /* powerBlock.exchanger.state_CO2_des[13].p PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 134
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[14]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_134(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,134};
  data->simulationInfo->realParameter[535] /* powerBlock.exchanger.state_CO2_des[14].p PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 135
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[15]._h = SolarTherm.Media.CO2.CO2_utilities.h_p_T(powerBlock.exchanger.p_in_CO2_des, powerBlock.exchanger.T_CO2_des[15], tableIDh_p_T)
*/
void sCO2PBRig_eqFunction_135(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,135};
  data->simulationInfo->realParameter[521] /* powerBlock.exchanger.state_CO2_des[15].h PARAM */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[448] /* powerBlock.exchanger.T_CO2_des[15] PARAM */, data->simulationInfo->extObjs[38]);
  TRACE_POP
}

/*
equation index: 136
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_out_CO2_des = powerBlock.exchanger.state_CO2_des[15].h
*/
void sCO2PBRig_eqFunction_136(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,136};
  data->simulationInfo->realParameter[498] /* powerBlock.exchanger.h_out_CO2_des PARAM */ = data->simulationInfo->realParameter[521] /* powerBlock.exchanger.state_CO2_des[15].h PARAM */;
  TRACE_POP
}

/*
equation index: 137
type: SIMPLE_ASSIGN
powerBlock._turbine._h_in_des = powerBlock.exchanger.h_out_CO2_des
*/
void sCO2PBRig_eqFunction_137(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,137};
  data->simulationInfo->realParameter[651] /* powerBlock.turbine.h_in_des PARAM */ = data->simulationInfo->realParameter[498] /* powerBlock.exchanger.h_out_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 138
type: SIMPLE_ASSIGN
powerBlock._turbine._state_in_des._h = powerBlock.turbine.h_in_des
*/
void sCO2PBRig_eqFunction_138(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,138};
  data->simulationInfo->realParameter[656] /* powerBlock.turbine.state_in_des.h PARAM */ = data->simulationInfo->realParameter[651] /* powerBlock.turbine.h_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 139
type: SIMPLE_ASSIGN
_omcQuot_245354415254._powerBlock._exchanger._h_CO2[15] = powerBlock.turbine.h_in_des
*/
void sCO2PBRig_eqFunction_139(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,139};
  data->modelData->realVarsData[236].attribute /* powerBlock.exchanger.h_CO2[15] variable */.start = data->simulationInfo->realParameter[651] /* powerBlock.turbine.h_in_des PARAM */;
    data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */ = data->modelData->realVarsData[236].attribute /* powerBlock.exchanger.h_CO2[15] variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[236].info /* powerBlock.exchanger.h_CO2[15] */.name, (modelica_real) data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */);
  TRACE_POP
}

/*
equation index: 140
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[15]._p = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_140(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,140};
  data->simulationInfo->realParameter[536] /* powerBlock.exchanger.state_CO2_des[15].p PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 141
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[15] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[15].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[15].p, powerBlock.exchanger.state_CO2_des[15].h, tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_141(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,141};
  data->simulationInfo->realParameter[495] /* powerBlock.exchanger.deltaT_des[15] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[566] /* powerBlock.exchanger.state_HTF_des[15].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[536] /* powerBlock.exchanger.state_CO2_des[15].p PARAM */, data->simulationInfo->realParameter[521] /* powerBlock.exchanger.state_CO2_des[15].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

/*
equation index: 142
type: SIMPLE_ASSIGN
powerBlock._exchanger._p_out_CO2_des = powerBlock.exchanger.p_in_CO2_des
*/
void sCO2PBRig_eqFunction_142(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,142};
  data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_out_CO2_des PARAM */ = data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 143
type: SIMPLE_ASSIGN
powerBlock._turbine._p_in_des = powerBlock.exchanger.p_out_CO2_des
*/
void sCO2PBRig_eqFunction_143(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,143};
  data->simulationInfo->realParameter[654] /* powerBlock.turbine.p_in_des PARAM */ = data->simulationInfo->realParameter[504] /* powerBlock.exchanger.p_out_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 144
type: SIMPLE_ASSIGN
powerBlock._turbine._state_in_des._p = powerBlock.turbine.p_in_des
*/
void sCO2PBRig_eqFunction_144(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,144};
  data->simulationInfo->realParameter[657] /* powerBlock.turbine.state_in_des.p PARAM */ = data->simulationInfo->realParameter[654] /* powerBlock.turbine.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 145
type: SIMPLE_ASSIGN
powerBlock._turbine._state_isen_des._h = SolarTherm.Media.CO2.CO2_utilities.h_p_s(powerBlock.turbine.p_in_des / powerBlock.turbine.PR, SolarTherm.Media.CO2.CO2_utilities.s_p_h(powerBlock.turbine.state_in_des.p, powerBlock.turbine.state_in_des.h, Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Entropy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)), tableIDh_p_s)
*/
void sCO2PBRig_eqFunction_145(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,145};
  data->simulationInfo->realParameter[658] /* powerBlock.turbine.state_isen_des.h PARAM */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__s(threadData, DIVISION_SIM(data->simulationInfo->realParameter[654] /* powerBlock.turbine.p_in_des PARAM */,data->simulationInfo->realParameter[646] /* powerBlock.turbine.PR PARAM */,"powerBlock.turbine.PR",equationIndexes), omc_SolarTherm_Media_CO2_CO2__utilities_s__p__h(threadData, data->simulationInfo->realParameter[657] /* powerBlock.turbine.state_in_des.p PARAM */, data->simulationInfo->realParameter[656] /* powerBlock.turbine.state_in_des.h PARAM */, omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT34, _OMC_LIT35, _OMC_LIT36, 1)), data->simulationInfo->extObjs[39]);
  TRACE_POP
}

/*
equation index: 146
type: SIMPLE_ASSIGN
powerBlock._turbine._h_out_des = powerBlock.turbine.state_in_des.h + (powerBlock.turbine.state_isen_des.h - powerBlock.turbine.state_in_des.h) * powerBlock.turbine.eta_design
*/
void sCO2PBRig_eqFunction_146(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,146};
  data->simulationInfo->realParameter[652] /* powerBlock.turbine.h_out_des PARAM */ = data->simulationInfo->realParameter[656] /* powerBlock.turbine.state_in_des.h PARAM */ + (data->simulationInfo->realParameter[658] /* powerBlock.turbine.state_isen_des.h PARAM */ - data->simulationInfo->realParameter[656] /* powerBlock.turbine.state_in_des.h PARAM */) * (data->simulationInfo->realParameter[650] /* powerBlock.turbine.eta_design PARAM */);
  TRACE_POP
}

/*
equation index: 147
type: SIMPLE_ASSIGN
powerBlock._turbine._state_out_des._h = powerBlock.turbine.h_out_des
*/
void sCO2PBRig_eqFunction_147(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,147};
  data->simulationInfo->realParameter[660] /* powerBlock.turbine.state_out_des.h PARAM */ = data->simulationInfo->realParameter[652] /* powerBlock.turbine.h_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 148
type: SIMPLE_ASSIGN
powerBlock._HTR._h_in_turb_des = powerBlock.turbine.h_out_des
*/
void sCO2PBRig_eqFunction_148(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,148};
  data->simulationInfo->realParameter[100] /* powerBlock.HTR.h_in_turb_des PARAM */ = data->simulationInfo->realParameter[652] /* powerBlock.turbine.h_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 149
type: SIMPLE_ASSIGN
_omcQuot_24544D50245641522431343924305824414253 = pre(powerBlock.turbine.C_spouting_des)
*/
void sCO2PBRig_eqFunction_149(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,149};
  data->localData[0]->realVars[4] /* $TMP$VAR$149$0X$ABS variable */ = data->simulationInfo->realParameter[644] /* powerBlock.turbine.C_spouting_des PARAM */;
  TRACE_POP
}

/*
equation index: 150
type: SIMPLE_ASSIGN
powerBlock._turbine._C_spouting_des = $_signNoNull($TMP$VAR$149$0X$ABS) * abs((2.0 * (powerBlock.turbine.state_in_des.h - powerBlock.turbine.state_isen_des.h)) ^ 0.5)
*/
void sCO2PBRig_eqFunction_150(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,150};
  modelica_real tmp0;
  tmp0 = (2.0) * (data->simulationInfo->realParameter[656] /* powerBlock.turbine.state_in_des.h PARAM */ - data->simulationInfo->realParameter[658] /* powerBlock.turbine.state_isen_des.h PARAM */);
  if(!(tmp0 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(2.0 * (powerBlock.turbine.state_in_des.h - powerBlock.turbine.state_isen_des.h)) was %g should be >= 0", tmp0);
  }
  data->simulationInfo->realParameter[644] /* powerBlock.turbine.C_spouting_des PARAM */ = ((data->localData[0]->realVars[4] /* $TMP$VAR$149$0X$ABS variable */ >= 0.0 ? 1.0:-1.0)) * (fabs(sqrt(tmp0)));
  TRACE_POP
}

/*
equation index: 151
type: SIMPLE_ASSIGN
powerBlock._turbine._tipSpeed_des = 0.707 * powerBlock.turbine.C_spouting_des
*/
void sCO2PBRig_eqFunction_151(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,151};
  data->simulationInfo->realParameter[662] /* powerBlock.turbine.tipSpeed_des PARAM */ = (0.707) * (data->simulationInfo->realParameter[644] /* powerBlock.turbine.C_spouting_des PARAM */);
  TRACE_POP
}

/*
equation index: 152
type: SIMPLE_ASSIGN
powerBlock._turbine._diam_turb = 2.0 * powerBlock.turbine.tipSpeed_des / powerBlock.turbine.N_shaft
*/
void sCO2PBRig_eqFunction_152(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,152};
  data->simulationInfo->realParameter[649] /* powerBlock.turbine.diam_turb PARAM */ = DIVISION_SIM((2.0) * (data->simulationInfo->realParameter[662] /* powerBlock.turbine.tipSpeed_des PARAM */),data->simulationInfo->realParameter[645] /* powerBlock.turbine.N_shaft PARAM */,"powerBlock.turbine.N_shaft",equationIndexes);
  TRACE_POP
}

/*
equation index: 153
type: SIMPLE_ASSIGN
_omcQuot_245354415254._powerBlock._turbine._C_spouting = powerBlock.turbine.C_spouting_des
*/
void sCO2PBRig_eqFunction_153(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,153};
  data->modelData->realVarsData[274].attribute /* powerBlock.turbine.C_spouting variable */.start = data->simulationInfo->realParameter[644] /* powerBlock.turbine.C_spouting_des PARAM */;
    data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */ = data->modelData->realVarsData[274].attribute /* powerBlock.turbine.C_spouting variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[274].info /* powerBlock.turbine.C_spouting */.name, (modelica_real) data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */);
  TRACE_POP
}

/*
equation index: 154
type: SIMPLE_ASSIGN
powerBlock._turbine._state_isen_des._p = powerBlock.turbine.p_in_des / powerBlock.turbine.PR
*/
void sCO2PBRig_eqFunction_154(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,154};
  data->simulationInfo->realParameter[659] /* powerBlock.turbine.state_isen_des.p PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[654] /* powerBlock.turbine.p_in_des PARAM */,data->simulationInfo->realParameter[646] /* powerBlock.turbine.PR PARAM */,"powerBlock.turbine.PR",equationIndexes);
  TRACE_POP
}

/*
equation index: 155
type: SIMPLE_ASSIGN
powerBlock._turbine._p_out_des = powerBlock.turbine.p_in_des / powerBlock.turbine.PR
*/
void sCO2PBRig_eqFunction_155(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,155};
  data->simulationInfo->realParameter[655] /* powerBlock.turbine.p_out_des PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[654] /* powerBlock.turbine.p_in_des PARAM */,data->simulationInfo->realParameter[646] /* powerBlock.turbine.PR PARAM */,"powerBlock.turbine.PR",equationIndexes);
  TRACE_POP
}

/*
equation index: 156
type: SIMPLE_ASSIGN
powerBlock._turbine._state_out_des._p = powerBlock.turbine.p_out_des
*/
void sCO2PBRig_eqFunction_156(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,156};
  data->simulationInfo->realParameter[661] /* powerBlock.turbine.state_out_des.p PARAM */ = data->simulationInfo->realParameter[655] /* powerBlock.turbine.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 157
type: SIMPLE_ASSIGN
powerBlock._HTR._p_in_turb_des = powerBlock.turbine.p_out_des
*/
void sCO2PBRig_eqFunction_157(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,157};
  data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */ = data->simulationInfo->realParameter[655] /* powerBlock.turbine.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 158
type: SIMPLE_ASSIGN
powerBlock._HTR._p_out_turb_des = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_158(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,158};
  data->simulationInfo->realParameter[108] /* powerBlock.HTR.p_out_turb_des PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 159
type: SIMPLE_ASSIGN
powerBlock._LTR._p_in_turb_des = powerBlock.HTR.p_out_turb_des
*/
void sCO2PBRig_eqFunction_159(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,159};
  data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */ = data->simulationInfo->realParameter[108] /* powerBlock.HTR.p_out_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 160
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[1]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_160(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,160};
  data->simulationInfo->realParameter[291] /* powerBlock.LTR.state_turb_des[1].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 161
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[2]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_161(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,161};
  data->simulationInfo->realParameter[292] /* powerBlock.LTR.state_turb_des[2].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 162
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[3]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_162(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,162};
  data->simulationInfo->realParameter[293] /* powerBlock.LTR.state_turb_des[3].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 163
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[4]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_163(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,163};
  data->simulationInfo->realParameter[294] /* powerBlock.LTR.state_turb_des[4].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 164
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[5]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,164};
  data->simulationInfo->realParameter[295] /* powerBlock.LTR.state_turb_des[5].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 165
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[6]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,165};
  data->simulationInfo->realParameter[296] /* powerBlock.LTR.state_turb_des[6].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 166
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[7]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,166};
  data->simulationInfo->realParameter[297] /* powerBlock.LTR.state_turb_des[7].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 167
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[8]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,167};
  data->simulationInfo->realParameter[298] /* powerBlock.LTR.state_turb_des[8].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 168
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[9]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,168};
  data->simulationInfo->realParameter[299] /* powerBlock.LTR.state_turb_des[9].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 169
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[10]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,169};
  data->simulationInfo->realParameter[300] /* powerBlock.LTR.state_turb_des[10].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 170
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[11]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,170};
  data->simulationInfo->realParameter[301] /* powerBlock.LTR.state_turb_des[11].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 171
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[12]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,171};
  data->simulationInfo->realParameter[302] /* powerBlock.LTR.state_turb_des[12].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 172
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[13]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,172};
  data->simulationInfo->realParameter[303] /* powerBlock.LTR.state_turb_des[13].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 173
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[14]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,173};
  data->simulationInfo->realParameter[304] /* powerBlock.LTR.state_turb_des[14].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 174
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[15]._p = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,174};
  data->simulationInfo->realParameter[305] /* powerBlock.LTR.state_turb_des[15].p PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 175
type: SIMPLE_ASSIGN
powerBlock._LTR._p_out_turb_des = powerBlock.LTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,175};
  data->simulationInfo->realParameter[243] /* powerBlock.LTR.p_out_turb_des PARAM */ = data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 176
type: SIMPLE_ASSIGN
powerBlock._cooler._p_in_des = powerBlock.LTR.p_out_turb_des
*/
void sCO2PBRig_eqFunction_176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,176};
  data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */ = data->simulationInfo->realParameter[243] /* powerBlock.LTR.p_out_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 177
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[1]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,177};
  data->simulationInfo->realParameter[409] /* powerBlock.cooler.state_des[1].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 178
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[2]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,178};
  data->simulationInfo->realParameter[410] /* powerBlock.cooler.state_des[2].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 179
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[3]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,179};
  data->simulationInfo->realParameter[411] /* powerBlock.cooler.state_des[3].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 180
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[4]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,180};
  data->simulationInfo->realParameter[412] /* powerBlock.cooler.state_des[4].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 181
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[5]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,181};
  data->simulationInfo->realParameter[413] /* powerBlock.cooler.state_des[5].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 182
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[6]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,182};
  data->simulationInfo->realParameter[414] /* powerBlock.cooler.state_des[6].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 183
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[7]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,183};
  data->simulationInfo->realParameter[415] /* powerBlock.cooler.state_des[7].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 184
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[8]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,184};
  data->simulationInfo->realParameter[416] /* powerBlock.cooler.state_des[8].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 185
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[9]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,185};
  data->simulationInfo->realParameter[417] /* powerBlock.cooler.state_des[9].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 186
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[10]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,186};
  data->simulationInfo->realParameter[418] /* powerBlock.cooler.state_des[10].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 187
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[11]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,187};
  data->simulationInfo->realParameter[419] /* powerBlock.cooler.state_des[11].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 188
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[12]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,188};
  data->simulationInfo->realParameter[420] /* powerBlock.cooler.state_des[12].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 189
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[13]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,189};
  data->simulationInfo->realParameter[421] /* powerBlock.cooler.state_des[13].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 190
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[14]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,190};
  data->simulationInfo->realParameter[422] /* powerBlock.cooler.state_des[14].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 191
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[15]._h = SolarTherm.Media.CO2.CO2_utilities.h_p_T(powerBlock.cooler.p_in_des, powerBlock.cooler.T_CO2_des[15], tableIDh_p_T)
*/
void sCO2PBRig_eqFunction_191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,191};
  data->simulationInfo->realParameter[408] /* powerBlock.cooler.state_des[15].h PARAM */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[339] /* powerBlock.cooler.T_CO2_des[15] PARAM */, data->simulationInfo->extObjs[38]);
  TRACE_POP
}

/*
equation index: 192
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[15] = powerBlock.cooler.state_des[15].h
*/
void sCO2PBRig_eqFunction_192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,192};
  data->simulationInfo->realParameter[388] /* powerBlock.cooler.h_CO2_des[15] PARAM */ = data->simulationInfo->realParameter[408] /* powerBlock.cooler.state_des[15].h PARAM */;
  TRACE_POP
}

/*
equation index: 193
type: SIMPLE_ASSIGN
powerBlock._cooler._h_out_des = powerBlock.cooler.h_CO2_des[15]
*/
void sCO2PBRig_eqFunction_193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,193};
  data->simulationInfo->realParameter[390] /* powerBlock.cooler.h_out_des PARAM */ = data->simulationInfo->realParameter[388] /* powerBlock.cooler.h_CO2_des[15] PARAM */;
  TRACE_POP
}

/*
equation index: 194
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._h_in_des = powerBlock.cooler.h_out_des
*/
void sCO2PBRig_eqFunction_194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,194};
  data->simulationInfo->realParameter[594] /* powerBlock.mainCompressor.h_in_des PARAM */ = data->simulationInfo->realParameter[390] /* powerBlock.cooler.h_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 195
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._state_in_des._h = powerBlock.mainCompressor.h_in_des
*/
void sCO2PBRig_eqFunction_195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,195};
  data->simulationInfo->realParameter[602] /* powerBlock.mainCompressor.state_in_des.h PARAM */ = data->simulationInfo->realParameter[594] /* powerBlock.mainCompressor.h_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 196
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[15]._p = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,196};
  data->simulationInfo->realParameter[423] /* powerBlock.cooler.state_des[15].p PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 197
type: SIMPLE_ASSIGN
powerBlock._cooler._p_out_des = powerBlock.cooler.p_in_des
*/
void sCO2PBRig_eqFunction_197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,197};
  data->simulationInfo->realParameter[393] /* powerBlock.cooler.p_out_des PARAM */ = data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 198
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._p_in_des = powerBlock.cooler.p_out_des
*/
void sCO2PBRig_eqFunction_198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,198};
  data->simulationInfo->realParameter[598] /* powerBlock.mainCompressor.p_in_des PARAM */ = data->simulationInfo->realParameter[393] /* powerBlock.cooler.p_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 199
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._state_in_des._p = powerBlock.mainCompressor.p_in_des
*/
void sCO2PBRig_eqFunction_199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,199};
  data->simulationInfo->realParameter[603] /* powerBlock.mainCompressor.state_in_des.p PARAM */ = data->simulationInfo->realParameter[598] /* powerBlock.mainCompressor.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 200
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._state_isen_des._h = SolarTherm.Media.CO2.CO2_utilities.h_p_s(powerBlock.mainCompressor.p_out_des, SolarTherm.Media.CO2.CO2_utilities.s_p_h(powerBlock.mainCompressor.state_in_des.p, powerBlock.mainCompressor.state_in_des.h, Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Entropy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)), tableIDh_p_s)
*/
void sCO2PBRig_eqFunction_200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,200};
  data->simulationInfo->realParameter[604] /* powerBlock.mainCompressor.state_isen_des.h PARAM */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__s(threadData, data->simulationInfo->realParameter[599] /* powerBlock.mainCompressor.p_out_des PARAM */, omc_SolarTherm_Media_CO2_CO2__utilities_s__p__h(threadData, data->simulationInfo->realParameter[603] /* powerBlock.mainCompressor.state_in_des.p PARAM */, data->simulationInfo->realParameter[602] /* powerBlock.mainCompressor.state_in_des.h PARAM */, omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT34, _OMC_LIT35, _OMC_LIT36, 1)), data->simulationInfo->extObjs[39]);
  TRACE_POP
}

/*
equation index: 201
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._h_out_des = powerBlock.mainCompressor.state_in_des.h + (powerBlock.mainCompressor.state_isen_des.h - powerBlock.mainCompressor.state_in_des.h) / powerBlock.mainCompressor.eta_design
*/
void sCO2PBRig_eqFunction_201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,201};
  data->simulationInfo->realParameter[595] /* powerBlock.mainCompressor.h_out_des PARAM */ = data->simulationInfo->realParameter[602] /* powerBlock.mainCompressor.state_in_des.h PARAM */ + DIVISION_SIM(data->simulationInfo->realParameter[604] /* powerBlock.mainCompressor.state_isen_des.h PARAM */ - data->simulationInfo->realParameter[602] /* powerBlock.mainCompressor.state_in_des.h PARAM */,data->simulationInfo->realParameter[593] /* powerBlock.mainCompressor.eta_design PARAM */,"powerBlock.mainCompressor.eta_design",equationIndexes);
  TRACE_POP
}

/*
equation index: 202
type: SIMPLE_ASSIGN
powerBlock._LTR._h_in_comp_des = powerBlock.mainCompressor.h_out_des
*/
void sCO2PBRig_eqFunction_202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,202};
  data->simulationInfo->realParameter[234] /* powerBlock.LTR.h_in_comp_des PARAM */ = data->simulationInfo->realParameter[595] /* powerBlock.mainCompressor.h_out_des PARAM */;
  TRACE_POP
}

/*
equation index: 203
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[1]._h = powerBlock.LTR.h_in_comp_des
*/
void sCO2PBRig_eqFunction_203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,203};
  data->simulationInfo->realParameter[246] /* powerBlock.LTR.state_comp_des[1].h PARAM */ = data->simulationInfo->realParameter[234] /* powerBlock.LTR.h_in_comp_des PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_204(DATA*, threadData_t*);
/*
equation index: 205
indexNonlinear: 14
type: NONLINEAR

vars: {powerBlock._LTR._T_comp_des[1]}
eqns: {204}
*/
void sCO2PBRig_eqFunction_205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,205};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 205 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[14].nlsxOld[0] = data->simulationInfo->realParameter[174] /* powerBlock.LTR.T_comp_des[1] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 14);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,205};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 205 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[174] /* powerBlock.LTR.T_comp_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[14].nlsx[0];
  TRACE_POP
}

/*
equation index: 206
type: SIMPLE_ASSIGN
powerBlock._reCompressor._p_in_des = powerBlock.LTR.p_out_turb_des
*/
void sCO2PBRig_eqFunction_206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,206};
  data->simulationInfo->realParameter[630] /* powerBlock.reCompressor.p_in_des PARAM */ = data->simulationInfo->realParameter[243] /* powerBlock.LTR.p_out_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 207
type: SIMPLE_ASSIGN
powerBlock._reCompressor._state_in_des._p = powerBlock.reCompressor.p_in_des
*/
void sCO2PBRig_eqFunction_207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,207};
  data->simulationInfo->realParameter[635] /* powerBlock.reCompressor.state_in_des.p PARAM */ = data->simulationInfo->realParameter[630] /* powerBlock.reCompressor.p_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 208
type: SIMPLE_ASSIGN
_omcQuot_245354415254._powerBlock._turbine._p_out = powerBlock.turbine.p_out_des
*/
void sCO2PBRig_eqFunction_208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,208};
  data->modelData->realVarsData[278].attribute /* powerBlock.turbine.p_out variable */.start = data->simulationInfo->realParameter[655] /* powerBlock.turbine.p_out_des PARAM */;
    data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */ = data->modelData->realVarsData[278].attribute /* powerBlock.turbine.p_out variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[278].info /* powerBlock.turbine.p_out */.name, (modelica_real) data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */);
  TRACE_POP
}

/*
equation index: 209
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[15]._h = powerBlock.HTR.h_in_turb_des
*/
void sCO2PBRig_eqFunction_209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,209};
  data->simulationInfo->realParameter[155] /* powerBlock.HTR.state_turb_des[15].h PARAM */ = data->simulationInfo->realParameter[100] /* powerBlock.HTR.h_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 210
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[15]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,210};
  data->simulationInfo->realParameter[140] /* powerBlock.HTR.state_comp_des[15].p PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 211
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[15]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,211};
  data->simulationInfo->realParameter[170] /* powerBlock.HTR.state_turb_des[15].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_212(DATA*, threadData_t*);
/*
equation index: 213
indexNonlinear: 15
type: NONLINEAR

vars: {powerBlock._HTR._T_turb_des[15]}
eqns: {212}
*/
void sCO2PBRig_eqFunction_213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,213};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 213 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[15].nlsxOld[0] = data->simulationInfo->realParameter[68] /* powerBlock.HTR.T_turb_des[15] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 15);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,213};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 213 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[68] /* powerBlock.HTR.T_turb_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[15].nlsx[0];
  TRACE_POP
}

/*
equation index: 214
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[14]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,214};
  data->simulationInfo->realParameter[139] /* powerBlock.HTR.state_comp_des[14].p PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 215
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[14]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,215};
  data->simulationInfo->realParameter[169] /* powerBlock.HTR.state_turb_des[14].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 216
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[13]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,216};
  data->simulationInfo->realParameter[138] /* powerBlock.HTR.state_comp_des[13].p PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 217
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[13]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,217};
  data->simulationInfo->realParameter[168] /* powerBlock.HTR.state_turb_des[13].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 218
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[12]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,218};
  data->simulationInfo->realParameter[137] /* powerBlock.HTR.state_comp_des[12].p PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 219
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[12]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,219};
  data->simulationInfo->realParameter[167] /* powerBlock.HTR.state_turb_des[12].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 220
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[11]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,220};
  data->simulationInfo->realParameter[136] /* powerBlock.HTR.state_comp_des[11].p PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 221
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[11]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,221};
  data->simulationInfo->realParameter[166] /* powerBlock.HTR.state_turb_des[11].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 222
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[10]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,222};
  data->simulationInfo->realParameter[135] /* powerBlock.HTR.state_comp_des[10].p PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 223
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[10]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,223};
  data->simulationInfo->realParameter[165] /* powerBlock.HTR.state_turb_des[10].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 224
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[9]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,224};
  data->simulationInfo->realParameter[134] /* powerBlock.HTR.state_comp_des[9].p PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 225
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[9]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,225};
  data->simulationInfo->realParameter[164] /* powerBlock.HTR.state_turb_des[9].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 226
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[8]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,226};
  data->simulationInfo->realParameter[133] /* powerBlock.HTR.state_comp_des[8].p PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 227
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[8]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,227};
  data->simulationInfo->realParameter[163] /* powerBlock.HTR.state_turb_des[8].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 228
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[7]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,228};
  data->simulationInfo->realParameter[132] /* powerBlock.HTR.state_comp_des[7].p PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 229
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[7]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,229};
  data->simulationInfo->realParameter[162] /* powerBlock.HTR.state_turb_des[7].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 230
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[6]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,230};
  data->simulationInfo->realParameter[131] /* powerBlock.HTR.state_comp_des[6].p PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 231
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[6]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,231};
  data->simulationInfo->realParameter[161] /* powerBlock.HTR.state_turb_des[6].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 232
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[5]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,232};
  data->simulationInfo->realParameter[130] /* powerBlock.HTR.state_comp_des[5].p PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 233
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[5]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,233};
  data->simulationInfo->realParameter[160] /* powerBlock.HTR.state_turb_des[5].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 234
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[4]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,234};
  data->simulationInfo->realParameter[129] /* powerBlock.HTR.state_comp_des[4].p PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 235
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[4]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,235};
  data->simulationInfo->realParameter[159] /* powerBlock.HTR.state_turb_des[4].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 236
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[3]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,236};
  data->simulationInfo->realParameter[128] /* powerBlock.HTR.state_comp_des[3].p PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 237
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[3]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,237};
  data->simulationInfo->realParameter[158] /* powerBlock.HTR.state_turb_des[3].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 238
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[2]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,238};
  data->simulationInfo->realParameter[127] /* powerBlock.HTR.state_comp_des[2].p PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 239
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[2]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,239};
  data->simulationInfo->realParameter[157] /* powerBlock.HTR.state_turb_des[2].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 240
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[1]._p = powerBlock.HTR.p_in_comp_des
*/
void sCO2PBRig_eqFunction_240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,240};
  data->simulationInfo->realParameter[126] /* powerBlock.HTR.state_comp_des[1].p PARAM */ = data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 241
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[1]._p = powerBlock.HTR.p_in_turb_des
*/
void sCO2PBRig_eqFunction_241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,241};
  data->simulationInfo->realParameter[156] /* powerBlock.HTR.state_turb_des[1].p PARAM */ = data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_242(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_243(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_244(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_245(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_246(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_247(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_248(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_249(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_250(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_251(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_252(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_253(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_254(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_255(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_256(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_257(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_258(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_259(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_260(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_261(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_262(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_263(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_264(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_265(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_266(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_267(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_268(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_269(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_270(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_271(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_272(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_273(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_274(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_275(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_276(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_277(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_278(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_279(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_280(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_281(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_282(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_283(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_284(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_285(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_286(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_287(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_288(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_289(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_290(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_291(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_292(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_293(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_294(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_295(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_296(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_297(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_298(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_299(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_300(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_301(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_302(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_303(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_304(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_305(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_306(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_307(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_308(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_309(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_310(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_311(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_312(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_313(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_314(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_315(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_316(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_317(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_318(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_319(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_320(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_321(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_322(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_323(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_324(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_325(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_326(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_327(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_328(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_329(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_330(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_331(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_332(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_333(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_334(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_335(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_336(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_337(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_398(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_397(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_396(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_395(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_394(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_393(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_392(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_391(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_390(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_389(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_388(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_387(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_386(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_385(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_384(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_383(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_382(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_381(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_380(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_379(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_378(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_377(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_376(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_375(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_374(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_373(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_372(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_371(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_370(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_369(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_368(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_367(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_366(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_365(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_364(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_363(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_362(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_361(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_360(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_359(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_358(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_357(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_356(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_355(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_354(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_353(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_352(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_351(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_350(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_349(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_348(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_347(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_346(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_345(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_344(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_343(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_342(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_341(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_340(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_339(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_338(DATA*, threadData_t*);
/*
equation index: 399
indexNonlinear: 16
type: NONLINEAR

vars: {powerBlock._LTR._deltaT_des[14], powerBlock._LTR._T_comp_des[14], powerBlock._LTR._T_turb_des[13], powerBlock._LTR._T_comp_des[13], powerBlock._LTR._T_turb_des[12], powerBlock._LTR._T_comp_des[12], powerBlock._LTR._T_turb_des[11], powerBlock._LTR._T_comp_des[11], powerBlock._LTR._T_turb_des[10], powerBlock._LTR._T_comp_des[10], powerBlock._LTR._T_turb_des[9], powerBlock._LTR._T_comp_des[9], powerBlock._LTR._T_turb_des[8], powerBlock._LTR._T_comp_des[8], powerBlock._LTR._T_turb_des[7], powerBlock._LTR._T_comp_des[7], powerBlock._LTR._T_turb_des[6], powerBlock._LTR._T_comp_des[6], powerBlock._LTR._T_turb_des[5], powerBlock._LTR._T_comp_des[5], powerBlock._LTR._T_turb_des[4], powerBlock._LTR._T_comp_des[4], powerBlock._LTR._T_turb_des[3], powerBlock._LTR._T_comp_des[3], powerBlock._LTR._T_turb_des[2], powerBlock._LTR._T_comp_des[2], powerBlock._LTR._T_turb_des[15], powerBlock._LTR._T_comp_des[15], powerBlock._HTR._deltaT_des[1], powerBlock._HTR._T_comp_des[1], powerBlock._HTR._T_turb_des[2], powerBlock._HTR._T_comp_des[2], powerBlock._HTR._T_turb_des[3], powerBlock._HTR._T_comp_des[3], powerBlock._HTR._T_turb_des[4], powerBlock._HTR._T_comp_des[4], powerBlock._HTR._T_turb_des[5], powerBlock._HTR._T_comp_des[5], powerBlock._HTR._T_turb_des[6], powerBlock._HTR._T_comp_des[6], powerBlock._HTR._T_turb_des[7], powerBlock._HTR._T_comp_des[7], powerBlock._HTR._T_turb_des[8], powerBlock._HTR._T_comp_des[8], powerBlock._HTR._T_turb_des[9], powerBlock._HTR._T_comp_des[9], powerBlock._HTR._T_turb_des[10], powerBlock._HTR._T_comp_des[10], powerBlock._HTR._T_turb_des[11], powerBlock._HTR._T_comp_des[11], powerBlock._HTR._T_turb_des[12], powerBlock._HTR._T_comp_des[12], powerBlock._HTR._T_turb_des[13], powerBlock._HTR._T_comp_des[13], powerBlock._HTR._T_turb_des[14], powerBlock._HTR._T_comp_des[14], powerBlock._LTR._T_turb_des[1], powerBlock._HTR._Q_dis_des, powerBlock._LTR._Q_dis_des, powerBlock._HTR._T_comp_des[15], powerBlock._reCompressor._state_in_des._h}
eqns: {242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 260, 261, 262, 263, 264, 265, 266, 267, 268, 269, 270, 271, 272, 273, 274, 275, 276, 277, 278, 279, 280, 281, 282, 283, 284, 285, 286, 287, 288, 289, 290, 291, 292, 293, 294, 295, 296, 297, 298, 299, 300, 301, 302, 303, 304, 305, 306, 307, 308, 309, 310, 311, 312, 313, 314, 315, 316, 317, 318, 319, 320, 321, 322, 323, 324, 325, 326, 327, 328, 329, 330, 331, 332, 333, 334, 335, 336, 337, 398, 397, 396, 395, 394, 393, 392, 391, 390, 389, 388, 387, 386, 385, 384, 383, 382, 381, 380, 379, 378, 377, 376, 375, 374, 373, 372, 371, 370, 369, 368, 367, 366, 365, 364, 363, 362, 361, 360, 359, 358, 357, 356, 355, 354, 353, 352, 351, 350, 349, 348, 347, 346, 345, 344, 343, 342, 341, 340, 339, 338}
*/
void sCO2PBRig_eqFunction_399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,399};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 399 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[0] = data->simulationInfo->realParameter[232] /* powerBlock.LTR.deltaT_des[14] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[1] = data->simulationInfo->realParameter[187] /* powerBlock.LTR.T_comp_des[14] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[2] = data->simulationInfo->realParameter[201] /* powerBlock.LTR.T_turb_des[13] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[3] = data->simulationInfo->realParameter[186] /* powerBlock.LTR.T_comp_des[13] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[4] = data->simulationInfo->realParameter[200] /* powerBlock.LTR.T_turb_des[12] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[5] = data->simulationInfo->realParameter[185] /* powerBlock.LTR.T_comp_des[12] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[6] = data->simulationInfo->realParameter[199] /* powerBlock.LTR.T_turb_des[11] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[7] = data->simulationInfo->realParameter[184] /* powerBlock.LTR.T_comp_des[11] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[8] = data->simulationInfo->realParameter[198] /* powerBlock.LTR.T_turb_des[10] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[9] = data->simulationInfo->realParameter[183] /* powerBlock.LTR.T_comp_des[10] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[10] = data->simulationInfo->realParameter[197] /* powerBlock.LTR.T_turb_des[9] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[11] = data->simulationInfo->realParameter[182] /* powerBlock.LTR.T_comp_des[9] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[12] = data->simulationInfo->realParameter[196] /* powerBlock.LTR.T_turb_des[8] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[13] = data->simulationInfo->realParameter[181] /* powerBlock.LTR.T_comp_des[8] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[14] = data->simulationInfo->realParameter[195] /* powerBlock.LTR.T_turb_des[7] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[15] = data->simulationInfo->realParameter[180] /* powerBlock.LTR.T_comp_des[7] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[16] = data->simulationInfo->realParameter[194] /* powerBlock.LTR.T_turb_des[6] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[17] = data->simulationInfo->realParameter[179] /* powerBlock.LTR.T_comp_des[6] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[18] = data->simulationInfo->realParameter[193] /* powerBlock.LTR.T_turb_des[5] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[19] = data->simulationInfo->realParameter[178] /* powerBlock.LTR.T_comp_des[5] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[20] = data->simulationInfo->realParameter[192] /* powerBlock.LTR.T_turb_des[4] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[21] = data->simulationInfo->realParameter[177] /* powerBlock.LTR.T_comp_des[4] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[22] = data->simulationInfo->realParameter[191] /* powerBlock.LTR.T_turb_des[3] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[23] = data->simulationInfo->realParameter[176] /* powerBlock.LTR.T_comp_des[3] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[24] = data->simulationInfo->realParameter[190] /* powerBlock.LTR.T_turb_des[2] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[25] = data->simulationInfo->realParameter[175] /* powerBlock.LTR.T_comp_des[2] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[26] = data->simulationInfo->realParameter[203] /* powerBlock.LTR.T_turb_des[15] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[27] = data->simulationInfo->realParameter[188] /* powerBlock.LTR.T_comp_des[15] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[28] = data->simulationInfo->realParameter[84] /* powerBlock.HTR.deltaT_des[1] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[29] = data->simulationInfo->realParameter[39] /* powerBlock.HTR.T_comp_des[1] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[30] = data->simulationInfo->realParameter[55] /* powerBlock.HTR.T_turb_des[2] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[31] = data->simulationInfo->realParameter[40] /* powerBlock.HTR.T_comp_des[2] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[32] = data->simulationInfo->realParameter[56] /* powerBlock.HTR.T_turb_des[3] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[33] = data->simulationInfo->realParameter[41] /* powerBlock.HTR.T_comp_des[3] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[34] = data->simulationInfo->realParameter[57] /* powerBlock.HTR.T_turb_des[4] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[35] = data->simulationInfo->realParameter[42] /* powerBlock.HTR.T_comp_des[4] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[36] = data->simulationInfo->realParameter[58] /* powerBlock.HTR.T_turb_des[5] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[37] = data->simulationInfo->realParameter[43] /* powerBlock.HTR.T_comp_des[5] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[38] = data->simulationInfo->realParameter[59] /* powerBlock.HTR.T_turb_des[6] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[39] = data->simulationInfo->realParameter[44] /* powerBlock.HTR.T_comp_des[6] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[40] = data->simulationInfo->realParameter[60] /* powerBlock.HTR.T_turb_des[7] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[41] = data->simulationInfo->realParameter[45] /* powerBlock.HTR.T_comp_des[7] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[42] = data->simulationInfo->realParameter[61] /* powerBlock.HTR.T_turb_des[8] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[43] = data->simulationInfo->realParameter[46] /* powerBlock.HTR.T_comp_des[8] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[44] = data->simulationInfo->realParameter[62] /* powerBlock.HTR.T_turb_des[9] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[45] = data->simulationInfo->realParameter[47] /* powerBlock.HTR.T_comp_des[9] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[46] = data->simulationInfo->realParameter[63] /* powerBlock.HTR.T_turb_des[10] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[47] = data->simulationInfo->realParameter[48] /* powerBlock.HTR.T_comp_des[10] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[48] = data->simulationInfo->realParameter[64] /* powerBlock.HTR.T_turb_des[11] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[49] = data->simulationInfo->realParameter[49] /* powerBlock.HTR.T_comp_des[11] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[50] = data->simulationInfo->realParameter[65] /* powerBlock.HTR.T_turb_des[12] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[51] = data->simulationInfo->realParameter[50] /* powerBlock.HTR.T_comp_des[12] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[52] = data->simulationInfo->realParameter[66] /* powerBlock.HTR.T_turb_des[13] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[53] = data->simulationInfo->realParameter[51] /* powerBlock.HTR.T_comp_des[13] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[54] = data->simulationInfo->realParameter[67] /* powerBlock.HTR.T_turb_des[14] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[55] = data->simulationInfo->realParameter[52] /* powerBlock.HTR.T_comp_des[14] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[56] = data->simulationInfo->realParameter[189] /* powerBlock.LTR.T_turb_des[1] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[57] = data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[58] = data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[59] = data->simulationInfo->realParameter[53] /* powerBlock.HTR.T_comp_des[15] PARAM */;
  data->simulationInfo->nonlinearSystemData[16].nlsxOld[60] = data->simulationInfo->realParameter[634] /* powerBlock.reCompressor.state_in_des.h PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 16);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,399};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 399 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[232] /* powerBlock.LTR.deltaT_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[0];
  data->simulationInfo->realParameter[187] /* powerBlock.LTR.T_comp_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[1];
  data->simulationInfo->realParameter[201] /* powerBlock.LTR.T_turb_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[2];
  data->simulationInfo->realParameter[186] /* powerBlock.LTR.T_comp_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[3];
  data->simulationInfo->realParameter[200] /* powerBlock.LTR.T_turb_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[4];
  data->simulationInfo->realParameter[185] /* powerBlock.LTR.T_comp_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[5];
  data->simulationInfo->realParameter[199] /* powerBlock.LTR.T_turb_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[6];
  data->simulationInfo->realParameter[184] /* powerBlock.LTR.T_comp_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[7];
  data->simulationInfo->realParameter[198] /* powerBlock.LTR.T_turb_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[8];
  data->simulationInfo->realParameter[183] /* powerBlock.LTR.T_comp_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[9];
  data->simulationInfo->realParameter[197] /* powerBlock.LTR.T_turb_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[10];
  data->simulationInfo->realParameter[182] /* powerBlock.LTR.T_comp_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[11];
  data->simulationInfo->realParameter[196] /* powerBlock.LTR.T_turb_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[12];
  data->simulationInfo->realParameter[181] /* powerBlock.LTR.T_comp_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[13];
  data->simulationInfo->realParameter[195] /* powerBlock.LTR.T_turb_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[14];
  data->simulationInfo->realParameter[180] /* powerBlock.LTR.T_comp_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[15];
  data->simulationInfo->realParameter[194] /* powerBlock.LTR.T_turb_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[16];
  data->simulationInfo->realParameter[179] /* powerBlock.LTR.T_comp_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[17];
  data->simulationInfo->realParameter[193] /* powerBlock.LTR.T_turb_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[18];
  data->simulationInfo->realParameter[178] /* powerBlock.LTR.T_comp_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[19];
  data->simulationInfo->realParameter[192] /* powerBlock.LTR.T_turb_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[20];
  data->simulationInfo->realParameter[177] /* powerBlock.LTR.T_comp_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[21];
  data->simulationInfo->realParameter[191] /* powerBlock.LTR.T_turb_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[22];
  data->simulationInfo->realParameter[176] /* powerBlock.LTR.T_comp_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[23];
  data->simulationInfo->realParameter[190] /* powerBlock.LTR.T_turb_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[24];
  data->simulationInfo->realParameter[175] /* powerBlock.LTR.T_comp_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[25];
  data->simulationInfo->realParameter[203] /* powerBlock.LTR.T_turb_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[26];
  data->simulationInfo->realParameter[188] /* powerBlock.LTR.T_comp_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[27];
  data->simulationInfo->realParameter[84] /* powerBlock.HTR.deltaT_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[28];
  data->simulationInfo->realParameter[39] /* powerBlock.HTR.T_comp_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[29];
  data->simulationInfo->realParameter[55] /* powerBlock.HTR.T_turb_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[30];
  data->simulationInfo->realParameter[40] /* powerBlock.HTR.T_comp_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[31];
  data->simulationInfo->realParameter[56] /* powerBlock.HTR.T_turb_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[32];
  data->simulationInfo->realParameter[41] /* powerBlock.HTR.T_comp_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[33];
  data->simulationInfo->realParameter[57] /* powerBlock.HTR.T_turb_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[34];
  data->simulationInfo->realParameter[42] /* powerBlock.HTR.T_comp_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[35];
  data->simulationInfo->realParameter[58] /* powerBlock.HTR.T_turb_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[36];
  data->simulationInfo->realParameter[43] /* powerBlock.HTR.T_comp_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[37];
  data->simulationInfo->realParameter[59] /* powerBlock.HTR.T_turb_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[38];
  data->simulationInfo->realParameter[44] /* powerBlock.HTR.T_comp_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[39];
  data->simulationInfo->realParameter[60] /* powerBlock.HTR.T_turb_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[40];
  data->simulationInfo->realParameter[45] /* powerBlock.HTR.T_comp_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[41];
  data->simulationInfo->realParameter[61] /* powerBlock.HTR.T_turb_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[42];
  data->simulationInfo->realParameter[46] /* powerBlock.HTR.T_comp_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[43];
  data->simulationInfo->realParameter[62] /* powerBlock.HTR.T_turb_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[44];
  data->simulationInfo->realParameter[47] /* powerBlock.HTR.T_comp_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[45];
  data->simulationInfo->realParameter[63] /* powerBlock.HTR.T_turb_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[46];
  data->simulationInfo->realParameter[48] /* powerBlock.HTR.T_comp_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[47];
  data->simulationInfo->realParameter[64] /* powerBlock.HTR.T_turb_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[48];
  data->simulationInfo->realParameter[49] /* powerBlock.HTR.T_comp_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[49];
  data->simulationInfo->realParameter[65] /* powerBlock.HTR.T_turb_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[50];
  data->simulationInfo->realParameter[50] /* powerBlock.HTR.T_comp_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[51];
  data->simulationInfo->realParameter[66] /* powerBlock.HTR.T_turb_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[52];
  data->simulationInfo->realParameter[51] /* powerBlock.HTR.T_comp_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[53];
  data->simulationInfo->realParameter[67] /* powerBlock.HTR.T_turb_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[54];
  data->simulationInfo->realParameter[52] /* powerBlock.HTR.T_comp_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[55];
  data->simulationInfo->realParameter[189] /* powerBlock.LTR.T_turb_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[56];
  data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[57];
  data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[58];
  data->simulationInfo->realParameter[53] /* powerBlock.HTR.T_comp_des[15] PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[59];
  data->simulationInfo->realParameter[634] /* powerBlock.reCompressor.state_in_des.h PARAM */ = data->simulationInfo->nonlinearSystemData[16].nlsx[60];
  TRACE_POP
}

/*
equation index: 400
type: SIMPLE_ASSIGN
powerBlock._HTR._h_out_comp_des = powerBlock.HTR.state_comp_des[15].h
*/
void sCO2PBRig_eqFunction_400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,400};
  data->simulationInfo->realParameter[101] /* powerBlock.HTR.h_out_comp_des PARAM */ = data->simulationInfo->realParameter[125] /* powerBlock.HTR.state_comp_des[15].h PARAM */;
  TRACE_POP
}

/*
equation index: 401
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_in_CO2_des = powerBlock.HTR.h_out_comp_des
*/
void sCO2PBRig_eqFunction_401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,401};
  data->simulationInfo->realParameter[496] /* powerBlock.exchanger.h_in_CO2_des PARAM */ = data->simulationInfo->realParameter[101] /* powerBlock.HTR.h_out_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 402
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2_des[1]._h = powerBlock.exchanger.h_in_CO2_des
*/
void sCO2PBRig_eqFunction_402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,402};
  data->simulationInfo->realParameter[507] /* powerBlock.exchanger.state_CO2_des[1].h PARAM */ = data->simulationInfo->realParameter[496] /* powerBlock.exchanger.h_in_CO2_des PARAM */;
  TRACE_POP
}

/*
equation index: 403
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[1] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[1].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[1].p, powerBlock.exchanger.state_CO2_des[1].h, tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,403};
  data->simulationInfo->realParameter[481] /* powerBlock.exchanger.deltaT_des[1] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[552] /* powerBlock.exchanger.state_HTF_des[1].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[522] /* powerBlock.exchanger.state_CO2_des[1].p PARAM */, data->simulationInfo->realParameter[507] /* powerBlock.exchanger.state_CO2_des[1].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBRig_eqFunction_404(DATA*, threadData_t*);
/*
equation index: 405
indexNonlinear: 17
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[1]}
eqns: {404}
*/
void sCO2PBRig_eqFunction_405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,405};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 405 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[17].nlsxOld[0] = data->simulationInfo->realParameter[434] /* powerBlock.exchanger.T_CO2_des[1] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 17);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,405};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 405 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[434] /* powerBlock.exchanger.T_CO2_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[17].nlsx[0];
  TRACE_POP
}

void sCO2PBRig_eqFunction_419(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_418(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_417(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_416(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_415(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_414(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_413(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_412(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_411(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_410(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_409(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_408(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_407(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_406(DATA*, threadData_t*);
/*
equation index: 434
indexNonlinear: 18
type: NONLINEAR

vars: {powerBlock._exchanger._ratio_m_des, powerBlock._exchanger._state_CO2_des[14]._h, powerBlock._exchanger._state_CO2_des[13]._h, powerBlock._exchanger._state_CO2_des[12]._h, powerBlock._exchanger._state_CO2_des[11]._h, powerBlock._exchanger._state_CO2_des[10]._h, powerBlock._exchanger._state_CO2_des[9]._h, powerBlock._exchanger._state_CO2_des[8]._h, powerBlock._exchanger._state_CO2_des[7]._h, powerBlock._exchanger._state_CO2_des[6]._h, powerBlock._exchanger._state_CO2_des[5]._h, powerBlock._exchanger._state_CO2_des[4]._h, powerBlock._exchanger._state_CO2_des[3]._h, powerBlock._exchanger._state_CO2_des[2]._h}
eqns: {419, 418, 417, 416, 415, 414, 413, 412, 411, 410, 409, 408, 407, 406}
*/
void sCO2PBRig_eqFunction_434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,434};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 434 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[0] = data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */;
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[1] = data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */;
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[2] = data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */;
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[3] = data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */;
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[4] = data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */;
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[5] = data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */;
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[6] = data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */;
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[7] = data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */;
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[8] = data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */;
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[9] = data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */;
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[10] = data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */;
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[11] = data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */;
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[12] = data->simulationInfo->realParameter[509] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */;
  data->simulationInfo->nonlinearSystemData[18].nlsxOld[13] = data->simulationInfo->realParameter[508] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 18);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,434};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 434 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[0];
  data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[1];
  data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[2];
  data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[3];
  data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[4];
  data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[5];
  data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[6];
  data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[7];
  data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[8];
  data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[9];
  data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[10];
  data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[11];
  data->simulationInfo->realParameter[509] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[12];
  data->simulationInfo->realParameter[508] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */ = data->simulationInfo->nonlinearSystemData[18].nlsx[13];
  TRACE_POP
}

/*
equation index: 435
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[14] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[14].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[14].p, powerBlock.exchanger.state_CO2_des[14].h, tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,435};
  data->simulationInfo->realParameter[494] /* powerBlock.exchanger.deltaT_des[14] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[565] /* powerBlock.exchanger.state_HTF_des[14].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[535] /* powerBlock.exchanger.state_CO2_des[14].p PARAM */, data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBRig_eqFunction_436(DATA*, threadData_t*);
/*
equation index: 437
indexNonlinear: 19
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[14]}
eqns: {436}
*/
void sCO2PBRig_eqFunction_437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,437};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 437 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[19].nlsxOld[0] = data->simulationInfo->realParameter[447] /* powerBlock.exchanger.T_CO2_des[14] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 19);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,437};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 437 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[447] /* powerBlock.exchanger.T_CO2_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[19].nlsx[0];
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[13] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[13].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[13].p, powerBlock.exchanger.state_CO2_des[13].h, tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,438};
  data->simulationInfo->realParameter[493] /* powerBlock.exchanger.deltaT_des[13] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[564] /* powerBlock.exchanger.state_HTF_des[13].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[534] /* powerBlock.exchanger.state_CO2_des[13].p PARAM */, data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBRig_eqFunction_439(DATA*, threadData_t*);
/*
equation index: 440
indexNonlinear: 20
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[13]}
eqns: {439}
*/
void sCO2PBRig_eqFunction_440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,440};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 440 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[20].nlsxOld[0] = data->simulationInfo->realParameter[446] /* powerBlock.exchanger.T_CO2_des[13] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 20);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,440};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 440 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[446] /* powerBlock.exchanger.T_CO2_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[20].nlsx[0];
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[12] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[12].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[12].p, powerBlock.exchanger.state_CO2_des[12].h, tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,441};
  data->simulationInfo->realParameter[492] /* powerBlock.exchanger.deltaT_des[12] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[563] /* powerBlock.exchanger.state_HTF_des[12].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[533] /* powerBlock.exchanger.state_CO2_des[12].p PARAM */, data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBRig_eqFunction_442(DATA*, threadData_t*);
/*
equation index: 443
indexNonlinear: 21
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[12]}
eqns: {442}
*/
void sCO2PBRig_eqFunction_443(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[21].nlsxOld[0] = data->simulationInfo->realParameter[445] /* powerBlock.exchanger.T_CO2_des[12] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 21);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,443};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 443 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[445] /* powerBlock.exchanger.T_CO2_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[21].nlsx[0];
  TRACE_POP
}

/*
equation index: 444
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[11] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[11].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[11].p, powerBlock.exchanger.state_CO2_des[11].h, tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,444};
  data->simulationInfo->realParameter[491] /* powerBlock.exchanger.deltaT_des[11] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[562] /* powerBlock.exchanger.state_HTF_des[11].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[532] /* powerBlock.exchanger.state_CO2_des[11].p PARAM */, data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBRig_eqFunction_445(DATA*, threadData_t*);
/*
equation index: 446
indexNonlinear: 22
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[11]}
eqns: {445}
*/
void sCO2PBRig_eqFunction_446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,446};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 446 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[22].nlsxOld[0] = data->simulationInfo->realParameter[444] /* powerBlock.exchanger.T_CO2_des[11] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 22);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,446};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 446 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[444] /* powerBlock.exchanger.T_CO2_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[22].nlsx[0];
  TRACE_POP
}

/*
equation index: 447
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[10] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[10].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[10].p, powerBlock.exchanger.state_CO2_des[10].h, tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,447};
  data->simulationInfo->realParameter[490] /* powerBlock.exchanger.deltaT_des[10] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[561] /* powerBlock.exchanger.state_HTF_des[10].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[531] /* powerBlock.exchanger.state_CO2_des[10].p PARAM */, data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBRig_eqFunction_448(DATA*, threadData_t*);
/*
equation index: 449
indexNonlinear: 23
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[10]}
eqns: {448}
*/
void sCO2PBRig_eqFunction_449(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[23].nlsxOld[0] = data->simulationInfo->realParameter[443] /* powerBlock.exchanger.T_CO2_des[10] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 23);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,449};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 449 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[443] /* powerBlock.exchanger.T_CO2_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[23].nlsx[0];
  TRACE_POP
}

/*
equation index: 450
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[9] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[9].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[9].p, powerBlock.exchanger.state_CO2_des[9].h, tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,450};
  data->simulationInfo->realParameter[489] /* powerBlock.exchanger.deltaT_des[9] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[560] /* powerBlock.exchanger.state_HTF_des[9].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[530] /* powerBlock.exchanger.state_CO2_des[9].p PARAM */, data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBRig_eqFunction_451(DATA*, threadData_t*);
/*
equation index: 452
indexNonlinear: 24
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[9]}
eqns: {451}
*/
void sCO2PBRig_eqFunction_452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,452};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 452 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[24].nlsxOld[0] = data->simulationInfo->realParameter[442] /* powerBlock.exchanger.T_CO2_des[9] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 24);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,452};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 452 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[442] /* powerBlock.exchanger.T_CO2_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[24].nlsx[0];
  TRACE_POP
}

/*
equation index: 453
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[8] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[8].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[8].p, powerBlock.exchanger.state_CO2_des[8].h, tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,453};
  data->simulationInfo->realParameter[488] /* powerBlock.exchanger.deltaT_des[8] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[559] /* powerBlock.exchanger.state_HTF_des[8].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[529] /* powerBlock.exchanger.state_CO2_des[8].p PARAM */, data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBRig_eqFunction_454(DATA*, threadData_t*);
/*
equation index: 455
indexNonlinear: 25
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[8]}
eqns: {454}
*/
void sCO2PBRig_eqFunction_455(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[25].nlsxOld[0] = data->simulationInfo->realParameter[441] /* powerBlock.exchanger.T_CO2_des[8] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 25);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,455};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 455 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[441] /* powerBlock.exchanger.T_CO2_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[25].nlsx[0];
  TRACE_POP
}

/*
equation index: 456
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[7] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[7].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[7].p, powerBlock.exchanger.state_CO2_des[7].h, tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,456};
  data->simulationInfo->realParameter[487] /* powerBlock.exchanger.deltaT_des[7] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[558] /* powerBlock.exchanger.state_HTF_des[7].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[528] /* powerBlock.exchanger.state_CO2_des[7].p PARAM */, data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBRig_eqFunction_457(DATA*, threadData_t*);
/*
equation index: 458
indexNonlinear: 26
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[7]}
eqns: {457}
*/
void sCO2PBRig_eqFunction_458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,458};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 458 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[26].nlsxOld[0] = data->simulationInfo->realParameter[440] /* powerBlock.exchanger.T_CO2_des[7] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 26);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,458};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 458 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[440] /* powerBlock.exchanger.T_CO2_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[26].nlsx[0];
  TRACE_POP
}

/*
equation index: 459
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[6] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[6].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[6].p, powerBlock.exchanger.state_CO2_des[6].h, tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,459};
  data->simulationInfo->realParameter[486] /* powerBlock.exchanger.deltaT_des[6] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[557] /* powerBlock.exchanger.state_HTF_des[6].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[527] /* powerBlock.exchanger.state_CO2_des[6].p PARAM */, data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBRig_eqFunction_460(DATA*, threadData_t*);
/*
equation index: 461
indexNonlinear: 27
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[6]}
eqns: {460}
*/
void sCO2PBRig_eqFunction_461(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[27].nlsxOld[0] = data->simulationInfo->realParameter[439] /* powerBlock.exchanger.T_CO2_des[6] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 27);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,461};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 461 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[439] /* powerBlock.exchanger.T_CO2_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[27].nlsx[0];
  TRACE_POP
}

/*
equation index: 462
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[5] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[5].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[5].p, powerBlock.exchanger.state_CO2_des[5].h, tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,462};
  data->simulationInfo->realParameter[485] /* powerBlock.exchanger.deltaT_des[5] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[556] /* powerBlock.exchanger.state_HTF_des[5].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[526] /* powerBlock.exchanger.state_CO2_des[5].p PARAM */, data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBRig_eqFunction_463(DATA*, threadData_t*);
/*
equation index: 464
indexNonlinear: 28
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[5]}
eqns: {463}
*/
void sCO2PBRig_eqFunction_464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,464};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 464 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[28].nlsxOld[0] = data->simulationInfo->realParameter[438] /* powerBlock.exchanger.T_CO2_des[5] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 28);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,464};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 464 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[438] /* powerBlock.exchanger.T_CO2_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[28].nlsx[0];
  TRACE_POP
}

/*
equation index: 465
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[4] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[4].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[4].p, powerBlock.exchanger.state_CO2_des[4].h, tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,465};
  data->simulationInfo->realParameter[484] /* powerBlock.exchanger.deltaT_des[4] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[555] /* powerBlock.exchanger.state_HTF_des[4].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[525] /* powerBlock.exchanger.state_CO2_des[4].p PARAM */, data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBRig_eqFunction_466(DATA*, threadData_t*);
/*
equation index: 467
indexNonlinear: 29
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[4]}
eqns: {466}
*/
void sCO2PBRig_eqFunction_467(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[29].nlsxOld[0] = data->simulationInfo->realParameter[437] /* powerBlock.exchanger.T_CO2_des[4] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 29);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,467};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 467 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[437] /* powerBlock.exchanger.T_CO2_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[29].nlsx[0];
  TRACE_POP
}

/*
equation index: 468
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[3] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[3].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[3].p, powerBlock.exchanger.state_CO2_des[3].h, tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,468};
  data->simulationInfo->realParameter[483] /* powerBlock.exchanger.deltaT_des[3] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[554] /* powerBlock.exchanger.state_HTF_des[3].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[524] /* powerBlock.exchanger.state_CO2_des[3].p PARAM */, data->simulationInfo->realParameter[509] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBRig_eqFunction_469(DATA*, threadData_t*);
/*
equation index: 470
indexNonlinear: 30
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[3]}
eqns: {469}
*/
void sCO2PBRig_eqFunction_470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,470};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 470 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[30].nlsxOld[0] = data->simulationInfo->realParameter[436] /* powerBlock.exchanger.T_CO2_des[3] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 30);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,470};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 470 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[436] /* powerBlock.exchanger.T_CO2_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[30].nlsx[0];
  TRACE_POP
}

/*
equation index: 471
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT_des[2] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.state_HTF_des[2].h) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2_des[2].p, powerBlock.exchanger.state_CO2_des[2].h, tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,471};
  data->simulationInfo->realParameter[482] /* powerBlock.exchanger.deltaT_des[2] PARAM */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->simulationInfo->realParameter[553] /* powerBlock.exchanger.state_HTF_des[2].h PARAM */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->simulationInfo->realParameter[523] /* powerBlock.exchanger.state_CO2_des[2].p PARAM */, data->simulationInfo->realParameter[508] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}

void sCO2PBRig_eqFunction_472(DATA*, threadData_t*);
/*
equation index: 473
indexNonlinear: 31
type: NONLINEAR

vars: {powerBlock._exchanger._T_CO2_des[2]}
eqns: {472}
*/
void sCO2PBRig_eqFunction_473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,473};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 473 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[31].nlsxOld[0] = data->simulationInfo->realParameter[435] /* powerBlock.exchanger.T_CO2_des[2] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 31);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,473};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 473 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[435] /* powerBlock.exchanger.T_CO2_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[31].nlsx[0];
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
powerBlock._ratio_m_des_real = powerBlock.exchanger.ratio_m_des
*/
void sCO2PBRig_eqFunction_474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,474};
  data->simulationInfo->realParameter[618] /* powerBlock.ratio_m_des_real PARAM */ = data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
powerBlock._cooler._h_in_des = powerBlock.LTR.h_out_turb_des
*/
void sCO2PBRig_eqFunction_475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,475};
  data->simulationInfo->realParameter[389] /* powerBlock.cooler.h_in_des PARAM */ = data->simulationInfo->realParameter[237] /* powerBlock.LTR.h_out_turb_des PARAM */;
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des[1] = powerBlock.cooler.h_in_des
*/
void sCO2PBRig_eqFunction_476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,476};
  data->simulationInfo->realParameter[374] /* powerBlock.cooler.h_CO2_des[1] PARAM */ = data->simulationInfo->realParameter[389] /* powerBlock.cooler.h_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[1]._h = powerBlock.cooler.h_CO2_des[1]
*/
void sCO2PBRig_eqFunction_477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,477};
  data->simulationInfo->realParameter[394] /* powerBlock.cooler.state_des[1].h PARAM */ = data->simulationInfo->realParameter[374] /* powerBlock.cooler.h_CO2_des[1] PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_478(DATA*, threadData_t*);
/*
equation index: 479
indexNonlinear: 32
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[1]}
eqns: {478}
*/
void sCO2PBRig_eqFunction_479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,479};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 479 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[32].nlsxOld[0] = data->simulationInfo->realParameter[325] /* powerBlock.cooler.T_CO2_des[1] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 32);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,479};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 479 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[325] /* powerBlock.cooler.T_CO2_des[1] PARAM */ = data->simulationInfo->nonlinearSystemData[32].nlsx[0];
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[1] = powerBlock.cooler.T_CO2_des[1] - powerBlock.cooler.T_amb_des
*/
void sCO2PBRig_eqFunction_480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,480};
  data->simulationInfo->realParameter[358] /* powerBlock.cooler.deltaT_des[1] PARAM */ = data->simulationInfo->realParameter[325] /* powerBlock.cooler.T_CO2_des[1] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 508
type: LINEAR

<var>powerBlock._cooler._Q_dis_des</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void sCO2PBRig_eqFunction_508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,508};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 508 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 1, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,508};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 508 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */ = aux_x[0];
  TRACE_POP
}

/*
equation index: 509
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[2]._h = powerBlock.cooler.h_CO2_des[2]
*/
void sCO2PBRig_eqFunction_509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,509};
  data->simulationInfo->realParameter[395] /* powerBlock.cooler.state_des[2].h PARAM */ = data->simulationInfo->realParameter[375] /* powerBlock.cooler.h_CO2_des[2] PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_510(DATA*, threadData_t*);
/*
equation index: 511
indexNonlinear: 33
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[2]}
eqns: {510}
*/
void sCO2PBRig_eqFunction_511(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,511};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 511 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[33].nlsxOld[0] = data->simulationInfo->realParameter[326] /* powerBlock.cooler.T_CO2_des[2] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 33);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,511};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 511 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[326] /* powerBlock.cooler.T_CO2_des[2] PARAM */ = data->simulationInfo->nonlinearSystemData[33].nlsx[0];
  TRACE_POP
}

/*
equation index: 512
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[2] = powerBlock.cooler.T_CO2_des[2] - powerBlock.cooler.T_amb_des
*/
void sCO2PBRig_eqFunction_512(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,512};
  data->simulationInfo->realParameter[359] /* powerBlock.cooler.deltaT_des[2] PARAM */ = data->simulationInfo->realParameter[326] /* powerBlock.cooler.T_CO2_des[2] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 513
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[3]._h = powerBlock.cooler.h_CO2_des[3]
*/
void sCO2PBRig_eqFunction_513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,513};
  data->simulationInfo->realParameter[396] /* powerBlock.cooler.state_des[3].h PARAM */ = data->simulationInfo->realParameter[376] /* powerBlock.cooler.h_CO2_des[3] PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_514(DATA*, threadData_t*);
/*
equation index: 515
indexNonlinear: 34
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[3]}
eqns: {514}
*/
void sCO2PBRig_eqFunction_515(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,515};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 515 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[34].nlsxOld[0] = data->simulationInfo->realParameter[327] /* powerBlock.cooler.T_CO2_des[3] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 34);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,515};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 515 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[327] /* powerBlock.cooler.T_CO2_des[3] PARAM */ = data->simulationInfo->nonlinearSystemData[34].nlsx[0];
  TRACE_POP
}

/*
equation index: 516
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[3] = powerBlock.cooler.T_CO2_des[3] - powerBlock.cooler.T_amb_des
*/
void sCO2PBRig_eqFunction_516(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,516};
  data->simulationInfo->realParameter[360] /* powerBlock.cooler.deltaT_des[3] PARAM */ = data->simulationInfo->realParameter[327] /* powerBlock.cooler.T_CO2_des[3] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 517
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[4]._h = powerBlock.cooler.h_CO2_des[4]
*/
void sCO2PBRig_eqFunction_517(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,517};
  data->simulationInfo->realParameter[397] /* powerBlock.cooler.state_des[4].h PARAM */ = data->simulationInfo->realParameter[377] /* powerBlock.cooler.h_CO2_des[4] PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_518(DATA*, threadData_t*);
/*
equation index: 519
indexNonlinear: 35
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[4]}
eqns: {518}
*/
void sCO2PBRig_eqFunction_519(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,519};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 519 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[35].nlsxOld[0] = data->simulationInfo->realParameter[328] /* powerBlock.cooler.T_CO2_des[4] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 35);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,519};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 519 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[328] /* powerBlock.cooler.T_CO2_des[4] PARAM */ = data->simulationInfo->nonlinearSystemData[35].nlsx[0];
  TRACE_POP
}

/*
equation index: 520
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[4] = powerBlock.cooler.T_CO2_des[4] - powerBlock.cooler.T_amb_des
*/
void sCO2PBRig_eqFunction_520(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,520};
  data->simulationInfo->realParameter[361] /* powerBlock.cooler.deltaT_des[4] PARAM */ = data->simulationInfo->realParameter[328] /* powerBlock.cooler.T_CO2_des[4] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 521
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[5]._h = powerBlock.cooler.h_CO2_des[5]
*/
void sCO2PBRig_eqFunction_521(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,521};
  data->simulationInfo->realParameter[398] /* powerBlock.cooler.state_des[5].h PARAM */ = data->simulationInfo->realParameter[378] /* powerBlock.cooler.h_CO2_des[5] PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_522(DATA*, threadData_t*);
/*
equation index: 523
indexNonlinear: 36
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[5]}
eqns: {522}
*/
void sCO2PBRig_eqFunction_523(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,523};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 523 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[36].nlsxOld[0] = data->simulationInfo->realParameter[329] /* powerBlock.cooler.T_CO2_des[5] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 36);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,523};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 523 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[329] /* powerBlock.cooler.T_CO2_des[5] PARAM */ = data->simulationInfo->nonlinearSystemData[36].nlsx[0];
  TRACE_POP
}

/*
equation index: 524
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[5] = powerBlock.cooler.T_CO2_des[5] - powerBlock.cooler.T_amb_des
*/
void sCO2PBRig_eqFunction_524(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,524};
  data->simulationInfo->realParameter[362] /* powerBlock.cooler.deltaT_des[5] PARAM */ = data->simulationInfo->realParameter[329] /* powerBlock.cooler.T_CO2_des[5] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 525
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[6]._h = powerBlock.cooler.h_CO2_des[6]
*/
void sCO2PBRig_eqFunction_525(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,525};
  data->simulationInfo->realParameter[399] /* powerBlock.cooler.state_des[6].h PARAM */ = data->simulationInfo->realParameter[379] /* powerBlock.cooler.h_CO2_des[6] PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_526(DATA*, threadData_t*);
/*
equation index: 527
indexNonlinear: 37
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[6]}
eqns: {526}
*/
void sCO2PBRig_eqFunction_527(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,527};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 527 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[37].nlsxOld[0] = data->simulationInfo->realParameter[330] /* powerBlock.cooler.T_CO2_des[6] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 37);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,527};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 527 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[330] /* powerBlock.cooler.T_CO2_des[6] PARAM */ = data->simulationInfo->nonlinearSystemData[37].nlsx[0];
  TRACE_POP
}

/*
equation index: 528
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[6] = powerBlock.cooler.T_CO2_des[6] - powerBlock.cooler.T_amb_des
*/
void sCO2PBRig_eqFunction_528(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,528};
  data->simulationInfo->realParameter[363] /* powerBlock.cooler.deltaT_des[6] PARAM */ = data->simulationInfo->realParameter[330] /* powerBlock.cooler.T_CO2_des[6] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 529
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[7]._h = powerBlock.cooler.h_CO2_des[7]
*/
void sCO2PBRig_eqFunction_529(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,529};
  data->simulationInfo->realParameter[400] /* powerBlock.cooler.state_des[7].h PARAM */ = data->simulationInfo->realParameter[380] /* powerBlock.cooler.h_CO2_des[7] PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_530(DATA*, threadData_t*);
/*
equation index: 531
indexNonlinear: 38
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[7]}
eqns: {530}
*/
void sCO2PBRig_eqFunction_531(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,531};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 531 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[38].nlsxOld[0] = data->simulationInfo->realParameter[331] /* powerBlock.cooler.T_CO2_des[7] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 38);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,531};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 531 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[331] /* powerBlock.cooler.T_CO2_des[7] PARAM */ = data->simulationInfo->nonlinearSystemData[38].nlsx[0];
  TRACE_POP
}

/*
equation index: 532
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[7] = powerBlock.cooler.T_CO2_des[7] - powerBlock.cooler.T_amb_des
*/
void sCO2PBRig_eqFunction_532(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,532};
  data->simulationInfo->realParameter[364] /* powerBlock.cooler.deltaT_des[7] PARAM */ = data->simulationInfo->realParameter[331] /* powerBlock.cooler.T_CO2_des[7] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 533
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[8]._h = powerBlock.cooler.h_CO2_des[8]
*/
void sCO2PBRig_eqFunction_533(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,533};
  data->simulationInfo->realParameter[401] /* powerBlock.cooler.state_des[8].h PARAM */ = data->simulationInfo->realParameter[381] /* powerBlock.cooler.h_CO2_des[8] PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_534(DATA*, threadData_t*);
/*
equation index: 535
indexNonlinear: 39
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[8]}
eqns: {534}
*/
void sCO2PBRig_eqFunction_535(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,535};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 535 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[39].nlsxOld[0] = data->simulationInfo->realParameter[332] /* powerBlock.cooler.T_CO2_des[8] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 39);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,535};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 535 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[332] /* powerBlock.cooler.T_CO2_des[8] PARAM */ = data->simulationInfo->nonlinearSystemData[39].nlsx[0];
  TRACE_POP
}

/*
equation index: 536
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[8] = powerBlock.cooler.T_CO2_des[8] - powerBlock.cooler.T_amb_des
*/
void sCO2PBRig_eqFunction_536(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,536};
  data->simulationInfo->realParameter[365] /* powerBlock.cooler.deltaT_des[8] PARAM */ = data->simulationInfo->realParameter[332] /* powerBlock.cooler.T_CO2_des[8] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[9]._h = powerBlock.cooler.h_CO2_des[9]
*/
void sCO2PBRig_eqFunction_537(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,537};
  data->simulationInfo->realParameter[402] /* powerBlock.cooler.state_des[9].h PARAM */ = data->simulationInfo->realParameter[382] /* powerBlock.cooler.h_CO2_des[9] PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_538(DATA*, threadData_t*);
/*
equation index: 539
indexNonlinear: 40
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[9]}
eqns: {538}
*/
void sCO2PBRig_eqFunction_539(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,539};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 539 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[40].nlsxOld[0] = data->simulationInfo->realParameter[333] /* powerBlock.cooler.T_CO2_des[9] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 40);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,539};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 539 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[333] /* powerBlock.cooler.T_CO2_des[9] PARAM */ = data->simulationInfo->nonlinearSystemData[40].nlsx[0];
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[9] = powerBlock.cooler.T_CO2_des[9] - powerBlock.cooler.T_amb_des
*/
void sCO2PBRig_eqFunction_540(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,540};
  data->simulationInfo->realParameter[366] /* powerBlock.cooler.deltaT_des[9] PARAM */ = data->simulationInfo->realParameter[333] /* powerBlock.cooler.T_CO2_des[9] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 541
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[10]._h = powerBlock.cooler.h_CO2_des[10]
*/
void sCO2PBRig_eqFunction_541(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,541};
  data->simulationInfo->realParameter[403] /* powerBlock.cooler.state_des[10].h PARAM */ = data->simulationInfo->realParameter[383] /* powerBlock.cooler.h_CO2_des[10] PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_542(DATA*, threadData_t*);
/*
equation index: 543
indexNonlinear: 41
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[10]}
eqns: {542}
*/
void sCO2PBRig_eqFunction_543(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,543};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 543 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[41].nlsxOld[0] = data->simulationInfo->realParameter[334] /* powerBlock.cooler.T_CO2_des[10] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 41);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,543};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 543 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[334] /* powerBlock.cooler.T_CO2_des[10] PARAM */ = data->simulationInfo->nonlinearSystemData[41].nlsx[0];
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[10] = powerBlock.cooler.T_CO2_des[10] - powerBlock.cooler.T_amb_des
*/
void sCO2PBRig_eqFunction_544(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,544};
  data->simulationInfo->realParameter[367] /* powerBlock.cooler.deltaT_des[10] PARAM */ = data->simulationInfo->realParameter[334] /* powerBlock.cooler.T_CO2_des[10] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[11]._h = powerBlock.cooler.h_CO2_des[11]
*/
void sCO2PBRig_eqFunction_545(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,545};
  data->simulationInfo->realParameter[404] /* powerBlock.cooler.state_des[11].h PARAM */ = data->simulationInfo->realParameter[384] /* powerBlock.cooler.h_CO2_des[11] PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_546(DATA*, threadData_t*);
/*
equation index: 547
indexNonlinear: 42
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[11]}
eqns: {546}
*/
void sCO2PBRig_eqFunction_547(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,547};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 547 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[42].nlsxOld[0] = data->simulationInfo->realParameter[335] /* powerBlock.cooler.T_CO2_des[11] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 42);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,547};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 547 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[335] /* powerBlock.cooler.T_CO2_des[11] PARAM */ = data->simulationInfo->nonlinearSystemData[42].nlsx[0];
  TRACE_POP
}

/*
equation index: 548
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[11] = powerBlock.cooler.T_CO2_des[11] - powerBlock.cooler.T_amb_des
*/
void sCO2PBRig_eqFunction_548(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,548};
  data->simulationInfo->realParameter[368] /* powerBlock.cooler.deltaT_des[11] PARAM */ = data->simulationInfo->realParameter[335] /* powerBlock.cooler.T_CO2_des[11] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 549
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[12]._h = powerBlock.cooler.h_CO2_des[12]
*/
void sCO2PBRig_eqFunction_549(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,549};
  data->simulationInfo->realParameter[405] /* powerBlock.cooler.state_des[12].h PARAM */ = data->simulationInfo->realParameter[385] /* powerBlock.cooler.h_CO2_des[12] PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_550(DATA*, threadData_t*);
/*
equation index: 551
indexNonlinear: 43
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[12]}
eqns: {550}
*/
void sCO2PBRig_eqFunction_551(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[43].nlsxOld[0] = data->simulationInfo->realParameter[336] /* powerBlock.cooler.T_CO2_des[12] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 43);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,551};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 551 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[336] /* powerBlock.cooler.T_CO2_des[12] PARAM */ = data->simulationInfo->nonlinearSystemData[43].nlsx[0];
  TRACE_POP
}

/*
equation index: 552
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[12] = powerBlock.cooler.T_CO2_des[12] - powerBlock.cooler.T_amb_des
*/
void sCO2PBRig_eqFunction_552(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,552};
  data->simulationInfo->realParameter[369] /* powerBlock.cooler.deltaT_des[12] PARAM */ = data->simulationInfo->realParameter[336] /* powerBlock.cooler.T_CO2_des[12] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 553
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[13]._h = powerBlock.cooler.h_CO2_des[13]
*/
void sCO2PBRig_eqFunction_553(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,553};
  data->simulationInfo->realParameter[406] /* powerBlock.cooler.state_des[13].h PARAM */ = data->simulationInfo->realParameter[386] /* powerBlock.cooler.h_CO2_des[13] PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_554(DATA*, threadData_t*);
/*
equation index: 555
indexNonlinear: 44
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[13]}
eqns: {554}
*/
void sCO2PBRig_eqFunction_555(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[44].nlsxOld[0] = data->simulationInfo->realParameter[337] /* powerBlock.cooler.T_CO2_des[13] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 44);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,555};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 555 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[337] /* powerBlock.cooler.T_CO2_des[13] PARAM */ = data->simulationInfo->nonlinearSystemData[44].nlsx[0];
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[13] = powerBlock.cooler.T_CO2_des[13] - powerBlock.cooler.T_amb_des
*/
void sCO2PBRig_eqFunction_556(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,556};
  data->simulationInfo->realParameter[370] /* powerBlock.cooler.deltaT_des[13] PARAM */ = data->simulationInfo->realParameter[337] /* powerBlock.cooler.T_CO2_des[13] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
powerBlock._cooler._state_des[14]._h = powerBlock.cooler.h_CO2_des[14]
*/
void sCO2PBRig_eqFunction_557(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,557};
  data->simulationInfo->realParameter[407] /* powerBlock.cooler.state_des[14].h PARAM */ = data->simulationInfo->realParameter[387] /* powerBlock.cooler.h_CO2_des[14] PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_558(DATA*, threadData_t*);
/*
equation index: 559
indexNonlinear: 45
type: NONLINEAR

vars: {powerBlock._cooler._T_CO2_des[14]}
eqns: {558}
*/
void sCO2PBRig_eqFunction_559(DATA *data, threadData_t *threadData)
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
  data->simulationInfo->nonlinearSystemData[45].nlsxOld[0] = data->simulationInfo->realParameter[338] /* powerBlock.cooler.T_CO2_des[14] PARAM */;
  retValue = solve_nonlinear_system(data, threadData, 45);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,559};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 559 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[338] /* powerBlock.cooler.T_CO2_des[14] PARAM */ = data->simulationInfo->nonlinearSystemData[45].nlsx[0];
  TRACE_POP
}

/*
equation index: 560
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT_des[14] = powerBlock.cooler.T_CO2_des[14] - powerBlock.cooler.T_amb_des
*/
void sCO2PBRig_eqFunction_560(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,560};
  data->simulationInfo->realParameter[371] /* powerBlock.cooler.deltaT_des[14] PARAM */ = data->simulationInfo->realParameter[338] /* powerBlock.cooler.T_CO2_des[14] PARAM */ - data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 577
type: LINEAR

<var>powerBlock._LTR._m_turb_des</var>
<row>

</row>
<matrix>
</matrix>
*/
OMC_DISABLE_OPT
void sCO2PBRig_eqFunction_577(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,577};
  /* Linear equation system */
  int retValue;
  double aux_x[1] = { data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */ };
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving linear system 577 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  
  retValue = solve_linear_system(data, threadData, 2, &aux_x[0]);
  
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,577};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving linear system 577 failed at time=%.15g.\nFor more information please use -lv LOG_LS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */ = aux_x[0];
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
powerBlock._reCompressor._diam_rotor = 1.259921049894873 * (powerBlock.reCompressor.m_des / (powerBlock.reCompressor.phi_opt * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.reCompressor.state_in_des.p, powerBlock.reCompressor.state_in_des.h, tableIDd_p_h) * powerBlock.reCompressor.N_design)) ^ 0.3333333333333333
*/
void sCO2PBRig_eqFunction_578(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,578};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[628] /* powerBlock.reCompressor.m_des PARAM */,((data->simulationInfo->realParameter[632] /* powerBlock.reCompressor.phi_opt PARAM */) * (omc_SolarTherm_Media_CO2_CO2__utilities_rho__p__h(threadData, data->simulationInfo->realParameter[635] /* powerBlock.reCompressor.state_in_des.p PARAM */, data->simulationInfo->realParameter[634] /* powerBlock.reCompressor.state_in_des.h PARAM */, data->simulationInfo->extObjs[37]))) * (data->simulationInfo->realParameter[619] /* powerBlock.reCompressor.N_design PARAM */),"powerBlock.reCompressor.phi_opt * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.reCompressor.state_in_des.p, powerBlock.reCompressor.state_in_des.h, tableIDd_p_h) * powerBlock.reCompressor.N_design",equationIndexes);
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
  data->simulationInfo->realParameter[624] /* powerBlock.reCompressor.diam_rotor PARAM */ = (1.259921049894873) * (tmp2);
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
powerBlock._reCompressor._tipSpeed = 0.5 * powerBlock.reCompressor.diam_rotor * powerBlock.reCompressor.N_design
*/
void sCO2PBRig_eqFunction_579(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,579};
  data->simulationInfo->realParameter[638] /* powerBlock.reCompressor.tipSpeed PARAM */ = (0.5) * ((data->simulationInfo->realParameter[624] /* powerBlock.reCompressor.diam_rotor PARAM */) * (data->simulationInfo->realParameter[619] /* powerBlock.reCompressor.N_design PARAM */));
  TRACE_POP
}

/*
equation index: 580
type: SIMPLE_ASSIGN
powerBlock._reCompressor._psi_des = (powerBlock.reCompressor.state_isen_des.h - powerBlock.reCompressor.state_in_des.h) / powerBlock.reCompressor.tipSpeed ^ 2.0
*/
void sCO2PBRig_eqFunction_580(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,580};
  modelica_real tmp7;
  tmp7 = data->simulationInfo->realParameter[638] /* powerBlock.reCompressor.tipSpeed PARAM */;
  data->simulationInfo->realParameter[633] /* powerBlock.reCompressor.psi_des PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[636] /* powerBlock.reCompressor.state_isen_des.h PARAM */ - data->simulationInfo->realParameter[634] /* powerBlock.reCompressor.state_in_des.h PARAM */,(tmp7 * tmp7),"powerBlock.reCompressor.tipSpeed ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 581
type: SIMPLE_ASSIGN
powerBlock._LTR._Q_HX_des = 14.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_581(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,581};
  data->simulationInfo->realParameter[172] /* powerBlock.LTR.Q_HX_des PARAM */ = (14.0) * ((data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */));
  TRACE_POP
}

/*
equation index: 582
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[1] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[2] + powerBlock.LTR.deltaT_des[1])
*/
void sCO2PBRig_eqFunction_582(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,582};
  data->simulationInfo->realParameter[205] /* powerBlock.LTR.UA_dis[1] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[220] /* powerBlock.LTR.deltaT_des[2] PARAM */ + data->simulationInfo->realParameter[219] /* powerBlock.LTR.deltaT_des[1] PARAM */,"powerBlock.LTR.deltaT_des[2] + powerBlock.LTR.deltaT_des[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 583
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[2] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[3] + powerBlock.LTR.deltaT_des[2])
*/
void sCO2PBRig_eqFunction_583(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,583};
  data->simulationInfo->realParameter[206] /* powerBlock.LTR.UA_dis[2] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[221] /* powerBlock.LTR.deltaT_des[3] PARAM */ + data->simulationInfo->realParameter[220] /* powerBlock.LTR.deltaT_des[2] PARAM */,"powerBlock.LTR.deltaT_des[3] + powerBlock.LTR.deltaT_des[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 584
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[3] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[4] + powerBlock.LTR.deltaT_des[3])
*/
void sCO2PBRig_eqFunction_584(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,584};
  data->simulationInfo->realParameter[207] /* powerBlock.LTR.UA_dis[3] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[222] /* powerBlock.LTR.deltaT_des[4] PARAM */ + data->simulationInfo->realParameter[221] /* powerBlock.LTR.deltaT_des[3] PARAM */,"powerBlock.LTR.deltaT_des[4] + powerBlock.LTR.deltaT_des[3]",equationIndexes);
  TRACE_POP
}

/*
equation index: 585
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[4] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[5] + powerBlock.LTR.deltaT_des[4])
*/
void sCO2PBRig_eqFunction_585(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,585};
  data->simulationInfo->realParameter[208] /* powerBlock.LTR.UA_dis[4] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[223] /* powerBlock.LTR.deltaT_des[5] PARAM */ + data->simulationInfo->realParameter[222] /* powerBlock.LTR.deltaT_des[4] PARAM */,"powerBlock.LTR.deltaT_des[5] + powerBlock.LTR.deltaT_des[4]",equationIndexes);
  TRACE_POP
}

/*
equation index: 586
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[5] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[6] + powerBlock.LTR.deltaT_des[5])
*/
void sCO2PBRig_eqFunction_586(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,586};
  data->simulationInfo->realParameter[209] /* powerBlock.LTR.UA_dis[5] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[224] /* powerBlock.LTR.deltaT_des[6] PARAM */ + data->simulationInfo->realParameter[223] /* powerBlock.LTR.deltaT_des[5] PARAM */,"powerBlock.LTR.deltaT_des[6] + powerBlock.LTR.deltaT_des[5]",equationIndexes);
  TRACE_POP
}

/*
equation index: 587
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[6] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[7] + powerBlock.LTR.deltaT_des[6])
*/
void sCO2PBRig_eqFunction_587(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,587};
  data->simulationInfo->realParameter[210] /* powerBlock.LTR.UA_dis[6] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[225] /* powerBlock.LTR.deltaT_des[7] PARAM */ + data->simulationInfo->realParameter[224] /* powerBlock.LTR.deltaT_des[6] PARAM */,"powerBlock.LTR.deltaT_des[7] + powerBlock.LTR.deltaT_des[6]",equationIndexes);
  TRACE_POP
}

/*
equation index: 588
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[7] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[8] + powerBlock.LTR.deltaT_des[7])
*/
void sCO2PBRig_eqFunction_588(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,588};
  data->simulationInfo->realParameter[211] /* powerBlock.LTR.UA_dis[7] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[226] /* powerBlock.LTR.deltaT_des[8] PARAM */ + data->simulationInfo->realParameter[225] /* powerBlock.LTR.deltaT_des[7] PARAM */,"powerBlock.LTR.deltaT_des[8] + powerBlock.LTR.deltaT_des[7]",equationIndexes);
  TRACE_POP
}

/*
equation index: 589
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[8] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[9] + powerBlock.LTR.deltaT_des[8])
*/
void sCO2PBRig_eqFunction_589(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,589};
  data->simulationInfo->realParameter[212] /* powerBlock.LTR.UA_dis[8] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[227] /* powerBlock.LTR.deltaT_des[9] PARAM */ + data->simulationInfo->realParameter[226] /* powerBlock.LTR.deltaT_des[8] PARAM */,"powerBlock.LTR.deltaT_des[9] + powerBlock.LTR.deltaT_des[8]",equationIndexes);
  TRACE_POP
}

/*
equation index: 590
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[9] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[10] + powerBlock.LTR.deltaT_des[9])
*/
void sCO2PBRig_eqFunction_590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,590};
  data->simulationInfo->realParameter[213] /* powerBlock.LTR.UA_dis[9] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[228] /* powerBlock.LTR.deltaT_des[10] PARAM */ + data->simulationInfo->realParameter[227] /* powerBlock.LTR.deltaT_des[9] PARAM */,"powerBlock.LTR.deltaT_des[10] + powerBlock.LTR.deltaT_des[9]",equationIndexes);
  TRACE_POP
}

/*
equation index: 591
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[10] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[11] + powerBlock.LTR.deltaT_des[10])
*/
void sCO2PBRig_eqFunction_591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,591};
  data->simulationInfo->realParameter[214] /* powerBlock.LTR.UA_dis[10] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[229] /* powerBlock.LTR.deltaT_des[11] PARAM */ + data->simulationInfo->realParameter[228] /* powerBlock.LTR.deltaT_des[10] PARAM */,"powerBlock.LTR.deltaT_des[11] + powerBlock.LTR.deltaT_des[10]",equationIndexes);
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[11] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[12] + powerBlock.LTR.deltaT_des[11])
*/
void sCO2PBRig_eqFunction_592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,592};
  data->simulationInfo->realParameter[215] /* powerBlock.LTR.UA_dis[11] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[230] /* powerBlock.LTR.deltaT_des[12] PARAM */ + data->simulationInfo->realParameter[229] /* powerBlock.LTR.deltaT_des[11] PARAM */,"powerBlock.LTR.deltaT_des[12] + powerBlock.LTR.deltaT_des[11]",equationIndexes);
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[12] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[13] + powerBlock.LTR.deltaT_des[12])
*/
void sCO2PBRig_eqFunction_593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,593};
  data->simulationInfo->realParameter[216] /* powerBlock.LTR.UA_dis[12] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[231] /* powerBlock.LTR.deltaT_des[13] PARAM */ + data->simulationInfo->realParameter[230] /* powerBlock.LTR.deltaT_des[12] PARAM */,"powerBlock.LTR.deltaT_des[13] + powerBlock.LTR.deltaT_des[12]",equationIndexes);
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
powerBlock._turbine._A_nozzle = powerBlock.turbine.m_des / (powerBlock.turbine.C_spouting_des * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.turbine.state_out_des.p, powerBlock.turbine.state_out_des.h, tableIDd_p_h))
*/
void sCO2PBRig_eqFunction_594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,594};
  data->simulationInfo->realParameter[643] /* powerBlock.turbine.A_nozzle PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[653] /* powerBlock.turbine.m_des PARAM */,(data->simulationInfo->realParameter[644] /* powerBlock.turbine.C_spouting_des PARAM */) * (omc_SolarTherm_Media_CO2_CO2__utilities_rho__p__h(threadData, data->simulationInfo->realParameter[661] /* powerBlock.turbine.state_out_des.p PARAM */, data->simulationInfo->realParameter[660] /* powerBlock.turbine.state_out_des.h PARAM */, data->simulationInfo->extObjs[37])),"powerBlock.turbine.C_spouting_des * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.turbine.state_out_des.p, powerBlock.turbine.state_out_des.h, tableIDd_p_h)",equationIndexes);
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
powerBlock._C_turbine = powerBlock.pri_turbine * ((-0.001) * powerBlock.turbine.W_turb_des) ^ 0.5886
*/
void sCO2PBRig_eqFunction_595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,595};
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  tmp8 = (-0.001) * (data->simulationInfo->realParameter[648] /* powerBlock.turbine.W_turb_des PARAM */);
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
  data->simulationInfo->realParameter[35] /* powerBlock.C_turbine PARAM */ = (data->simulationInfo->realParameter[616] /* powerBlock.pri_turbine PARAM */) * (tmp10);
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
powerBlock._exchanger._m_CO2_des = powerBlock.turbine.m_des
*/
void sCO2PBRig_eqFunction_596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,596};
  data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */ = data->simulationInfo->realParameter[653] /* powerBlock.turbine.m_des PARAM */;
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
powerBlock._exchanger._m_HTF_des = powerBlock.exchanger.m_CO2_des / powerBlock.exchanger.ratio_m_des
*/
void sCO2PBRig_eqFunction_597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,597};
  data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */,"powerBlock.exchanger.ratio_m_des",equationIndexes);
  TRACE_POP
}

/*
equation index: 598
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[1] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[1] + powerBlock.exchanger.deltaT_des[2])
*/
void sCO2PBRig_eqFunction_598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,598};
  data->simulationInfo->realParameter[467] /* powerBlock.exchanger.UA_HX_dis[1] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[481] /* powerBlock.exchanger.deltaT_des[1] PARAM */ + data->simulationInfo->realParameter[482] /* powerBlock.exchanger.deltaT_des[2] PARAM */,"powerBlock.exchanger.deltaT_des[1] + powerBlock.exchanger.deltaT_des[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 599
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[2] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[2] + powerBlock.exchanger.deltaT_des[3])
*/
void sCO2PBRig_eqFunction_599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,599};
  data->simulationInfo->realParameter[468] /* powerBlock.exchanger.UA_HX_dis[2] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[482] /* powerBlock.exchanger.deltaT_des[2] PARAM */ + data->simulationInfo->realParameter[483] /* powerBlock.exchanger.deltaT_des[3] PARAM */,"powerBlock.exchanger.deltaT_des[2] + powerBlock.exchanger.deltaT_des[3]",equationIndexes);
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[3] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[3] + powerBlock.exchanger.deltaT_des[4])
*/
void sCO2PBRig_eqFunction_600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,600};
  data->simulationInfo->realParameter[469] /* powerBlock.exchanger.UA_HX_dis[3] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[483] /* powerBlock.exchanger.deltaT_des[3] PARAM */ + data->simulationInfo->realParameter[484] /* powerBlock.exchanger.deltaT_des[4] PARAM */,"powerBlock.exchanger.deltaT_des[3] + powerBlock.exchanger.deltaT_des[4]",equationIndexes);
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[4] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[4] + powerBlock.exchanger.deltaT_des[5])
*/
void sCO2PBRig_eqFunction_601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,601};
  data->simulationInfo->realParameter[470] /* powerBlock.exchanger.UA_HX_dis[4] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[484] /* powerBlock.exchanger.deltaT_des[4] PARAM */ + data->simulationInfo->realParameter[485] /* powerBlock.exchanger.deltaT_des[5] PARAM */,"powerBlock.exchanger.deltaT_des[4] + powerBlock.exchanger.deltaT_des[5]",equationIndexes);
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[5] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[5] + powerBlock.exchanger.deltaT_des[6])
*/
void sCO2PBRig_eqFunction_602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,602};
  data->simulationInfo->realParameter[471] /* powerBlock.exchanger.UA_HX_dis[5] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[485] /* powerBlock.exchanger.deltaT_des[5] PARAM */ + data->simulationInfo->realParameter[486] /* powerBlock.exchanger.deltaT_des[6] PARAM */,"powerBlock.exchanger.deltaT_des[5] + powerBlock.exchanger.deltaT_des[6]",equationIndexes);
  TRACE_POP
}

/*
equation index: 603
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[6] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[6] + powerBlock.exchanger.deltaT_des[7])
*/
void sCO2PBRig_eqFunction_603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,603};
  data->simulationInfo->realParameter[472] /* powerBlock.exchanger.UA_HX_dis[6] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[486] /* powerBlock.exchanger.deltaT_des[6] PARAM */ + data->simulationInfo->realParameter[487] /* powerBlock.exchanger.deltaT_des[7] PARAM */,"powerBlock.exchanger.deltaT_des[6] + powerBlock.exchanger.deltaT_des[7]",equationIndexes);
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[7] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[7] + powerBlock.exchanger.deltaT_des[8])
*/
void sCO2PBRig_eqFunction_604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,604};
  data->simulationInfo->realParameter[473] /* powerBlock.exchanger.UA_HX_dis[7] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[487] /* powerBlock.exchanger.deltaT_des[7] PARAM */ + data->simulationInfo->realParameter[488] /* powerBlock.exchanger.deltaT_des[8] PARAM */,"powerBlock.exchanger.deltaT_des[7] + powerBlock.exchanger.deltaT_des[8]",equationIndexes);
  TRACE_POP
}

/*
equation index: 605
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[8] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[8] + powerBlock.exchanger.deltaT_des[9])
*/
void sCO2PBRig_eqFunction_605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,605};
  data->simulationInfo->realParameter[474] /* powerBlock.exchanger.UA_HX_dis[8] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[488] /* powerBlock.exchanger.deltaT_des[8] PARAM */ + data->simulationInfo->realParameter[489] /* powerBlock.exchanger.deltaT_des[9] PARAM */,"powerBlock.exchanger.deltaT_des[8] + powerBlock.exchanger.deltaT_des[9]",equationIndexes);
  TRACE_POP
}

/*
equation index: 606
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[9] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[9] + powerBlock.exchanger.deltaT_des[10])
*/
void sCO2PBRig_eqFunction_606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,606};
  data->simulationInfo->realParameter[475] /* powerBlock.exchanger.UA_HX_dis[9] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[489] /* powerBlock.exchanger.deltaT_des[9] PARAM */ + data->simulationInfo->realParameter[490] /* powerBlock.exchanger.deltaT_des[10] PARAM */,"powerBlock.exchanger.deltaT_des[9] + powerBlock.exchanger.deltaT_des[10]",equationIndexes);
  TRACE_POP
}

/*
equation index: 607
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[10] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[10] + powerBlock.exchanger.deltaT_des[11])
*/
void sCO2PBRig_eqFunction_607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,607};
  data->simulationInfo->realParameter[476] /* powerBlock.exchanger.UA_HX_dis[10] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[490] /* powerBlock.exchanger.deltaT_des[10] PARAM */ + data->simulationInfo->realParameter[491] /* powerBlock.exchanger.deltaT_des[11] PARAM */,"powerBlock.exchanger.deltaT_des[10] + powerBlock.exchanger.deltaT_des[11]",equationIndexes);
  TRACE_POP
}

/*
equation index: 608
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[11] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[11] + powerBlock.exchanger.deltaT_des[12])
*/
void sCO2PBRig_eqFunction_608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,608};
  data->simulationInfo->realParameter[477] /* powerBlock.exchanger.UA_HX_dis[11] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[491] /* powerBlock.exchanger.deltaT_des[11] PARAM */ + data->simulationInfo->realParameter[492] /* powerBlock.exchanger.deltaT_des[12] PARAM */,"powerBlock.exchanger.deltaT_des[11] + powerBlock.exchanger.deltaT_des[12]",equationIndexes);
  TRACE_POP
}

/*
equation index: 609
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[12] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[12] + powerBlock.exchanger.deltaT_des[13])
*/
void sCO2PBRig_eqFunction_609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,609};
  data->simulationInfo->realParameter[478] /* powerBlock.exchanger.UA_HX_dis[12] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[492] /* powerBlock.exchanger.deltaT_des[12] PARAM */ + data->simulationInfo->realParameter[493] /* powerBlock.exchanger.deltaT_des[13] PARAM */,"powerBlock.exchanger.deltaT_des[12] + powerBlock.exchanger.deltaT_des[13]",equationIndexes);
  TRACE_POP
}

/*
equation index: 610
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[13] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[13] + powerBlock.exchanger.deltaT_des[14])
*/
void sCO2PBRig_eqFunction_610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,610};
  data->simulationInfo->realParameter[479] /* powerBlock.exchanger.UA_HX_dis[13] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[493] /* powerBlock.exchanger.deltaT_des[13] PARAM */ + data->simulationInfo->realParameter[494] /* powerBlock.exchanger.deltaT_des[14] PARAM */,"powerBlock.exchanger.deltaT_des[13] + powerBlock.exchanger.deltaT_des[14]",equationIndexes);
  TRACE_POP
}

/*
equation index: 611
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX_dis[14] = 2.0 * powerBlock.exchanger.m_HTF_des * powerBlock.exchanger.Q_HX_des / (powerBlock.exchanger.deltaT_des[14] + powerBlock.exchanger.deltaT_des[15])
*/
void sCO2PBRig_eqFunction_611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,611};
  data->simulationInfo->realParameter[480] /* powerBlock.exchanger.UA_HX_dis[14] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */) * (data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */)),data->simulationInfo->realParameter[494] /* powerBlock.exchanger.deltaT_des[14] PARAM */ + data->simulationInfo->realParameter[495] /* powerBlock.exchanger.deltaT_des[15] PARAM */,"powerBlock.exchanger.deltaT_des[14] + powerBlock.exchanger.deltaT_des[15]",equationIndexes);
  TRACE_POP
}

/*
equation index: 612
type: SIMPLE_ASSIGN
powerBlock._exchanger._UA_HX = powerBlock.exchanger.UA_HX_dis[1] + powerBlock.exchanger.UA_HX_dis[2] + powerBlock.exchanger.UA_HX_dis[3] + powerBlock.exchanger.UA_HX_dis[4] + powerBlock.exchanger.UA_HX_dis[5] + powerBlock.exchanger.UA_HX_dis[6] + powerBlock.exchanger.UA_HX_dis[7] + powerBlock.exchanger.UA_HX_dis[8] + powerBlock.exchanger.UA_HX_dis[9] + powerBlock.exchanger.UA_HX_dis[10] + powerBlock.exchanger.UA_HX_dis[11] + powerBlock.exchanger.UA_HX_dis[12] + powerBlock.exchanger.UA_HX_dis[13] + powerBlock.exchanger.UA_HX_dis[14]
*/
void sCO2PBRig_eqFunction_612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,612};
  data->simulationInfo->realParameter[466] /* powerBlock.exchanger.UA_HX PARAM */ = data->simulationInfo->realParameter[467] /* powerBlock.exchanger.UA_HX_dis[1] PARAM */ + data->simulationInfo->realParameter[468] /* powerBlock.exchanger.UA_HX_dis[2] PARAM */ + data->simulationInfo->realParameter[469] /* powerBlock.exchanger.UA_HX_dis[3] PARAM */ + data->simulationInfo->realParameter[470] /* powerBlock.exchanger.UA_HX_dis[4] PARAM */ + data->simulationInfo->realParameter[471] /* powerBlock.exchanger.UA_HX_dis[5] PARAM */ + data->simulationInfo->realParameter[472] /* powerBlock.exchanger.UA_HX_dis[6] PARAM */ + data->simulationInfo->realParameter[473] /* powerBlock.exchanger.UA_HX_dis[7] PARAM */ + data->simulationInfo->realParameter[474] /* powerBlock.exchanger.UA_HX_dis[8] PARAM */ + data->simulationInfo->realParameter[475] /* powerBlock.exchanger.UA_HX_dis[9] PARAM */ + data->simulationInfo->realParameter[476] /* powerBlock.exchanger.UA_HX_dis[10] PARAM */ + data->simulationInfo->realParameter[477] /* powerBlock.exchanger.UA_HX_dis[11] PARAM */ + data->simulationInfo->realParameter[478] /* powerBlock.exchanger.UA_HX_dis[12] PARAM */ + data->simulationInfo->realParameter[479] /* powerBlock.exchanger.UA_HX_dis[13] PARAM */ + data->simulationInfo->realParameter[480] /* powerBlock.exchanger.UA_HX_dis[14] PARAM */;
  TRACE_POP
}

/*
equation index: 613
type: SIMPLE_ASSIGN
powerBlock._m_HTF_des = powerBlock.exchanger.m_HTF_des
*/
void sCO2PBRig_eqFunction_613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,613};
  data->simulationInfo->realParameter[586] /* powerBlock.m_HTF_des PARAM */ = data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 614
type: SIMPLE_ASSIGN
m_HTF_des = powerBlock.m_HTF_des
*/
void sCO2PBRig_eqFunction_614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,614};
  data->simulationInfo->realParameter[20] /* m_HTF_des PARAM */ = data->simulationInfo->realParameter[586] /* powerBlock.m_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 615
type: SIMPLE_ASSIGN
m_HTF_in = load * m_HTF_des
*/
void sCO2PBRig_eqFunction_615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,615};
  data->simulationInfo->realParameter[21] /* m_HTF_in PARAM */ = (data->simulationInfo->realParameter[19] /* load PARAM */) * (data->simulationInfo->realParameter[20] /* m_HTF_des PARAM */);
  TRACE_POP
}

/*
equation index: 616
type: SIMPLE_ASSIGN
liftSimple._m_flow = m_HTF_in
*/
void sCO2PBRig_eqFunction_616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,616};
  data->simulationInfo->realParameter[17] /* liftSimple.m_flow PARAM */ = data->simulationInfo->realParameter[21] /* m_HTF_in PARAM */;
  TRACE_POP
}

/*
equation index: 617
type: SIMPLE_ASSIGN
m_dot._y = m_HTF_in
*/
void sCO2PBRig_eqFunction_617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,617};
  data->simulationInfo->realParameter[22] /* m_dot.y PARAM */ = data->simulationInfo->realParameter[21] /* m_HTF_in PARAM */;
  TRACE_POP
}

/*
equation index: 618
type: SIMPLE_ASSIGN
source._ports[1]._m_flow = -(if liftSimple.use_input then m_HTF_in else liftSimple.m_flow_fixed)
*/
void sCO2PBRig_eqFunction_618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,618};
  data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */ = (-((data->simulationInfo->booleanParameter[1] /* liftSimple.use_input PARAM */?data->simulationInfo->realParameter[21] /* m_HTF_in PARAM */:data->simulationInfo->realParameter[18] /* liftSimple.m_flow_fixed PARAM */)));
  TRACE_POP
}

/*
equation index: 619
type: SIMPLE_ASSIGN
liftSimple._W_loss = 9.806649999999999 * (-source.ports[1].m_flow) * liftSimple.dh * (1.0 - liftSimple.CF) / liftSimple.eff
*/
void sCO2PBRig_eqFunction_619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,619};
  data->localData[0]->realVars[35] /* liftSimple.W_loss variable */ = (9.806649999999999) * (((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */)) * ((data->simulationInfo->realParameter[13] /* liftSimple.dh PARAM */) * (DIVISION_SIM(1.0 - data->simulationInfo->realParameter[12] /* liftSimple.CF PARAM */,data->simulationInfo->realParameter[15] /* liftSimple.eff PARAM */,"liftSimple.eff",equationIndexes))));
  TRACE_POP
}
extern void sCO2PBRig_eqFunction_1213(DATA *data, threadData_t *threadData);


/*
equation index: 621
type: SIMPLE_ASSIGN
powerBlock._Q_HX_des = powerBlock.exchanger.m_CO2_des * (powerBlock.exchanger.h_out_CO2_des - powerBlock.exchanger.h_in_CO2_des)
*/
void sCO2PBRig_eqFunction_621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,621};
  data->simulationInfo->realParameter[310] /* powerBlock.Q_HX_des PARAM */ = (data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */) * (data->simulationInfo->realParameter[498] /* powerBlock.exchanger.h_out_CO2_des PARAM */ - data->simulationInfo->realParameter[496] /* powerBlock.exchanger.h_in_CO2_des PARAM */);
  TRACE_POP
}

/*
equation index: 622
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[1] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[1] + powerBlock.cooler.deltaT_des[2])
*/
void sCO2PBRig_eqFunction_622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,622};
  data->simulationInfo->realParameter[344] /* powerBlock.cooler.UA_dis[1] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[358] /* powerBlock.cooler.deltaT_des[1] PARAM */ + data->simulationInfo->realParameter[359] /* powerBlock.cooler.deltaT_des[2] PARAM */,"powerBlock.cooler.deltaT_des[1] + powerBlock.cooler.deltaT_des[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 623
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[2] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[2] + powerBlock.cooler.deltaT_des[3])
*/
void sCO2PBRig_eqFunction_623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,623};
  data->simulationInfo->realParameter[345] /* powerBlock.cooler.UA_dis[2] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[359] /* powerBlock.cooler.deltaT_des[2] PARAM */ + data->simulationInfo->realParameter[360] /* powerBlock.cooler.deltaT_des[3] PARAM */,"powerBlock.cooler.deltaT_des[2] + powerBlock.cooler.deltaT_des[3]",equationIndexes);
  TRACE_POP
}

/*
equation index: 624
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[3] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[3] + powerBlock.cooler.deltaT_des[4])
*/
void sCO2PBRig_eqFunction_624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,624};
  data->simulationInfo->realParameter[346] /* powerBlock.cooler.UA_dis[3] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[360] /* powerBlock.cooler.deltaT_des[3] PARAM */ + data->simulationInfo->realParameter[361] /* powerBlock.cooler.deltaT_des[4] PARAM */,"powerBlock.cooler.deltaT_des[3] + powerBlock.cooler.deltaT_des[4]",equationIndexes);
  TRACE_POP
}

/*
equation index: 625
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[4] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[4] + powerBlock.cooler.deltaT_des[5])
*/
void sCO2PBRig_eqFunction_625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,625};
  data->simulationInfo->realParameter[347] /* powerBlock.cooler.UA_dis[4] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[361] /* powerBlock.cooler.deltaT_des[4] PARAM */ + data->simulationInfo->realParameter[362] /* powerBlock.cooler.deltaT_des[5] PARAM */,"powerBlock.cooler.deltaT_des[4] + powerBlock.cooler.deltaT_des[5]",equationIndexes);
  TRACE_POP
}

/*
equation index: 626
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[5] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[5] + powerBlock.cooler.deltaT_des[6])
*/
void sCO2PBRig_eqFunction_626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,626};
  data->simulationInfo->realParameter[348] /* powerBlock.cooler.UA_dis[5] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[362] /* powerBlock.cooler.deltaT_des[5] PARAM */ + data->simulationInfo->realParameter[363] /* powerBlock.cooler.deltaT_des[6] PARAM */,"powerBlock.cooler.deltaT_des[5] + powerBlock.cooler.deltaT_des[6]",equationIndexes);
  TRACE_POP
}

/*
equation index: 627
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[6] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[6] + powerBlock.cooler.deltaT_des[7])
*/
void sCO2PBRig_eqFunction_627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,627};
  data->simulationInfo->realParameter[349] /* powerBlock.cooler.UA_dis[6] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[363] /* powerBlock.cooler.deltaT_des[6] PARAM */ + data->simulationInfo->realParameter[364] /* powerBlock.cooler.deltaT_des[7] PARAM */,"powerBlock.cooler.deltaT_des[6] + powerBlock.cooler.deltaT_des[7]",equationIndexes);
  TRACE_POP
}

/*
equation index: 628
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[7] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[7] + powerBlock.cooler.deltaT_des[8])
*/
void sCO2PBRig_eqFunction_628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,628};
  data->simulationInfo->realParameter[350] /* powerBlock.cooler.UA_dis[7] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[364] /* powerBlock.cooler.deltaT_des[7] PARAM */ + data->simulationInfo->realParameter[365] /* powerBlock.cooler.deltaT_des[8] PARAM */,"powerBlock.cooler.deltaT_des[7] + powerBlock.cooler.deltaT_des[8]",equationIndexes);
  TRACE_POP
}

/*
equation index: 629
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[8] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[8] + powerBlock.cooler.deltaT_des[9])
*/
void sCO2PBRig_eqFunction_629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,629};
  data->simulationInfo->realParameter[351] /* powerBlock.cooler.UA_dis[8] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[365] /* powerBlock.cooler.deltaT_des[8] PARAM */ + data->simulationInfo->realParameter[366] /* powerBlock.cooler.deltaT_des[9] PARAM */,"powerBlock.cooler.deltaT_des[8] + powerBlock.cooler.deltaT_des[9]",equationIndexes);
  TRACE_POP
}

/*
equation index: 630
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[9] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[9] + powerBlock.cooler.deltaT_des[10])
*/
void sCO2PBRig_eqFunction_630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,630};
  data->simulationInfo->realParameter[352] /* powerBlock.cooler.UA_dis[9] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[366] /* powerBlock.cooler.deltaT_des[9] PARAM */ + data->simulationInfo->realParameter[367] /* powerBlock.cooler.deltaT_des[10] PARAM */,"powerBlock.cooler.deltaT_des[9] + powerBlock.cooler.deltaT_des[10]",equationIndexes);
  TRACE_POP
}

/*
equation index: 631
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[10] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[10] + powerBlock.cooler.deltaT_des[11])
*/
void sCO2PBRig_eqFunction_631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,631};
  data->simulationInfo->realParameter[353] /* powerBlock.cooler.UA_dis[10] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[367] /* powerBlock.cooler.deltaT_des[10] PARAM */ + data->simulationInfo->realParameter[368] /* powerBlock.cooler.deltaT_des[11] PARAM */,"powerBlock.cooler.deltaT_des[10] + powerBlock.cooler.deltaT_des[11]",equationIndexes);
  TRACE_POP
}

/*
equation index: 632
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[11] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[11] + powerBlock.cooler.deltaT_des[12])
*/
void sCO2PBRig_eqFunction_632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,632};
  data->simulationInfo->realParameter[354] /* powerBlock.cooler.UA_dis[11] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[368] /* powerBlock.cooler.deltaT_des[11] PARAM */ + data->simulationInfo->realParameter[369] /* powerBlock.cooler.deltaT_des[12] PARAM */,"powerBlock.cooler.deltaT_des[11] + powerBlock.cooler.deltaT_des[12]",equationIndexes);
  TRACE_POP
}

/*
equation index: 633
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[12] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[12] + powerBlock.cooler.deltaT_des[13])
*/
void sCO2PBRig_eqFunction_633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,633};
  data->simulationInfo->realParameter[355] /* powerBlock.cooler.UA_dis[12] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[369] /* powerBlock.cooler.deltaT_des[12] PARAM */ + data->simulationInfo->realParameter[370] /* powerBlock.cooler.deltaT_des[13] PARAM */,"powerBlock.cooler.deltaT_des[12] + powerBlock.cooler.deltaT_des[13]",equationIndexes);
  TRACE_POP
}

/*
equation index: 634
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[13] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[13] + powerBlock.cooler.deltaT_des[14])
*/
void sCO2PBRig_eqFunction_634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,634};
  data->simulationInfo->realParameter[356] /* powerBlock.cooler.UA_dis[13] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[370] /* powerBlock.cooler.deltaT_des[13] PARAM */ + data->simulationInfo->realParameter[371] /* powerBlock.cooler.deltaT_des[14] PARAM */,"powerBlock.cooler.deltaT_des[13] + powerBlock.cooler.deltaT_des[14]",equationIndexes);
  TRACE_POP
}

/*
equation index: 635
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_dis[14] = (-2.0) * powerBlock.cooler.m_des * powerBlock.cooler.Q_dis_des / (powerBlock.cooler.deltaT_des[14] + powerBlock.cooler.deltaT_des[15])
*/
void sCO2PBRig_eqFunction_635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,635};
  data->simulationInfo->realParameter[357] /* powerBlock.cooler.UA_dis[14] PARAM */ = DIVISION_SIM((-2.0) * ((data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */) * (data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */)),data->simulationInfo->realParameter[371] /* powerBlock.cooler.deltaT_des[14] PARAM */ + data->simulationInfo->realParameter[372] /* powerBlock.cooler.deltaT_des[15] PARAM */,"powerBlock.cooler.deltaT_des[14] + powerBlock.cooler.deltaT_des[15]",equationIndexes);
  TRACE_POP
}

/*
equation index: 636
type: SIMPLE_ASSIGN
powerBlock._cooler._Q_cooler_des = 14.0 * powerBlock.cooler.Q_dis_des * powerBlock.cooler.m_des
*/
void sCO2PBRig_eqFunction_636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,636};
  data->simulationInfo->realParameter[323] /* powerBlock.cooler.Q_cooler_des PARAM */ = (14.0) * ((data->simulationInfo->realParameter[324] /* powerBlock.cooler.Q_dis_des PARAM */) * (data->simulationInfo->realParameter[391] /* powerBlock.cooler.m_des PARAM */));
  TRACE_POP
}

/*
equation index: 637
type: SIMPLE_ASSIGN
powerBlock._cooler._UA_cooler = abs(powerBlock.cooler.Q_cooler_des) / (log((powerBlock.cooler.T_CO2_des[1] - powerBlock.cooler.T_amb_des) / (powerBlock.cooler.T_CO2_des[15] - powerBlock.cooler.T_amb_des)) * (powerBlock.cooler.T_CO2_des[1] - powerBlock.cooler.T_amb_des) * (powerBlock.cooler.T_CO2_des[15] - powerBlock.cooler.T_amb_des))
*/
void sCO2PBRig_eqFunction_637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,637};
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
equation index: 638
type: SIMPLE_ASSIGN
powerBlock._C_cooler = powerBlock.pri_cooler * powerBlock.cooler.UA_cooler ^ 0.8919
*/
void sCO2PBRig_eqFunction_638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,638};
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
  data->simulationInfo->realParameter[30] /* powerBlock.C_cooler PARAM */ = (data->simulationInfo->realParameter[612] /* powerBlock.pri_cooler PARAM */) * (tmp18);
  TRACE_POP
}

/*
equation index: 639
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._diam_rotor = 1.259921049894873 * (powerBlock.mainCompressor.m_des / (powerBlock.mainCompressor.phi_opt * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.mainCompressor.state_in_des.p, powerBlock.mainCompressor.state_in_des.h, tableIDd_p_h) * powerBlock.mainCompressor.N_design)) ^ 0.3333333333333333
*/
void sCO2PBRig_eqFunction_639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,639};
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  tmp23 = DIVISION_SIM(data->simulationInfo->realParameter[596] /* powerBlock.mainCompressor.m_des PARAM */,((data->simulationInfo->realParameter[600] /* powerBlock.mainCompressor.phi_opt PARAM */) * (omc_SolarTherm_Media_CO2_CO2__utilities_rho__p__h(threadData, data->simulationInfo->realParameter[603] /* powerBlock.mainCompressor.state_in_des.p PARAM */, data->simulationInfo->realParameter[602] /* powerBlock.mainCompressor.state_in_des.h PARAM */, data->simulationInfo->extObjs[37]))) * (data->simulationInfo->realParameter[587] /* powerBlock.mainCompressor.N_design PARAM */),"powerBlock.mainCompressor.phi_opt * SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.mainCompressor.state_in_des.p, powerBlock.mainCompressor.state_in_des.h, tableIDd_p_h) * powerBlock.mainCompressor.N_design",equationIndexes);
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
  data->simulationInfo->realParameter[592] /* powerBlock.mainCompressor.diam_rotor PARAM */ = (1.259921049894873) * (tmp25);
  TRACE_POP
}

/*
equation index: 640
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._tipSpeed = 0.5 * powerBlock.mainCompressor.diam_rotor * powerBlock.mainCompressor.N_design
*/
void sCO2PBRig_eqFunction_640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,640};
  data->simulationInfo->realParameter[606] /* powerBlock.mainCompressor.tipSpeed PARAM */ = (0.5) * ((data->simulationInfo->realParameter[592] /* powerBlock.mainCompressor.diam_rotor PARAM */) * (data->simulationInfo->realParameter[587] /* powerBlock.mainCompressor.N_design PARAM */));
  TRACE_POP
}

/*
equation index: 641
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._psi_des = (powerBlock.mainCompressor.state_isen_des.h - powerBlock.mainCompressor.state_in_des.h) / powerBlock.mainCompressor.tipSpeed ^ 2.0
*/
void sCO2PBRig_eqFunction_641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,641};
  modelica_real tmp30;
  tmp30 = data->simulationInfo->realParameter[606] /* powerBlock.mainCompressor.tipSpeed PARAM */;
  data->simulationInfo->realParameter[601] /* powerBlock.mainCompressor.psi_des PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[604] /* powerBlock.mainCompressor.state_isen_des.h PARAM */ - data->simulationInfo->realParameter[602] /* powerBlock.mainCompressor.state_in_des.h PARAM */,(tmp30 * tmp30),"powerBlock.mainCompressor.tipSpeed ^ 2.0",equationIndexes);
  TRACE_POP
}

/*
equation index: 642
type: SIMPLE_ASSIGN
powerBlock._C_reCompressor = powerBlock.pri_compressor * (0.001 * powerBlock.reCompressor.W_comp_des) ^ 0.9142
*/
void sCO2PBRig_eqFunction_642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,642};
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  tmp31 = (0.001) * (data->simulationInfo->realParameter[623] /* powerBlock.reCompressor.W_comp_des PARAM */);
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
  data->simulationInfo->realParameter[34] /* powerBlock.C_reCompressor PARAM */ = (data->simulationInfo->realParameter[611] /* powerBlock.pri_compressor PARAM */) * (tmp33);
  TRACE_POP
}

/*
equation index: 643
type: SIMPLE_ASSIGN
powerBlock._P_gross_des = (-powerBlock.turbine.W_turb_des) - powerBlock.mainCompressor.W_comp_des - powerBlock.reCompressor.W_comp_des
*/
void sCO2PBRig_eqFunction_643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,643};
  data->simulationInfo->realParameter[308] /* powerBlock.P_gross_des PARAM */ = (-data->simulationInfo->realParameter[648] /* powerBlock.turbine.W_turb_des PARAM */) - data->simulationInfo->realParameter[591] /* powerBlock.mainCompressor.W_comp_des PARAM */ - data->simulationInfo->realParameter[623] /* powerBlock.reCompressor.W_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 644
type: SIMPLE_ASSIGN
powerBlock._HTR._P_nom_des = powerBlock.P_gross_des
*/
void sCO2PBRig_eqFunction_644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,644};
  data->simulationInfo->realParameter[36] /* powerBlock.HTR.P_nom_des PARAM */ = data->simulationInfo->realParameter[308] /* powerBlock.P_gross_des PARAM */;
  TRACE_POP
}

/*
equation index: 645
type: SIMPLE_ASSIGN
_omcQuot_245354415254._powerBlock._exchanger._CO2_port_b._m_flow = (-1e-05) * powerBlock.HTR.P_nom_des
*/
void sCO2PBRig_eqFunction_645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,645};
  data->modelData->realVarsData[200].attribute /* powerBlock.exchanger.CO2_port_b.m_flow variable */.start = (-1e-05) * (data->simulationInfo->realParameter[36] /* powerBlock.HTR.P_nom_des PARAM */);
    data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */ = data->modelData->realVarsData[200].attribute /* powerBlock.exchanger.CO2_port_b.m_flow variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[200].info /* powerBlock.exchanger.CO2_port_b.m_flow */.name, (modelica_real) data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */);
  TRACE_POP
}

/*
equation index: 646
type: SIMPLE_ASSIGN
powerBlock._eta_cycle_design = ((-powerBlock.mainCompressor.W_comp_des) - powerBlock.reCompressor.W_comp_des - powerBlock.turbine.W_turb_des) / powerBlock.Q_HX_des
*/
void sCO2PBRig_eqFunction_646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,646};
  data->simulationInfo->realParameter[426] /* powerBlock.eta_cycle_design PARAM */ = DIVISION_SIM((-data->simulationInfo->realParameter[591] /* powerBlock.mainCompressor.W_comp_des PARAM */) - data->simulationInfo->realParameter[623] /* powerBlock.reCompressor.W_comp_des PARAM */ - data->simulationInfo->realParameter[648] /* powerBlock.turbine.W_turb_des PARAM */,data->simulationInfo->realParameter[310] /* powerBlock.Q_HX_des PARAM */,"powerBlock.Q_HX_des",equationIndexes);
  TRACE_POP
}

/*
equation index: 647
type: SIMPLE_ASSIGN
powerBlock._eta_net_design = ((-powerBlock.mainCompressor.W_comp_des) - powerBlock.reCompressor.W_comp_des - powerBlock.turbine.W_turb_des) * (1.0 - powerBlock.f_fixed_load) * powerBlock.eta_motor * (1.0 - powerBlock.par_fr) / powerBlock.Q_HX_des
*/
void sCO2PBRig_eqFunction_647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,647};
  data->simulationInfo->realParameter[428] /* powerBlock.eta_net_design PARAM */ = ((-data->simulationInfo->realParameter[591] /* powerBlock.mainCompressor.W_comp_des PARAM */) - data->simulationInfo->realParameter[623] /* powerBlock.reCompressor.W_comp_des PARAM */ - data->simulationInfo->realParameter[648] /* powerBlock.turbine.W_turb_des PARAM */) * ((1.0 - data->simulationInfo->realParameter[582] /* powerBlock.f_fixed_load PARAM */) * ((data->simulationInfo->realParameter[427] /* powerBlock.eta_motor PARAM */) * (DIVISION_SIM(1.0 - data->simulationInfo->realParameter[609] /* powerBlock.par_fr PARAM */,data->simulationInfo->realParameter[310] /* powerBlock.Q_HX_des PARAM */,"powerBlock.Q_HX_des",equationIndexes))));
  TRACE_POP
}

/*
equation index: 648
type: SIMPLE_ASSIGN
powerBlock._C_mainCompressor = powerBlock.pri_compressor * (0.001 * powerBlock.mainCompressor.W_comp_des) ^ 0.9142
*/
void sCO2PBRig_eqFunction_648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,648};
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  tmp38 = (0.001) * (data->simulationInfo->realParameter[591] /* powerBlock.mainCompressor.W_comp_des PARAM */);
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
  data->simulationInfo->realParameter[33] /* powerBlock.C_mainCompressor PARAM */ = (data->simulationInfo->realParameter[611] /* powerBlock.pri_compressor PARAM */) * (tmp40);
  TRACE_POP
}

/*
equation index: 649
type: SIMPLE_ASSIGN
powerBlock._LTR._m_comp_des = powerBlock.mainCompressor.m_des
*/
void sCO2PBRig_eqFunction_649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,649};
  data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */ = data->simulationInfo->realParameter[596] /* powerBlock.mainCompressor.m_des PARAM */;
  TRACE_POP
}

/*
equation index: 650
type: SIMPLE_ASSIGN
powerBlock._HTR._m_comp_des = powerBlock.reCompressor.m_des + powerBlock.LTR.m_comp_des
*/
void sCO2PBRig_eqFunction_650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,650};
  data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */ = data->simulationInfo->realParameter[628] /* powerBlock.reCompressor.m_des PARAM */ + data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */;
  TRACE_POP
}

/*
equation index: 651
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[13] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[14] + powerBlock.LTR.deltaT_des[13])
*/
void sCO2PBRig_eqFunction_651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,651};
  data->simulationInfo->realParameter[217] /* powerBlock.LTR.UA_dis[13] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[232] /* powerBlock.LTR.deltaT_des[14] PARAM */ + data->simulationInfo->realParameter[231] /* powerBlock.LTR.deltaT_des[13] PARAM */,"powerBlock.LTR.deltaT_des[14] + powerBlock.LTR.deltaT_des[13]",equationIndexes);
  TRACE_POP
}

/*
equation index: 652
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_dis[14] = 2.0 * powerBlock.LTR.m_turb_des * powerBlock.LTR.Q_dis_des / (powerBlock.LTR.deltaT_des[15] + powerBlock.LTR.deltaT_des[14])
*/
void sCO2PBRig_eqFunction_652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,652};
  data->simulationInfo->realParameter[218] /* powerBlock.LTR.UA_dis[14] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[233] /* powerBlock.LTR.deltaT_des[15] PARAM */ + data->simulationInfo->realParameter[232] /* powerBlock.LTR.deltaT_des[14] PARAM */,"powerBlock.LTR.deltaT_des[15] + powerBlock.LTR.deltaT_des[14]",equationIndexes);
  TRACE_POP
}

/*
equation index: 653
type: SIMPLE_ASSIGN
powerBlock._LTR._UA_HTR = powerBlock.LTR.UA_dis[1] + powerBlock.LTR.UA_dis[2] + powerBlock.LTR.UA_dis[3] + powerBlock.LTR.UA_dis[4] + powerBlock.LTR.UA_dis[5] + powerBlock.LTR.UA_dis[6] + powerBlock.LTR.UA_dis[7] + powerBlock.LTR.UA_dis[8] + powerBlock.LTR.UA_dis[9] + powerBlock.LTR.UA_dis[10] + powerBlock.LTR.UA_dis[11] + powerBlock.LTR.UA_dis[12] + powerBlock.LTR.UA_dis[13] + powerBlock.LTR.UA_dis[14]
*/
void sCO2PBRig_eqFunction_653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,653};
  data->simulationInfo->realParameter[204] /* powerBlock.LTR.UA_HTR PARAM */ = data->simulationInfo->realParameter[205] /* powerBlock.LTR.UA_dis[1] PARAM */ + data->simulationInfo->realParameter[206] /* powerBlock.LTR.UA_dis[2] PARAM */ + data->simulationInfo->realParameter[207] /* powerBlock.LTR.UA_dis[3] PARAM */ + data->simulationInfo->realParameter[208] /* powerBlock.LTR.UA_dis[4] PARAM */ + data->simulationInfo->realParameter[209] /* powerBlock.LTR.UA_dis[5] PARAM */ + data->simulationInfo->realParameter[210] /* powerBlock.LTR.UA_dis[6] PARAM */ + data->simulationInfo->realParameter[211] /* powerBlock.LTR.UA_dis[7] PARAM */ + data->simulationInfo->realParameter[212] /* powerBlock.LTR.UA_dis[8] PARAM */ + data->simulationInfo->realParameter[213] /* powerBlock.LTR.UA_dis[9] PARAM */ + data->simulationInfo->realParameter[214] /* powerBlock.LTR.UA_dis[10] PARAM */ + data->simulationInfo->realParameter[215] /* powerBlock.LTR.UA_dis[11] PARAM */ + data->simulationInfo->realParameter[216] /* powerBlock.LTR.UA_dis[12] PARAM */ + data->simulationInfo->realParameter[217] /* powerBlock.LTR.UA_dis[13] PARAM */ + data->simulationInfo->realParameter[218] /* powerBlock.LTR.UA_dis[14] PARAM */;
  TRACE_POP
}

/*
equation index: 654
type: SIMPLE_ASSIGN
powerBlock._C_LTR = powerBlock.pri_recuperator * powerBlock.LTR.UA_HTR ^ 0.8933
*/
void sCO2PBRig_eqFunction_654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,654};
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  tmp45 = data->simulationInfo->realParameter[204] /* powerBlock.LTR.UA_HTR PARAM */;
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
  data->simulationInfo->realParameter[28] /* powerBlock.C_LTR PARAM */ = (data->simulationInfo->realParameter[615] /* powerBlock.pri_recuperator PARAM */) * (tmp47);
  TRACE_POP
}

/*
equation index: 655
type: SIMPLE_ASSIGN
powerBlock._HTR._Q_HX_des = 14.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,655};
  data->simulationInfo->realParameter[37] /* powerBlock.HTR.Q_HX_des PARAM */ = (14.0) * ((data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */));
  TRACE_POP
}

/*
equation index: 656
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[2] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[3] + powerBlock.HTR.deltaT_des[2])
*/
void sCO2PBRig_eqFunction_656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,656};
  data->simulationInfo->realParameter[71] /* powerBlock.HTR.UA_dis[2] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[86] /* powerBlock.HTR.deltaT_des[3] PARAM */ + data->simulationInfo->realParameter[85] /* powerBlock.HTR.deltaT_des[2] PARAM */,"powerBlock.HTR.deltaT_des[3] + powerBlock.HTR.deltaT_des[2]",equationIndexes);
  TRACE_POP
}

/*
equation index: 657
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[3] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[4] + powerBlock.HTR.deltaT_des[3])
*/
void sCO2PBRig_eqFunction_657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,657};
  data->simulationInfo->realParameter[72] /* powerBlock.HTR.UA_dis[3] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[87] /* powerBlock.HTR.deltaT_des[4] PARAM */ + data->simulationInfo->realParameter[86] /* powerBlock.HTR.deltaT_des[3] PARAM */,"powerBlock.HTR.deltaT_des[4] + powerBlock.HTR.deltaT_des[3]",equationIndexes);
  TRACE_POP
}

/*
equation index: 658
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[4] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[5] + powerBlock.HTR.deltaT_des[4])
*/
void sCO2PBRig_eqFunction_658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,658};
  data->simulationInfo->realParameter[73] /* powerBlock.HTR.UA_dis[4] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[88] /* powerBlock.HTR.deltaT_des[5] PARAM */ + data->simulationInfo->realParameter[87] /* powerBlock.HTR.deltaT_des[4] PARAM */,"powerBlock.HTR.deltaT_des[5] + powerBlock.HTR.deltaT_des[4]",equationIndexes);
  TRACE_POP
}

/*
equation index: 659
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[5] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[6] + powerBlock.HTR.deltaT_des[5])
*/
void sCO2PBRig_eqFunction_659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,659};
  data->simulationInfo->realParameter[74] /* powerBlock.HTR.UA_dis[5] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[89] /* powerBlock.HTR.deltaT_des[6] PARAM */ + data->simulationInfo->realParameter[88] /* powerBlock.HTR.deltaT_des[5] PARAM */,"powerBlock.HTR.deltaT_des[6] + powerBlock.HTR.deltaT_des[5]",equationIndexes);
  TRACE_POP
}

/*
equation index: 660
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[6] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[7] + powerBlock.HTR.deltaT_des[6])
*/
void sCO2PBRig_eqFunction_660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,660};
  data->simulationInfo->realParameter[75] /* powerBlock.HTR.UA_dis[6] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[90] /* powerBlock.HTR.deltaT_des[7] PARAM */ + data->simulationInfo->realParameter[89] /* powerBlock.HTR.deltaT_des[6] PARAM */,"powerBlock.HTR.deltaT_des[7] + powerBlock.HTR.deltaT_des[6]",equationIndexes);
  TRACE_POP
}

/*
equation index: 661
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[7] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[8] + powerBlock.HTR.deltaT_des[7])
*/
void sCO2PBRig_eqFunction_661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,661};
  data->simulationInfo->realParameter[76] /* powerBlock.HTR.UA_dis[7] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[91] /* powerBlock.HTR.deltaT_des[8] PARAM */ + data->simulationInfo->realParameter[90] /* powerBlock.HTR.deltaT_des[7] PARAM */,"powerBlock.HTR.deltaT_des[8] + powerBlock.HTR.deltaT_des[7]",equationIndexes);
  TRACE_POP
}

/*
equation index: 662
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[8] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[9] + powerBlock.HTR.deltaT_des[8])
*/
void sCO2PBRig_eqFunction_662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,662};
  data->simulationInfo->realParameter[77] /* powerBlock.HTR.UA_dis[8] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[92] /* powerBlock.HTR.deltaT_des[9] PARAM */ + data->simulationInfo->realParameter[91] /* powerBlock.HTR.deltaT_des[8] PARAM */,"powerBlock.HTR.deltaT_des[9] + powerBlock.HTR.deltaT_des[8]",equationIndexes);
  TRACE_POP
}

/*
equation index: 663
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[9] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[10] + powerBlock.HTR.deltaT_des[9])
*/
void sCO2PBRig_eqFunction_663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,663};
  data->simulationInfo->realParameter[78] /* powerBlock.HTR.UA_dis[9] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[93] /* powerBlock.HTR.deltaT_des[10] PARAM */ + data->simulationInfo->realParameter[92] /* powerBlock.HTR.deltaT_des[9] PARAM */,"powerBlock.HTR.deltaT_des[10] + powerBlock.HTR.deltaT_des[9]",equationIndexes);
  TRACE_POP
}

/*
equation index: 664
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[10] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[11] + powerBlock.HTR.deltaT_des[10])
*/
void sCO2PBRig_eqFunction_664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,664};
  data->simulationInfo->realParameter[79] /* powerBlock.HTR.UA_dis[10] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[94] /* powerBlock.HTR.deltaT_des[11] PARAM */ + data->simulationInfo->realParameter[93] /* powerBlock.HTR.deltaT_des[10] PARAM */,"powerBlock.HTR.deltaT_des[11] + powerBlock.HTR.deltaT_des[10]",equationIndexes);
  TRACE_POP
}

/*
equation index: 665
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[11] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[12] + powerBlock.HTR.deltaT_des[11])
*/
void sCO2PBRig_eqFunction_665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,665};
  data->simulationInfo->realParameter[80] /* powerBlock.HTR.UA_dis[11] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[95] /* powerBlock.HTR.deltaT_des[12] PARAM */ + data->simulationInfo->realParameter[94] /* powerBlock.HTR.deltaT_des[11] PARAM */,"powerBlock.HTR.deltaT_des[12] + powerBlock.HTR.deltaT_des[11]",equationIndexes);
  TRACE_POP
}

/*
equation index: 666
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[12] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[13] + powerBlock.HTR.deltaT_des[12])
*/
void sCO2PBRig_eqFunction_666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,666};
  data->simulationInfo->realParameter[81] /* powerBlock.HTR.UA_dis[12] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[96] /* powerBlock.HTR.deltaT_des[13] PARAM */ + data->simulationInfo->realParameter[95] /* powerBlock.HTR.deltaT_des[12] PARAM */,"powerBlock.HTR.deltaT_des[13] + powerBlock.HTR.deltaT_des[12]",equationIndexes);
  TRACE_POP
}

/*
equation index: 667
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[13] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[14] + powerBlock.HTR.deltaT_des[13])
*/
void sCO2PBRig_eqFunction_667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,667};
  data->simulationInfo->realParameter[82] /* powerBlock.HTR.UA_dis[13] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[97] /* powerBlock.HTR.deltaT_des[14] PARAM */ + data->simulationInfo->realParameter[96] /* powerBlock.HTR.deltaT_des[13] PARAM */,"powerBlock.HTR.deltaT_des[14] + powerBlock.HTR.deltaT_des[13]",equationIndexes);
  TRACE_POP
}

/*
equation index: 668
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[14] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[15] + powerBlock.HTR.deltaT_des[14])
*/
void sCO2PBRig_eqFunction_668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,668};
  data->simulationInfo->realParameter[83] /* powerBlock.HTR.UA_dis[14] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[98] /* powerBlock.HTR.deltaT_des[15] PARAM */ + data->simulationInfo->realParameter[97] /* powerBlock.HTR.deltaT_des[14] PARAM */,"powerBlock.HTR.deltaT_des[15] + powerBlock.HTR.deltaT_des[14]",equationIndexes);
  TRACE_POP
}

/*
equation index: 669
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_dis[1] = 2.0 * powerBlock.HTR.m_turb_des * powerBlock.HTR.Q_dis_des / (powerBlock.HTR.deltaT_des[2] + powerBlock.HTR.deltaT_des[1])
*/
void sCO2PBRig_eqFunction_669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,669};
  data->simulationInfo->realParameter[70] /* powerBlock.HTR.UA_dis[1] PARAM */ = DIVISION_SIM((2.0) * ((data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */) * (data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */)),data->simulationInfo->realParameter[85] /* powerBlock.HTR.deltaT_des[2] PARAM */ + data->simulationInfo->realParameter[84] /* powerBlock.HTR.deltaT_des[1] PARAM */,"powerBlock.HTR.deltaT_des[2] + powerBlock.HTR.deltaT_des[1]",equationIndexes);
  TRACE_POP
}

/*
equation index: 670
type: SIMPLE_ASSIGN
powerBlock._HTR._UA_HTR = powerBlock.HTR.UA_dis[1] + powerBlock.HTR.UA_dis[2] + powerBlock.HTR.UA_dis[3] + powerBlock.HTR.UA_dis[4] + powerBlock.HTR.UA_dis[5] + powerBlock.HTR.UA_dis[6] + powerBlock.HTR.UA_dis[7] + powerBlock.HTR.UA_dis[8] + powerBlock.HTR.UA_dis[9] + powerBlock.HTR.UA_dis[10] + powerBlock.HTR.UA_dis[11] + powerBlock.HTR.UA_dis[12] + powerBlock.HTR.UA_dis[13] + powerBlock.HTR.UA_dis[14]
*/
void sCO2PBRig_eqFunction_670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,670};
  data->simulationInfo->realParameter[69] /* powerBlock.HTR.UA_HTR PARAM */ = data->simulationInfo->realParameter[70] /* powerBlock.HTR.UA_dis[1] PARAM */ + data->simulationInfo->realParameter[71] /* powerBlock.HTR.UA_dis[2] PARAM */ + data->simulationInfo->realParameter[72] /* powerBlock.HTR.UA_dis[3] PARAM */ + data->simulationInfo->realParameter[73] /* powerBlock.HTR.UA_dis[4] PARAM */ + data->simulationInfo->realParameter[74] /* powerBlock.HTR.UA_dis[5] PARAM */ + data->simulationInfo->realParameter[75] /* powerBlock.HTR.UA_dis[6] PARAM */ + data->simulationInfo->realParameter[76] /* powerBlock.HTR.UA_dis[7] PARAM */ + data->simulationInfo->realParameter[77] /* powerBlock.HTR.UA_dis[8] PARAM */ + data->simulationInfo->realParameter[78] /* powerBlock.HTR.UA_dis[9] PARAM */ + data->simulationInfo->realParameter[79] /* powerBlock.HTR.UA_dis[10] PARAM */ + data->simulationInfo->realParameter[80] /* powerBlock.HTR.UA_dis[11] PARAM */ + data->simulationInfo->realParameter[81] /* powerBlock.HTR.UA_dis[12] PARAM */ + data->simulationInfo->realParameter[82] /* powerBlock.HTR.UA_dis[13] PARAM */ + data->simulationInfo->realParameter[83] /* powerBlock.HTR.UA_dis[14] PARAM */;
  TRACE_POP
}

/*
equation index: 671
type: SIMPLE_ASSIGN
powerBlock._C_HTR = powerBlock.pri_recuperator * powerBlock.HTR.UA_HTR ^ 0.8933
*/
void sCO2PBRig_eqFunction_671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,671};
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  tmp52 = data->simulationInfo->realParameter[69] /* powerBlock.HTR.UA_HTR PARAM */;
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
  data->simulationInfo->realParameter[27] /* powerBlock.C_HTR PARAM */ = (data->simulationInfo->realParameter[615] /* powerBlock.pri_recuperator PARAM */) * (tmp54);
  TRACE_POP
}

/*
equation index: 672
type: SIMPLE_ASSIGN
powerBlock._C_PB = powerBlock.C_HTR + powerBlock.C_LTR + powerBlock.C_turbine + powerBlock.C_mainCompressor + powerBlock.C_reCompressor + powerBlock.C_generator + powerBlock.C_cooler + powerBlock.C_exchanger
*/
void sCO2PBRig_eqFunction_672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,672};
  data->simulationInfo->realParameter[29] /* powerBlock.C_PB PARAM */ = data->simulationInfo->realParameter[27] /* powerBlock.C_HTR PARAM */ + data->simulationInfo->realParameter[28] /* powerBlock.C_LTR PARAM */ + data->simulationInfo->realParameter[35] /* powerBlock.C_turbine PARAM */ + data->simulationInfo->realParameter[33] /* powerBlock.C_mainCompressor PARAM */ + data->simulationInfo->realParameter[34] /* powerBlock.C_reCompressor PARAM */ + data->simulationInfo->realParameter[32] /* powerBlock.C_generator PARAM */ + data->simulationInfo->realParameter[30] /* powerBlock.C_cooler PARAM */ + data->simulationInfo->realParameter[31] /* powerBlock.C_exchanger PARAM */;
  TRACE_POP
}

void sCO2PBRig_eqFunction_673(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_674(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_675(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_676(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_677(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_678(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_679(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_680(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_681(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_682(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_683(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_684(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_685(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_686(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_687(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_688(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_689(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_690(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_691(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_692(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_693(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_694(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_695(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_696(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_697(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_698(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_699(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_700(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_701(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_702(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_703(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_704(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_705(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_706(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_707(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_708(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_709(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_710(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_711(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_712(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_713(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_714(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_715(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_716(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_717(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_718(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_719(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_720(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_721(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_722(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_723(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_724(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_725(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_726(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_727(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_728(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_729(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_730(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_731(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_732(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_733(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_734(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_735(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_736(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_737(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_738(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_739(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_740(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_741(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_742(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_743(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_744(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_745(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_746(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_747(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_748(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_749(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_750(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_751(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_752(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_753(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_754(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_755(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_756(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_757(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_758(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_759(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_760(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_761(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_762(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_763(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_764(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_765(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_766(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_767(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_768(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_769(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_770(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_771(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_772(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_773(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_774(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_775(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_776(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_777(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_778(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_779(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_780(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_781(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_782(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_783(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_784(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_785(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_786(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_787(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_788(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_862(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_861(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_860(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_859(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_858(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_857(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_856(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_855(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_854(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_853(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_852(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_851(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_850(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_849(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_848(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_847(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_846(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_845(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_844(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_843(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_842(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_841(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_840(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_839(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_838(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_837(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_836(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_835(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_834(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_833(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_832(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_831(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_830(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_829(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_828(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_827(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_826(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_825(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_824(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_823(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_822(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_821(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_820(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_819(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_818(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_817(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_816(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_815(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_814(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_813(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_812(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_811(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_810(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_809(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_808(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_807(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_806(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_805(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_804(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_803(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_802(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_801(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_800(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_799(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_798(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_797(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_796(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_795(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_794(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_793(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_792(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_791(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_790(DATA*, threadData_t*);
void sCO2PBRig_eqFunction_789(DATA*, threadData_t*);
/*
equation index: 863
indexNonlinear: 46
type: NONLINEAR

vars: {powerBlock._exchanger._h_CO2[15], powerBlock._LTR._h_from_turb[1], powerBlock._exchanger._CO2_port_b._m_flow, powerBlock._turbine._p_out, powerBlock._HTR._h_from_turb[4], powerBlock._HTR._h_from_turb[6], powerBlock._HTR._h_from_comp[7], powerBlock._HTR._h_from_turb[8], powerBlock._HTR._h_from_turb[9], powerBlock._HTR._h_from_turb[10], powerBlock._HTR._h_from_comp[11], powerBlock._HTR._h_from_comp[12], powerBlock._HTR._h_from_turb[13], powerBlock._HTR._h_from_turb[12], powerBlock._HTR._h_from_turb[11], powerBlock._HTR._h_from_comp[13], powerBlock._HTR._h_from_turb[14], powerBlock._exchanger._h_CO2[1], powerBlock._exchanger._h_CO2[2], powerBlock._exchanger._h_CO2[3], powerBlock._exchanger._h_CO2[7], powerBlock._exchanger._h_CO2[8], powerBlock._exchanger._h_CO2[9], powerBlock._exchanger._h_CO2[12], powerBlock._exchanger._h_CO2[14], powerBlock._exchanger._h_CO2[13], powerBlock._turbine._C_spouting, powerBlock._HTR._h_from_comp[14], powerBlock._LTR._h_from_turb[15], powerBlock._LTR._h_from_turb[14], powerBlock._LTR._h_from_comp[15], powerBlock._LTR._h_from_comp[13], powerBlock._LTR._h_from_turb[13], powerBlock._LTR._h_from_turb[12], powerBlock._LTR._h_from_comp[11], powerBlock._LTR._h_from_turb[11], powerBlock._LTR._h_from_turb[6], powerBlock._LTR._h_from_comp[7], powerBlock._LTR._h_from_turb[8], powerBlock._LTR._h_from_comp[9], powerBlock._LTR._h_from_turb[10], powerBlock._LTR._h_from_turb[5], powerBlock._LTR._h_from_comp[6], powerBlock._LTR._h_from_turb[4], powerBlock._LTR._h_from_comp[5], powerBlock._LTR._h_from_comp[4], powerBlock._LTR._h_from_turb[3], powerBlock._LTR._h_from_turb[2], powerBlock._LTR._h_from_comp[3], powerBlock._LTR._h_from_comp[2], powerBlock._reCompressor._p_out, powerBlock._LTR._h_from_turb[7], powerBlock._LTR._h_from_comp[8], powerBlock._LTR._h_from_turb[9], powerBlock._LTR._h_from_comp[10], powerBlock._LTR._h_from_comp[12], powerBlock._LTR._h_from_comp[14], powerBlock._exchanger._h_CO2[11], powerBlock._exchanger._h_CO2[10], powerBlock._exchanger._h_CO2[6], powerBlock._exchanger._h_CO2[4], powerBlock._exchanger._h_CO2[5], powerBlock._HTR._h_from_comp[9], powerBlock._HTR._h_from_comp[8], powerBlock._HTR._h_from_turb[7], powerBlock._HTR._h_from_turb[5], powerBlock._HTR._h_from_comp[4], powerBlock._HTR._h_from_comp[3], powerBlock._HTR._h_from_comp[2], powerBlock._HTR._h_from_turb[3], powerBlock._HTR._h_from_turb[2], powerBlock._HTR._h_from_comp[10], powerBlock._HTR._h_from_comp[6], powerBlock._HTR._h_from_comp[5]}
eqns: {673, 674, 675, 676, 677, 678, 679, 680, 681, 682, 683, 684, 685, 686, 687, 688, 689, 690, 691, 692, 693, 694, 695, 696, 697, 698, 699, 700, 701, 702, 703, 704, 705, 706, 707, 708, 709, 710, 711, 712, 713, 714, 715, 716, 717, 718, 719, 720, 721, 722, 723, 724, 725, 726, 727, 728, 729, 730, 731, 732, 733, 734, 735, 736, 737, 738, 739, 740, 741, 742, 743, 744, 745, 746, 747, 748, 749, 750, 751, 752, 753, 754, 755, 756, 757, 758, 759, 760, 761, 762, 763, 764, 765, 766, 767, 768, 769, 770, 771, 772, 773, 774, 775, 776, 777, 778, 779, 780, 781, 782, 783, 784, 785, 786, 787, 788, 862, 861, 860, 859, 858, 857, 856, 855, 854, 853, 852, 851, 850, 849, 848, 847, 846, 845, 844, 843, 842, 841, 840, 839, 838, 837, 836, 835, 834, 833, 832, 831, 830, 829, 828, 827, 826, 825, 824, 823, 822, 821, 820, 819, 818, 817, 816, 815, 814, 813, 812, 811, 810, 809, 808, 807, 806, 805, 804, 803, 802, 801, 800, 799, 798, 797, 796, 795, 794, 793, 792, 791, 790, 789}
*/
void sCO2PBRig_eqFunction_863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,863};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 863 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[0] = data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[1] = data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[2] = data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[3] = data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[4] = data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[5] = data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[6] = data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[7] = data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[8] = data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[9] = data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[10] = data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[11] = data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[12] = data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[13] = data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[14] = data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[15] = data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[16] = data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[17] = data->localData[0]->realVars[222] /* powerBlock.exchanger.h_CO2[1] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[18] = data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[19] = data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[20] = data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[21] = data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[22] = data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[23] = data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[24] = data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[25] = data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[26] = data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[27] = data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[28] = data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[29] = data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[30] = data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[15] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[31] = data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[13] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[32] = data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[33] = data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[34] = data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[11] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[35] = data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[36] = data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[37] = data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[7] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[38] = data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[39] = data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[9] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[40] = data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[41] = data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[42] = data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[6] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[43] = data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[44] = data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[5] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[45] = data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[4] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[46] = data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[47] = data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[48] = data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[3] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[49] = data->localData[0]->realVars[159] /* powerBlock.LTR.h_from_comp[2] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[50] = data->localData[0]->realVars[266] /* powerBlock.reCompressor.p_out variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[51] = data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[52] = data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[8] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[53] = data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[54] = data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[10] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[55] = data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[12] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[56] = data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[14] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[57] = data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[58] = data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[59] = data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[60] = data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[61] = data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[62] = data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[63] = data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[64] = data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[65] = data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[66] = data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[67] = data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[68] = data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[69] = data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[70] = data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[71] = data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[72] = data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[73] = data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */;
  retValue = solve_nonlinear_system(data, threadData, 46);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,863};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 863 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[0];
  data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[1];
  data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[2];
  data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[3];
  data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[4];
  data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[5];
  data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[6];
  data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[7];
  data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[8];
  data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[9];
  data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[10];
  data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[11];
  data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[12];
  data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[13];
  data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[14];
  data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[15];
  data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[16];
  data->localData[0]->realVars[222] /* powerBlock.exchanger.h_CO2[1] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[17];
  data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[18];
  data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[19];
  data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[20];
  data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[21];
  data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[22];
  data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[23];
  data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[24];
  data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[25];
  data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[26];
  data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[27];
  data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[28];
  data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[29];
  data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[15] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[30];
  data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[13] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[31];
  data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[32];
  data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[33];
  data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[11] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[34];
  data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[35];
  data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[36];
  data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[7] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[37];
  data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[38];
  data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[9] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[39];
  data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[40];
  data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[41];
  data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[6] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[42];
  data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[43];
  data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[5] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[44];
  data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[4] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[45];
  data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[46];
  data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[47];
  data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[3] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[48];
  data->localData[0]->realVars[159] /* powerBlock.LTR.h_from_comp[2] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[49];
  data->localData[0]->realVars[266] /* powerBlock.reCompressor.p_out variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[50];
  data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[51];
  data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[8] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[52];
  data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[53];
  data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[10] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[54];
  data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[12] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[55];
  data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[14] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[56];
  data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[57];
  data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[58];
  data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[59];
  data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[60];
  data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[61];
  data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[62];
  data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[63];
  data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[64];
  data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[65];
  data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[66];
  data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[67];
  data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[68];
  data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[69];
  data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[70];
  data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[71];
  data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[72];
  data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[73];
  TRACE_POP
}
extern void sCO2PBRig_eqFunction_1203(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1199(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1195(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1165(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1166(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1167(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1204(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1205(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1206(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1207(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1200(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1201(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1202(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1208(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1174(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1175(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1176(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1177(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1184(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1186(DATA *data, threadData_t *threadData);


/*
equation index: 884
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT[1] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[1], tableIDT_p_h) - T_amb_input
*/
void sCO2PBRig_eqFunction_884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,884};
  data->localData[0]->realVars[194] /* powerBlock.cooler.deltaT[1] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */, data->simulationInfo->extObjs[36]) - data->simulationInfo->realParameter[4] /* T_amb_input PARAM */;
  TRACE_POP
}
extern void sCO2PBRig_eqFunction_1172(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1189(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1187(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1171(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1185(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1183(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1182(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1181(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1180(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1179(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1178(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1173(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1194(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1169(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1196(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1168(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1190(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1191(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1212(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1214(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1209(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1192(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1170(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1210(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1211(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1215(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1216(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1193(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1197(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_1198(DATA *data, threadData_t *threadData);


/*
equation index: 915
type: SIMPLE_ASSIGN
source._medium._d = 2000.0
*/
void sCO2PBRig_eqFunction_915(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_916(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_917(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_918(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_919(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_920(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_921(DATA *data, threadData_t *threadData)
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
  tmp0 = Less(data->simulationInfo->realParameter[669] /* sink.T PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[669] /* sink.T PARAM */;
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
void sCO2PBRig_eqFunction_922(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,922};
  data->localData[0]->realVars[292] /* sink.medium.u variable */ = data->localData[0]->realVars[293] /* sink.state.h variable */ + (-0.0005) * (data->simulationInfo->realParameter[679] /* sink.p PARAM */);
  TRACE_POP
}

/*
equation index: 923
type: SIMPLE_ASSIGN
sink._medium._T = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(sink.state.h)
*/
void sCO2PBRig_eqFunction_923(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_924(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_925(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_926(DATA *data, threadData_t *threadData)
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
void sCO2PBRig_eqFunction_927(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,927};
  data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */ = data->simulationInfo->realParameter[642] /* powerBlock.state_HTF_in_des.p PARAM */;
  TRACE_POP
}

/*
equation index: 928
type: SIMPLE_ASSIGN
powerBlock._exchanger._p_out_HTF_des = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_928(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,928};
  data->simulationInfo->realParameter[505] /* powerBlock.exchanger.p_out_HTF_des PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 929
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[15]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_929(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,929};
  data->simulationInfo->realParameter[581] /* powerBlock.exchanger.state_HTF_des[15].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 930
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[14]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_930(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,930};
  data->simulationInfo->realParameter[580] /* powerBlock.exchanger.state_HTF_des[14].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 931
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[13]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_931(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,931};
  data->simulationInfo->realParameter[579] /* powerBlock.exchanger.state_HTF_des[13].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 932
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[12]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_932(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,932};
  data->simulationInfo->realParameter[578] /* powerBlock.exchanger.state_HTF_des[12].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 933
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[11]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_933(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,933};
  data->simulationInfo->realParameter[577] /* powerBlock.exchanger.state_HTF_des[11].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 934
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[10]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_934(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,934};
  data->simulationInfo->realParameter[576] /* powerBlock.exchanger.state_HTF_des[10].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 935
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[9]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_935(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,935};
  data->simulationInfo->realParameter[575] /* powerBlock.exchanger.state_HTF_des[9].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 936
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[8]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_936(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,936};
  data->simulationInfo->realParameter[574] /* powerBlock.exchanger.state_HTF_des[8].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 937
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[7]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_937(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,937};
  data->simulationInfo->realParameter[573] /* powerBlock.exchanger.state_HTF_des[7].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 938
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[6]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_938(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,938};
  data->simulationInfo->realParameter[572] /* powerBlock.exchanger.state_HTF_des[6].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 939
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[5]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_939(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,939};
  data->simulationInfo->realParameter[571] /* powerBlock.exchanger.state_HTF_des[5].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 940
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[4]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_940(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,940};
  data->simulationInfo->realParameter[570] /* powerBlock.exchanger.state_HTF_des[4].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 941
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[3]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_941(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,941};
  data->simulationInfo->realParameter[569] /* powerBlock.exchanger.state_HTF_des[3].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 942
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[2]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_942(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,942};
  data->simulationInfo->realParameter[568] /* powerBlock.exchanger.state_HTF_des[2].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 943
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des[1]._p = powerBlock.exchanger.p_in_HTF_des
*/
void sCO2PBRig_eqFunction_943(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,943};
  data->simulationInfo->realParameter[567] /* powerBlock.exchanger.state_HTF_des[1].p PARAM */ = data->simulationInfo->realParameter[503] /* powerBlock.exchanger.p_in_HTF_des PARAM */;
  TRACE_POP
}

/*
equation index: 946
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("CARBO HSP 40/70", {"Al2O3", "SiO2", "Fe2O3", "TiO2", "other"}, false, true, sink.X, "FixedBoundary");
*/
void sCO2PBRig_eqFunction_946(DATA *data, threadData_t *threadData)
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
  real_array_create(&tmp17, ((modelica_real*)&((&data->simulationInfo->realParameter[670] /* sink.X[1] PARAM */)[calc_base_index_dims_subs(1, 5, ((modelica_integer) 1))])), 1, 5);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp10), tmp11, 0, 1, tmp17, MMC_REFSTRINGLIT(tmp18));
  TRACE_POP
}

/*
equation index: 945
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("CARBO HSP 40/70", {"Al2O3", "SiO2", "Fe2O3", "TiO2", "other"}, false, false, source.X, "FixedBoundary");
*/
void sCO2PBRig_eqFunction_945(DATA *data, threadData_t *threadData)
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
  real_array_create(&tmp26, ((modelica_real*)&((&data->simulationInfo->realParameter[683] /* source.X[1] PARAM */)[calc_base_index_dims_subs(1, 5, ((modelica_integer) 1))])), 1, 5);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp19), tmp20, 0, 0, tmp26, MMC_REFSTRINGLIT(tmp27));
  TRACE_POP
}

/*
equation index: 944
type: ALGORITHM

  assert(sink.p >= 0.0, "Pressure (= " + String(sink.p, 6, 0, true) + " Pa) of medium \"" + "CARBO HSP 40/70" + "\" is negative
(Temperature = " + String(sink.medium.T, 6, 0, true) + " K)");
*/
void sCO2PBRig_eqFunction_944(DATA *data, threadData_t *threadData)
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
    tmp28 = GreaterEq(data->simulationInfo->realParameter[679] /* sink.p PARAM */,0.0);
    if(!tmp28)
    {
      tmp30 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[679] /* sink.p PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
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
void sCO2PBRig_functionInitialEquations_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  sCO2PBRig_eqFunction_1(data, threadData);
  sCO2PBRig_eqFunction_2(data, threadData);
  sCO2PBRig_eqFunction_3(data, threadData);
  sCO2PBRig_eqFunction_4(data, threadData);
  sCO2PBRig_eqFunction_5(data, threadData);
  sCO2PBRig_eqFunction_6(data, threadData);
  sCO2PBRig_eqFunction_7(data, threadData);
  sCO2PBRig_eqFunction_8(data, threadData);
  sCO2PBRig_eqFunction_9(data, threadData);
  sCO2PBRig_eqFunction_10(data, threadData);
  sCO2PBRig_eqFunction_11(data, threadData);
  sCO2PBRig_eqFunction_12(data, threadData);
  sCO2PBRig_eqFunction_13(data, threadData);
  sCO2PBRig_eqFunction_14(data, threadData);
  sCO2PBRig_eqFunction_15(data, threadData);
  sCO2PBRig_eqFunction_16(data, threadData);
  sCO2PBRig_eqFunction_17(data, threadData);
  sCO2PBRig_eqFunction_18(data, threadData);
  sCO2PBRig_eqFunction_19(data, threadData);
  sCO2PBRig_eqFunction_20(data, threadData);
  sCO2PBRig_eqFunction_21(data, threadData);
  sCO2PBRig_eqFunction_22(data, threadData);
  sCO2PBRig_eqFunction_23(data, threadData);
  sCO2PBRig_eqFunction_24(data, threadData);
  sCO2PBRig_eqFunction_25(data, threadData);
  sCO2PBRig_eqFunction_26(data, threadData);
  sCO2PBRig_eqFunction_27(data, threadData);
  sCO2PBRig_eqFunction_28(data, threadData);
  sCO2PBRig_eqFunction_29(data, threadData);
  sCO2PBRig_eqFunction_30(data, threadData);
  sCO2PBRig_eqFunction_31(data, threadData);
  sCO2PBRig_eqFunction_32(data, threadData);
  sCO2PBRig_eqFunction_33(data, threadData);
  sCO2PBRig_eqFunction_34(data, threadData);
  sCO2PBRig_eqFunction_36(data, threadData);
  sCO2PBRig_eqFunction_37(data, threadData);
  sCO2PBRig_eqFunction_65(data, threadData);
  sCO2PBRig_eqFunction_67(data, threadData);
  sCO2PBRig_eqFunction_69(data, threadData);
  sCO2PBRig_eqFunction_71(data, threadData);
  sCO2PBRig_eqFunction_73(data, threadData);
  sCO2PBRig_eqFunction_75(data, threadData);
  sCO2PBRig_eqFunction_77(data, threadData);
  sCO2PBRig_eqFunction_79(data, threadData);
  sCO2PBRig_eqFunction_81(data, threadData);
  sCO2PBRig_eqFunction_83(data, threadData);
  sCO2PBRig_eqFunction_85(data, threadData);
  sCO2PBRig_eqFunction_87(data, threadData);
  sCO2PBRig_eqFunction_89(data, threadData);
  sCO2PBRig_eqFunction_91(data, threadData);
  sCO2PBRig_eqFunction_92(data, threadData);
  sCO2PBRig_eqFunction_93(data, threadData);
  sCO2PBRig_eqFunction_94(data, threadData);
  sCO2PBRig_eqFunction_95(data, threadData);
  sCO2PBRig_eqFunction_96(data, threadData);
  sCO2PBRig_eqFunction_97(data, threadData);
  sCO2PBRig_eqFunction_98(data, threadData);
  sCO2PBRig_eqFunction_99(data, threadData);
  sCO2PBRig_eqFunction_100(data, threadData);
  sCO2PBRig_eqFunction_101(data, threadData);
  sCO2PBRig_eqFunction_102(data, threadData);
  sCO2PBRig_eqFunction_103(data, threadData);
  sCO2PBRig_eqFunction_104(data, threadData);
  sCO2PBRig_eqFunction_105(data, threadData);
  sCO2PBRig_eqFunction_106(data, threadData);
  sCO2PBRig_eqFunction_107(data, threadData);
  sCO2PBRig_eqFunction_108(data, threadData);
  sCO2PBRig_eqFunction_109(data, threadData);
  sCO2PBRig_eqFunction_110(data, threadData);
  sCO2PBRig_eqFunction_111(data, threadData);
  sCO2PBRig_eqFunction_112(data, threadData);
  sCO2PBRig_eqFunction_113(data, threadData);
  sCO2PBRig_eqFunction_114(data, threadData);
  sCO2PBRig_eqFunction_115(data, threadData);
  sCO2PBRig_eqFunction_116(data, threadData);
  sCO2PBRig_eqFunction_117(data, threadData);
  sCO2PBRig_eqFunction_118(data, threadData);
  sCO2PBRig_eqFunction_119(data, threadData);
  sCO2PBRig_eqFunction_120(data, threadData);
  sCO2PBRig_eqFunction_121(data, threadData);
  sCO2PBRig_eqFunction_122(data, threadData);
  sCO2PBRig_eqFunction_123(data, threadData);
  sCO2PBRig_eqFunction_124(data, threadData);
  sCO2PBRig_eqFunction_125(data, threadData);
  sCO2PBRig_eqFunction_126(data, threadData);
  sCO2PBRig_eqFunction_127(data, threadData);
  sCO2PBRig_eqFunction_128(data, threadData);
  sCO2PBRig_eqFunction_129(data, threadData);
  sCO2PBRig_eqFunction_130(data, threadData);
  sCO2PBRig_eqFunction_131(data, threadData);
  sCO2PBRig_eqFunction_132(data, threadData);
  sCO2PBRig_eqFunction_133(data, threadData);
  sCO2PBRig_eqFunction_134(data, threadData);
  sCO2PBRig_eqFunction_135(data, threadData);
  sCO2PBRig_eqFunction_136(data, threadData);
  sCO2PBRig_eqFunction_137(data, threadData);
  sCO2PBRig_eqFunction_138(data, threadData);
  sCO2PBRig_eqFunction_139(data, threadData);
  sCO2PBRig_eqFunction_140(data, threadData);
  sCO2PBRig_eqFunction_141(data, threadData);
  sCO2PBRig_eqFunction_142(data, threadData);
  sCO2PBRig_eqFunction_143(data, threadData);
  sCO2PBRig_eqFunction_144(data, threadData);
  sCO2PBRig_eqFunction_145(data, threadData);
  sCO2PBRig_eqFunction_146(data, threadData);
  sCO2PBRig_eqFunction_147(data, threadData);
  sCO2PBRig_eqFunction_148(data, threadData);
  sCO2PBRig_eqFunction_149(data, threadData);
  sCO2PBRig_eqFunction_150(data, threadData);
  sCO2PBRig_eqFunction_151(data, threadData);
  sCO2PBRig_eqFunction_152(data, threadData);
  sCO2PBRig_eqFunction_153(data, threadData);
  sCO2PBRig_eqFunction_154(data, threadData);
  sCO2PBRig_eqFunction_155(data, threadData);
  sCO2PBRig_eqFunction_156(data, threadData);
  sCO2PBRig_eqFunction_157(data, threadData);
  sCO2PBRig_eqFunction_158(data, threadData);
  sCO2PBRig_eqFunction_159(data, threadData);
  sCO2PBRig_eqFunction_160(data, threadData);
  sCO2PBRig_eqFunction_161(data, threadData);
  sCO2PBRig_eqFunction_162(data, threadData);
  sCO2PBRig_eqFunction_163(data, threadData);
  sCO2PBRig_eqFunction_164(data, threadData);
  sCO2PBRig_eqFunction_165(data, threadData);
  sCO2PBRig_eqFunction_166(data, threadData);
  sCO2PBRig_eqFunction_167(data, threadData);
  sCO2PBRig_eqFunction_168(data, threadData);
  sCO2PBRig_eqFunction_169(data, threadData);
  sCO2PBRig_eqFunction_170(data, threadData);
  sCO2PBRig_eqFunction_171(data, threadData);
  sCO2PBRig_eqFunction_172(data, threadData);
  sCO2PBRig_eqFunction_173(data, threadData);
  sCO2PBRig_eqFunction_174(data, threadData);
  sCO2PBRig_eqFunction_175(data, threadData);
  sCO2PBRig_eqFunction_176(data, threadData);
  sCO2PBRig_eqFunction_177(data, threadData);
  sCO2PBRig_eqFunction_178(data, threadData);
  sCO2PBRig_eqFunction_179(data, threadData);
  sCO2PBRig_eqFunction_180(data, threadData);
  sCO2PBRig_eqFunction_181(data, threadData);
  sCO2PBRig_eqFunction_182(data, threadData);
  sCO2PBRig_eqFunction_183(data, threadData);
  sCO2PBRig_eqFunction_184(data, threadData);
  sCO2PBRig_eqFunction_185(data, threadData);
  sCO2PBRig_eqFunction_186(data, threadData);
  sCO2PBRig_eqFunction_187(data, threadData);
  sCO2PBRig_eqFunction_188(data, threadData);
  sCO2PBRig_eqFunction_189(data, threadData);
  sCO2PBRig_eqFunction_190(data, threadData);
  sCO2PBRig_eqFunction_191(data, threadData);
  sCO2PBRig_eqFunction_192(data, threadData);
  sCO2PBRig_eqFunction_193(data, threadData);
  sCO2PBRig_eqFunction_194(data, threadData);
  sCO2PBRig_eqFunction_195(data, threadData);
  sCO2PBRig_eqFunction_196(data, threadData);
  sCO2PBRig_eqFunction_197(data, threadData);
  sCO2PBRig_eqFunction_198(data, threadData);
  sCO2PBRig_eqFunction_199(data, threadData);
  sCO2PBRig_eqFunction_200(data, threadData);
  sCO2PBRig_eqFunction_201(data, threadData);
  sCO2PBRig_eqFunction_202(data, threadData);
  sCO2PBRig_eqFunction_203(data, threadData);
  sCO2PBRig_eqFunction_205(data, threadData);
  sCO2PBRig_eqFunction_206(data, threadData);
  sCO2PBRig_eqFunction_207(data, threadData);
  sCO2PBRig_eqFunction_208(data, threadData);
  sCO2PBRig_eqFunction_209(data, threadData);
  sCO2PBRig_eqFunction_210(data, threadData);
  sCO2PBRig_eqFunction_211(data, threadData);
  sCO2PBRig_eqFunction_213(data, threadData);
  sCO2PBRig_eqFunction_214(data, threadData);
  sCO2PBRig_eqFunction_215(data, threadData);
  sCO2PBRig_eqFunction_216(data, threadData);
  sCO2PBRig_eqFunction_217(data, threadData);
  sCO2PBRig_eqFunction_218(data, threadData);
  sCO2PBRig_eqFunction_219(data, threadData);
  sCO2PBRig_eqFunction_220(data, threadData);
  sCO2PBRig_eqFunction_221(data, threadData);
  sCO2PBRig_eqFunction_222(data, threadData);
  sCO2PBRig_eqFunction_223(data, threadData);
  sCO2PBRig_eqFunction_224(data, threadData);
  sCO2PBRig_eqFunction_225(data, threadData);
  sCO2PBRig_eqFunction_226(data, threadData);
  sCO2PBRig_eqFunction_227(data, threadData);
  sCO2PBRig_eqFunction_228(data, threadData);
  sCO2PBRig_eqFunction_229(data, threadData);
  sCO2PBRig_eqFunction_230(data, threadData);
  sCO2PBRig_eqFunction_231(data, threadData);
  sCO2PBRig_eqFunction_232(data, threadData);
  sCO2PBRig_eqFunction_233(data, threadData);
  sCO2PBRig_eqFunction_234(data, threadData);
  sCO2PBRig_eqFunction_235(data, threadData);
  sCO2PBRig_eqFunction_236(data, threadData);
  sCO2PBRig_eqFunction_237(data, threadData);
  sCO2PBRig_eqFunction_238(data, threadData);
  sCO2PBRig_eqFunction_239(data, threadData);
  sCO2PBRig_eqFunction_240(data, threadData);
  sCO2PBRig_eqFunction_241(data, threadData);
  sCO2PBRig_eqFunction_399(data, threadData);
  sCO2PBRig_eqFunction_400(data, threadData);
  sCO2PBRig_eqFunction_401(data, threadData);
  sCO2PBRig_eqFunction_402(data, threadData);
  sCO2PBRig_eqFunction_403(data, threadData);
  sCO2PBRig_eqFunction_405(data, threadData);
  sCO2PBRig_eqFunction_434(data, threadData);
  sCO2PBRig_eqFunction_435(data, threadData);
  sCO2PBRig_eqFunction_437(data, threadData);
  sCO2PBRig_eqFunction_438(data, threadData);
  sCO2PBRig_eqFunction_440(data, threadData);
  sCO2PBRig_eqFunction_441(data, threadData);
  sCO2PBRig_eqFunction_443(data, threadData);
  sCO2PBRig_eqFunction_444(data, threadData);
  sCO2PBRig_eqFunction_446(data, threadData);
  sCO2PBRig_eqFunction_447(data, threadData);
  sCO2PBRig_eqFunction_449(data, threadData);
  sCO2PBRig_eqFunction_450(data, threadData);
  sCO2PBRig_eqFunction_452(data, threadData);
  sCO2PBRig_eqFunction_453(data, threadData);
  sCO2PBRig_eqFunction_455(data, threadData);
  sCO2PBRig_eqFunction_456(data, threadData);
  sCO2PBRig_eqFunction_458(data, threadData);
  sCO2PBRig_eqFunction_459(data, threadData);
  sCO2PBRig_eqFunction_461(data, threadData);
  sCO2PBRig_eqFunction_462(data, threadData);
  sCO2PBRig_eqFunction_464(data, threadData);
  sCO2PBRig_eqFunction_465(data, threadData);
  sCO2PBRig_eqFunction_467(data, threadData);
  sCO2PBRig_eqFunction_468(data, threadData);
  sCO2PBRig_eqFunction_470(data, threadData);
  sCO2PBRig_eqFunction_471(data, threadData);
  sCO2PBRig_eqFunction_473(data, threadData);
  sCO2PBRig_eqFunction_474(data, threadData);
  sCO2PBRig_eqFunction_475(data, threadData);
  sCO2PBRig_eqFunction_476(data, threadData);
  sCO2PBRig_eqFunction_477(data, threadData);
  sCO2PBRig_eqFunction_479(data, threadData);
  sCO2PBRig_eqFunction_480(data, threadData);
  sCO2PBRig_eqFunction_508(data, threadData);
  sCO2PBRig_eqFunction_509(data, threadData);
  sCO2PBRig_eqFunction_511(data, threadData);
  sCO2PBRig_eqFunction_512(data, threadData);
  sCO2PBRig_eqFunction_513(data, threadData);
  sCO2PBRig_eqFunction_515(data, threadData);
  sCO2PBRig_eqFunction_516(data, threadData);
  sCO2PBRig_eqFunction_517(data, threadData);
  sCO2PBRig_eqFunction_519(data, threadData);
  sCO2PBRig_eqFunction_520(data, threadData);
  sCO2PBRig_eqFunction_521(data, threadData);
  sCO2PBRig_eqFunction_523(data, threadData);
  sCO2PBRig_eqFunction_524(data, threadData);
  sCO2PBRig_eqFunction_525(data, threadData);
  sCO2PBRig_eqFunction_527(data, threadData);
  sCO2PBRig_eqFunction_528(data, threadData);
  sCO2PBRig_eqFunction_529(data, threadData);
  sCO2PBRig_eqFunction_531(data, threadData);
  sCO2PBRig_eqFunction_532(data, threadData);
  sCO2PBRig_eqFunction_533(data, threadData);
  sCO2PBRig_eqFunction_535(data, threadData);
  sCO2PBRig_eqFunction_536(data, threadData);
  sCO2PBRig_eqFunction_537(data, threadData);
  sCO2PBRig_eqFunction_539(data, threadData);
  sCO2PBRig_eqFunction_540(data, threadData);
  sCO2PBRig_eqFunction_541(data, threadData);
  sCO2PBRig_eqFunction_543(data, threadData);
  sCO2PBRig_eqFunction_544(data, threadData);
  sCO2PBRig_eqFunction_545(data, threadData);
  sCO2PBRig_eqFunction_547(data, threadData);
  sCO2PBRig_eqFunction_548(data, threadData);
  sCO2PBRig_eqFunction_549(data, threadData);
  sCO2PBRig_eqFunction_551(data, threadData);
  sCO2PBRig_eqFunction_552(data, threadData);
  sCO2PBRig_eqFunction_553(data, threadData);
  sCO2PBRig_eqFunction_555(data, threadData);
  sCO2PBRig_eqFunction_556(data, threadData);
  sCO2PBRig_eqFunction_557(data, threadData);
  sCO2PBRig_eqFunction_559(data, threadData);
  sCO2PBRig_eqFunction_560(data, threadData);
  sCO2PBRig_eqFunction_577(data, threadData);
  sCO2PBRig_eqFunction_578(data, threadData);
  sCO2PBRig_eqFunction_579(data, threadData);
  sCO2PBRig_eqFunction_580(data, threadData);
  sCO2PBRig_eqFunction_581(data, threadData);
  sCO2PBRig_eqFunction_582(data, threadData);
  sCO2PBRig_eqFunction_583(data, threadData);
  sCO2PBRig_eqFunction_584(data, threadData);
  sCO2PBRig_eqFunction_585(data, threadData);
  sCO2PBRig_eqFunction_586(data, threadData);
  sCO2PBRig_eqFunction_587(data, threadData);
  sCO2PBRig_eqFunction_588(data, threadData);
  sCO2PBRig_eqFunction_589(data, threadData);
  sCO2PBRig_eqFunction_590(data, threadData);
  sCO2PBRig_eqFunction_591(data, threadData);
  sCO2PBRig_eqFunction_592(data, threadData);
  sCO2PBRig_eqFunction_593(data, threadData);
  sCO2PBRig_eqFunction_594(data, threadData);
  sCO2PBRig_eqFunction_595(data, threadData);
  sCO2PBRig_eqFunction_596(data, threadData);
  sCO2PBRig_eqFunction_597(data, threadData);
  sCO2PBRig_eqFunction_598(data, threadData);
  sCO2PBRig_eqFunction_599(data, threadData);
  sCO2PBRig_eqFunction_600(data, threadData);
  sCO2PBRig_eqFunction_601(data, threadData);
  sCO2PBRig_eqFunction_602(data, threadData);
  sCO2PBRig_eqFunction_603(data, threadData);
  sCO2PBRig_eqFunction_604(data, threadData);
  sCO2PBRig_eqFunction_605(data, threadData);
  sCO2PBRig_eqFunction_606(data, threadData);
  sCO2PBRig_eqFunction_607(data, threadData);
  sCO2PBRig_eqFunction_608(data, threadData);
  sCO2PBRig_eqFunction_609(data, threadData);
  sCO2PBRig_eqFunction_610(data, threadData);
  sCO2PBRig_eqFunction_611(data, threadData);
  sCO2PBRig_eqFunction_612(data, threadData);
  sCO2PBRig_eqFunction_613(data, threadData);
  sCO2PBRig_eqFunction_614(data, threadData);
  sCO2PBRig_eqFunction_615(data, threadData);
  sCO2PBRig_eqFunction_616(data, threadData);
  sCO2PBRig_eqFunction_617(data, threadData);
  sCO2PBRig_eqFunction_618(data, threadData);
  sCO2PBRig_eqFunction_619(data, threadData);
  sCO2PBRig_eqFunction_1213(data, threadData);
  sCO2PBRig_eqFunction_621(data, threadData);
  sCO2PBRig_eqFunction_622(data, threadData);
  sCO2PBRig_eqFunction_623(data, threadData);
  sCO2PBRig_eqFunction_624(data, threadData);
  sCO2PBRig_eqFunction_625(data, threadData);
  sCO2PBRig_eqFunction_626(data, threadData);
  sCO2PBRig_eqFunction_627(data, threadData);
  sCO2PBRig_eqFunction_628(data, threadData);
  sCO2PBRig_eqFunction_629(data, threadData);
  sCO2PBRig_eqFunction_630(data, threadData);
  sCO2PBRig_eqFunction_631(data, threadData);
  sCO2PBRig_eqFunction_632(data, threadData);
  sCO2PBRig_eqFunction_633(data, threadData);
  sCO2PBRig_eqFunction_634(data, threadData);
  sCO2PBRig_eqFunction_635(data, threadData);
  sCO2PBRig_eqFunction_636(data, threadData);
  sCO2PBRig_eqFunction_637(data, threadData);
  sCO2PBRig_eqFunction_638(data, threadData);
  sCO2PBRig_eqFunction_639(data, threadData);
  sCO2PBRig_eqFunction_640(data, threadData);
  sCO2PBRig_eqFunction_641(data, threadData);
  sCO2PBRig_eqFunction_642(data, threadData);
  sCO2PBRig_eqFunction_643(data, threadData);
  sCO2PBRig_eqFunction_644(data, threadData);
  sCO2PBRig_eqFunction_645(data, threadData);
  sCO2PBRig_eqFunction_646(data, threadData);
  sCO2PBRig_eqFunction_647(data, threadData);
  sCO2PBRig_eqFunction_648(data, threadData);
  sCO2PBRig_eqFunction_649(data, threadData);
  sCO2PBRig_eqFunction_650(data, threadData);
  sCO2PBRig_eqFunction_651(data, threadData);
  sCO2PBRig_eqFunction_652(data, threadData);
  sCO2PBRig_eqFunction_653(data, threadData);
  sCO2PBRig_eqFunction_654(data, threadData);
  sCO2PBRig_eqFunction_655(data, threadData);
  sCO2PBRig_eqFunction_656(data, threadData);
  sCO2PBRig_eqFunction_657(data, threadData);
  sCO2PBRig_eqFunction_658(data, threadData);
  sCO2PBRig_eqFunction_659(data, threadData);
  sCO2PBRig_eqFunction_660(data, threadData);
  sCO2PBRig_eqFunction_661(data, threadData);
  sCO2PBRig_eqFunction_662(data, threadData);
  sCO2PBRig_eqFunction_663(data, threadData);
  sCO2PBRig_eqFunction_664(data, threadData);
  sCO2PBRig_eqFunction_665(data, threadData);
  sCO2PBRig_eqFunction_666(data, threadData);
  sCO2PBRig_eqFunction_667(data, threadData);
  sCO2PBRig_eqFunction_668(data, threadData);
  sCO2PBRig_eqFunction_669(data, threadData);
  sCO2PBRig_eqFunction_670(data, threadData);
  sCO2PBRig_eqFunction_671(data, threadData);
  sCO2PBRig_eqFunction_672(data, threadData);
  sCO2PBRig_eqFunction_863(data, threadData);
  sCO2PBRig_eqFunction_1203(data, threadData);
  sCO2PBRig_eqFunction_1199(data, threadData);
  sCO2PBRig_eqFunction_1195(data, threadData);
  sCO2PBRig_eqFunction_1165(data, threadData);
  sCO2PBRig_eqFunction_1166(data, threadData);
  sCO2PBRig_eqFunction_1167(data, threadData);
  sCO2PBRig_eqFunction_1204(data, threadData);
  sCO2PBRig_eqFunction_1205(data, threadData);
  sCO2PBRig_eqFunction_1206(data, threadData);
  sCO2PBRig_eqFunction_1207(data, threadData);
  sCO2PBRig_eqFunction_1200(data, threadData);
  sCO2PBRig_eqFunction_1201(data, threadData);
  sCO2PBRig_eqFunction_1202(data, threadData);
  sCO2PBRig_eqFunction_1208(data, threadData);
  sCO2PBRig_eqFunction_1174(data, threadData);
  sCO2PBRig_eqFunction_1175(data, threadData);
  sCO2PBRig_eqFunction_1176(data, threadData);
  sCO2PBRig_eqFunction_1177(data, threadData);
  sCO2PBRig_eqFunction_1184(data, threadData);
  sCO2PBRig_eqFunction_1186(data, threadData);
  sCO2PBRig_eqFunction_884(data, threadData);
  sCO2PBRig_eqFunction_1172(data, threadData);
  sCO2PBRig_eqFunction_1189(data, threadData);
  sCO2PBRig_eqFunction_1187(data, threadData);
  sCO2PBRig_eqFunction_1171(data, threadData);
  sCO2PBRig_eqFunction_1185(data, threadData);
  sCO2PBRig_eqFunction_1183(data, threadData);
  sCO2PBRig_eqFunction_1182(data, threadData);
  sCO2PBRig_eqFunction_1181(data, threadData);
  sCO2PBRig_eqFunction_1180(data, threadData);
  sCO2PBRig_eqFunction_1179(data, threadData);
  sCO2PBRig_eqFunction_1178(data, threadData);
  sCO2PBRig_eqFunction_1173(data, threadData);
  sCO2PBRig_eqFunction_1194(data, threadData);
  sCO2PBRig_eqFunction_1169(data, threadData);
  sCO2PBRig_eqFunction_1196(data, threadData);
  sCO2PBRig_eqFunction_1168(data, threadData);
  sCO2PBRig_eqFunction_1190(data, threadData);
  sCO2PBRig_eqFunction_1191(data, threadData);
  sCO2PBRig_eqFunction_1212(data, threadData);
  sCO2PBRig_eqFunction_1214(data, threadData);
  sCO2PBRig_eqFunction_1209(data, threadData);
  sCO2PBRig_eqFunction_1192(data, threadData);
  sCO2PBRig_eqFunction_1170(data, threadData);
  sCO2PBRig_eqFunction_1210(data, threadData);
  sCO2PBRig_eqFunction_1211(data, threadData);
  sCO2PBRig_eqFunction_1215(data, threadData);
  sCO2PBRig_eqFunction_1216(data, threadData);
  sCO2PBRig_eqFunction_1193(data, threadData);
  sCO2PBRig_eqFunction_1197(data, threadData);
  sCO2PBRig_eqFunction_1198(data, threadData);
  sCO2PBRig_eqFunction_915(data, threadData);
  sCO2PBRig_eqFunction_916(data, threadData);
  sCO2PBRig_eqFunction_917(data, threadData);
  sCO2PBRig_eqFunction_918(data, threadData);
  sCO2PBRig_eqFunction_919(data, threadData);
  sCO2PBRig_eqFunction_920(data, threadData);
  sCO2PBRig_eqFunction_921(data, threadData);
  sCO2PBRig_eqFunction_922(data, threadData);
  sCO2PBRig_eqFunction_923(data, threadData);
  sCO2PBRig_eqFunction_924(data, threadData);
  sCO2PBRig_eqFunction_925(data, threadData);
  sCO2PBRig_eqFunction_926(data, threadData);
  sCO2PBRig_eqFunction_927(data, threadData);
  sCO2PBRig_eqFunction_928(data, threadData);
  sCO2PBRig_eqFunction_929(data, threadData);
  sCO2PBRig_eqFunction_930(data, threadData);
  sCO2PBRig_eqFunction_931(data, threadData);
  sCO2PBRig_eqFunction_932(data, threadData);
  sCO2PBRig_eqFunction_933(data, threadData);
  sCO2PBRig_eqFunction_934(data, threadData);
  sCO2PBRig_eqFunction_935(data, threadData);
  sCO2PBRig_eqFunction_936(data, threadData);
  sCO2PBRig_eqFunction_937(data, threadData);
  sCO2PBRig_eqFunction_938(data, threadData);
  sCO2PBRig_eqFunction_939(data, threadData);
  sCO2PBRig_eqFunction_940(data, threadData);
  sCO2PBRig_eqFunction_941(data, threadData);
  sCO2PBRig_eqFunction_942(data, threadData);
  sCO2PBRig_eqFunction_943(data, threadData);
  sCO2PBRig_eqFunction_946(data, threadData);
  sCO2PBRig_eqFunction_945(data, threadData);
  sCO2PBRig_eqFunction_944(data, threadData);
  TRACE_POP
}


int sCO2PBRig_functionInitialEquations(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  sCO2PBRig_functionInitialEquations_0(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}


int sCO2PBRig_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  data->simulationInfo->discreteCall = 1;
  data->simulationInfo->discreteCall = 0;
  
  TRACE_POP
  return 0;
}
int sCO2PBRig_functionRemovedInitialEquations(DATA *data, threadData_t *threadData)
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

