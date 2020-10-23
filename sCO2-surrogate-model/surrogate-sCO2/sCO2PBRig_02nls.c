/* Non Linear Systems */
#include "sCO2PBRig_model.h"
#include "sCO2PBRig_12jac.h"
#if defined(__cplusplus)
extern "C" {
#endif

/* inner equations */

/*
equation index: 948
type: SIMPLE_ASSIGN
powerBlock._turbine._eta_turb = 2.0 * powerBlock.turbine.eta_design * powerBlock.turbine.tipSpeed_des * sqrt(1.0 - (powerBlock.turbine.tipSpeed_des / powerBlock.turbine.C_spouting) ^ 2.0) / powerBlock.turbine.C_spouting
*/
void sCO2PBRig_eqFunction_948(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,948};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[662] /* powerBlock.turbine.tipSpeed_des PARAM */,data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */,"powerBlock.turbine.C_spouting",equationIndexes);
  tmp1 = 1.0 - ((tmp0 * tmp0));
  if(!(tmp1 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(1.0 - (powerBlock.turbine.tipSpeed_des / powerBlock.turbine.C_spouting) ^ 2.0) was %g should be >= 0", tmp1);
  }
  data->localData[0]->realVars[277] /* powerBlock.turbine.eta_turb variable */ = (2.0) * ((data->simulationInfo->realParameter[650] /* powerBlock.turbine.eta_design PARAM */) * ((data->simulationInfo->realParameter[662] /* powerBlock.turbine.tipSpeed_des PARAM */) * (DIVISION_SIM(sqrt(tmp1),data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */,"powerBlock.turbine.C_spouting",equationIndexes))));
  TRACE_POP
}
/*
equation index: 949
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[15] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[15], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_949(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,949};
  data->localData[0]->realVars[142] /* powerBlock.LTR.T_from_turb[15] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 950
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[2] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[2], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_950(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,950};
  data->localData[0]->realVars[54] /* powerBlock.HTR.T_from_turb[2] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 951
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[3] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[3], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_951(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,951};
  data->localData[0]->realVars[55] /* powerBlock.HTR.T_from_turb[3] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 952
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[4] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[4], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_952(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,952};
  data->localData[0]->realVars[56] /* powerBlock.HTR.T_from_turb[4] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 953
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[5] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[5], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_953(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,953};
  data->localData[0]->realVars[57] /* powerBlock.HTR.T_from_turb[5] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 954
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[7] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[7], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_954(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,954};
  data->localData[0]->realVars[59] /* powerBlock.HTR.T_from_turb[7] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 955
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[6] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[6], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_955(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,955};
  data->localData[0]->realVars[58] /* powerBlock.HTR.T_from_turb[6] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 956
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[8] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[8], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_956(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,956};
  data->localData[0]->realVars[60] /* powerBlock.HTR.T_from_turb[8] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 957
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[9] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[9], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_957(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,957};
  data->localData[0]->realVars[61] /* powerBlock.HTR.T_from_turb[9] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 958
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[10] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[10], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_958(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,958};
  data->localData[0]->realVars[62] /* powerBlock.HTR.T_from_turb[10] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 959
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[11] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[11], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_959(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,959};
  data->localData[0]->realVars[63] /* powerBlock.HTR.T_from_turb[11] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 960
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[12] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[12], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_960(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,960};
  data->localData[0]->realVars[64] /* powerBlock.HTR.T_from_turb[12] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 961
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[13] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[13], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_961(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,961};
  data->localData[0]->realVars[65] /* powerBlock.HTR.T_from_turb[13] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 962
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[14] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[14], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_962(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,962};
  data->localData[0]->realVars[66] /* powerBlock.HTR.T_from_turb[14] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 963
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[2] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[2], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_963(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,963};
  data->localData[0]->realVars[129] /* powerBlock.LTR.T_from_turb[2] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 964
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[3] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[3], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_964(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,964};
  data->localData[0]->realVars[130] /* powerBlock.LTR.T_from_turb[3] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 965
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[4] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[4], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_965(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,965};
  data->localData[0]->realVars[131] /* powerBlock.LTR.T_from_turb[4] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 966
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[5] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[5], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_966(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,966};
  data->localData[0]->realVars[132] /* powerBlock.LTR.T_from_turb[5] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 967
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[6] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[6], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_967(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,967};
  data->localData[0]->realVars[133] /* powerBlock.LTR.T_from_turb[6] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 968
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[7] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[7], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_968(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,968};
  data->localData[0]->realVars[134] /* powerBlock.LTR.T_from_turb[7] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 969
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[8] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[8], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_969(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,969};
  data->localData[0]->realVars[135] /* powerBlock.LTR.T_from_turb[8] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 970
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[9] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[9], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_970(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,970};
  data->localData[0]->realVars[136] /* powerBlock.LTR.T_from_turb[9] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 971
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[10] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[10], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_971(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,971};
  data->localData[0]->realVars[137] /* powerBlock.LTR.T_from_turb[10] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 972
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[11] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[11], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_972(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,972};
  data->localData[0]->realVars[138] /* powerBlock.LTR.T_from_turb[11] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 973
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[12] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[12], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_973(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,973};
  data->localData[0]->realVars[139] /* powerBlock.LTR.T_from_turb[12] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 974
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[13] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[13], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_974(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,974};
  data->localData[0]->realVars[140] /* powerBlock.LTR.T_from_turb[13] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 975
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[14] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[14], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_975(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,975};
  data->localData[0]->realVars[141] /* powerBlock.LTR.T_from_turb[14] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 976
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._state_a._h = SolarTherm.Media.CO2.CO2_utilities.h_p_T(powerBlock.turbine.p_out, powerBlock.cooler.T_low, tableIDh_p_T)
*/
void sCO2PBRig_eqFunction_976(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,976};
  data->localData[0]->realVars[261] /* powerBlock.mainCompressor.state_a.h variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->simulationInfo->realParameter[342] /* powerBlock.cooler.T_low PARAM */, data->simulationInfo->extObjs[38]);
  TRACE_POP
}
/*
equation index: 977
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._d_entrance = SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.turbine.p_out, powerBlock.mainCompressor.state_a.h, tableIDd_p_h)
*/
void sCO2PBRig_eqFunction_977(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,977};
  data->localData[0]->realVars[254] /* powerBlock.mainCompressor.d_entrance variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_rho__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[261] /* powerBlock.mainCompressor.state_a.h variable */, data->simulationInfo->extObjs[37]);
  TRACE_POP
}
/*
equation index: 978
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._s_entrance = SolarTherm.Models.PowerBlocks.sCO2Cycle.DirectDesign.CompressorOnShaft$powerBlock$mainCompressor.Medium.specificEntropy(SolarTherm.Models.PowerBlocks.sCO2Cycle.DirectDesign.CompressorOnShaft$powerBlock$mainCompressor.Medium.ThermodynamicState(powerBlock.turbine.p_out, powerBlock.mainCompressor.state_a.h))
*/
void sCO2PBRig_eqFunction_978(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,978};
  data->localData[0]->realVars[260] /* powerBlock.mainCompressor.s_entrance variable */ = omc_SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E536861667424706F776572426C6F636B246D61696E436F6D70726573736F72_Medium_specificEntropy(threadData, omc_SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E536861667424706F776572426C6F636B246D61696E436F6D70726573736F72_Medium_ThermodynamicState(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[261] /* powerBlock.mainCompressor.state_a.h variable */));
  TRACE_POP
}
/*
equation index: 979
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._p_out = powerBlock.turbine.p_out * powerBlock.PR
*/
void sCO2PBRig_eqFunction_979(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,979};
  data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */ = (data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */) * (data->simulationInfo->realParameter[307] /* powerBlock.PR PARAM */);
  TRACE_POP
}
/*
equation index: 980
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[15] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[15], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_980(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,980};
  data->localData[0]->realVars[127] /* powerBlock.LTR.T_from_comp[15] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[15] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 981
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[4] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[4], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_981(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,981};
  data->localData[0]->realVars[116] /* powerBlock.LTR.T_from_comp[4] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[4] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 982
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[6] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[6], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_982(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,982};
  data->localData[0]->realVars[118] /* powerBlock.LTR.T_from_comp[6] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[6] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 983
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[7] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[7], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_983(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,983};
  data->localData[0]->realVars[119] /* powerBlock.LTR.T_from_comp[7] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[7] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 984
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[11] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[11], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_984(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,984};
  data->localData[0]->realVars[123] /* powerBlock.LTR.T_from_comp[11] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[11] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 985
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[12] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[12], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_985(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,985};
  data->localData[0]->realVars[124] /* powerBlock.LTR.T_from_comp[12] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[12] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 986
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[13] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[13], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_986(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,986};
  data->localData[0]->realVars[125] /* powerBlock.LTR.T_from_comp[13] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[13] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 987
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[14] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[14], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_987(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,987};
  data->localData[0]->realVars[126] /* powerBlock.LTR.T_from_comp[14] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[14] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 988
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[10] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[10], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_988(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,988};
  data->localData[0]->realVars[122] /* powerBlock.LTR.T_from_comp[10] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[10] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 989
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[9] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[9], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_989(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,989};
  data->localData[0]->realVars[121] /* powerBlock.LTR.T_from_comp[9] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[9] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 990
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[8] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[8], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_990(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,990};
  data->localData[0]->realVars[120] /* powerBlock.LTR.T_from_comp[8] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[8] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 991
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[5] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[5], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_991(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,991};
  data->localData[0]->realVars[117] /* powerBlock.LTR.T_from_comp[5] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[5] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 992
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[3] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[3], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,992};
  data->localData[0]->realVars[115] /* powerBlock.LTR.T_from_comp[3] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[3] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 993
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[2] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[2], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_993(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,993};
  data->localData[0]->realVars[114] /* powerBlock.LTR.T_from_comp[2] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[159] /* powerBlock.LTR.h_from_comp[2] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 994
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._state_isen._h = SolarTherm.Media.CO2.CO2_utilities.h_p_s(powerBlock.mainCompressor.p_out, powerBlock.mainCompressor.s_entrance, tableIDh_p_s)
*/
void sCO2PBRig_eqFunction_994(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,994};
  data->localData[0]->realVars[262] /* powerBlock.mainCompressor.state_isen.h variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__s(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[260] /* powerBlock.mainCompressor.s_entrance variable */, data->simulationInfo->extObjs[39]);
  TRACE_POP
}
/*
equation index: 995
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._psi = (powerBlock.mainCompressor.state_isen.h - powerBlock.mainCompressor.state_a.h) / powerBlock.mainCompressor.tipSpeed ^ 2.0
*/
void sCO2PBRig_eqFunction_995(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,995};
  modelica_real tmp0;
  tmp0 = data->simulationInfo->realParameter[606] /* powerBlock.mainCompressor.tipSpeed PARAM */;
  data->localData[0]->realVars[259] /* powerBlock.mainCompressor.psi variable */ = DIVISION_SIM(data->localData[0]->realVars[262] /* powerBlock.mainCompressor.state_isen.h variable */ - data->localData[0]->realVars[261] /* powerBlock.mainCompressor.state_a.h variable */,(tmp0 * tmp0),"powerBlock.mainCompressor.tipSpeed ^ 2.0",equationIndexes);
  TRACE_POP
}
/*
equation index: 996
type: SIMPLE_ASSIGN
powerBlock._splitter._gamma_port_b._m_flow = powerBlock.splitter.gamma * powerBlock.exchanger.CO2_port_b.m_flow
*/
void sCO2PBRig_eqFunction_996(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,996};
  data->localData[0]->realVars[273] /* powerBlock.splitter.gamma_port_b.m_flow variable */ = (data->simulationInfo->realParameter[639] /* powerBlock.splitter.gamma PARAM */) * (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */);
  TRACE_POP
}
/*
equation index: 997
type: SIMPLE_ASSIGN
powerBlock._cooler._port_b._m_flow = (1.0 - powerBlock.splitter.gamma) * powerBlock.exchanger.CO2_port_b.m_flow
*/
void sCO2PBRig_eqFunction_997(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,997};
  data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */ = (1.0 - data->simulationInfo->realParameter[639] /* powerBlock.splitter.gamma PARAM */) * (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */);
  TRACE_POP
}
/*
equation index: 998
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2[15]._p = (powerBlock.splitter.gamma_port_b.m_flow * powerBlock.reCompressor.p_out + powerBlock.cooler.port_b.m_flow * powerBlock.mainCompressor.p_out) / (powerBlock.cooler.port_b.m_flow + powerBlock.splitter.gamma_port_b.m_flow)
*/
void sCO2PBRig_eqFunction_998(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,998};
  data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */ = DIVISION_SIM((data->localData[0]->realVars[273] /* powerBlock.splitter.gamma_port_b.m_flow variable */) * (data->localData[0]->realVars[266] /* powerBlock.reCompressor.p_out variable */) + (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */),data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */ + data->localData[0]->realVars[273] /* powerBlock.splitter.gamma_port_b.m_flow variable */,"powerBlock.cooler.port_b.m_flow + powerBlock.splitter.gamma_port_b.m_flow",equationIndexes);
  TRACE_POP
}
/*
equation index: 999
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[2] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[2], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_999(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,999};
  data->localData[0]->realVars[40] /* powerBlock.HTR.T_from_comp[2] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1000
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[3] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[3], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1000(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1000};
  data->localData[0]->realVars[41] /* powerBlock.HTR.T_from_comp[3] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1001
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[4] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[4], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1001(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1001};
  data->localData[0]->realVars[42] /* powerBlock.HTR.T_from_comp[4] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1002
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[5] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[5], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1002(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1002};
  data->localData[0]->realVars[43] /* powerBlock.HTR.T_from_comp[5] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1003
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[6] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[6], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1003(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1003};
  data->localData[0]->realVars[44] /* powerBlock.HTR.T_from_comp[6] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1004
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[7] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[7], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1004(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1004};
  data->localData[0]->realVars[45] /* powerBlock.HTR.T_from_comp[7] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1005
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[8] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[8], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1005(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1005};
  data->localData[0]->realVars[46] /* powerBlock.HTR.T_from_comp[8] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1006
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[9] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[9], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1006(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1006};
  data->localData[0]->realVars[47] /* powerBlock.HTR.T_from_comp[9] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1007
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[11] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[11], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1007(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1007};
  data->localData[0]->realVars[49] /* powerBlock.HTR.T_from_comp[11] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1008
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[10] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[10], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1008(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1008};
  data->localData[0]->realVars[48] /* powerBlock.HTR.T_from_comp[10] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1009
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[12] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[12], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1009(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1009};
  data->localData[0]->realVars[50] /* powerBlock.HTR.T_from_comp[12] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1010
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[13] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[13], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1010(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1010};
  data->localData[0]->realVars[51] /* powerBlock.HTR.T_from_comp[13] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1011
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[14] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[14], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1011(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1011};
  data->localData[0]->realVars[52] /* powerBlock.HTR.T_from_comp[14] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1012
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[15] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[1], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1012(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1012};
  data->localData[0]->realVars[53] /* powerBlock.HTR.T_from_comp[15] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[222] /* powerBlock.exchanger.h_CO2[1] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1013
type: SIMPLE_ASSIGN
_omcQuot_246373653234 = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[3], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1013(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1013};
  data->localData[0]->realVars[21] /* $cse24 variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1014
type: SIMPLE_ASSIGN
_omcQuot_246373653232 = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[4], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1014(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1014};
  data->localData[0]->realVars[19] /* $cse22 variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1015
type: SIMPLE_ASSIGN
_omcQuot_246373653236 = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[2], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1015(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1015};
  data->localData[0]->realVars[23] /* $cse26 variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1016
type: SIMPLE_ASSIGN
_omcQuot_246373653138 = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[6], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1016(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1016};
  data->localData[0]->realVars[14] /* $cse18 variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1017
type: SIMPLE_ASSIGN
_omcQuot_246373653230 = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[5], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1017(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1017};
  data->localData[0]->realVars[17] /* $cse20 variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1018
type: SIMPLE_ASSIGN
_omcQuot_246373653136 = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[7], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1018(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1018};
  data->localData[0]->realVars[12] /* $cse16 variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1019
type: SIMPLE_ASSIGN
_omcQuot_246373653134 = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[8], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1019(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1019};
  data->localData[0]->realVars[10] /* $cse14 variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1020
type: SIMPLE_ASSIGN
_omcQuot_246373653132 = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[9], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1020(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1020};
  data->localData[0]->realVars[8] /* $cse12 variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1021
type: SIMPLE_ASSIGN
_omcQuot_246373653130 = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[10], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1021(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1021};
  data->localData[0]->realVars[6] /* $cse10 variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1022
type: SIMPLE_ASSIGN
_omcQuot_2463736538 = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[11], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1022(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1022};
  data->localData[0]->realVars[30] /* $cse8 variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1023
type: SIMPLE_ASSIGN
_omcQuot_2463736536 = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[12], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1023(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1023};
  data->localData[0]->realVars[28] /* $cse6 variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1024
type: SIMPLE_ASSIGN
_omcQuot_2463736534 = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[13], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1024(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1024};
  data->localData[0]->realVars[26] /* $cse4 variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1025
type: SIMPLE_ASSIGN
_omcQuot_2463736532 = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[14], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1025(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1025};
  data->localData[0]->realVars[16] /* $cse2 variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1026
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._phi = (-powerBlock.cooler.port_b.m_flow) / (powerBlock.mainCompressor.diam_rotor ^ 2.0 * powerBlock.mainCompressor.d_entrance * powerBlock.mainCompressor.tipSpeed)
*/
void sCO2PBRig_eqFunction_1026(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1026};
  modelica_real tmp0;
  tmp0 = data->simulationInfo->realParameter[592] /* powerBlock.mainCompressor.diam_rotor PARAM */;
  data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */ = DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),((tmp0 * tmp0)) * ((data->localData[0]->realVars[254] /* powerBlock.mainCompressor.d_entrance variable */) * (data->simulationInfo->realParameter[606] /* powerBlock.mainCompressor.tipSpeed PARAM */)),"powerBlock.mainCompressor.diam_rotor ^ 2.0 * powerBlock.mainCompressor.d_entrance * powerBlock.mainCompressor.tipSpeed",equationIndexes);
  TRACE_POP
}
/*
equation index: 1027
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._eta_comp = 1.475280930371166 * powerBlock.mainCompressor.eta_design * (-0.7069 + 168.6 * powerBlock.mainCompressor.phi + (-8089.0) * powerBlock.mainCompressor.phi ^ 2.0 + 182725.0 * powerBlock.mainCompressor.phi ^ 3.0 + (-1638000.0) * powerBlock.mainCompressor.phi ^ 4.0)
*/
void sCO2PBRig_eqFunction_1027(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1027};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */;
  tmp1 = data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */;
  tmp2 = data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */;
  tmp2 *= tmp2;
  data->localData[0]->realVars[255] /* powerBlock.mainCompressor.eta_comp variable */ = (1.475280930371166) * ((data->simulationInfo->realParameter[593] /* powerBlock.mainCompressor.eta_design PARAM */) * (-0.7069 + (168.6) * (data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */) + (-8089.0) * ((tmp0 * tmp0)) + (182725.0) * ((tmp1 * tmp1 * tmp1)) + (-1638000.0) * ((tmp2 * tmp2))));
  TRACE_POP
}
/*
equation index: 1028
type: SIMPLE_ASSIGN
powerBlock._LTR._h_from_comp[1] = powerBlock.mainCompressor.state_a.h + (powerBlock.mainCompressor.state_isen.h - powerBlock.mainCompressor.state_a.h) / powerBlock.mainCompressor.eta_comp
*/
void sCO2PBRig_eqFunction_1028(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1028};
  data->localData[0]->realVars[158] /* powerBlock.LTR.h_from_comp[1] variable */ = data->localData[0]->realVars[261] /* powerBlock.mainCompressor.state_a.h variable */ + DIVISION_SIM(data->localData[0]->realVars[262] /* powerBlock.mainCompressor.state_isen.h variable */ - data->localData[0]->realVars[261] /* powerBlock.mainCompressor.state_a.h variable */,data->localData[0]->realVars[255] /* powerBlock.mainCompressor.eta_comp variable */,"powerBlock.mainCompressor.eta_comp",equationIndexes);
  TRACE_POP
}
/*
equation index: 1029
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[1] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[1], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1029(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1029};
  data->localData[0]->realVars[113] /* powerBlock.LTR.T_from_comp[1] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[158] /* powerBlock.LTR.h_from_comp[1] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1030
type: SIMPLE_ASSIGN
powerBlock._HTR._from_comp_port_b._m_flow = powerBlock.cooler.port_b.m_flow + powerBlock.splitter.gamma_port_b.m_flow
*/
void sCO2PBRig_eqFunction_1030(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1030};
  data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */ = data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */ + data->localData[0]->realVars[273] /* powerBlock.splitter.gamma_port_b.m_flow variable */;
  TRACE_POP
}
/*
equation index: 1031
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[1] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[1], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1031(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1031};
  data->localData[0]->realVars[128] /* powerBlock.LTR.T_from_turb[1] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1032
type: SIMPLE_ASSIGN
powerBlock._reCompressor._d_entrance = SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[1], tableIDd_p_h)
*/
void sCO2PBRig_eqFunction_1032(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1032};
  data->localData[0]->realVars[264] /* powerBlock.reCompressor.d_entrance variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_rho__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */, data->simulationInfo->extObjs[37]);
  TRACE_POP
}
/*
equation index: 1033
type: SIMPLE_ASSIGN
powerBlock._reCompressor._s_entrance = SolarTherm.Models.PowerBlocks.sCO2Cycle.DirectDesign.CompressorOnShaft$powerBlock$reCompressor.Medium.specificEntropy(SolarTherm.Models.PowerBlocks.sCO2Cycle.DirectDesign.CompressorOnShaft$powerBlock$reCompressor.Medium.ThermodynamicState(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[1]))
*/
void sCO2PBRig_eqFunction_1033(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1033};
  data->localData[0]->realVars[270] /* powerBlock.reCompressor.s_entrance variable */ = omc_SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E536861667424706F776572426C6F636B247265436F6D70726573736F72_Medium_specificEntropy(threadData, omc_SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E536861667424706F776572426C6F636B247265436F6D70726573736F72_Medium_ThermodynamicState(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */));
  TRACE_POP
}
/*
equation index: 1034
type: SIMPLE_ASSIGN
powerBlock._reCompressor._state_isen._h = SolarTherm.Media.CO2.CO2_utilities.h_p_s(powerBlock.reCompressor.p_out, powerBlock.reCompressor.s_entrance, tableIDh_p_s)
*/
void sCO2PBRig_eqFunction_1034(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1034};
  data->localData[0]->realVars[272] /* powerBlock.reCompressor.state_isen.h variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__s(threadData, data->localData[0]->realVars[266] /* powerBlock.reCompressor.p_out variable */, data->localData[0]->realVars[270] /* powerBlock.reCompressor.s_entrance variable */, data->simulationInfo->extObjs[39]);
  TRACE_POP
}
/*
equation index: 1035
type: SIMPLE_ASSIGN
powerBlock._reCompressor._phi = (-powerBlock.splitter.gamma_port_b.m_flow) / (powerBlock.reCompressor.diam_rotor ^ 2.0 * powerBlock.reCompressor.d_entrance * powerBlock.reCompressor.tipSpeed)
*/
void sCO2PBRig_eqFunction_1035(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1035};
  modelica_real tmp0;
  tmp0 = data->simulationInfo->realParameter[624] /* powerBlock.reCompressor.diam_rotor PARAM */;
  data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */ = DIVISION_SIM((-data->localData[0]->realVars[273] /* powerBlock.splitter.gamma_port_b.m_flow variable */),((tmp0 * tmp0)) * ((data->localData[0]->realVars[264] /* powerBlock.reCompressor.d_entrance variable */) * (data->simulationInfo->realParameter[638] /* powerBlock.reCompressor.tipSpeed PARAM */)),"powerBlock.reCompressor.diam_rotor ^ 2.0 * powerBlock.reCompressor.d_entrance * powerBlock.reCompressor.tipSpeed",equationIndexes);
  TRACE_POP
}
/*
equation index: 1036
type: SIMPLE_ASSIGN
powerBlock._reCompressor._psi = 2.165349463874431 * (0.04049 + 54.7 * powerBlock.reCompressor.phi + (-2505.0) * powerBlock.reCompressor.phi ^ 2.0 + 53224.0 * powerBlock.reCompressor.phi ^ 3.0 + (-498626.0) * powerBlock.reCompressor.phi ^ 4.0) * powerBlock.reCompressor.psi_des
*/
void sCO2PBRig_eqFunction_1036(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1036};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */;
  tmp1 = data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */;
  tmp2 = data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */;
  tmp2 *= tmp2;
  data->localData[0]->realVars[269] /* powerBlock.reCompressor.psi variable */ = (2.165349463874431) * ((0.04049 + (54.7) * (data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */) + (-2505.0) * ((tmp0 * tmp0)) + (53224.0) * ((tmp1 * tmp1 * tmp1)) + (-498626.0) * ((tmp2 * tmp2))) * (data->simulationInfo->realParameter[633] /* powerBlock.reCompressor.psi_des PARAM */));
  TRACE_POP
}
/*
equation index: 1037
type: SIMPLE_ASSIGN
powerBlock._reCompressor._eta_comp = 1.475280930371166 * powerBlock.reCompressor.eta_design * (-0.7069 + 168.6 * powerBlock.reCompressor.phi + (-8089.0) * powerBlock.reCompressor.phi ^ 2.0 + 182725.0 * powerBlock.reCompressor.phi ^ 3.0 + (-1638000.0) * powerBlock.reCompressor.phi ^ 4.0)
*/
void sCO2PBRig_eqFunction_1037(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1037};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */;
  tmp1 = data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */;
  tmp2 = data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */;
  tmp2 *= tmp2;
  data->localData[0]->realVars[265] /* powerBlock.reCompressor.eta_comp variable */ = (1.475280930371166) * ((data->simulationInfo->realParameter[625] /* powerBlock.reCompressor.eta_design PARAM */) * (-0.7069 + (168.6) * (data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */) + (-8089.0) * ((tmp0 * tmp0)) + (182725.0) * ((tmp1 * tmp1 * tmp1)) + (-1638000.0) * ((tmp2 * tmp2))));
  TRACE_POP
}
/*
equation index: 1038
type: SIMPLE_ASSIGN
powerBlock._reCompressor._state_b._h = powerBlock.LTR.h_from_turb[1] + (powerBlock.reCompressor.state_isen.h - powerBlock.LTR.h_from_turb[1]) / powerBlock.reCompressor.eta_comp
*/
void sCO2PBRig_eqFunction_1038(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1038};
  data->localData[0]->realVars[271] /* powerBlock.reCompressor.state_b.h variable */ = data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */ + DIVISION_SIM(data->localData[0]->realVars[272] /* powerBlock.reCompressor.state_isen.h variable */ - data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */,data->localData[0]->realVars[265] /* powerBlock.reCompressor.eta_comp variable */,"powerBlock.reCompressor.eta_comp",equationIndexes);
  TRACE_POP
}
/*
equation index: 1039
type: SIMPLE_ASSIGN
powerBlock._HTR._h_from_comp[1] = (powerBlock.splitter.gamma_port_b.m_flow * powerBlock.reCompressor.state_b.h + powerBlock.cooler.port_b.m_flow * powerBlock.LTR.h_from_comp[15]) / (powerBlock.cooler.port_b.m_flow + powerBlock.splitter.gamma_port_b.m_flow)
*/
void sCO2PBRig_eqFunction_1039(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1039};
  data->localData[0]->realVars[84] /* powerBlock.HTR.h_from_comp[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[273] /* powerBlock.splitter.gamma_port_b.m_flow variable */) * (data->localData[0]->realVars[271] /* powerBlock.reCompressor.state_b.h variable */) + (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[15] variable */),data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */ + data->localData[0]->realVars[273] /* powerBlock.splitter.gamma_port_b.m_flow variable */,"powerBlock.cooler.port_b.m_flow + powerBlock.splitter.gamma_port_b.m_flow",equationIndexes);
  TRACE_POP
}
/*
equation index: 1040
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[1] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[1], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1040(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1040};
  data->localData[0]->realVars[39] /* powerBlock.HTR.T_from_comp[1] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[84] /* powerBlock.HTR.h_from_comp[1] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1041
type: SIMPLE_ASSIGN
powerBlock._exchanger._T_CO2_out = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[15], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1041(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1041};
  data->localData[0]->realVars[203] /* powerBlock.exchanger.T_CO2_out variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1042
type: SIMPLE_ASSIGN
powerBlock._turbine._s_entrance = SolarTherm.Models.PowerBlocks.sCO2Cycle.DirectDesign.Turbine$powerBlock$turbine.Medium.specificEntropy(SolarTherm.Models.PowerBlocks.sCO2Cycle.DirectDesign.Turbine$powerBlock$turbine.Medium.ThermodynamicState(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[15]))
*/
void sCO2PBRig_eqFunction_1042(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1042};
  data->localData[0]->realVars[279] /* powerBlock.turbine.s_entrance variable */ = omc_SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_54757262696E6524706F776572426C6F636B2474757262696E65_Medium_specificEntropy(threadData, omc_SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_54757262696E6524706F776572426C6F636B2474757262696E65_Medium_ThermodynamicState(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */));
  TRACE_POP
}
/*
equation index: 1043
type: SIMPLE_ASSIGN
powerBlock._turbine._state_isen._h = SolarTherm.Media.CO2.CO2_utilities.h_p_s(powerBlock.turbine.p_out, powerBlock.turbine.s_entrance, tableIDh_p_s)
*/
void sCO2PBRig_eqFunction_1043(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1043};
  data->localData[0]->realVars[280] /* powerBlock.turbine.state_isen.h variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__s(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[279] /* powerBlock.turbine.s_entrance variable */, data->simulationInfo->extObjs[39]);
  TRACE_POP
}
/*
equation index: 1044
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[14] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[14] - powerBlock.exchanger.h_CO2[15]) / source.ports[1].m_flow + source.state.h
*/
void sCO2PBRig_eqFunction_1044(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1044};
  data->localData[0]->realVars[250] /* powerBlock.exchanger.h_HTF[14] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */ - data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[307] /* source.state.h variable */;
  TRACE_POP
}
/*
equation index: 1045
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[13] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[13] - powerBlock.exchanger.h_CO2[14]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[14]
*/
void sCO2PBRig_eqFunction_1045(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1045};
  data->localData[0]->realVars[249] /* powerBlock.exchanger.h_HTF[13] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */ - data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[250] /* powerBlock.exchanger.h_HTF[14] variable */;
  TRACE_POP
}
/*
equation index: 1046
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[12] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[12] - powerBlock.exchanger.h_CO2[13]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[13]
*/
void sCO2PBRig_eqFunction_1046(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1046};
  data->localData[0]->realVars[248] /* powerBlock.exchanger.h_HTF[12] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */ - data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[249] /* powerBlock.exchanger.h_HTF[13] variable */;
  TRACE_POP
}
/*
equation index: 1047
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[11] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[11] - powerBlock.exchanger.h_CO2[12]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[12]
*/
void sCO2PBRig_eqFunction_1047(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1047};
  data->localData[0]->realVars[247] /* powerBlock.exchanger.h_HTF[11] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */ - data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[248] /* powerBlock.exchanger.h_HTF[12] variable */;
  TRACE_POP
}
/*
equation index: 1048
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[10] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[10] - powerBlock.exchanger.h_CO2[11]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[11]
*/
void sCO2PBRig_eqFunction_1048(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1048};
  data->localData[0]->realVars[246] /* powerBlock.exchanger.h_HTF[10] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */ - data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[247] /* powerBlock.exchanger.h_HTF[11] variable */;
  TRACE_POP
}
/*
equation index: 1049
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[9] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[9] - powerBlock.exchanger.h_CO2[10]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[10]
*/
void sCO2PBRig_eqFunction_1049(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1049};
  data->localData[0]->realVars[245] /* powerBlock.exchanger.h_HTF[9] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */ - data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[246] /* powerBlock.exchanger.h_HTF[10] variable */;
  TRACE_POP
}
/*
equation index: 1050
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[8] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[8] - powerBlock.exchanger.h_CO2[9]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[9]
*/
void sCO2PBRig_eqFunction_1050(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1050};
  data->localData[0]->realVars[244] /* powerBlock.exchanger.h_HTF[8] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */ - data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[245] /* powerBlock.exchanger.h_HTF[9] variable */;
  TRACE_POP
}
/*
equation index: 1051
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[7] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[7] - powerBlock.exchanger.h_CO2[8]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[8]
*/
void sCO2PBRig_eqFunction_1051(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1051};
  data->localData[0]->realVars[243] /* powerBlock.exchanger.h_HTF[7] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */ - data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[244] /* powerBlock.exchanger.h_HTF[8] variable */;
  TRACE_POP
}
/*
equation index: 1052
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[6] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[6] - powerBlock.exchanger.h_CO2[7]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[7]
*/
void sCO2PBRig_eqFunction_1052(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1052};
  data->localData[0]->realVars[242] /* powerBlock.exchanger.h_HTF[6] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */ - data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[243] /* powerBlock.exchanger.h_HTF[7] variable */;
  TRACE_POP
}
/*
equation index: 1053
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[5] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[5] - powerBlock.exchanger.h_CO2[6]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[6]
*/
void sCO2PBRig_eqFunction_1053(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1053};
  data->localData[0]->realVars[241] /* powerBlock.exchanger.h_HTF[5] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */ - data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[242] /* powerBlock.exchanger.h_HTF[6] variable */;
  TRACE_POP
}
/*
equation index: 1054
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[4] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[4] - powerBlock.exchanger.h_CO2[5]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[5]
*/
void sCO2PBRig_eqFunction_1054(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1054};
  data->localData[0]->realVars[240] /* powerBlock.exchanger.h_HTF[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */ - data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[241] /* powerBlock.exchanger.h_HTF[5] variable */;
  TRACE_POP
}
/*
equation index: 1055
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[3] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[3] - powerBlock.exchanger.h_CO2[4]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[4]
*/
void sCO2PBRig_eqFunction_1055(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1055};
  data->localData[0]->realVars[239] /* powerBlock.exchanger.h_HTF[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */ - data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[240] /* powerBlock.exchanger.h_HTF[4] variable */;
  TRACE_POP
}
/*
equation index: 1056
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[2] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[2] - powerBlock.exchanger.h_CO2[3]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[3]
*/
void sCO2PBRig_eqFunction_1056(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1056};
  data->localData[0]->realVars[238] /* powerBlock.exchanger.h_HTF[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */ - data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[239] /* powerBlock.exchanger.h_HTF[3] variable */;
  TRACE_POP
}
/*
equation index: 1057
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[1] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[1] - powerBlock.exchanger.h_CO2[2]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[2]
*/
void sCO2PBRig_eqFunction_1057(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1057};
  data->localData[0]->realVars[237] /* powerBlock.exchanger.h_HTF[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[222] /* powerBlock.exchanger.h_CO2[1] variable */ - data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[238] /* powerBlock.exchanger.h_HTF[2] variable */;
  TRACE_POP
}
/*
equation index: 1058
type: SIMPLE_ASSIGN
powerBlock._HTR._h_from_turb[15] = powerBlock.exchanger.h_CO2[15] + (powerBlock.turbine.state_isen.h - powerBlock.exchanger.h_CO2[15]) * powerBlock.turbine.eta_turb
*/
void sCO2PBRig_eqFunction_1058(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1058};
  data->localData[0]->realVars[111] /* powerBlock.HTR.h_from_turb[15] variable */ = data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */ + (data->localData[0]->realVars[280] /* powerBlock.turbine.state_isen.h variable */ - data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */) * (data->localData[0]->realVars[277] /* powerBlock.turbine.eta_turb variable */);
  TRACE_POP
}
/*
equation index: 1059
type: SIMPLE_ASSIGN
powerBlock._turbine._d_outlet = SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[15], tableIDd_p_h)
*/
void sCO2PBRig_eqFunction_1059(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1059};
  data->localData[0]->realVars[276] /* powerBlock.turbine.d_outlet variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_rho__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[111] /* powerBlock.HTR.h_from_turb[15] variable */, data->simulationInfo->extObjs[37]);
  TRACE_POP
}
/*
equation index: 1060
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[15] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[15], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_1060(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1060};
  data->localData[0]->realVars[67] /* powerBlock.HTR.T_from_turb[15] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[111] /* powerBlock.HTR.h_from_turb[15] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1061
type: SIMPLE_ASSIGN
_omcQuot_246373653235 = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[2])
*/
void sCO2PBRig_eqFunction_1061(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1061};
  data->localData[0]->realVars[22] /* $cse25 variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[238] /* powerBlock.exchanger.h_HTF[2] variable */);
  TRACE_POP
}
/*
equation index: 1062
type: SIMPLE_ASSIGN
powerBlock._exchanger._T_HTF_out = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[1])
*/
void sCO2PBRig_eqFunction_1062(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1062};
  data->localData[0]->realVars[205] /* powerBlock.exchanger.T_HTF_out variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[237] /* powerBlock.exchanger.h_HTF[1] variable */);
  TRACE_POP
}
/*
equation index: 1063
type: SIMPLE_ASSIGN
_omcQuot_246373653233 = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[3])
*/
void sCO2PBRig_eqFunction_1063(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1063};
  data->localData[0]->realVars[20] /* $cse23 variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[239] /* powerBlock.exchanger.h_HTF[3] variable */);
  TRACE_POP
}
/*
equation index: 1064
type: SIMPLE_ASSIGN
_omcQuot_246373653231 = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[4])
*/
void sCO2PBRig_eqFunction_1064(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1064};
  data->localData[0]->realVars[18] /* $cse21 variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[240] /* powerBlock.exchanger.h_HTF[4] variable */);
  TRACE_POP
}
/*
equation index: 1065
type: SIMPLE_ASSIGN
_omcQuot_246373653139 = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[5])
*/
void sCO2PBRig_eqFunction_1065(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1065};
  data->localData[0]->realVars[15] /* $cse19 variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[241] /* powerBlock.exchanger.h_HTF[5] variable */);
  TRACE_POP
}
/*
equation index: 1066
type: SIMPLE_ASSIGN
_omcQuot_246373653137 = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[6])
*/
void sCO2PBRig_eqFunction_1066(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1066};
  data->localData[0]->realVars[13] /* $cse17 variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[242] /* powerBlock.exchanger.h_HTF[6] variable */);
  TRACE_POP
}
/*
equation index: 1067
type: SIMPLE_ASSIGN
_omcQuot_246373653135 = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[7])
*/
void sCO2PBRig_eqFunction_1067(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1067};
  data->localData[0]->realVars[11] /* $cse15 variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[243] /* powerBlock.exchanger.h_HTF[7] variable */);
  TRACE_POP
}
/*
equation index: 1068
type: SIMPLE_ASSIGN
_omcQuot_246373653133 = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[8])
*/
void sCO2PBRig_eqFunction_1068(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1068};
  data->localData[0]->realVars[9] /* $cse13 variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[244] /* powerBlock.exchanger.h_HTF[8] variable */);
  TRACE_POP
}
/*
equation index: 1069
type: SIMPLE_ASSIGN
_omcQuot_246373653131 = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[9])
*/
void sCO2PBRig_eqFunction_1069(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1069};
  data->localData[0]->realVars[7] /* $cse11 variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[245] /* powerBlock.exchanger.h_HTF[9] variable */);
  TRACE_POP
}
/*
equation index: 1070
type: SIMPLE_ASSIGN
_omcQuot_2463736539 = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[10])
*/
void sCO2PBRig_eqFunction_1070(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1070};
  data->localData[0]->realVars[31] /* $cse9 variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[246] /* powerBlock.exchanger.h_HTF[10] variable */);
  TRACE_POP
}
/*
equation index: 1071
type: SIMPLE_ASSIGN
_omcQuot_2463736537 = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[11])
*/
void sCO2PBRig_eqFunction_1071(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1071};
  data->localData[0]->realVars[29] /* $cse7 variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[247] /* powerBlock.exchanger.h_HTF[11] variable */);
  TRACE_POP
}
/*
equation index: 1072
type: SIMPLE_ASSIGN
_omcQuot_2463736535 = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[12])
*/
void sCO2PBRig_eqFunction_1072(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1072};
  data->localData[0]->realVars[27] /* $cse5 variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[248] /* powerBlock.exchanger.h_HTF[12] variable */);
  TRACE_POP
}
/*
equation index: 1073
type: SIMPLE_ASSIGN
_omcQuot_2463736533 = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[13])
*/
void sCO2PBRig_eqFunction_1073(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1073};
  data->localData[0]->realVars[25] /* $cse3 variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[249] /* powerBlock.exchanger.h_HTF[13] variable */);
  TRACE_POP
}
/*
equation index: 1074
type: SIMPLE_ASSIGN
_omcQuot_2463736531 = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[14])
*/
void sCO2PBRig_eqFunction_1074(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1074};
  data->localData[0]->realVars[5] /* $cse1 variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[250] /* powerBlock.exchanger.h_HTF[14] variable */);
  TRACE_POP
}
/*
equation index: 1075
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[1] = powerBlock.exchanger.T_HTF_out - powerBlock.HTR.T_from_comp[15]
*/
void sCO2PBRig_eqFunction_1075(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1075};
  data->localData[0]->realVars[206] /* powerBlock.exchanger.deltaT[1] variable */ = data->localData[0]->realVars[205] /* powerBlock.exchanger.T_HTF_out variable */ - data->localData[0]->realVars[53] /* powerBlock.HTR.T_from_comp[15] variable */;
  TRACE_POP
}
/*
equation index: 1076
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[2] = $cse25 - $cse26
*/
void sCO2PBRig_eqFunction_1076(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1076};
  data->localData[0]->realVars[207] /* powerBlock.exchanger.deltaT[2] variable */ = data->localData[0]->realVars[22] /* $cse25 variable */ - data->localData[0]->realVars[23] /* $cse26 variable */;
  TRACE_POP
}
/*
equation index: 1077
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[3] = $cse23 - $cse24
*/
void sCO2PBRig_eqFunction_1077(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1077};
  data->localData[0]->realVars[208] /* powerBlock.exchanger.deltaT[3] variable */ = data->localData[0]->realVars[20] /* $cse23 variable */ - data->localData[0]->realVars[21] /* $cse24 variable */;
  TRACE_POP
}
/*
equation index: 1078
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[4] = $cse21 - $cse22
*/
void sCO2PBRig_eqFunction_1078(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1078};
  data->localData[0]->realVars[209] /* powerBlock.exchanger.deltaT[4] variable */ = data->localData[0]->realVars[18] /* $cse21 variable */ - data->localData[0]->realVars[19] /* $cse22 variable */;
  TRACE_POP
}
/*
equation index: 1079
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[5] = $cse19 - $cse20
*/
void sCO2PBRig_eqFunction_1079(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1079};
  data->localData[0]->realVars[210] /* powerBlock.exchanger.deltaT[5] variable */ = data->localData[0]->realVars[15] /* $cse19 variable */ - data->localData[0]->realVars[17] /* $cse20 variable */;
  TRACE_POP
}
/*
equation index: 1080
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[6] = $cse17 - $cse18
*/
void sCO2PBRig_eqFunction_1080(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1080};
  data->localData[0]->realVars[211] /* powerBlock.exchanger.deltaT[6] variable */ = data->localData[0]->realVars[13] /* $cse17 variable */ - data->localData[0]->realVars[14] /* $cse18 variable */;
  TRACE_POP
}
/*
equation index: 1081
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[7] = $cse15 - $cse16
*/
void sCO2PBRig_eqFunction_1081(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1081};
  data->localData[0]->realVars[212] /* powerBlock.exchanger.deltaT[7] variable */ = data->localData[0]->realVars[11] /* $cse15 variable */ - data->localData[0]->realVars[12] /* $cse16 variable */;
  TRACE_POP
}
/*
equation index: 1082
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[8] = $cse13 - $cse14
*/
void sCO2PBRig_eqFunction_1082(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1082};
  data->localData[0]->realVars[213] /* powerBlock.exchanger.deltaT[8] variable */ = data->localData[0]->realVars[9] /* $cse13 variable */ - data->localData[0]->realVars[10] /* $cse14 variable */;
  TRACE_POP
}
/*
equation index: 1083
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[9] = $cse11 - $cse12
*/
void sCO2PBRig_eqFunction_1083(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1083};
  data->localData[0]->realVars[214] /* powerBlock.exchanger.deltaT[9] variable */ = data->localData[0]->realVars[7] /* $cse11 variable */ - data->localData[0]->realVars[8] /* $cse12 variable */;
  TRACE_POP
}
/*
equation index: 1084
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[10] = $cse9 - $cse10
*/
void sCO2PBRig_eqFunction_1084(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1084};
  data->localData[0]->realVars[215] /* powerBlock.exchanger.deltaT[10] variable */ = data->localData[0]->realVars[31] /* $cse9 variable */ - data->localData[0]->realVars[6] /* $cse10 variable */;
  TRACE_POP
}
/*
equation index: 1085
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[11] = $cse7 - $cse8
*/
void sCO2PBRig_eqFunction_1085(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1085};
  data->localData[0]->realVars[216] /* powerBlock.exchanger.deltaT[11] variable */ = data->localData[0]->realVars[29] /* $cse7 variable */ - data->localData[0]->realVars[30] /* $cse8 variable */;
  TRACE_POP
}
/*
equation index: 1086
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[12] = $cse5 - $cse6
*/
void sCO2PBRig_eqFunction_1086(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1086};
  data->localData[0]->realVars[217] /* powerBlock.exchanger.deltaT[12] variable */ = data->localData[0]->realVars[27] /* $cse5 variable */ - data->localData[0]->realVars[28] /* $cse6 variable */;
  TRACE_POP
}
/*
equation index: 1087
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[13] = $cse3 - $cse4
*/
void sCO2PBRig_eqFunction_1087(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1087};
  data->localData[0]->realVars[218] /* powerBlock.exchanger.deltaT[13] variable */ = data->localData[0]->realVars[25] /* $cse3 variable */ - data->localData[0]->realVars[26] /* $cse4 variable */;
  TRACE_POP
}
/*
equation index: 1088
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[14] = $cse1 - $cse2
*/
void sCO2PBRig_eqFunction_1088(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1088};
  data->localData[0]->realVars[219] /* powerBlock.exchanger.deltaT[14] variable */ = data->localData[0]->realVars[5] /* $cse1 variable */ - data->localData[0]->realVars[16] /* $cse2 variable */;
  TRACE_POP
}
/*
equation index: 1089
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[15] = powerBlock.exchanger.T_HTF_in - powerBlock.exchanger.T_CO2_out
*/
void sCO2PBRig_eqFunction_1089(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1089};
  data->localData[0]->realVars[220] /* powerBlock.exchanger.deltaT[15] variable */ = data->localData[0]->realVars[204] /* powerBlock.exchanger.T_HTF_in variable */ - data->localData[0]->realVars[203] /* powerBlock.exchanger.T_CO2_out variable */;
  TRACE_POP
}

void residualFunc1164(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,1164};
  int i;
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_real tmp101;
  modelica_real tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_real tmp111;
  modelica_real tmp112;
  modelica_real tmp113;
  modelica_real tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_real tmp119;
  modelica_real tmp120;
  modelica_real tmp121;
  modelica_real tmp122;
  modelica_real tmp123;
  modelica_real tmp124;
  modelica_real tmp125;
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_real tmp129;
  modelica_real tmp130;
  modelica_real tmp131;
  modelica_real tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  modelica_real tmp135;
  modelica_real tmp136;
  modelica_real tmp137;
  modelica_real tmp138;
  modelica_real tmp139;
  modelica_real tmp140;
  modelica_real tmp141;
  modelica_real tmp142;
  modelica_real tmp143;
  modelica_real tmp144;
  modelica_real tmp145;
  modelica_real tmp146;
  modelica_real tmp147;
  modelica_real tmp148;
  modelica_real tmp149;
  modelica_real tmp150;
  modelica_real tmp151;
  modelica_real tmp152;
  modelica_real tmp153;
  modelica_real tmp154;
  modelica_real tmp155;
  modelica_real tmp156;
  modelica_real tmp157;
  modelica_real tmp158;
  modelica_real tmp159;
  modelica_real tmp160;
  modelica_real tmp161;
  modelica_real tmp162;
  modelica_real tmp163;
  modelica_real tmp164;
  modelica_real tmp165;
  modelica_real tmp166;
  modelica_real tmp167;
  modelica_real tmp168;
  modelica_real tmp169;
  modelica_real tmp170;
  modelica_real tmp171;
  modelica_real tmp172;
  modelica_real tmp173;
  modelica_real tmp174;
  modelica_real tmp175;
  modelica_real tmp176;
  modelica_real tmp177;
  modelica_real tmp178;
  modelica_real tmp179;
  modelica_real tmp180;
  modelica_real tmp181;
  modelica_real tmp182;
  modelica_real tmp183;
  modelica_real tmp184;
  modelica_real tmp185;
  modelica_real tmp186;
  modelica_real tmp187;
  modelica_real tmp188;
  modelica_real tmp189;
  modelica_real tmp190;
  modelica_real tmp191;
  modelica_real tmp192;
  modelica_real tmp193;
  modelica_real tmp194;
  modelica_real tmp195;
  modelica_real tmp196;
  modelica_real tmp197;
  modelica_real tmp198;
  modelica_real tmp199;
  modelica_real tmp200;
  modelica_real tmp201;
  modelica_real tmp202;
  modelica_real tmp203;
  modelica_real tmp204;
  modelica_real tmp205;
  modelica_real tmp206;
  modelica_real tmp207;
  modelica_real tmp208;
  modelica_real tmp209;
  modelica_real tmp210;
  modelica_real tmp211;
  modelica_real tmp212;
  modelica_real tmp213;
  modelica_real tmp214;
  modelica_real tmp215;
  modelica_real tmp216;
  modelica_real tmp217;
  modelica_real tmp218;
  modelica_real tmp219;
  modelica_real tmp220;
  modelica_real tmp221;
  modelica_real tmp222;
  modelica_real tmp223;
  modelica_real tmp224;
  modelica_real tmp225;
  modelica_real tmp226;
  modelica_real tmp227;
  modelica_real tmp228;
  modelica_real tmp229;
  modelica_real tmp230;
  modelica_real tmp231;
  modelica_real tmp232;
  modelica_real tmp233;
  modelica_real tmp234;
  modelica_real tmp235;
  modelica_real tmp236;
  modelica_real tmp237;
  modelica_real tmp238;
  modelica_real tmp239;
  modelica_real tmp240;
  modelica_real tmp241;
  modelica_real tmp242;
  modelica_real tmp243;
  modelica_real tmp244;
  modelica_real tmp245;
  modelica_real tmp246;
  modelica_real tmp247;
  modelica_real tmp248;
  modelica_real tmp249;
  modelica_real tmp250;
  modelica_real tmp251;
  modelica_real tmp252;
  modelica_real tmp253;
  modelica_real tmp254;
  modelica_real tmp255;
  modelica_real tmp256;
  modelica_real tmp257;
  modelica_real tmp258;
  modelica_real tmp259;
  modelica_real tmp260;
  modelica_real tmp261;
  modelica_real tmp262;
  modelica_real tmp263;
  modelica_real tmp264;
  modelica_real tmp265;
  modelica_real tmp266;
  modelica_real tmp267;
  modelica_real tmp268;
  modelica_real tmp269;
  modelica_real tmp270;
  modelica_real tmp271;
  modelica_real tmp272;
  modelica_real tmp273;
  modelica_real tmp274;
  modelica_real tmp275;
  modelica_real tmp276;
  modelica_real tmp277;
  modelica_real tmp278;
  modelica_real tmp279;
  modelica_real tmp280;
  modelica_real tmp281;
  modelica_real tmp282;
  modelica_real tmp283;
  modelica_real tmp284;
  modelica_real tmp285;
  modelica_real tmp286;
  modelica_real tmp287;
  modelica_real tmp288;
  modelica_real tmp289;
  modelica_real tmp290;
  modelica_real tmp291;
  modelica_real tmp292;
  modelica_real tmp293;
  modelica_real tmp294;
  modelica_real tmp295;
  modelica_real tmp296;
  modelica_real tmp297;
  modelica_real tmp298;
  /* iteration variables */
  for (i=0; i<74; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<74; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */ = xloc[0];
  data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */ = xloc[1];
  data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */ = xloc[2];
  data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */ = xloc[3];
  data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[15] variable */ = xloc[4];
  data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */ = xloc[5];
  data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */ = xloc[6];
  data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */ = xloc[7];
  data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */ = xloc[8];
  data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */ = xloc[9];
  data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */ = xloc[10];
  data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */ = xloc[11];
  data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */ = xloc[12];
  data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */ = xloc[13];
  data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */ = xloc[14];
  data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */ = xloc[15];
  data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */ = xloc[16];
  data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */ = xloc[17];
  data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */ = xloc[18];
  data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */ = xloc[19];
  data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */ = xloc[20];
  data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */ = xloc[21];
  data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */ = xloc[22];
  data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */ = xloc[23];
  data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */ = xloc[24];
  data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */ = xloc[25];
  data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */ = xloc[26];
  data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */ = xloc[27];
  data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */ = xloc[28];
  data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */ = xloc[29];
  data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */ = xloc[30];
  data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */ = xloc[31];
  data->localData[0]->realVars[222] /* powerBlock.exchanger.h_CO2[1] variable */ = xloc[32];
  data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */ = xloc[33];
  data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */ = xloc[34];
  data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */ = xloc[35];
  data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */ = xloc[36];
  data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */ = xloc[37];
  data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */ = xloc[38];
  data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */ = xloc[39];
  data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */ = xloc[40];
  data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */ = xloc[41];
  data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */ = xloc[42];
  data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */ = xloc[43];
  data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */ = xloc[44];
  data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */ = xloc[45];
  data->localData[0]->realVars[266] /* powerBlock.reCompressor.p_out variable */ = xloc[46];
  data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */ = xloc[47];
  data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */ = xloc[48];
  data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */ = xloc[49];
  data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[4] variable */ = xloc[50];
  data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */ = xloc[51];
  data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */ = xloc[52];
  data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[6] variable */ = xloc[53];
  data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[7] variable */ = xloc[54];
  data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */ = xloc[55];
  data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */ = xloc[56];
  data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */ = xloc[57];
  data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */ = xloc[58];
  data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */ = xloc[59];
  data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[11] variable */ = xloc[60];
  data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[12] variable */ = xloc[61];
  data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */ = xloc[62];
  data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[13] variable */ = xloc[63];
  data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */ = xloc[64];
  data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[14] variable */ = xloc[65];
  data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */ = xloc[66];
  data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[10] variable */ = xloc[67];
  data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[9] variable */ = xloc[68];
  data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[8] variable */ = xloc[69];
  data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[5] variable */ = xloc[70];
  data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[3] variable */ = xloc[71];
  data->localData[0]->realVars[159] /* powerBlock.LTR.h_from_comp[2] variable */ = xloc[72];
  data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */ = xloc[73];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  sCO2PBRig_eqFunction_948(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_949(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_950(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_951(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_952(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_953(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_954(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_955(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_956(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_957(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_958(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_959(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_960(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_961(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_962(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_963(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_964(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_965(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_966(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_967(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_968(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_969(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_970(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_971(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_972(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_973(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_974(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_975(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_976(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_977(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_978(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_979(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_980(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_981(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_982(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_983(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_984(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_985(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_986(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_987(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_988(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_989(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_990(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_991(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_992(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_993(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_994(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_995(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_996(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_997(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_998(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_999(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1000(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1001(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1002(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1003(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1004(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1005(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1006(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1007(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1008(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1009(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1010(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1011(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1012(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1013(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1014(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1015(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1016(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1017(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1018(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1019(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1020(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1021(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1022(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1023(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1024(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1025(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1026(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1027(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1028(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1029(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1030(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1031(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1032(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1033(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1034(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1035(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1036(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1037(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1038(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1039(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1040(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1041(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1042(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1043(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1044(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1045(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1046(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1047(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1048(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1049(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1050(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1051(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1052(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1053(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1054(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1055(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1056(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1057(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1058(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1059(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1060(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1061(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1062(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1063(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1064(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1065(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1066(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1067(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1068(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1069(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1070(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1071(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1072(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1073(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1074(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1075(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1076(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1077(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1078(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1079(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1080(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1081(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1082(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1083(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1084(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1085(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1086(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1087(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1088(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_1089(data, threadData);
  /* body */
  tmp0 = data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */;
  tmp1 = data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */;
  tmp2 = data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */;
  tmp2 *= tmp2;res[0] = (2.165349463874431) * ((0.04049 + (54.7) * (data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */) + (-2505.0) * ((tmp0 * tmp0)) + (53224.0) * ((tmp1 * tmp1 * tmp1)) + (-498626.0) * ((tmp2 * tmp2))) * (data->simulationInfo->realParameter[601] /* powerBlock.mainCompressor.psi_des PARAM */)) - data->localData[0]->realVars[259] /* powerBlock.mainCompressor.psi variable */;

  tmp3 = data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */;
  res[1] = (2.0) * (data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */ - data->localData[0]->realVars[280] /* powerBlock.turbine.state_isen.h variable */) - ((tmp3 * tmp3));

  res[2] = (data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */) * ((data->simulationInfo->realParameter[643] /* powerBlock.turbine.A_nozzle PARAM */) * (data->localData[0]->realVars[276] /* powerBlock.turbine.d_outlet variable */)) + data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */;

  res[3] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[158] /* powerBlock.LTR.h_from_comp[1] variable */ - data->localData[0]->realVars[159] /* powerBlock.LTR.h_from_comp[2] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */ - data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */);

  res[4] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[159] /* powerBlock.LTR.h_from_comp[2] variable */ - data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[3] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */ - data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */);

  res[5] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[4] variable */ - data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[5] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */ - data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */);

  res[6] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[7] variable */ - data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[8] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */ - data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */);

  res[7] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[8] variable */ - data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[9] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */ - data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */);

  res[8] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[9] variable */ - data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[10] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */ - data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */);

  tmp4 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp5 = 0.8;
  if(tmp4 < 0.0 && tmp5 != 0.0)
  {
    tmp7 = modf(tmp5, &tmp8);
    
    if(tmp7 > 0.5)
    {
      tmp7 -= 1.0;
      tmp8 += 1.0;
    }
    else if(tmp7 < -0.5)
    {
      tmp7 += 1.0;
      tmp8 -= 1.0;
    }
    
    if(fabs(tmp7) < 1e-10)
      tmp6 = pow(tmp4, tmp8);
    else
    {
      tmp10 = modf(1.0/tmp5, &tmp9);
      if(tmp10 > 0.5)
      {
        tmp10 -= 1.0;
        tmp9 += 1.0;
      }
      else if(tmp10 < -0.5)
      {
        tmp10 += 1.0;
        tmp9 -= 1.0;
      }
      if(fabs(tmp10) < 1e-10 && ((unsigned long)tmp9 & 1))
      {
        tmp6 = -pow(-tmp4, tmp7)*pow(tmp4, tmp8);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
      }
    }
  }
  else
  {
    tmp6 = pow(tmp4, tmp5);
  }
  if(isnan(tmp6) || isinf(tmp6))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp4, tmp5);
  }res[9] = (0.2871745887492588) * ((data->simulationInfo->realParameter[218] /* powerBlock.LTR.UA_dis[14] PARAM */) * ((tmp6) * (data->localData[0]->realVars[141] /* powerBlock.LTR.T_from_turb[14] variable */ + data->localData[0]->realVars[142] /* powerBlock.LTR.T_from_turb[15] variable */ + (-data->localData[0]->realVars[126] /* powerBlock.LTR.T_from_comp[14] variable */) - data->localData[0]->realVars[127] /* powerBlock.LTR.T_from_comp[15] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */ - data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */);

  res[10] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[13] variable */ - data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[14] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */ - data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */);

  tmp11 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp12 = 0.8;
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
  }res[11] = (0.2871745887492588) * ((data->simulationInfo->realParameter[217] /* powerBlock.LTR.UA_dis[13] PARAM */) * ((tmp13) * (data->localData[0]->realVars[140] /* powerBlock.LTR.T_from_turb[13] variable */ + data->localData[0]->realVars[141] /* powerBlock.LTR.T_from_turb[14] variable */ + (-data->localData[0]->realVars[125] /* powerBlock.LTR.T_from_comp[13] variable */) - data->localData[0]->realVars[126] /* powerBlock.LTR.T_from_comp[14] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */ - data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */);

  res[12] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[12] variable */ - data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[13] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */ - data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */);

  tmp18 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp19 = 0.8;
  if(tmp18 < 0.0 && tmp19 != 0.0)
  {
    tmp21 = modf(tmp19, &tmp22);
    
    if(tmp21 > 0.5)
    {
      tmp21 -= 1.0;
      tmp22 += 1.0;
    }
    else if(tmp21 < -0.5)
    {
      tmp21 += 1.0;
      tmp22 -= 1.0;
    }
    
    if(fabs(tmp21) < 1e-10)
      tmp20 = pow(tmp18, tmp22);
    else
    {
      tmp24 = modf(1.0/tmp19, &tmp23);
      if(tmp24 > 0.5)
      {
        tmp24 -= 1.0;
        tmp23 += 1.0;
      }
      else if(tmp24 < -0.5)
      {
        tmp24 += 1.0;
        tmp23 -= 1.0;
      }
      if(fabs(tmp24) < 1e-10 && ((unsigned long)tmp23 & 1))
      {
        tmp20 = -pow(-tmp18, tmp21)*pow(tmp18, tmp22);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp18, tmp19);
      }
    }
  }
  else
  {
    tmp20 = pow(tmp18, tmp19);
  }
  if(isnan(tmp20) || isinf(tmp20))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp18, tmp19);
  }res[13] = (0.2871745887492588) * ((data->simulationInfo->realParameter[216] /* powerBlock.LTR.UA_dis[12] PARAM */) * ((tmp20) * (data->localData[0]->realVars[139] /* powerBlock.LTR.T_from_turb[12] variable */ + data->localData[0]->realVars[140] /* powerBlock.LTR.T_from_turb[13] variable */ + (-data->localData[0]->realVars[124] /* powerBlock.LTR.T_from_comp[12] variable */) - data->localData[0]->realVars[125] /* powerBlock.LTR.T_from_comp[13] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */ - data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */);

  res[14] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[11] variable */ - data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[12] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */ - data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */);

  tmp25 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp26 = 0.8;
  if(tmp25 < 0.0 && tmp26 != 0.0)
  {
    tmp28 = modf(tmp26, &tmp29);
    
    if(tmp28 > 0.5)
    {
      tmp28 -= 1.0;
      tmp29 += 1.0;
    }
    else if(tmp28 < -0.5)
    {
      tmp28 += 1.0;
      tmp29 -= 1.0;
    }
    
    if(fabs(tmp28) < 1e-10)
      tmp27 = pow(tmp25, tmp29);
    else
    {
      tmp31 = modf(1.0/tmp26, &tmp30);
      if(tmp31 > 0.5)
      {
        tmp31 -= 1.0;
        tmp30 += 1.0;
      }
      else if(tmp31 < -0.5)
      {
        tmp31 += 1.0;
        tmp30 -= 1.0;
      }
      if(fabs(tmp31) < 1e-10 && ((unsigned long)tmp30 & 1))
      {
        tmp27 = -pow(-tmp25, tmp28)*pow(tmp25, tmp29);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp25, tmp26);
      }
    }
  }
  else
  {
    tmp27 = pow(tmp25, tmp26);
  }
  if(isnan(tmp27) || isinf(tmp27))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp25, tmp26);
  }res[15] = (0.2871745887492588) * ((data->simulationInfo->realParameter[215] /* powerBlock.LTR.UA_dis[11] PARAM */) * ((tmp27) * (data->localData[0]->realVars[138] /* powerBlock.LTR.T_from_turb[11] variable */ + data->localData[0]->realVars[139] /* powerBlock.LTR.T_from_turb[12] variable */ + (-data->localData[0]->realVars[123] /* powerBlock.LTR.T_from_comp[11] variable */) - data->localData[0]->realVars[124] /* powerBlock.LTR.T_from_comp[12] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */ - data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */);

  res[16] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[10] variable */ - data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[11] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */ - data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */);

  tmp32 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp33 = 0.8;
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
  }res[17] = (0.2871745887492588) * ((data->simulationInfo->realParameter[214] /* powerBlock.LTR.UA_dis[10] PARAM */) * ((tmp34) * (data->localData[0]->realVars[137] /* powerBlock.LTR.T_from_turb[10] variable */ + data->localData[0]->realVars[138] /* powerBlock.LTR.T_from_turb[11] variable */ + (-data->localData[0]->realVars[122] /* powerBlock.LTR.T_from_comp[10] variable */) - data->localData[0]->realVars[123] /* powerBlock.LTR.T_from_comp[11] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */ - data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */);

  tmp39 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp40 = 0.8;
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
  }res[18] = (0.2871745887492588) * ((data->simulationInfo->realParameter[213] /* powerBlock.LTR.UA_dis[9] PARAM */) * ((tmp41) * (data->localData[0]->realVars[136] /* powerBlock.LTR.T_from_turb[9] variable */ + data->localData[0]->realVars[137] /* powerBlock.LTR.T_from_turb[10] variable */ + (-data->localData[0]->realVars[121] /* powerBlock.LTR.T_from_comp[9] variable */) - data->localData[0]->realVars[122] /* powerBlock.LTR.T_from_comp[10] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */ - data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */);

  tmp46 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp47 = 0.8;
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
  }res[19] = (0.2871745887492588) * ((data->simulationInfo->realParameter[212] /* powerBlock.LTR.UA_dis[8] PARAM */) * ((tmp48) * (data->localData[0]->realVars[135] /* powerBlock.LTR.T_from_turb[8] variable */ + data->localData[0]->realVars[136] /* powerBlock.LTR.T_from_turb[9] variable */ + (-data->localData[0]->realVars[120] /* powerBlock.LTR.T_from_comp[8] variable */) - data->localData[0]->realVars[121] /* powerBlock.LTR.T_from_comp[9] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */ - data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */);

  tmp53 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp54 = 0.8;
  if(tmp53 < 0.0 && tmp54 != 0.0)
  {
    tmp56 = modf(tmp54, &tmp57);
    
    if(tmp56 > 0.5)
    {
      tmp56 -= 1.0;
      tmp57 += 1.0;
    }
    else if(tmp56 < -0.5)
    {
      tmp56 += 1.0;
      tmp57 -= 1.0;
    }
    
    if(fabs(tmp56) < 1e-10)
      tmp55 = pow(tmp53, tmp57);
    else
    {
      tmp59 = modf(1.0/tmp54, &tmp58);
      if(tmp59 > 0.5)
      {
        tmp59 -= 1.0;
        tmp58 += 1.0;
      }
      else if(tmp59 < -0.5)
      {
        tmp59 += 1.0;
        tmp58 -= 1.0;
      }
      if(fabs(tmp59) < 1e-10 && ((unsigned long)tmp58 & 1))
      {
        tmp55 = -pow(-tmp53, tmp56)*pow(tmp53, tmp57);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp53, tmp54);
      }
    }
  }
  else
  {
    tmp55 = pow(tmp53, tmp54);
  }
  if(isnan(tmp55) || isinf(tmp55))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp53, tmp54);
  }res[20] = (0.2871745887492588) * ((data->simulationInfo->realParameter[211] /* powerBlock.LTR.UA_dis[7] PARAM */) * ((tmp55) * (data->localData[0]->realVars[134] /* powerBlock.LTR.T_from_turb[7] variable */ + data->localData[0]->realVars[135] /* powerBlock.LTR.T_from_turb[8] variable */ + (-data->localData[0]->realVars[119] /* powerBlock.LTR.T_from_comp[7] variable */) - data->localData[0]->realVars[120] /* powerBlock.LTR.T_from_comp[8] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */ - data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */);

  res[21] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[6] variable */ - data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[7] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */ - data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */);

  tmp60 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp61 = 0.8;
  if(tmp60 < 0.0 && tmp61 != 0.0)
  {
    tmp63 = modf(tmp61, &tmp64);
    
    if(tmp63 > 0.5)
    {
      tmp63 -= 1.0;
      tmp64 += 1.0;
    }
    else if(tmp63 < -0.5)
    {
      tmp63 += 1.0;
      tmp64 -= 1.0;
    }
    
    if(fabs(tmp63) < 1e-10)
      tmp62 = pow(tmp60, tmp64);
    else
    {
      tmp66 = modf(1.0/tmp61, &tmp65);
      if(tmp66 > 0.5)
      {
        tmp66 -= 1.0;
        tmp65 += 1.0;
      }
      else if(tmp66 < -0.5)
      {
        tmp66 += 1.0;
        tmp65 -= 1.0;
      }
      if(fabs(tmp66) < 1e-10 && ((unsigned long)tmp65 & 1))
      {
        tmp62 = -pow(-tmp60, tmp63)*pow(tmp60, tmp64);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp60, tmp61);
      }
    }
  }
  else
  {
    tmp62 = pow(tmp60, tmp61);
  }
  if(isnan(tmp62) || isinf(tmp62))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp60, tmp61);
  }res[22] = (0.2871745887492588) * ((data->simulationInfo->realParameter[210] /* powerBlock.LTR.UA_dis[6] PARAM */) * ((tmp62) * (data->localData[0]->realVars[133] /* powerBlock.LTR.T_from_turb[6] variable */ + data->localData[0]->realVars[134] /* powerBlock.LTR.T_from_turb[7] variable */ + (-data->localData[0]->realVars[118] /* powerBlock.LTR.T_from_comp[6] variable */) - data->localData[0]->realVars[119] /* powerBlock.LTR.T_from_comp[7] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */ - data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */);

  res[23] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[5] variable */ - data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[6] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */ - data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */);

  tmp67 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp68 = 0.8;
  if(tmp67 < 0.0 && tmp68 != 0.0)
  {
    tmp70 = modf(tmp68, &tmp71);
    
    if(tmp70 > 0.5)
    {
      tmp70 -= 1.0;
      tmp71 += 1.0;
    }
    else if(tmp70 < -0.5)
    {
      tmp70 += 1.0;
      tmp71 -= 1.0;
    }
    
    if(fabs(tmp70) < 1e-10)
      tmp69 = pow(tmp67, tmp71);
    else
    {
      tmp73 = modf(1.0/tmp68, &tmp72);
      if(tmp73 > 0.5)
      {
        tmp73 -= 1.0;
        tmp72 += 1.0;
      }
      else if(tmp73 < -0.5)
      {
        tmp73 += 1.0;
        tmp72 -= 1.0;
      }
      if(fabs(tmp73) < 1e-10 && ((unsigned long)tmp72 & 1))
      {
        tmp69 = -pow(-tmp67, tmp70)*pow(tmp67, tmp71);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp67, tmp68);
      }
    }
  }
  else
  {
    tmp69 = pow(tmp67, tmp68);
  }
  if(isnan(tmp69) || isinf(tmp69))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp67, tmp68);
  }res[24] = (0.2871745887492588) * ((data->simulationInfo->realParameter[209] /* powerBlock.LTR.UA_dis[5] PARAM */) * ((tmp69) * (data->localData[0]->realVars[132] /* powerBlock.LTR.T_from_turb[5] variable */ + data->localData[0]->realVars[133] /* powerBlock.LTR.T_from_turb[6] variable */ + (-data->localData[0]->realVars[117] /* powerBlock.LTR.T_from_comp[5] variable */) - data->localData[0]->realVars[118] /* powerBlock.LTR.T_from_comp[6] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */ - data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */);

  tmp74 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp75 = 0.8;
  if(tmp74 < 0.0 && tmp75 != 0.0)
  {
    tmp77 = modf(tmp75, &tmp78);
    
    if(tmp77 > 0.5)
    {
      tmp77 -= 1.0;
      tmp78 += 1.0;
    }
    else if(tmp77 < -0.5)
    {
      tmp77 += 1.0;
      tmp78 -= 1.0;
    }
    
    if(fabs(tmp77) < 1e-10)
      tmp76 = pow(tmp74, tmp78);
    else
    {
      tmp80 = modf(1.0/tmp75, &tmp79);
      if(tmp80 > 0.5)
      {
        tmp80 -= 1.0;
        tmp79 += 1.0;
      }
      else if(tmp80 < -0.5)
      {
        tmp80 += 1.0;
        tmp79 -= 1.0;
      }
      if(fabs(tmp80) < 1e-10 && ((unsigned long)tmp79 & 1))
      {
        tmp76 = -pow(-tmp74, tmp77)*pow(tmp74, tmp78);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp74, tmp75);
      }
    }
  }
  else
  {
    tmp76 = pow(tmp74, tmp75);
  }
  if(isnan(tmp76) || isinf(tmp76))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp74, tmp75);
  }res[25] = (0.2871745887492588) * ((data->simulationInfo->realParameter[208] /* powerBlock.LTR.UA_dis[4] PARAM */) * ((tmp76) * (data->localData[0]->realVars[131] /* powerBlock.LTR.T_from_turb[4] variable */ + data->localData[0]->realVars[132] /* powerBlock.LTR.T_from_turb[5] variable */ + (-data->localData[0]->realVars[116] /* powerBlock.LTR.T_from_comp[4] variable */) - data->localData[0]->realVars[117] /* powerBlock.LTR.T_from_comp[5] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */ - data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */);

  res[26] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[3] variable */ - data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[4] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */ - data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */);

  tmp81 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp82 = 0.8;
  if(tmp81 < 0.0 && tmp82 != 0.0)
  {
    tmp84 = modf(tmp82, &tmp85);
    
    if(tmp84 > 0.5)
    {
      tmp84 -= 1.0;
      tmp85 += 1.0;
    }
    else if(tmp84 < -0.5)
    {
      tmp84 += 1.0;
      tmp85 -= 1.0;
    }
    
    if(fabs(tmp84) < 1e-10)
      tmp83 = pow(tmp81, tmp85);
    else
    {
      tmp87 = modf(1.0/tmp82, &tmp86);
      if(tmp87 > 0.5)
      {
        tmp87 -= 1.0;
        tmp86 += 1.0;
      }
      else if(tmp87 < -0.5)
      {
        tmp87 += 1.0;
        tmp86 -= 1.0;
      }
      if(fabs(tmp87) < 1e-10 && ((unsigned long)tmp86 & 1))
      {
        tmp83 = -pow(-tmp81, tmp84)*pow(tmp81, tmp85);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp81, tmp82);
      }
    }
  }
  else
  {
    tmp83 = pow(tmp81, tmp82);
  }
  if(isnan(tmp83) || isinf(tmp83))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp81, tmp82);
  }res[27] = (0.2871745887492588) * ((data->simulationInfo->realParameter[207] /* powerBlock.LTR.UA_dis[3] PARAM */) * ((tmp83) * (data->localData[0]->realVars[130] /* powerBlock.LTR.T_from_turb[3] variable */ + data->localData[0]->realVars[131] /* powerBlock.LTR.T_from_turb[4] variable */ + (-data->localData[0]->realVars[115] /* powerBlock.LTR.T_from_comp[3] variable */) - data->localData[0]->realVars[116] /* powerBlock.LTR.T_from_comp[4] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */ - data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */);

  tmp88 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp89 = 0.8;
  if(tmp88 < 0.0 && tmp89 != 0.0)
  {
    tmp91 = modf(tmp89, &tmp92);
    
    if(tmp91 > 0.5)
    {
      tmp91 -= 1.0;
      tmp92 += 1.0;
    }
    else if(tmp91 < -0.5)
    {
      tmp91 += 1.0;
      tmp92 -= 1.0;
    }
    
    if(fabs(tmp91) < 1e-10)
      tmp90 = pow(tmp88, tmp92);
    else
    {
      tmp94 = modf(1.0/tmp89, &tmp93);
      if(tmp94 > 0.5)
      {
        tmp94 -= 1.0;
        tmp93 += 1.0;
      }
      else if(tmp94 < -0.5)
      {
        tmp94 += 1.0;
        tmp93 -= 1.0;
      }
      if(fabs(tmp94) < 1e-10 && ((unsigned long)tmp93 & 1))
      {
        tmp90 = -pow(-tmp88, tmp91)*pow(tmp88, tmp92);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp88, tmp89);
      }
    }
  }
  else
  {
    tmp90 = pow(tmp88, tmp89);
  }
  if(isnan(tmp90) || isinf(tmp90))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp88, tmp89);
  }res[28] = (0.2871745887492588) * ((data->simulationInfo->realParameter[206] /* powerBlock.LTR.UA_dis[2] PARAM */) * ((tmp90) * (data->localData[0]->realVars[129] /* powerBlock.LTR.T_from_turb[2] variable */ + data->localData[0]->realVars[130] /* powerBlock.LTR.T_from_turb[3] variable */ + (-data->localData[0]->realVars[114] /* powerBlock.LTR.T_from_comp[2] variable */) - data->localData[0]->realVars[115] /* powerBlock.LTR.T_from_comp[3] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */ - data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */);

  tmp95 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp96 = 0.8;
  if(tmp95 < 0.0 && tmp96 != 0.0)
  {
    tmp98 = modf(tmp96, &tmp99);
    
    if(tmp98 > 0.5)
    {
      tmp98 -= 1.0;
      tmp99 += 1.0;
    }
    else if(tmp98 < -0.5)
    {
      tmp98 += 1.0;
      tmp99 -= 1.0;
    }
    
    if(fabs(tmp98) < 1e-10)
      tmp97 = pow(tmp95, tmp99);
    else
    {
      tmp101 = modf(1.0/tmp96, &tmp100);
      if(tmp101 > 0.5)
      {
        tmp101 -= 1.0;
        tmp100 += 1.0;
      }
      else if(tmp101 < -0.5)
      {
        tmp101 += 1.0;
        tmp100 -= 1.0;
      }
      if(fabs(tmp101) < 1e-10 && ((unsigned long)tmp100 & 1))
      {
        tmp97 = -pow(-tmp95, tmp98)*pow(tmp95, tmp99);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp95, tmp96);
      }
    }
  }
  else
  {
    tmp97 = pow(tmp95, tmp96);
  }
  if(isnan(tmp97) || isinf(tmp97))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp95, tmp96);
  }res[29] = (0.2871745887492588) * ((data->simulationInfo->realParameter[205] /* powerBlock.LTR.UA_dis[1] PARAM */) * ((tmp97) * (data->localData[0]->realVars[128] /* powerBlock.LTR.T_from_turb[1] variable */ + data->localData[0]->realVars[129] /* powerBlock.LTR.T_from_turb[2] variable */ + (-data->localData[0]->realVars[113] /* powerBlock.LTR.T_from_comp[1] variable */) - data->localData[0]->realVars[114] /* powerBlock.LTR.T_from_comp[2] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */ - data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */);

  tmp102 = data->simulationInfo->realParameter[638] /* powerBlock.reCompressor.tipSpeed PARAM */;
  res[30] = data->localData[0]->realVars[272] /* powerBlock.reCompressor.state_isen.h variable */ + (-data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */) - ((data->localData[0]->realVars[269] /* powerBlock.reCompressor.psi variable */) * ((tmp102 * tmp102)));

  tmp103 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp104 = 0.8;
  if(tmp103 < 0.0 && tmp104 != 0.0)
  {
    tmp106 = modf(tmp104, &tmp107);
    
    if(tmp106 > 0.5)
    {
      tmp106 -= 1.0;
      tmp107 += 1.0;
    }
    else if(tmp106 < -0.5)
    {
      tmp106 += 1.0;
      tmp107 -= 1.0;
    }
    
    if(fabs(tmp106) < 1e-10)
      tmp105 = pow(tmp103, tmp107);
    else
    {
      tmp109 = modf(1.0/tmp104, &tmp108);
      if(tmp109 > 0.5)
      {
        tmp109 -= 1.0;
        tmp108 += 1.0;
      }
      else if(tmp109 < -0.5)
      {
        tmp109 += 1.0;
        tmp108 -= 1.0;
      }
      if(fabs(tmp109) < 1e-10 && ((unsigned long)tmp108 & 1))
      {
        tmp105 = -pow(-tmp103, tmp106)*pow(tmp103, tmp107);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp103, tmp104);
      }
    }
  }
  else
  {
    tmp105 = pow(tmp103, tmp104);
  }
  if(isnan(tmp105) || isinf(tmp105))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp103, tmp104);
  }res[31] = (0.5) * ((data->simulationInfo->realParameter[480] /* powerBlock.exchanger.UA_HX_dis[14] PARAM */) * ((tmp105) * (data->localData[0]->realVars[219] /* powerBlock.exchanger.deltaT[14] variable */ + data->localData[0]->realVars[220] /* powerBlock.exchanger.deltaT[15] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */ - data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */);

  tmp110 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp111 = 0.8;
  if(tmp110 < 0.0 && tmp111 != 0.0)
  {
    tmp113 = modf(tmp111, &tmp114);
    
    if(tmp113 > 0.5)
    {
      tmp113 -= 1.0;
      tmp114 += 1.0;
    }
    else if(tmp113 < -0.5)
    {
      tmp113 += 1.0;
      tmp114 -= 1.0;
    }
    
    if(fabs(tmp113) < 1e-10)
      tmp112 = pow(tmp110, tmp114);
    else
    {
      tmp116 = modf(1.0/tmp111, &tmp115);
      if(tmp116 > 0.5)
      {
        tmp116 -= 1.0;
        tmp115 += 1.0;
      }
      else if(tmp116 < -0.5)
      {
        tmp116 += 1.0;
        tmp115 -= 1.0;
      }
      if(fabs(tmp116) < 1e-10 && ((unsigned long)tmp115 & 1))
      {
        tmp112 = -pow(-tmp110, tmp113)*pow(tmp110, tmp114);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp110, tmp111);
      }
    }
  }
  else
  {
    tmp112 = pow(tmp110, tmp111);
  }
  if(isnan(tmp112) || isinf(tmp112))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp110, tmp111);
  }res[32] = (0.5) * ((data->simulationInfo->realParameter[479] /* powerBlock.exchanger.UA_HX_dis[13] PARAM */) * ((tmp112) * (data->localData[0]->realVars[218] /* powerBlock.exchanger.deltaT[13] variable */ + data->localData[0]->realVars[219] /* powerBlock.exchanger.deltaT[14] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */ - data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */);

  tmp117 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp118 = 0.8;
  if(tmp117 < 0.0 && tmp118 != 0.0)
  {
    tmp120 = modf(tmp118, &tmp121);
    
    if(tmp120 > 0.5)
    {
      tmp120 -= 1.0;
      tmp121 += 1.0;
    }
    else if(tmp120 < -0.5)
    {
      tmp120 += 1.0;
      tmp121 -= 1.0;
    }
    
    if(fabs(tmp120) < 1e-10)
      tmp119 = pow(tmp117, tmp121);
    else
    {
      tmp123 = modf(1.0/tmp118, &tmp122);
      if(tmp123 > 0.5)
      {
        tmp123 -= 1.0;
        tmp122 += 1.0;
      }
      else if(tmp123 < -0.5)
      {
        tmp123 += 1.0;
        tmp122 -= 1.0;
      }
      if(fabs(tmp123) < 1e-10 && ((unsigned long)tmp122 & 1))
      {
        tmp119 = -pow(-tmp117, tmp120)*pow(tmp117, tmp121);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp117, tmp118);
      }
    }
  }
  else
  {
    tmp119 = pow(tmp117, tmp118);
  }
  if(isnan(tmp119) || isinf(tmp119))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp117, tmp118);
  }res[33] = (0.5) * ((data->simulationInfo->realParameter[478] /* powerBlock.exchanger.UA_HX_dis[12] PARAM */) * ((tmp119) * (data->localData[0]->realVars[217] /* powerBlock.exchanger.deltaT[12] variable */ + data->localData[0]->realVars[218] /* powerBlock.exchanger.deltaT[13] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */ - data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */);

  tmp124 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp125 = 0.8;
  if(tmp124 < 0.0 && tmp125 != 0.0)
  {
    tmp127 = modf(tmp125, &tmp128);
    
    if(tmp127 > 0.5)
    {
      tmp127 -= 1.0;
      tmp128 += 1.0;
    }
    else if(tmp127 < -0.5)
    {
      tmp127 += 1.0;
      tmp128 -= 1.0;
    }
    
    if(fabs(tmp127) < 1e-10)
      tmp126 = pow(tmp124, tmp128);
    else
    {
      tmp130 = modf(1.0/tmp125, &tmp129);
      if(tmp130 > 0.5)
      {
        tmp130 -= 1.0;
        tmp129 += 1.0;
      }
      else if(tmp130 < -0.5)
      {
        tmp130 += 1.0;
        tmp129 -= 1.0;
      }
      if(fabs(tmp130) < 1e-10 && ((unsigned long)tmp129 & 1))
      {
        tmp126 = -pow(-tmp124, tmp127)*pow(tmp124, tmp128);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp124, tmp125);
      }
    }
  }
  else
  {
    tmp126 = pow(tmp124, tmp125);
  }
  if(isnan(tmp126) || isinf(tmp126))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp124, tmp125);
  }res[34] = (0.5) * ((data->simulationInfo->realParameter[477] /* powerBlock.exchanger.UA_HX_dis[11] PARAM */) * ((tmp126) * (data->localData[0]->realVars[216] /* powerBlock.exchanger.deltaT[11] variable */ + data->localData[0]->realVars[217] /* powerBlock.exchanger.deltaT[12] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */ - data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */);

  tmp131 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp132 = 0.8;
  if(tmp131 < 0.0 && tmp132 != 0.0)
  {
    tmp134 = modf(tmp132, &tmp135);
    
    if(tmp134 > 0.5)
    {
      tmp134 -= 1.0;
      tmp135 += 1.0;
    }
    else if(tmp134 < -0.5)
    {
      tmp134 += 1.0;
      tmp135 -= 1.0;
    }
    
    if(fabs(tmp134) < 1e-10)
      tmp133 = pow(tmp131, tmp135);
    else
    {
      tmp137 = modf(1.0/tmp132, &tmp136);
      if(tmp137 > 0.5)
      {
        tmp137 -= 1.0;
        tmp136 += 1.0;
      }
      else if(tmp137 < -0.5)
      {
        tmp137 += 1.0;
        tmp136 -= 1.0;
      }
      if(fabs(tmp137) < 1e-10 && ((unsigned long)tmp136 & 1))
      {
        tmp133 = -pow(-tmp131, tmp134)*pow(tmp131, tmp135);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp131, tmp132);
      }
    }
  }
  else
  {
    tmp133 = pow(tmp131, tmp132);
  }
  if(isnan(tmp133) || isinf(tmp133))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp131, tmp132);
  }res[35] = (0.5) * ((data->simulationInfo->realParameter[476] /* powerBlock.exchanger.UA_HX_dis[10] PARAM */) * ((tmp133) * (data->localData[0]->realVars[215] /* powerBlock.exchanger.deltaT[10] variable */ + data->localData[0]->realVars[216] /* powerBlock.exchanger.deltaT[11] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */ - data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */);

  tmp138 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp139 = 0.8;
  if(tmp138 < 0.0 && tmp139 != 0.0)
  {
    tmp141 = modf(tmp139, &tmp142);
    
    if(tmp141 > 0.5)
    {
      tmp141 -= 1.0;
      tmp142 += 1.0;
    }
    else if(tmp141 < -0.5)
    {
      tmp141 += 1.0;
      tmp142 -= 1.0;
    }
    
    if(fabs(tmp141) < 1e-10)
      tmp140 = pow(tmp138, tmp142);
    else
    {
      tmp144 = modf(1.0/tmp139, &tmp143);
      if(tmp144 > 0.5)
      {
        tmp144 -= 1.0;
        tmp143 += 1.0;
      }
      else if(tmp144 < -0.5)
      {
        tmp144 += 1.0;
        tmp143 -= 1.0;
      }
      if(fabs(tmp144) < 1e-10 && ((unsigned long)tmp143 & 1))
      {
        tmp140 = -pow(-tmp138, tmp141)*pow(tmp138, tmp142);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp138, tmp139);
      }
    }
  }
  else
  {
    tmp140 = pow(tmp138, tmp139);
  }
  if(isnan(tmp140) || isinf(tmp140))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp138, tmp139);
  }res[36] = (0.5) * ((data->simulationInfo->realParameter[475] /* powerBlock.exchanger.UA_HX_dis[9] PARAM */) * ((tmp140) * (data->localData[0]->realVars[214] /* powerBlock.exchanger.deltaT[9] variable */ + data->localData[0]->realVars[215] /* powerBlock.exchanger.deltaT[10] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */ - data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */);

  tmp145 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp146 = 0.8;
  if(tmp145 < 0.0 && tmp146 != 0.0)
  {
    tmp148 = modf(tmp146, &tmp149);
    
    if(tmp148 > 0.5)
    {
      tmp148 -= 1.0;
      tmp149 += 1.0;
    }
    else if(tmp148 < -0.5)
    {
      tmp148 += 1.0;
      tmp149 -= 1.0;
    }
    
    if(fabs(tmp148) < 1e-10)
      tmp147 = pow(tmp145, tmp149);
    else
    {
      tmp151 = modf(1.0/tmp146, &tmp150);
      if(tmp151 > 0.5)
      {
        tmp151 -= 1.0;
        tmp150 += 1.0;
      }
      else if(tmp151 < -0.5)
      {
        tmp151 += 1.0;
        tmp150 -= 1.0;
      }
      if(fabs(tmp151) < 1e-10 && ((unsigned long)tmp150 & 1))
      {
        tmp147 = -pow(-tmp145, tmp148)*pow(tmp145, tmp149);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp145, tmp146);
      }
    }
  }
  else
  {
    tmp147 = pow(tmp145, tmp146);
  }
  if(isnan(tmp147) || isinf(tmp147))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp145, tmp146);
  }res[37] = (0.5) * ((data->simulationInfo->realParameter[474] /* powerBlock.exchanger.UA_HX_dis[8] PARAM */) * ((tmp147) * (data->localData[0]->realVars[213] /* powerBlock.exchanger.deltaT[8] variable */ + data->localData[0]->realVars[214] /* powerBlock.exchanger.deltaT[9] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */ - data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */);

  tmp152 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp153 = 0.8;
  if(tmp152 < 0.0 && tmp153 != 0.0)
  {
    tmp155 = modf(tmp153, &tmp156);
    
    if(tmp155 > 0.5)
    {
      tmp155 -= 1.0;
      tmp156 += 1.0;
    }
    else if(tmp155 < -0.5)
    {
      tmp155 += 1.0;
      tmp156 -= 1.0;
    }
    
    if(fabs(tmp155) < 1e-10)
      tmp154 = pow(tmp152, tmp156);
    else
    {
      tmp158 = modf(1.0/tmp153, &tmp157);
      if(tmp158 > 0.5)
      {
        tmp158 -= 1.0;
        tmp157 += 1.0;
      }
      else if(tmp158 < -0.5)
      {
        tmp158 += 1.0;
        tmp157 -= 1.0;
      }
      if(fabs(tmp158) < 1e-10 && ((unsigned long)tmp157 & 1))
      {
        tmp154 = -pow(-tmp152, tmp155)*pow(tmp152, tmp156);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp152, tmp153);
      }
    }
  }
  else
  {
    tmp154 = pow(tmp152, tmp153);
  }
  if(isnan(tmp154) || isinf(tmp154))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp152, tmp153);
  }res[38] = (0.5) * ((data->simulationInfo->realParameter[473] /* powerBlock.exchanger.UA_HX_dis[7] PARAM */) * ((tmp154) * (data->localData[0]->realVars[212] /* powerBlock.exchanger.deltaT[7] variable */ + data->localData[0]->realVars[213] /* powerBlock.exchanger.deltaT[8] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */ - data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */);

  tmp159 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp160 = 0.8;
  if(tmp159 < 0.0 && tmp160 != 0.0)
  {
    tmp162 = modf(tmp160, &tmp163);
    
    if(tmp162 > 0.5)
    {
      tmp162 -= 1.0;
      tmp163 += 1.0;
    }
    else if(tmp162 < -0.5)
    {
      tmp162 += 1.0;
      tmp163 -= 1.0;
    }
    
    if(fabs(tmp162) < 1e-10)
      tmp161 = pow(tmp159, tmp163);
    else
    {
      tmp165 = modf(1.0/tmp160, &tmp164);
      if(tmp165 > 0.5)
      {
        tmp165 -= 1.0;
        tmp164 += 1.0;
      }
      else if(tmp165 < -0.5)
      {
        tmp165 += 1.0;
        tmp164 -= 1.0;
      }
      if(fabs(tmp165) < 1e-10 && ((unsigned long)tmp164 & 1))
      {
        tmp161 = -pow(-tmp159, tmp162)*pow(tmp159, tmp163);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp159, tmp160);
      }
    }
  }
  else
  {
    tmp161 = pow(tmp159, tmp160);
  }
  if(isnan(tmp161) || isinf(tmp161))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp159, tmp160);
  }res[39] = (0.5) * ((data->simulationInfo->realParameter[472] /* powerBlock.exchanger.UA_HX_dis[6] PARAM */) * ((tmp161) * (data->localData[0]->realVars[211] /* powerBlock.exchanger.deltaT[6] variable */ + data->localData[0]->realVars[212] /* powerBlock.exchanger.deltaT[7] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */ - data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */);

  tmp166 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp167 = 0.8;
  if(tmp166 < 0.0 && tmp167 != 0.0)
  {
    tmp169 = modf(tmp167, &tmp170);
    
    if(tmp169 > 0.5)
    {
      tmp169 -= 1.0;
      tmp170 += 1.0;
    }
    else if(tmp169 < -0.5)
    {
      tmp169 += 1.0;
      tmp170 -= 1.0;
    }
    
    if(fabs(tmp169) < 1e-10)
      tmp168 = pow(tmp166, tmp170);
    else
    {
      tmp172 = modf(1.0/tmp167, &tmp171);
      if(tmp172 > 0.5)
      {
        tmp172 -= 1.0;
        tmp171 += 1.0;
      }
      else if(tmp172 < -0.5)
      {
        tmp172 += 1.0;
        tmp171 -= 1.0;
      }
      if(fabs(tmp172) < 1e-10 && ((unsigned long)tmp171 & 1))
      {
        tmp168 = -pow(-tmp166, tmp169)*pow(tmp166, tmp170);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp166, tmp167);
      }
    }
  }
  else
  {
    tmp168 = pow(tmp166, tmp167);
  }
  if(isnan(tmp168) || isinf(tmp168))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp166, tmp167);
  }res[40] = (0.5) * ((data->simulationInfo->realParameter[471] /* powerBlock.exchanger.UA_HX_dis[5] PARAM */) * ((tmp168) * (data->localData[0]->realVars[210] /* powerBlock.exchanger.deltaT[5] variable */ + data->localData[0]->realVars[211] /* powerBlock.exchanger.deltaT[6] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */ - data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */);

  tmp173 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp174 = 0.8;
  if(tmp173 < 0.0 && tmp174 != 0.0)
  {
    tmp176 = modf(tmp174, &tmp177);
    
    if(tmp176 > 0.5)
    {
      tmp176 -= 1.0;
      tmp177 += 1.0;
    }
    else if(tmp176 < -0.5)
    {
      tmp176 += 1.0;
      tmp177 -= 1.0;
    }
    
    if(fabs(tmp176) < 1e-10)
      tmp175 = pow(tmp173, tmp177);
    else
    {
      tmp179 = modf(1.0/tmp174, &tmp178);
      if(tmp179 > 0.5)
      {
        tmp179 -= 1.0;
        tmp178 += 1.0;
      }
      else if(tmp179 < -0.5)
      {
        tmp179 += 1.0;
        tmp178 -= 1.0;
      }
      if(fabs(tmp179) < 1e-10 && ((unsigned long)tmp178 & 1))
      {
        tmp175 = -pow(-tmp173, tmp176)*pow(tmp173, tmp177);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp173, tmp174);
      }
    }
  }
  else
  {
    tmp175 = pow(tmp173, tmp174);
  }
  if(isnan(tmp175) || isinf(tmp175))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp173, tmp174);
  }res[41] = (0.5) * ((data->simulationInfo->realParameter[468] /* powerBlock.exchanger.UA_HX_dis[2] PARAM */) * ((tmp175) * (data->localData[0]->realVars[207] /* powerBlock.exchanger.deltaT[2] variable */ + data->localData[0]->realVars[208] /* powerBlock.exchanger.deltaT[3] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */ - data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */);

  tmp180 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp181 = 0.8;
  if(tmp180 < 0.0 && tmp181 != 0.0)
  {
    tmp183 = modf(tmp181, &tmp184);
    
    if(tmp183 > 0.5)
    {
      tmp183 -= 1.0;
      tmp184 += 1.0;
    }
    else if(tmp183 < -0.5)
    {
      tmp183 += 1.0;
      tmp184 -= 1.0;
    }
    
    if(fabs(tmp183) < 1e-10)
      tmp182 = pow(tmp180, tmp184);
    else
    {
      tmp186 = modf(1.0/tmp181, &tmp185);
      if(tmp186 > 0.5)
      {
        tmp186 -= 1.0;
        tmp185 += 1.0;
      }
      else if(tmp186 < -0.5)
      {
        tmp186 += 1.0;
        tmp185 -= 1.0;
      }
      if(fabs(tmp186) < 1e-10 && ((unsigned long)tmp185 & 1))
      {
        tmp182 = -pow(-tmp180, tmp183)*pow(tmp180, tmp184);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp180, tmp181);
      }
    }
  }
  else
  {
    tmp182 = pow(tmp180, tmp181);
  }
  if(isnan(tmp182) || isinf(tmp182))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp180, tmp181);
  }res[42] = (0.5) * ((data->simulationInfo->realParameter[469] /* powerBlock.exchanger.UA_HX_dis[3] PARAM */) * ((tmp182) * (data->localData[0]->realVars[208] /* powerBlock.exchanger.deltaT[3] variable */ + data->localData[0]->realVars[209] /* powerBlock.exchanger.deltaT[4] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */ - data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */);

  tmp187 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp188 = 0.8;
  if(tmp187 < 0.0 && tmp188 != 0.0)
  {
    tmp190 = modf(tmp188, &tmp191);
    
    if(tmp190 > 0.5)
    {
      tmp190 -= 1.0;
      tmp191 += 1.0;
    }
    else if(tmp190 < -0.5)
    {
      tmp190 += 1.0;
      tmp191 -= 1.0;
    }
    
    if(fabs(tmp190) < 1e-10)
      tmp189 = pow(tmp187, tmp191);
    else
    {
      tmp193 = modf(1.0/tmp188, &tmp192);
      if(tmp193 > 0.5)
      {
        tmp193 -= 1.0;
        tmp192 += 1.0;
      }
      else if(tmp193 < -0.5)
      {
        tmp193 += 1.0;
        tmp192 -= 1.0;
      }
      if(fabs(tmp193) < 1e-10 && ((unsigned long)tmp192 & 1))
      {
        tmp189 = -pow(-tmp187, tmp190)*pow(tmp187, tmp191);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp187, tmp188);
      }
    }
  }
  else
  {
    tmp189 = pow(tmp187, tmp188);
  }
  if(isnan(tmp189) || isinf(tmp189))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp187, tmp188);
  }res[43] = (0.5) * ((data->simulationInfo->realParameter[470] /* powerBlock.exchanger.UA_HX_dis[4] PARAM */) * ((tmp189) * (data->localData[0]->realVars[209] /* powerBlock.exchanger.deltaT[4] variable */ + data->localData[0]->realVars[210] /* powerBlock.exchanger.deltaT[5] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */ - data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */);

  tmp194 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp195 = 0.8;
  if(tmp194 < 0.0 && tmp195 != 0.0)
  {
    tmp197 = modf(tmp195, &tmp198);
    
    if(tmp197 > 0.5)
    {
      tmp197 -= 1.0;
      tmp198 += 1.0;
    }
    else if(tmp197 < -0.5)
    {
      tmp197 += 1.0;
      tmp198 -= 1.0;
    }
    
    if(fabs(tmp197) < 1e-10)
      tmp196 = pow(tmp194, tmp198);
    else
    {
      tmp200 = modf(1.0/tmp195, &tmp199);
      if(tmp200 > 0.5)
      {
        tmp200 -= 1.0;
        tmp199 += 1.0;
      }
      else if(tmp200 < -0.5)
      {
        tmp200 += 1.0;
        tmp199 -= 1.0;
      }
      if(fabs(tmp200) < 1e-10 && ((unsigned long)tmp199 & 1))
      {
        tmp196 = -pow(-tmp194, tmp197)*pow(tmp194, tmp198);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp194, tmp195);
      }
    }
  }
  else
  {
    tmp196 = pow(tmp194, tmp195);
  }
  if(isnan(tmp196) || isinf(tmp196))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp194, tmp195);
  }res[44] = (0.5) * ((data->simulationInfo->realParameter[467] /* powerBlock.exchanger.UA_HX_dis[1] PARAM */) * ((tmp196) * (data->localData[0]->realVars[206] /* powerBlock.exchanger.deltaT[1] variable */ + data->localData[0]->realVars[207] /* powerBlock.exchanger.deltaT[2] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */ - data->localData[0]->realVars[222] /* powerBlock.exchanger.h_CO2[1] variable */);

  res[45] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */ - data->localData[0]->realVars[222] /* powerBlock.exchanger.h_CO2[1] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[111] /* powerBlock.HTR.h_from_turb[15] variable */ - data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */);

  tmp201 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp202 = 0.8;
  if(tmp201 < 0.0 && tmp202 != 0.0)
  {
    tmp204 = modf(tmp202, &tmp205);
    
    if(tmp204 > 0.5)
    {
      tmp204 -= 1.0;
      tmp205 += 1.0;
    }
    else if(tmp204 < -0.5)
    {
      tmp204 += 1.0;
      tmp205 -= 1.0;
    }
    
    if(fabs(tmp204) < 1e-10)
      tmp203 = pow(tmp201, tmp205);
    else
    {
      tmp207 = modf(1.0/tmp202, &tmp206);
      if(tmp207 > 0.5)
      {
        tmp207 -= 1.0;
        tmp206 += 1.0;
      }
      else if(tmp207 < -0.5)
      {
        tmp207 += 1.0;
        tmp206 -= 1.0;
      }
      if(fabs(tmp207) < 1e-10 && ((unsigned long)tmp206 & 1))
      {
        tmp203 = -pow(-tmp201, tmp204)*pow(tmp201, tmp205);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp201, tmp202);
      }
    }
  }
  else
  {
    tmp203 = pow(tmp201, tmp202);
  }
  if(isnan(tmp203) || isinf(tmp203))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp201, tmp202);
  }res[46] = (0.2871745887492588) * ((data->simulationInfo->realParameter[83] /* powerBlock.HTR.UA_dis[14] PARAM */) * ((tmp203) * (data->localData[0]->realVars[66] /* powerBlock.HTR.T_from_turb[14] variable */ + data->localData[0]->realVars[67] /* powerBlock.HTR.T_from_turb[15] variable */ + (-data->localData[0]->realVars[52] /* powerBlock.HTR.T_from_comp[14] variable */) - data->localData[0]->realVars[53] /* powerBlock.HTR.T_from_comp[15] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[111] /* powerBlock.HTR.h_from_turb[15] variable */ - data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */);

  tmp208 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp209 = 0.8;
  if(tmp208 < 0.0 && tmp209 != 0.0)
  {
    tmp211 = modf(tmp209, &tmp212);
    
    if(tmp211 > 0.5)
    {
      tmp211 -= 1.0;
      tmp212 += 1.0;
    }
    else if(tmp211 < -0.5)
    {
      tmp211 += 1.0;
      tmp212 -= 1.0;
    }
    
    if(fabs(tmp211) < 1e-10)
      tmp210 = pow(tmp208, tmp212);
    else
    {
      tmp214 = modf(1.0/tmp209, &tmp213);
      if(tmp214 > 0.5)
      {
        tmp214 -= 1.0;
        tmp213 += 1.0;
      }
      else if(tmp214 < -0.5)
      {
        tmp214 += 1.0;
        tmp213 -= 1.0;
      }
      if(fabs(tmp214) < 1e-10 && ((unsigned long)tmp213 & 1))
      {
        tmp210 = -pow(-tmp208, tmp211)*pow(tmp208, tmp212);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp208, tmp209);
      }
    }
  }
  else
  {
    tmp210 = pow(tmp208, tmp209);
  }
  if(isnan(tmp210) || isinf(tmp210))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp208, tmp209);
  }res[47] = (0.2871745887492588) * ((data->simulationInfo->realParameter[82] /* powerBlock.HTR.UA_dis[13] PARAM */) * ((tmp210) * (data->localData[0]->realVars[65] /* powerBlock.HTR.T_from_turb[13] variable */ + data->localData[0]->realVars[66] /* powerBlock.HTR.T_from_turb[14] variable */ + (-data->localData[0]->realVars[51] /* powerBlock.HTR.T_from_comp[13] variable */) - data->localData[0]->realVars[52] /* powerBlock.HTR.T_from_comp[14] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */ - data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */);

  res[48] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */ - data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */ - data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */);

  res[49] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */ - data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */ - data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */);

  tmp215 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp216 = 0.8;
  if(tmp215 < 0.0 && tmp216 != 0.0)
  {
    tmp218 = modf(tmp216, &tmp219);
    
    if(tmp218 > 0.5)
    {
      tmp218 -= 1.0;
      tmp219 += 1.0;
    }
    else if(tmp218 < -0.5)
    {
      tmp218 += 1.0;
      tmp219 -= 1.0;
    }
    
    if(fabs(tmp218) < 1e-10)
      tmp217 = pow(tmp215, tmp219);
    else
    {
      tmp221 = modf(1.0/tmp216, &tmp220);
      if(tmp221 > 0.5)
      {
        tmp221 -= 1.0;
        tmp220 += 1.0;
      }
      else if(tmp221 < -0.5)
      {
        tmp221 += 1.0;
        tmp220 -= 1.0;
      }
      if(fabs(tmp221) < 1e-10 && ((unsigned long)tmp220 & 1))
      {
        tmp217 = -pow(-tmp215, tmp218)*pow(tmp215, tmp219);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp215, tmp216);
      }
    }
  }
  else
  {
    tmp217 = pow(tmp215, tmp216);
  }
  if(isnan(tmp217) || isinf(tmp217))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp215, tmp216);
  }res[50] = (0.2871745887492588) * ((data->simulationInfo->realParameter[81] /* powerBlock.HTR.UA_dis[12] PARAM */) * ((tmp217) * (data->localData[0]->realVars[64] /* powerBlock.HTR.T_from_turb[12] variable */ + data->localData[0]->realVars[65] /* powerBlock.HTR.T_from_turb[13] variable */ + (-data->localData[0]->realVars[50] /* powerBlock.HTR.T_from_comp[12] variable */) - data->localData[0]->realVars[51] /* powerBlock.HTR.T_from_comp[13] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */ - data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */);

  tmp222 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp223 = 0.8;
  if(tmp222 < 0.0 && tmp223 != 0.0)
  {
    tmp225 = modf(tmp223, &tmp226);
    
    if(tmp225 > 0.5)
    {
      tmp225 -= 1.0;
      tmp226 += 1.0;
    }
    else if(tmp225 < -0.5)
    {
      tmp225 += 1.0;
      tmp226 -= 1.0;
    }
    
    if(fabs(tmp225) < 1e-10)
      tmp224 = pow(tmp222, tmp226);
    else
    {
      tmp228 = modf(1.0/tmp223, &tmp227);
      if(tmp228 > 0.5)
      {
        tmp228 -= 1.0;
        tmp227 += 1.0;
      }
      else if(tmp228 < -0.5)
      {
        tmp228 += 1.0;
        tmp227 -= 1.0;
      }
      if(fabs(tmp228) < 1e-10 && ((unsigned long)tmp227 & 1))
      {
        tmp224 = -pow(-tmp222, tmp225)*pow(tmp222, tmp226);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp222, tmp223);
      }
    }
  }
  else
  {
    tmp224 = pow(tmp222, tmp223);
  }
  if(isnan(tmp224) || isinf(tmp224))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp222, tmp223);
  }res[51] = (0.2871745887492588) * ((data->simulationInfo->realParameter[80] /* powerBlock.HTR.UA_dis[11] PARAM */) * ((tmp224) * (data->localData[0]->realVars[63] /* powerBlock.HTR.T_from_turb[11] variable */ + data->localData[0]->realVars[64] /* powerBlock.HTR.T_from_turb[12] variable */ + (-data->localData[0]->realVars[49] /* powerBlock.HTR.T_from_comp[11] variable */) - data->localData[0]->realVars[50] /* powerBlock.HTR.T_from_comp[12] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */ - data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */);

  res[52] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */ - data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */ - data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */);

  res[53] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */ - data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */ - data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */);

  tmp229 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp230 = 0.8;
  if(tmp229 < 0.0 && tmp230 != 0.0)
  {
    tmp232 = modf(tmp230, &tmp233);
    
    if(tmp232 > 0.5)
    {
      tmp232 -= 1.0;
      tmp233 += 1.0;
    }
    else if(tmp232 < -0.5)
    {
      tmp232 += 1.0;
      tmp233 -= 1.0;
    }
    
    if(fabs(tmp232) < 1e-10)
      tmp231 = pow(tmp229, tmp233);
    else
    {
      tmp235 = modf(1.0/tmp230, &tmp234);
      if(tmp235 > 0.5)
      {
        tmp235 -= 1.0;
        tmp234 += 1.0;
      }
      else if(tmp235 < -0.5)
      {
        tmp235 += 1.0;
        tmp234 -= 1.0;
      }
      if(fabs(tmp235) < 1e-10 && ((unsigned long)tmp234 & 1))
      {
        tmp231 = -pow(-tmp229, tmp232)*pow(tmp229, tmp233);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp229, tmp230);
      }
    }
  }
  else
  {
    tmp231 = pow(tmp229, tmp230);
  }
  if(isnan(tmp231) || isinf(tmp231))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp229, tmp230);
  }res[54] = (0.2871745887492588) * ((data->simulationInfo->realParameter[79] /* powerBlock.HTR.UA_dis[10] PARAM */) * ((tmp231) * (data->localData[0]->realVars[62] /* powerBlock.HTR.T_from_turb[10] variable */ + data->localData[0]->realVars[63] /* powerBlock.HTR.T_from_turb[11] variable */ + (-data->localData[0]->realVars[48] /* powerBlock.HTR.T_from_comp[10] variable */) - data->localData[0]->realVars[49] /* powerBlock.HTR.T_from_comp[11] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */ - data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */);

  res[55] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */ - data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */ - data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */);

  tmp236 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp237 = 0.8;
  if(tmp236 < 0.0 && tmp237 != 0.0)
  {
    tmp239 = modf(tmp237, &tmp240);
    
    if(tmp239 > 0.5)
    {
      tmp239 -= 1.0;
      tmp240 += 1.0;
    }
    else if(tmp239 < -0.5)
    {
      tmp239 += 1.0;
      tmp240 -= 1.0;
    }
    
    if(fabs(tmp239) < 1e-10)
      tmp238 = pow(tmp236, tmp240);
    else
    {
      tmp242 = modf(1.0/tmp237, &tmp241);
      if(tmp242 > 0.5)
      {
        tmp242 -= 1.0;
        tmp241 += 1.0;
      }
      else if(tmp242 < -0.5)
      {
        tmp242 += 1.0;
        tmp241 -= 1.0;
      }
      if(fabs(tmp242) < 1e-10 && ((unsigned long)tmp241 & 1))
      {
        tmp238 = -pow(-tmp236, tmp239)*pow(tmp236, tmp240);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp236, tmp237);
      }
    }
  }
  else
  {
    tmp238 = pow(tmp236, tmp237);
  }
  if(isnan(tmp238) || isinf(tmp238))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp236, tmp237);
  }res[56] = (0.2871745887492588) * ((data->simulationInfo->realParameter[78] /* powerBlock.HTR.UA_dis[9] PARAM */) * ((tmp238) * (data->localData[0]->realVars[61] /* powerBlock.HTR.T_from_turb[9] variable */ + data->localData[0]->realVars[62] /* powerBlock.HTR.T_from_turb[10] variable */ + (-data->localData[0]->realVars[47] /* powerBlock.HTR.T_from_comp[9] variable */) - data->localData[0]->realVars[48] /* powerBlock.HTR.T_from_comp[10] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */ - data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */);

  tmp243 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp244 = 0.8;
  if(tmp243 < 0.0 && tmp244 != 0.0)
  {
    tmp246 = modf(tmp244, &tmp247);
    
    if(tmp246 > 0.5)
    {
      tmp246 -= 1.0;
      tmp247 += 1.0;
    }
    else if(tmp246 < -0.5)
    {
      tmp246 += 1.0;
      tmp247 -= 1.0;
    }
    
    if(fabs(tmp246) < 1e-10)
      tmp245 = pow(tmp243, tmp247);
    else
    {
      tmp249 = modf(1.0/tmp244, &tmp248);
      if(tmp249 > 0.5)
      {
        tmp249 -= 1.0;
        tmp248 += 1.0;
      }
      else if(tmp249 < -0.5)
      {
        tmp249 += 1.0;
        tmp248 -= 1.0;
      }
      if(fabs(tmp249) < 1e-10 && ((unsigned long)tmp248 & 1))
      {
        tmp245 = -pow(-tmp243, tmp246)*pow(tmp243, tmp247);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp243, tmp244);
      }
    }
  }
  else
  {
    tmp245 = pow(tmp243, tmp244);
  }
  if(isnan(tmp245) || isinf(tmp245))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp243, tmp244);
  }res[57] = (0.2871745887492588) * ((data->simulationInfo->realParameter[77] /* powerBlock.HTR.UA_dis[8] PARAM */) * ((tmp245) * (data->localData[0]->realVars[60] /* powerBlock.HTR.T_from_turb[8] variable */ + data->localData[0]->realVars[61] /* powerBlock.HTR.T_from_turb[9] variable */ + (-data->localData[0]->realVars[46] /* powerBlock.HTR.T_from_comp[8] variable */) - data->localData[0]->realVars[47] /* powerBlock.HTR.T_from_comp[9] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */ - data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */);

  res[58] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */ - data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */ - data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */);

  tmp250 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp251 = 0.8;
  if(tmp250 < 0.0 && tmp251 != 0.0)
  {
    tmp253 = modf(tmp251, &tmp254);
    
    if(tmp253 > 0.5)
    {
      tmp253 -= 1.0;
      tmp254 += 1.0;
    }
    else if(tmp253 < -0.5)
    {
      tmp253 += 1.0;
      tmp254 -= 1.0;
    }
    
    if(fabs(tmp253) < 1e-10)
      tmp252 = pow(tmp250, tmp254);
    else
    {
      tmp256 = modf(1.0/tmp251, &tmp255);
      if(tmp256 > 0.5)
      {
        tmp256 -= 1.0;
        tmp255 += 1.0;
      }
      else if(tmp256 < -0.5)
      {
        tmp256 += 1.0;
        tmp255 -= 1.0;
      }
      if(fabs(tmp256) < 1e-10 && ((unsigned long)tmp255 & 1))
      {
        tmp252 = -pow(-tmp250, tmp253)*pow(tmp250, tmp254);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp250, tmp251);
      }
    }
  }
  else
  {
    tmp252 = pow(tmp250, tmp251);
  }
  if(isnan(tmp252) || isinf(tmp252))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp250, tmp251);
  }res[59] = (0.2871745887492588) * ((data->simulationInfo->realParameter[76] /* powerBlock.HTR.UA_dis[7] PARAM */) * ((tmp252) * (data->localData[0]->realVars[59] /* powerBlock.HTR.T_from_turb[7] variable */ + data->localData[0]->realVars[60] /* powerBlock.HTR.T_from_turb[8] variable */ + (-data->localData[0]->realVars[45] /* powerBlock.HTR.T_from_comp[7] variable */) - data->localData[0]->realVars[46] /* powerBlock.HTR.T_from_comp[8] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */ - data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */);

  res[60] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */ - data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */ - data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */);

  res[61] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */ - data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */ - data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */);

  tmp257 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp258 = 0.8;
  if(tmp257 < 0.0 && tmp258 != 0.0)
  {
    tmp260 = modf(tmp258, &tmp261);
    
    if(tmp260 > 0.5)
    {
      tmp260 -= 1.0;
      tmp261 += 1.0;
    }
    else if(tmp260 < -0.5)
    {
      tmp260 += 1.0;
      tmp261 -= 1.0;
    }
    
    if(fabs(tmp260) < 1e-10)
      tmp259 = pow(tmp257, tmp261);
    else
    {
      tmp263 = modf(1.0/tmp258, &tmp262);
      if(tmp263 > 0.5)
      {
        tmp263 -= 1.0;
        tmp262 += 1.0;
      }
      else if(tmp263 < -0.5)
      {
        tmp263 += 1.0;
        tmp262 -= 1.0;
      }
      if(fabs(tmp263) < 1e-10 && ((unsigned long)tmp262 & 1))
      {
        tmp259 = -pow(-tmp257, tmp260)*pow(tmp257, tmp261);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp257, tmp258);
      }
    }
  }
  else
  {
    tmp259 = pow(tmp257, tmp258);
  }
  if(isnan(tmp259) || isinf(tmp259))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp257, tmp258);
  }res[62] = (0.2871745887492588) * ((data->simulationInfo->realParameter[75] /* powerBlock.HTR.UA_dis[6] PARAM */) * ((tmp259) * (data->localData[0]->realVars[58] /* powerBlock.HTR.T_from_turb[6] variable */ + data->localData[0]->realVars[59] /* powerBlock.HTR.T_from_turb[7] variable */ + (-data->localData[0]->realVars[44] /* powerBlock.HTR.T_from_comp[6] variable */) - data->localData[0]->realVars[45] /* powerBlock.HTR.T_from_comp[7] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */ - data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */);

  res[63] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */ - data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */ - data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */);

  tmp264 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp265 = 0.8;
  if(tmp264 < 0.0 && tmp265 != 0.0)
  {
    tmp267 = modf(tmp265, &tmp268);
    
    if(tmp267 > 0.5)
    {
      tmp267 -= 1.0;
      tmp268 += 1.0;
    }
    else if(tmp267 < -0.5)
    {
      tmp267 += 1.0;
      tmp268 -= 1.0;
    }
    
    if(fabs(tmp267) < 1e-10)
      tmp266 = pow(tmp264, tmp268);
    else
    {
      tmp270 = modf(1.0/tmp265, &tmp269);
      if(tmp270 > 0.5)
      {
        tmp270 -= 1.0;
        tmp269 += 1.0;
      }
      else if(tmp270 < -0.5)
      {
        tmp270 += 1.0;
        tmp269 -= 1.0;
      }
      if(fabs(tmp270) < 1e-10 && ((unsigned long)tmp269 & 1))
      {
        tmp266 = -pow(-tmp264, tmp267)*pow(tmp264, tmp268);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp264, tmp265);
      }
    }
  }
  else
  {
    tmp266 = pow(tmp264, tmp265);
  }
  if(isnan(tmp266) || isinf(tmp266))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp264, tmp265);
  }res[64] = (0.2871745887492588) * ((data->simulationInfo->realParameter[74] /* powerBlock.HTR.UA_dis[5] PARAM */) * ((tmp266) * (data->localData[0]->realVars[57] /* powerBlock.HTR.T_from_turb[5] variable */ + data->localData[0]->realVars[58] /* powerBlock.HTR.T_from_turb[6] variable */ + (-data->localData[0]->realVars[43] /* powerBlock.HTR.T_from_comp[5] variable */) - data->localData[0]->realVars[44] /* powerBlock.HTR.T_from_comp[6] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */ - data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */);

  res[65] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */ - data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */ - data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */);

  tmp271 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp272 = 0.8;
  if(tmp271 < 0.0 && tmp272 != 0.0)
  {
    tmp274 = modf(tmp272, &tmp275);
    
    if(tmp274 > 0.5)
    {
      tmp274 -= 1.0;
      tmp275 += 1.0;
    }
    else if(tmp274 < -0.5)
    {
      tmp274 += 1.0;
      tmp275 -= 1.0;
    }
    
    if(fabs(tmp274) < 1e-10)
      tmp273 = pow(tmp271, tmp275);
    else
    {
      tmp277 = modf(1.0/tmp272, &tmp276);
      if(tmp277 > 0.5)
      {
        tmp277 -= 1.0;
        tmp276 += 1.0;
      }
      else if(tmp277 < -0.5)
      {
        tmp277 += 1.0;
        tmp276 -= 1.0;
      }
      if(fabs(tmp277) < 1e-10 && ((unsigned long)tmp276 & 1))
      {
        tmp273 = -pow(-tmp271, tmp274)*pow(tmp271, tmp275);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp271, tmp272);
      }
    }
  }
  else
  {
    tmp273 = pow(tmp271, tmp272);
  }
  if(isnan(tmp273) || isinf(tmp273))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp271, tmp272);
  }res[66] = (0.2871745887492588) * ((data->simulationInfo->realParameter[73] /* powerBlock.HTR.UA_dis[4] PARAM */) * ((tmp273) * (data->localData[0]->realVars[56] /* powerBlock.HTR.T_from_turb[4] variable */ + data->localData[0]->realVars[57] /* powerBlock.HTR.T_from_turb[5] variable */ + (-data->localData[0]->realVars[42] /* powerBlock.HTR.T_from_comp[4] variable */) - data->localData[0]->realVars[43] /* powerBlock.HTR.T_from_comp[5] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */ - data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */);

  res[67] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */ - data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */ - data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */);

  tmp278 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp279 = 0.8;
  if(tmp278 < 0.0 && tmp279 != 0.0)
  {
    tmp281 = modf(tmp279, &tmp282);
    
    if(tmp281 > 0.5)
    {
      tmp281 -= 1.0;
      tmp282 += 1.0;
    }
    else if(tmp281 < -0.5)
    {
      tmp281 += 1.0;
      tmp282 -= 1.0;
    }
    
    if(fabs(tmp281) < 1e-10)
      tmp280 = pow(tmp278, tmp282);
    else
    {
      tmp284 = modf(1.0/tmp279, &tmp283);
      if(tmp284 > 0.5)
      {
        tmp284 -= 1.0;
        tmp283 += 1.0;
      }
      else if(tmp284 < -0.5)
      {
        tmp284 += 1.0;
        tmp283 -= 1.0;
      }
      if(fabs(tmp284) < 1e-10 && ((unsigned long)tmp283 & 1))
      {
        tmp280 = -pow(-tmp278, tmp281)*pow(tmp278, tmp282);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp278, tmp279);
      }
    }
  }
  else
  {
    tmp280 = pow(tmp278, tmp279);
  }
  if(isnan(tmp280) || isinf(tmp280))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp278, tmp279);
  }res[68] = (0.2871745887492588) * ((data->simulationInfo->realParameter[72] /* powerBlock.HTR.UA_dis[3] PARAM */) * ((tmp280) * (data->localData[0]->realVars[55] /* powerBlock.HTR.T_from_turb[3] variable */ + data->localData[0]->realVars[56] /* powerBlock.HTR.T_from_turb[4] variable */ + (-data->localData[0]->realVars[41] /* powerBlock.HTR.T_from_comp[3] variable */) - data->localData[0]->realVars[42] /* powerBlock.HTR.T_from_comp[4] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */ - data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */);

  res[69] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */ - data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */ - data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */);

  tmp285 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp286 = 0.8;
  if(tmp285 < 0.0 && tmp286 != 0.0)
  {
    tmp288 = modf(tmp286, &tmp289);
    
    if(tmp288 > 0.5)
    {
      tmp288 -= 1.0;
      tmp289 += 1.0;
    }
    else if(tmp288 < -0.5)
    {
      tmp288 += 1.0;
      tmp289 -= 1.0;
    }
    
    if(fabs(tmp288) < 1e-10)
      tmp287 = pow(tmp285, tmp289);
    else
    {
      tmp291 = modf(1.0/tmp286, &tmp290);
      if(tmp291 > 0.5)
      {
        tmp291 -= 1.0;
        tmp290 += 1.0;
      }
      else if(tmp291 < -0.5)
      {
        tmp291 += 1.0;
        tmp290 -= 1.0;
      }
      if(fabs(tmp291) < 1e-10 && ((unsigned long)tmp290 & 1))
      {
        tmp287 = -pow(-tmp285, tmp288)*pow(tmp285, tmp289);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp285, tmp286);
      }
    }
  }
  else
  {
    tmp287 = pow(tmp285, tmp286);
  }
  if(isnan(tmp287) || isinf(tmp287))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp285, tmp286);
  }res[70] = (0.2871745887492588) * ((data->simulationInfo->realParameter[71] /* powerBlock.HTR.UA_dis[2] PARAM */) * ((tmp287) * (data->localData[0]->realVars[54] /* powerBlock.HTR.T_from_turb[2] variable */ + data->localData[0]->realVars[55] /* powerBlock.HTR.T_from_turb[3] variable */ + (-data->localData[0]->realVars[40] /* powerBlock.HTR.T_from_comp[2] variable */) - data->localData[0]->realVars[41] /* powerBlock.HTR.T_from_comp[3] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */ - data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */);

  res[71] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[84] /* powerBlock.HTR.h_from_comp[1] variable */ - data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */ - data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */);

  tmp292 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp293 = 0.8;
  if(tmp292 < 0.0 && tmp293 != 0.0)
  {
    tmp295 = modf(tmp293, &tmp296);
    
    if(tmp295 > 0.5)
    {
      tmp295 -= 1.0;
      tmp296 += 1.0;
    }
    else if(tmp295 < -0.5)
    {
      tmp295 += 1.0;
      tmp296 -= 1.0;
    }
    
    if(fabs(tmp295) < 1e-10)
      tmp294 = pow(tmp292, tmp296);
    else
    {
      tmp298 = modf(1.0/tmp293, &tmp297);
      if(tmp298 > 0.5)
      {
        tmp298 -= 1.0;
        tmp297 += 1.0;
      }
      else if(tmp298 < -0.5)
      {
        tmp298 += 1.0;
        tmp297 -= 1.0;
      }
      if(fabs(tmp298) < 1e-10 && ((unsigned long)tmp297 & 1))
      {
        tmp294 = -pow(-tmp292, tmp295)*pow(tmp292, tmp296);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp292, tmp293);
      }
    }
  }
  else
  {
    tmp294 = pow(tmp292, tmp293);
  }
  if(isnan(tmp294) || isinf(tmp294))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp292, tmp293);
  }res[72] = (0.2871745887492588) * ((data->simulationInfo->realParameter[70] /* powerBlock.HTR.UA_dis[1] PARAM */) * ((tmp294) * (data->localData[0]->realVars[142] /* powerBlock.LTR.T_from_turb[15] variable */ + data->localData[0]->realVars[54] /* powerBlock.HTR.T_from_turb[2] variable */ + (-data->localData[0]->realVars[39] /* powerBlock.HTR.T_from_comp[1] variable */) - data->localData[0]->realVars[40] /* powerBlock.HTR.T_from_comp[2] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */ - data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */);

  res[73] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[14] variable */ - data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[15] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */ - data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS1164(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+74] = {0,18,5,74,49,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,3,3,4,2,6,5,7,8,9,10,11,12,13,14,33,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4};
  const int rowIndex[506] = {1,2,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,3,29,30,71,72,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,0,1,2,3,9,11,13,15,17,18,19,20,22,24,25,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,50,51,54,56,57,59,62,64,66,68,70,71,72,9,71,72,73,9,71,72,73,69,70,71,72,69,70,71,72,67,68,69,70,67,68,69,70,65,66,67,68,65,66,67,68,63,64,65,66,63,64,65,66,61,62,63,64,59,60,61,62,61,62,63,64,59,60,61,62,57,58,59,60,57,58,59,60,55,56,57,58,55,56,57,58,53,54,55,56,51,52,53,54,53,54,55,56,51,52,53,54,49,50,51,52,47,48,49,50,49,50,51,52,45,46,47,48,47,48,49,50,45,46,47,48,44,45,46,41,42,44,41,42,43,44,41,44,39,40,41,42,43,44,40,41,42,43,44,38,39,40,41,42,43,44,37,38,39,40,41,42,43,44,36,37,38,39,40,41,42,43,44,35,36,37,38,39,40,41,42,43,44,34,35,36,37,38,39,40,41,42,43,44,33,34,35,36,37,38,39,40,41,42,43,44,32,33,34,35,36,37,38,39,40,41,42,43,44,31,32,33,34,35,36,37,38,39,40,41,42,43,44,1,2,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,50,51,54,56,57,59,62,64,66,68,70,71,72,3,4,28,29,4,26,27,28,5,25,26,27,5,25,26,27,5,23,24,25,21,22,23,24,21,22,23,24,6,20,21,22,6,20,21,22,6,7,19,20,7,8,18,19,8,16,17,18,14,15,16,17,14,15,16,17,12,13,14,15,12,13,14,15,10,11,12,13,10,11,12,13,9,10,11,73,9,10,11,73,8,16,17,18,7,8,18,19,6,7,19,20,5,23,24,25,4,26,27,28,3,4,28,29,1,2,45,46};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((74+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(506*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 506;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(74*sizeof(int));
  inSysData->sparsePattern->maxColors = 18;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (74+1)*sizeof(int));
  
  for(i=2;i<74+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 506*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[46] = 1;
  inSysData->sparsePattern->colorCols[45] = 2;
  inSysData->sparsePattern->colorCols[44] = 3;
  inSysData->sparsePattern->colorCols[43] = 4;
  inSysData->sparsePattern->colorCols[42] = 5;
  inSysData->sparsePattern->colorCols[41] = 6;
  inSysData->sparsePattern->colorCols[40] = 7;
  inSysData->sparsePattern->colorCols[39] = 8;
  inSysData->sparsePattern->colorCols[38] = 9;
  inSysData->sparsePattern->colorCols[37] = 10;
  inSysData->sparsePattern->colorCols[36] = 11;
  inSysData->sparsePattern->colorCols[7] = 12;
  inSysData->sparsePattern->colorCols[30] = 12;
  inSysData->sparsePattern->colorCols[35] = 12;
  inSysData->sparsePattern->colorCols[66] = 12;
  inSysData->sparsePattern->colorCols[69] = 12;
  inSysData->sparsePattern->colorCols[73] = 12;
  inSysData->sparsePattern->colorCols[6] = 13;
  inSysData->sparsePattern->colorCols[11] = 13;
  inSysData->sparsePattern->colorCols[16] = 13;
  inSysData->sparsePattern->colorCols[19] = 13;
  inSysData->sparsePattern->colorCols[24] = 13;
  inSysData->sparsePattern->colorCols[28] = 13;
  inSysData->sparsePattern->colorCols[32] = 13;
  inSysData->sparsePattern->colorCols[55] = 13;
  inSysData->sparsePattern->colorCols[62] = 13;
  inSysData->sparsePattern->colorCols[65] = 13;
  inSysData->sparsePattern->colorCols[67] = 13;
  inSysData->sparsePattern->colorCols[70] = 13;
  inSysData->sparsePattern->colorCols[71] = 13;
  inSysData->sparsePattern->colorCols[5] = 14;
  inSysData->sparsePattern->colorCols[10] = 14;
  inSysData->sparsePattern->colorCols[14] = 14;
  inSysData->sparsePattern->colorCols[18] = 14;
  inSysData->sparsePattern->colorCols[22] = 14;
  inSysData->sparsePattern->colorCols[26] = 14;
  inSysData->sparsePattern->colorCols[31] = 14;
  inSysData->sparsePattern->colorCols[34] = 14;
  inSysData->sparsePattern->colorCols[50] = 14;
  inSysData->sparsePattern->colorCols[53] = 14;
  inSysData->sparsePattern->colorCols[60] = 14;
  inSysData->sparsePattern->colorCols[64] = 14;
  inSysData->sparsePattern->colorCols[68] = 14;
  inSysData->sparsePattern->colorCols[72] = 14;
  inSysData->sparsePattern->colorCols[4] = 15;
  inSysData->sparsePattern->colorCols[9] = 15;
  inSysData->sparsePattern->colorCols[13] = 15;
  inSysData->sparsePattern->colorCols[17] = 15;
  inSysData->sparsePattern->colorCols[21] = 15;
  inSysData->sparsePattern->colorCols[25] = 15;
  inSysData->sparsePattern->colorCols[29] = 15;
  inSysData->sparsePattern->colorCols[33] = 15;
  inSysData->sparsePattern->colorCols[47] = 15;
  inSysData->sparsePattern->colorCols[49] = 15;
  inSysData->sparsePattern->colorCols[52] = 15;
  inSysData->sparsePattern->colorCols[56] = 15;
  inSysData->sparsePattern->colorCols[58] = 15;
  inSysData->sparsePattern->colorCols[61] = 15;
  inSysData->sparsePattern->colorCols[3] = 16;
  inSysData->sparsePattern->colorCols[2] = 17;
  inSysData->sparsePattern->colorCols[0] = 18;
  inSysData->sparsePattern->colorCols[1] = 18;
  inSysData->sparsePattern->colorCols[8] = 18;
  inSysData->sparsePattern->colorCols[12] = 18;
  inSysData->sparsePattern->colorCols[15] = 18;
  inSysData->sparsePattern->colorCols[20] = 18;
  inSysData->sparsePattern->colorCols[23] = 18;
  inSysData->sparsePattern->colorCols[27] = 18;
  inSysData->sparsePattern->colorCols[48] = 18;
  inSysData->sparsePattern->colorCols[51] = 18;
  inSysData->sparsePattern->colorCols[54] = 18;
  inSysData->sparsePattern->colorCols[57] = 18;
  inSysData->sparsePattern->colorCols[59] = 18;
  inSysData->sparsePattern->colorCols[63] = 18;
}
void initializeStaticDataNLS1164(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.h_CO2[15] */
  sysData->nominal[i] = data->modelData->realVarsData[236].attribute /* powerBlock.exchanger.h_CO2[15] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[236].attribute /* powerBlock.exchanger.h_CO2[15] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[236].attribute /* powerBlock.exchanger.h_CO2[15] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[1] */
  sysData->nominal[i] = data->modelData->realVarsData[173].attribute /* powerBlock.LTR.h_from_turb[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[173].attribute /* powerBlock.LTR.h_from_turb[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[173].attribute /* powerBlock.LTR.h_from_turb[1] */.max;
  /* static nls data for powerBlock.exchanger.CO2_port_b.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[200].attribute /* powerBlock.exchanger.CO2_port_b.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[200].attribute /* powerBlock.exchanger.CO2_port_b.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[200].attribute /* powerBlock.exchanger.CO2_port_b.m_flow */.max;
  /* static nls data for powerBlock.turbine.p_out */
  sysData->nominal[i] = data->modelData->realVarsData[278].attribute /* powerBlock.turbine.p_out */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[278].attribute /* powerBlock.turbine.p_out */.min;
  sysData->max[i++]   = data->modelData->realVarsData[278].attribute /* powerBlock.turbine.p_out */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[15] */
  sysData->nominal[i] = data->modelData->realVarsData[172].attribute /* powerBlock.LTR.h_from_comp[15] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[172].attribute /* powerBlock.LTR.h_from_comp[15] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[172].attribute /* powerBlock.LTR.h_from_comp[15] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[15] */
  sysData->nominal[i] = data->modelData->realVarsData[187].attribute /* powerBlock.LTR.h_from_turb[15] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[187].attribute /* powerBlock.LTR.h_from_turb[15] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[187].attribute /* powerBlock.LTR.h_from_turb[15] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[2] */
  sysData->nominal[i] = data->modelData->realVarsData[85].attribute /* powerBlock.HTR.h_from_comp[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[85].attribute /* powerBlock.HTR.h_from_comp[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[85].attribute /* powerBlock.HTR.h_from_comp[2] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[2] */
  sysData->nominal[i] = data->modelData->realVarsData[98].attribute /* powerBlock.HTR.h_from_turb[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[98].attribute /* powerBlock.HTR.h_from_turb[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[98].attribute /* powerBlock.HTR.h_from_turb[2] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[3] */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* powerBlock.HTR.h_from_comp[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* powerBlock.HTR.h_from_comp[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* powerBlock.HTR.h_from_comp[3] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[3] */
  sysData->nominal[i] = data->modelData->realVarsData[99].attribute /* powerBlock.HTR.h_from_turb[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[99].attribute /* powerBlock.HTR.h_from_turb[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[99].attribute /* powerBlock.HTR.h_from_turb[3] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[4] */
  sysData->nominal[i] = data->modelData->realVarsData[87].attribute /* powerBlock.HTR.h_from_comp[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[87].attribute /* powerBlock.HTR.h_from_comp[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[87].attribute /* powerBlock.HTR.h_from_comp[4] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[4] */
  sysData->nominal[i] = data->modelData->realVarsData[100].attribute /* powerBlock.HTR.h_from_turb[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[100].attribute /* powerBlock.HTR.h_from_turb[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[100].attribute /* powerBlock.HTR.h_from_turb[4] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[5] */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* powerBlock.HTR.h_from_comp[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* powerBlock.HTR.h_from_comp[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* powerBlock.HTR.h_from_comp[5] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[5] */
  sysData->nominal[i] = data->modelData->realVarsData[101].attribute /* powerBlock.HTR.h_from_turb[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[101].attribute /* powerBlock.HTR.h_from_turb[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[101].attribute /* powerBlock.HTR.h_from_turb[5] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[6] */
  sysData->nominal[i] = data->modelData->realVarsData[89].attribute /* powerBlock.HTR.h_from_comp[6] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[89].attribute /* powerBlock.HTR.h_from_comp[6] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[89].attribute /* powerBlock.HTR.h_from_comp[6] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[7] */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* powerBlock.HTR.h_from_turb[7] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* powerBlock.HTR.h_from_turb[7] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* powerBlock.HTR.h_from_turb[7] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[6] */
  sysData->nominal[i] = data->modelData->realVarsData[102].attribute /* powerBlock.HTR.h_from_turb[6] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[102].attribute /* powerBlock.HTR.h_from_turb[6] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[102].attribute /* powerBlock.HTR.h_from_turb[6] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[7] */
  sysData->nominal[i] = data->modelData->realVarsData[90].attribute /* powerBlock.HTR.h_from_comp[7] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[90].attribute /* powerBlock.HTR.h_from_comp[7] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[90].attribute /* powerBlock.HTR.h_from_comp[7] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[8] */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* powerBlock.HTR.h_from_turb[8] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* powerBlock.HTR.h_from_turb[8] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* powerBlock.HTR.h_from_turb[8] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[8] */
  sysData->nominal[i] = data->modelData->realVarsData[91].attribute /* powerBlock.HTR.h_from_comp[8] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[91].attribute /* powerBlock.HTR.h_from_comp[8] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[91].attribute /* powerBlock.HTR.h_from_comp[8] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[9] */
  sysData->nominal[i] = data->modelData->realVarsData[105].attribute /* powerBlock.HTR.h_from_turb[9] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[105].attribute /* powerBlock.HTR.h_from_turb[9] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[105].attribute /* powerBlock.HTR.h_from_turb[9] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[9] */
  sysData->nominal[i] = data->modelData->realVarsData[92].attribute /* powerBlock.HTR.h_from_comp[9] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[92].attribute /* powerBlock.HTR.h_from_comp[9] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[92].attribute /* powerBlock.HTR.h_from_comp[9] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[10] */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* powerBlock.HTR.h_from_turb[10] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* powerBlock.HTR.h_from_turb[10] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* powerBlock.HTR.h_from_turb[10] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[11] */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* powerBlock.HTR.h_from_comp[11] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* powerBlock.HTR.h_from_comp[11] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* powerBlock.HTR.h_from_comp[11] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[10] */
  sysData->nominal[i] = data->modelData->realVarsData[93].attribute /* powerBlock.HTR.h_from_comp[10] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[93].attribute /* powerBlock.HTR.h_from_comp[10] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[93].attribute /* powerBlock.HTR.h_from_comp[10] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[11] */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* powerBlock.HTR.h_from_turb[11] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* powerBlock.HTR.h_from_turb[11] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* powerBlock.HTR.h_from_turb[11] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[12] */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* powerBlock.HTR.h_from_turb[12] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* powerBlock.HTR.h_from_turb[12] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* powerBlock.HTR.h_from_turb[12] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[13] */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* powerBlock.HTR.h_from_turb[13] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* powerBlock.HTR.h_from_turb[13] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* powerBlock.HTR.h_from_turb[13] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[12] */
  sysData->nominal[i] = data->modelData->realVarsData[95].attribute /* powerBlock.HTR.h_from_comp[12] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[95].attribute /* powerBlock.HTR.h_from_comp[12] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[95].attribute /* powerBlock.HTR.h_from_comp[12] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[14] */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* powerBlock.HTR.h_from_turb[14] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* powerBlock.HTR.h_from_turb[14] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* powerBlock.HTR.h_from_turb[14] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[13] */
  sysData->nominal[i] = data->modelData->realVarsData[96].attribute /* powerBlock.HTR.h_from_comp[13] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[96].attribute /* powerBlock.HTR.h_from_comp[13] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[96].attribute /* powerBlock.HTR.h_from_comp[13] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[14] */
  sysData->nominal[i] = data->modelData->realVarsData[97].attribute /* powerBlock.HTR.h_from_comp[14] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[97].attribute /* powerBlock.HTR.h_from_comp[14] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[97].attribute /* powerBlock.HTR.h_from_comp[14] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[1] */
  sysData->nominal[i] = data->modelData->realVarsData[222].attribute /* powerBlock.exchanger.h_CO2[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[222].attribute /* powerBlock.exchanger.h_CO2[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[222].attribute /* powerBlock.exchanger.h_CO2[1] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[3] */
  sysData->nominal[i] = data->modelData->realVarsData[224].attribute /* powerBlock.exchanger.h_CO2[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[224].attribute /* powerBlock.exchanger.h_CO2[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[224].attribute /* powerBlock.exchanger.h_CO2[3] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[4] */
  sysData->nominal[i] = data->modelData->realVarsData[225].attribute /* powerBlock.exchanger.h_CO2[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[225].attribute /* powerBlock.exchanger.h_CO2[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[225].attribute /* powerBlock.exchanger.h_CO2[4] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[2] */
  sysData->nominal[i] = data->modelData->realVarsData[223].attribute /* powerBlock.exchanger.h_CO2[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[223].attribute /* powerBlock.exchanger.h_CO2[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[223].attribute /* powerBlock.exchanger.h_CO2[2] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[6] */
  sysData->nominal[i] = data->modelData->realVarsData[227].attribute /* powerBlock.exchanger.h_CO2[6] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[227].attribute /* powerBlock.exchanger.h_CO2[6] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[227].attribute /* powerBlock.exchanger.h_CO2[6] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[5] */
  sysData->nominal[i] = data->modelData->realVarsData[226].attribute /* powerBlock.exchanger.h_CO2[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[226].attribute /* powerBlock.exchanger.h_CO2[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[226].attribute /* powerBlock.exchanger.h_CO2[5] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[7] */
  sysData->nominal[i] = data->modelData->realVarsData[228].attribute /* powerBlock.exchanger.h_CO2[7] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[228].attribute /* powerBlock.exchanger.h_CO2[7] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[228].attribute /* powerBlock.exchanger.h_CO2[7] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[8] */
  sysData->nominal[i] = data->modelData->realVarsData[229].attribute /* powerBlock.exchanger.h_CO2[8] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[229].attribute /* powerBlock.exchanger.h_CO2[8] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[229].attribute /* powerBlock.exchanger.h_CO2[8] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[9] */
  sysData->nominal[i] = data->modelData->realVarsData[230].attribute /* powerBlock.exchanger.h_CO2[9] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[230].attribute /* powerBlock.exchanger.h_CO2[9] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[230].attribute /* powerBlock.exchanger.h_CO2[9] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[10] */
  sysData->nominal[i] = data->modelData->realVarsData[231].attribute /* powerBlock.exchanger.h_CO2[10] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[231].attribute /* powerBlock.exchanger.h_CO2[10] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[231].attribute /* powerBlock.exchanger.h_CO2[10] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[11] */
  sysData->nominal[i] = data->modelData->realVarsData[232].attribute /* powerBlock.exchanger.h_CO2[11] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[232].attribute /* powerBlock.exchanger.h_CO2[11] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[232].attribute /* powerBlock.exchanger.h_CO2[11] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[12] */
  sysData->nominal[i] = data->modelData->realVarsData[233].attribute /* powerBlock.exchanger.h_CO2[12] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[233].attribute /* powerBlock.exchanger.h_CO2[12] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[233].attribute /* powerBlock.exchanger.h_CO2[12] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[13] */
  sysData->nominal[i] = data->modelData->realVarsData[234].attribute /* powerBlock.exchanger.h_CO2[13] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[234].attribute /* powerBlock.exchanger.h_CO2[13] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[234].attribute /* powerBlock.exchanger.h_CO2[13] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[14] */
  sysData->nominal[i] = data->modelData->realVarsData[235].attribute /* powerBlock.exchanger.h_CO2[14] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[235].attribute /* powerBlock.exchanger.h_CO2[14] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[235].attribute /* powerBlock.exchanger.h_CO2[14] */.max;
  /* static nls data for powerBlock.reCompressor.p_out */
  sysData->nominal[i] = data->modelData->realVarsData[266].attribute /* powerBlock.reCompressor.p_out */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[266].attribute /* powerBlock.reCompressor.p_out */.min;
  sysData->max[i++]   = data->modelData->realVarsData[266].attribute /* powerBlock.reCompressor.p_out */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[2] */
  sysData->nominal[i] = data->modelData->realVarsData[174].attribute /* powerBlock.LTR.h_from_turb[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[174].attribute /* powerBlock.LTR.h_from_turb[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[174].attribute /* powerBlock.LTR.h_from_turb[2] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[3] */
  sysData->nominal[i] = data->modelData->realVarsData[175].attribute /* powerBlock.LTR.h_from_turb[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[175].attribute /* powerBlock.LTR.h_from_turb[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[175].attribute /* powerBlock.LTR.h_from_turb[3] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[4] */
  sysData->nominal[i] = data->modelData->realVarsData[176].attribute /* powerBlock.LTR.h_from_turb[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[176].attribute /* powerBlock.LTR.h_from_turb[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[176].attribute /* powerBlock.LTR.h_from_turb[4] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[4] */
  sysData->nominal[i] = data->modelData->realVarsData[161].attribute /* powerBlock.LTR.h_from_comp[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[161].attribute /* powerBlock.LTR.h_from_comp[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[161].attribute /* powerBlock.LTR.h_from_comp[4] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[5] */
  sysData->nominal[i] = data->modelData->realVarsData[177].attribute /* powerBlock.LTR.h_from_turb[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[177].attribute /* powerBlock.LTR.h_from_turb[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[177].attribute /* powerBlock.LTR.h_from_turb[5] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[6] */
  sysData->nominal[i] = data->modelData->realVarsData[178].attribute /* powerBlock.LTR.h_from_turb[6] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[178].attribute /* powerBlock.LTR.h_from_turb[6] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[178].attribute /* powerBlock.LTR.h_from_turb[6] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[6] */
  sysData->nominal[i] = data->modelData->realVarsData[163].attribute /* powerBlock.LTR.h_from_comp[6] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[163].attribute /* powerBlock.LTR.h_from_comp[6] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[163].attribute /* powerBlock.LTR.h_from_comp[6] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[7] */
  sysData->nominal[i] = data->modelData->realVarsData[164].attribute /* powerBlock.LTR.h_from_comp[7] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[164].attribute /* powerBlock.LTR.h_from_comp[7] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[164].attribute /* powerBlock.LTR.h_from_comp[7] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[7] */
  sysData->nominal[i] = data->modelData->realVarsData[179].attribute /* powerBlock.LTR.h_from_turb[7] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[179].attribute /* powerBlock.LTR.h_from_turb[7] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[179].attribute /* powerBlock.LTR.h_from_turb[7] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[8] */
  sysData->nominal[i] = data->modelData->realVarsData[180].attribute /* powerBlock.LTR.h_from_turb[8] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[180].attribute /* powerBlock.LTR.h_from_turb[8] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[180].attribute /* powerBlock.LTR.h_from_turb[8] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[9] */
  sysData->nominal[i] = data->modelData->realVarsData[181].attribute /* powerBlock.LTR.h_from_turb[9] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[181].attribute /* powerBlock.LTR.h_from_turb[9] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[181].attribute /* powerBlock.LTR.h_from_turb[9] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[10] */
  sysData->nominal[i] = data->modelData->realVarsData[182].attribute /* powerBlock.LTR.h_from_turb[10] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[182].attribute /* powerBlock.LTR.h_from_turb[10] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[182].attribute /* powerBlock.LTR.h_from_turb[10] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[11] */
  sysData->nominal[i] = data->modelData->realVarsData[183].attribute /* powerBlock.LTR.h_from_turb[11] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[183].attribute /* powerBlock.LTR.h_from_turb[11] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[183].attribute /* powerBlock.LTR.h_from_turb[11] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[11] */
  sysData->nominal[i] = data->modelData->realVarsData[168].attribute /* powerBlock.LTR.h_from_comp[11] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[168].attribute /* powerBlock.LTR.h_from_comp[11] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[168].attribute /* powerBlock.LTR.h_from_comp[11] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[12] */
  sysData->nominal[i] = data->modelData->realVarsData[169].attribute /* powerBlock.LTR.h_from_comp[12] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[169].attribute /* powerBlock.LTR.h_from_comp[12] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[169].attribute /* powerBlock.LTR.h_from_comp[12] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[12] */
  sysData->nominal[i] = data->modelData->realVarsData[184].attribute /* powerBlock.LTR.h_from_turb[12] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[184].attribute /* powerBlock.LTR.h_from_turb[12] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[184].attribute /* powerBlock.LTR.h_from_turb[12] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[13] */
  sysData->nominal[i] = data->modelData->realVarsData[170].attribute /* powerBlock.LTR.h_from_comp[13] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[170].attribute /* powerBlock.LTR.h_from_comp[13] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[170].attribute /* powerBlock.LTR.h_from_comp[13] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[13] */
  sysData->nominal[i] = data->modelData->realVarsData[185].attribute /* powerBlock.LTR.h_from_turb[13] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[185].attribute /* powerBlock.LTR.h_from_turb[13] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[185].attribute /* powerBlock.LTR.h_from_turb[13] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[14] */
  sysData->nominal[i] = data->modelData->realVarsData[171].attribute /* powerBlock.LTR.h_from_comp[14] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[171].attribute /* powerBlock.LTR.h_from_comp[14] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[171].attribute /* powerBlock.LTR.h_from_comp[14] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[14] */
  sysData->nominal[i] = data->modelData->realVarsData[186].attribute /* powerBlock.LTR.h_from_turb[14] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[186].attribute /* powerBlock.LTR.h_from_turb[14] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[186].attribute /* powerBlock.LTR.h_from_turb[14] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[10] */
  sysData->nominal[i] = data->modelData->realVarsData[167].attribute /* powerBlock.LTR.h_from_comp[10] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[167].attribute /* powerBlock.LTR.h_from_comp[10] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[167].attribute /* powerBlock.LTR.h_from_comp[10] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[9] */
  sysData->nominal[i] = data->modelData->realVarsData[166].attribute /* powerBlock.LTR.h_from_comp[9] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[166].attribute /* powerBlock.LTR.h_from_comp[9] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[166].attribute /* powerBlock.LTR.h_from_comp[9] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[8] */
  sysData->nominal[i] = data->modelData->realVarsData[165].attribute /* powerBlock.LTR.h_from_comp[8] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[165].attribute /* powerBlock.LTR.h_from_comp[8] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[165].attribute /* powerBlock.LTR.h_from_comp[8] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[5] */
  sysData->nominal[i] = data->modelData->realVarsData[162].attribute /* powerBlock.LTR.h_from_comp[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[162].attribute /* powerBlock.LTR.h_from_comp[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[162].attribute /* powerBlock.LTR.h_from_comp[5] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[3] */
  sysData->nominal[i] = data->modelData->realVarsData[160].attribute /* powerBlock.LTR.h_from_comp[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[160].attribute /* powerBlock.LTR.h_from_comp[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[160].attribute /* powerBlock.LTR.h_from_comp[3] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[2] */
  sysData->nominal[i] = data->modelData->realVarsData[159].attribute /* powerBlock.LTR.h_from_comp[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[159].attribute /* powerBlock.LTR.h_from_comp[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[159].attribute /* powerBlock.LTR.h_from_comp[2] */.max;
  /* static nls data for powerBlock.turbine.C_spouting */
  sysData->nominal[i] = data->modelData->realVarsData[274].attribute /* powerBlock.turbine.C_spouting */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[274].attribute /* powerBlock.turbine.C_spouting */.min;
  sysData->max[i++]   = data->modelData->realVarsData[274].attribute /* powerBlock.turbine.C_spouting */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS1164(sysData);
}

void getIterationVarsNLS1164(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */;
  array[1] = data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */;
  array[2] = data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */;
  array[3] = data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */;
  array[4] = data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[15] variable */;
  array[5] = data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */;
  array[6] = data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */;
  array[7] = data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */;
  array[8] = data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */;
  array[9] = data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */;
  array[10] = data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */;
  array[11] = data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */;
  array[12] = data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */;
  array[13] = data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */;
  array[14] = data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */;
  array[15] = data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */;
  array[16] = data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */;
  array[17] = data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */;
  array[18] = data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */;
  array[19] = data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */;
  array[20] = data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */;
  array[21] = data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */;
  array[22] = data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */;
  array[23] = data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */;
  array[24] = data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */;
  array[25] = data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */;
  array[26] = data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */;
  array[27] = data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */;
  array[28] = data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */;
  array[29] = data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */;
  array[30] = data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */;
  array[31] = data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */;
  array[32] = data->localData[0]->realVars[222] /* powerBlock.exchanger.h_CO2[1] variable */;
  array[33] = data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */;
  array[34] = data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */;
  array[35] = data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */;
  array[36] = data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */;
  array[37] = data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */;
  array[38] = data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */;
  array[39] = data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */;
  array[40] = data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */;
  array[41] = data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */;
  array[42] = data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */;
  array[43] = data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */;
  array[44] = data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */;
  array[45] = data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */;
  array[46] = data->localData[0]->realVars[266] /* powerBlock.reCompressor.p_out variable */;
  array[47] = data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */;
  array[48] = data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */;
  array[49] = data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */;
  array[50] = data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[4] variable */;
  array[51] = data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */;
  array[52] = data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */;
  array[53] = data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[6] variable */;
  array[54] = data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[7] variable */;
  array[55] = data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */;
  array[56] = data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */;
  array[57] = data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */;
  array[58] = data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */;
  array[59] = data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */;
  array[60] = data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[11] variable */;
  array[61] = data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[12] variable */;
  array[62] = data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */;
  array[63] = data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[13] variable */;
  array[64] = data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */;
  array[65] = data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[14] variable */;
  array[66] = data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */;
  array[67] = data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[10] variable */;
  array[68] = data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[9] variable */;
  array[69] = data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[8] variable */;
  array[70] = data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[5] variable */;
  array[71] = data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[3] variable */;
  array[72] = data->localData[0]->realVars[159] /* powerBlock.LTR.h_from_comp[2] variable */;
  array[73] = data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */;
}


/* inner equations */

/*
equation index: 673
type: SIMPLE_ASSIGN
powerBlock._turbine._eta_turb = 2.0 * powerBlock.turbine.eta_design * powerBlock.turbine.tipSpeed_des * sqrt(1.0 - (powerBlock.turbine.tipSpeed_des / powerBlock.turbine.C_spouting) ^ 2.0) / powerBlock.turbine.C_spouting
*/
void sCO2PBRig_eqFunction_673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,673};
  modelica_real tmp0;
  modelica_real tmp1;
  tmp0 = DIVISION_SIM(data->simulationInfo->realParameter[662] /* powerBlock.turbine.tipSpeed_des PARAM */,data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */,"powerBlock.turbine.C_spouting",equationIndexes);
  tmp1 = 1.0 - ((tmp0 * tmp0));
  if(!(tmp1 >= 0.0))
  {
    FILE_INFO info = {"",0,0,0,0,0};
    omc_assert_warning(info, "The following assertion has been violated %sat time %f", initial() ? "during initialization " : "", data->localData[0]->timeValue);
    throwStreamPrintWithEquationIndexes(threadData, equationIndexes, "Model error: Argument of sqrt(1.0 - (powerBlock.turbine.tipSpeed_des / powerBlock.turbine.C_spouting) ^ 2.0) was %g should be >= 0", tmp1);
  }
  data->localData[0]->realVars[277] /* powerBlock.turbine.eta_turb variable */ = (2.0) * ((data->simulationInfo->realParameter[650] /* powerBlock.turbine.eta_design PARAM */) * ((data->simulationInfo->realParameter[662] /* powerBlock.turbine.tipSpeed_des PARAM */) * (DIVISION_SIM(sqrt(tmp1),data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */,"powerBlock.turbine.C_spouting",equationIndexes))));
  TRACE_POP
}
/*
equation index: 674
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[11] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[11], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,674};
  data->localData[0]->realVars[63] /* powerBlock.HTR.T_from_turb[11] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 675
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[12] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[12], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,675};
  data->localData[0]->realVars[64] /* powerBlock.HTR.T_from_turb[12] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 676
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[10] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[10], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,676};
  data->localData[0]->realVars[137] /* powerBlock.LTR.T_from_turb[10] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 677
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[8] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[8], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,677};
  data->localData[0]->realVars[135] /* powerBlock.LTR.T_from_turb[8] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 678
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[2] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[2], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,678};
  data->localData[0]->realVars[129] /* powerBlock.LTR.T_from_turb[2] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 679
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[3] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[3], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,679};
  data->localData[0]->realVars[130] /* powerBlock.LTR.T_from_turb[3] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 680
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[4] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[4], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,680};
  data->localData[0]->realVars[131] /* powerBlock.LTR.T_from_turb[4] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 681
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[5] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[5], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,681};
  data->localData[0]->realVars[132] /* powerBlock.LTR.T_from_turb[5] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 682
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[6] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[6], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,682};
  data->localData[0]->realVars[133] /* powerBlock.LTR.T_from_turb[6] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 683
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[7] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[7], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,683};
  data->localData[0]->realVars[134] /* powerBlock.LTR.T_from_turb[7] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 684
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[9] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[9], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,684};
  data->localData[0]->realVars[136] /* powerBlock.LTR.T_from_turb[9] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 685
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[11] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[11], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,685};
  data->localData[0]->realVars[138] /* powerBlock.LTR.T_from_turb[11] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 686
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[12] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[12], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,686};
  data->localData[0]->realVars[139] /* powerBlock.LTR.T_from_turb[12] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 687
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[13] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[13], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,687};
  data->localData[0]->realVars[140] /* powerBlock.LTR.T_from_turb[13] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 688
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[14] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[14], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,688};
  data->localData[0]->realVars[141] /* powerBlock.LTR.T_from_turb[14] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 689
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[15] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[15], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,689};
  data->localData[0]->realVars[142] /* powerBlock.LTR.T_from_turb[15] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 690
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[7] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[7], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,690};
  data->localData[0]->realVars[59] /* powerBlock.HTR.T_from_turb[7] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 691
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[5] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[5], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,691};
  data->localData[0]->realVars[57] /* powerBlock.HTR.T_from_turb[5] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 692
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[14] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[14], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,692};
  data->localData[0]->realVars[66] /* powerBlock.HTR.T_from_turb[14] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 693
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[13] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[13], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,693};
  data->localData[0]->realVars[65] /* powerBlock.HTR.T_from_turb[13] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 694
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[10] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[10], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,694};
  data->localData[0]->realVars[62] /* powerBlock.HTR.T_from_turb[10] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 695
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[9] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[9], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,695};
  data->localData[0]->realVars[61] /* powerBlock.HTR.T_from_turb[9] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 696
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[8] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[8], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,696};
  data->localData[0]->realVars[60] /* powerBlock.HTR.T_from_turb[8] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 697
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[6] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[6], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,697};
  data->localData[0]->realVars[58] /* powerBlock.HTR.T_from_turb[6] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 698
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[4] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[4], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,698};
  data->localData[0]->realVars[56] /* powerBlock.HTR.T_from_turb[4] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 699
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[3] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[3], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,699};
  data->localData[0]->realVars[55] /* powerBlock.HTR.T_from_turb[3] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 700
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[2] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[2], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,700};
  data->localData[0]->realVars[54] /* powerBlock.HTR.T_from_turb[2] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 701
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._state_a._h = SolarTherm.Media.CO2.CO2_utilities.h_p_T(powerBlock.turbine.p_out, powerBlock.cooler.T_low, tableIDh_p_T)
*/
void sCO2PBRig_eqFunction_701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,701};
  data->localData[0]->realVars[261] /* powerBlock.mainCompressor.state_a.h variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->simulationInfo->realParameter[342] /* powerBlock.cooler.T_low PARAM */, data->simulationInfo->extObjs[38]);
  TRACE_POP
}
/*
equation index: 702
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._d_entrance = SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.turbine.p_out, powerBlock.mainCompressor.state_a.h, tableIDd_p_h)
*/
void sCO2PBRig_eqFunction_702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,702};
  data->localData[0]->realVars[254] /* powerBlock.mainCompressor.d_entrance variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_rho__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[261] /* powerBlock.mainCompressor.state_a.h variable */, data->simulationInfo->extObjs[37]);
  TRACE_POP
}
/*
equation index: 703
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._s_entrance = SolarTherm.Models.PowerBlocks.sCO2Cycle.DirectDesign.CompressorOnShaft$powerBlock$mainCompressor.Medium.specificEntropy(SolarTherm.Models.PowerBlocks.sCO2Cycle.DirectDesign.CompressorOnShaft$powerBlock$mainCompressor.Medium.ThermodynamicState(powerBlock.turbine.p_out, powerBlock.mainCompressor.state_a.h))
*/
void sCO2PBRig_eqFunction_703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,703};
  data->localData[0]->realVars[260] /* powerBlock.mainCompressor.s_entrance variable */ = omc_SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E536861667424706F776572426C6F636B246D61696E436F6D70726573736F72_Medium_specificEntropy(threadData, omc_SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E536861667424706F776572426C6F636B246D61696E436F6D70726573736F72_Medium_ThermodynamicState(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[261] /* powerBlock.mainCompressor.state_a.h variable */));
  TRACE_POP
}
/*
equation index: 704
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._p_out = powerBlock.turbine.p_out * powerBlock.PR
*/
void sCO2PBRig_eqFunction_704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,704};
  data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */ = (data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */) * (data->simulationInfo->realParameter[307] /* powerBlock.PR PARAM */);
  TRACE_POP
}
/*
equation index: 705
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[15] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[15], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,705};
  data->localData[0]->realVars[127] /* powerBlock.LTR.T_from_comp[15] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[15] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 706
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[9] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[9], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,706};
  data->localData[0]->realVars[121] /* powerBlock.LTR.T_from_comp[9] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[9] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 707
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[7] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[7], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,707};
  data->localData[0]->realVars[119] /* powerBlock.LTR.T_from_comp[7] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[7] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 708
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[6] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[6], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,708};
  data->localData[0]->realVars[118] /* powerBlock.LTR.T_from_comp[6] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[6] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 709
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[5] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[5], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,709};
  data->localData[0]->realVars[117] /* powerBlock.LTR.T_from_comp[5] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[5] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 710
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[4] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[4], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,710};
  data->localData[0]->realVars[116] /* powerBlock.LTR.T_from_comp[4] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[4] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 711
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[3] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[3], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,711};
  data->localData[0]->realVars[115] /* powerBlock.LTR.T_from_comp[3] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[3] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 712
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[2] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[2], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,712};
  data->localData[0]->realVars[114] /* powerBlock.LTR.T_from_comp[2] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[159] /* powerBlock.LTR.h_from_comp[2] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 713
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[8] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[8], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,713};
  data->localData[0]->realVars[120] /* powerBlock.LTR.T_from_comp[8] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[8] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 714
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[10] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[10], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,714};
  data->localData[0]->realVars[122] /* powerBlock.LTR.T_from_comp[10] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[10] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 715
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[11] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[11], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,715};
  data->localData[0]->realVars[123] /* powerBlock.LTR.T_from_comp[11] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[11] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 716
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[12] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[12], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,716};
  data->localData[0]->realVars[124] /* powerBlock.LTR.T_from_comp[12] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[12] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 717
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[13] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[13], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,717};
  data->localData[0]->realVars[125] /* powerBlock.LTR.T_from_comp[13] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[13] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 718
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[14] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[14], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,718};
  data->localData[0]->realVars[126] /* powerBlock.LTR.T_from_comp[14] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[14] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 719
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._state_isen._h = SolarTherm.Media.CO2.CO2_utilities.h_p_s(powerBlock.mainCompressor.p_out, powerBlock.mainCompressor.s_entrance, tableIDh_p_s)
*/
void sCO2PBRig_eqFunction_719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,719};
  data->localData[0]->realVars[262] /* powerBlock.mainCompressor.state_isen.h variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__s(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[260] /* powerBlock.mainCompressor.s_entrance variable */, data->simulationInfo->extObjs[39]);
  TRACE_POP
}
/*
equation index: 720
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._psi = (powerBlock.mainCompressor.state_isen.h - powerBlock.mainCompressor.state_a.h) / powerBlock.mainCompressor.tipSpeed ^ 2.0
*/
void sCO2PBRig_eqFunction_720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,720};
  modelica_real tmp0;
  tmp0 = data->simulationInfo->realParameter[606] /* powerBlock.mainCompressor.tipSpeed PARAM */;
  data->localData[0]->realVars[259] /* powerBlock.mainCompressor.psi variable */ = DIVISION_SIM(data->localData[0]->realVars[262] /* powerBlock.mainCompressor.state_isen.h variable */ - data->localData[0]->realVars[261] /* powerBlock.mainCompressor.state_a.h variable */,(tmp0 * tmp0),"powerBlock.mainCompressor.tipSpeed ^ 2.0",equationIndexes);
  TRACE_POP
}
/*
equation index: 721
type: SIMPLE_ASSIGN
powerBlock._splitter._gamma_port_b._m_flow = powerBlock.splitter.gamma * powerBlock.exchanger.CO2_port_b.m_flow
*/
void sCO2PBRig_eqFunction_721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,721};
  data->localData[0]->realVars[273] /* powerBlock.splitter.gamma_port_b.m_flow variable */ = (data->simulationInfo->realParameter[639] /* powerBlock.splitter.gamma PARAM */) * (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */);
  TRACE_POP
}
/*
equation index: 722
type: SIMPLE_ASSIGN
powerBlock._cooler._port_b._m_flow = (1.0 - powerBlock.splitter.gamma) * powerBlock.exchanger.CO2_port_b.m_flow
*/
void sCO2PBRig_eqFunction_722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,722};
  data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */ = (1.0 - data->simulationInfo->realParameter[639] /* powerBlock.splitter.gamma PARAM */) * (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */);
  TRACE_POP
}
/*
equation index: 723
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_CO2[15]._p = (powerBlock.splitter.gamma_port_b.m_flow * powerBlock.reCompressor.p_out + powerBlock.cooler.port_b.m_flow * powerBlock.mainCompressor.p_out) / (powerBlock.cooler.port_b.m_flow + powerBlock.splitter.gamma_port_b.m_flow)
*/
void sCO2PBRig_eqFunction_723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,723};
  data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */ = DIVISION_SIM((data->localData[0]->realVars[273] /* powerBlock.splitter.gamma_port_b.m_flow variable */) * (data->localData[0]->realVars[266] /* powerBlock.reCompressor.p_out variable */) + (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */),data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */ + data->localData[0]->realVars[273] /* powerBlock.splitter.gamma_port_b.m_flow variable */,"powerBlock.cooler.port_b.m_flow + powerBlock.splitter.gamma_port_b.m_flow",equationIndexes);
  TRACE_POP
}
/*
equation index: 724
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[13] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[13], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,724};
  data->localData[0]->realVars[51] /* powerBlock.HTR.T_from_comp[13] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 725
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[15] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[1], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,725};
  data->localData[0]->realVars[53] /* powerBlock.HTR.T_from_comp[15] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[222] /* powerBlock.exchanger.h_CO2[1] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 726
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[14] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[14], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,726};
  data->localData[0]->realVars[52] /* powerBlock.HTR.T_from_comp[14] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 727
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[8] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[8], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,727};
  data->localData[0]->realVars[46] /* powerBlock.HTR.T_from_comp[8] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 728
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[9] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[9], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,728};
  data->localData[0]->realVars[47] /* powerBlock.HTR.T_from_comp[9] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 729
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[2] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[2], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,729};
  data->localData[0]->realVars[40] /* powerBlock.HTR.T_from_comp[2] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 730
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[3] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[3], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,730};
  data->localData[0]->realVars[41] /* powerBlock.HTR.T_from_comp[3] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 731
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[4] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[4], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,731};
  data->localData[0]->realVars[42] /* powerBlock.HTR.T_from_comp[4] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 732
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[12] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[12], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,732};
  data->localData[0]->realVars[50] /* powerBlock.HTR.T_from_comp[12] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 733
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[11] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[11], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,733};
  data->localData[0]->realVars[49] /* powerBlock.HTR.T_from_comp[11] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 734
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[10] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[10], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,734};
  data->localData[0]->realVars[48] /* powerBlock.HTR.T_from_comp[10] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 735
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[7] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[7], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,735};
  data->localData[0]->realVars[45] /* powerBlock.HTR.T_from_comp[7] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 736
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[6] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[6], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,736};
  data->localData[0]->realVars[44] /* powerBlock.HTR.T_from_comp[6] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 737
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[5] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[5], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,737};
  data->localData[0]->realVars[43] /* powerBlock.HTR.T_from_comp[5] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 738
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._phi = (-powerBlock.cooler.port_b.m_flow) / (powerBlock.mainCompressor.diam_rotor ^ 2.0 * powerBlock.mainCompressor.d_entrance * powerBlock.mainCompressor.tipSpeed)
*/
void sCO2PBRig_eqFunction_738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,738};
  modelica_real tmp0;
  tmp0 = data->simulationInfo->realParameter[592] /* powerBlock.mainCompressor.diam_rotor PARAM */;
  data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */ = DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),((tmp0 * tmp0)) * ((data->localData[0]->realVars[254] /* powerBlock.mainCompressor.d_entrance variable */) * (data->simulationInfo->realParameter[606] /* powerBlock.mainCompressor.tipSpeed PARAM */)),"powerBlock.mainCompressor.diam_rotor ^ 2.0 * powerBlock.mainCompressor.d_entrance * powerBlock.mainCompressor.tipSpeed",equationIndexes);
  TRACE_POP
}
/*
equation index: 739
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._eta_comp = 1.475280930371166 * powerBlock.mainCompressor.eta_design * (-0.7069 + 168.6 * powerBlock.mainCompressor.phi + (-8089.0) * powerBlock.mainCompressor.phi ^ 2.0 + 182725.0 * powerBlock.mainCompressor.phi ^ 3.0 + (-1638000.0) * powerBlock.mainCompressor.phi ^ 4.0)
*/
void sCO2PBRig_eqFunction_739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,739};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */;
  tmp1 = data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */;
  tmp2 = data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */;
  tmp2 *= tmp2;
  data->localData[0]->realVars[255] /* powerBlock.mainCompressor.eta_comp variable */ = (1.475280930371166) * ((data->simulationInfo->realParameter[593] /* powerBlock.mainCompressor.eta_design PARAM */) * (-0.7069 + (168.6) * (data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */) + (-8089.0) * ((tmp0 * tmp0)) + (182725.0) * ((tmp1 * tmp1 * tmp1)) + (-1638000.0) * ((tmp2 * tmp2))));
  TRACE_POP
}
/*
equation index: 740
type: SIMPLE_ASSIGN
powerBlock._LTR._h_from_comp[1] = powerBlock.mainCompressor.state_a.h + (powerBlock.mainCompressor.state_isen.h - powerBlock.mainCompressor.state_a.h) / powerBlock.mainCompressor.eta_comp
*/
void sCO2PBRig_eqFunction_740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,740};
  data->localData[0]->realVars[158] /* powerBlock.LTR.h_from_comp[1] variable */ = data->localData[0]->realVars[261] /* powerBlock.mainCompressor.state_a.h variable */ + DIVISION_SIM(data->localData[0]->realVars[262] /* powerBlock.mainCompressor.state_isen.h variable */ - data->localData[0]->realVars[261] /* powerBlock.mainCompressor.state_a.h variable */,data->localData[0]->realVars[255] /* powerBlock.mainCompressor.eta_comp variable */,"powerBlock.mainCompressor.eta_comp",equationIndexes);
  TRACE_POP
}
/*
equation index: 741
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_comp[1] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.mainCompressor.p_out, powerBlock.LTR.h_from_comp[1], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,741};
  data->localData[0]->realVars[113] /* powerBlock.LTR.T_from_comp[1] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[256] /* powerBlock.mainCompressor.p_out variable */, data->localData[0]->realVars[158] /* powerBlock.LTR.h_from_comp[1] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 742
type: SIMPLE_ASSIGN
powerBlock._HTR._from_comp_port_b._m_flow = powerBlock.cooler.port_b.m_flow + powerBlock.splitter.gamma_port_b.m_flow
*/
void sCO2PBRig_eqFunction_742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,742};
  data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */ = data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */ + data->localData[0]->realVars[273] /* powerBlock.splitter.gamma_port_b.m_flow variable */;
  TRACE_POP
}
/*
equation index: 743
type: SIMPLE_ASSIGN
powerBlock._LTR._T_from_turb[1] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[1], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,743};
  data->localData[0]->realVars[128] /* powerBlock.LTR.T_from_turb[1] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 744
type: SIMPLE_ASSIGN
powerBlock._reCompressor._d_entrance = SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[1], tableIDd_p_h)
*/
void sCO2PBRig_eqFunction_744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,744};
  data->localData[0]->realVars[264] /* powerBlock.reCompressor.d_entrance variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_rho__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */, data->simulationInfo->extObjs[37]);
  TRACE_POP
}
/*
equation index: 745
type: SIMPLE_ASSIGN
powerBlock._reCompressor._s_entrance = SolarTherm.Models.PowerBlocks.sCO2Cycle.DirectDesign.CompressorOnShaft$powerBlock$reCompressor.Medium.specificEntropy(SolarTherm.Models.PowerBlocks.sCO2Cycle.DirectDesign.CompressorOnShaft$powerBlock$reCompressor.Medium.ThermodynamicState(powerBlock.turbine.p_out, powerBlock.LTR.h_from_turb[1]))
*/
void sCO2PBRig_eqFunction_745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,745};
  data->localData[0]->realVars[270] /* powerBlock.reCompressor.s_entrance variable */ = omc_SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E536861667424706F776572426C6F636B247265436F6D70726573736F72_Medium_specificEntropy(threadData, omc_SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E536861667424706F776572426C6F636B247265436F6D70726573736F72_Medium_ThermodynamicState(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */));
  TRACE_POP
}
/*
equation index: 746
type: SIMPLE_ASSIGN
powerBlock._reCompressor._state_isen._h = SolarTherm.Media.CO2.CO2_utilities.h_p_s(powerBlock.reCompressor.p_out, powerBlock.reCompressor.s_entrance, tableIDh_p_s)
*/
void sCO2PBRig_eqFunction_746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,746};
  data->localData[0]->realVars[272] /* powerBlock.reCompressor.state_isen.h variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__s(threadData, data->localData[0]->realVars[266] /* powerBlock.reCompressor.p_out variable */, data->localData[0]->realVars[270] /* powerBlock.reCompressor.s_entrance variable */, data->simulationInfo->extObjs[39]);
  TRACE_POP
}
/*
equation index: 747
type: SIMPLE_ASSIGN
powerBlock._reCompressor._phi = (-powerBlock.splitter.gamma_port_b.m_flow) / (powerBlock.reCompressor.diam_rotor ^ 2.0 * powerBlock.reCompressor.d_entrance * powerBlock.reCompressor.tipSpeed)
*/
void sCO2PBRig_eqFunction_747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,747};
  modelica_real tmp0;
  tmp0 = data->simulationInfo->realParameter[624] /* powerBlock.reCompressor.diam_rotor PARAM */;
  data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */ = DIVISION_SIM((-data->localData[0]->realVars[273] /* powerBlock.splitter.gamma_port_b.m_flow variable */),((tmp0 * tmp0)) * ((data->localData[0]->realVars[264] /* powerBlock.reCompressor.d_entrance variable */) * (data->simulationInfo->realParameter[638] /* powerBlock.reCompressor.tipSpeed PARAM */)),"powerBlock.reCompressor.diam_rotor ^ 2.0 * powerBlock.reCompressor.d_entrance * powerBlock.reCompressor.tipSpeed",equationIndexes);
  TRACE_POP
}
/*
equation index: 748
type: SIMPLE_ASSIGN
powerBlock._reCompressor._eta_comp = 1.475280930371166 * powerBlock.reCompressor.eta_design * (-0.7069 + 168.6 * powerBlock.reCompressor.phi + (-8089.0) * powerBlock.reCompressor.phi ^ 2.0 + 182725.0 * powerBlock.reCompressor.phi ^ 3.0 + (-1638000.0) * powerBlock.reCompressor.phi ^ 4.0)
*/
void sCO2PBRig_eqFunction_748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,748};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */;
  tmp1 = data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */;
  tmp2 = data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */;
  tmp2 *= tmp2;
  data->localData[0]->realVars[265] /* powerBlock.reCompressor.eta_comp variable */ = (1.475280930371166) * ((data->simulationInfo->realParameter[625] /* powerBlock.reCompressor.eta_design PARAM */) * (-0.7069 + (168.6) * (data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */) + (-8089.0) * ((tmp0 * tmp0)) + (182725.0) * ((tmp1 * tmp1 * tmp1)) + (-1638000.0) * ((tmp2 * tmp2))));
  TRACE_POP
}
/*
equation index: 749
type: SIMPLE_ASSIGN
powerBlock._reCompressor._state_b._h = powerBlock.LTR.h_from_turb[1] + (powerBlock.reCompressor.state_isen.h - powerBlock.LTR.h_from_turb[1]) / powerBlock.reCompressor.eta_comp
*/
void sCO2PBRig_eqFunction_749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,749};
  data->localData[0]->realVars[271] /* powerBlock.reCompressor.state_b.h variable */ = data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */ + DIVISION_SIM(data->localData[0]->realVars[272] /* powerBlock.reCompressor.state_isen.h variable */ - data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */,data->localData[0]->realVars[265] /* powerBlock.reCompressor.eta_comp variable */,"powerBlock.reCompressor.eta_comp",equationIndexes);
  TRACE_POP
}
/*
equation index: 750
type: SIMPLE_ASSIGN
powerBlock._HTR._h_from_comp[1] = (powerBlock.splitter.gamma_port_b.m_flow * powerBlock.reCompressor.state_b.h + powerBlock.cooler.port_b.m_flow * powerBlock.LTR.h_from_comp[15]) / (powerBlock.cooler.port_b.m_flow + powerBlock.splitter.gamma_port_b.m_flow)
*/
void sCO2PBRig_eqFunction_750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,750};
  data->localData[0]->realVars[84] /* powerBlock.HTR.h_from_comp[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[273] /* powerBlock.splitter.gamma_port_b.m_flow variable */) * (data->localData[0]->realVars[271] /* powerBlock.reCompressor.state_b.h variable */) + (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[15] variable */),data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */ + data->localData[0]->realVars[273] /* powerBlock.splitter.gamma_port_b.m_flow variable */,"powerBlock.cooler.port_b.m_flow + powerBlock.splitter.gamma_port_b.m_flow",equationIndexes);
  TRACE_POP
}
/*
equation index: 751
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_comp[1] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.HTR.h_from_comp[1], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,751};
  data->localData[0]->realVars[39] /* powerBlock.HTR.T_from_comp[1] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[84] /* powerBlock.HTR.h_from_comp[1] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 752
type: SIMPLE_ASSIGN
powerBlock._reCompressor._psi = 2.165349463874431 * (0.04049 + 54.7 * powerBlock.reCompressor.phi + (-2505.0) * powerBlock.reCompressor.phi ^ 2.0 + 53224.0 * powerBlock.reCompressor.phi ^ 3.0 + (-498626.0) * powerBlock.reCompressor.phi ^ 4.0) * powerBlock.reCompressor.psi_des
*/
void sCO2PBRig_eqFunction_752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,752};
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  tmp0 = data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */;
  tmp1 = data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */;
  tmp2 = data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */;
  tmp2 *= tmp2;
  data->localData[0]->realVars[269] /* powerBlock.reCompressor.psi variable */ = (2.165349463874431) * ((0.04049 + (54.7) * (data->localData[0]->realVars[267] /* powerBlock.reCompressor.phi variable */) + (-2505.0) * ((tmp0 * tmp0)) + (53224.0) * ((tmp1 * tmp1 * tmp1)) + (-498626.0) * ((tmp2 * tmp2))) * (data->simulationInfo->realParameter[633] /* powerBlock.reCompressor.psi_des PARAM */));
  TRACE_POP
}
/*
equation index: 753
type: SIMPLE_ASSIGN
powerBlock._exchanger._T_CO2_out = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[15], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,753};
  data->localData[0]->realVars[203] /* powerBlock.exchanger.T_CO2_out variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 754
type: SIMPLE_ASSIGN
powerBlock._turbine._s_entrance = SolarTherm.Models.PowerBlocks.sCO2Cycle.DirectDesign.Turbine$powerBlock$turbine.Medium.specificEntropy(SolarTherm.Models.PowerBlocks.sCO2Cycle.DirectDesign.Turbine$powerBlock$turbine.Medium.ThermodynamicState(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[15]))
*/
void sCO2PBRig_eqFunction_754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,754};
  data->localData[0]->realVars[279] /* powerBlock.turbine.s_entrance variable */ = omc_SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_54757262696E6524706F776572426C6F636B2474757262696E65_Medium_specificEntropy(threadData, omc_SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_54757262696E6524706F776572426C6F636B2474757262696E65_Medium_ThermodynamicState(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */));
  TRACE_POP
}
/*
equation index: 755
type: SIMPLE_ASSIGN
powerBlock._turbine._state_isen._h = SolarTherm.Media.CO2.CO2_utilities.h_p_s(powerBlock.turbine.p_out, powerBlock.turbine.s_entrance, tableIDh_p_s)
*/
void sCO2PBRig_eqFunction_755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,755};
  data->localData[0]->realVars[280] /* powerBlock.turbine.state_isen.h variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__s(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[279] /* powerBlock.turbine.s_entrance variable */, data->simulationInfo->extObjs[39]);
  TRACE_POP
}
/*
equation index: 756
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[14] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[14] - powerBlock.exchanger.h_CO2[15]) / source.ports[1].m_flow + source.state.h
*/
void sCO2PBRig_eqFunction_756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,756};
  data->localData[0]->realVars[250] /* powerBlock.exchanger.h_HTF[14] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */ - data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[307] /* source.state.h variable */;
  TRACE_POP
}
/*
equation index: 757
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[14] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[14]) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[14], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,757};
  data->localData[0]->realVars[219] /* powerBlock.exchanger.deltaT[14] variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[250] /* powerBlock.exchanger.h_HTF[14] variable */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 758
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[13] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[13] - powerBlock.exchanger.h_CO2[14]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[14]
*/
void sCO2PBRig_eqFunction_758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,758};
  data->localData[0]->realVars[249] /* powerBlock.exchanger.h_HTF[13] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */ - data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[250] /* powerBlock.exchanger.h_HTF[14] variable */;
  TRACE_POP
}
/*
equation index: 759
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[13] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[13]) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[13], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,759};
  data->localData[0]->realVars[218] /* powerBlock.exchanger.deltaT[13] variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[249] /* powerBlock.exchanger.h_HTF[13] variable */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 760
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[12] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[12] - powerBlock.exchanger.h_CO2[13]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[13]
*/
void sCO2PBRig_eqFunction_760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,760};
  data->localData[0]->realVars[248] /* powerBlock.exchanger.h_HTF[12] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */ - data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[249] /* powerBlock.exchanger.h_HTF[13] variable */;
  TRACE_POP
}
/*
equation index: 761
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[12] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[12]) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[12], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,761};
  data->localData[0]->realVars[217] /* powerBlock.exchanger.deltaT[12] variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[248] /* powerBlock.exchanger.h_HTF[12] variable */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 762
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[11] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[11] - powerBlock.exchanger.h_CO2[12]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[12]
*/
void sCO2PBRig_eqFunction_762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,762};
  data->localData[0]->realVars[247] /* powerBlock.exchanger.h_HTF[11] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */ - data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[248] /* powerBlock.exchanger.h_HTF[12] variable */;
  TRACE_POP
}
/*
equation index: 763
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[11] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[11]) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[11], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,763};
  data->localData[0]->realVars[216] /* powerBlock.exchanger.deltaT[11] variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[247] /* powerBlock.exchanger.h_HTF[11] variable */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 764
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[10] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[10] - powerBlock.exchanger.h_CO2[11]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[11]
*/
void sCO2PBRig_eqFunction_764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,764};
  data->localData[0]->realVars[246] /* powerBlock.exchanger.h_HTF[10] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */ - data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[247] /* powerBlock.exchanger.h_HTF[11] variable */;
  TRACE_POP
}
/*
equation index: 765
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[10] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[10]) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[10], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,765};
  data->localData[0]->realVars[215] /* powerBlock.exchanger.deltaT[10] variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[246] /* powerBlock.exchanger.h_HTF[10] variable */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 766
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[9] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[9] - powerBlock.exchanger.h_CO2[10]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[10]
*/
void sCO2PBRig_eqFunction_766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,766};
  data->localData[0]->realVars[245] /* powerBlock.exchanger.h_HTF[9] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */ - data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[246] /* powerBlock.exchanger.h_HTF[10] variable */;
  TRACE_POP
}
/*
equation index: 767
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[9] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[9]) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[9], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,767};
  data->localData[0]->realVars[214] /* powerBlock.exchanger.deltaT[9] variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[245] /* powerBlock.exchanger.h_HTF[9] variable */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 768
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[8] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[8] - powerBlock.exchanger.h_CO2[9]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[9]
*/
void sCO2PBRig_eqFunction_768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,768};
  data->localData[0]->realVars[244] /* powerBlock.exchanger.h_HTF[8] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */ - data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[245] /* powerBlock.exchanger.h_HTF[9] variable */;
  TRACE_POP
}
/*
equation index: 769
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[8] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[8]) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[8], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,769};
  data->localData[0]->realVars[213] /* powerBlock.exchanger.deltaT[8] variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[244] /* powerBlock.exchanger.h_HTF[8] variable */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 770
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[7] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[7] - powerBlock.exchanger.h_CO2[8]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[8]
*/
void sCO2PBRig_eqFunction_770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,770};
  data->localData[0]->realVars[243] /* powerBlock.exchanger.h_HTF[7] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */ - data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[244] /* powerBlock.exchanger.h_HTF[8] variable */;
  TRACE_POP
}
/*
equation index: 771
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[7] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[7]) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[7], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,771};
  data->localData[0]->realVars[212] /* powerBlock.exchanger.deltaT[7] variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[243] /* powerBlock.exchanger.h_HTF[7] variable */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 772
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[6] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[6] - powerBlock.exchanger.h_CO2[7]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[7]
*/
void sCO2PBRig_eqFunction_772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,772};
  data->localData[0]->realVars[242] /* powerBlock.exchanger.h_HTF[6] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */ - data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[243] /* powerBlock.exchanger.h_HTF[7] variable */;
  TRACE_POP
}
/*
equation index: 773
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[6] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[6]) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[6], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,773};
  data->localData[0]->realVars[211] /* powerBlock.exchanger.deltaT[6] variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[242] /* powerBlock.exchanger.h_HTF[6] variable */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 774
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[5] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[5] - powerBlock.exchanger.h_CO2[6]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[6]
*/
void sCO2PBRig_eqFunction_774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,774};
  data->localData[0]->realVars[241] /* powerBlock.exchanger.h_HTF[5] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */ - data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[242] /* powerBlock.exchanger.h_HTF[6] variable */;
  TRACE_POP
}
/*
equation index: 775
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[5] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[5]) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[5], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,775};
  data->localData[0]->realVars[210] /* powerBlock.exchanger.deltaT[5] variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[241] /* powerBlock.exchanger.h_HTF[5] variable */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 776
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[4] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[4] - powerBlock.exchanger.h_CO2[5]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[5]
*/
void sCO2PBRig_eqFunction_776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,776};
  data->localData[0]->realVars[240] /* powerBlock.exchanger.h_HTF[4] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */ - data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[241] /* powerBlock.exchanger.h_HTF[5] variable */;
  TRACE_POP
}
/*
equation index: 777
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[4] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[4]) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[4], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,777};
  data->localData[0]->realVars[209] /* powerBlock.exchanger.deltaT[4] variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[240] /* powerBlock.exchanger.h_HTF[4] variable */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 778
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[3] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[3] - powerBlock.exchanger.h_CO2[4]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[4]
*/
void sCO2PBRig_eqFunction_778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,778};
  data->localData[0]->realVars[239] /* powerBlock.exchanger.h_HTF[3] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */ - data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[240] /* powerBlock.exchanger.h_HTF[4] variable */;
  TRACE_POP
}
/*
equation index: 779
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[3] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[3]) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[3], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,779};
  data->localData[0]->realVars[208] /* powerBlock.exchanger.deltaT[3] variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[239] /* powerBlock.exchanger.h_HTF[3] variable */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 780
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[2] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[2] - powerBlock.exchanger.h_CO2[3]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[3]
*/
void sCO2PBRig_eqFunction_780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,780};
  data->localData[0]->realVars[238] /* powerBlock.exchanger.h_HTF[2] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */ - data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[239] /* powerBlock.exchanger.h_HTF[3] variable */;
  TRACE_POP
}
/*
equation index: 781
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[2] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[2]) - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[2], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,781};
  data->localData[0]->realVars[207] /* powerBlock.exchanger.deltaT[2] variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[238] /* powerBlock.exchanger.h_HTF[2] variable */) - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 782
type: SIMPLE_ASSIGN
powerBlock._exchanger._h_HTF[1] = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[1] - powerBlock.exchanger.h_CO2[2]) / source.ports[1].m_flow + powerBlock.exchanger.h_HTF[2]
*/
void sCO2PBRig_eqFunction_782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,782};
  data->localData[0]->realVars[237] /* powerBlock.exchanger.h_HTF[1] variable */ = DIVISION_SIM((data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[222] /* powerBlock.exchanger.h_CO2[1] variable */ - data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */),data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes) + data->localData[0]->realVars[238] /* powerBlock.exchanger.h_HTF[2] variable */;
  TRACE_POP
}
/*
equation index: 783
type: SIMPLE_ASSIGN
powerBlock._HTR._h_from_turb[15] = powerBlock.exchanger.h_CO2[15] + (powerBlock.turbine.state_isen.h - powerBlock.exchanger.h_CO2[15]) * powerBlock.turbine.eta_turb
*/
void sCO2PBRig_eqFunction_783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,783};
  data->localData[0]->realVars[111] /* powerBlock.HTR.h_from_turb[15] variable */ = data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */ + (data->localData[0]->realVars[280] /* powerBlock.turbine.state_isen.h variable */ - data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */) * (data->localData[0]->realVars[277] /* powerBlock.turbine.eta_turb variable */);
  TRACE_POP
}
/*
equation index: 784
type: SIMPLE_ASSIGN
powerBlock._turbine._d_outlet = SolarTherm.Media.CO2.CO2_utilities.rho_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[15], tableIDd_p_h)
*/
void sCO2PBRig_eqFunction_784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,784};
  data->localData[0]->realVars[276] /* powerBlock.turbine.d_outlet variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_rho__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[111] /* powerBlock.HTR.h_from_turb[15] variable */, data->simulationInfo->extObjs[37]);
  TRACE_POP
}
/*
equation index: 785
type: SIMPLE_ASSIGN
powerBlock._HTR._T_from_turb[15] = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.turbine.p_out, powerBlock.HTR.h_from_turb[15], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,785};
  data->localData[0]->realVars[67] /* powerBlock.HTR.T_from_turb[15] variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */, data->localData[0]->realVars[111] /* powerBlock.HTR.h_from_turb[15] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 786
type: SIMPLE_ASSIGN
powerBlock._exchanger._T_HTF_out = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(powerBlock.exchanger.h_HTF[1])
*/
void sCO2PBRig_eqFunction_786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,786};
  data->localData[0]->realVars[205] /* powerBlock.exchanger.T_HTF_out variable */ = omc_SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h(threadData, data->localData[0]->realVars[237] /* powerBlock.exchanger.h_HTF[1] variable */);
  TRACE_POP
}
/*
equation index: 787
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[1] = powerBlock.exchanger.T_HTF_out - SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.exchanger.state_CO2[15].p, powerBlock.exchanger.h_CO2[1], tableIDT_p_h)
*/
void sCO2PBRig_eqFunction_787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,787};
  data->localData[0]->realVars[206] /* powerBlock.exchanger.deltaT[1] variable */ = data->localData[0]->realVars[205] /* powerBlock.exchanger.T_HTF_out variable */ - omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[251] /* powerBlock.exchanger.state_CO2[15].p variable */, data->localData[0]->realVars[222] /* powerBlock.exchanger.h_CO2[1] variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 788
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaT[15] = powerBlock.exchanger.T_HTF_in - powerBlock.exchanger.T_CO2_out
*/
void sCO2PBRig_eqFunction_788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,788};
  data->localData[0]->realVars[220] /* powerBlock.exchanger.deltaT[15] variable */ = data->localData[0]->realVars[204] /* powerBlock.exchanger.T_HTF_in variable */ - data->localData[0]->realVars[203] /* powerBlock.exchanger.T_CO2_out variable */;
  TRACE_POP
}

void residualFunc863(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,863};
  int i;
  modelica_real tmp0;
  modelica_real tmp1;
  modelica_real tmp2;
  modelica_real tmp3;
  modelica_real tmp4;
  modelica_real tmp5;
  modelica_real tmp6;
  modelica_real tmp7;
  modelica_real tmp8;
  modelica_real tmp9;
  modelica_real tmp10;
  modelica_real tmp11;
  modelica_real tmp12;
  modelica_real tmp13;
  modelica_real tmp14;
  modelica_real tmp15;
  modelica_real tmp16;
  modelica_real tmp17;
  modelica_real tmp18;
  modelica_real tmp19;
  modelica_real tmp20;
  modelica_real tmp21;
  modelica_real tmp22;
  modelica_real tmp23;
  modelica_real tmp24;
  modelica_real tmp25;
  modelica_real tmp26;
  modelica_real tmp27;
  modelica_real tmp28;
  modelica_real tmp29;
  modelica_real tmp30;
  modelica_real tmp31;
  modelica_real tmp32;
  modelica_real tmp33;
  modelica_real tmp34;
  modelica_real tmp35;
  modelica_real tmp36;
  modelica_real tmp37;
  modelica_real tmp38;
  modelica_real tmp39;
  modelica_real tmp40;
  modelica_real tmp41;
  modelica_real tmp42;
  modelica_real tmp43;
  modelica_real tmp44;
  modelica_real tmp45;
  modelica_real tmp46;
  modelica_real tmp47;
  modelica_real tmp48;
  modelica_real tmp49;
  modelica_real tmp50;
  modelica_real tmp51;
  modelica_real tmp52;
  modelica_real tmp53;
  modelica_real tmp54;
  modelica_real tmp55;
  modelica_real tmp56;
  modelica_real tmp57;
  modelica_real tmp58;
  modelica_real tmp59;
  modelica_real tmp60;
  modelica_real tmp61;
  modelica_real tmp62;
  modelica_real tmp63;
  modelica_real tmp64;
  modelica_real tmp65;
  modelica_real tmp66;
  modelica_real tmp67;
  modelica_real tmp68;
  modelica_real tmp69;
  modelica_real tmp70;
  modelica_real tmp71;
  modelica_real tmp72;
  modelica_real tmp73;
  modelica_real tmp74;
  modelica_real tmp75;
  modelica_real tmp76;
  modelica_real tmp77;
  modelica_real tmp78;
  modelica_real tmp79;
  modelica_real tmp80;
  modelica_real tmp81;
  modelica_real tmp82;
  modelica_real tmp83;
  modelica_real tmp84;
  modelica_real tmp85;
  modelica_real tmp86;
  modelica_real tmp87;
  modelica_real tmp88;
  modelica_real tmp89;
  modelica_real tmp90;
  modelica_real tmp91;
  modelica_real tmp92;
  modelica_real tmp93;
  modelica_real tmp94;
  modelica_real tmp95;
  modelica_real tmp96;
  modelica_real tmp97;
  modelica_real tmp98;
  modelica_real tmp99;
  modelica_real tmp100;
  modelica_real tmp101;
  modelica_real tmp102;
  modelica_real tmp103;
  modelica_real tmp104;
  modelica_real tmp105;
  modelica_real tmp106;
  modelica_real tmp107;
  modelica_real tmp108;
  modelica_real tmp109;
  modelica_real tmp110;
  modelica_real tmp111;
  modelica_real tmp112;
  modelica_real tmp113;
  modelica_real tmp114;
  modelica_real tmp115;
  modelica_real tmp116;
  modelica_real tmp117;
  modelica_real tmp118;
  modelica_real tmp119;
  modelica_real tmp120;
  modelica_real tmp121;
  modelica_real tmp122;
  modelica_real tmp123;
  modelica_real tmp124;
  modelica_real tmp125;
  modelica_real tmp126;
  modelica_real tmp127;
  modelica_real tmp128;
  modelica_real tmp129;
  modelica_real tmp130;
  modelica_real tmp131;
  modelica_real tmp132;
  modelica_real tmp133;
  modelica_real tmp134;
  modelica_real tmp135;
  modelica_real tmp136;
  modelica_real tmp137;
  modelica_real tmp138;
  modelica_real tmp139;
  modelica_real tmp140;
  modelica_real tmp141;
  modelica_real tmp142;
  modelica_real tmp143;
  modelica_real tmp144;
  modelica_real tmp145;
  modelica_real tmp146;
  modelica_real tmp147;
  modelica_real tmp148;
  modelica_real tmp149;
  modelica_real tmp150;
  modelica_real tmp151;
  modelica_real tmp152;
  modelica_real tmp153;
  modelica_real tmp154;
  modelica_real tmp155;
  modelica_real tmp156;
  modelica_real tmp157;
  modelica_real tmp158;
  modelica_real tmp159;
  modelica_real tmp160;
  modelica_real tmp161;
  modelica_real tmp162;
  modelica_real tmp163;
  modelica_real tmp164;
  modelica_real tmp165;
  modelica_real tmp166;
  modelica_real tmp167;
  modelica_real tmp168;
  modelica_real tmp169;
  modelica_real tmp170;
  modelica_real tmp171;
  modelica_real tmp172;
  modelica_real tmp173;
  modelica_real tmp174;
  modelica_real tmp175;
  modelica_real tmp176;
  modelica_real tmp177;
  modelica_real tmp178;
  modelica_real tmp179;
  modelica_real tmp180;
  modelica_real tmp181;
  modelica_real tmp182;
  modelica_real tmp183;
  modelica_real tmp184;
  modelica_real tmp185;
  modelica_real tmp186;
  modelica_real tmp187;
  modelica_real tmp188;
  modelica_real tmp189;
  modelica_real tmp190;
  modelica_real tmp191;
  modelica_real tmp192;
  modelica_real tmp193;
  modelica_real tmp194;
  modelica_real tmp195;
  modelica_real tmp196;
  modelica_real tmp197;
  modelica_real tmp198;
  modelica_real tmp199;
  modelica_real tmp200;
  modelica_real tmp201;
  modelica_real tmp202;
  modelica_real tmp203;
  modelica_real tmp204;
  modelica_real tmp205;
  modelica_real tmp206;
  modelica_real tmp207;
  modelica_real tmp208;
  modelica_real tmp209;
  modelica_real tmp210;
  modelica_real tmp211;
  modelica_real tmp212;
  modelica_real tmp213;
  modelica_real tmp214;
  modelica_real tmp215;
  modelica_real tmp216;
  modelica_real tmp217;
  modelica_real tmp218;
  modelica_real tmp219;
  modelica_real tmp220;
  modelica_real tmp221;
  modelica_real tmp222;
  modelica_real tmp223;
  modelica_real tmp224;
  modelica_real tmp225;
  modelica_real tmp226;
  modelica_real tmp227;
  modelica_real tmp228;
  modelica_real tmp229;
  modelica_real tmp230;
  modelica_real tmp231;
  modelica_real tmp232;
  modelica_real tmp233;
  modelica_real tmp234;
  modelica_real tmp235;
  modelica_real tmp236;
  modelica_real tmp237;
  modelica_real tmp238;
  modelica_real tmp239;
  modelica_real tmp240;
  modelica_real tmp241;
  modelica_real tmp242;
  modelica_real tmp243;
  modelica_real tmp244;
  modelica_real tmp245;
  modelica_real tmp246;
  modelica_real tmp247;
  modelica_real tmp248;
  modelica_real tmp249;
  modelica_real tmp250;
  modelica_real tmp251;
  modelica_real tmp252;
  modelica_real tmp253;
  modelica_real tmp254;
  modelica_real tmp255;
  modelica_real tmp256;
  modelica_real tmp257;
  modelica_real tmp258;
  modelica_real tmp259;
  modelica_real tmp260;
  modelica_real tmp261;
  modelica_real tmp262;
  modelica_real tmp263;
  modelica_real tmp264;
  modelica_real tmp265;
  modelica_real tmp266;
  modelica_real tmp267;
  modelica_real tmp268;
  modelica_real tmp269;
  modelica_real tmp270;
  modelica_real tmp271;
  modelica_real tmp272;
  modelica_real tmp273;
  modelica_real tmp274;
  modelica_real tmp275;
  modelica_real tmp276;
  modelica_real tmp277;
  modelica_real tmp278;
  modelica_real tmp279;
  modelica_real tmp280;
  modelica_real tmp281;
  modelica_real tmp282;
  modelica_real tmp283;
  modelica_real tmp284;
  modelica_real tmp285;
  modelica_real tmp286;
  modelica_real tmp287;
  modelica_real tmp288;
  modelica_real tmp289;
  modelica_real tmp290;
  modelica_real tmp291;
  modelica_real tmp292;
  modelica_real tmp293;
  modelica_real tmp294;
  modelica_real tmp295;
  modelica_real tmp296;
  modelica_real tmp297;
  modelica_real tmp298;
  /* iteration variables */
  for (i=0; i<74; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<74; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */ = xloc[0];
  data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */ = xloc[1];
  data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */ = xloc[2];
  data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */ = xloc[3];
  data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */ = xloc[4];
  data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */ = xloc[5];
  data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */ = xloc[6];
  data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */ = xloc[7];
  data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */ = xloc[8];
  data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */ = xloc[9];
  data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */ = xloc[10];
  data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */ = xloc[11];
  data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */ = xloc[12];
  data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */ = xloc[13];
  data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */ = xloc[14];
  data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */ = xloc[15];
  data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */ = xloc[16];
  data->localData[0]->realVars[222] /* powerBlock.exchanger.h_CO2[1] variable */ = xloc[17];
  data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */ = xloc[18];
  data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */ = xloc[19];
  data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */ = xloc[20];
  data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */ = xloc[21];
  data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */ = xloc[22];
  data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */ = xloc[23];
  data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */ = xloc[24];
  data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */ = xloc[25];
  data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */ = xloc[26];
  data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */ = xloc[27];
  data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */ = xloc[28];
  data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */ = xloc[29];
  data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[15] variable */ = xloc[30];
  data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[13] variable */ = xloc[31];
  data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */ = xloc[32];
  data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */ = xloc[33];
  data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[11] variable */ = xloc[34];
  data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */ = xloc[35];
  data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */ = xloc[36];
  data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[7] variable */ = xloc[37];
  data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */ = xloc[38];
  data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[9] variable */ = xloc[39];
  data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */ = xloc[40];
  data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */ = xloc[41];
  data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[6] variable */ = xloc[42];
  data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */ = xloc[43];
  data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[5] variable */ = xloc[44];
  data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[4] variable */ = xloc[45];
  data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */ = xloc[46];
  data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */ = xloc[47];
  data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[3] variable */ = xloc[48];
  data->localData[0]->realVars[159] /* powerBlock.LTR.h_from_comp[2] variable */ = xloc[49];
  data->localData[0]->realVars[266] /* powerBlock.reCompressor.p_out variable */ = xloc[50];
  data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */ = xloc[51];
  data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[8] variable */ = xloc[52];
  data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */ = xloc[53];
  data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[10] variable */ = xloc[54];
  data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[12] variable */ = xloc[55];
  data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[14] variable */ = xloc[56];
  data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */ = xloc[57];
  data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */ = xloc[58];
  data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */ = xloc[59];
  data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */ = xloc[60];
  data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */ = xloc[61];
  data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */ = xloc[62];
  data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */ = xloc[63];
  data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */ = xloc[64];
  data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */ = xloc[65];
  data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */ = xloc[66];
  data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */ = xloc[67];
  data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */ = xloc[68];
  data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */ = xloc[69];
  data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */ = xloc[70];
  data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */ = xloc[71];
  data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */ = xloc[72];
  data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */ = xloc[73];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  sCO2PBRig_eqFunction_673(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_674(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_675(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_676(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_677(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_678(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_679(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_680(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_681(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_682(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_683(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_684(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_685(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_686(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_687(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_688(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_689(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_690(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_691(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_692(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_693(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_694(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_695(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_696(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_697(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_698(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_699(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_700(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_701(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_702(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_703(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_704(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_705(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_706(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_707(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_708(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_709(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_710(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_711(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_712(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_713(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_714(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_715(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_716(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_717(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_718(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_719(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_720(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_721(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_722(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_723(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_724(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_725(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_726(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_727(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_728(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_729(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_730(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_731(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_732(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_733(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_734(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_735(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_736(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_737(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_738(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_739(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_740(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_741(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_742(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_743(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_744(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_745(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_746(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_747(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_748(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_749(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_750(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_751(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_752(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_753(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_754(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_755(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_756(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_757(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_758(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_759(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_760(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_761(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_762(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_763(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_764(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_765(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_766(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_767(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_768(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_769(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_770(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_771(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_772(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_773(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_774(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_775(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_776(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_777(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_778(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_779(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_780(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_781(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_782(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_783(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_784(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_785(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_786(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_787(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_788(data, threadData);
  /* body */
  tmp0 = data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */;
  tmp1 = data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */;
  tmp2 = data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */;
  tmp2 *= tmp2;res[0] = (2.165349463874431) * ((0.04049 + (54.7) * (data->localData[0]->realVars[257] /* powerBlock.mainCompressor.phi variable */) + (-2505.0) * ((tmp0 * tmp0)) + (53224.0) * ((tmp1 * tmp1 * tmp1)) + (-498626.0) * ((tmp2 * tmp2))) * (data->simulationInfo->realParameter[601] /* powerBlock.mainCompressor.psi_des PARAM */)) - data->localData[0]->realVars[259] /* powerBlock.mainCompressor.psi variable */;

  res[1] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */ - data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */ - data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */);

  res[2] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */ - data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */ - data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */);

  res[3] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */ - data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */ - data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */);

  res[4] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */ - data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */ - data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */);

  tmp3 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp4 = 0.8;
  if(tmp3 < 0.0 && tmp4 != 0.0)
  {
    tmp6 = modf(tmp4, &tmp7);
    
    if(tmp6 > 0.5)
    {
      tmp6 -= 1.0;
      tmp7 += 1.0;
    }
    else if(tmp6 < -0.5)
    {
      tmp6 += 1.0;
      tmp7 -= 1.0;
    }
    
    if(fabs(tmp6) < 1e-10)
      tmp5 = pow(tmp3, tmp7);
    else
    {
      tmp9 = modf(1.0/tmp4, &tmp8);
      if(tmp9 > 0.5)
      {
        tmp9 -= 1.0;
        tmp8 += 1.0;
      }
      else if(tmp9 < -0.5)
      {
        tmp9 += 1.0;
        tmp8 -= 1.0;
      }
      if(fabs(tmp9) < 1e-10 && ((unsigned long)tmp8 & 1))
      {
        tmp5 = -pow(-tmp3, tmp6)*pow(tmp3, tmp7);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
      }
    }
  }
  else
  {
    tmp5 = pow(tmp3, tmp4);
  }
  if(isnan(tmp5) || isinf(tmp5))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp3, tmp4);
  }res[5] = (0.2871745887492588) * ((data->simulationInfo->realParameter[76] /* powerBlock.HTR.UA_dis[7] PARAM */) * ((tmp5) * (data->localData[0]->realVars[59] /* powerBlock.HTR.T_from_turb[7] variable */ + data->localData[0]->realVars[60] /* powerBlock.HTR.T_from_turb[8] variable */ + (-data->localData[0]->realVars[45] /* powerBlock.HTR.T_from_comp[7] variable */) - data->localData[0]->realVars[46] /* powerBlock.HTR.T_from_comp[8] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */ - data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */);

  res[6] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */ - data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */ - data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */);

  res[7] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */ - data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */ - data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */);

  tmp10 = data->simulationInfo->realParameter[638] /* powerBlock.reCompressor.tipSpeed PARAM */;
  res[8] = data->localData[0]->realVars[272] /* powerBlock.reCompressor.state_isen.h variable */ + (-data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */) - ((data->localData[0]->realVars[269] /* powerBlock.reCompressor.psi variable */) * ((tmp10 * tmp10)));

  res[9] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[158] /* powerBlock.LTR.h_from_comp[1] variable */ - data->localData[0]->realVars[159] /* powerBlock.LTR.h_from_comp[2] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */ - data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */);

  tmp11 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp12 = 0.8;
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
  }res[10] = (0.2871745887492588) * ((data->simulationInfo->realParameter[205] /* powerBlock.LTR.UA_dis[1] PARAM */) * ((tmp13) * (data->localData[0]->realVars[128] /* powerBlock.LTR.T_from_turb[1] variable */ + data->localData[0]->realVars[129] /* powerBlock.LTR.T_from_turb[2] variable */ + (-data->localData[0]->realVars[113] /* powerBlock.LTR.T_from_comp[1] variable */) - data->localData[0]->realVars[114] /* powerBlock.LTR.T_from_comp[2] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */ - data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */);

  res[11] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[159] /* powerBlock.LTR.h_from_comp[2] variable */ - data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[3] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */ - data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */);

  tmp18 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp19 = 0.8;
  if(tmp18 < 0.0 && tmp19 != 0.0)
  {
    tmp21 = modf(tmp19, &tmp22);
    
    if(tmp21 > 0.5)
    {
      tmp21 -= 1.0;
      tmp22 += 1.0;
    }
    else if(tmp21 < -0.5)
    {
      tmp21 += 1.0;
      tmp22 -= 1.0;
    }
    
    if(fabs(tmp21) < 1e-10)
      tmp20 = pow(tmp18, tmp22);
    else
    {
      tmp24 = modf(1.0/tmp19, &tmp23);
      if(tmp24 > 0.5)
      {
        tmp24 -= 1.0;
        tmp23 += 1.0;
      }
      else if(tmp24 < -0.5)
      {
        tmp24 += 1.0;
        tmp23 -= 1.0;
      }
      if(fabs(tmp24) < 1e-10 && ((unsigned long)tmp23 & 1))
      {
        tmp20 = -pow(-tmp18, tmp21)*pow(tmp18, tmp22);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp18, tmp19);
      }
    }
  }
  else
  {
    tmp20 = pow(tmp18, tmp19);
  }
  if(isnan(tmp20) || isinf(tmp20))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp18, tmp19);
  }res[12] = (0.2871745887492588) * ((data->simulationInfo->realParameter[206] /* powerBlock.LTR.UA_dis[2] PARAM */) * ((tmp20) * (data->localData[0]->realVars[129] /* powerBlock.LTR.T_from_turb[2] variable */ + data->localData[0]->realVars[130] /* powerBlock.LTR.T_from_turb[3] variable */ + (-data->localData[0]->realVars[114] /* powerBlock.LTR.T_from_comp[2] variable */) - data->localData[0]->realVars[115] /* powerBlock.LTR.T_from_comp[3] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */ - data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */);

  res[13] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[3] variable */ - data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[4] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */ - data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */);

  tmp25 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp26 = 0.8;
  if(tmp25 < 0.0 && tmp26 != 0.0)
  {
    tmp28 = modf(tmp26, &tmp29);
    
    if(tmp28 > 0.5)
    {
      tmp28 -= 1.0;
      tmp29 += 1.0;
    }
    else if(tmp28 < -0.5)
    {
      tmp28 += 1.0;
      tmp29 -= 1.0;
    }
    
    if(fabs(tmp28) < 1e-10)
      tmp27 = pow(tmp25, tmp29);
    else
    {
      tmp31 = modf(1.0/tmp26, &tmp30);
      if(tmp31 > 0.5)
      {
        tmp31 -= 1.0;
        tmp30 += 1.0;
      }
      else if(tmp31 < -0.5)
      {
        tmp31 += 1.0;
        tmp30 -= 1.0;
      }
      if(fabs(tmp31) < 1e-10 && ((unsigned long)tmp30 & 1))
      {
        tmp27 = -pow(-tmp25, tmp28)*pow(tmp25, tmp29);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp25, tmp26);
      }
    }
  }
  else
  {
    tmp27 = pow(tmp25, tmp26);
  }
  if(isnan(tmp27) || isinf(tmp27))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp25, tmp26);
  }res[14] = (0.2871745887492588) * ((data->simulationInfo->realParameter[207] /* powerBlock.LTR.UA_dis[3] PARAM */) * ((tmp27) * (data->localData[0]->realVars[130] /* powerBlock.LTR.T_from_turb[3] variable */ + data->localData[0]->realVars[131] /* powerBlock.LTR.T_from_turb[4] variable */ + (-data->localData[0]->realVars[115] /* powerBlock.LTR.T_from_comp[3] variable */) - data->localData[0]->realVars[116] /* powerBlock.LTR.T_from_comp[4] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */ - data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */);

  res[15] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[4] variable */ - data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[5] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */ - data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */);

  tmp32 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp33 = 0.8;
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
  }res[16] = (0.2871745887492588) * ((data->simulationInfo->realParameter[208] /* powerBlock.LTR.UA_dis[4] PARAM */) * ((tmp34) * (data->localData[0]->realVars[131] /* powerBlock.LTR.T_from_turb[4] variable */ + data->localData[0]->realVars[132] /* powerBlock.LTR.T_from_turb[5] variable */ + (-data->localData[0]->realVars[116] /* powerBlock.LTR.T_from_comp[4] variable */) - data->localData[0]->realVars[117] /* powerBlock.LTR.T_from_comp[5] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */ - data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */);

  res[17] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[5] variable */ - data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[6] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */ - data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */);

  tmp39 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp40 = 0.8;
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
  }res[18] = (0.2871745887492588) * ((data->simulationInfo->realParameter[209] /* powerBlock.LTR.UA_dis[5] PARAM */) * ((tmp41) * (data->localData[0]->realVars[132] /* powerBlock.LTR.T_from_turb[5] variable */ + data->localData[0]->realVars[133] /* powerBlock.LTR.T_from_turb[6] variable */ + (-data->localData[0]->realVars[117] /* powerBlock.LTR.T_from_comp[5] variable */) - data->localData[0]->realVars[118] /* powerBlock.LTR.T_from_comp[6] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */ - data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */);

  res[19] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[9] variable */ - data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[10] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */ - data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */);

  res[20] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[8] variable */ - data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[9] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */ - data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */);

  res[21] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[7] variable */ - data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[8] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */ - data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */);

  res[22] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[6] variable */ - data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[7] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */ - data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */);

  tmp46 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp47 = 0.8;
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
  }res[23] = (0.2871745887492588) * ((data->simulationInfo->realParameter[210] /* powerBlock.LTR.UA_dis[6] PARAM */) * ((tmp48) * (data->localData[0]->realVars[133] /* powerBlock.LTR.T_from_turb[6] variable */ + data->localData[0]->realVars[134] /* powerBlock.LTR.T_from_turb[7] variable */ + (-data->localData[0]->realVars[118] /* powerBlock.LTR.T_from_comp[6] variable */) - data->localData[0]->realVars[119] /* powerBlock.LTR.T_from_comp[7] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */ - data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */);

  tmp53 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp54 = 0.8;
  if(tmp53 < 0.0 && tmp54 != 0.0)
  {
    tmp56 = modf(tmp54, &tmp57);
    
    if(tmp56 > 0.5)
    {
      tmp56 -= 1.0;
      tmp57 += 1.0;
    }
    else if(tmp56 < -0.5)
    {
      tmp56 += 1.0;
      tmp57 -= 1.0;
    }
    
    if(fabs(tmp56) < 1e-10)
      tmp55 = pow(tmp53, tmp57);
    else
    {
      tmp59 = modf(1.0/tmp54, &tmp58);
      if(tmp59 > 0.5)
      {
        tmp59 -= 1.0;
        tmp58 += 1.0;
      }
      else if(tmp59 < -0.5)
      {
        tmp59 += 1.0;
        tmp58 -= 1.0;
      }
      if(fabs(tmp59) < 1e-10 && ((unsigned long)tmp58 & 1))
      {
        tmp55 = -pow(-tmp53, tmp56)*pow(tmp53, tmp57);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp53, tmp54);
      }
    }
  }
  else
  {
    tmp55 = pow(tmp53, tmp54);
  }
  if(isnan(tmp55) || isinf(tmp55))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp53, tmp54);
  }res[24] = (0.2871745887492588) * ((data->simulationInfo->realParameter[211] /* powerBlock.LTR.UA_dis[7] PARAM */) * ((tmp55) * (data->localData[0]->realVars[134] /* powerBlock.LTR.T_from_turb[7] variable */ + data->localData[0]->realVars[135] /* powerBlock.LTR.T_from_turb[8] variable */ + (-data->localData[0]->realVars[119] /* powerBlock.LTR.T_from_comp[7] variable */) - data->localData[0]->realVars[120] /* powerBlock.LTR.T_from_comp[8] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */ - data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */);

  tmp60 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp61 = 0.8;
  if(tmp60 < 0.0 && tmp61 != 0.0)
  {
    tmp63 = modf(tmp61, &tmp64);
    
    if(tmp63 > 0.5)
    {
      tmp63 -= 1.0;
      tmp64 += 1.0;
    }
    else if(tmp63 < -0.5)
    {
      tmp63 += 1.0;
      tmp64 -= 1.0;
    }
    
    if(fabs(tmp63) < 1e-10)
      tmp62 = pow(tmp60, tmp64);
    else
    {
      tmp66 = modf(1.0/tmp61, &tmp65);
      if(tmp66 > 0.5)
      {
        tmp66 -= 1.0;
        tmp65 += 1.0;
      }
      else if(tmp66 < -0.5)
      {
        tmp66 += 1.0;
        tmp65 -= 1.0;
      }
      if(fabs(tmp66) < 1e-10 && ((unsigned long)tmp65 & 1))
      {
        tmp62 = -pow(-tmp60, tmp63)*pow(tmp60, tmp64);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp60, tmp61);
      }
    }
  }
  else
  {
    tmp62 = pow(tmp60, tmp61);
  }
  if(isnan(tmp62) || isinf(tmp62))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp60, tmp61);
  }res[25] = (0.2871745887492588) * ((data->simulationInfo->realParameter[212] /* powerBlock.LTR.UA_dis[8] PARAM */) * ((tmp62) * (data->localData[0]->realVars[135] /* powerBlock.LTR.T_from_turb[8] variable */ + data->localData[0]->realVars[136] /* powerBlock.LTR.T_from_turb[9] variable */ + (-data->localData[0]->realVars[120] /* powerBlock.LTR.T_from_comp[8] variable */) - data->localData[0]->realVars[121] /* powerBlock.LTR.T_from_comp[9] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */ - data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */);

  tmp67 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp68 = 0.8;
  if(tmp67 < 0.0 && tmp68 != 0.0)
  {
    tmp70 = modf(tmp68, &tmp71);
    
    if(tmp70 > 0.5)
    {
      tmp70 -= 1.0;
      tmp71 += 1.0;
    }
    else if(tmp70 < -0.5)
    {
      tmp70 += 1.0;
      tmp71 -= 1.0;
    }
    
    if(fabs(tmp70) < 1e-10)
      tmp69 = pow(tmp67, tmp71);
    else
    {
      tmp73 = modf(1.0/tmp68, &tmp72);
      if(tmp73 > 0.5)
      {
        tmp73 -= 1.0;
        tmp72 += 1.0;
      }
      else if(tmp73 < -0.5)
      {
        tmp73 += 1.0;
        tmp72 -= 1.0;
      }
      if(fabs(tmp73) < 1e-10 && ((unsigned long)tmp72 & 1))
      {
        tmp69 = -pow(-tmp67, tmp70)*pow(tmp67, tmp71);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp67, tmp68);
      }
    }
  }
  else
  {
    tmp69 = pow(tmp67, tmp68);
  }
  if(isnan(tmp69) || isinf(tmp69))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp67, tmp68);
  }res[26] = (0.2871745887492588) * ((data->simulationInfo->realParameter[213] /* powerBlock.LTR.UA_dis[9] PARAM */) * ((tmp69) * (data->localData[0]->realVars[136] /* powerBlock.LTR.T_from_turb[9] variable */ + data->localData[0]->realVars[137] /* powerBlock.LTR.T_from_turb[10] variable */ + (-data->localData[0]->realVars[121] /* powerBlock.LTR.T_from_comp[9] variable */) - data->localData[0]->realVars[122] /* powerBlock.LTR.T_from_comp[10] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */ - data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */);

  tmp74 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp75 = 0.8;
  if(tmp74 < 0.0 && tmp75 != 0.0)
  {
    tmp77 = modf(tmp75, &tmp78);
    
    if(tmp77 > 0.5)
    {
      tmp77 -= 1.0;
      tmp78 += 1.0;
    }
    else if(tmp77 < -0.5)
    {
      tmp77 += 1.0;
      tmp78 -= 1.0;
    }
    
    if(fabs(tmp77) < 1e-10)
      tmp76 = pow(tmp74, tmp78);
    else
    {
      tmp80 = modf(1.0/tmp75, &tmp79);
      if(tmp80 > 0.5)
      {
        tmp80 -= 1.0;
        tmp79 += 1.0;
      }
      else if(tmp80 < -0.5)
      {
        tmp80 += 1.0;
        tmp79 -= 1.0;
      }
      if(fabs(tmp80) < 1e-10 && ((unsigned long)tmp79 & 1))
      {
        tmp76 = -pow(-tmp74, tmp77)*pow(tmp74, tmp78);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp74, tmp75);
      }
    }
  }
  else
  {
    tmp76 = pow(tmp74, tmp75);
  }
  if(isnan(tmp76) || isinf(tmp76))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp74, tmp75);
  }res[27] = (0.2871745887492588) * ((data->simulationInfo->realParameter[214] /* powerBlock.LTR.UA_dis[10] PARAM */) * ((tmp76) * (data->localData[0]->realVars[137] /* powerBlock.LTR.T_from_turb[10] variable */ + data->localData[0]->realVars[138] /* powerBlock.LTR.T_from_turb[11] variable */ + (-data->localData[0]->realVars[122] /* powerBlock.LTR.T_from_comp[10] variable */) - data->localData[0]->realVars[123] /* powerBlock.LTR.T_from_comp[11] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */ - data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */);

  res[28] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[10] variable */ - data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[11] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */ - data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */);

  res[29] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[11] variable */ - data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[12] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */ - data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */);

  tmp81 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp82 = 0.8;
  if(tmp81 < 0.0 && tmp82 != 0.0)
  {
    tmp84 = modf(tmp82, &tmp85);
    
    if(tmp84 > 0.5)
    {
      tmp84 -= 1.0;
      tmp85 += 1.0;
    }
    else if(tmp84 < -0.5)
    {
      tmp84 += 1.0;
      tmp85 -= 1.0;
    }
    
    if(fabs(tmp84) < 1e-10)
      tmp83 = pow(tmp81, tmp85);
    else
    {
      tmp87 = modf(1.0/tmp82, &tmp86);
      if(tmp87 > 0.5)
      {
        tmp87 -= 1.0;
        tmp86 += 1.0;
      }
      else if(tmp87 < -0.5)
      {
        tmp87 += 1.0;
        tmp86 -= 1.0;
      }
      if(fabs(tmp87) < 1e-10 && ((unsigned long)tmp86 & 1))
      {
        tmp83 = -pow(-tmp81, tmp84)*pow(tmp81, tmp85);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp81, tmp82);
      }
    }
  }
  else
  {
    tmp83 = pow(tmp81, tmp82);
  }
  if(isnan(tmp83) || isinf(tmp83))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp81, tmp82);
  }res[30] = (0.2871745887492588) * ((data->simulationInfo->realParameter[215] /* powerBlock.LTR.UA_dis[11] PARAM */) * ((tmp83) * (data->localData[0]->realVars[138] /* powerBlock.LTR.T_from_turb[11] variable */ + data->localData[0]->realVars[139] /* powerBlock.LTR.T_from_turb[12] variable */ + (-data->localData[0]->realVars[123] /* powerBlock.LTR.T_from_comp[11] variable */) - data->localData[0]->realVars[124] /* powerBlock.LTR.T_from_comp[12] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */ - data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */);

  tmp88 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp89 = 0.8;
  if(tmp88 < 0.0 && tmp89 != 0.0)
  {
    tmp91 = modf(tmp89, &tmp92);
    
    if(tmp91 > 0.5)
    {
      tmp91 -= 1.0;
      tmp92 += 1.0;
    }
    else if(tmp91 < -0.5)
    {
      tmp91 += 1.0;
      tmp92 -= 1.0;
    }
    
    if(fabs(tmp91) < 1e-10)
      tmp90 = pow(tmp88, tmp92);
    else
    {
      tmp94 = modf(1.0/tmp89, &tmp93);
      if(tmp94 > 0.5)
      {
        tmp94 -= 1.0;
        tmp93 += 1.0;
      }
      else if(tmp94 < -0.5)
      {
        tmp94 += 1.0;
        tmp93 -= 1.0;
      }
      if(fabs(tmp94) < 1e-10 && ((unsigned long)tmp93 & 1))
      {
        tmp90 = -pow(-tmp88, tmp91)*pow(tmp88, tmp92);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp88, tmp89);
      }
    }
  }
  else
  {
    tmp90 = pow(tmp88, tmp89);
  }
  if(isnan(tmp90) || isinf(tmp90))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp88, tmp89);
  }res[31] = (0.2871745887492588) * ((data->simulationInfo->realParameter[216] /* powerBlock.LTR.UA_dis[12] PARAM */) * ((tmp90) * (data->localData[0]->realVars[139] /* powerBlock.LTR.T_from_turb[12] variable */ + data->localData[0]->realVars[140] /* powerBlock.LTR.T_from_turb[13] variable */ + (-data->localData[0]->realVars[124] /* powerBlock.LTR.T_from_comp[12] variable */) - data->localData[0]->realVars[125] /* powerBlock.LTR.T_from_comp[13] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */ - data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */);

  res[32] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[12] variable */ - data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[13] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */ - data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */);

  res[33] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[13] variable */ - data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[14] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */ - data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */);

  res[34] = (data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[14] variable */ - data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[15] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */ - data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */);

  tmp95 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp96 = 0.8;
  if(tmp95 < 0.0 && tmp96 != 0.0)
  {
    tmp98 = modf(tmp96, &tmp99);
    
    if(tmp98 > 0.5)
    {
      tmp98 -= 1.0;
      tmp99 += 1.0;
    }
    else if(tmp98 < -0.5)
    {
      tmp98 += 1.0;
      tmp99 -= 1.0;
    }
    
    if(fabs(tmp98) < 1e-10)
      tmp97 = pow(tmp95, tmp99);
    else
    {
      tmp101 = modf(1.0/tmp96, &tmp100);
      if(tmp101 > 0.5)
      {
        tmp101 -= 1.0;
        tmp100 += 1.0;
      }
      else if(tmp101 < -0.5)
      {
        tmp101 += 1.0;
        tmp100 -= 1.0;
      }
      if(fabs(tmp101) < 1e-10 && ((unsigned long)tmp100 & 1))
      {
        tmp97 = -pow(-tmp95, tmp98)*pow(tmp95, tmp99);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp95, tmp96);
      }
    }
  }
  else
  {
    tmp97 = pow(tmp95, tmp96);
  }
  if(isnan(tmp97) || isinf(tmp97))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp95, tmp96);
  }res[35] = (0.2871745887492588) * ((data->simulationInfo->realParameter[217] /* powerBlock.LTR.UA_dis[13] PARAM */) * ((tmp97) * (data->localData[0]->realVars[140] /* powerBlock.LTR.T_from_turb[13] variable */ + data->localData[0]->realVars[141] /* powerBlock.LTR.T_from_turb[14] variable */ + (-data->localData[0]->realVars[125] /* powerBlock.LTR.T_from_comp[13] variable */) - data->localData[0]->realVars[126] /* powerBlock.LTR.T_from_comp[14] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */ - data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */);

  tmp102 = fabs(DIVISION_SIM((-data->localData[0]->realVars[196] /* powerBlock.cooler.port_b.m_flow variable */),data->simulationInfo->realParameter[238] /* powerBlock.LTR.m_comp_des PARAM */,"powerBlock.LTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[239] /* powerBlock.LTR.m_turb_des PARAM */,"powerBlock.LTR.m_turb_des",equationIndexes)));
  tmp103 = 0.8;
  if(tmp102 < 0.0 && tmp103 != 0.0)
  {
    tmp105 = modf(tmp103, &tmp106);
    
    if(tmp105 > 0.5)
    {
      tmp105 -= 1.0;
      tmp106 += 1.0;
    }
    else if(tmp105 < -0.5)
    {
      tmp105 += 1.0;
      tmp106 -= 1.0;
    }
    
    if(fabs(tmp105) < 1e-10)
      tmp104 = pow(tmp102, tmp106);
    else
    {
      tmp108 = modf(1.0/tmp103, &tmp107);
      if(tmp108 > 0.5)
      {
        tmp108 -= 1.0;
        tmp107 += 1.0;
      }
      else if(tmp108 < -0.5)
      {
        tmp108 += 1.0;
        tmp107 -= 1.0;
      }
      if(fabs(tmp108) < 1e-10 && ((unsigned long)tmp107 & 1))
      {
        tmp104 = -pow(-tmp102, tmp105)*pow(tmp102, tmp106);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp102, tmp103);
      }
    }
  }
  else
  {
    tmp104 = pow(tmp102, tmp103);
  }
  if(isnan(tmp104) || isinf(tmp104))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp102, tmp103);
  }res[36] = (0.2871745887492588) * ((data->simulationInfo->realParameter[218] /* powerBlock.LTR.UA_dis[14] PARAM */) * ((tmp104) * (data->localData[0]->realVars[141] /* powerBlock.LTR.T_from_turb[14] variable */ + data->localData[0]->realVars[142] /* powerBlock.LTR.T_from_turb[15] variable */ + (-data->localData[0]->realVars[126] /* powerBlock.LTR.T_from_comp[14] variable */) - data->localData[0]->realVars[127] /* powerBlock.LTR.T_from_comp[15] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */ - data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */);

  res[37] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[84] /* powerBlock.HTR.h_from_comp[1] variable */ - data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */ - data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */);

  res[38] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */ - data->localData[0]->realVars[222] /* powerBlock.exchanger.h_CO2[1] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[111] /* powerBlock.HTR.h_from_turb[15] variable */ - data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */);

  res[39] = (data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */) * ((data->simulationInfo->realParameter[643] /* powerBlock.turbine.A_nozzle PARAM */) * (data->localData[0]->realVars[276] /* powerBlock.turbine.d_outlet variable */)) + data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */;

  tmp109 = data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */;
  res[40] = (2.0) * (data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */ - data->localData[0]->realVars[280] /* powerBlock.turbine.state_isen.h variable */) - ((tmp109 * tmp109));

  tmp110 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp111 = 0.8;
  if(tmp110 < 0.0 && tmp111 != 0.0)
  {
    tmp113 = modf(tmp111, &tmp114);
    
    if(tmp113 > 0.5)
    {
      tmp113 -= 1.0;
      tmp114 += 1.0;
    }
    else if(tmp113 < -0.5)
    {
      tmp113 += 1.0;
      tmp114 -= 1.0;
    }
    
    if(fabs(tmp113) < 1e-10)
      tmp112 = pow(tmp110, tmp114);
    else
    {
      tmp116 = modf(1.0/tmp111, &tmp115);
      if(tmp116 > 0.5)
      {
        tmp116 -= 1.0;
        tmp115 += 1.0;
      }
      else if(tmp116 < -0.5)
      {
        tmp116 += 1.0;
        tmp115 -= 1.0;
      }
      if(fabs(tmp116) < 1e-10 && ((unsigned long)tmp115 & 1))
      {
        tmp112 = -pow(-tmp110, tmp113)*pow(tmp110, tmp114);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp110, tmp111);
      }
    }
  }
  else
  {
    tmp112 = pow(tmp110, tmp111);
  }
  if(isnan(tmp112) || isinf(tmp112))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp110, tmp111);
  }res[41] = (0.5) * ((data->simulationInfo->realParameter[479] /* powerBlock.exchanger.UA_HX_dis[13] PARAM */) * ((tmp112) * (data->localData[0]->realVars[218] /* powerBlock.exchanger.deltaT[13] variable */ + data->localData[0]->realVars[219] /* powerBlock.exchanger.deltaT[14] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */ - data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */);

  tmp117 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp118 = 0.8;
  if(tmp117 < 0.0 && tmp118 != 0.0)
  {
    tmp120 = modf(tmp118, &tmp121);
    
    if(tmp120 > 0.5)
    {
      tmp120 -= 1.0;
      tmp121 += 1.0;
    }
    else if(tmp120 < -0.5)
    {
      tmp120 += 1.0;
      tmp121 -= 1.0;
    }
    
    if(fabs(tmp120) < 1e-10)
      tmp119 = pow(tmp117, tmp121);
    else
    {
      tmp123 = modf(1.0/tmp118, &tmp122);
      if(tmp123 > 0.5)
      {
        tmp123 -= 1.0;
        tmp122 += 1.0;
      }
      else if(tmp123 < -0.5)
      {
        tmp123 += 1.0;
        tmp122 -= 1.0;
      }
      if(fabs(tmp123) < 1e-10 && ((unsigned long)tmp122 & 1))
      {
        tmp119 = -pow(-tmp117, tmp120)*pow(tmp117, tmp121);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp117, tmp118);
      }
    }
  }
  else
  {
    tmp119 = pow(tmp117, tmp118);
  }
  if(isnan(tmp119) || isinf(tmp119))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp117, tmp118);
  }res[42] = (0.5) * ((data->simulationInfo->realParameter[480] /* powerBlock.exchanger.UA_HX_dis[14] PARAM */) * ((tmp119) * (data->localData[0]->realVars[219] /* powerBlock.exchanger.deltaT[14] variable */ + data->localData[0]->realVars[220] /* powerBlock.exchanger.deltaT[15] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */ - data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */);

  tmp124 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp125 = 0.8;
  if(tmp124 < 0.0 && tmp125 != 0.0)
  {
    tmp127 = modf(tmp125, &tmp128);
    
    if(tmp127 > 0.5)
    {
      tmp127 -= 1.0;
      tmp128 += 1.0;
    }
    else if(tmp127 < -0.5)
    {
      tmp127 += 1.0;
      tmp128 -= 1.0;
    }
    
    if(fabs(tmp127) < 1e-10)
      tmp126 = pow(tmp124, tmp128);
    else
    {
      tmp130 = modf(1.0/tmp125, &tmp129);
      if(tmp130 > 0.5)
      {
        tmp130 -= 1.0;
        tmp129 += 1.0;
      }
      else if(tmp130 < -0.5)
      {
        tmp130 += 1.0;
        tmp129 -= 1.0;
      }
      if(fabs(tmp130) < 1e-10 && ((unsigned long)tmp129 & 1))
      {
        tmp126 = -pow(-tmp124, tmp127)*pow(tmp124, tmp128);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp124, tmp125);
      }
    }
  }
  else
  {
    tmp126 = pow(tmp124, tmp125);
  }
  if(isnan(tmp126) || isinf(tmp126))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp124, tmp125);
  }res[43] = (0.5) * ((data->simulationInfo->realParameter[478] /* powerBlock.exchanger.UA_HX_dis[12] PARAM */) * ((tmp126) * (data->localData[0]->realVars[217] /* powerBlock.exchanger.deltaT[12] variable */ + data->localData[0]->realVars[218] /* powerBlock.exchanger.deltaT[13] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */ - data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */);

  tmp131 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp132 = 0.8;
  if(tmp131 < 0.0 && tmp132 != 0.0)
  {
    tmp134 = modf(tmp132, &tmp135);
    
    if(tmp134 > 0.5)
    {
      tmp134 -= 1.0;
      tmp135 += 1.0;
    }
    else if(tmp134 < -0.5)
    {
      tmp134 += 1.0;
      tmp135 -= 1.0;
    }
    
    if(fabs(tmp134) < 1e-10)
      tmp133 = pow(tmp131, tmp135);
    else
    {
      tmp137 = modf(1.0/tmp132, &tmp136);
      if(tmp137 > 0.5)
      {
        tmp137 -= 1.0;
        tmp136 += 1.0;
      }
      else if(tmp137 < -0.5)
      {
        tmp137 += 1.0;
        tmp136 -= 1.0;
      }
      if(fabs(tmp137) < 1e-10 && ((unsigned long)tmp136 & 1))
      {
        tmp133 = -pow(-tmp131, tmp134)*pow(tmp131, tmp135);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp131, tmp132);
      }
    }
  }
  else
  {
    tmp133 = pow(tmp131, tmp132);
  }
  if(isnan(tmp133) || isinf(tmp133))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp131, tmp132);
  }res[44] = (0.5) * ((data->simulationInfo->realParameter[477] /* powerBlock.exchanger.UA_HX_dis[11] PARAM */) * ((tmp133) * (data->localData[0]->realVars[216] /* powerBlock.exchanger.deltaT[11] variable */ + data->localData[0]->realVars[217] /* powerBlock.exchanger.deltaT[12] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */ - data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */);

  tmp138 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp139 = 0.8;
  if(tmp138 < 0.0 && tmp139 != 0.0)
  {
    tmp141 = modf(tmp139, &tmp142);
    
    if(tmp141 > 0.5)
    {
      tmp141 -= 1.0;
      tmp142 += 1.0;
    }
    else if(tmp141 < -0.5)
    {
      tmp141 += 1.0;
      tmp142 -= 1.0;
    }
    
    if(fabs(tmp141) < 1e-10)
      tmp140 = pow(tmp138, tmp142);
    else
    {
      tmp144 = modf(1.0/tmp139, &tmp143);
      if(tmp144 > 0.5)
      {
        tmp144 -= 1.0;
        tmp143 += 1.0;
      }
      else if(tmp144 < -0.5)
      {
        tmp144 += 1.0;
        tmp143 -= 1.0;
      }
      if(fabs(tmp144) < 1e-10 && ((unsigned long)tmp143 & 1))
      {
        tmp140 = -pow(-tmp138, tmp141)*pow(tmp138, tmp142);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp138, tmp139);
      }
    }
  }
  else
  {
    tmp140 = pow(tmp138, tmp139);
  }
  if(isnan(tmp140) || isinf(tmp140))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp138, tmp139);
  }res[45] = (0.5) * ((data->simulationInfo->realParameter[476] /* powerBlock.exchanger.UA_HX_dis[10] PARAM */) * ((tmp140) * (data->localData[0]->realVars[215] /* powerBlock.exchanger.deltaT[10] variable */ + data->localData[0]->realVars[216] /* powerBlock.exchanger.deltaT[11] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */ - data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */);

  tmp145 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp146 = 0.8;
  if(tmp145 < 0.0 && tmp146 != 0.0)
  {
    tmp148 = modf(tmp146, &tmp149);
    
    if(tmp148 > 0.5)
    {
      tmp148 -= 1.0;
      tmp149 += 1.0;
    }
    else if(tmp148 < -0.5)
    {
      tmp148 += 1.0;
      tmp149 -= 1.0;
    }
    
    if(fabs(tmp148) < 1e-10)
      tmp147 = pow(tmp145, tmp149);
    else
    {
      tmp151 = modf(1.0/tmp146, &tmp150);
      if(tmp151 > 0.5)
      {
        tmp151 -= 1.0;
        tmp150 += 1.0;
      }
      else if(tmp151 < -0.5)
      {
        tmp151 += 1.0;
        tmp150 -= 1.0;
      }
      if(fabs(tmp151) < 1e-10 && ((unsigned long)tmp150 & 1))
      {
        tmp147 = -pow(-tmp145, tmp148)*pow(tmp145, tmp149);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp145, tmp146);
      }
    }
  }
  else
  {
    tmp147 = pow(tmp145, tmp146);
  }
  if(isnan(tmp147) || isinf(tmp147))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp145, tmp146);
  }res[46] = (0.5) * ((data->simulationInfo->realParameter[475] /* powerBlock.exchanger.UA_HX_dis[9] PARAM */) * ((tmp147) * (data->localData[0]->realVars[214] /* powerBlock.exchanger.deltaT[9] variable */ + data->localData[0]->realVars[215] /* powerBlock.exchanger.deltaT[10] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */ - data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */);

  tmp152 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp153 = 0.8;
  if(tmp152 < 0.0 && tmp153 != 0.0)
  {
    tmp155 = modf(tmp153, &tmp156);
    
    if(tmp155 > 0.5)
    {
      tmp155 -= 1.0;
      tmp156 += 1.0;
    }
    else if(tmp155 < -0.5)
    {
      tmp155 += 1.0;
      tmp156 -= 1.0;
    }
    
    if(fabs(tmp155) < 1e-10)
      tmp154 = pow(tmp152, tmp156);
    else
    {
      tmp158 = modf(1.0/tmp153, &tmp157);
      if(tmp158 > 0.5)
      {
        tmp158 -= 1.0;
        tmp157 += 1.0;
      }
      else if(tmp158 < -0.5)
      {
        tmp158 += 1.0;
        tmp157 -= 1.0;
      }
      if(fabs(tmp158) < 1e-10 && ((unsigned long)tmp157 & 1))
      {
        tmp154 = -pow(-tmp152, tmp155)*pow(tmp152, tmp156);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp152, tmp153);
      }
    }
  }
  else
  {
    tmp154 = pow(tmp152, tmp153);
  }
  if(isnan(tmp154) || isinf(tmp154))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp152, tmp153);
  }res[47] = (0.5) * ((data->simulationInfo->realParameter[474] /* powerBlock.exchanger.UA_HX_dis[8] PARAM */) * ((tmp154) * (data->localData[0]->realVars[213] /* powerBlock.exchanger.deltaT[8] variable */ + data->localData[0]->realVars[214] /* powerBlock.exchanger.deltaT[9] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */ - data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */);

  tmp159 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp160 = 0.8;
  if(tmp159 < 0.0 && tmp160 != 0.0)
  {
    tmp162 = modf(tmp160, &tmp163);
    
    if(tmp162 > 0.5)
    {
      tmp162 -= 1.0;
      tmp163 += 1.0;
    }
    else if(tmp162 < -0.5)
    {
      tmp162 += 1.0;
      tmp163 -= 1.0;
    }
    
    if(fabs(tmp162) < 1e-10)
      tmp161 = pow(tmp159, tmp163);
    else
    {
      tmp165 = modf(1.0/tmp160, &tmp164);
      if(tmp165 > 0.5)
      {
        tmp165 -= 1.0;
        tmp164 += 1.0;
      }
      else if(tmp165 < -0.5)
      {
        tmp165 += 1.0;
        tmp164 -= 1.0;
      }
      if(fabs(tmp165) < 1e-10 && ((unsigned long)tmp164 & 1))
      {
        tmp161 = -pow(-tmp159, tmp162)*pow(tmp159, tmp163);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp159, tmp160);
      }
    }
  }
  else
  {
    tmp161 = pow(tmp159, tmp160);
  }
  if(isnan(tmp161) || isinf(tmp161))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp159, tmp160);
  }res[48] = (0.5) * ((data->simulationInfo->realParameter[473] /* powerBlock.exchanger.UA_HX_dis[7] PARAM */) * ((tmp161) * (data->localData[0]->realVars[212] /* powerBlock.exchanger.deltaT[7] variable */ + data->localData[0]->realVars[213] /* powerBlock.exchanger.deltaT[8] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */ - data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */);

  tmp166 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp167 = 0.8;
  if(tmp166 < 0.0 && tmp167 != 0.0)
  {
    tmp169 = modf(tmp167, &tmp170);
    
    if(tmp169 > 0.5)
    {
      tmp169 -= 1.0;
      tmp170 += 1.0;
    }
    else if(tmp169 < -0.5)
    {
      tmp169 += 1.0;
      tmp170 -= 1.0;
    }
    
    if(fabs(tmp169) < 1e-10)
      tmp168 = pow(tmp166, tmp170);
    else
    {
      tmp172 = modf(1.0/tmp167, &tmp171);
      if(tmp172 > 0.5)
      {
        tmp172 -= 1.0;
        tmp171 += 1.0;
      }
      else if(tmp172 < -0.5)
      {
        tmp172 += 1.0;
        tmp171 -= 1.0;
      }
      if(fabs(tmp172) < 1e-10 && ((unsigned long)tmp171 & 1))
      {
        tmp168 = -pow(-tmp166, tmp169)*pow(tmp166, tmp170);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp166, tmp167);
      }
    }
  }
  else
  {
    tmp168 = pow(tmp166, tmp167);
  }
  if(isnan(tmp168) || isinf(tmp168))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp166, tmp167);
  }res[49] = (0.5) * ((data->simulationInfo->realParameter[472] /* powerBlock.exchanger.UA_HX_dis[6] PARAM */) * ((tmp168) * (data->localData[0]->realVars[211] /* powerBlock.exchanger.deltaT[6] variable */ + data->localData[0]->realVars[212] /* powerBlock.exchanger.deltaT[7] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */ - data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */);

  tmp173 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp174 = 0.8;
  if(tmp173 < 0.0 && tmp174 != 0.0)
  {
    tmp176 = modf(tmp174, &tmp177);
    
    if(tmp176 > 0.5)
    {
      tmp176 -= 1.0;
      tmp177 += 1.0;
    }
    else if(tmp176 < -0.5)
    {
      tmp176 += 1.0;
      tmp177 -= 1.0;
    }
    
    if(fabs(tmp176) < 1e-10)
      tmp175 = pow(tmp173, tmp177);
    else
    {
      tmp179 = modf(1.0/tmp174, &tmp178);
      if(tmp179 > 0.5)
      {
        tmp179 -= 1.0;
        tmp178 += 1.0;
      }
      else if(tmp179 < -0.5)
      {
        tmp179 += 1.0;
        tmp178 -= 1.0;
      }
      if(fabs(tmp179) < 1e-10 && ((unsigned long)tmp178 & 1))
      {
        tmp175 = -pow(-tmp173, tmp176)*pow(tmp173, tmp177);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp173, tmp174);
      }
    }
  }
  else
  {
    tmp175 = pow(tmp173, tmp174);
  }
  if(isnan(tmp175) || isinf(tmp175))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp173, tmp174);
  }res[50] = (0.5) * ((data->simulationInfo->realParameter[471] /* powerBlock.exchanger.UA_HX_dis[5] PARAM */) * ((tmp175) * (data->localData[0]->realVars[210] /* powerBlock.exchanger.deltaT[5] variable */ + data->localData[0]->realVars[211] /* powerBlock.exchanger.deltaT[6] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */ - data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */);

  tmp180 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp181 = 0.8;
  if(tmp180 < 0.0 && tmp181 != 0.0)
  {
    tmp183 = modf(tmp181, &tmp184);
    
    if(tmp183 > 0.5)
    {
      tmp183 -= 1.0;
      tmp184 += 1.0;
    }
    else if(tmp183 < -0.5)
    {
      tmp183 += 1.0;
      tmp184 -= 1.0;
    }
    
    if(fabs(tmp183) < 1e-10)
      tmp182 = pow(tmp180, tmp184);
    else
    {
      tmp186 = modf(1.0/tmp181, &tmp185);
      if(tmp186 > 0.5)
      {
        tmp186 -= 1.0;
        tmp185 += 1.0;
      }
      else if(tmp186 < -0.5)
      {
        tmp186 += 1.0;
        tmp185 -= 1.0;
      }
      if(fabs(tmp186) < 1e-10 && ((unsigned long)tmp185 & 1))
      {
        tmp182 = -pow(-tmp180, tmp183)*pow(tmp180, tmp184);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp180, tmp181);
      }
    }
  }
  else
  {
    tmp182 = pow(tmp180, tmp181);
  }
  if(isnan(tmp182) || isinf(tmp182))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp180, tmp181);
  }res[51] = (0.5) * ((data->simulationInfo->realParameter[470] /* powerBlock.exchanger.UA_HX_dis[4] PARAM */) * ((tmp182) * (data->localData[0]->realVars[209] /* powerBlock.exchanger.deltaT[4] variable */ + data->localData[0]->realVars[210] /* powerBlock.exchanger.deltaT[5] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */ - data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */);

  tmp187 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp188 = 0.8;
  if(tmp187 < 0.0 && tmp188 != 0.0)
  {
    tmp190 = modf(tmp188, &tmp191);
    
    if(tmp190 > 0.5)
    {
      tmp190 -= 1.0;
      tmp191 += 1.0;
    }
    else if(tmp190 < -0.5)
    {
      tmp190 += 1.0;
      tmp191 -= 1.0;
    }
    
    if(fabs(tmp190) < 1e-10)
      tmp189 = pow(tmp187, tmp191);
    else
    {
      tmp193 = modf(1.0/tmp188, &tmp192);
      if(tmp193 > 0.5)
      {
        tmp193 -= 1.0;
        tmp192 += 1.0;
      }
      else if(tmp193 < -0.5)
      {
        tmp193 += 1.0;
        tmp192 -= 1.0;
      }
      if(fabs(tmp193) < 1e-10 && ((unsigned long)tmp192 & 1))
      {
        tmp189 = -pow(-tmp187, tmp190)*pow(tmp187, tmp191);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp187, tmp188);
      }
    }
  }
  else
  {
    tmp189 = pow(tmp187, tmp188);
  }
  if(isnan(tmp189) || isinf(tmp189))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp187, tmp188);
  }res[52] = (0.5) * ((data->simulationInfo->realParameter[469] /* powerBlock.exchanger.UA_HX_dis[3] PARAM */) * ((tmp189) * (data->localData[0]->realVars[208] /* powerBlock.exchanger.deltaT[3] variable */ + data->localData[0]->realVars[209] /* powerBlock.exchanger.deltaT[4] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */ - data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */);

  tmp194 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp195 = 0.8;
  if(tmp194 < 0.0 && tmp195 != 0.0)
  {
    tmp197 = modf(tmp195, &tmp198);
    
    if(tmp197 > 0.5)
    {
      tmp197 -= 1.0;
      tmp198 += 1.0;
    }
    else if(tmp197 < -0.5)
    {
      tmp197 += 1.0;
      tmp198 -= 1.0;
    }
    
    if(fabs(tmp197) < 1e-10)
      tmp196 = pow(tmp194, tmp198);
    else
    {
      tmp200 = modf(1.0/tmp195, &tmp199);
      if(tmp200 > 0.5)
      {
        tmp200 -= 1.0;
        tmp199 += 1.0;
      }
      else if(tmp200 < -0.5)
      {
        tmp200 += 1.0;
        tmp199 -= 1.0;
      }
      if(fabs(tmp200) < 1e-10 && ((unsigned long)tmp199 & 1))
      {
        tmp196 = -pow(-tmp194, tmp197)*pow(tmp194, tmp198);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp194, tmp195);
      }
    }
  }
  else
  {
    tmp196 = pow(tmp194, tmp195);
  }
  if(isnan(tmp196) || isinf(tmp196))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp194, tmp195);
  }res[53] = (0.5) * ((data->simulationInfo->realParameter[468] /* powerBlock.exchanger.UA_HX_dis[2] PARAM */) * ((tmp196) * (data->localData[0]->realVars[207] /* powerBlock.exchanger.deltaT[2] variable */ + data->localData[0]->realVars[208] /* powerBlock.exchanger.deltaT[3] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */ - data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */);

  tmp201 = (0.5) * (fabs(DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[501] /* powerBlock.exchanger.m_HTF_des PARAM */,"powerBlock.exchanger.m_HTF_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */,data->simulationInfo->realParameter[500] /* powerBlock.exchanger.m_CO2_des PARAM */,"powerBlock.exchanger.m_CO2_des",equationIndexes))));
  tmp202 = 0.8;
  if(tmp201 < 0.0 && tmp202 != 0.0)
  {
    tmp204 = modf(tmp202, &tmp205);
    
    if(tmp204 > 0.5)
    {
      tmp204 -= 1.0;
      tmp205 += 1.0;
    }
    else if(tmp204 < -0.5)
    {
      tmp204 += 1.0;
      tmp205 -= 1.0;
    }
    
    if(fabs(tmp204) < 1e-10)
      tmp203 = pow(tmp201, tmp205);
    else
    {
      tmp207 = modf(1.0/tmp202, &tmp206);
      if(tmp207 > 0.5)
      {
        tmp207 -= 1.0;
        tmp206 += 1.0;
      }
      else if(tmp207 < -0.5)
      {
        tmp207 += 1.0;
        tmp206 -= 1.0;
      }
      if(fabs(tmp207) < 1e-10 && ((unsigned long)tmp206 & 1))
      {
        tmp203 = -pow(-tmp201, tmp204)*pow(tmp201, tmp205);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp201, tmp202);
      }
    }
  }
  else
  {
    tmp203 = pow(tmp201, tmp202);
  }
  if(isnan(tmp203) || isinf(tmp203))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp201, tmp202);
  }res[54] = (0.5) * ((data->simulationInfo->realParameter[467] /* powerBlock.exchanger.UA_HX_dis[1] PARAM */) * ((tmp203) * (data->localData[0]->realVars[206] /* powerBlock.exchanger.deltaT[1] variable */ + data->localData[0]->realVars[207] /* powerBlock.exchanger.deltaT[2] variable */))) + (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */ - data->localData[0]->realVars[222] /* powerBlock.exchanger.h_CO2[1] variable */);

  tmp208 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp209 = 0.8;
  if(tmp208 < 0.0 && tmp209 != 0.0)
  {
    tmp211 = modf(tmp209, &tmp212);
    
    if(tmp211 > 0.5)
    {
      tmp211 -= 1.0;
      tmp212 += 1.0;
    }
    else if(tmp211 < -0.5)
    {
      tmp211 += 1.0;
      tmp212 -= 1.0;
    }
    
    if(fabs(tmp211) < 1e-10)
      tmp210 = pow(tmp208, tmp212);
    else
    {
      tmp214 = modf(1.0/tmp209, &tmp213);
      if(tmp214 > 0.5)
      {
        tmp214 -= 1.0;
        tmp213 += 1.0;
      }
      else if(tmp214 < -0.5)
      {
        tmp214 += 1.0;
        tmp213 -= 1.0;
      }
      if(fabs(tmp214) < 1e-10 && ((unsigned long)tmp213 & 1))
      {
        tmp210 = -pow(-tmp208, tmp211)*pow(tmp208, tmp212);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp208, tmp209);
      }
    }
  }
  else
  {
    tmp210 = pow(tmp208, tmp209);
  }
  if(isnan(tmp210) || isinf(tmp210))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp208, tmp209);
  }res[55] = (0.2871745887492588) * ((data->simulationInfo->realParameter[83] /* powerBlock.HTR.UA_dis[14] PARAM */) * ((tmp210) * (data->localData[0]->realVars[66] /* powerBlock.HTR.T_from_turb[14] variable */ + data->localData[0]->realVars[67] /* powerBlock.HTR.T_from_turb[15] variable */ + (-data->localData[0]->realVars[52] /* powerBlock.HTR.T_from_comp[14] variable */) - data->localData[0]->realVars[53] /* powerBlock.HTR.T_from_comp[15] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[111] /* powerBlock.HTR.h_from_turb[15] variable */ - data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */);

  res[56] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */ - data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */ - data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */);

  tmp215 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp216 = 0.8;
  if(tmp215 < 0.0 && tmp216 != 0.0)
  {
    tmp218 = modf(tmp216, &tmp219);
    
    if(tmp218 > 0.5)
    {
      tmp218 -= 1.0;
      tmp219 += 1.0;
    }
    else if(tmp218 < -0.5)
    {
      tmp218 += 1.0;
      tmp219 -= 1.0;
    }
    
    if(fabs(tmp218) < 1e-10)
      tmp217 = pow(tmp215, tmp219);
    else
    {
      tmp221 = modf(1.0/tmp216, &tmp220);
      if(tmp221 > 0.5)
      {
        tmp221 -= 1.0;
        tmp220 += 1.0;
      }
      else if(tmp221 < -0.5)
      {
        tmp221 += 1.0;
        tmp220 -= 1.0;
      }
      if(fabs(tmp221) < 1e-10 && ((unsigned long)tmp220 & 1))
      {
        tmp217 = -pow(-tmp215, tmp218)*pow(tmp215, tmp219);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp215, tmp216);
      }
    }
  }
  else
  {
    tmp217 = pow(tmp215, tmp216);
  }
  if(isnan(tmp217) || isinf(tmp217))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp215, tmp216);
  }res[57] = (0.2871745887492588) * ((data->simulationInfo->realParameter[80] /* powerBlock.HTR.UA_dis[11] PARAM */) * ((tmp217) * (data->localData[0]->realVars[63] /* powerBlock.HTR.T_from_turb[11] variable */ + data->localData[0]->realVars[64] /* powerBlock.HTR.T_from_turb[12] variable */ + (-data->localData[0]->realVars[49] /* powerBlock.HTR.T_from_comp[11] variable */) - data->localData[0]->realVars[50] /* powerBlock.HTR.T_from_comp[12] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */ - data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */);

  tmp222 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp223 = 0.8;
  if(tmp222 < 0.0 && tmp223 != 0.0)
  {
    tmp225 = modf(tmp223, &tmp226);
    
    if(tmp225 > 0.5)
    {
      tmp225 -= 1.0;
      tmp226 += 1.0;
    }
    else if(tmp225 < -0.5)
    {
      tmp225 += 1.0;
      tmp226 -= 1.0;
    }
    
    if(fabs(tmp225) < 1e-10)
      tmp224 = pow(tmp222, tmp226);
    else
    {
      tmp228 = modf(1.0/tmp223, &tmp227);
      if(tmp228 > 0.5)
      {
        tmp228 -= 1.0;
        tmp227 += 1.0;
      }
      else if(tmp228 < -0.5)
      {
        tmp228 += 1.0;
        tmp227 -= 1.0;
      }
      if(fabs(tmp228) < 1e-10 && ((unsigned long)tmp227 & 1))
      {
        tmp224 = -pow(-tmp222, tmp225)*pow(tmp222, tmp226);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp222, tmp223);
      }
    }
  }
  else
  {
    tmp224 = pow(tmp222, tmp223);
  }
  if(isnan(tmp224) || isinf(tmp224))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp222, tmp223);
  }res[58] = (0.2871745887492588) * ((data->simulationInfo->realParameter[81] /* powerBlock.HTR.UA_dis[12] PARAM */) * ((tmp224) * (data->localData[0]->realVars[64] /* powerBlock.HTR.T_from_turb[12] variable */ + data->localData[0]->realVars[65] /* powerBlock.HTR.T_from_turb[13] variable */ + (-data->localData[0]->realVars[50] /* powerBlock.HTR.T_from_comp[12] variable */) - data->localData[0]->realVars[51] /* powerBlock.HTR.T_from_comp[13] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */ - data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */);

  tmp229 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp230 = 0.8;
  if(tmp229 < 0.0 && tmp230 != 0.0)
  {
    tmp232 = modf(tmp230, &tmp233);
    
    if(tmp232 > 0.5)
    {
      tmp232 -= 1.0;
      tmp233 += 1.0;
    }
    else if(tmp232 < -0.5)
    {
      tmp232 += 1.0;
      tmp233 -= 1.0;
    }
    
    if(fabs(tmp232) < 1e-10)
      tmp231 = pow(tmp229, tmp233);
    else
    {
      tmp235 = modf(1.0/tmp230, &tmp234);
      if(tmp235 > 0.5)
      {
        tmp235 -= 1.0;
        tmp234 += 1.0;
      }
      else if(tmp235 < -0.5)
      {
        tmp235 += 1.0;
        tmp234 -= 1.0;
      }
      if(fabs(tmp235) < 1e-10 && ((unsigned long)tmp234 & 1))
      {
        tmp231 = -pow(-tmp229, tmp232)*pow(tmp229, tmp233);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp229, tmp230);
      }
    }
  }
  else
  {
    tmp231 = pow(tmp229, tmp230);
  }
  if(isnan(tmp231) || isinf(tmp231))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp229, tmp230);
  }res[59] = (0.2871745887492588) * ((data->simulationInfo->realParameter[82] /* powerBlock.HTR.UA_dis[13] PARAM */) * ((tmp231) * (data->localData[0]->realVars[65] /* powerBlock.HTR.T_from_turb[13] variable */ + data->localData[0]->realVars[66] /* powerBlock.HTR.T_from_turb[14] variable */ + (-data->localData[0]->realVars[51] /* powerBlock.HTR.T_from_comp[13] variable */) - data->localData[0]->realVars[52] /* powerBlock.HTR.T_from_comp[14] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */ - data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */);

  res[60] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */ - data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */ - data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */);

  res[61] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */ - data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */ - data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */);

  res[62] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */ - data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */ - data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */);

  tmp236 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp237 = 0.8;
  if(tmp236 < 0.0 && tmp237 != 0.0)
  {
    tmp239 = modf(tmp237, &tmp240);
    
    if(tmp239 > 0.5)
    {
      tmp239 -= 1.0;
      tmp240 += 1.0;
    }
    else if(tmp239 < -0.5)
    {
      tmp239 += 1.0;
      tmp240 -= 1.0;
    }
    
    if(fabs(tmp239) < 1e-10)
      tmp238 = pow(tmp236, tmp240);
    else
    {
      tmp242 = modf(1.0/tmp237, &tmp241);
      if(tmp242 > 0.5)
      {
        tmp242 -= 1.0;
        tmp241 += 1.0;
      }
      else if(tmp242 < -0.5)
      {
        tmp242 += 1.0;
        tmp241 -= 1.0;
      }
      if(fabs(tmp242) < 1e-10 && ((unsigned long)tmp241 & 1))
      {
        tmp238 = -pow(-tmp236, tmp239)*pow(tmp236, tmp240);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp236, tmp237);
      }
    }
  }
  else
  {
    tmp238 = pow(tmp236, tmp237);
  }
  if(isnan(tmp238) || isinf(tmp238))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp236, tmp237);
  }res[63] = (0.2871745887492588) * ((data->simulationInfo->realParameter[79] /* powerBlock.HTR.UA_dis[10] PARAM */) * ((tmp238) * (data->localData[0]->realVars[62] /* powerBlock.HTR.T_from_turb[10] variable */ + data->localData[0]->realVars[63] /* powerBlock.HTR.T_from_turb[11] variable */ + (-data->localData[0]->realVars[48] /* powerBlock.HTR.T_from_comp[10] variable */) - data->localData[0]->realVars[49] /* powerBlock.HTR.T_from_comp[11] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */ - data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */);

  tmp243 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp244 = 0.8;
  if(tmp243 < 0.0 && tmp244 != 0.0)
  {
    tmp246 = modf(tmp244, &tmp247);
    
    if(tmp246 > 0.5)
    {
      tmp246 -= 1.0;
      tmp247 += 1.0;
    }
    else if(tmp246 < -0.5)
    {
      tmp246 += 1.0;
      tmp247 -= 1.0;
    }
    
    if(fabs(tmp246) < 1e-10)
      tmp245 = pow(tmp243, tmp247);
    else
    {
      tmp249 = modf(1.0/tmp244, &tmp248);
      if(tmp249 > 0.5)
      {
        tmp249 -= 1.0;
        tmp248 += 1.0;
      }
      else if(tmp249 < -0.5)
      {
        tmp249 += 1.0;
        tmp248 -= 1.0;
      }
      if(fabs(tmp249) < 1e-10 && ((unsigned long)tmp248 & 1))
      {
        tmp245 = -pow(-tmp243, tmp246)*pow(tmp243, tmp247);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp243, tmp244);
      }
    }
  }
  else
  {
    tmp245 = pow(tmp243, tmp244);
  }
  if(isnan(tmp245) || isinf(tmp245))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp243, tmp244);
  }res[64] = (0.2871745887492588) * ((data->simulationInfo->realParameter[78] /* powerBlock.HTR.UA_dis[9] PARAM */) * ((tmp245) * (data->localData[0]->realVars[61] /* powerBlock.HTR.T_from_turb[9] variable */ + data->localData[0]->realVars[62] /* powerBlock.HTR.T_from_turb[10] variable */ + (-data->localData[0]->realVars[47] /* powerBlock.HTR.T_from_comp[9] variable */) - data->localData[0]->realVars[48] /* powerBlock.HTR.T_from_comp[10] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */ - data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */);

  tmp250 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp251 = 0.8;
  if(tmp250 < 0.0 && tmp251 != 0.0)
  {
    tmp253 = modf(tmp251, &tmp254);
    
    if(tmp253 > 0.5)
    {
      tmp253 -= 1.0;
      tmp254 += 1.0;
    }
    else if(tmp253 < -0.5)
    {
      tmp253 += 1.0;
      tmp254 -= 1.0;
    }
    
    if(fabs(tmp253) < 1e-10)
      tmp252 = pow(tmp250, tmp254);
    else
    {
      tmp256 = modf(1.0/tmp251, &tmp255);
      if(tmp256 > 0.5)
      {
        tmp256 -= 1.0;
        tmp255 += 1.0;
      }
      else if(tmp256 < -0.5)
      {
        tmp256 += 1.0;
        tmp255 -= 1.0;
      }
      if(fabs(tmp256) < 1e-10 && ((unsigned long)tmp255 & 1))
      {
        tmp252 = -pow(-tmp250, tmp253)*pow(tmp250, tmp254);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp250, tmp251);
      }
    }
  }
  else
  {
    tmp252 = pow(tmp250, tmp251);
  }
  if(isnan(tmp252) || isinf(tmp252))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp250, tmp251);
  }res[65] = (0.2871745887492588) * ((data->simulationInfo->realParameter[77] /* powerBlock.HTR.UA_dis[8] PARAM */) * ((tmp252) * (data->localData[0]->realVars[60] /* powerBlock.HTR.T_from_turb[8] variable */ + data->localData[0]->realVars[61] /* powerBlock.HTR.T_from_turb[9] variable */ + (-data->localData[0]->realVars[46] /* powerBlock.HTR.T_from_comp[8] variable */) - data->localData[0]->realVars[47] /* powerBlock.HTR.T_from_comp[9] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */ - data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */);

  res[66] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */ - data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */ - data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */);

  res[67] = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */ - data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */ - data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */);

  tmp257 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp258 = 0.8;
  if(tmp257 < 0.0 && tmp258 != 0.0)
  {
    tmp260 = modf(tmp258, &tmp261);
    
    if(tmp260 > 0.5)
    {
      tmp260 -= 1.0;
      tmp261 += 1.0;
    }
    else if(tmp260 < -0.5)
    {
      tmp260 += 1.0;
      tmp261 -= 1.0;
    }
    
    if(fabs(tmp260) < 1e-10)
      tmp259 = pow(tmp257, tmp261);
    else
    {
      tmp263 = modf(1.0/tmp258, &tmp262);
      if(tmp263 > 0.5)
      {
        tmp263 -= 1.0;
        tmp262 += 1.0;
      }
      else if(tmp263 < -0.5)
      {
        tmp263 += 1.0;
        tmp262 -= 1.0;
      }
      if(fabs(tmp263) < 1e-10 && ((unsigned long)tmp262 & 1))
      {
        tmp259 = -pow(-tmp257, tmp260)*pow(tmp257, tmp261);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp257, tmp258);
      }
    }
  }
  else
  {
    tmp259 = pow(tmp257, tmp258);
  }
  if(isnan(tmp259) || isinf(tmp259))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp257, tmp258);
  }res[68] = (0.2871745887492588) * ((data->simulationInfo->realParameter[75] /* powerBlock.HTR.UA_dis[6] PARAM */) * ((tmp259) * (data->localData[0]->realVars[58] /* powerBlock.HTR.T_from_turb[6] variable */ + data->localData[0]->realVars[59] /* powerBlock.HTR.T_from_turb[7] variable */ + (-data->localData[0]->realVars[44] /* powerBlock.HTR.T_from_comp[6] variable */) - data->localData[0]->realVars[45] /* powerBlock.HTR.T_from_comp[7] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */ - data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */);

  tmp264 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp265 = 0.8;
  if(tmp264 < 0.0 && tmp265 != 0.0)
  {
    tmp267 = modf(tmp265, &tmp268);
    
    if(tmp267 > 0.5)
    {
      tmp267 -= 1.0;
      tmp268 += 1.0;
    }
    else if(tmp267 < -0.5)
    {
      tmp267 += 1.0;
      tmp268 -= 1.0;
    }
    
    if(fabs(tmp267) < 1e-10)
      tmp266 = pow(tmp264, tmp268);
    else
    {
      tmp270 = modf(1.0/tmp265, &tmp269);
      if(tmp270 > 0.5)
      {
        tmp270 -= 1.0;
        tmp269 += 1.0;
      }
      else if(tmp270 < -0.5)
      {
        tmp270 += 1.0;
        tmp269 -= 1.0;
      }
      if(fabs(tmp270) < 1e-10 && ((unsigned long)tmp269 & 1))
      {
        tmp266 = -pow(-tmp264, tmp267)*pow(tmp264, tmp268);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp264, tmp265);
      }
    }
  }
  else
  {
    tmp266 = pow(tmp264, tmp265);
  }
  if(isnan(tmp266) || isinf(tmp266))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp264, tmp265);
  }res[69] = (0.2871745887492588) * ((data->simulationInfo->realParameter[74] /* powerBlock.HTR.UA_dis[5] PARAM */) * ((tmp266) * (data->localData[0]->realVars[57] /* powerBlock.HTR.T_from_turb[5] variable */ + data->localData[0]->realVars[58] /* powerBlock.HTR.T_from_turb[6] variable */ + (-data->localData[0]->realVars[43] /* powerBlock.HTR.T_from_comp[5] variable */) - data->localData[0]->realVars[44] /* powerBlock.HTR.T_from_comp[6] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */ - data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */);

  tmp271 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp272 = 0.8;
  if(tmp271 < 0.0 && tmp272 != 0.0)
  {
    tmp274 = modf(tmp272, &tmp275);
    
    if(tmp274 > 0.5)
    {
      tmp274 -= 1.0;
      tmp275 += 1.0;
    }
    else if(tmp274 < -0.5)
    {
      tmp274 += 1.0;
      tmp275 -= 1.0;
    }
    
    if(fabs(tmp274) < 1e-10)
      tmp273 = pow(tmp271, tmp275);
    else
    {
      tmp277 = modf(1.0/tmp272, &tmp276);
      if(tmp277 > 0.5)
      {
        tmp277 -= 1.0;
        tmp276 += 1.0;
      }
      else if(tmp277 < -0.5)
      {
        tmp277 += 1.0;
        tmp276 -= 1.0;
      }
      if(fabs(tmp277) < 1e-10 && ((unsigned long)tmp276 & 1))
      {
        tmp273 = -pow(-tmp271, tmp274)*pow(tmp271, tmp275);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp271, tmp272);
      }
    }
  }
  else
  {
    tmp273 = pow(tmp271, tmp272);
  }
  if(isnan(tmp273) || isinf(tmp273))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp271, tmp272);
  }res[70] = (0.2871745887492588) * ((data->simulationInfo->realParameter[73] /* powerBlock.HTR.UA_dis[4] PARAM */) * ((tmp273) * (data->localData[0]->realVars[56] /* powerBlock.HTR.T_from_turb[4] variable */ + data->localData[0]->realVars[57] /* powerBlock.HTR.T_from_turb[5] variable */ + (-data->localData[0]->realVars[42] /* powerBlock.HTR.T_from_comp[4] variable */) - data->localData[0]->realVars[43] /* powerBlock.HTR.T_from_comp[5] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */ - data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */);

  tmp278 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp279 = 0.8;
  if(tmp278 < 0.0 && tmp279 != 0.0)
  {
    tmp281 = modf(tmp279, &tmp282);
    
    if(tmp281 > 0.5)
    {
      tmp281 -= 1.0;
      tmp282 += 1.0;
    }
    else if(tmp281 < -0.5)
    {
      tmp281 += 1.0;
      tmp282 -= 1.0;
    }
    
    if(fabs(tmp281) < 1e-10)
      tmp280 = pow(tmp278, tmp282);
    else
    {
      tmp284 = modf(1.0/tmp279, &tmp283);
      if(tmp284 > 0.5)
      {
        tmp284 -= 1.0;
        tmp283 += 1.0;
      }
      else if(tmp284 < -0.5)
      {
        tmp284 += 1.0;
        tmp283 -= 1.0;
      }
      if(fabs(tmp284) < 1e-10 && ((unsigned long)tmp283 & 1))
      {
        tmp280 = -pow(-tmp278, tmp281)*pow(tmp278, tmp282);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp278, tmp279);
      }
    }
  }
  else
  {
    tmp280 = pow(tmp278, tmp279);
  }
  if(isnan(tmp280) || isinf(tmp280))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp278, tmp279);
  }res[71] = (0.2871745887492588) * ((data->simulationInfo->realParameter[72] /* powerBlock.HTR.UA_dis[3] PARAM */) * ((tmp280) * (data->localData[0]->realVars[55] /* powerBlock.HTR.T_from_turb[3] variable */ + data->localData[0]->realVars[56] /* powerBlock.HTR.T_from_turb[4] variable */ + (-data->localData[0]->realVars[41] /* powerBlock.HTR.T_from_comp[3] variable */) - data->localData[0]->realVars[42] /* powerBlock.HTR.T_from_comp[4] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */ - data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */);

  tmp285 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp286 = 0.8;
  if(tmp285 < 0.0 && tmp286 != 0.0)
  {
    tmp288 = modf(tmp286, &tmp289);
    
    if(tmp288 > 0.5)
    {
      tmp288 -= 1.0;
      tmp289 += 1.0;
    }
    else if(tmp288 < -0.5)
    {
      tmp288 += 1.0;
      tmp289 -= 1.0;
    }
    
    if(fabs(tmp288) < 1e-10)
      tmp287 = pow(tmp285, tmp289);
    else
    {
      tmp291 = modf(1.0/tmp286, &tmp290);
      if(tmp291 > 0.5)
      {
        tmp291 -= 1.0;
        tmp290 += 1.0;
      }
      else if(tmp291 < -0.5)
      {
        tmp291 += 1.0;
        tmp290 -= 1.0;
      }
      if(fabs(tmp291) < 1e-10 && ((unsigned long)tmp290 & 1))
      {
        tmp287 = -pow(-tmp285, tmp288)*pow(tmp285, tmp289);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp285, tmp286);
      }
    }
  }
  else
  {
    tmp287 = pow(tmp285, tmp286);
  }
  if(isnan(tmp287) || isinf(tmp287))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp285, tmp286);
  }res[72] = (0.2871745887492588) * ((data->simulationInfo->realParameter[71] /* powerBlock.HTR.UA_dis[2] PARAM */) * ((tmp287) * (data->localData[0]->realVars[54] /* powerBlock.HTR.T_from_turb[2] variable */ + data->localData[0]->realVars[55] /* powerBlock.HTR.T_from_turb[3] variable */ + (-data->localData[0]->realVars[40] /* powerBlock.HTR.T_from_comp[2] variable */) - data->localData[0]->realVars[41] /* powerBlock.HTR.T_from_comp[3] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */ - data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */);

  tmp292 = fabs(DIVISION_SIM((-data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */),data->simulationInfo->realParameter[103] /* powerBlock.HTR.m_comp_des PARAM */,"powerBlock.HTR.m_comp_des",equationIndexes) - (DIVISION_SIM(data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */,data->simulationInfo->realParameter[104] /* powerBlock.HTR.m_turb_des PARAM */,"powerBlock.HTR.m_turb_des",equationIndexes)));
  tmp293 = 0.8;
  if(tmp292 < 0.0 && tmp293 != 0.0)
  {
    tmp295 = modf(tmp293, &tmp296);
    
    if(tmp295 > 0.5)
    {
      tmp295 -= 1.0;
      tmp296 += 1.0;
    }
    else if(tmp295 < -0.5)
    {
      tmp295 += 1.0;
      tmp296 -= 1.0;
    }
    
    if(fabs(tmp295) < 1e-10)
      tmp294 = pow(tmp292, tmp296);
    else
    {
      tmp298 = modf(1.0/tmp293, &tmp297);
      if(tmp298 > 0.5)
      {
        tmp298 -= 1.0;
        tmp297 += 1.0;
      }
      else if(tmp298 < -0.5)
      {
        tmp298 += 1.0;
        tmp297 -= 1.0;
      }
      if(fabs(tmp298) < 1e-10 && ((unsigned long)tmp297 & 1))
      {
        tmp294 = -pow(-tmp292, tmp295)*pow(tmp292, tmp296);
      }
      else
      {
        throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp292, tmp293);
      }
    }
  }
  else
  {
    tmp294 = pow(tmp292, tmp293);
  }
  if(isnan(tmp294) || isinf(tmp294))
  {
    throwStreamPrint(threadData, "%s:%d: Invalid root: (%g)^(%g)", __FILE__, __LINE__, tmp292, tmp293);
  }res[73] = (0.2871745887492588) * ((data->simulationInfo->realParameter[70] /* powerBlock.HTR.UA_dis[1] PARAM */) * ((tmp294) * (data->localData[0]->realVars[142] /* powerBlock.LTR.T_from_turb[15] variable */ + data->localData[0]->realVars[54] /* powerBlock.HTR.T_from_turb[2] variable */ + (-data->localData[0]->realVars[39] /* powerBlock.HTR.T_from_comp[1] variable */) - data->localData[0]->realVars[40] /* powerBlock.HTR.T_from_comp[2] variable */))) + (data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */ - data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS863(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+74] = {0,18,5,74,49,4,4,4,4,4,4,4,4,4,4,4,4,4,3,2,3,7,8,9,12,14,13,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,33,4,4,4,4,4,4,11,10,6,4,5,4,4,4,4,4,4,4,4,4,4,4,4};
  const int rowIndex[506] = {38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,8,9,10,37,73,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,0,5,8,9,10,12,14,16,18,23,24,25,26,27,30,31,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,57,58,59,63,64,65,68,69,70,71,72,73,2,3,70,71,4,67,68,69,5,66,67,68,5,6,65,66,6,7,64,65,7,62,63,64,57,61,62,63,57,58,60,61,56,58,59,60,57,58,60,61,57,61,62,63,56,58,59,60,38,55,56,59,38,54,55,53,54,52,53,54,48,49,50,51,52,53,54,47,48,49,50,51,52,53,54,46,47,48,49,50,51,52,53,54,43,44,45,46,47,48,49,50,51,52,53,54,41,42,43,44,45,46,47,48,49,50,51,52,53,54,41,43,44,45,46,47,48,49,50,51,52,53,54,38,39,40,55,38,55,56,59,34,36,37,73,33,34,35,36,34,36,37,73,31,32,33,35,31,32,33,35,29,30,31,32,27,28,29,30,27,28,29,30,17,18,22,23,21,22,23,24,20,21,24,25,19,20,25,26,19,26,27,28,15,16,17,18,17,18,22,23,13,14,15,16,15,16,17,18,13,14,15,16,11,12,13,14,9,10,11,12,11,12,13,14,9,10,11,12,5,8,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,57,58,59,63,64,65,68,69,70,71,72,73,21,22,23,24,20,21,24,25,19,20,25,26,19,26,27,28,29,30,31,32,33,34,35,36,44,45,46,47,48,49,50,51,52,53,54,45,46,47,48,49,50,51,52,53,54,49,50,51,52,53,54,51,52,53,54,50,51,52,53,54,6,7,64,65,5,6,65,66,5,66,67,68,3,4,69,70,2,3,70,71,1,2,71,72,1,37,72,73,1,2,71,72,1,37,72,73,7,62,63,64,4,67,68,69,3,4,69,70};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((74+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(506*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 506;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(74*sizeof(int));
  inSysData->sparsePattern->maxColors = 18;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (74+1)*sizeof(int));
  
  for(i=2;i<74+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 506*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[61] = 1;
  inSysData->sparsePattern->colorCols[60] = 2;
  inSysData->sparsePattern->colorCols[59] = 3;
  inSysData->sparsePattern->colorCols[58] = 4;
  inSysData->sparsePattern->colorCols[57] = 5;
  inSysData->sparsePattern->colorCols[50] = 6;
  inSysData->sparsePattern->colorCols[25] = 7;
  inSysData->sparsePattern->colorCols[24] = 8;
  inSysData->sparsePattern->colorCols[23] = 9;
  inSysData->sparsePattern->colorCols[22] = 10;
  inSysData->sparsePattern->colorCols[21] = 11;
  inSysData->sparsePattern->colorCols[70] = 11;
  inSysData->sparsePattern->colorCols[20] = 12;
  inSysData->sparsePattern->colorCols[27] = 12;
  inSysData->sparsePattern->colorCols[49] = 12;
  inSysData->sparsePattern->colorCols[54] = 12;
  inSysData->sparsePattern->colorCols[69] = 12;
  inSysData->sparsePattern->colorCols[71] = 12;
  inSysData->sparsePattern->colorCols[73] = 12;
  inSysData->sparsePattern->colorCols[14] = 13;
  inSysData->sparsePattern->colorCols[15] = 13;
  inSysData->sparsePattern->colorCols[19] = 13;
  inSysData->sparsePattern->colorCols[26] = 13;
  inSysData->sparsePattern->colorCols[44] = 13;
  inSysData->sparsePattern->colorCols[48] = 13;
  inSysData->sparsePattern->colorCols[51] = 13;
  inSysData->sparsePattern->colorCols[53] = 13;
  inSysData->sparsePattern->colorCols[55] = 13;
  inSysData->sparsePattern->colorCols[56] = 13;
  inSysData->sparsePattern->colorCols[63] = 13;
  inSysData->sparsePattern->colorCols[68] = 13;
  inSysData->sparsePattern->colorCols[72] = 13;
  inSysData->sparsePattern->colorCols[13] = 14;
  inSysData->sparsePattern->colorCols[16] = 14;
  inSysData->sparsePattern->colorCols[18] = 14;
  inSysData->sparsePattern->colorCols[30] = 14;
  inSysData->sparsePattern->colorCols[32] = 14;
  inSysData->sparsePattern->colorCols[35] = 14;
  inSysData->sparsePattern->colorCols[42] = 14;
  inSysData->sparsePattern->colorCols[45] = 14;
  inSysData->sparsePattern->colorCols[47] = 14;
  inSysData->sparsePattern->colorCols[52] = 14;
  inSysData->sparsePattern->colorCols[62] = 14;
  inSysData->sparsePattern->colorCols[64] = 14;
  inSysData->sparsePattern->colorCols[66] = 14;
  inSysData->sparsePattern->colorCols[6] = 15;
  inSysData->sparsePattern->colorCols[8] = 15;
  inSysData->sparsePattern->colorCols[10] = 15;
  inSysData->sparsePattern->colorCols[12] = 15;
  inSysData->sparsePattern->colorCols[17] = 15;
  inSysData->sparsePattern->colorCols[28] = 15;
  inSysData->sparsePattern->colorCols[31] = 15;
  inSysData->sparsePattern->colorCols[34] = 15;
  inSysData->sparsePattern->colorCols[37] = 15;
  inSysData->sparsePattern->colorCols[39] = 15;
  inSysData->sparsePattern->colorCols[41] = 15;
  inSysData->sparsePattern->colorCols[46] = 15;
  inSysData->sparsePattern->colorCols[65] = 15;
  inSysData->sparsePattern->colorCols[67] = 15;
  inSysData->sparsePattern->colorCols[3] = 16;
  inSysData->sparsePattern->colorCols[2] = 17;
  inSysData->sparsePattern->colorCols[0] = 18;
  inSysData->sparsePattern->colorCols[1] = 18;
  inSysData->sparsePattern->colorCols[4] = 18;
  inSysData->sparsePattern->colorCols[5] = 18;
  inSysData->sparsePattern->colorCols[7] = 18;
  inSysData->sparsePattern->colorCols[9] = 18;
  inSysData->sparsePattern->colorCols[11] = 18;
  inSysData->sparsePattern->colorCols[29] = 18;
  inSysData->sparsePattern->colorCols[33] = 18;
  inSysData->sparsePattern->colorCols[36] = 18;
  inSysData->sparsePattern->colorCols[38] = 18;
  inSysData->sparsePattern->colorCols[40] = 18;
  inSysData->sparsePattern->colorCols[43] = 18;
}
void initializeStaticDataNLS863(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.h_CO2[15] */
  sysData->nominal[i] = data->modelData->realVarsData[236].attribute /* powerBlock.exchanger.h_CO2[15] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[236].attribute /* powerBlock.exchanger.h_CO2[15] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[236].attribute /* powerBlock.exchanger.h_CO2[15] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[1] */
  sysData->nominal[i] = data->modelData->realVarsData[173].attribute /* powerBlock.LTR.h_from_turb[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[173].attribute /* powerBlock.LTR.h_from_turb[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[173].attribute /* powerBlock.LTR.h_from_turb[1] */.max;
  /* static nls data for powerBlock.exchanger.CO2_port_b.m_flow */
  sysData->nominal[i] = data->modelData->realVarsData[200].attribute /* powerBlock.exchanger.CO2_port_b.m_flow */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[200].attribute /* powerBlock.exchanger.CO2_port_b.m_flow */.min;
  sysData->max[i++]   = data->modelData->realVarsData[200].attribute /* powerBlock.exchanger.CO2_port_b.m_flow */.max;
  /* static nls data for powerBlock.turbine.p_out */
  sysData->nominal[i] = data->modelData->realVarsData[278].attribute /* powerBlock.turbine.p_out */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[278].attribute /* powerBlock.turbine.p_out */.min;
  sysData->max[i++]   = data->modelData->realVarsData[278].attribute /* powerBlock.turbine.p_out */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[4] */
  sysData->nominal[i] = data->modelData->realVarsData[100].attribute /* powerBlock.HTR.h_from_turb[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[100].attribute /* powerBlock.HTR.h_from_turb[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[100].attribute /* powerBlock.HTR.h_from_turb[4] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[6] */
  sysData->nominal[i] = data->modelData->realVarsData[102].attribute /* powerBlock.HTR.h_from_turb[6] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[102].attribute /* powerBlock.HTR.h_from_turb[6] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[102].attribute /* powerBlock.HTR.h_from_turb[6] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[7] */
  sysData->nominal[i] = data->modelData->realVarsData[90].attribute /* powerBlock.HTR.h_from_comp[7] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[90].attribute /* powerBlock.HTR.h_from_comp[7] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[90].attribute /* powerBlock.HTR.h_from_comp[7] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[8] */
  sysData->nominal[i] = data->modelData->realVarsData[104].attribute /* powerBlock.HTR.h_from_turb[8] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[104].attribute /* powerBlock.HTR.h_from_turb[8] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[104].attribute /* powerBlock.HTR.h_from_turb[8] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[9] */
  sysData->nominal[i] = data->modelData->realVarsData[105].attribute /* powerBlock.HTR.h_from_turb[9] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[105].attribute /* powerBlock.HTR.h_from_turb[9] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[105].attribute /* powerBlock.HTR.h_from_turb[9] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[10] */
  sysData->nominal[i] = data->modelData->realVarsData[106].attribute /* powerBlock.HTR.h_from_turb[10] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[106].attribute /* powerBlock.HTR.h_from_turb[10] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[106].attribute /* powerBlock.HTR.h_from_turb[10] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[11] */
  sysData->nominal[i] = data->modelData->realVarsData[94].attribute /* powerBlock.HTR.h_from_comp[11] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[94].attribute /* powerBlock.HTR.h_from_comp[11] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[94].attribute /* powerBlock.HTR.h_from_comp[11] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[12] */
  sysData->nominal[i] = data->modelData->realVarsData[95].attribute /* powerBlock.HTR.h_from_comp[12] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[95].attribute /* powerBlock.HTR.h_from_comp[12] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[95].attribute /* powerBlock.HTR.h_from_comp[12] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[13] */
  sysData->nominal[i] = data->modelData->realVarsData[109].attribute /* powerBlock.HTR.h_from_turb[13] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[109].attribute /* powerBlock.HTR.h_from_turb[13] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[109].attribute /* powerBlock.HTR.h_from_turb[13] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[12] */
  sysData->nominal[i] = data->modelData->realVarsData[108].attribute /* powerBlock.HTR.h_from_turb[12] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[108].attribute /* powerBlock.HTR.h_from_turb[12] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[108].attribute /* powerBlock.HTR.h_from_turb[12] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[11] */
  sysData->nominal[i] = data->modelData->realVarsData[107].attribute /* powerBlock.HTR.h_from_turb[11] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[107].attribute /* powerBlock.HTR.h_from_turb[11] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[107].attribute /* powerBlock.HTR.h_from_turb[11] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[13] */
  sysData->nominal[i] = data->modelData->realVarsData[96].attribute /* powerBlock.HTR.h_from_comp[13] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[96].attribute /* powerBlock.HTR.h_from_comp[13] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[96].attribute /* powerBlock.HTR.h_from_comp[13] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[14] */
  sysData->nominal[i] = data->modelData->realVarsData[110].attribute /* powerBlock.HTR.h_from_turb[14] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[110].attribute /* powerBlock.HTR.h_from_turb[14] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[110].attribute /* powerBlock.HTR.h_from_turb[14] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[1] */
  sysData->nominal[i] = data->modelData->realVarsData[222].attribute /* powerBlock.exchanger.h_CO2[1] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[222].attribute /* powerBlock.exchanger.h_CO2[1] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[222].attribute /* powerBlock.exchanger.h_CO2[1] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[2] */
  sysData->nominal[i] = data->modelData->realVarsData[223].attribute /* powerBlock.exchanger.h_CO2[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[223].attribute /* powerBlock.exchanger.h_CO2[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[223].attribute /* powerBlock.exchanger.h_CO2[2] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[3] */
  sysData->nominal[i] = data->modelData->realVarsData[224].attribute /* powerBlock.exchanger.h_CO2[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[224].attribute /* powerBlock.exchanger.h_CO2[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[224].attribute /* powerBlock.exchanger.h_CO2[3] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[7] */
  sysData->nominal[i] = data->modelData->realVarsData[228].attribute /* powerBlock.exchanger.h_CO2[7] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[228].attribute /* powerBlock.exchanger.h_CO2[7] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[228].attribute /* powerBlock.exchanger.h_CO2[7] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[8] */
  sysData->nominal[i] = data->modelData->realVarsData[229].attribute /* powerBlock.exchanger.h_CO2[8] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[229].attribute /* powerBlock.exchanger.h_CO2[8] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[229].attribute /* powerBlock.exchanger.h_CO2[8] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[9] */
  sysData->nominal[i] = data->modelData->realVarsData[230].attribute /* powerBlock.exchanger.h_CO2[9] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[230].attribute /* powerBlock.exchanger.h_CO2[9] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[230].attribute /* powerBlock.exchanger.h_CO2[9] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[12] */
  sysData->nominal[i] = data->modelData->realVarsData[233].attribute /* powerBlock.exchanger.h_CO2[12] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[233].attribute /* powerBlock.exchanger.h_CO2[12] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[233].attribute /* powerBlock.exchanger.h_CO2[12] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[14] */
  sysData->nominal[i] = data->modelData->realVarsData[235].attribute /* powerBlock.exchanger.h_CO2[14] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[235].attribute /* powerBlock.exchanger.h_CO2[14] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[235].attribute /* powerBlock.exchanger.h_CO2[14] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[13] */
  sysData->nominal[i] = data->modelData->realVarsData[234].attribute /* powerBlock.exchanger.h_CO2[13] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[234].attribute /* powerBlock.exchanger.h_CO2[13] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[234].attribute /* powerBlock.exchanger.h_CO2[13] */.max;
  /* static nls data for powerBlock.turbine.C_spouting */
  sysData->nominal[i] = data->modelData->realVarsData[274].attribute /* powerBlock.turbine.C_spouting */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[274].attribute /* powerBlock.turbine.C_spouting */.min;
  sysData->max[i++]   = data->modelData->realVarsData[274].attribute /* powerBlock.turbine.C_spouting */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[14] */
  sysData->nominal[i] = data->modelData->realVarsData[97].attribute /* powerBlock.HTR.h_from_comp[14] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[97].attribute /* powerBlock.HTR.h_from_comp[14] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[97].attribute /* powerBlock.HTR.h_from_comp[14] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[15] */
  sysData->nominal[i] = data->modelData->realVarsData[187].attribute /* powerBlock.LTR.h_from_turb[15] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[187].attribute /* powerBlock.LTR.h_from_turb[15] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[187].attribute /* powerBlock.LTR.h_from_turb[15] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[14] */
  sysData->nominal[i] = data->modelData->realVarsData[186].attribute /* powerBlock.LTR.h_from_turb[14] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[186].attribute /* powerBlock.LTR.h_from_turb[14] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[186].attribute /* powerBlock.LTR.h_from_turb[14] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[15] */
  sysData->nominal[i] = data->modelData->realVarsData[172].attribute /* powerBlock.LTR.h_from_comp[15] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[172].attribute /* powerBlock.LTR.h_from_comp[15] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[172].attribute /* powerBlock.LTR.h_from_comp[15] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[13] */
  sysData->nominal[i] = data->modelData->realVarsData[170].attribute /* powerBlock.LTR.h_from_comp[13] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[170].attribute /* powerBlock.LTR.h_from_comp[13] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[170].attribute /* powerBlock.LTR.h_from_comp[13] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[13] */
  sysData->nominal[i] = data->modelData->realVarsData[185].attribute /* powerBlock.LTR.h_from_turb[13] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[185].attribute /* powerBlock.LTR.h_from_turb[13] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[185].attribute /* powerBlock.LTR.h_from_turb[13] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[12] */
  sysData->nominal[i] = data->modelData->realVarsData[184].attribute /* powerBlock.LTR.h_from_turb[12] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[184].attribute /* powerBlock.LTR.h_from_turb[12] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[184].attribute /* powerBlock.LTR.h_from_turb[12] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[11] */
  sysData->nominal[i] = data->modelData->realVarsData[168].attribute /* powerBlock.LTR.h_from_comp[11] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[168].attribute /* powerBlock.LTR.h_from_comp[11] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[168].attribute /* powerBlock.LTR.h_from_comp[11] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[11] */
  sysData->nominal[i] = data->modelData->realVarsData[183].attribute /* powerBlock.LTR.h_from_turb[11] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[183].attribute /* powerBlock.LTR.h_from_turb[11] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[183].attribute /* powerBlock.LTR.h_from_turb[11] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[6] */
  sysData->nominal[i] = data->modelData->realVarsData[178].attribute /* powerBlock.LTR.h_from_turb[6] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[178].attribute /* powerBlock.LTR.h_from_turb[6] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[178].attribute /* powerBlock.LTR.h_from_turb[6] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[7] */
  sysData->nominal[i] = data->modelData->realVarsData[164].attribute /* powerBlock.LTR.h_from_comp[7] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[164].attribute /* powerBlock.LTR.h_from_comp[7] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[164].attribute /* powerBlock.LTR.h_from_comp[7] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[8] */
  sysData->nominal[i] = data->modelData->realVarsData[180].attribute /* powerBlock.LTR.h_from_turb[8] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[180].attribute /* powerBlock.LTR.h_from_turb[8] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[180].attribute /* powerBlock.LTR.h_from_turb[8] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[9] */
  sysData->nominal[i] = data->modelData->realVarsData[166].attribute /* powerBlock.LTR.h_from_comp[9] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[166].attribute /* powerBlock.LTR.h_from_comp[9] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[166].attribute /* powerBlock.LTR.h_from_comp[9] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[10] */
  sysData->nominal[i] = data->modelData->realVarsData[182].attribute /* powerBlock.LTR.h_from_turb[10] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[182].attribute /* powerBlock.LTR.h_from_turb[10] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[182].attribute /* powerBlock.LTR.h_from_turb[10] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[5] */
  sysData->nominal[i] = data->modelData->realVarsData[177].attribute /* powerBlock.LTR.h_from_turb[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[177].attribute /* powerBlock.LTR.h_from_turb[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[177].attribute /* powerBlock.LTR.h_from_turb[5] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[6] */
  sysData->nominal[i] = data->modelData->realVarsData[163].attribute /* powerBlock.LTR.h_from_comp[6] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[163].attribute /* powerBlock.LTR.h_from_comp[6] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[163].attribute /* powerBlock.LTR.h_from_comp[6] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[4] */
  sysData->nominal[i] = data->modelData->realVarsData[176].attribute /* powerBlock.LTR.h_from_turb[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[176].attribute /* powerBlock.LTR.h_from_turb[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[176].attribute /* powerBlock.LTR.h_from_turb[4] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[5] */
  sysData->nominal[i] = data->modelData->realVarsData[162].attribute /* powerBlock.LTR.h_from_comp[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[162].attribute /* powerBlock.LTR.h_from_comp[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[162].attribute /* powerBlock.LTR.h_from_comp[5] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[4] */
  sysData->nominal[i] = data->modelData->realVarsData[161].attribute /* powerBlock.LTR.h_from_comp[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[161].attribute /* powerBlock.LTR.h_from_comp[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[161].attribute /* powerBlock.LTR.h_from_comp[4] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[3] */
  sysData->nominal[i] = data->modelData->realVarsData[175].attribute /* powerBlock.LTR.h_from_turb[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[175].attribute /* powerBlock.LTR.h_from_turb[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[175].attribute /* powerBlock.LTR.h_from_turb[3] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[2] */
  sysData->nominal[i] = data->modelData->realVarsData[174].attribute /* powerBlock.LTR.h_from_turb[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[174].attribute /* powerBlock.LTR.h_from_turb[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[174].attribute /* powerBlock.LTR.h_from_turb[2] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[3] */
  sysData->nominal[i] = data->modelData->realVarsData[160].attribute /* powerBlock.LTR.h_from_comp[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[160].attribute /* powerBlock.LTR.h_from_comp[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[160].attribute /* powerBlock.LTR.h_from_comp[3] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[2] */
  sysData->nominal[i] = data->modelData->realVarsData[159].attribute /* powerBlock.LTR.h_from_comp[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[159].attribute /* powerBlock.LTR.h_from_comp[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[159].attribute /* powerBlock.LTR.h_from_comp[2] */.max;
  /* static nls data for powerBlock.reCompressor.p_out */
  sysData->nominal[i] = data->modelData->realVarsData[266].attribute /* powerBlock.reCompressor.p_out */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[266].attribute /* powerBlock.reCompressor.p_out */.min;
  sysData->max[i++]   = data->modelData->realVarsData[266].attribute /* powerBlock.reCompressor.p_out */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[7] */
  sysData->nominal[i] = data->modelData->realVarsData[179].attribute /* powerBlock.LTR.h_from_turb[7] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[179].attribute /* powerBlock.LTR.h_from_turb[7] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[179].attribute /* powerBlock.LTR.h_from_turb[7] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[8] */
  sysData->nominal[i] = data->modelData->realVarsData[165].attribute /* powerBlock.LTR.h_from_comp[8] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[165].attribute /* powerBlock.LTR.h_from_comp[8] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[165].attribute /* powerBlock.LTR.h_from_comp[8] */.max;
  /* static nls data for powerBlock.LTR.h_from_turb[9] */
  sysData->nominal[i] = data->modelData->realVarsData[181].attribute /* powerBlock.LTR.h_from_turb[9] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[181].attribute /* powerBlock.LTR.h_from_turb[9] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[181].attribute /* powerBlock.LTR.h_from_turb[9] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[10] */
  sysData->nominal[i] = data->modelData->realVarsData[167].attribute /* powerBlock.LTR.h_from_comp[10] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[167].attribute /* powerBlock.LTR.h_from_comp[10] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[167].attribute /* powerBlock.LTR.h_from_comp[10] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[12] */
  sysData->nominal[i] = data->modelData->realVarsData[169].attribute /* powerBlock.LTR.h_from_comp[12] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[169].attribute /* powerBlock.LTR.h_from_comp[12] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[169].attribute /* powerBlock.LTR.h_from_comp[12] */.max;
  /* static nls data for powerBlock.LTR.h_from_comp[14] */
  sysData->nominal[i] = data->modelData->realVarsData[171].attribute /* powerBlock.LTR.h_from_comp[14] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[171].attribute /* powerBlock.LTR.h_from_comp[14] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[171].attribute /* powerBlock.LTR.h_from_comp[14] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[11] */
  sysData->nominal[i] = data->modelData->realVarsData[232].attribute /* powerBlock.exchanger.h_CO2[11] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[232].attribute /* powerBlock.exchanger.h_CO2[11] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[232].attribute /* powerBlock.exchanger.h_CO2[11] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[10] */
  sysData->nominal[i] = data->modelData->realVarsData[231].attribute /* powerBlock.exchanger.h_CO2[10] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[231].attribute /* powerBlock.exchanger.h_CO2[10] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[231].attribute /* powerBlock.exchanger.h_CO2[10] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[6] */
  sysData->nominal[i] = data->modelData->realVarsData[227].attribute /* powerBlock.exchanger.h_CO2[6] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[227].attribute /* powerBlock.exchanger.h_CO2[6] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[227].attribute /* powerBlock.exchanger.h_CO2[6] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[4] */
  sysData->nominal[i] = data->modelData->realVarsData[225].attribute /* powerBlock.exchanger.h_CO2[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[225].attribute /* powerBlock.exchanger.h_CO2[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[225].attribute /* powerBlock.exchanger.h_CO2[4] */.max;
  /* static nls data for powerBlock.exchanger.h_CO2[5] */
  sysData->nominal[i] = data->modelData->realVarsData[226].attribute /* powerBlock.exchanger.h_CO2[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[226].attribute /* powerBlock.exchanger.h_CO2[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[226].attribute /* powerBlock.exchanger.h_CO2[5] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[9] */
  sysData->nominal[i] = data->modelData->realVarsData[92].attribute /* powerBlock.HTR.h_from_comp[9] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[92].attribute /* powerBlock.HTR.h_from_comp[9] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[92].attribute /* powerBlock.HTR.h_from_comp[9] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[8] */
  sysData->nominal[i] = data->modelData->realVarsData[91].attribute /* powerBlock.HTR.h_from_comp[8] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[91].attribute /* powerBlock.HTR.h_from_comp[8] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[91].attribute /* powerBlock.HTR.h_from_comp[8] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[7] */
  sysData->nominal[i] = data->modelData->realVarsData[103].attribute /* powerBlock.HTR.h_from_turb[7] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[103].attribute /* powerBlock.HTR.h_from_turb[7] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[103].attribute /* powerBlock.HTR.h_from_turb[7] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[5] */
  sysData->nominal[i] = data->modelData->realVarsData[101].attribute /* powerBlock.HTR.h_from_turb[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[101].attribute /* powerBlock.HTR.h_from_turb[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[101].attribute /* powerBlock.HTR.h_from_turb[5] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[4] */
  sysData->nominal[i] = data->modelData->realVarsData[87].attribute /* powerBlock.HTR.h_from_comp[4] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[87].attribute /* powerBlock.HTR.h_from_comp[4] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[87].attribute /* powerBlock.HTR.h_from_comp[4] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[3] */
  sysData->nominal[i] = data->modelData->realVarsData[86].attribute /* powerBlock.HTR.h_from_comp[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[86].attribute /* powerBlock.HTR.h_from_comp[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[86].attribute /* powerBlock.HTR.h_from_comp[3] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[2] */
  sysData->nominal[i] = data->modelData->realVarsData[85].attribute /* powerBlock.HTR.h_from_comp[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[85].attribute /* powerBlock.HTR.h_from_comp[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[85].attribute /* powerBlock.HTR.h_from_comp[2] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[3] */
  sysData->nominal[i] = data->modelData->realVarsData[99].attribute /* powerBlock.HTR.h_from_turb[3] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[99].attribute /* powerBlock.HTR.h_from_turb[3] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[99].attribute /* powerBlock.HTR.h_from_turb[3] */.max;
  /* static nls data for powerBlock.HTR.h_from_turb[2] */
  sysData->nominal[i] = data->modelData->realVarsData[98].attribute /* powerBlock.HTR.h_from_turb[2] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[98].attribute /* powerBlock.HTR.h_from_turb[2] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[98].attribute /* powerBlock.HTR.h_from_turb[2] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[10] */
  sysData->nominal[i] = data->modelData->realVarsData[93].attribute /* powerBlock.HTR.h_from_comp[10] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[93].attribute /* powerBlock.HTR.h_from_comp[10] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[93].attribute /* powerBlock.HTR.h_from_comp[10] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[6] */
  sysData->nominal[i] = data->modelData->realVarsData[89].attribute /* powerBlock.HTR.h_from_comp[6] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[89].attribute /* powerBlock.HTR.h_from_comp[6] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[89].attribute /* powerBlock.HTR.h_from_comp[6] */.max;
  /* static nls data for powerBlock.HTR.h_from_comp[5] */
  sysData->nominal[i] = data->modelData->realVarsData[88].attribute /* powerBlock.HTR.h_from_comp[5] */.nominal;
  sysData->min[i]     = data->modelData->realVarsData[88].attribute /* powerBlock.HTR.h_from_comp[5] */.min;
  sysData->max[i++]   = data->modelData->realVarsData[88].attribute /* powerBlock.HTR.h_from_comp[5] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS863(sysData);
}

void getIterationVarsNLS863(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[15] variable */;
  array[1] = data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_turb[1] variable */;
  array[2] = data->localData[0]->realVars[200] /* powerBlock.exchanger.CO2_port_b.m_flow variable */;
  array[3] = data->localData[0]->realVars[278] /* powerBlock.turbine.p_out variable */;
  array[4] = data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */;
  array[5] = data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */;
  array[6] = data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */;
  array[7] = data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */;
  array[8] = data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */;
  array[9] = data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */;
  array[10] = data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */;
  array[11] = data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */;
  array[12] = data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */;
  array[13] = data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */;
  array[14] = data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */;
  array[15] = data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */;
  array[16] = data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */;
  array[17] = data->localData[0]->realVars[222] /* powerBlock.exchanger.h_CO2[1] variable */;
  array[18] = data->localData[0]->realVars[223] /* powerBlock.exchanger.h_CO2[2] variable */;
  array[19] = data->localData[0]->realVars[224] /* powerBlock.exchanger.h_CO2[3] variable */;
  array[20] = data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[7] variable */;
  array[21] = data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[8] variable */;
  array[22] = data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[9] variable */;
  array[23] = data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[12] variable */;
  array[24] = data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[14] variable */;
  array[25] = data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[13] variable */;
  array[26] = data->localData[0]->realVars[274] /* powerBlock.turbine.C_spouting variable */;
  array[27] = data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */;
  array[28] = data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[15] variable */;
  array[29] = data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[14] variable */;
  array[30] = data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[15] variable */;
  array[31] = data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[13] variable */;
  array[32] = data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[13] variable */;
  array[33] = data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[12] variable */;
  array[34] = data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[11] variable */;
  array[35] = data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[11] variable */;
  array[36] = data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[6] variable */;
  array[37] = data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[7] variable */;
  array[38] = data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[8] variable */;
  array[39] = data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[9] variable */;
  array[40] = data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[10] variable */;
  array[41] = data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[5] variable */;
  array[42] = data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[6] variable */;
  array[43] = data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[4] variable */;
  array[44] = data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[5] variable */;
  array[45] = data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[4] variable */;
  array[46] = data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[3] variable */;
  array[47] = data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[2] variable */;
  array[48] = data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[3] variable */;
  array[49] = data->localData[0]->realVars[159] /* powerBlock.LTR.h_from_comp[2] variable */;
  array[50] = data->localData[0]->realVars[266] /* powerBlock.reCompressor.p_out variable */;
  array[51] = data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[7] variable */;
  array[52] = data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[8] variable */;
  array[53] = data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[9] variable */;
  array[54] = data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[10] variable */;
  array[55] = data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[12] variable */;
  array[56] = data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[14] variable */;
  array[57] = data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[11] variable */;
  array[58] = data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[10] variable */;
  array[59] = data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[6] variable */;
  array[60] = data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[4] variable */;
  array[61] = data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[5] variable */;
  array[62] = data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */;
  array[63] = data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */;
  array[64] = data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */;
  array[65] = data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */;
  array[66] = data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */;
  array[67] = data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */;
  array[68] = data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */;
  array[69] = data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */;
  array[70] = data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */;
  array[71] = data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */;
  array[72] = data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */;
  array[73] = data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */;
}


/* inner equations */

void residualFunc559(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,559};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[338] /* powerBlock.cooler.T_CO2_des[14] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[407] /* powerBlock.cooler.state_des[14].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[338] /* powerBlock.cooler.T_CO2_des[14] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS559(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS559(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.cooler.T_CO2_des[14] */
  sysData->nominal[i] = data->modelData->realParameterData[338].attribute /* powerBlock.cooler.T_CO2_des[14] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[338].attribute /* powerBlock.cooler.T_CO2_des[14] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[338].attribute /* powerBlock.cooler.T_CO2_des[14] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS559(sysData);
}

void getIterationVarsNLS559(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[338] /* powerBlock.cooler.T_CO2_des[14] PARAM */;
}


/* inner equations */

void residualFunc555(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,555};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[337] /* powerBlock.cooler.T_CO2_des[13] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[406] /* powerBlock.cooler.state_des[13].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[337] /* powerBlock.cooler.T_CO2_des[13] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS555(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS555(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.cooler.T_CO2_des[13] */
  sysData->nominal[i] = data->modelData->realParameterData[337].attribute /* powerBlock.cooler.T_CO2_des[13] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[337].attribute /* powerBlock.cooler.T_CO2_des[13] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[337].attribute /* powerBlock.cooler.T_CO2_des[13] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS555(sysData);
}

void getIterationVarsNLS555(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[337] /* powerBlock.cooler.T_CO2_des[13] PARAM */;
}


/* inner equations */

void residualFunc551(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,551};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[336] /* powerBlock.cooler.T_CO2_des[12] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[405] /* powerBlock.cooler.state_des[12].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[336] /* powerBlock.cooler.T_CO2_des[12] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS551(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS551(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.cooler.T_CO2_des[12] */
  sysData->nominal[i] = data->modelData->realParameterData[336].attribute /* powerBlock.cooler.T_CO2_des[12] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[336].attribute /* powerBlock.cooler.T_CO2_des[12] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[336].attribute /* powerBlock.cooler.T_CO2_des[12] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS551(sysData);
}

void getIterationVarsNLS551(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[336] /* powerBlock.cooler.T_CO2_des[12] PARAM */;
}


/* inner equations */

void residualFunc547(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,547};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[335] /* powerBlock.cooler.T_CO2_des[11] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[404] /* powerBlock.cooler.state_des[11].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[335] /* powerBlock.cooler.T_CO2_des[11] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS547(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS547(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.cooler.T_CO2_des[11] */
  sysData->nominal[i] = data->modelData->realParameterData[335].attribute /* powerBlock.cooler.T_CO2_des[11] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[335].attribute /* powerBlock.cooler.T_CO2_des[11] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[335].attribute /* powerBlock.cooler.T_CO2_des[11] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS547(sysData);
}

void getIterationVarsNLS547(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[335] /* powerBlock.cooler.T_CO2_des[11] PARAM */;
}


/* inner equations */

void residualFunc543(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,543};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[334] /* powerBlock.cooler.T_CO2_des[10] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[403] /* powerBlock.cooler.state_des[10].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[334] /* powerBlock.cooler.T_CO2_des[10] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS543(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS543(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.cooler.T_CO2_des[10] */
  sysData->nominal[i] = data->modelData->realParameterData[334].attribute /* powerBlock.cooler.T_CO2_des[10] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[334].attribute /* powerBlock.cooler.T_CO2_des[10] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[334].attribute /* powerBlock.cooler.T_CO2_des[10] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS543(sysData);
}

void getIterationVarsNLS543(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[334] /* powerBlock.cooler.T_CO2_des[10] PARAM */;
}


/* inner equations */

void residualFunc539(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,539};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[333] /* powerBlock.cooler.T_CO2_des[9] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[402] /* powerBlock.cooler.state_des[9].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[333] /* powerBlock.cooler.T_CO2_des[9] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS539(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS539(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.cooler.T_CO2_des[9] */
  sysData->nominal[i] = data->modelData->realParameterData[333].attribute /* powerBlock.cooler.T_CO2_des[9] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[333].attribute /* powerBlock.cooler.T_CO2_des[9] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[333].attribute /* powerBlock.cooler.T_CO2_des[9] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS539(sysData);
}

void getIterationVarsNLS539(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[333] /* powerBlock.cooler.T_CO2_des[9] PARAM */;
}


/* inner equations */

void residualFunc535(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,535};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[332] /* powerBlock.cooler.T_CO2_des[8] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[401] /* powerBlock.cooler.state_des[8].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[332] /* powerBlock.cooler.T_CO2_des[8] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS535(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS535(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.cooler.T_CO2_des[8] */
  sysData->nominal[i] = data->modelData->realParameterData[332].attribute /* powerBlock.cooler.T_CO2_des[8] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[332].attribute /* powerBlock.cooler.T_CO2_des[8] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[332].attribute /* powerBlock.cooler.T_CO2_des[8] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS535(sysData);
}

void getIterationVarsNLS535(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[332] /* powerBlock.cooler.T_CO2_des[8] PARAM */;
}


/* inner equations */

void residualFunc531(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,531};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[331] /* powerBlock.cooler.T_CO2_des[7] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[400] /* powerBlock.cooler.state_des[7].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[331] /* powerBlock.cooler.T_CO2_des[7] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS531(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS531(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.cooler.T_CO2_des[7] */
  sysData->nominal[i] = data->modelData->realParameterData[331].attribute /* powerBlock.cooler.T_CO2_des[7] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[331].attribute /* powerBlock.cooler.T_CO2_des[7] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[331].attribute /* powerBlock.cooler.T_CO2_des[7] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS531(sysData);
}

void getIterationVarsNLS531(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[331] /* powerBlock.cooler.T_CO2_des[7] PARAM */;
}


/* inner equations */

void residualFunc527(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,527};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[330] /* powerBlock.cooler.T_CO2_des[6] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[399] /* powerBlock.cooler.state_des[6].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[330] /* powerBlock.cooler.T_CO2_des[6] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS527(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS527(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.cooler.T_CO2_des[6] */
  sysData->nominal[i] = data->modelData->realParameterData[330].attribute /* powerBlock.cooler.T_CO2_des[6] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[330].attribute /* powerBlock.cooler.T_CO2_des[6] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[330].attribute /* powerBlock.cooler.T_CO2_des[6] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS527(sysData);
}

void getIterationVarsNLS527(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[330] /* powerBlock.cooler.T_CO2_des[6] PARAM */;
}


/* inner equations */

void residualFunc523(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,523};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[329] /* powerBlock.cooler.T_CO2_des[5] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[398] /* powerBlock.cooler.state_des[5].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[329] /* powerBlock.cooler.T_CO2_des[5] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS523(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS523(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.cooler.T_CO2_des[5] */
  sysData->nominal[i] = data->modelData->realParameterData[329].attribute /* powerBlock.cooler.T_CO2_des[5] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[329].attribute /* powerBlock.cooler.T_CO2_des[5] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[329].attribute /* powerBlock.cooler.T_CO2_des[5] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS523(sysData);
}

void getIterationVarsNLS523(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[329] /* powerBlock.cooler.T_CO2_des[5] PARAM */;
}


/* inner equations */

void residualFunc519(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,519};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[328] /* powerBlock.cooler.T_CO2_des[4] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[397] /* powerBlock.cooler.state_des[4].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[328] /* powerBlock.cooler.T_CO2_des[4] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS519(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS519(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.cooler.T_CO2_des[4] */
  sysData->nominal[i] = data->modelData->realParameterData[328].attribute /* powerBlock.cooler.T_CO2_des[4] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[328].attribute /* powerBlock.cooler.T_CO2_des[4] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[328].attribute /* powerBlock.cooler.T_CO2_des[4] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS519(sysData);
}

void getIterationVarsNLS519(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[328] /* powerBlock.cooler.T_CO2_des[4] PARAM */;
}


/* inner equations */

void residualFunc515(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,515};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[327] /* powerBlock.cooler.T_CO2_des[3] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[396] /* powerBlock.cooler.state_des[3].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[327] /* powerBlock.cooler.T_CO2_des[3] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS515(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS515(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.cooler.T_CO2_des[3] */
  sysData->nominal[i] = data->modelData->realParameterData[327].attribute /* powerBlock.cooler.T_CO2_des[3] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[327].attribute /* powerBlock.cooler.T_CO2_des[3] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[327].attribute /* powerBlock.cooler.T_CO2_des[3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS515(sysData);
}

void getIterationVarsNLS515(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[327] /* powerBlock.cooler.T_CO2_des[3] PARAM */;
}


/* inner equations */

void residualFunc511(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,511};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[326] /* powerBlock.cooler.T_CO2_des[2] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[395] /* powerBlock.cooler.state_des[2].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[326] /* powerBlock.cooler.T_CO2_des[2] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS511(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS511(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.cooler.T_CO2_des[2] */
  sysData->nominal[i] = data->modelData->realParameterData[326].attribute /* powerBlock.cooler.T_CO2_des[2] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[326].attribute /* powerBlock.cooler.T_CO2_des[2] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[326].attribute /* powerBlock.cooler.T_CO2_des[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS511(sysData);
}

void getIterationVarsNLS511(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[326] /* powerBlock.cooler.T_CO2_des[2] PARAM */;
}


/* inner equations */

void residualFunc479(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,479};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[325] /* powerBlock.cooler.T_CO2_des[1] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[394] /* powerBlock.cooler.state_des[1].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[392] /* powerBlock.cooler.p_in_des PARAM */, data->simulationInfo->realParameter[325] /* powerBlock.cooler.T_CO2_des[1] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS479(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS479(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.cooler.T_CO2_des[1] */
  sysData->nominal[i] = data->modelData->realParameterData[325].attribute /* powerBlock.cooler.T_CO2_des[1] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[325].attribute /* powerBlock.cooler.T_CO2_des[1] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[325].attribute /* powerBlock.cooler.T_CO2_des[1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS479(sysData);
}

void getIterationVarsNLS479(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[325] /* powerBlock.cooler.T_CO2_des[1] PARAM */;
}


/* inner equations */

void residualFunc473(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,473};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[435] /* powerBlock.exchanger.T_CO2_des[2] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[508] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[435] /* powerBlock.exchanger.T_CO2_des[2] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS473(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS473(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_CO2_des[2] */
  sysData->nominal[i] = data->modelData->realParameterData[435].attribute /* powerBlock.exchanger.T_CO2_des[2] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[435].attribute /* powerBlock.exchanger.T_CO2_des[2] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[435].attribute /* powerBlock.exchanger.T_CO2_des[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS473(sysData);
}

void getIterationVarsNLS473(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[435] /* powerBlock.exchanger.T_CO2_des[2] PARAM */;
}


/* inner equations */

void residualFunc470(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,470};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[436] /* powerBlock.exchanger.T_CO2_des[3] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[509] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[436] /* powerBlock.exchanger.T_CO2_des[3] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS470(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS470(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_CO2_des[3] */
  sysData->nominal[i] = data->modelData->realParameterData[436].attribute /* powerBlock.exchanger.T_CO2_des[3] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[436].attribute /* powerBlock.exchanger.T_CO2_des[3] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[436].attribute /* powerBlock.exchanger.T_CO2_des[3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS470(sysData);
}

void getIterationVarsNLS470(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[436] /* powerBlock.exchanger.T_CO2_des[3] PARAM */;
}


/* inner equations */

void residualFunc467(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,467};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[437] /* powerBlock.exchanger.T_CO2_des[4] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[437] /* powerBlock.exchanger.T_CO2_des[4] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS467(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS467(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_CO2_des[4] */
  sysData->nominal[i] = data->modelData->realParameterData[437].attribute /* powerBlock.exchanger.T_CO2_des[4] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[437].attribute /* powerBlock.exchanger.T_CO2_des[4] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[437].attribute /* powerBlock.exchanger.T_CO2_des[4] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS467(sysData);
}

void getIterationVarsNLS467(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[437] /* powerBlock.exchanger.T_CO2_des[4] PARAM */;
}


/* inner equations */

void residualFunc464(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,464};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[438] /* powerBlock.exchanger.T_CO2_des[5] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[438] /* powerBlock.exchanger.T_CO2_des[5] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS464(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS464(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_CO2_des[5] */
  sysData->nominal[i] = data->modelData->realParameterData[438].attribute /* powerBlock.exchanger.T_CO2_des[5] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[438].attribute /* powerBlock.exchanger.T_CO2_des[5] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[438].attribute /* powerBlock.exchanger.T_CO2_des[5] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS464(sysData);
}

void getIterationVarsNLS464(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[438] /* powerBlock.exchanger.T_CO2_des[5] PARAM */;
}


/* inner equations */

void residualFunc461(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,461};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[439] /* powerBlock.exchanger.T_CO2_des[6] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[439] /* powerBlock.exchanger.T_CO2_des[6] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS461(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS461(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_CO2_des[6] */
  sysData->nominal[i] = data->modelData->realParameterData[439].attribute /* powerBlock.exchanger.T_CO2_des[6] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[439].attribute /* powerBlock.exchanger.T_CO2_des[6] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[439].attribute /* powerBlock.exchanger.T_CO2_des[6] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS461(sysData);
}

void getIterationVarsNLS461(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[439] /* powerBlock.exchanger.T_CO2_des[6] PARAM */;
}


/* inner equations */

void residualFunc458(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,458};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[440] /* powerBlock.exchanger.T_CO2_des[7] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[440] /* powerBlock.exchanger.T_CO2_des[7] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS458(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS458(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_CO2_des[7] */
  sysData->nominal[i] = data->modelData->realParameterData[440].attribute /* powerBlock.exchanger.T_CO2_des[7] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[440].attribute /* powerBlock.exchanger.T_CO2_des[7] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[440].attribute /* powerBlock.exchanger.T_CO2_des[7] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS458(sysData);
}

void getIterationVarsNLS458(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[440] /* powerBlock.exchanger.T_CO2_des[7] PARAM */;
}


/* inner equations */

void residualFunc455(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,455};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[441] /* powerBlock.exchanger.T_CO2_des[8] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[441] /* powerBlock.exchanger.T_CO2_des[8] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS455(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS455(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_CO2_des[8] */
  sysData->nominal[i] = data->modelData->realParameterData[441].attribute /* powerBlock.exchanger.T_CO2_des[8] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[441].attribute /* powerBlock.exchanger.T_CO2_des[8] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[441].attribute /* powerBlock.exchanger.T_CO2_des[8] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS455(sysData);
}

void getIterationVarsNLS455(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[441] /* powerBlock.exchanger.T_CO2_des[8] PARAM */;
}


/* inner equations */

void residualFunc452(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,452};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[442] /* powerBlock.exchanger.T_CO2_des[9] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[442] /* powerBlock.exchanger.T_CO2_des[9] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS452(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS452(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_CO2_des[9] */
  sysData->nominal[i] = data->modelData->realParameterData[442].attribute /* powerBlock.exchanger.T_CO2_des[9] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[442].attribute /* powerBlock.exchanger.T_CO2_des[9] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[442].attribute /* powerBlock.exchanger.T_CO2_des[9] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS452(sysData);
}

void getIterationVarsNLS452(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[442] /* powerBlock.exchanger.T_CO2_des[9] PARAM */;
}


/* inner equations */

void residualFunc449(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,449};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[443] /* powerBlock.exchanger.T_CO2_des[10] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[443] /* powerBlock.exchanger.T_CO2_des[10] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS449(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS449(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_CO2_des[10] */
  sysData->nominal[i] = data->modelData->realParameterData[443].attribute /* powerBlock.exchanger.T_CO2_des[10] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[443].attribute /* powerBlock.exchanger.T_CO2_des[10] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[443].attribute /* powerBlock.exchanger.T_CO2_des[10] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS449(sysData);
}

void getIterationVarsNLS449(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[443] /* powerBlock.exchanger.T_CO2_des[10] PARAM */;
}


/* inner equations */

void residualFunc446(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,446};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[444] /* powerBlock.exchanger.T_CO2_des[11] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[444] /* powerBlock.exchanger.T_CO2_des[11] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS446(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS446(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_CO2_des[11] */
  sysData->nominal[i] = data->modelData->realParameterData[444].attribute /* powerBlock.exchanger.T_CO2_des[11] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[444].attribute /* powerBlock.exchanger.T_CO2_des[11] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[444].attribute /* powerBlock.exchanger.T_CO2_des[11] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS446(sysData);
}

void getIterationVarsNLS446(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[444] /* powerBlock.exchanger.T_CO2_des[11] PARAM */;
}


/* inner equations */

void residualFunc443(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,443};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[445] /* powerBlock.exchanger.T_CO2_des[12] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[445] /* powerBlock.exchanger.T_CO2_des[12] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS443(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS443(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_CO2_des[12] */
  sysData->nominal[i] = data->modelData->realParameterData[445].attribute /* powerBlock.exchanger.T_CO2_des[12] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[445].attribute /* powerBlock.exchanger.T_CO2_des[12] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[445].attribute /* powerBlock.exchanger.T_CO2_des[12] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS443(sysData);
}

void getIterationVarsNLS443(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[445] /* powerBlock.exchanger.T_CO2_des[12] PARAM */;
}


/* inner equations */

void residualFunc440(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,440};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[446] /* powerBlock.exchanger.T_CO2_des[13] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[446] /* powerBlock.exchanger.T_CO2_des[13] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS440(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS440(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_CO2_des[13] */
  sysData->nominal[i] = data->modelData->realParameterData[446].attribute /* powerBlock.exchanger.T_CO2_des[13] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[446].attribute /* powerBlock.exchanger.T_CO2_des[13] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[446].attribute /* powerBlock.exchanger.T_CO2_des[13] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS440(sysData);
}

void getIterationVarsNLS440(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[446] /* powerBlock.exchanger.T_CO2_des[13] PARAM */;
}


/* inner equations */

void residualFunc437(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,437};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[447] /* powerBlock.exchanger.T_CO2_des[14] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[447] /* powerBlock.exchanger.T_CO2_des[14] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS437(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS437(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_CO2_des[14] */
  sysData->nominal[i] = data->modelData->realParameterData[447].attribute /* powerBlock.exchanger.T_CO2_des[14] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[447].attribute /* powerBlock.exchanger.T_CO2_des[14] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[447].attribute /* powerBlock.exchanger.T_CO2_des[14] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS437(sysData);
}

void getIterationVarsNLS437(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[447] /* powerBlock.exchanger.T_CO2_des[14] PARAM */;
}


/* inner equations */

void residualFunc434(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,434};
  int i;
  /* iteration variables */
  for (i=0; i<14; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<14; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */ = xloc[0];
  data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */ = xloc[1];
  data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */ = xloc[2];
  data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */ = xloc[3];
  data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */ = xloc[4];
  data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */ = xloc[5];
  data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */ = xloc[6];
  data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */ = xloc[7];
  data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */ = xloc[8];
  data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */ = xloc[9];
  data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */ = xloc[10];
  data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */ = xloc[11];
  data->simulationInfo->realParameter[509] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */ = xloc[12];
  data->simulationInfo->realParameter[508] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */ = xloc[13];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[508] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */ - data->simulationInfo->realParameter[507] /* powerBlock.exchanger.state_CO2_des[1].h PARAM */) - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;

  res[1] = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[521] /* powerBlock.exchanger.state_CO2_des[15].h PARAM */ - data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */) - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;

  res[2] = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */ - data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */) - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;

  res[3] = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */ - data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */) - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;

  res[4] = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */ - data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */) - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;

  res[5] = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */ - data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */) - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;

  res[6] = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */ - data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */) - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;

  res[7] = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */ - data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */) - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;

  res[8] = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */ - data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */) - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;

  res[9] = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */ - data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */) - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;

  res[10] = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */ - data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */) - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;

  res[11] = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */ - data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */) - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;

  res[12] = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */ - data->simulationInfo->realParameter[509] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */) - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;

  res[13] = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */ - data->simulationInfo->realParameter[508] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */) - data->simulationInfo->realParameter[433] /* powerBlock.exchanger.Q_HX_des PARAM */;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS434(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+14] = {0,14,2,2,2,2,2,2,2,2,2,2,2,2,2};
  const int rowIndex[40] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,0,13};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((14+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(40*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 40;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(14*sizeof(int));
  inSysData->sparsePattern->maxColors = 3;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (14+1)*sizeof(int));
  
  for(i=2;i<14+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 40*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[2] = 1;
  inSysData->sparsePattern->colorCols[4] = 1;
  inSysData->sparsePattern->colorCols[6] = 1;
  inSysData->sparsePattern->colorCols[8] = 1;
  inSysData->sparsePattern->colorCols[10] = 1;
  inSysData->sparsePattern->colorCols[12] = 1;
  inSysData->sparsePattern->colorCols[1] = 2;
  inSysData->sparsePattern->colorCols[3] = 2;
  inSysData->sparsePattern->colorCols[5] = 2;
  inSysData->sparsePattern->colorCols[7] = 2;
  inSysData->sparsePattern->colorCols[9] = 2;
  inSysData->sparsePattern->colorCols[11] = 2;
  inSysData->sparsePattern->colorCols[13] = 2;
  inSysData->sparsePattern->colorCols[0] = 3;
}
void initializeStaticDataNLS434(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.ratio_m_des */
  sysData->nominal[i] = data->modelData->realParameterData[506].attribute /* powerBlock.exchanger.ratio_m_des */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[506].attribute /* powerBlock.exchanger.ratio_m_des */.min;
  sysData->max[i++]   = data->modelData->realParameterData[506].attribute /* powerBlock.exchanger.ratio_m_des */.max;
  /* static nls data for powerBlock.exchanger.state_CO2_des[14].h */
  sysData->nominal[i] = data->modelData->realParameterData[520].attribute /* powerBlock.exchanger.state_CO2_des[14].h */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[520].attribute /* powerBlock.exchanger.state_CO2_des[14].h */.min;
  sysData->max[i++]   = data->modelData->realParameterData[520].attribute /* powerBlock.exchanger.state_CO2_des[14].h */.max;
  /* static nls data for powerBlock.exchanger.state_CO2_des[13].h */
  sysData->nominal[i] = data->modelData->realParameterData[519].attribute /* powerBlock.exchanger.state_CO2_des[13].h */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[519].attribute /* powerBlock.exchanger.state_CO2_des[13].h */.min;
  sysData->max[i++]   = data->modelData->realParameterData[519].attribute /* powerBlock.exchanger.state_CO2_des[13].h */.max;
  /* static nls data for powerBlock.exchanger.state_CO2_des[12].h */
  sysData->nominal[i] = data->modelData->realParameterData[518].attribute /* powerBlock.exchanger.state_CO2_des[12].h */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[518].attribute /* powerBlock.exchanger.state_CO2_des[12].h */.min;
  sysData->max[i++]   = data->modelData->realParameterData[518].attribute /* powerBlock.exchanger.state_CO2_des[12].h */.max;
  /* static nls data for powerBlock.exchanger.state_CO2_des[11].h */
  sysData->nominal[i] = data->modelData->realParameterData[517].attribute /* powerBlock.exchanger.state_CO2_des[11].h */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[517].attribute /* powerBlock.exchanger.state_CO2_des[11].h */.min;
  sysData->max[i++]   = data->modelData->realParameterData[517].attribute /* powerBlock.exchanger.state_CO2_des[11].h */.max;
  /* static nls data for powerBlock.exchanger.state_CO2_des[10].h */
  sysData->nominal[i] = data->modelData->realParameterData[516].attribute /* powerBlock.exchanger.state_CO2_des[10].h */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[516].attribute /* powerBlock.exchanger.state_CO2_des[10].h */.min;
  sysData->max[i++]   = data->modelData->realParameterData[516].attribute /* powerBlock.exchanger.state_CO2_des[10].h */.max;
  /* static nls data for powerBlock.exchanger.state_CO2_des[9].h */
  sysData->nominal[i] = data->modelData->realParameterData[515].attribute /* powerBlock.exchanger.state_CO2_des[9].h */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[515].attribute /* powerBlock.exchanger.state_CO2_des[9].h */.min;
  sysData->max[i++]   = data->modelData->realParameterData[515].attribute /* powerBlock.exchanger.state_CO2_des[9].h */.max;
  /* static nls data for powerBlock.exchanger.state_CO2_des[8].h */
  sysData->nominal[i] = data->modelData->realParameterData[514].attribute /* powerBlock.exchanger.state_CO2_des[8].h */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[514].attribute /* powerBlock.exchanger.state_CO2_des[8].h */.min;
  sysData->max[i++]   = data->modelData->realParameterData[514].attribute /* powerBlock.exchanger.state_CO2_des[8].h */.max;
  /* static nls data for powerBlock.exchanger.state_CO2_des[7].h */
  sysData->nominal[i] = data->modelData->realParameterData[513].attribute /* powerBlock.exchanger.state_CO2_des[7].h */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[513].attribute /* powerBlock.exchanger.state_CO2_des[7].h */.min;
  sysData->max[i++]   = data->modelData->realParameterData[513].attribute /* powerBlock.exchanger.state_CO2_des[7].h */.max;
  /* static nls data for powerBlock.exchanger.state_CO2_des[6].h */
  sysData->nominal[i] = data->modelData->realParameterData[512].attribute /* powerBlock.exchanger.state_CO2_des[6].h */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[512].attribute /* powerBlock.exchanger.state_CO2_des[6].h */.min;
  sysData->max[i++]   = data->modelData->realParameterData[512].attribute /* powerBlock.exchanger.state_CO2_des[6].h */.max;
  /* static nls data for powerBlock.exchanger.state_CO2_des[5].h */
  sysData->nominal[i] = data->modelData->realParameterData[511].attribute /* powerBlock.exchanger.state_CO2_des[5].h */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[511].attribute /* powerBlock.exchanger.state_CO2_des[5].h */.min;
  sysData->max[i++]   = data->modelData->realParameterData[511].attribute /* powerBlock.exchanger.state_CO2_des[5].h */.max;
  /* static nls data for powerBlock.exchanger.state_CO2_des[4].h */
  sysData->nominal[i] = data->modelData->realParameterData[510].attribute /* powerBlock.exchanger.state_CO2_des[4].h */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[510].attribute /* powerBlock.exchanger.state_CO2_des[4].h */.min;
  sysData->max[i++]   = data->modelData->realParameterData[510].attribute /* powerBlock.exchanger.state_CO2_des[4].h */.max;
  /* static nls data for powerBlock.exchanger.state_CO2_des[3].h */
  sysData->nominal[i] = data->modelData->realParameterData[509].attribute /* powerBlock.exchanger.state_CO2_des[3].h */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[509].attribute /* powerBlock.exchanger.state_CO2_des[3].h */.min;
  sysData->max[i++]   = data->modelData->realParameterData[509].attribute /* powerBlock.exchanger.state_CO2_des[3].h */.max;
  /* static nls data for powerBlock.exchanger.state_CO2_des[2].h */
  sysData->nominal[i] = data->modelData->realParameterData[508].attribute /* powerBlock.exchanger.state_CO2_des[2].h */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[508].attribute /* powerBlock.exchanger.state_CO2_des[2].h */.min;
  sysData->max[i++]   = data->modelData->realParameterData[508].attribute /* powerBlock.exchanger.state_CO2_des[2].h */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS434(sysData);
}

void getIterationVarsNLS434(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */;
  array[1] = data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */;
  array[2] = data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */;
  array[3] = data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */;
  array[4] = data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */;
  array[5] = data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */;
  array[6] = data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */;
  array[7] = data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */;
  array[8] = data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */;
  array[9] = data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */;
  array[10] = data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */;
  array[11] = data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */;
  array[12] = data->simulationInfo->realParameter[509] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */;
  array[13] = data->simulationInfo->realParameter[508] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */;
}


/* inner equations */

void residualFunc405(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,405};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[434] /* powerBlock.exchanger.T_CO2_des[1] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[507] /* powerBlock.exchanger.state_CO2_des[1].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[502] /* powerBlock.exchanger.p_in_CO2_des PARAM */, data->simulationInfo->realParameter[434] /* powerBlock.exchanger.T_CO2_des[1] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS405(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS405(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_CO2_des[1] */
  sysData->nominal[i] = data->modelData->realParameterData[434].attribute /* powerBlock.exchanger.T_CO2_des[1] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[434].attribute /* powerBlock.exchanger.T_CO2_des[1] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[434].attribute /* powerBlock.exchanger.T_CO2_des[1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS405(sysData);
}

void getIterationVarsNLS405(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[434] /* powerBlock.exchanger.T_CO2_des[1] PARAM */;
}


/* inner equations */

/*
equation index: 242
type: SIMPLE_ASSIGN
powerBlock._reCompressor._state_isen_des._h = SolarTherm.Media.CO2.CO2_utilities.h_p_s(powerBlock.reCompressor.p_out_des, SolarTherm.Media.CO2.CO2_utilities.s_p_h(powerBlock.reCompressor.state_in_des.p, powerBlock.reCompressor.state_in_des.h, Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Entropy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)), tableIDh_p_s)
*/
void sCO2PBRig_eqFunction_242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,242};
  static const MMC_DEFSTRINGLIT(tmp0,7,"Entropy");
  static const MMC_DEFSTRINGLIT(tmp1,73,"/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt");
  base_array_t tmp2;
  simple_alloc_1d_base_array(&tmp2, 0, NULL);
  data->simulationInfo->realParameter[636] /* powerBlock.reCompressor.state_isen_des.h PARAM */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__s(threadData, data->simulationInfo->realParameter[631] /* powerBlock.reCompressor.p_out_des PARAM */, omc_SolarTherm_Media_CO2_CO2__utilities_s__p__h(threadData, data->simulationInfo->realParameter[635] /* powerBlock.reCompressor.state_in_des.p PARAM */, data->simulationInfo->realParameter[634] /* powerBlock.reCompressor.state_in_des.h PARAM */, omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, MMC_REFSTRINGLIT(tmp0), MMC_REFSTRINGLIT(tmp1), tmp2, 1)), data->simulationInfo->extObjs[39]);
  TRACE_POP
}
/*
equation index: 243
type: SIMPLE_ASSIGN
powerBlock._reCompressor._h_out_des = powerBlock.reCompressor.state_in_des.h + (powerBlock.reCompressor.state_isen_des.h - powerBlock.reCompressor.state_in_des.h) / powerBlock.reCompressor.eta_design
*/
void sCO2PBRig_eqFunction_243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,243};
  data->simulationInfo->realParameter[627] /* powerBlock.reCompressor.h_out_des PARAM */ = data->simulationInfo->realParameter[634] /* powerBlock.reCompressor.state_in_des.h PARAM */ + DIVISION_SIM(data->simulationInfo->realParameter[636] /* powerBlock.reCompressor.state_isen_des.h PARAM */ - data->simulationInfo->realParameter[634] /* powerBlock.reCompressor.state_in_des.h PARAM */,data->simulationInfo->realParameter[625] /* powerBlock.reCompressor.eta_design PARAM */,"powerBlock.reCompressor.eta_design",equationIndexes);
  TRACE_POP
}
/*
equation index: 244
type: SIMPLE_ASSIGN
powerBlock._reCompressor._h_in_des = powerBlock.reCompressor.state_in_des.h
*/
void sCO2PBRig_eqFunction_244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,244};
  data->simulationInfo->realParameter[626] /* powerBlock.reCompressor.h_in_des PARAM */ = data->simulationInfo->realParameter[634] /* powerBlock.reCompressor.state_in_des.h PARAM */;
  TRACE_POP
}
/*
equation index: 245
type: SIMPLE_ASSIGN
powerBlock._LTR._h_out_turb_des = powerBlock.reCompressor.h_in_des
*/
void sCO2PBRig_eqFunction_245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,245};
  data->simulationInfo->realParameter[237] /* powerBlock.LTR.h_out_turb_des PARAM */ = data->simulationInfo->realParameter[626] /* powerBlock.reCompressor.h_in_des PARAM */;
  TRACE_POP
}
/*
equation index: 246
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[1]._h = powerBlock.LTR.h_out_turb_des
*/
void sCO2PBRig_eqFunction_246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,246};
  data->simulationInfo->realParameter[276] /* powerBlock.LTR.state_turb_des[1].h PARAM */ = data->simulationInfo->realParameter[237] /* powerBlock.LTR.h_out_turb_des PARAM */;
  TRACE_POP
}
/*
equation index: 247
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[15]._h = SolarTherm.Media.CO2.CO2_utilities.h_p_T(powerBlock.HTR.p_in_comp_des, powerBlock.HTR.T_comp_des[15], tableIDh_p_T)
*/
void sCO2PBRig_eqFunction_247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,247};
  data->simulationInfo->realParameter[125] /* powerBlock.HTR.state_comp_des[15].h PARAM */ = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[53] /* powerBlock.HTR.T_comp_des[15] PARAM */, data->simulationInfo->extObjs[38]);
  TRACE_POP
}
/*
equation index: 248
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT_des[15] = powerBlock.HTR.T_turb_des[15] - powerBlock.HTR.T_comp_des[15]
*/
void sCO2PBRig_eqFunction_248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,248};
  data->simulationInfo->realParameter[98] /* powerBlock.HTR.deltaT_des[15] PARAM */ = data->simulationInfo->realParameter[68] /* powerBlock.HTR.T_turb_des[15] PARAM */ - data->simulationInfo->realParameter[53] /* powerBlock.HTR.T_comp_des[15] PARAM */;
  TRACE_POP
}
/*
equation index: 249
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[2]._h = powerBlock.LTR.Q_dis_des / powerBlock.LTR.ratio_m_des + powerBlock.LTR.state_comp_des[1].h
*/
void sCO2PBRig_eqFunction_249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,249};
  data->simulationInfo->realParameter[247] /* powerBlock.LTR.state_comp_des[2].h PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[245] /* powerBlock.LTR.ratio_m_des PARAM */,"powerBlock.LTR.ratio_m_des",equationIndexes) + data->simulationInfo->realParameter[246] /* powerBlock.LTR.state_comp_des[1].h PARAM */;
  TRACE_POP
}
/*
equation index: 250
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[3]._h = powerBlock.LTR.Q_dis_des / powerBlock.LTR.ratio_m_des + powerBlock.LTR.state_comp_des[2].h
*/
void sCO2PBRig_eqFunction_250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,250};
  data->simulationInfo->realParameter[248] /* powerBlock.LTR.state_comp_des[3].h PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[245] /* powerBlock.LTR.ratio_m_des PARAM */,"powerBlock.LTR.ratio_m_des",equationIndexes) + data->simulationInfo->realParameter[247] /* powerBlock.LTR.state_comp_des[2].h PARAM */;
  TRACE_POP
}
/*
equation index: 251
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[4]._h = powerBlock.LTR.Q_dis_des / powerBlock.LTR.ratio_m_des + powerBlock.LTR.state_comp_des[3].h
*/
void sCO2PBRig_eqFunction_251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,251};
  data->simulationInfo->realParameter[249] /* powerBlock.LTR.state_comp_des[4].h PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[245] /* powerBlock.LTR.ratio_m_des PARAM */,"powerBlock.LTR.ratio_m_des",equationIndexes) + data->simulationInfo->realParameter[248] /* powerBlock.LTR.state_comp_des[3].h PARAM */;
  TRACE_POP
}
/*
equation index: 252
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[5]._h = powerBlock.LTR.Q_dis_des / powerBlock.LTR.ratio_m_des + powerBlock.LTR.state_comp_des[4].h
*/
void sCO2PBRig_eqFunction_252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,252};
  data->simulationInfo->realParameter[250] /* powerBlock.LTR.state_comp_des[5].h PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[245] /* powerBlock.LTR.ratio_m_des PARAM */,"powerBlock.LTR.ratio_m_des",equationIndexes) + data->simulationInfo->realParameter[249] /* powerBlock.LTR.state_comp_des[4].h PARAM */;
  TRACE_POP
}
/*
equation index: 253
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[6]._h = powerBlock.LTR.Q_dis_des / powerBlock.LTR.ratio_m_des + powerBlock.LTR.state_comp_des[5].h
*/
void sCO2PBRig_eqFunction_253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,253};
  data->simulationInfo->realParameter[251] /* powerBlock.LTR.state_comp_des[6].h PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[245] /* powerBlock.LTR.ratio_m_des PARAM */,"powerBlock.LTR.ratio_m_des",equationIndexes) + data->simulationInfo->realParameter[250] /* powerBlock.LTR.state_comp_des[5].h PARAM */;
  TRACE_POP
}
/*
equation index: 254
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[7]._h = powerBlock.LTR.Q_dis_des / powerBlock.LTR.ratio_m_des + powerBlock.LTR.state_comp_des[6].h
*/
void sCO2PBRig_eqFunction_254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,254};
  data->simulationInfo->realParameter[252] /* powerBlock.LTR.state_comp_des[7].h PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[245] /* powerBlock.LTR.ratio_m_des PARAM */,"powerBlock.LTR.ratio_m_des",equationIndexes) + data->simulationInfo->realParameter[251] /* powerBlock.LTR.state_comp_des[6].h PARAM */;
  TRACE_POP
}
/*
equation index: 255
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[8]._h = powerBlock.LTR.Q_dis_des / powerBlock.LTR.ratio_m_des + powerBlock.LTR.state_comp_des[7].h
*/
void sCO2PBRig_eqFunction_255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,255};
  data->simulationInfo->realParameter[253] /* powerBlock.LTR.state_comp_des[8].h PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[245] /* powerBlock.LTR.ratio_m_des PARAM */,"powerBlock.LTR.ratio_m_des",equationIndexes) + data->simulationInfo->realParameter[252] /* powerBlock.LTR.state_comp_des[7].h PARAM */;
  TRACE_POP
}
/*
equation index: 256
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[9]._h = powerBlock.LTR.Q_dis_des / powerBlock.LTR.ratio_m_des + powerBlock.LTR.state_comp_des[8].h
*/
void sCO2PBRig_eqFunction_256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,256};
  data->simulationInfo->realParameter[254] /* powerBlock.LTR.state_comp_des[9].h PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[245] /* powerBlock.LTR.ratio_m_des PARAM */,"powerBlock.LTR.ratio_m_des",equationIndexes) + data->simulationInfo->realParameter[253] /* powerBlock.LTR.state_comp_des[8].h PARAM */;
  TRACE_POP
}
/*
equation index: 257
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[10]._h = powerBlock.LTR.Q_dis_des / powerBlock.LTR.ratio_m_des + powerBlock.LTR.state_comp_des[9].h
*/
void sCO2PBRig_eqFunction_257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,257};
  data->simulationInfo->realParameter[255] /* powerBlock.LTR.state_comp_des[10].h PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[245] /* powerBlock.LTR.ratio_m_des PARAM */,"powerBlock.LTR.ratio_m_des",equationIndexes) + data->simulationInfo->realParameter[254] /* powerBlock.LTR.state_comp_des[9].h PARAM */;
  TRACE_POP
}
/*
equation index: 258
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[11]._h = powerBlock.LTR.Q_dis_des / powerBlock.LTR.ratio_m_des + powerBlock.LTR.state_comp_des[10].h
*/
void sCO2PBRig_eqFunction_258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,258};
  data->simulationInfo->realParameter[256] /* powerBlock.LTR.state_comp_des[11].h PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[245] /* powerBlock.LTR.ratio_m_des PARAM */,"powerBlock.LTR.ratio_m_des",equationIndexes) + data->simulationInfo->realParameter[255] /* powerBlock.LTR.state_comp_des[10].h PARAM */;
  TRACE_POP
}
/*
equation index: 259
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[12]._h = powerBlock.LTR.Q_dis_des / powerBlock.LTR.ratio_m_des + powerBlock.LTR.state_comp_des[11].h
*/
void sCO2PBRig_eqFunction_259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,259};
  data->simulationInfo->realParameter[257] /* powerBlock.LTR.state_comp_des[12].h PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[245] /* powerBlock.LTR.ratio_m_des PARAM */,"powerBlock.LTR.ratio_m_des",equationIndexes) + data->simulationInfo->realParameter[256] /* powerBlock.LTR.state_comp_des[11].h PARAM */;
  TRACE_POP
}
/*
equation index: 260
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[13]._h = powerBlock.LTR.Q_dis_des / powerBlock.LTR.ratio_m_des + powerBlock.LTR.state_comp_des[12].h
*/
void sCO2PBRig_eqFunction_260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,260};
  data->simulationInfo->realParameter[258] /* powerBlock.LTR.state_comp_des[13].h PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[245] /* powerBlock.LTR.ratio_m_des PARAM */,"powerBlock.LTR.ratio_m_des",equationIndexes) + data->simulationInfo->realParameter[257] /* powerBlock.LTR.state_comp_des[12].h PARAM */;
  TRACE_POP
}
/*
equation index: 261
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[14]._h = powerBlock.LTR.Q_dis_des / powerBlock.LTR.ratio_m_des + powerBlock.LTR.state_comp_des[13].h
*/
void sCO2PBRig_eqFunction_261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,261};
  data->simulationInfo->realParameter[259] /* powerBlock.LTR.state_comp_des[14].h PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[245] /* powerBlock.LTR.ratio_m_des PARAM */,"powerBlock.LTR.ratio_m_des",equationIndexes) + data->simulationInfo->realParameter[258] /* powerBlock.LTR.state_comp_des[13].h PARAM */;
  TRACE_POP
}
/*
equation index: 262
type: SIMPLE_ASSIGN
powerBlock._LTR._state_comp_des[15]._h = powerBlock.LTR.Q_dis_des / powerBlock.LTR.ratio_m_des + powerBlock.LTR.state_comp_des[14].h
*/
void sCO2PBRig_eqFunction_262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,262};
  data->simulationInfo->realParameter[260] /* powerBlock.LTR.state_comp_des[15].h PARAM */ = DIVISION_SIM(data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[245] /* powerBlock.LTR.ratio_m_des PARAM */,"powerBlock.LTR.ratio_m_des",equationIndexes) + data->simulationInfo->realParameter[259] /* powerBlock.LTR.state_comp_des[14].h PARAM */;
  TRACE_POP
}
/*
equation index: 263
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[2]._h = powerBlock.LTR.state_turb_des[1].h + powerBlock.LTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,263};
  data->simulationInfo->realParameter[277] /* powerBlock.LTR.state_turb_des[2].h PARAM */ = data->simulationInfo->realParameter[276] /* powerBlock.LTR.state_turb_des[1].h PARAM */ + data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 264
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[3]._h = powerBlock.LTR.state_turb_des[2].h + powerBlock.LTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,264};
  data->simulationInfo->realParameter[278] /* powerBlock.LTR.state_turb_des[3].h PARAM */ = data->simulationInfo->realParameter[277] /* powerBlock.LTR.state_turb_des[2].h PARAM */ + data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 265
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[4]._h = powerBlock.LTR.state_turb_des[3].h + powerBlock.LTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,265};
  data->simulationInfo->realParameter[279] /* powerBlock.LTR.state_turb_des[4].h PARAM */ = data->simulationInfo->realParameter[278] /* powerBlock.LTR.state_turb_des[3].h PARAM */ + data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 266
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[5]._h = powerBlock.LTR.state_turb_des[4].h + powerBlock.LTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,266};
  data->simulationInfo->realParameter[280] /* powerBlock.LTR.state_turb_des[5].h PARAM */ = data->simulationInfo->realParameter[279] /* powerBlock.LTR.state_turb_des[4].h PARAM */ + data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 267
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[6]._h = powerBlock.LTR.state_turb_des[5].h + powerBlock.LTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,267};
  data->simulationInfo->realParameter[281] /* powerBlock.LTR.state_turb_des[6].h PARAM */ = data->simulationInfo->realParameter[280] /* powerBlock.LTR.state_turb_des[5].h PARAM */ + data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 268
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[7]._h = powerBlock.LTR.state_turb_des[6].h + powerBlock.LTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,268};
  data->simulationInfo->realParameter[282] /* powerBlock.LTR.state_turb_des[7].h PARAM */ = data->simulationInfo->realParameter[281] /* powerBlock.LTR.state_turb_des[6].h PARAM */ + data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 269
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[8]._h = powerBlock.LTR.state_turb_des[7].h + powerBlock.LTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,269};
  data->simulationInfo->realParameter[283] /* powerBlock.LTR.state_turb_des[8].h PARAM */ = data->simulationInfo->realParameter[282] /* powerBlock.LTR.state_turb_des[7].h PARAM */ + data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 270
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[9]._h = powerBlock.LTR.state_turb_des[8].h + powerBlock.LTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,270};
  data->simulationInfo->realParameter[284] /* powerBlock.LTR.state_turb_des[9].h PARAM */ = data->simulationInfo->realParameter[283] /* powerBlock.LTR.state_turb_des[8].h PARAM */ + data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 271
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[10]._h = powerBlock.LTR.state_turb_des[9].h + powerBlock.LTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,271};
  data->simulationInfo->realParameter[285] /* powerBlock.LTR.state_turb_des[10].h PARAM */ = data->simulationInfo->realParameter[284] /* powerBlock.LTR.state_turb_des[9].h PARAM */ + data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 272
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[11]._h = powerBlock.LTR.state_turb_des[10].h + powerBlock.LTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,272};
  data->simulationInfo->realParameter[286] /* powerBlock.LTR.state_turb_des[11].h PARAM */ = data->simulationInfo->realParameter[285] /* powerBlock.LTR.state_turb_des[10].h PARAM */ + data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 273
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[12]._h = powerBlock.LTR.state_turb_des[11].h + powerBlock.LTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,273};
  data->simulationInfo->realParameter[287] /* powerBlock.LTR.state_turb_des[12].h PARAM */ = data->simulationInfo->realParameter[286] /* powerBlock.LTR.state_turb_des[11].h PARAM */ + data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 274
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[13]._h = powerBlock.LTR.state_turb_des[12].h + powerBlock.LTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,274};
  data->simulationInfo->realParameter[288] /* powerBlock.LTR.state_turb_des[13].h PARAM */ = data->simulationInfo->realParameter[287] /* powerBlock.LTR.state_turb_des[12].h PARAM */ + data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 275
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[14]._h = powerBlock.LTR.state_turb_des[13].h + powerBlock.LTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,275};
  data->simulationInfo->realParameter[289] /* powerBlock.LTR.state_turb_des[14].h PARAM */ = data->simulationInfo->realParameter[288] /* powerBlock.LTR.state_turb_des[13].h PARAM */ + data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 276
type: SIMPLE_ASSIGN
powerBlock._LTR._state_turb_des[15]._h = powerBlock.LTR.state_turb_des[14].h + powerBlock.LTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,276};
  data->simulationInfo->realParameter[290] /* powerBlock.LTR.state_turb_des[15].h PARAM */ = data->simulationInfo->realParameter[289] /* powerBlock.LTR.state_turb_des[14].h PARAM */ + data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 277
type: SIMPLE_ASSIGN
powerBlock._LTR._h_out_comp_des = powerBlock.LTR.state_comp_des[15].h
*/
void sCO2PBRig_eqFunction_277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,277};
  data->simulationInfo->realParameter[236] /* powerBlock.LTR.h_out_comp_des PARAM */ = data->simulationInfo->realParameter[260] /* powerBlock.LTR.state_comp_des[15].h PARAM */;
  TRACE_POP
}
/*
equation index: 278
type: SIMPLE_ASSIGN
powerBlock._HTR._h_in_comp_des = powerBlock.ratio_m_des * powerBlock.LTR.h_out_comp_des + (1.0 - powerBlock.ratio_m_des) * powerBlock.reCompressor.h_out_des
*/
void sCO2PBRig_eqFunction_278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,278};
  data->simulationInfo->realParameter[99] /* powerBlock.HTR.h_in_comp_des PARAM */ = (data->simulationInfo->realParameter[617] /* powerBlock.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[236] /* powerBlock.LTR.h_out_comp_des PARAM */) + (1.0 - data->simulationInfo->realParameter[617] /* powerBlock.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[627] /* powerBlock.reCompressor.h_out_des PARAM */);
  TRACE_POP
}
/*
equation index: 279
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[1]._h = powerBlock.HTR.h_in_comp_des
*/
void sCO2PBRig_eqFunction_279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,279};
  data->simulationInfo->realParameter[111] /* powerBlock.HTR.state_comp_des[1].h PARAM */ = data->simulationInfo->realParameter[99] /* powerBlock.HTR.h_in_comp_des PARAM */;
  TRACE_POP
}
/*
equation index: 280
type: SIMPLE_ASSIGN
powerBlock._LTR._h_in_turb_des = powerBlock.LTR.state_turb_des[15].h
*/
void sCO2PBRig_eqFunction_280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,280};
  data->simulationInfo->realParameter[235] /* powerBlock.LTR.h_in_turb_des PARAM */ = data->simulationInfo->realParameter[290] /* powerBlock.LTR.state_turb_des[15].h PARAM */;
  TRACE_POP
}
/*
equation index: 281
type: SIMPLE_ASSIGN
powerBlock._HTR._h_out_turb_des = powerBlock.LTR.h_in_turb_des
*/
void sCO2PBRig_eqFunction_281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,281};
  data->simulationInfo->realParameter[102] /* powerBlock.HTR.h_out_turb_des PARAM */ = data->simulationInfo->realParameter[235] /* powerBlock.LTR.h_in_turb_des PARAM */;
  TRACE_POP
}
/*
equation index: 282
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[1]._h = powerBlock.HTR.h_out_turb_des
*/
void sCO2PBRig_eqFunction_282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,282};
  data->simulationInfo->realParameter[141] /* powerBlock.HTR.state_turb_des[1].h PARAM */ = data->simulationInfo->realParameter[102] /* powerBlock.HTR.h_out_turb_des PARAM */;
  TRACE_POP
}
/*
equation index: 283
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[14]._h = powerBlock.HTR.state_comp_des[15].h - powerBlock.HTR.Q_dis_des / powerBlock.HTR.ratio_m_des
*/
void sCO2PBRig_eqFunction_283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,283};
  data->simulationInfo->realParameter[124] /* powerBlock.HTR.state_comp_des[14].h PARAM */ = data->simulationInfo->realParameter[125] /* powerBlock.HTR.state_comp_des[15].h PARAM */ - (DIVISION_SIM(data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[110] /* powerBlock.HTR.ratio_m_des PARAM */,"powerBlock.HTR.ratio_m_des",equationIndexes));
  TRACE_POP
}
/*
equation index: 284
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[13]._h = powerBlock.HTR.state_comp_des[14].h - powerBlock.HTR.Q_dis_des / powerBlock.HTR.ratio_m_des
*/
void sCO2PBRig_eqFunction_284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,284};
  data->simulationInfo->realParameter[123] /* powerBlock.HTR.state_comp_des[13].h PARAM */ = data->simulationInfo->realParameter[124] /* powerBlock.HTR.state_comp_des[14].h PARAM */ - (DIVISION_SIM(data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[110] /* powerBlock.HTR.ratio_m_des PARAM */,"powerBlock.HTR.ratio_m_des",equationIndexes));
  TRACE_POP
}
/*
equation index: 285
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[12]._h = powerBlock.HTR.state_comp_des[13].h - powerBlock.HTR.Q_dis_des / powerBlock.HTR.ratio_m_des
*/
void sCO2PBRig_eqFunction_285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,285};
  data->simulationInfo->realParameter[122] /* powerBlock.HTR.state_comp_des[12].h PARAM */ = data->simulationInfo->realParameter[123] /* powerBlock.HTR.state_comp_des[13].h PARAM */ - (DIVISION_SIM(data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[110] /* powerBlock.HTR.ratio_m_des PARAM */,"powerBlock.HTR.ratio_m_des",equationIndexes));
  TRACE_POP
}
/*
equation index: 286
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[11]._h = powerBlock.HTR.state_comp_des[12].h - powerBlock.HTR.Q_dis_des / powerBlock.HTR.ratio_m_des
*/
void sCO2PBRig_eqFunction_286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,286};
  data->simulationInfo->realParameter[121] /* powerBlock.HTR.state_comp_des[11].h PARAM */ = data->simulationInfo->realParameter[122] /* powerBlock.HTR.state_comp_des[12].h PARAM */ - (DIVISION_SIM(data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[110] /* powerBlock.HTR.ratio_m_des PARAM */,"powerBlock.HTR.ratio_m_des",equationIndexes));
  TRACE_POP
}
/*
equation index: 287
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[10]._h = powerBlock.HTR.state_comp_des[11].h - powerBlock.HTR.Q_dis_des / powerBlock.HTR.ratio_m_des
*/
void sCO2PBRig_eqFunction_287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,287};
  data->simulationInfo->realParameter[120] /* powerBlock.HTR.state_comp_des[10].h PARAM */ = data->simulationInfo->realParameter[121] /* powerBlock.HTR.state_comp_des[11].h PARAM */ - (DIVISION_SIM(data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[110] /* powerBlock.HTR.ratio_m_des PARAM */,"powerBlock.HTR.ratio_m_des",equationIndexes));
  TRACE_POP
}
/*
equation index: 288
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[9]._h = powerBlock.HTR.state_comp_des[10].h - powerBlock.HTR.Q_dis_des / powerBlock.HTR.ratio_m_des
*/
void sCO2PBRig_eqFunction_288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,288};
  data->simulationInfo->realParameter[119] /* powerBlock.HTR.state_comp_des[9].h PARAM */ = data->simulationInfo->realParameter[120] /* powerBlock.HTR.state_comp_des[10].h PARAM */ - (DIVISION_SIM(data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[110] /* powerBlock.HTR.ratio_m_des PARAM */,"powerBlock.HTR.ratio_m_des",equationIndexes));
  TRACE_POP
}
/*
equation index: 289
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[8]._h = powerBlock.HTR.state_comp_des[9].h - powerBlock.HTR.Q_dis_des / powerBlock.HTR.ratio_m_des
*/
void sCO2PBRig_eqFunction_289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,289};
  data->simulationInfo->realParameter[118] /* powerBlock.HTR.state_comp_des[8].h PARAM */ = data->simulationInfo->realParameter[119] /* powerBlock.HTR.state_comp_des[9].h PARAM */ - (DIVISION_SIM(data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[110] /* powerBlock.HTR.ratio_m_des PARAM */,"powerBlock.HTR.ratio_m_des",equationIndexes));
  TRACE_POP
}
/*
equation index: 290
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[7]._h = powerBlock.HTR.state_comp_des[8].h - powerBlock.HTR.Q_dis_des / powerBlock.HTR.ratio_m_des
*/
void sCO2PBRig_eqFunction_290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,290};
  data->simulationInfo->realParameter[117] /* powerBlock.HTR.state_comp_des[7].h PARAM */ = data->simulationInfo->realParameter[118] /* powerBlock.HTR.state_comp_des[8].h PARAM */ - (DIVISION_SIM(data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[110] /* powerBlock.HTR.ratio_m_des PARAM */,"powerBlock.HTR.ratio_m_des",equationIndexes));
  TRACE_POP
}
/*
equation index: 291
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[6]._h = powerBlock.HTR.state_comp_des[7].h - powerBlock.HTR.Q_dis_des / powerBlock.HTR.ratio_m_des
*/
void sCO2PBRig_eqFunction_291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,291};
  data->simulationInfo->realParameter[116] /* powerBlock.HTR.state_comp_des[6].h PARAM */ = data->simulationInfo->realParameter[117] /* powerBlock.HTR.state_comp_des[7].h PARAM */ - (DIVISION_SIM(data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[110] /* powerBlock.HTR.ratio_m_des PARAM */,"powerBlock.HTR.ratio_m_des",equationIndexes));
  TRACE_POP
}
/*
equation index: 292
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[5]._h = powerBlock.HTR.state_comp_des[6].h - powerBlock.HTR.Q_dis_des / powerBlock.HTR.ratio_m_des
*/
void sCO2PBRig_eqFunction_292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,292};
  data->simulationInfo->realParameter[115] /* powerBlock.HTR.state_comp_des[5].h PARAM */ = data->simulationInfo->realParameter[116] /* powerBlock.HTR.state_comp_des[6].h PARAM */ - (DIVISION_SIM(data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[110] /* powerBlock.HTR.ratio_m_des PARAM */,"powerBlock.HTR.ratio_m_des",equationIndexes));
  TRACE_POP
}
/*
equation index: 293
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[4]._h = powerBlock.HTR.state_comp_des[5].h - powerBlock.HTR.Q_dis_des / powerBlock.HTR.ratio_m_des
*/
void sCO2PBRig_eqFunction_293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,293};
  data->simulationInfo->realParameter[114] /* powerBlock.HTR.state_comp_des[4].h PARAM */ = data->simulationInfo->realParameter[115] /* powerBlock.HTR.state_comp_des[5].h PARAM */ - (DIVISION_SIM(data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[110] /* powerBlock.HTR.ratio_m_des PARAM */,"powerBlock.HTR.ratio_m_des",equationIndexes));
  TRACE_POP
}
/*
equation index: 294
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[3]._h = powerBlock.HTR.state_comp_des[4].h - powerBlock.HTR.Q_dis_des / powerBlock.HTR.ratio_m_des
*/
void sCO2PBRig_eqFunction_294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,294};
  data->simulationInfo->realParameter[113] /* powerBlock.HTR.state_comp_des[3].h PARAM */ = data->simulationInfo->realParameter[114] /* powerBlock.HTR.state_comp_des[4].h PARAM */ - (DIVISION_SIM(data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[110] /* powerBlock.HTR.ratio_m_des PARAM */,"powerBlock.HTR.ratio_m_des",equationIndexes));
  TRACE_POP
}
/*
equation index: 295
type: SIMPLE_ASSIGN
powerBlock._HTR._state_comp_des[2]._h = powerBlock.HTR.state_comp_des[3].h - powerBlock.HTR.Q_dis_des / powerBlock.HTR.ratio_m_des
*/
void sCO2PBRig_eqFunction_295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,295};
  data->simulationInfo->realParameter[112] /* powerBlock.HTR.state_comp_des[2].h PARAM */ = data->simulationInfo->realParameter[113] /* powerBlock.HTR.state_comp_des[3].h PARAM */ - (DIVISION_SIM(data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */,data->simulationInfo->realParameter[110] /* powerBlock.HTR.ratio_m_des PARAM */,"powerBlock.HTR.ratio_m_des",equationIndexes));
  TRACE_POP
}
/*
equation index: 296
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[2]._h = powerBlock.HTR.state_turb_des[1].h + powerBlock.HTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,296};
  data->simulationInfo->realParameter[142] /* powerBlock.HTR.state_turb_des[2].h PARAM */ = data->simulationInfo->realParameter[141] /* powerBlock.HTR.state_turb_des[1].h PARAM */ + data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 297
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[3]._h = powerBlock.HTR.state_turb_des[2].h + powerBlock.HTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,297};
  data->simulationInfo->realParameter[143] /* powerBlock.HTR.state_turb_des[3].h PARAM */ = data->simulationInfo->realParameter[142] /* powerBlock.HTR.state_turb_des[2].h PARAM */ + data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 298
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[4]._h = powerBlock.HTR.state_turb_des[3].h + powerBlock.HTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,298};
  data->simulationInfo->realParameter[144] /* powerBlock.HTR.state_turb_des[4].h PARAM */ = data->simulationInfo->realParameter[143] /* powerBlock.HTR.state_turb_des[3].h PARAM */ + data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 299
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[5]._h = powerBlock.HTR.state_turb_des[4].h + powerBlock.HTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,299};
  data->simulationInfo->realParameter[145] /* powerBlock.HTR.state_turb_des[5].h PARAM */ = data->simulationInfo->realParameter[144] /* powerBlock.HTR.state_turb_des[4].h PARAM */ + data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 300
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[6]._h = powerBlock.HTR.state_turb_des[5].h + powerBlock.HTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,300};
  data->simulationInfo->realParameter[146] /* powerBlock.HTR.state_turb_des[6].h PARAM */ = data->simulationInfo->realParameter[145] /* powerBlock.HTR.state_turb_des[5].h PARAM */ + data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 301
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[7]._h = powerBlock.HTR.state_turb_des[6].h + powerBlock.HTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,301};
  data->simulationInfo->realParameter[147] /* powerBlock.HTR.state_turb_des[7].h PARAM */ = data->simulationInfo->realParameter[146] /* powerBlock.HTR.state_turb_des[6].h PARAM */ + data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 302
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[8]._h = powerBlock.HTR.state_turb_des[7].h + powerBlock.HTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,302};
  data->simulationInfo->realParameter[148] /* powerBlock.HTR.state_turb_des[8].h PARAM */ = data->simulationInfo->realParameter[147] /* powerBlock.HTR.state_turb_des[7].h PARAM */ + data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 303
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[9]._h = powerBlock.HTR.state_turb_des[8].h + powerBlock.HTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,303};
  data->simulationInfo->realParameter[149] /* powerBlock.HTR.state_turb_des[9].h PARAM */ = data->simulationInfo->realParameter[148] /* powerBlock.HTR.state_turb_des[8].h PARAM */ + data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 304
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[10]._h = powerBlock.HTR.state_turb_des[9].h + powerBlock.HTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,304};
  data->simulationInfo->realParameter[150] /* powerBlock.HTR.state_turb_des[10].h PARAM */ = data->simulationInfo->realParameter[149] /* powerBlock.HTR.state_turb_des[9].h PARAM */ + data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 305
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[11]._h = powerBlock.HTR.state_turb_des[10].h + powerBlock.HTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,305};
  data->simulationInfo->realParameter[151] /* powerBlock.HTR.state_turb_des[11].h PARAM */ = data->simulationInfo->realParameter[150] /* powerBlock.HTR.state_turb_des[10].h PARAM */ + data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 306
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[12]._h = powerBlock.HTR.state_turb_des[11].h + powerBlock.HTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,306};
  data->simulationInfo->realParameter[152] /* powerBlock.HTR.state_turb_des[12].h PARAM */ = data->simulationInfo->realParameter[151] /* powerBlock.HTR.state_turb_des[11].h PARAM */ + data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 307
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[13]._h = powerBlock.HTR.state_turb_des[12].h + powerBlock.HTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,307};
  data->simulationInfo->realParameter[153] /* powerBlock.HTR.state_turb_des[13].h PARAM */ = data->simulationInfo->realParameter[152] /* powerBlock.HTR.state_turb_des[12].h PARAM */ + data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 308
type: SIMPLE_ASSIGN
powerBlock._HTR._state_turb_des[14]._h = powerBlock.HTR.state_turb_des[13].h + powerBlock.HTR.Q_dis_des
*/
void sCO2PBRig_eqFunction_308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,308};
  data->simulationInfo->realParameter[154] /* powerBlock.HTR.state_turb_des[14].h PARAM */ = data->simulationInfo->realParameter[153] /* powerBlock.HTR.state_turb_des[13].h PARAM */ + data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;
  TRACE_POP
}
/*
equation index: 309
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT_des[1] = powerBlock.LTR.T_turb_des[1] - powerBlock.LTR.T_comp_des[1]
*/
void sCO2PBRig_eqFunction_309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,309};
  data->simulationInfo->realParameter[219] /* powerBlock.LTR.deltaT_des[1] PARAM */ = data->simulationInfo->realParameter[189] /* powerBlock.LTR.T_turb_des[1] PARAM */ - data->simulationInfo->realParameter[174] /* powerBlock.LTR.T_comp_des[1] PARAM */;
  TRACE_POP
}
/*
equation index: 310
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT_des[14] = powerBlock.HTR.T_turb_des[14] - powerBlock.HTR.T_comp_des[14]
*/
void sCO2PBRig_eqFunction_310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,310};
  data->simulationInfo->realParameter[97] /* powerBlock.HTR.deltaT_des[14] PARAM */ = data->simulationInfo->realParameter[67] /* powerBlock.HTR.T_turb_des[14] PARAM */ - data->simulationInfo->realParameter[52] /* powerBlock.HTR.T_comp_des[14] PARAM */;
  TRACE_POP
}
/*
equation index: 311
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT_des[13] = powerBlock.HTR.T_turb_des[13] - powerBlock.HTR.T_comp_des[13]
*/
void sCO2PBRig_eqFunction_311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,311};
  data->simulationInfo->realParameter[96] /* powerBlock.HTR.deltaT_des[13] PARAM */ = data->simulationInfo->realParameter[66] /* powerBlock.HTR.T_turb_des[13] PARAM */ - data->simulationInfo->realParameter[51] /* powerBlock.HTR.T_comp_des[13] PARAM */;
  TRACE_POP
}
/*
equation index: 312
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT_des[12] = powerBlock.HTR.T_turb_des[12] - powerBlock.HTR.T_comp_des[12]
*/
void sCO2PBRig_eqFunction_312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,312};
  data->simulationInfo->realParameter[95] /* powerBlock.HTR.deltaT_des[12] PARAM */ = data->simulationInfo->realParameter[65] /* powerBlock.HTR.T_turb_des[12] PARAM */ - data->simulationInfo->realParameter[50] /* powerBlock.HTR.T_comp_des[12] PARAM */;
  TRACE_POP
}
/*
equation index: 313
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT_des[11] = powerBlock.HTR.T_turb_des[11] - powerBlock.HTR.T_comp_des[11]
*/
void sCO2PBRig_eqFunction_313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,313};
  data->simulationInfo->realParameter[94] /* powerBlock.HTR.deltaT_des[11] PARAM */ = data->simulationInfo->realParameter[64] /* powerBlock.HTR.T_turb_des[11] PARAM */ - data->simulationInfo->realParameter[49] /* powerBlock.HTR.T_comp_des[11] PARAM */;
  TRACE_POP
}
/*
equation index: 314
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT_des[10] = powerBlock.HTR.T_turb_des[10] - powerBlock.HTR.T_comp_des[10]
*/
void sCO2PBRig_eqFunction_314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,314};
  data->simulationInfo->realParameter[93] /* powerBlock.HTR.deltaT_des[10] PARAM */ = data->simulationInfo->realParameter[63] /* powerBlock.HTR.T_turb_des[10] PARAM */ - data->simulationInfo->realParameter[48] /* powerBlock.HTR.T_comp_des[10] PARAM */;
  TRACE_POP
}
/*
equation index: 315
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT_des[9] = powerBlock.HTR.T_turb_des[9] - powerBlock.HTR.T_comp_des[9]
*/
void sCO2PBRig_eqFunction_315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,315};
  data->simulationInfo->realParameter[92] /* powerBlock.HTR.deltaT_des[9] PARAM */ = data->simulationInfo->realParameter[62] /* powerBlock.HTR.T_turb_des[9] PARAM */ - data->simulationInfo->realParameter[47] /* powerBlock.HTR.T_comp_des[9] PARAM */;
  TRACE_POP
}
/*
equation index: 316
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT_des[8] = powerBlock.HTR.T_turb_des[8] - powerBlock.HTR.T_comp_des[8]
*/
void sCO2PBRig_eqFunction_316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,316};
  data->simulationInfo->realParameter[91] /* powerBlock.HTR.deltaT_des[8] PARAM */ = data->simulationInfo->realParameter[61] /* powerBlock.HTR.T_turb_des[8] PARAM */ - data->simulationInfo->realParameter[46] /* powerBlock.HTR.T_comp_des[8] PARAM */;
  TRACE_POP
}
/*
equation index: 317
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT_des[7] = powerBlock.HTR.T_turb_des[7] - powerBlock.HTR.T_comp_des[7]
*/
void sCO2PBRig_eqFunction_317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,317};
  data->simulationInfo->realParameter[90] /* powerBlock.HTR.deltaT_des[7] PARAM */ = data->simulationInfo->realParameter[60] /* powerBlock.HTR.T_turb_des[7] PARAM */ - data->simulationInfo->realParameter[45] /* powerBlock.HTR.T_comp_des[7] PARAM */;
  TRACE_POP
}
/*
equation index: 318
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT_des[6] = powerBlock.HTR.T_turb_des[6] - powerBlock.HTR.T_comp_des[6]
*/
void sCO2PBRig_eqFunction_318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,318};
  data->simulationInfo->realParameter[89] /* powerBlock.HTR.deltaT_des[6] PARAM */ = data->simulationInfo->realParameter[59] /* powerBlock.HTR.T_turb_des[6] PARAM */ - data->simulationInfo->realParameter[44] /* powerBlock.HTR.T_comp_des[6] PARAM */;
  TRACE_POP
}
/*
equation index: 319
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT_des[5] = powerBlock.HTR.T_turb_des[5] - powerBlock.HTR.T_comp_des[5]
*/
void sCO2PBRig_eqFunction_319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,319};
  data->simulationInfo->realParameter[88] /* powerBlock.HTR.deltaT_des[5] PARAM */ = data->simulationInfo->realParameter[58] /* powerBlock.HTR.T_turb_des[5] PARAM */ - data->simulationInfo->realParameter[43] /* powerBlock.HTR.T_comp_des[5] PARAM */;
  TRACE_POP
}
/*
equation index: 320
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT_des[4] = powerBlock.HTR.T_turb_des[4] - powerBlock.HTR.T_comp_des[4]
*/
void sCO2PBRig_eqFunction_320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,320};
  data->simulationInfo->realParameter[87] /* powerBlock.HTR.deltaT_des[4] PARAM */ = data->simulationInfo->realParameter[57] /* powerBlock.HTR.T_turb_des[4] PARAM */ - data->simulationInfo->realParameter[42] /* powerBlock.HTR.T_comp_des[4] PARAM */;
  TRACE_POP
}
/*
equation index: 321
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT_des[3] = powerBlock.HTR.T_turb_des[3] - powerBlock.HTR.T_comp_des[3]
*/
void sCO2PBRig_eqFunction_321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,321};
  data->simulationInfo->realParameter[86] /* powerBlock.HTR.deltaT_des[3] PARAM */ = data->simulationInfo->realParameter[56] /* powerBlock.HTR.T_turb_des[3] PARAM */ - data->simulationInfo->realParameter[41] /* powerBlock.HTR.T_comp_des[3] PARAM */;
  TRACE_POP
}
/*
equation index: 322
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT_des[2] = powerBlock.HTR.T_turb_des[2] - powerBlock.HTR.T_comp_des[2]
*/
void sCO2PBRig_eqFunction_322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,322};
  data->simulationInfo->realParameter[85] /* powerBlock.HTR.deltaT_des[2] PARAM */ = data->simulationInfo->realParameter[55] /* powerBlock.HTR.T_turb_des[2] PARAM */ - data->simulationInfo->realParameter[40] /* powerBlock.HTR.T_comp_des[2] PARAM */;
  TRACE_POP
}
/*
equation index: 323
type: SIMPLE_ASSIGN
powerBlock._HTR._T_turb_des[1] = powerBlock.HTR.T_comp_des[1] + powerBlock.HTR.deltaT_des[1]
*/
void sCO2PBRig_eqFunction_323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,323};
  data->simulationInfo->realParameter[54] /* powerBlock.HTR.T_turb_des[1] PARAM */ = data->simulationInfo->realParameter[39] /* powerBlock.HTR.T_comp_des[1] PARAM */ + data->simulationInfo->realParameter[84] /* powerBlock.HTR.deltaT_des[1] PARAM */;
  TRACE_POP
}
/*
equation index: 324
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT_des[15] = powerBlock.LTR.T_turb_des[15] - powerBlock.LTR.T_comp_des[15]
*/
void sCO2PBRig_eqFunction_324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,324};
  data->simulationInfo->realParameter[233] /* powerBlock.LTR.deltaT_des[15] PARAM */ = data->simulationInfo->realParameter[203] /* powerBlock.LTR.T_turb_des[15] PARAM */ - data->simulationInfo->realParameter[188] /* powerBlock.LTR.T_comp_des[15] PARAM */;
  TRACE_POP
}
/*
equation index: 325
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT_des[2] = powerBlock.LTR.T_turb_des[2] - powerBlock.LTR.T_comp_des[2]
*/
void sCO2PBRig_eqFunction_325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,325};
  data->simulationInfo->realParameter[220] /* powerBlock.LTR.deltaT_des[2] PARAM */ = data->simulationInfo->realParameter[190] /* powerBlock.LTR.T_turb_des[2] PARAM */ - data->simulationInfo->realParameter[175] /* powerBlock.LTR.T_comp_des[2] PARAM */;
  TRACE_POP
}
/*
equation index: 326
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT_des[3] = powerBlock.LTR.T_turb_des[3] - powerBlock.LTR.T_comp_des[3]
*/
void sCO2PBRig_eqFunction_326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,326};
  data->simulationInfo->realParameter[221] /* powerBlock.LTR.deltaT_des[3] PARAM */ = data->simulationInfo->realParameter[191] /* powerBlock.LTR.T_turb_des[3] PARAM */ - data->simulationInfo->realParameter[176] /* powerBlock.LTR.T_comp_des[3] PARAM */;
  TRACE_POP
}
/*
equation index: 327
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT_des[4] = powerBlock.LTR.T_turb_des[4] - powerBlock.LTR.T_comp_des[4]
*/
void sCO2PBRig_eqFunction_327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,327};
  data->simulationInfo->realParameter[222] /* powerBlock.LTR.deltaT_des[4] PARAM */ = data->simulationInfo->realParameter[192] /* powerBlock.LTR.T_turb_des[4] PARAM */ - data->simulationInfo->realParameter[177] /* powerBlock.LTR.T_comp_des[4] PARAM */;
  TRACE_POP
}
/*
equation index: 328
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT_des[5] = powerBlock.LTR.T_turb_des[5] - powerBlock.LTR.T_comp_des[5]
*/
void sCO2PBRig_eqFunction_328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,328};
  data->simulationInfo->realParameter[223] /* powerBlock.LTR.deltaT_des[5] PARAM */ = data->simulationInfo->realParameter[193] /* powerBlock.LTR.T_turb_des[5] PARAM */ - data->simulationInfo->realParameter[178] /* powerBlock.LTR.T_comp_des[5] PARAM */;
  TRACE_POP
}
/*
equation index: 329
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT_des[6] = powerBlock.LTR.T_turb_des[6] - powerBlock.LTR.T_comp_des[6]
*/
void sCO2PBRig_eqFunction_329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,329};
  data->simulationInfo->realParameter[224] /* powerBlock.LTR.deltaT_des[6] PARAM */ = data->simulationInfo->realParameter[194] /* powerBlock.LTR.T_turb_des[6] PARAM */ - data->simulationInfo->realParameter[179] /* powerBlock.LTR.T_comp_des[6] PARAM */;
  TRACE_POP
}
/*
equation index: 330
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT_des[7] = powerBlock.LTR.T_turb_des[7] - powerBlock.LTR.T_comp_des[7]
*/
void sCO2PBRig_eqFunction_330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,330};
  data->simulationInfo->realParameter[225] /* powerBlock.LTR.deltaT_des[7] PARAM */ = data->simulationInfo->realParameter[195] /* powerBlock.LTR.T_turb_des[7] PARAM */ - data->simulationInfo->realParameter[180] /* powerBlock.LTR.T_comp_des[7] PARAM */;
  TRACE_POP
}
/*
equation index: 331
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT_des[8] = powerBlock.LTR.T_turb_des[8] - powerBlock.LTR.T_comp_des[8]
*/
void sCO2PBRig_eqFunction_331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,331};
  data->simulationInfo->realParameter[226] /* powerBlock.LTR.deltaT_des[8] PARAM */ = data->simulationInfo->realParameter[196] /* powerBlock.LTR.T_turb_des[8] PARAM */ - data->simulationInfo->realParameter[181] /* powerBlock.LTR.T_comp_des[8] PARAM */;
  TRACE_POP
}
/*
equation index: 332
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT_des[9] = powerBlock.LTR.T_turb_des[9] - powerBlock.LTR.T_comp_des[9]
*/
void sCO2PBRig_eqFunction_332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,332};
  data->simulationInfo->realParameter[227] /* powerBlock.LTR.deltaT_des[9] PARAM */ = data->simulationInfo->realParameter[197] /* powerBlock.LTR.T_turb_des[9] PARAM */ - data->simulationInfo->realParameter[182] /* powerBlock.LTR.T_comp_des[9] PARAM */;
  TRACE_POP
}
/*
equation index: 333
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT_des[10] = powerBlock.LTR.T_turb_des[10] - powerBlock.LTR.T_comp_des[10]
*/
void sCO2PBRig_eqFunction_333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,333};
  data->simulationInfo->realParameter[228] /* powerBlock.LTR.deltaT_des[10] PARAM */ = data->simulationInfo->realParameter[198] /* powerBlock.LTR.T_turb_des[10] PARAM */ - data->simulationInfo->realParameter[183] /* powerBlock.LTR.T_comp_des[10] PARAM */;
  TRACE_POP
}
/*
equation index: 334
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT_des[11] = powerBlock.LTR.T_turb_des[11] - powerBlock.LTR.T_comp_des[11]
*/
void sCO2PBRig_eqFunction_334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,334};
  data->simulationInfo->realParameter[229] /* powerBlock.LTR.deltaT_des[11] PARAM */ = data->simulationInfo->realParameter[199] /* powerBlock.LTR.T_turb_des[11] PARAM */ - data->simulationInfo->realParameter[184] /* powerBlock.LTR.T_comp_des[11] PARAM */;
  TRACE_POP
}
/*
equation index: 335
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT_des[12] = powerBlock.LTR.T_turb_des[12] - powerBlock.LTR.T_comp_des[12]
*/
void sCO2PBRig_eqFunction_335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,335};
  data->simulationInfo->realParameter[230] /* powerBlock.LTR.deltaT_des[12] PARAM */ = data->simulationInfo->realParameter[200] /* powerBlock.LTR.T_turb_des[12] PARAM */ - data->simulationInfo->realParameter[185] /* powerBlock.LTR.T_comp_des[12] PARAM */;
  TRACE_POP
}
/*
equation index: 336
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT_des[13] = powerBlock.LTR.T_turb_des[13] - powerBlock.LTR.T_comp_des[13]
*/
void sCO2PBRig_eqFunction_336(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,336};
  data->simulationInfo->realParameter[231] /* powerBlock.LTR.deltaT_des[13] PARAM */ = data->simulationInfo->realParameter[201] /* powerBlock.LTR.T_turb_des[13] PARAM */ - data->simulationInfo->realParameter[186] /* powerBlock.LTR.T_comp_des[13] PARAM */;
  TRACE_POP
}
/*
equation index: 337
type: SIMPLE_ASSIGN
powerBlock._LTR._T_turb_des[14] = powerBlock.LTR.T_comp_des[14] + powerBlock.LTR.deltaT_des[14]
*/
void sCO2PBRig_eqFunction_337(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,337};
  data->simulationInfo->realParameter[202] /* powerBlock.LTR.T_turb_des[14] PARAM */ = data->simulationInfo->realParameter[187] /* powerBlock.LTR.T_comp_des[14] PARAM */ + data->simulationInfo->realParameter[232] /* powerBlock.LTR.deltaT_des[14] PARAM */;
  TRACE_POP
}

void residualFunc399(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,399};
  int i;
  real_array tmp0;
  modelica_real tmp1;
  real_array tmp2;
  modelica_real tmp3;
  /* iteration variables */
  for (i=0; i<61; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<61; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[232] /* powerBlock.LTR.deltaT_des[14] PARAM */ = xloc[0];
  data->simulationInfo->realParameter[187] /* powerBlock.LTR.T_comp_des[14] PARAM */ = xloc[1];
  data->simulationInfo->realParameter[201] /* powerBlock.LTR.T_turb_des[13] PARAM */ = xloc[2];
  data->simulationInfo->realParameter[186] /* powerBlock.LTR.T_comp_des[13] PARAM */ = xloc[3];
  data->simulationInfo->realParameter[200] /* powerBlock.LTR.T_turb_des[12] PARAM */ = xloc[4];
  data->simulationInfo->realParameter[185] /* powerBlock.LTR.T_comp_des[12] PARAM */ = xloc[5];
  data->simulationInfo->realParameter[199] /* powerBlock.LTR.T_turb_des[11] PARAM */ = xloc[6];
  data->simulationInfo->realParameter[184] /* powerBlock.LTR.T_comp_des[11] PARAM */ = xloc[7];
  data->simulationInfo->realParameter[198] /* powerBlock.LTR.T_turb_des[10] PARAM */ = xloc[8];
  data->simulationInfo->realParameter[183] /* powerBlock.LTR.T_comp_des[10] PARAM */ = xloc[9];
  data->simulationInfo->realParameter[197] /* powerBlock.LTR.T_turb_des[9] PARAM */ = xloc[10];
  data->simulationInfo->realParameter[182] /* powerBlock.LTR.T_comp_des[9] PARAM */ = xloc[11];
  data->simulationInfo->realParameter[196] /* powerBlock.LTR.T_turb_des[8] PARAM */ = xloc[12];
  data->simulationInfo->realParameter[181] /* powerBlock.LTR.T_comp_des[8] PARAM */ = xloc[13];
  data->simulationInfo->realParameter[195] /* powerBlock.LTR.T_turb_des[7] PARAM */ = xloc[14];
  data->simulationInfo->realParameter[180] /* powerBlock.LTR.T_comp_des[7] PARAM */ = xloc[15];
  data->simulationInfo->realParameter[194] /* powerBlock.LTR.T_turb_des[6] PARAM */ = xloc[16];
  data->simulationInfo->realParameter[179] /* powerBlock.LTR.T_comp_des[6] PARAM */ = xloc[17];
  data->simulationInfo->realParameter[193] /* powerBlock.LTR.T_turb_des[5] PARAM */ = xloc[18];
  data->simulationInfo->realParameter[178] /* powerBlock.LTR.T_comp_des[5] PARAM */ = xloc[19];
  data->simulationInfo->realParameter[192] /* powerBlock.LTR.T_turb_des[4] PARAM */ = xloc[20];
  data->simulationInfo->realParameter[177] /* powerBlock.LTR.T_comp_des[4] PARAM */ = xloc[21];
  data->simulationInfo->realParameter[191] /* powerBlock.LTR.T_turb_des[3] PARAM */ = xloc[22];
  data->simulationInfo->realParameter[176] /* powerBlock.LTR.T_comp_des[3] PARAM */ = xloc[23];
  data->simulationInfo->realParameter[190] /* powerBlock.LTR.T_turb_des[2] PARAM */ = xloc[24];
  data->simulationInfo->realParameter[175] /* powerBlock.LTR.T_comp_des[2] PARAM */ = xloc[25];
  data->simulationInfo->realParameter[203] /* powerBlock.LTR.T_turb_des[15] PARAM */ = xloc[26];
  data->simulationInfo->realParameter[188] /* powerBlock.LTR.T_comp_des[15] PARAM */ = xloc[27];
  data->simulationInfo->realParameter[84] /* powerBlock.HTR.deltaT_des[1] PARAM */ = xloc[28];
  data->simulationInfo->realParameter[39] /* powerBlock.HTR.T_comp_des[1] PARAM */ = xloc[29];
  data->simulationInfo->realParameter[55] /* powerBlock.HTR.T_turb_des[2] PARAM */ = xloc[30];
  data->simulationInfo->realParameter[40] /* powerBlock.HTR.T_comp_des[2] PARAM */ = xloc[31];
  data->simulationInfo->realParameter[56] /* powerBlock.HTR.T_turb_des[3] PARAM */ = xloc[32];
  data->simulationInfo->realParameter[41] /* powerBlock.HTR.T_comp_des[3] PARAM */ = xloc[33];
  data->simulationInfo->realParameter[57] /* powerBlock.HTR.T_turb_des[4] PARAM */ = xloc[34];
  data->simulationInfo->realParameter[42] /* powerBlock.HTR.T_comp_des[4] PARAM */ = xloc[35];
  data->simulationInfo->realParameter[58] /* powerBlock.HTR.T_turb_des[5] PARAM */ = xloc[36];
  data->simulationInfo->realParameter[43] /* powerBlock.HTR.T_comp_des[5] PARAM */ = xloc[37];
  data->simulationInfo->realParameter[59] /* powerBlock.HTR.T_turb_des[6] PARAM */ = xloc[38];
  data->simulationInfo->realParameter[44] /* powerBlock.HTR.T_comp_des[6] PARAM */ = xloc[39];
  data->simulationInfo->realParameter[60] /* powerBlock.HTR.T_turb_des[7] PARAM */ = xloc[40];
  data->simulationInfo->realParameter[45] /* powerBlock.HTR.T_comp_des[7] PARAM */ = xloc[41];
  data->simulationInfo->realParameter[61] /* powerBlock.HTR.T_turb_des[8] PARAM */ = xloc[42];
  data->simulationInfo->realParameter[46] /* powerBlock.HTR.T_comp_des[8] PARAM */ = xloc[43];
  data->simulationInfo->realParameter[62] /* powerBlock.HTR.T_turb_des[9] PARAM */ = xloc[44];
  data->simulationInfo->realParameter[47] /* powerBlock.HTR.T_comp_des[9] PARAM */ = xloc[45];
  data->simulationInfo->realParameter[63] /* powerBlock.HTR.T_turb_des[10] PARAM */ = xloc[46];
  data->simulationInfo->realParameter[48] /* powerBlock.HTR.T_comp_des[10] PARAM */ = xloc[47];
  data->simulationInfo->realParameter[64] /* powerBlock.HTR.T_turb_des[11] PARAM */ = xloc[48];
  data->simulationInfo->realParameter[49] /* powerBlock.HTR.T_comp_des[11] PARAM */ = xloc[49];
  data->simulationInfo->realParameter[65] /* powerBlock.HTR.T_turb_des[12] PARAM */ = xloc[50];
  data->simulationInfo->realParameter[50] /* powerBlock.HTR.T_comp_des[12] PARAM */ = xloc[51];
  data->simulationInfo->realParameter[66] /* powerBlock.HTR.T_turb_des[13] PARAM */ = xloc[52];
  data->simulationInfo->realParameter[51] /* powerBlock.HTR.T_comp_des[13] PARAM */ = xloc[53];
  data->simulationInfo->realParameter[67] /* powerBlock.HTR.T_turb_des[14] PARAM */ = xloc[54];
  data->simulationInfo->realParameter[52] /* powerBlock.HTR.T_comp_des[14] PARAM */ = xloc[55];
  data->simulationInfo->realParameter[189] /* powerBlock.LTR.T_turb_des[1] PARAM */ = xloc[56];
  data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */ = xloc[57];
  data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */ = xloc[58];
  data->simulationInfo->realParameter[53] /* powerBlock.HTR.T_comp_des[15] PARAM */ = xloc[59];
  data->simulationInfo->realParameter[634] /* powerBlock.reCompressor.state_in_des.h PARAM */ = xloc[60];
  /* backup outputs */
  /* pre body */
  /* local constraints */
  sCO2PBRig_eqFunction_242(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_243(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_244(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_245(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_246(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_247(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_248(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_249(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_250(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_251(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_252(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_253(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_254(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_255(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_256(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_257(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_258(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_259(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_260(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_261(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_262(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_263(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_264(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_265(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_266(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_267(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_268(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_269(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_270(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_271(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_272(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_273(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_274(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_275(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_276(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_277(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_278(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_279(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_280(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_281(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_282(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_283(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_284(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_285(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_286(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_287(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_288(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_289(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_290(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_291(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_292(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_293(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_294(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_295(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_296(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_297(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_298(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_299(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_300(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_301(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_302(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_303(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_304(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_305(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_306(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_307(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_308(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_309(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_310(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_311(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_312(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_313(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_314(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_315(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_316(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_317(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_318(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_319(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_320(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_321(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_322(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_323(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_324(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_325(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_326(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_327(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_328(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_329(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_330(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_331(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_332(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_333(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_334(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_335(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_336(data, threadData);

  /* local constraints */
  sCO2PBRig_eqFunction_337(data, threadData);
  /* body */
  res[0] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[52] /* powerBlock.HTR.T_comp_des[14] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[124] /* powerBlock.HTR.state_comp_des[14].h PARAM */;

  res[1] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[51] /* powerBlock.HTR.T_comp_des[13] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[123] /* powerBlock.HTR.state_comp_des[13].h PARAM */;

  res[2] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[50] /* powerBlock.HTR.T_comp_des[12] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[122] /* powerBlock.HTR.state_comp_des[12].h PARAM */;

  res[3] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[49] /* powerBlock.HTR.T_comp_des[11] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[121] /* powerBlock.HTR.state_comp_des[11].h PARAM */;

  res[4] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[48] /* powerBlock.HTR.T_comp_des[10] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[120] /* powerBlock.HTR.state_comp_des[10].h PARAM */;

  res[5] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[47] /* powerBlock.HTR.T_comp_des[9] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[119] /* powerBlock.HTR.state_comp_des[9].h PARAM */;

  res[6] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[46] /* powerBlock.HTR.T_comp_des[8] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[118] /* powerBlock.HTR.state_comp_des[8].h PARAM */;

  res[7] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[45] /* powerBlock.HTR.T_comp_des[7] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[117] /* powerBlock.HTR.state_comp_des[7].h PARAM */;

  res[8] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[44] /* powerBlock.HTR.T_comp_des[6] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[116] /* powerBlock.HTR.state_comp_des[6].h PARAM */;

  res[9] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[43] /* powerBlock.HTR.T_comp_des[5] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[115] /* powerBlock.HTR.state_comp_des[5].h PARAM */;

  res[10] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[42] /* powerBlock.HTR.T_comp_des[4] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[114] /* powerBlock.HTR.state_comp_des[4].h PARAM */;

  res[11] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[41] /* powerBlock.HTR.T_comp_des[3] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[113] /* powerBlock.HTR.state_comp_des[3].h PARAM */;

  res[12] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[40] /* powerBlock.HTR.T_comp_des[2] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[112] /* powerBlock.HTR.state_comp_des[2].h PARAM */;

  res[13] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[105] /* powerBlock.HTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[39] /* powerBlock.HTR.T_comp_des[1] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[111] /* powerBlock.HTR.state_comp_des[1].h PARAM */;

  res[14] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[188] /* powerBlock.LTR.T_comp_des[15] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[260] /* powerBlock.LTR.state_comp_des[15].h PARAM */;

  res[15] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[175] /* powerBlock.LTR.T_comp_des[2] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[247] /* powerBlock.LTR.state_comp_des[2].h PARAM */;

  res[16] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[176] /* powerBlock.LTR.T_comp_des[3] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[248] /* powerBlock.LTR.state_comp_des[3].h PARAM */;

  res[17] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[177] /* powerBlock.LTR.T_comp_des[4] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[249] /* powerBlock.LTR.state_comp_des[4].h PARAM */;

  res[18] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[178] /* powerBlock.LTR.T_comp_des[5] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[250] /* powerBlock.LTR.state_comp_des[5].h PARAM */;

  res[19] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[179] /* powerBlock.LTR.T_comp_des[6] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[251] /* powerBlock.LTR.state_comp_des[6].h PARAM */;

  res[20] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[180] /* powerBlock.LTR.T_comp_des[7] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[252] /* powerBlock.LTR.state_comp_des[7].h PARAM */;

  res[21] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[181] /* powerBlock.LTR.T_comp_des[8] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[253] /* powerBlock.LTR.state_comp_des[8].h PARAM */;

  res[22] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[182] /* powerBlock.LTR.T_comp_des[9] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[254] /* powerBlock.LTR.state_comp_des[9].h PARAM */;

  res[23] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[183] /* powerBlock.LTR.T_comp_des[10] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[255] /* powerBlock.LTR.state_comp_des[10].h PARAM */;

  res[24] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[184] /* powerBlock.LTR.T_comp_des[11] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[256] /* powerBlock.LTR.state_comp_des[11].h PARAM */;

  res[25] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[185] /* powerBlock.LTR.T_comp_des[12] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[257] /* powerBlock.LTR.state_comp_des[12].h PARAM */;

  res[26] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[186] /* powerBlock.LTR.T_comp_des[13] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[258] /* powerBlock.LTR.state_comp_des[13].h PARAM */;

  res[27] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[187] /* powerBlock.LTR.T_comp_des[14] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[259] /* powerBlock.LTR.state_comp_des[14].h PARAM */;

  res[28] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[201] /* powerBlock.LTR.T_turb_des[13] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[288] /* powerBlock.LTR.state_turb_des[13].h PARAM */;

  res[29] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[200] /* powerBlock.LTR.T_turb_des[12] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[287] /* powerBlock.LTR.state_turb_des[12].h PARAM */;

  res[30] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[199] /* powerBlock.LTR.T_turb_des[11] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[286] /* powerBlock.LTR.state_turb_des[11].h PARAM */;

  res[31] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[198] /* powerBlock.LTR.T_turb_des[10] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[285] /* powerBlock.LTR.state_turb_des[10].h PARAM */;

  res[32] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[197] /* powerBlock.LTR.T_turb_des[9] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[284] /* powerBlock.LTR.state_turb_des[9].h PARAM */;

  res[33] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[196] /* powerBlock.LTR.T_turb_des[8] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[283] /* powerBlock.LTR.state_turb_des[8].h PARAM */;

  res[34] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[195] /* powerBlock.LTR.T_turb_des[7] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[282] /* powerBlock.LTR.state_turb_des[7].h PARAM */;

  res[35] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[194] /* powerBlock.LTR.T_turb_des[6] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[281] /* powerBlock.LTR.state_turb_des[6].h PARAM */;

  res[36] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[193] /* powerBlock.LTR.T_turb_des[5] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[280] /* powerBlock.LTR.state_turb_des[5].h PARAM */;

  res[37] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[192] /* powerBlock.LTR.T_turb_des[4] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[279] /* powerBlock.LTR.state_turb_des[4].h PARAM */;

  res[38] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[191] /* powerBlock.LTR.T_turb_des[3] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[278] /* powerBlock.LTR.state_turb_des[3].h PARAM */;

  res[39] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[190] /* powerBlock.LTR.T_turb_des[2] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[277] /* powerBlock.LTR.state_turb_des[2].h PARAM */;

  res[40] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[189] /* powerBlock.LTR.T_turb_des[1] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[276] /* powerBlock.LTR.state_turb_des[1].h PARAM */;

  res[41] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[202] /* powerBlock.LTR.T_turb_des[14] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[289] /* powerBlock.LTR.state_turb_des[14].h PARAM */;

  real_array_create(&tmp0, ((modelica_real*)&((&data->simulationInfo->realParameter[219] /* powerBlock.LTR.deltaT_des[1] PARAM */)[calc_base_index_dims_subs(1, 15, ((modelica_integer) 1))])), 1, 15);
  tmp1 = min_real_array(tmp0);
  res[42] = data->simulationInfo->realParameter[244] /* powerBlock.LTR.pinchRecuperator PARAM */ - tmp1;

  res[43] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[241] /* powerBlock.LTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[203] /* powerBlock.LTR.T_turb_des[15] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[290] /* powerBlock.LTR.state_turb_des[15].h PARAM */;

  res[44] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[54] /* powerBlock.HTR.T_turb_des[1] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[141] /* powerBlock.HTR.state_turb_des[1].h PARAM */;

  res[45] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[55] /* powerBlock.HTR.T_turb_des[2] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[142] /* powerBlock.HTR.state_turb_des[2].h PARAM */;

  res[46] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[56] /* powerBlock.HTR.T_turb_des[3] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[143] /* powerBlock.HTR.state_turb_des[3].h PARAM */;

  res[47] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[57] /* powerBlock.HTR.T_turb_des[4] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[144] /* powerBlock.HTR.state_turb_des[4].h PARAM */;

  res[48] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[58] /* powerBlock.HTR.T_turb_des[5] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[145] /* powerBlock.HTR.state_turb_des[5].h PARAM */;

  res[49] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[59] /* powerBlock.HTR.T_turb_des[6] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[146] /* powerBlock.HTR.state_turb_des[6].h PARAM */;

  res[50] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[60] /* powerBlock.HTR.T_turb_des[7] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[147] /* powerBlock.HTR.state_turb_des[7].h PARAM */;

  res[51] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[61] /* powerBlock.HTR.T_turb_des[8] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[148] /* powerBlock.HTR.state_turb_des[8].h PARAM */;

  res[52] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[62] /* powerBlock.HTR.T_turb_des[9] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[149] /* powerBlock.HTR.state_turb_des[9].h PARAM */;

  res[53] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[63] /* powerBlock.HTR.T_turb_des[10] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[150] /* powerBlock.HTR.state_turb_des[10].h PARAM */;

  res[54] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[64] /* powerBlock.HTR.T_turb_des[11] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[151] /* powerBlock.HTR.state_turb_des[11].h PARAM */;

  res[55] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[65] /* powerBlock.HTR.T_turb_des[12] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[152] /* powerBlock.HTR.state_turb_des[12].h PARAM */;

  res[56] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[66] /* powerBlock.HTR.T_turb_des[13] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[153] /* powerBlock.HTR.state_turb_des[13].h PARAM */;

  res[57] = omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[67] /* powerBlock.HTR.T_turb_des[14] PARAM */, data->simulationInfo->extObjs[38]) - data->simulationInfo->realParameter[154] /* powerBlock.HTR.state_turb_des[14].h PARAM */;

  res[58] = data->simulationInfo->realParameter[155] /* powerBlock.HTR.state_turb_des[15].h PARAM */ + (-data->simulationInfo->realParameter[154] /* powerBlock.HTR.state_turb_des[14].h PARAM */) - data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;

  res[59] = (data->simulationInfo->realParameter[110] /* powerBlock.HTR.ratio_m_des PARAM */) * (data->simulationInfo->realParameter[112] /* powerBlock.HTR.state_comp_des[2].h PARAM */ - data->simulationInfo->realParameter[111] /* powerBlock.HTR.state_comp_des[1].h PARAM */) - data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;

  real_array_create(&tmp2, ((modelica_real*)&((&data->simulationInfo->realParameter[84] /* powerBlock.HTR.deltaT_des[1] PARAM */)[calc_base_index_dims_subs(1, 15, ((modelica_integer) 1))])), 1, 15);
  tmp3 = min_real_array(tmp2);
  res[60] = data->simulationInfo->realParameter[109] /* powerBlock.HTR.pinchRecuperator PARAM */ - tmp3;
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS399(NONLINEAR_SYSTEM_DATA* inSysData)
{
  int i=0;
  const int colPtrIndex[1+61] = {0,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,28,45,15,32};
  const int rowIndex[234] = {41,42,27,41,28,42,26,42,29,42,25,42,30,42,24,42,31,42,23,42,32,42,22,42,33,42,21,42,34,42,20,42,35,42,19,42,36,42,18,42,37,42,17,42,38,42,16,42,39,42,15,42,42,43,14,42,44,60,13,44,45,60,12,60,46,60,11,60,47,60,10,60,48,60,9,60,49,60,8,60,50,60,7,60,51,60,6,60,52,60,5,60,53,60,4,60,54,60,3,60,55,60,2,60,56,60,1,60,57,60,0,60,40,42,0,1,2,3,4,5,6,7,8,9,10,11,12,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,41,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,0,1,2,3,4,5,6,7,8,9,10,11,12,59,60,13,28,29,30,31,32,33,34,35,36,37,38,39,40,41,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59};
  /* sparsity pattern available */
  inSysData->isPatternAvailable = 'T';
  inSysData->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  inSysData->sparsePattern->leadindex = (unsigned int*) malloc((61+1)*sizeof(int));
  inSysData->sparsePattern->index = (unsigned int*) malloc(234*sizeof(int));
  inSysData->sparsePattern->numberOfNoneZeros = 234;
  inSysData->sparsePattern->colorCols = (unsigned int*) malloc(61*sizeof(int));
  inSysData->sparsePattern->maxColors = 29;
  
  /* write lead index of compressed sparse column */
  memcpy(inSysData->sparsePattern->leadindex, colPtrIndex, (61+1)*sizeof(int));
  
  for(i=2;i<61+1;++i)
    inSysData->sparsePattern->leadindex[i] += inSysData->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(inSysData->sparsePattern->index, rowIndex, 234*sizeof(int));
  
  /* write color array */
  inSysData->sparsePattern->colorCols[59] = 1;
  inSysData->sparsePattern->colorCols[56] = 2;
  inSysData->sparsePattern->colorCols[58] = 2;
  inSysData->sparsePattern->colorCols[27] = 3;
  inSysData->sparsePattern->colorCols[55] = 3;
  inSysData->sparsePattern->colorCols[26] = 4;
  inSysData->sparsePattern->colorCols[54] = 4;
  inSysData->sparsePattern->colorCols[25] = 5;
  inSysData->sparsePattern->colorCols[53] = 5;
  inSysData->sparsePattern->colorCols[24] = 6;
  inSysData->sparsePattern->colorCols[52] = 6;
  inSysData->sparsePattern->colorCols[23] = 7;
  inSysData->sparsePattern->colorCols[51] = 7;
  inSysData->sparsePattern->colorCols[22] = 8;
  inSysData->sparsePattern->colorCols[50] = 8;
  inSysData->sparsePattern->colorCols[21] = 9;
  inSysData->sparsePattern->colorCols[49] = 9;
  inSysData->sparsePattern->colorCols[20] = 10;
  inSysData->sparsePattern->colorCols[48] = 10;
  inSysData->sparsePattern->colorCols[19] = 11;
  inSysData->sparsePattern->colorCols[47] = 11;
  inSysData->sparsePattern->colorCols[18] = 12;
  inSysData->sparsePattern->colorCols[46] = 12;
  inSysData->sparsePattern->colorCols[17] = 13;
  inSysData->sparsePattern->colorCols[45] = 13;
  inSysData->sparsePattern->colorCols[16] = 14;
  inSysData->sparsePattern->colorCols[44] = 14;
  inSysData->sparsePattern->colorCols[15] = 15;
  inSysData->sparsePattern->colorCols[43] = 15;
  inSysData->sparsePattern->colorCols[14] = 16;
  inSysData->sparsePattern->colorCols[42] = 16;
  inSysData->sparsePattern->colorCols[13] = 17;
  inSysData->sparsePattern->colorCols[41] = 17;
  inSysData->sparsePattern->colorCols[12] = 18;
  inSysData->sparsePattern->colorCols[40] = 18;
  inSysData->sparsePattern->colorCols[11] = 19;
  inSysData->sparsePattern->colorCols[39] = 19;
  inSysData->sparsePattern->colorCols[10] = 20;
  inSysData->sparsePattern->colorCols[38] = 20;
  inSysData->sparsePattern->colorCols[9] = 21;
  inSysData->sparsePattern->colorCols[37] = 21;
  inSysData->sparsePattern->colorCols[8] = 22;
  inSysData->sparsePattern->colorCols[36] = 22;
  inSysData->sparsePattern->colorCols[7] = 23;
  inSysData->sparsePattern->colorCols[35] = 23;
  inSysData->sparsePattern->colorCols[6] = 24;
  inSysData->sparsePattern->colorCols[34] = 24;
  inSysData->sparsePattern->colorCols[5] = 25;
  inSysData->sparsePattern->colorCols[33] = 25;
  inSysData->sparsePattern->colorCols[4] = 26;
  inSysData->sparsePattern->colorCols[32] = 26;
  inSysData->sparsePattern->colorCols[3] = 27;
  inSysData->sparsePattern->colorCols[31] = 27;
  inSysData->sparsePattern->colorCols[60] = 27;
  inSysData->sparsePattern->colorCols[1] = 28;
  inSysData->sparsePattern->colorCols[2] = 28;
  inSysData->sparsePattern->colorCols[29] = 28;
  inSysData->sparsePattern->colorCols[30] = 28;
  inSysData->sparsePattern->colorCols[0] = 29;
  inSysData->sparsePattern->colorCols[28] = 29;
  inSysData->sparsePattern->colorCols[57] = 29;
}
void initializeStaticDataNLS399(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.LTR.deltaT_des[14] */
  sysData->nominal[i] = data->modelData->realParameterData[232].attribute /* powerBlock.LTR.deltaT_des[14] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[232].attribute /* powerBlock.LTR.deltaT_des[14] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[232].attribute /* powerBlock.LTR.deltaT_des[14] */.max;
  /* static nls data for powerBlock.LTR.T_comp_des[14] */
  sysData->nominal[i] = data->modelData->realParameterData[187].attribute /* powerBlock.LTR.T_comp_des[14] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[187].attribute /* powerBlock.LTR.T_comp_des[14] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[187].attribute /* powerBlock.LTR.T_comp_des[14] */.max;
  /* static nls data for powerBlock.LTR.T_turb_des[13] */
  sysData->nominal[i] = data->modelData->realParameterData[201].attribute /* powerBlock.LTR.T_turb_des[13] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[201].attribute /* powerBlock.LTR.T_turb_des[13] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[201].attribute /* powerBlock.LTR.T_turb_des[13] */.max;
  /* static nls data for powerBlock.LTR.T_comp_des[13] */
  sysData->nominal[i] = data->modelData->realParameterData[186].attribute /* powerBlock.LTR.T_comp_des[13] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[186].attribute /* powerBlock.LTR.T_comp_des[13] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[186].attribute /* powerBlock.LTR.T_comp_des[13] */.max;
  /* static nls data for powerBlock.LTR.T_turb_des[12] */
  sysData->nominal[i] = data->modelData->realParameterData[200].attribute /* powerBlock.LTR.T_turb_des[12] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[200].attribute /* powerBlock.LTR.T_turb_des[12] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[200].attribute /* powerBlock.LTR.T_turb_des[12] */.max;
  /* static nls data for powerBlock.LTR.T_comp_des[12] */
  sysData->nominal[i] = data->modelData->realParameterData[185].attribute /* powerBlock.LTR.T_comp_des[12] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[185].attribute /* powerBlock.LTR.T_comp_des[12] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[185].attribute /* powerBlock.LTR.T_comp_des[12] */.max;
  /* static nls data for powerBlock.LTR.T_turb_des[11] */
  sysData->nominal[i] = data->modelData->realParameterData[199].attribute /* powerBlock.LTR.T_turb_des[11] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[199].attribute /* powerBlock.LTR.T_turb_des[11] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[199].attribute /* powerBlock.LTR.T_turb_des[11] */.max;
  /* static nls data for powerBlock.LTR.T_comp_des[11] */
  sysData->nominal[i] = data->modelData->realParameterData[184].attribute /* powerBlock.LTR.T_comp_des[11] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[184].attribute /* powerBlock.LTR.T_comp_des[11] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[184].attribute /* powerBlock.LTR.T_comp_des[11] */.max;
  /* static nls data for powerBlock.LTR.T_turb_des[10] */
  sysData->nominal[i] = data->modelData->realParameterData[198].attribute /* powerBlock.LTR.T_turb_des[10] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[198].attribute /* powerBlock.LTR.T_turb_des[10] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[198].attribute /* powerBlock.LTR.T_turb_des[10] */.max;
  /* static nls data for powerBlock.LTR.T_comp_des[10] */
  sysData->nominal[i] = data->modelData->realParameterData[183].attribute /* powerBlock.LTR.T_comp_des[10] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[183].attribute /* powerBlock.LTR.T_comp_des[10] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[183].attribute /* powerBlock.LTR.T_comp_des[10] */.max;
  /* static nls data for powerBlock.LTR.T_turb_des[9] */
  sysData->nominal[i] = data->modelData->realParameterData[197].attribute /* powerBlock.LTR.T_turb_des[9] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[197].attribute /* powerBlock.LTR.T_turb_des[9] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[197].attribute /* powerBlock.LTR.T_turb_des[9] */.max;
  /* static nls data for powerBlock.LTR.T_comp_des[9] */
  sysData->nominal[i] = data->modelData->realParameterData[182].attribute /* powerBlock.LTR.T_comp_des[9] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[182].attribute /* powerBlock.LTR.T_comp_des[9] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[182].attribute /* powerBlock.LTR.T_comp_des[9] */.max;
  /* static nls data for powerBlock.LTR.T_turb_des[8] */
  sysData->nominal[i] = data->modelData->realParameterData[196].attribute /* powerBlock.LTR.T_turb_des[8] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[196].attribute /* powerBlock.LTR.T_turb_des[8] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[196].attribute /* powerBlock.LTR.T_turb_des[8] */.max;
  /* static nls data for powerBlock.LTR.T_comp_des[8] */
  sysData->nominal[i] = data->modelData->realParameterData[181].attribute /* powerBlock.LTR.T_comp_des[8] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[181].attribute /* powerBlock.LTR.T_comp_des[8] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[181].attribute /* powerBlock.LTR.T_comp_des[8] */.max;
  /* static nls data for powerBlock.LTR.T_turb_des[7] */
  sysData->nominal[i] = data->modelData->realParameterData[195].attribute /* powerBlock.LTR.T_turb_des[7] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[195].attribute /* powerBlock.LTR.T_turb_des[7] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[195].attribute /* powerBlock.LTR.T_turb_des[7] */.max;
  /* static nls data for powerBlock.LTR.T_comp_des[7] */
  sysData->nominal[i] = data->modelData->realParameterData[180].attribute /* powerBlock.LTR.T_comp_des[7] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[180].attribute /* powerBlock.LTR.T_comp_des[7] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[180].attribute /* powerBlock.LTR.T_comp_des[7] */.max;
  /* static nls data for powerBlock.LTR.T_turb_des[6] */
  sysData->nominal[i] = data->modelData->realParameterData[194].attribute /* powerBlock.LTR.T_turb_des[6] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[194].attribute /* powerBlock.LTR.T_turb_des[6] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[194].attribute /* powerBlock.LTR.T_turb_des[6] */.max;
  /* static nls data for powerBlock.LTR.T_comp_des[6] */
  sysData->nominal[i] = data->modelData->realParameterData[179].attribute /* powerBlock.LTR.T_comp_des[6] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[179].attribute /* powerBlock.LTR.T_comp_des[6] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[179].attribute /* powerBlock.LTR.T_comp_des[6] */.max;
  /* static nls data for powerBlock.LTR.T_turb_des[5] */
  sysData->nominal[i] = data->modelData->realParameterData[193].attribute /* powerBlock.LTR.T_turb_des[5] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[193].attribute /* powerBlock.LTR.T_turb_des[5] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[193].attribute /* powerBlock.LTR.T_turb_des[5] */.max;
  /* static nls data for powerBlock.LTR.T_comp_des[5] */
  sysData->nominal[i] = data->modelData->realParameterData[178].attribute /* powerBlock.LTR.T_comp_des[5] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[178].attribute /* powerBlock.LTR.T_comp_des[5] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[178].attribute /* powerBlock.LTR.T_comp_des[5] */.max;
  /* static nls data for powerBlock.LTR.T_turb_des[4] */
  sysData->nominal[i] = data->modelData->realParameterData[192].attribute /* powerBlock.LTR.T_turb_des[4] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[192].attribute /* powerBlock.LTR.T_turb_des[4] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[192].attribute /* powerBlock.LTR.T_turb_des[4] */.max;
  /* static nls data for powerBlock.LTR.T_comp_des[4] */
  sysData->nominal[i] = data->modelData->realParameterData[177].attribute /* powerBlock.LTR.T_comp_des[4] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[177].attribute /* powerBlock.LTR.T_comp_des[4] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[177].attribute /* powerBlock.LTR.T_comp_des[4] */.max;
  /* static nls data for powerBlock.LTR.T_turb_des[3] */
  sysData->nominal[i] = data->modelData->realParameterData[191].attribute /* powerBlock.LTR.T_turb_des[3] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[191].attribute /* powerBlock.LTR.T_turb_des[3] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[191].attribute /* powerBlock.LTR.T_turb_des[3] */.max;
  /* static nls data for powerBlock.LTR.T_comp_des[3] */
  sysData->nominal[i] = data->modelData->realParameterData[176].attribute /* powerBlock.LTR.T_comp_des[3] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[176].attribute /* powerBlock.LTR.T_comp_des[3] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[176].attribute /* powerBlock.LTR.T_comp_des[3] */.max;
  /* static nls data for powerBlock.LTR.T_turb_des[2] */
  sysData->nominal[i] = data->modelData->realParameterData[190].attribute /* powerBlock.LTR.T_turb_des[2] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[190].attribute /* powerBlock.LTR.T_turb_des[2] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[190].attribute /* powerBlock.LTR.T_turb_des[2] */.max;
  /* static nls data for powerBlock.LTR.T_comp_des[2] */
  sysData->nominal[i] = data->modelData->realParameterData[175].attribute /* powerBlock.LTR.T_comp_des[2] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[175].attribute /* powerBlock.LTR.T_comp_des[2] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[175].attribute /* powerBlock.LTR.T_comp_des[2] */.max;
  /* static nls data for powerBlock.LTR.T_turb_des[15] */
  sysData->nominal[i] = data->modelData->realParameterData[203].attribute /* powerBlock.LTR.T_turb_des[15] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[203].attribute /* powerBlock.LTR.T_turb_des[15] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[203].attribute /* powerBlock.LTR.T_turb_des[15] */.max;
  /* static nls data for powerBlock.LTR.T_comp_des[15] */
  sysData->nominal[i] = data->modelData->realParameterData[188].attribute /* powerBlock.LTR.T_comp_des[15] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[188].attribute /* powerBlock.LTR.T_comp_des[15] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[188].attribute /* powerBlock.LTR.T_comp_des[15] */.max;
  /* static nls data for powerBlock.HTR.deltaT_des[1] */
  sysData->nominal[i] = data->modelData->realParameterData[84].attribute /* powerBlock.HTR.deltaT_des[1] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[84].attribute /* powerBlock.HTR.deltaT_des[1] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[84].attribute /* powerBlock.HTR.deltaT_des[1] */.max;
  /* static nls data for powerBlock.HTR.T_comp_des[1] */
  sysData->nominal[i] = data->modelData->realParameterData[39].attribute /* powerBlock.HTR.T_comp_des[1] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[39].attribute /* powerBlock.HTR.T_comp_des[1] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[39].attribute /* powerBlock.HTR.T_comp_des[1] */.max;
  /* static nls data for powerBlock.HTR.T_turb_des[2] */
  sysData->nominal[i] = data->modelData->realParameterData[55].attribute /* powerBlock.HTR.T_turb_des[2] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[55].attribute /* powerBlock.HTR.T_turb_des[2] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[55].attribute /* powerBlock.HTR.T_turb_des[2] */.max;
  /* static nls data for powerBlock.HTR.T_comp_des[2] */
  sysData->nominal[i] = data->modelData->realParameterData[40].attribute /* powerBlock.HTR.T_comp_des[2] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[40].attribute /* powerBlock.HTR.T_comp_des[2] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[40].attribute /* powerBlock.HTR.T_comp_des[2] */.max;
  /* static nls data for powerBlock.HTR.T_turb_des[3] */
  sysData->nominal[i] = data->modelData->realParameterData[56].attribute /* powerBlock.HTR.T_turb_des[3] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[56].attribute /* powerBlock.HTR.T_turb_des[3] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[56].attribute /* powerBlock.HTR.T_turb_des[3] */.max;
  /* static nls data for powerBlock.HTR.T_comp_des[3] */
  sysData->nominal[i] = data->modelData->realParameterData[41].attribute /* powerBlock.HTR.T_comp_des[3] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[41].attribute /* powerBlock.HTR.T_comp_des[3] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[41].attribute /* powerBlock.HTR.T_comp_des[3] */.max;
  /* static nls data for powerBlock.HTR.T_turb_des[4] */
  sysData->nominal[i] = data->modelData->realParameterData[57].attribute /* powerBlock.HTR.T_turb_des[4] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[57].attribute /* powerBlock.HTR.T_turb_des[4] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[57].attribute /* powerBlock.HTR.T_turb_des[4] */.max;
  /* static nls data for powerBlock.HTR.T_comp_des[4] */
  sysData->nominal[i] = data->modelData->realParameterData[42].attribute /* powerBlock.HTR.T_comp_des[4] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[42].attribute /* powerBlock.HTR.T_comp_des[4] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[42].attribute /* powerBlock.HTR.T_comp_des[4] */.max;
  /* static nls data for powerBlock.HTR.T_turb_des[5] */
  sysData->nominal[i] = data->modelData->realParameterData[58].attribute /* powerBlock.HTR.T_turb_des[5] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[58].attribute /* powerBlock.HTR.T_turb_des[5] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[58].attribute /* powerBlock.HTR.T_turb_des[5] */.max;
  /* static nls data for powerBlock.HTR.T_comp_des[5] */
  sysData->nominal[i] = data->modelData->realParameterData[43].attribute /* powerBlock.HTR.T_comp_des[5] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[43].attribute /* powerBlock.HTR.T_comp_des[5] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[43].attribute /* powerBlock.HTR.T_comp_des[5] */.max;
  /* static nls data for powerBlock.HTR.T_turb_des[6] */
  sysData->nominal[i] = data->modelData->realParameterData[59].attribute /* powerBlock.HTR.T_turb_des[6] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[59].attribute /* powerBlock.HTR.T_turb_des[6] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[59].attribute /* powerBlock.HTR.T_turb_des[6] */.max;
  /* static nls data for powerBlock.HTR.T_comp_des[6] */
  sysData->nominal[i] = data->modelData->realParameterData[44].attribute /* powerBlock.HTR.T_comp_des[6] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[44].attribute /* powerBlock.HTR.T_comp_des[6] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[44].attribute /* powerBlock.HTR.T_comp_des[6] */.max;
  /* static nls data for powerBlock.HTR.T_turb_des[7] */
  sysData->nominal[i] = data->modelData->realParameterData[60].attribute /* powerBlock.HTR.T_turb_des[7] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[60].attribute /* powerBlock.HTR.T_turb_des[7] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[60].attribute /* powerBlock.HTR.T_turb_des[7] */.max;
  /* static nls data for powerBlock.HTR.T_comp_des[7] */
  sysData->nominal[i] = data->modelData->realParameterData[45].attribute /* powerBlock.HTR.T_comp_des[7] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[45].attribute /* powerBlock.HTR.T_comp_des[7] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[45].attribute /* powerBlock.HTR.T_comp_des[7] */.max;
  /* static nls data for powerBlock.HTR.T_turb_des[8] */
  sysData->nominal[i] = data->modelData->realParameterData[61].attribute /* powerBlock.HTR.T_turb_des[8] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[61].attribute /* powerBlock.HTR.T_turb_des[8] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[61].attribute /* powerBlock.HTR.T_turb_des[8] */.max;
  /* static nls data for powerBlock.HTR.T_comp_des[8] */
  sysData->nominal[i] = data->modelData->realParameterData[46].attribute /* powerBlock.HTR.T_comp_des[8] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[46].attribute /* powerBlock.HTR.T_comp_des[8] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[46].attribute /* powerBlock.HTR.T_comp_des[8] */.max;
  /* static nls data for powerBlock.HTR.T_turb_des[9] */
  sysData->nominal[i] = data->modelData->realParameterData[62].attribute /* powerBlock.HTR.T_turb_des[9] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[62].attribute /* powerBlock.HTR.T_turb_des[9] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[62].attribute /* powerBlock.HTR.T_turb_des[9] */.max;
  /* static nls data for powerBlock.HTR.T_comp_des[9] */
  sysData->nominal[i] = data->modelData->realParameterData[47].attribute /* powerBlock.HTR.T_comp_des[9] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[47].attribute /* powerBlock.HTR.T_comp_des[9] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[47].attribute /* powerBlock.HTR.T_comp_des[9] */.max;
  /* static nls data for powerBlock.HTR.T_turb_des[10] */
  sysData->nominal[i] = data->modelData->realParameterData[63].attribute /* powerBlock.HTR.T_turb_des[10] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[63].attribute /* powerBlock.HTR.T_turb_des[10] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[63].attribute /* powerBlock.HTR.T_turb_des[10] */.max;
  /* static nls data for powerBlock.HTR.T_comp_des[10] */
  sysData->nominal[i] = data->modelData->realParameterData[48].attribute /* powerBlock.HTR.T_comp_des[10] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[48].attribute /* powerBlock.HTR.T_comp_des[10] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[48].attribute /* powerBlock.HTR.T_comp_des[10] */.max;
  /* static nls data for powerBlock.HTR.T_turb_des[11] */
  sysData->nominal[i] = data->modelData->realParameterData[64].attribute /* powerBlock.HTR.T_turb_des[11] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[64].attribute /* powerBlock.HTR.T_turb_des[11] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[64].attribute /* powerBlock.HTR.T_turb_des[11] */.max;
  /* static nls data for powerBlock.HTR.T_comp_des[11] */
  sysData->nominal[i] = data->modelData->realParameterData[49].attribute /* powerBlock.HTR.T_comp_des[11] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[49].attribute /* powerBlock.HTR.T_comp_des[11] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[49].attribute /* powerBlock.HTR.T_comp_des[11] */.max;
  /* static nls data for powerBlock.HTR.T_turb_des[12] */
  sysData->nominal[i] = data->modelData->realParameterData[65].attribute /* powerBlock.HTR.T_turb_des[12] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[65].attribute /* powerBlock.HTR.T_turb_des[12] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[65].attribute /* powerBlock.HTR.T_turb_des[12] */.max;
  /* static nls data for powerBlock.HTR.T_comp_des[12] */
  sysData->nominal[i] = data->modelData->realParameterData[50].attribute /* powerBlock.HTR.T_comp_des[12] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[50].attribute /* powerBlock.HTR.T_comp_des[12] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[50].attribute /* powerBlock.HTR.T_comp_des[12] */.max;
  /* static nls data for powerBlock.HTR.T_turb_des[13] */
  sysData->nominal[i] = data->modelData->realParameterData[66].attribute /* powerBlock.HTR.T_turb_des[13] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[66].attribute /* powerBlock.HTR.T_turb_des[13] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[66].attribute /* powerBlock.HTR.T_turb_des[13] */.max;
  /* static nls data for powerBlock.HTR.T_comp_des[13] */
  sysData->nominal[i] = data->modelData->realParameterData[51].attribute /* powerBlock.HTR.T_comp_des[13] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[51].attribute /* powerBlock.HTR.T_comp_des[13] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[51].attribute /* powerBlock.HTR.T_comp_des[13] */.max;
  /* static nls data for powerBlock.HTR.T_turb_des[14] */
  sysData->nominal[i] = data->modelData->realParameterData[67].attribute /* powerBlock.HTR.T_turb_des[14] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[67].attribute /* powerBlock.HTR.T_turb_des[14] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[67].attribute /* powerBlock.HTR.T_turb_des[14] */.max;
  /* static nls data for powerBlock.HTR.T_comp_des[14] */
  sysData->nominal[i] = data->modelData->realParameterData[52].attribute /* powerBlock.HTR.T_comp_des[14] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[52].attribute /* powerBlock.HTR.T_comp_des[14] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[52].attribute /* powerBlock.HTR.T_comp_des[14] */.max;
  /* static nls data for powerBlock.LTR.T_turb_des[1] */
  sysData->nominal[i] = data->modelData->realParameterData[189].attribute /* powerBlock.LTR.T_turb_des[1] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[189].attribute /* powerBlock.LTR.T_turb_des[1] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[189].attribute /* powerBlock.LTR.T_turb_des[1] */.max;
  /* static nls data for powerBlock.HTR.Q_dis_des */
  sysData->nominal[i] = data->modelData->realParameterData[38].attribute /* powerBlock.HTR.Q_dis_des */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[38].attribute /* powerBlock.HTR.Q_dis_des */.min;
  sysData->max[i++]   = data->modelData->realParameterData[38].attribute /* powerBlock.HTR.Q_dis_des */.max;
  /* static nls data for powerBlock.LTR.Q_dis_des */
  sysData->nominal[i] = data->modelData->realParameterData[173].attribute /* powerBlock.LTR.Q_dis_des */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[173].attribute /* powerBlock.LTR.Q_dis_des */.min;
  sysData->max[i++]   = data->modelData->realParameterData[173].attribute /* powerBlock.LTR.Q_dis_des */.max;
  /* static nls data for powerBlock.HTR.T_comp_des[15] */
  sysData->nominal[i] = data->modelData->realParameterData[53].attribute /* powerBlock.HTR.T_comp_des[15] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[53].attribute /* powerBlock.HTR.T_comp_des[15] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[53].attribute /* powerBlock.HTR.T_comp_des[15] */.max;
  /* static nls data for powerBlock.reCompressor.state_in_des.h */
  sysData->nominal[i] = data->modelData->realParameterData[634].attribute /* powerBlock.reCompressor.state_in_des.h */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[634].attribute /* powerBlock.reCompressor.state_in_des.h */.min;
  sysData->max[i++]   = data->modelData->realParameterData[634].attribute /* powerBlock.reCompressor.state_in_des.h */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS399(sysData);
}

void getIterationVarsNLS399(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[232] /* powerBlock.LTR.deltaT_des[14] PARAM */;
  array[1] = data->simulationInfo->realParameter[187] /* powerBlock.LTR.T_comp_des[14] PARAM */;
  array[2] = data->simulationInfo->realParameter[201] /* powerBlock.LTR.T_turb_des[13] PARAM */;
  array[3] = data->simulationInfo->realParameter[186] /* powerBlock.LTR.T_comp_des[13] PARAM */;
  array[4] = data->simulationInfo->realParameter[200] /* powerBlock.LTR.T_turb_des[12] PARAM */;
  array[5] = data->simulationInfo->realParameter[185] /* powerBlock.LTR.T_comp_des[12] PARAM */;
  array[6] = data->simulationInfo->realParameter[199] /* powerBlock.LTR.T_turb_des[11] PARAM */;
  array[7] = data->simulationInfo->realParameter[184] /* powerBlock.LTR.T_comp_des[11] PARAM */;
  array[8] = data->simulationInfo->realParameter[198] /* powerBlock.LTR.T_turb_des[10] PARAM */;
  array[9] = data->simulationInfo->realParameter[183] /* powerBlock.LTR.T_comp_des[10] PARAM */;
  array[10] = data->simulationInfo->realParameter[197] /* powerBlock.LTR.T_turb_des[9] PARAM */;
  array[11] = data->simulationInfo->realParameter[182] /* powerBlock.LTR.T_comp_des[9] PARAM */;
  array[12] = data->simulationInfo->realParameter[196] /* powerBlock.LTR.T_turb_des[8] PARAM */;
  array[13] = data->simulationInfo->realParameter[181] /* powerBlock.LTR.T_comp_des[8] PARAM */;
  array[14] = data->simulationInfo->realParameter[195] /* powerBlock.LTR.T_turb_des[7] PARAM */;
  array[15] = data->simulationInfo->realParameter[180] /* powerBlock.LTR.T_comp_des[7] PARAM */;
  array[16] = data->simulationInfo->realParameter[194] /* powerBlock.LTR.T_turb_des[6] PARAM */;
  array[17] = data->simulationInfo->realParameter[179] /* powerBlock.LTR.T_comp_des[6] PARAM */;
  array[18] = data->simulationInfo->realParameter[193] /* powerBlock.LTR.T_turb_des[5] PARAM */;
  array[19] = data->simulationInfo->realParameter[178] /* powerBlock.LTR.T_comp_des[5] PARAM */;
  array[20] = data->simulationInfo->realParameter[192] /* powerBlock.LTR.T_turb_des[4] PARAM */;
  array[21] = data->simulationInfo->realParameter[177] /* powerBlock.LTR.T_comp_des[4] PARAM */;
  array[22] = data->simulationInfo->realParameter[191] /* powerBlock.LTR.T_turb_des[3] PARAM */;
  array[23] = data->simulationInfo->realParameter[176] /* powerBlock.LTR.T_comp_des[3] PARAM */;
  array[24] = data->simulationInfo->realParameter[190] /* powerBlock.LTR.T_turb_des[2] PARAM */;
  array[25] = data->simulationInfo->realParameter[175] /* powerBlock.LTR.T_comp_des[2] PARAM */;
  array[26] = data->simulationInfo->realParameter[203] /* powerBlock.LTR.T_turb_des[15] PARAM */;
  array[27] = data->simulationInfo->realParameter[188] /* powerBlock.LTR.T_comp_des[15] PARAM */;
  array[28] = data->simulationInfo->realParameter[84] /* powerBlock.HTR.deltaT_des[1] PARAM */;
  array[29] = data->simulationInfo->realParameter[39] /* powerBlock.HTR.T_comp_des[1] PARAM */;
  array[30] = data->simulationInfo->realParameter[55] /* powerBlock.HTR.T_turb_des[2] PARAM */;
  array[31] = data->simulationInfo->realParameter[40] /* powerBlock.HTR.T_comp_des[2] PARAM */;
  array[32] = data->simulationInfo->realParameter[56] /* powerBlock.HTR.T_turb_des[3] PARAM */;
  array[33] = data->simulationInfo->realParameter[41] /* powerBlock.HTR.T_comp_des[3] PARAM */;
  array[34] = data->simulationInfo->realParameter[57] /* powerBlock.HTR.T_turb_des[4] PARAM */;
  array[35] = data->simulationInfo->realParameter[42] /* powerBlock.HTR.T_comp_des[4] PARAM */;
  array[36] = data->simulationInfo->realParameter[58] /* powerBlock.HTR.T_turb_des[5] PARAM */;
  array[37] = data->simulationInfo->realParameter[43] /* powerBlock.HTR.T_comp_des[5] PARAM */;
  array[38] = data->simulationInfo->realParameter[59] /* powerBlock.HTR.T_turb_des[6] PARAM */;
  array[39] = data->simulationInfo->realParameter[44] /* powerBlock.HTR.T_comp_des[6] PARAM */;
  array[40] = data->simulationInfo->realParameter[60] /* powerBlock.HTR.T_turb_des[7] PARAM */;
  array[41] = data->simulationInfo->realParameter[45] /* powerBlock.HTR.T_comp_des[7] PARAM */;
  array[42] = data->simulationInfo->realParameter[61] /* powerBlock.HTR.T_turb_des[8] PARAM */;
  array[43] = data->simulationInfo->realParameter[46] /* powerBlock.HTR.T_comp_des[8] PARAM */;
  array[44] = data->simulationInfo->realParameter[62] /* powerBlock.HTR.T_turb_des[9] PARAM */;
  array[45] = data->simulationInfo->realParameter[47] /* powerBlock.HTR.T_comp_des[9] PARAM */;
  array[46] = data->simulationInfo->realParameter[63] /* powerBlock.HTR.T_turb_des[10] PARAM */;
  array[47] = data->simulationInfo->realParameter[48] /* powerBlock.HTR.T_comp_des[10] PARAM */;
  array[48] = data->simulationInfo->realParameter[64] /* powerBlock.HTR.T_turb_des[11] PARAM */;
  array[49] = data->simulationInfo->realParameter[49] /* powerBlock.HTR.T_comp_des[11] PARAM */;
  array[50] = data->simulationInfo->realParameter[65] /* powerBlock.HTR.T_turb_des[12] PARAM */;
  array[51] = data->simulationInfo->realParameter[50] /* powerBlock.HTR.T_comp_des[12] PARAM */;
  array[52] = data->simulationInfo->realParameter[66] /* powerBlock.HTR.T_turb_des[13] PARAM */;
  array[53] = data->simulationInfo->realParameter[51] /* powerBlock.HTR.T_comp_des[13] PARAM */;
  array[54] = data->simulationInfo->realParameter[67] /* powerBlock.HTR.T_turb_des[14] PARAM */;
  array[55] = data->simulationInfo->realParameter[52] /* powerBlock.HTR.T_comp_des[14] PARAM */;
  array[56] = data->simulationInfo->realParameter[189] /* powerBlock.LTR.T_turb_des[1] PARAM */;
  array[57] = data->simulationInfo->realParameter[38] /* powerBlock.HTR.Q_dis_des PARAM */;
  array[58] = data->simulationInfo->realParameter[173] /* powerBlock.LTR.Q_dis_des PARAM */;
  array[59] = data->simulationInfo->realParameter[53] /* powerBlock.HTR.T_comp_des[15] PARAM */;
  array[60] = data->simulationInfo->realParameter[634] /* powerBlock.reCompressor.state_in_des.h PARAM */;
}


/* inner equations */

void residualFunc213(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,213};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[68] /* powerBlock.HTR.T_turb_des[15] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[155] /* powerBlock.HTR.state_turb_des[15].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[106] /* powerBlock.HTR.p_in_turb_des PARAM */, data->simulationInfo->realParameter[68] /* powerBlock.HTR.T_turb_des[15] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS213(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS213(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.HTR.T_turb_des[15] */
  sysData->nominal[i] = data->modelData->realParameterData[68].attribute /* powerBlock.HTR.T_turb_des[15] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[68].attribute /* powerBlock.HTR.T_turb_des[15] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[68].attribute /* powerBlock.HTR.T_turb_des[15] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS213(sysData);
}

void getIterationVarsNLS213(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[68] /* powerBlock.HTR.T_turb_des[15] PARAM */;
}


/* inner equations */

void residualFunc205(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,205};
  int i;
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[174] /* powerBlock.LTR.T_comp_des[1] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  res[0] = data->simulationInfo->realParameter[246] /* powerBlock.LTR.state_comp_des[1].h PARAM */ - omc_SolarTherm_Media_CO2_CO2__utilities_h__p__T(threadData, data->simulationInfo->realParameter[240] /* powerBlock.LTR.p_in_comp_des PARAM */, data->simulationInfo->realParameter[174] /* powerBlock.LTR.T_comp_des[1] PARAM */, data->simulationInfo->extObjs[38]);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS205(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS205(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.LTR.T_comp_des[1] */
  sysData->nominal[i] = data->modelData->realParameterData[174].attribute /* powerBlock.LTR.T_comp_des[1] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[174].attribute /* powerBlock.LTR.T_comp_des[1] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[174].attribute /* powerBlock.LTR.T_comp_des[1] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS205(sysData);
}

void getIterationVarsNLS205(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[174] /* powerBlock.LTR.T_comp_des[1] PARAM */;
}


/* inner equations */

void residualFunc91(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,91};
  int i;
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
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[462] /* powerBlock.exchanger.T_HTF_des[14] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->simulationInfo->realParameter[462] /* powerBlock.exchanger.T_HTF_des[14] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[462] /* powerBlock.exchanger.T_HTF_des[14] PARAM */;
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
  res[0] = data->simulationInfo->realParameter[565] /* powerBlock.exchanger.state_HTF_des[14].h PARAM */ - (tmp9);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS91(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS91(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_HTF_des[14] */
  sysData->nominal[i] = data->modelData->realParameterData[462].attribute /* powerBlock.exchanger.T_HTF_des[14] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[462].attribute /* powerBlock.exchanger.T_HTF_des[14] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[462].attribute /* powerBlock.exchanger.T_HTF_des[14] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS91(sysData);
}

void getIterationVarsNLS91(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[462] /* powerBlock.exchanger.T_HTF_des[14] PARAM */;
}


/* inner equations */

void residualFunc89(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,89};
  int i;
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
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[461] /* powerBlock.exchanger.T_HTF_des[13] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->simulationInfo->realParameter[461] /* powerBlock.exchanger.T_HTF_des[13] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[461] /* powerBlock.exchanger.T_HTF_des[13] PARAM */;
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
  res[0] = data->simulationInfo->realParameter[564] /* powerBlock.exchanger.state_HTF_des[13].h PARAM */ - (tmp9);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS89(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS89(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_HTF_des[13] */
  sysData->nominal[i] = data->modelData->realParameterData[461].attribute /* powerBlock.exchanger.T_HTF_des[13] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[461].attribute /* powerBlock.exchanger.T_HTF_des[13] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[461].attribute /* powerBlock.exchanger.T_HTF_des[13] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS89(sysData);
}

void getIterationVarsNLS89(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[461] /* powerBlock.exchanger.T_HTF_des[13] PARAM */;
}


/* inner equations */

void residualFunc87(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,87};
  int i;
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
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[460] /* powerBlock.exchanger.T_HTF_des[12] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->simulationInfo->realParameter[460] /* powerBlock.exchanger.T_HTF_des[12] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[460] /* powerBlock.exchanger.T_HTF_des[12] PARAM */;
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
  res[0] = data->simulationInfo->realParameter[563] /* powerBlock.exchanger.state_HTF_des[12].h PARAM */ - (tmp9);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS87(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS87(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_HTF_des[12] */
  sysData->nominal[i] = data->modelData->realParameterData[460].attribute /* powerBlock.exchanger.T_HTF_des[12] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[460].attribute /* powerBlock.exchanger.T_HTF_des[12] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[460].attribute /* powerBlock.exchanger.T_HTF_des[12] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS87(sysData);
}

void getIterationVarsNLS87(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[460] /* powerBlock.exchanger.T_HTF_des[12] PARAM */;
}


/* inner equations */

void residualFunc85(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,85};
  int i;
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
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[459] /* powerBlock.exchanger.T_HTF_des[11] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->simulationInfo->realParameter[459] /* powerBlock.exchanger.T_HTF_des[11] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[459] /* powerBlock.exchanger.T_HTF_des[11] PARAM */;
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
  res[0] = data->simulationInfo->realParameter[562] /* powerBlock.exchanger.state_HTF_des[11].h PARAM */ - (tmp9);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS85(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS85(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_HTF_des[11] */
  sysData->nominal[i] = data->modelData->realParameterData[459].attribute /* powerBlock.exchanger.T_HTF_des[11] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[459].attribute /* powerBlock.exchanger.T_HTF_des[11] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[459].attribute /* powerBlock.exchanger.T_HTF_des[11] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS85(sysData);
}

void getIterationVarsNLS85(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[459] /* powerBlock.exchanger.T_HTF_des[11] PARAM */;
}


/* inner equations */

void residualFunc83(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,83};
  int i;
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
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[458] /* powerBlock.exchanger.T_HTF_des[10] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->simulationInfo->realParameter[458] /* powerBlock.exchanger.T_HTF_des[10] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[458] /* powerBlock.exchanger.T_HTF_des[10] PARAM */;
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
  res[0] = data->simulationInfo->realParameter[561] /* powerBlock.exchanger.state_HTF_des[10].h PARAM */ - (tmp9);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS83(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS83(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_HTF_des[10] */
  sysData->nominal[i] = data->modelData->realParameterData[458].attribute /* powerBlock.exchanger.T_HTF_des[10] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[458].attribute /* powerBlock.exchanger.T_HTF_des[10] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[458].attribute /* powerBlock.exchanger.T_HTF_des[10] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS83(sysData);
}

void getIterationVarsNLS83(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[458] /* powerBlock.exchanger.T_HTF_des[10] PARAM */;
}


/* inner equations */

void residualFunc81(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,81};
  int i;
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
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[457] /* powerBlock.exchanger.T_HTF_des[9] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->simulationInfo->realParameter[457] /* powerBlock.exchanger.T_HTF_des[9] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[457] /* powerBlock.exchanger.T_HTF_des[9] PARAM */;
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
  res[0] = data->simulationInfo->realParameter[560] /* powerBlock.exchanger.state_HTF_des[9].h PARAM */ - (tmp9);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS81(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS81(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_HTF_des[9] */
  sysData->nominal[i] = data->modelData->realParameterData[457].attribute /* powerBlock.exchanger.T_HTF_des[9] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[457].attribute /* powerBlock.exchanger.T_HTF_des[9] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[457].attribute /* powerBlock.exchanger.T_HTF_des[9] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS81(sysData);
}

void getIterationVarsNLS81(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[457] /* powerBlock.exchanger.T_HTF_des[9] PARAM */;
}


/* inner equations */

void residualFunc79(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,79};
  int i;
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
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[456] /* powerBlock.exchanger.T_HTF_des[8] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->simulationInfo->realParameter[456] /* powerBlock.exchanger.T_HTF_des[8] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[456] /* powerBlock.exchanger.T_HTF_des[8] PARAM */;
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
  res[0] = data->simulationInfo->realParameter[559] /* powerBlock.exchanger.state_HTF_des[8].h PARAM */ - (tmp9);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS79(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS79(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_HTF_des[8] */
  sysData->nominal[i] = data->modelData->realParameterData[456].attribute /* powerBlock.exchanger.T_HTF_des[8] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[456].attribute /* powerBlock.exchanger.T_HTF_des[8] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[456].attribute /* powerBlock.exchanger.T_HTF_des[8] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS79(sysData);
}

void getIterationVarsNLS79(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[456] /* powerBlock.exchanger.T_HTF_des[8] PARAM */;
}


/* inner equations */

void residualFunc77(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,77};
  int i;
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
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[455] /* powerBlock.exchanger.T_HTF_des[7] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->simulationInfo->realParameter[455] /* powerBlock.exchanger.T_HTF_des[7] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[455] /* powerBlock.exchanger.T_HTF_des[7] PARAM */;
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
  res[0] = data->simulationInfo->realParameter[558] /* powerBlock.exchanger.state_HTF_des[7].h PARAM */ - (tmp9);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS77(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS77(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_HTF_des[7] */
  sysData->nominal[i] = data->modelData->realParameterData[455].attribute /* powerBlock.exchanger.T_HTF_des[7] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[455].attribute /* powerBlock.exchanger.T_HTF_des[7] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[455].attribute /* powerBlock.exchanger.T_HTF_des[7] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS77(sysData);
}

void getIterationVarsNLS77(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[455] /* powerBlock.exchanger.T_HTF_des[7] PARAM */;
}


/* inner equations */

void residualFunc75(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,75};
  int i;
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
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[454] /* powerBlock.exchanger.T_HTF_des[6] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->simulationInfo->realParameter[454] /* powerBlock.exchanger.T_HTF_des[6] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[454] /* powerBlock.exchanger.T_HTF_des[6] PARAM */;
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
  res[0] = data->simulationInfo->realParameter[557] /* powerBlock.exchanger.state_HTF_des[6].h PARAM */ - (tmp9);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS75(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS75(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_HTF_des[6] */
  sysData->nominal[i] = data->modelData->realParameterData[454].attribute /* powerBlock.exchanger.T_HTF_des[6] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[454].attribute /* powerBlock.exchanger.T_HTF_des[6] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[454].attribute /* powerBlock.exchanger.T_HTF_des[6] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS75(sysData);
}

void getIterationVarsNLS75(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[454] /* powerBlock.exchanger.T_HTF_des[6] PARAM */;
}


/* inner equations */

void residualFunc73(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,73};
  int i;
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
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[453] /* powerBlock.exchanger.T_HTF_des[5] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->simulationInfo->realParameter[453] /* powerBlock.exchanger.T_HTF_des[5] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[453] /* powerBlock.exchanger.T_HTF_des[5] PARAM */;
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
  res[0] = data->simulationInfo->realParameter[556] /* powerBlock.exchanger.state_HTF_des[5].h PARAM */ - (tmp9);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS73(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS73(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_HTF_des[5] */
  sysData->nominal[i] = data->modelData->realParameterData[453].attribute /* powerBlock.exchanger.T_HTF_des[5] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[453].attribute /* powerBlock.exchanger.T_HTF_des[5] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[453].attribute /* powerBlock.exchanger.T_HTF_des[5] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS73(sysData);
}

void getIterationVarsNLS73(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[453] /* powerBlock.exchanger.T_HTF_des[5] PARAM */;
}


/* inner equations */

void residualFunc71(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,71};
  int i;
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
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[452] /* powerBlock.exchanger.T_HTF_des[4] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->simulationInfo->realParameter[452] /* powerBlock.exchanger.T_HTF_des[4] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[452] /* powerBlock.exchanger.T_HTF_des[4] PARAM */;
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
  res[0] = data->simulationInfo->realParameter[555] /* powerBlock.exchanger.state_HTF_des[4].h PARAM */ - (tmp9);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS71(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS71(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_HTF_des[4] */
  sysData->nominal[i] = data->modelData->realParameterData[452].attribute /* powerBlock.exchanger.T_HTF_des[4] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[452].attribute /* powerBlock.exchanger.T_HTF_des[4] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[452].attribute /* powerBlock.exchanger.T_HTF_des[4] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS71(sysData);
}

void getIterationVarsNLS71(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[452] /* powerBlock.exchanger.T_HTF_des[4] PARAM */;
}


/* inner equations */

void residualFunc69(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,69};
  int i;
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
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[451] /* powerBlock.exchanger.T_HTF_des[3] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->simulationInfo->realParameter[451] /* powerBlock.exchanger.T_HTF_des[3] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[451] /* powerBlock.exchanger.T_HTF_des[3] PARAM */;
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
  res[0] = data->simulationInfo->realParameter[554] /* powerBlock.exchanger.state_HTF_des[3].h PARAM */ - (tmp9);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS69(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS69(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_HTF_des[3] */
  sysData->nominal[i] = data->modelData->realParameterData[451].attribute /* powerBlock.exchanger.T_HTF_des[3] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[451].attribute /* powerBlock.exchanger.T_HTF_des[3] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[451].attribute /* powerBlock.exchanger.T_HTF_des[3] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS69(sysData);
}

void getIterationVarsNLS69(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[451] /* powerBlock.exchanger.T_HTF_des[3] PARAM */;
}


/* inner equations */

void residualFunc67(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,67};
  int i;
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
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[450] /* powerBlock.exchanger.T_HTF_des[2] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->simulationInfo->realParameter[450] /* powerBlock.exchanger.T_HTF_des[2] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[450] /* powerBlock.exchanger.T_HTF_des[2] PARAM */;
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
  res[0] = data->simulationInfo->realParameter[553] /* powerBlock.exchanger.state_HTF_des[2].h PARAM */ - (tmp9);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS67(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS67(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_HTF_des[2] */
  sysData->nominal[i] = data->modelData->realParameterData[450].attribute /* powerBlock.exchanger.T_HTF_des[2] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[450].attribute /* powerBlock.exchanger.T_HTF_des[2] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[450].attribute /* powerBlock.exchanger.T_HTF_des[2] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS67(sysData);
}

void getIterationVarsNLS67(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[450] /* powerBlock.exchanger.T_HTF_des[2] PARAM */;
}


/* inner equations */

void residualFunc36(void** dataIn, const double* xloc, double* res, const int* iflag)
{
  TRACE_PUSH
  DATA *data = (DATA*) ((void**)dataIn[0]);
  threadData_t *threadData = (threadData_t*) ((void**)dataIn[1]);
  const int equationIndexes[2] = {1,36};
  int i;
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
  /* iteration variables */
  for (i=0; i<1; i++) {
    if (isinf(xloc[i]) || isnan(xloc[i])) {
      for (i=0; i<1; i++) {
        res[i] = NAN;
      }
      return;
    }
  }
  data->simulationInfo->realParameter[463] /* powerBlock.exchanger.T_HTF_des[15] PARAM */ = xloc[0];
  /* backup outputs */
  /* pre body */
  /* body */
  tmp0 = Less(data->simulationInfo->realParameter[463] /* powerBlock.exchanger.T_HTF_des[15] PARAM */,0.0);
  tmp8 = (modelica_boolean)tmp0;
  if(tmp8)
  {
    tmp9 = 0.0;
  }
  else
  {
    tmp1 = data->simulationInfo->realParameter[463] /* powerBlock.exchanger.T_HTF_des[15] PARAM */;
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
  res[0] = data->simulationInfo->realParameter[566] /* powerBlock.exchanger.state_HTF_des[15].h PARAM */ - (tmp9);
  /* restore known outputs */
  TRACE_POP
}
void initializeSparsePatternNLS36(NONLINEAR_SYSTEM_DATA* inSysData)
{
  /* no sparsity pattern available */
  inSysData->isPatternAvailable = 0;
}
void initializeStaticDataNLS36(void *inData, threadData_t *threadData, void *inSystemData)
{
  DATA* data = (DATA*) inData;
  NONLINEAR_SYSTEM_DATA* sysData = (NONLINEAR_SYSTEM_DATA*) inSystemData;
  int i=0;
  /* static nls data for powerBlock.exchanger.T_HTF_des[15] */
  sysData->nominal[i] = data->modelData->realParameterData[463].attribute /* powerBlock.exchanger.T_HTF_des[15] */.nominal;
  sysData->min[i]     = data->modelData->realParameterData[463].attribute /* powerBlock.exchanger.T_HTF_des[15] */.min;
  sysData->max[i++]   = data->modelData->realParameterData[463].attribute /* powerBlock.exchanger.T_HTF_des[15] */.max;
  /* initial sparse pattern */
  initializeSparsePatternNLS36(sysData);
}

void getIterationVarsNLS36(struct DATA *inData, double *array)
{
  DATA* data = (DATA*) inData;
  array[0] = data->simulationInfo->realParameter[463] /* powerBlock.exchanger.T_HTF_des[15] PARAM */;
}

/* Prototypes for the strict sets (Dynamic Tearing) */

/* Global constraints for the casual sets */
/* function initialize non-linear systems */
void sCO2PBRig_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA* nonLinearSystemData)
{
  
  nonLinearSystemData[47].equationIndex = 1164;
  nonLinearSystemData[47].size = 74;
  nonLinearSystemData[47].homotopySupport = 0;
  nonLinearSystemData[47].mixedSystem = 0;
  nonLinearSystemData[47].residualFunc = residualFunc1164;
  nonLinearSystemData[47].strictTearingFunctionCall = NULL;
  nonLinearSystemData[47].analyticalJacobianColumn = NULL;
  nonLinearSystemData[47].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[47].jacobianIndex = -1;
  nonLinearSystemData[47].initializeStaticNLSData = initializeStaticDataNLS1164;
  nonLinearSystemData[47].getIterationVars = getIterationVarsNLS1164;
  nonLinearSystemData[47].checkConstraints = NULL;
  
  
  nonLinearSystemData[46].equationIndex = 863;
  nonLinearSystemData[46].size = 74;
  nonLinearSystemData[46].homotopySupport = 0;
  nonLinearSystemData[46].mixedSystem = 0;
  nonLinearSystemData[46].residualFunc = residualFunc863;
  nonLinearSystemData[46].strictTearingFunctionCall = NULL;
  nonLinearSystemData[46].analyticalJacobianColumn = NULL;
  nonLinearSystemData[46].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[46].jacobianIndex = -1;
  nonLinearSystemData[46].initializeStaticNLSData = initializeStaticDataNLS863;
  nonLinearSystemData[46].getIterationVars = getIterationVarsNLS863;
  nonLinearSystemData[46].checkConstraints = NULL;
  
  
  nonLinearSystemData[45].equationIndex = 559;
  nonLinearSystemData[45].size = 1;
  nonLinearSystemData[45].homotopySupport = 0;
  nonLinearSystemData[45].mixedSystem = 0;
  nonLinearSystemData[45].residualFunc = residualFunc559;
  nonLinearSystemData[45].strictTearingFunctionCall = NULL;
  nonLinearSystemData[45].analyticalJacobianColumn = NULL;
  nonLinearSystemData[45].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[45].jacobianIndex = -1;
  nonLinearSystemData[45].initializeStaticNLSData = initializeStaticDataNLS559;
  nonLinearSystemData[45].getIterationVars = getIterationVarsNLS559;
  nonLinearSystemData[45].checkConstraints = NULL;
  
  
  nonLinearSystemData[44].equationIndex = 555;
  nonLinearSystemData[44].size = 1;
  nonLinearSystemData[44].homotopySupport = 0;
  nonLinearSystemData[44].mixedSystem = 0;
  nonLinearSystemData[44].residualFunc = residualFunc555;
  nonLinearSystemData[44].strictTearingFunctionCall = NULL;
  nonLinearSystemData[44].analyticalJacobianColumn = NULL;
  nonLinearSystemData[44].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[44].jacobianIndex = -1;
  nonLinearSystemData[44].initializeStaticNLSData = initializeStaticDataNLS555;
  nonLinearSystemData[44].getIterationVars = getIterationVarsNLS555;
  nonLinearSystemData[44].checkConstraints = NULL;
  
  
  nonLinearSystemData[43].equationIndex = 551;
  nonLinearSystemData[43].size = 1;
  nonLinearSystemData[43].homotopySupport = 0;
  nonLinearSystemData[43].mixedSystem = 0;
  nonLinearSystemData[43].residualFunc = residualFunc551;
  nonLinearSystemData[43].strictTearingFunctionCall = NULL;
  nonLinearSystemData[43].analyticalJacobianColumn = NULL;
  nonLinearSystemData[43].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[43].jacobianIndex = -1;
  nonLinearSystemData[43].initializeStaticNLSData = initializeStaticDataNLS551;
  nonLinearSystemData[43].getIterationVars = getIterationVarsNLS551;
  nonLinearSystemData[43].checkConstraints = NULL;
  
  
  nonLinearSystemData[42].equationIndex = 547;
  nonLinearSystemData[42].size = 1;
  nonLinearSystemData[42].homotopySupport = 0;
  nonLinearSystemData[42].mixedSystem = 0;
  nonLinearSystemData[42].residualFunc = residualFunc547;
  nonLinearSystemData[42].strictTearingFunctionCall = NULL;
  nonLinearSystemData[42].analyticalJacobianColumn = NULL;
  nonLinearSystemData[42].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[42].jacobianIndex = -1;
  nonLinearSystemData[42].initializeStaticNLSData = initializeStaticDataNLS547;
  nonLinearSystemData[42].getIterationVars = getIterationVarsNLS547;
  nonLinearSystemData[42].checkConstraints = NULL;
  
  
  nonLinearSystemData[41].equationIndex = 543;
  nonLinearSystemData[41].size = 1;
  nonLinearSystemData[41].homotopySupport = 0;
  nonLinearSystemData[41].mixedSystem = 0;
  nonLinearSystemData[41].residualFunc = residualFunc543;
  nonLinearSystemData[41].strictTearingFunctionCall = NULL;
  nonLinearSystemData[41].analyticalJacobianColumn = NULL;
  nonLinearSystemData[41].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[41].jacobianIndex = -1;
  nonLinearSystemData[41].initializeStaticNLSData = initializeStaticDataNLS543;
  nonLinearSystemData[41].getIterationVars = getIterationVarsNLS543;
  nonLinearSystemData[41].checkConstraints = NULL;
  
  
  nonLinearSystemData[40].equationIndex = 539;
  nonLinearSystemData[40].size = 1;
  nonLinearSystemData[40].homotopySupport = 0;
  nonLinearSystemData[40].mixedSystem = 0;
  nonLinearSystemData[40].residualFunc = residualFunc539;
  nonLinearSystemData[40].strictTearingFunctionCall = NULL;
  nonLinearSystemData[40].analyticalJacobianColumn = NULL;
  nonLinearSystemData[40].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[40].jacobianIndex = -1;
  nonLinearSystemData[40].initializeStaticNLSData = initializeStaticDataNLS539;
  nonLinearSystemData[40].getIterationVars = getIterationVarsNLS539;
  nonLinearSystemData[40].checkConstraints = NULL;
  
  
  nonLinearSystemData[39].equationIndex = 535;
  nonLinearSystemData[39].size = 1;
  nonLinearSystemData[39].homotopySupport = 0;
  nonLinearSystemData[39].mixedSystem = 0;
  nonLinearSystemData[39].residualFunc = residualFunc535;
  nonLinearSystemData[39].strictTearingFunctionCall = NULL;
  nonLinearSystemData[39].analyticalJacobianColumn = NULL;
  nonLinearSystemData[39].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[39].jacobianIndex = -1;
  nonLinearSystemData[39].initializeStaticNLSData = initializeStaticDataNLS535;
  nonLinearSystemData[39].getIterationVars = getIterationVarsNLS535;
  nonLinearSystemData[39].checkConstraints = NULL;
  
  
  nonLinearSystemData[38].equationIndex = 531;
  nonLinearSystemData[38].size = 1;
  nonLinearSystemData[38].homotopySupport = 0;
  nonLinearSystemData[38].mixedSystem = 0;
  nonLinearSystemData[38].residualFunc = residualFunc531;
  nonLinearSystemData[38].strictTearingFunctionCall = NULL;
  nonLinearSystemData[38].analyticalJacobianColumn = NULL;
  nonLinearSystemData[38].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[38].jacobianIndex = -1;
  nonLinearSystemData[38].initializeStaticNLSData = initializeStaticDataNLS531;
  nonLinearSystemData[38].getIterationVars = getIterationVarsNLS531;
  nonLinearSystemData[38].checkConstraints = NULL;
  
  
  nonLinearSystemData[37].equationIndex = 527;
  nonLinearSystemData[37].size = 1;
  nonLinearSystemData[37].homotopySupport = 0;
  nonLinearSystemData[37].mixedSystem = 0;
  nonLinearSystemData[37].residualFunc = residualFunc527;
  nonLinearSystemData[37].strictTearingFunctionCall = NULL;
  nonLinearSystemData[37].analyticalJacobianColumn = NULL;
  nonLinearSystemData[37].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[37].jacobianIndex = -1;
  nonLinearSystemData[37].initializeStaticNLSData = initializeStaticDataNLS527;
  nonLinearSystemData[37].getIterationVars = getIterationVarsNLS527;
  nonLinearSystemData[37].checkConstraints = NULL;
  
  
  nonLinearSystemData[36].equationIndex = 523;
  nonLinearSystemData[36].size = 1;
  nonLinearSystemData[36].homotopySupport = 0;
  nonLinearSystemData[36].mixedSystem = 0;
  nonLinearSystemData[36].residualFunc = residualFunc523;
  nonLinearSystemData[36].strictTearingFunctionCall = NULL;
  nonLinearSystemData[36].analyticalJacobianColumn = NULL;
  nonLinearSystemData[36].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[36].jacobianIndex = -1;
  nonLinearSystemData[36].initializeStaticNLSData = initializeStaticDataNLS523;
  nonLinearSystemData[36].getIterationVars = getIterationVarsNLS523;
  nonLinearSystemData[36].checkConstraints = NULL;
  
  
  nonLinearSystemData[35].equationIndex = 519;
  nonLinearSystemData[35].size = 1;
  nonLinearSystemData[35].homotopySupport = 0;
  nonLinearSystemData[35].mixedSystem = 0;
  nonLinearSystemData[35].residualFunc = residualFunc519;
  nonLinearSystemData[35].strictTearingFunctionCall = NULL;
  nonLinearSystemData[35].analyticalJacobianColumn = NULL;
  nonLinearSystemData[35].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[35].jacobianIndex = -1;
  nonLinearSystemData[35].initializeStaticNLSData = initializeStaticDataNLS519;
  nonLinearSystemData[35].getIterationVars = getIterationVarsNLS519;
  nonLinearSystemData[35].checkConstraints = NULL;
  
  
  nonLinearSystemData[34].equationIndex = 515;
  nonLinearSystemData[34].size = 1;
  nonLinearSystemData[34].homotopySupport = 0;
  nonLinearSystemData[34].mixedSystem = 0;
  nonLinearSystemData[34].residualFunc = residualFunc515;
  nonLinearSystemData[34].strictTearingFunctionCall = NULL;
  nonLinearSystemData[34].analyticalJacobianColumn = NULL;
  nonLinearSystemData[34].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[34].jacobianIndex = -1;
  nonLinearSystemData[34].initializeStaticNLSData = initializeStaticDataNLS515;
  nonLinearSystemData[34].getIterationVars = getIterationVarsNLS515;
  nonLinearSystemData[34].checkConstraints = NULL;
  
  
  nonLinearSystemData[33].equationIndex = 511;
  nonLinearSystemData[33].size = 1;
  nonLinearSystemData[33].homotopySupport = 0;
  nonLinearSystemData[33].mixedSystem = 0;
  nonLinearSystemData[33].residualFunc = residualFunc511;
  nonLinearSystemData[33].strictTearingFunctionCall = NULL;
  nonLinearSystemData[33].analyticalJacobianColumn = NULL;
  nonLinearSystemData[33].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[33].jacobianIndex = -1;
  nonLinearSystemData[33].initializeStaticNLSData = initializeStaticDataNLS511;
  nonLinearSystemData[33].getIterationVars = getIterationVarsNLS511;
  nonLinearSystemData[33].checkConstraints = NULL;
  
  
  nonLinearSystemData[32].equationIndex = 479;
  nonLinearSystemData[32].size = 1;
  nonLinearSystemData[32].homotopySupport = 0;
  nonLinearSystemData[32].mixedSystem = 0;
  nonLinearSystemData[32].residualFunc = residualFunc479;
  nonLinearSystemData[32].strictTearingFunctionCall = NULL;
  nonLinearSystemData[32].analyticalJacobianColumn = NULL;
  nonLinearSystemData[32].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[32].jacobianIndex = -1;
  nonLinearSystemData[32].initializeStaticNLSData = initializeStaticDataNLS479;
  nonLinearSystemData[32].getIterationVars = getIterationVarsNLS479;
  nonLinearSystemData[32].checkConstraints = NULL;
  
  
  nonLinearSystemData[31].equationIndex = 473;
  nonLinearSystemData[31].size = 1;
  nonLinearSystemData[31].homotopySupport = 0;
  nonLinearSystemData[31].mixedSystem = 0;
  nonLinearSystemData[31].residualFunc = residualFunc473;
  nonLinearSystemData[31].strictTearingFunctionCall = NULL;
  nonLinearSystemData[31].analyticalJacobianColumn = NULL;
  nonLinearSystemData[31].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[31].jacobianIndex = -1;
  nonLinearSystemData[31].initializeStaticNLSData = initializeStaticDataNLS473;
  nonLinearSystemData[31].getIterationVars = getIterationVarsNLS473;
  nonLinearSystemData[31].checkConstraints = NULL;
  
  
  nonLinearSystemData[30].equationIndex = 470;
  nonLinearSystemData[30].size = 1;
  nonLinearSystemData[30].homotopySupport = 0;
  nonLinearSystemData[30].mixedSystem = 0;
  nonLinearSystemData[30].residualFunc = residualFunc470;
  nonLinearSystemData[30].strictTearingFunctionCall = NULL;
  nonLinearSystemData[30].analyticalJacobianColumn = NULL;
  nonLinearSystemData[30].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[30].jacobianIndex = -1;
  nonLinearSystemData[30].initializeStaticNLSData = initializeStaticDataNLS470;
  nonLinearSystemData[30].getIterationVars = getIterationVarsNLS470;
  nonLinearSystemData[30].checkConstraints = NULL;
  
  
  nonLinearSystemData[29].equationIndex = 467;
  nonLinearSystemData[29].size = 1;
  nonLinearSystemData[29].homotopySupport = 0;
  nonLinearSystemData[29].mixedSystem = 0;
  nonLinearSystemData[29].residualFunc = residualFunc467;
  nonLinearSystemData[29].strictTearingFunctionCall = NULL;
  nonLinearSystemData[29].analyticalJacobianColumn = NULL;
  nonLinearSystemData[29].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[29].jacobianIndex = -1;
  nonLinearSystemData[29].initializeStaticNLSData = initializeStaticDataNLS467;
  nonLinearSystemData[29].getIterationVars = getIterationVarsNLS467;
  nonLinearSystemData[29].checkConstraints = NULL;
  
  
  nonLinearSystemData[28].equationIndex = 464;
  nonLinearSystemData[28].size = 1;
  nonLinearSystemData[28].homotopySupport = 0;
  nonLinearSystemData[28].mixedSystem = 0;
  nonLinearSystemData[28].residualFunc = residualFunc464;
  nonLinearSystemData[28].strictTearingFunctionCall = NULL;
  nonLinearSystemData[28].analyticalJacobianColumn = NULL;
  nonLinearSystemData[28].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[28].jacobianIndex = -1;
  nonLinearSystemData[28].initializeStaticNLSData = initializeStaticDataNLS464;
  nonLinearSystemData[28].getIterationVars = getIterationVarsNLS464;
  nonLinearSystemData[28].checkConstraints = NULL;
  
  
  nonLinearSystemData[27].equationIndex = 461;
  nonLinearSystemData[27].size = 1;
  nonLinearSystemData[27].homotopySupport = 0;
  nonLinearSystemData[27].mixedSystem = 0;
  nonLinearSystemData[27].residualFunc = residualFunc461;
  nonLinearSystemData[27].strictTearingFunctionCall = NULL;
  nonLinearSystemData[27].analyticalJacobianColumn = NULL;
  nonLinearSystemData[27].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[27].jacobianIndex = -1;
  nonLinearSystemData[27].initializeStaticNLSData = initializeStaticDataNLS461;
  nonLinearSystemData[27].getIterationVars = getIterationVarsNLS461;
  nonLinearSystemData[27].checkConstraints = NULL;
  
  
  nonLinearSystemData[26].equationIndex = 458;
  nonLinearSystemData[26].size = 1;
  nonLinearSystemData[26].homotopySupport = 0;
  nonLinearSystemData[26].mixedSystem = 0;
  nonLinearSystemData[26].residualFunc = residualFunc458;
  nonLinearSystemData[26].strictTearingFunctionCall = NULL;
  nonLinearSystemData[26].analyticalJacobianColumn = NULL;
  nonLinearSystemData[26].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[26].jacobianIndex = -1;
  nonLinearSystemData[26].initializeStaticNLSData = initializeStaticDataNLS458;
  nonLinearSystemData[26].getIterationVars = getIterationVarsNLS458;
  nonLinearSystemData[26].checkConstraints = NULL;
  
  
  nonLinearSystemData[25].equationIndex = 455;
  nonLinearSystemData[25].size = 1;
  nonLinearSystemData[25].homotopySupport = 0;
  nonLinearSystemData[25].mixedSystem = 0;
  nonLinearSystemData[25].residualFunc = residualFunc455;
  nonLinearSystemData[25].strictTearingFunctionCall = NULL;
  nonLinearSystemData[25].analyticalJacobianColumn = NULL;
  nonLinearSystemData[25].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[25].jacobianIndex = -1;
  nonLinearSystemData[25].initializeStaticNLSData = initializeStaticDataNLS455;
  nonLinearSystemData[25].getIterationVars = getIterationVarsNLS455;
  nonLinearSystemData[25].checkConstraints = NULL;
  
  
  nonLinearSystemData[24].equationIndex = 452;
  nonLinearSystemData[24].size = 1;
  nonLinearSystemData[24].homotopySupport = 0;
  nonLinearSystemData[24].mixedSystem = 0;
  nonLinearSystemData[24].residualFunc = residualFunc452;
  nonLinearSystemData[24].strictTearingFunctionCall = NULL;
  nonLinearSystemData[24].analyticalJacobianColumn = NULL;
  nonLinearSystemData[24].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[24].jacobianIndex = -1;
  nonLinearSystemData[24].initializeStaticNLSData = initializeStaticDataNLS452;
  nonLinearSystemData[24].getIterationVars = getIterationVarsNLS452;
  nonLinearSystemData[24].checkConstraints = NULL;
  
  
  nonLinearSystemData[23].equationIndex = 449;
  nonLinearSystemData[23].size = 1;
  nonLinearSystemData[23].homotopySupport = 0;
  nonLinearSystemData[23].mixedSystem = 0;
  nonLinearSystemData[23].residualFunc = residualFunc449;
  nonLinearSystemData[23].strictTearingFunctionCall = NULL;
  nonLinearSystemData[23].analyticalJacobianColumn = NULL;
  nonLinearSystemData[23].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[23].jacobianIndex = -1;
  nonLinearSystemData[23].initializeStaticNLSData = initializeStaticDataNLS449;
  nonLinearSystemData[23].getIterationVars = getIterationVarsNLS449;
  nonLinearSystemData[23].checkConstraints = NULL;
  
  
  nonLinearSystemData[22].equationIndex = 446;
  nonLinearSystemData[22].size = 1;
  nonLinearSystemData[22].homotopySupport = 0;
  nonLinearSystemData[22].mixedSystem = 0;
  nonLinearSystemData[22].residualFunc = residualFunc446;
  nonLinearSystemData[22].strictTearingFunctionCall = NULL;
  nonLinearSystemData[22].analyticalJacobianColumn = NULL;
  nonLinearSystemData[22].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[22].jacobianIndex = -1;
  nonLinearSystemData[22].initializeStaticNLSData = initializeStaticDataNLS446;
  nonLinearSystemData[22].getIterationVars = getIterationVarsNLS446;
  nonLinearSystemData[22].checkConstraints = NULL;
  
  
  nonLinearSystemData[21].equationIndex = 443;
  nonLinearSystemData[21].size = 1;
  nonLinearSystemData[21].homotopySupport = 0;
  nonLinearSystemData[21].mixedSystem = 0;
  nonLinearSystemData[21].residualFunc = residualFunc443;
  nonLinearSystemData[21].strictTearingFunctionCall = NULL;
  nonLinearSystemData[21].analyticalJacobianColumn = NULL;
  nonLinearSystemData[21].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[21].jacobianIndex = -1;
  nonLinearSystemData[21].initializeStaticNLSData = initializeStaticDataNLS443;
  nonLinearSystemData[21].getIterationVars = getIterationVarsNLS443;
  nonLinearSystemData[21].checkConstraints = NULL;
  
  
  nonLinearSystemData[20].equationIndex = 440;
  nonLinearSystemData[20].size = 1;
  nonLinearSystemData[20].homotopySupport = 0;
  nonLinearSystemData[20].mixedSystem = 0;
  nonLinearSystemData[20].residualFunc = residualFunc440;
  nonLinearSystemData[20].strictTearingFunctionCall = NULL;
  nonLinearSystemData[20].analyticalJacobianColumn = NULL;
  nonLinearSystemData[20].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[20].jacobianIndex = -1;
  nonLinearSystemData[20].initializeStaticNLSData = initializeStaticDataNLS440;
  nonLinearSystemData[20].getIterationVars = getIterationVarsNLS440;
  nonLinearSystemData[20].checkConstraints = NULL;
  
  
  nonLinearSystemData[19].equationIndex = 437;
  nonLinearSystemData[19].size = 1;
  nonLinearSystemData[19].homotopySupport = 0;
  nonLinearSystemData[19].mixedSystem = 0;
  nonLinearSystemData[19].residualFunc = residualFunc437;
  nonLinearSystemData[19].strictTearingFunctionCall = NULL;
  nonLinearSystemData[19].analyticalJacobianColumn = NULL;
  nonLinearSystemData[19].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[19].jacobianIndex = -1;
  nonLinearSystemData[19].initializeStaticNLSData = initializeStaticDataNLS437;
  nonLinearSystemData[19].getIterationVars = getIterationVarsNLS437;
  nonLinearSystemData[19].checkConstraints = NULL;
  
  
  nonLinearSystemData[18].equationIndex = 434;
  nonLinearSystemData[18].size = 14;
  nonLinearSystemData[18].homotopySupport = 0;
  nonLinearSystemData[18].mixedSystem = 0;
  nonLinearSystemData[18].residualFunc = residualFunc434;
  nonLinearSystemData[18].strictTearingFunctionCall = NULL;
  nonLinearSystemData[18].analyticalJacobianColumn = sCO2PBRig_functionJacNLSJac20_column;
  nonLinearSystemData[18].initialAnalyticalJacobian = sCO2PBRig_initialAnalyticJacobianNLSJac20;
  nonLinearSystemData[18].jacobianIndex = 1 /*jacInx*/;
  nonLinearSystemData[18].initializeStaticNLSData = initializeStaticDataNLS434;
  nonLinearSystemData[18].getIterationVars = getIterationVarsNLS434;
  nonLinearSystemData[18].checkConstraints = NULL;
  
  
  nonLinearSystemData[17].equationIndex = 405;
  nonLinearSystemData[17].size = 1;
  nonLinearSystemData[17].homotopySupport = 0;
  nonLinearSystemData[17].mixedSystem = 0;
  nonLinearSystemData[17].residualFunc = residualFunc405;
  nonLinearSystemData[17].strictTearingFunctionCall = NULL;
  nonLinearSystemData[17].analyticalJacobianColumn = NULL;
  nonLinearSystemData[17].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[17].jacobianIndex = -1;
  nonLinearSystemData[17].initializeStaticNLSData = initializeStaticDataNLS405;
  nonLinearSystemData[17].getIterationVars = getIterationVarsNLS405;
  nonLinearSystemData[17].checkConstraints = NULL;
  
  
  nonLinearSystemData[16].equationIndex = 399;
  nonLinearSystemData[16].size = 61;
  nonLinearSystemData[16].homotopySupport = 0;
  nonLinearSystemData[16].mixedSystem = 0;
  nonLinearSystemData[16].residualFunc = residualFunc399;
  nonLinearSystemData[16].strictTearingFunctionCall = NULL;
  nonLinearSystemData[16].analyticalJacobianColumn = NULL;
  nonLinearSystemData[16].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[16].jacobianIndex = -1;
  nonLinearSystemData[16].initializeStaticNLSData = initializeStaticDataNLS399;
  nonLinearSystemData[16].getIterationVars = getIterationVarsNLS399;
  nonLinearSystemData[16].checkConstraints = NULL;
  
  
  nonLinearSystemData[15].equationIndex = 213;
  nonLinearSystemData[15].size = 1;
  nonLinearSystemData[15].homotopySupport = 0;
  nonLinearSystemData[15].mixedSystem = 0;
  nonLinearSystemData[15].residualFunc = residualFunc213;
  nonLinearSystemData[15].strictTearingFunctionCall = NULL;
  nonLinearSystemData[15].analyticalJacobianColumn = NULL;
  nonLinearSystemData[15].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[15].jacobianIndex = -1;
  nonLinearSystemData[15].initializeStaticNLSData = initializeStaticDataNLS213;
  nonLinearSystemData[15].getIterationVars = getIterationVarsNLS213;
  nonLinearSystemData[15].checkConstraints = NULL;
  
  
  nonLinearSystemData[14].equationIndex = 205;
  nonLinearSystemData[14].size = 1;
  nonLinearSystemData[14].homotopySupport = 0;
  nonLinearSystemData[14].mixedSystem = 0;
  nonLinearSystemData[14].residualFunc = residualFunc205;
  nonLinearSystemData[14].strictTearingFunctionCall = NULL;
  nonLinearSystemData[14].analyticalJacobianColumn = NULL;
  nonLinearSystemData[14].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[14].jacobianIndex = -1;
  nonLinearSystemData[14].initializeStaticNLSData = initializeStaticDataNLS205;
  nonLinearSystemData[14].getIterationVars = getIterationVarsNLS205;
  nonLinearSystemData[14].checkConstraints = NULL;
  
  
  nonLinearSystemData[13].equationIndex = 91;
  nonLinearSystemData[13].size = 1;
  nonLinearSystemData[13].homotopySupport = 0;
  nonLinearSystemData[13].mixedSystem = 0;
  nonLinearSystemData[13].residualFunc = residualFunc91;
  nonLinearSystemData[13].strictTearingFunctionCall = NULL;
  nonLinearSystemData[13].analyticalJacobianColumn = NULL;
  nonLinearSystemData[13].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[13].jacobianIndex = -1;
  nonLinearSystemData[13].initializeStaticNLSData = initializeStaticDataNLS91;
  nonLinearSystemData[13].getIterationVars = getIterationVarsNLS91;
  nonLinearSystemData[13].checkConstraints = NULL;
  
  
  nonLinearSystemData[12].equationIndex = 89;
  nonLinearSystemData[12].size = 1;
  nonLinearSystemData[12].homotopySupport = 0;
  nonLinearSystemData[12].mixedSystem = 0;
  nonLinearSystemData[12].residualFunc = residualFunc89;
  nonLinearSystemData[12].strictTearingFunctionCall = NULL;
  nonLinearSystemData[12].analyticalJacobianColumn = NULL;
  nonLinearSystemData[12].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[12].jacobianIndex = -1;
  nonLinearSystemData[12].initializeStaticNLSData = initializeStaticDataNLS89;
  nonLinearSystemData[12].getIterationVars = getIterationVarsNLS89;
  nonLinearSystemData[12].checkConstraints = NULL;
  
  
  nonLinearSystemData[11].equationIndex = 87;
  nonLinearSystemData[11].size = 1;
  nonLinearSystemData[11].homotopySupport = 0;
  nonLinearSystemData[11].mixedSystem = 0;
  nonLinearSystemData[11].residualFunc = residualFunc87;
  nonLinearSystemData[11].strictTearingFunctionCall = NULL;
  nonLinearSystemData[11].analyticalJacobianColumn = NULL;
  nonLinearSystemData[11].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[11].jacobianIndex = -1;
  nonLinearSystemData[11].initializeStaticNLSData = initializeStaticDataNLS87;
  nonLinearSystemData[11].getIterationVars = getIterationVarsNLS87;
  nonLinearSystemData[11].checkConstraints = NULL;
  
  
  nonLinearSystemData[10].equationIndex = 85;
  nonLinearSystemData[10].size = 1;
  nonLinearSystemData[10].homotopySupport = 0;
  nonLinearSystemData[10].mixedSystem = 0;
  nonLinearSystemData[10].residualFunc = residualFunc85;
  nonLinearSystemData[10].strictTearingFunctionCall = NULL;
  nonLinearSystemData[10].analyticalJacobianColumn = NULL;
  nonLinearSystemData[10].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[10].jacobianIndex = -1;
  nonLinearSystemData[10].initializeStaticNLSData = initializeStaticDataNLS85;
  nonLinearSystemData[10].getIterationVars = getIterationVarsNLS85;
  nonLinearSystemData[10].checkConstraints = NULL;
  
  
  nonLinearSystemData[9].equationIndex = 83;
  nonLinearSystemData[9].size = 1;
  nonLinearSystemData[9].homotopySupport = 0;
  nonLinearSystemData[9].mixedSystem = 0;
  nonLinearSystemData[9].residualFunc = residualFunc83;
  nonLinearSystemData[9].strictTearingFunctionCall = NULL;
  nonLinearSystemData[9].analyticalJacobianColumn = NULL;
  nonLinearSystemData[9].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[9].jacobianIndex = -1;
  nonLinearSystemData[9].initializeStaticNLSData = initializeStaticDataNLS83;
  nonLinearSystemData[9].getIterationVars = getIterationVarsNLS83;
  nonLinearSystemData[9].checkConstraints = NULL;
  
  
  nonLinearSystemData[8].equationIndex = 81;
  nonLinearSystemData[8].size = 1;
  nonLinearSystemData[8].homotopySupport = 0;
  nonLinearSystemData[8].mixedSystem = 0;
  nonLinearSystemData[8].residualFunc = residualFunc81;
  nonLinearSystemData[8].strictTearingFunctionCall = NULL;
  nonLinearSystemData[8].analyticalJacobianColumn = NULL;
  nonLinearSystemData[8].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[8].jacobianIndex = -1;
  nonLinearSystemData[8].initializeStaticNLSData = initializeStaticDataNLS81;
  nonLinearSystemData[8].getIterationVars = getIterationVarsNLS81;
  nonLinearSystemData[8].checkConstraints = NULL;
  
  
  nonLinearSystemData[7].equationIndex = 79;
  nonLinearSystemData[7].size = 1;
  nonLinearSystemData[7].homotopySupport = 0;
  nonLinearSystemData[7].mixedSystem = 0;
  nonLinearSystemData[7].residualFunc = residualFunc79;
  nonLinearSystemData[7].strictTearingFunctionCall = NULL;
  nonLinearSystemData[7].analyticalJacobianColumn = NULL;
  nonLinearSystemData[7].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[7].jacobianIndex = -1;
  nonLinearSystemData[7].initializeStaticNLSData = initializeStaticDataNLS79;
  nonLinearSystemData[7].getIterationVars = getIterationVarsNLS79;
  nonLinearSystemData[7].checkConstraints = NULL;
  
  
  nonLinearSystemData[6].equationIndex = 77;
  nonLinearSystemData[6].size = 1;
  nonLinearSystemData[6].homotopySupport = 0;
  nonLinearSystemData[6].mixedSystem = 0;
  nonLinearSystemData[6].residualFunc = residualFunc77;
  nonLinearSystemData[6].strictTearingFunctionCall = NULL;
  nonLinearSystemData[6].analyticalJacobianColumn = NULL;
  nonLinearSystemData[6].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[6].jacobianIndex = -1;
  nonLinearSystemData[6].initializeStaticNLSData = initializeStaticDataNLS77;
  nonLinearSystemData[6].getIterationVars = getIterationVarsNLS77;
  nonLinearSystemData[6].checkConstraints = NULL;
  
  
  nonLinearSystemData[5].equationIndex = 75;
  nonLinearSystemData[5].size = 1;
  nonLinearSystemData[5].homotopySupport = 0;
  nonLinearSystemData[5].mixedSystem = 0;
  nonLinearSystemData[5].residualFunc = residualFunc75;
  nonLinearSystemData[5].strictTearingFunctionCall = NULL;
  nonLinearSystemData[5].analyticalJacobianColumn = NULL;
  nonLinearSystemData[5].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[5].jacobianIndex = -1;
  nonLinearSystemData[5].initializeStaticNLSData = initializeStaticDataNLS75;
  nonLinearSystemData[5].getIterationVars = getIterationVarsNLS75;
  nonLinearSystemData[5].checkConstraints = NULL;
  
  
  nonLinearSystemData[4].equationIndex = 73;
  nonLinearSystemData[4].size = 1;
  nonLinearSystemData[4].homotopySupport = 0;
  nonLinearSystemData[4].mixedSystem = 0;
  nonLinearSystemData[4].residualFunc = residualFunc73;
  nonLinearSystemData[4].strictTearingFunctionCall = NULL;
  nonLinearSystemData[4].analyticalJacobianColumn = NULL;
  nonLinearSystemData[4].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[4].jacobianIndex = -1;
  nonLinearSystemData[4].initializeStaticNLSData = initializeStaticDataNLS73;
  nonLinearSystemData[4].getIterationVars = getIterationVarsNLS73;
  nonLinearSystemData[4].checkConstraints = NULL;
  
  
  nonLinearSystemData[3].equationIndex = 71;
  nonLinearSystemData[3].size = 1;
  nonLinearSystemData[3].homotopySupport = 0;
  nonLinearSystemData[3].mixedSystem = 0;
  nonLinearSystemData[3].residualFunc = residualFunc71;
  nonLinearSystemData[3].strictTearingFunctionCall = NULL;
  nonLinearSystemData[3].analyticalJacobianColumn = NULL;
  nonLinearSystemData[3].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[3].jacobianIndex = -1;
  nonLinearSystemData[3].initializeStaticNLSData = initializeStaticDataNLS71;
  nonLinearSystemData[3].getIterationVars = getIterationVarsNLS71;
  nonLinearSystemData[3].checkConstraints = NULL;
  
  
  nonLinearSystemData[2].equationIndex = 69;
  nonLinearSystemData[2].size = 1;
  nonLinearSystemData[2].homotopySupport = 0;
  nonLinearSystemData[2].mixedSystem = 0;
  nonLinearSystemData[2].residualFunc = residualFunc69;
  nonLinearSystemData[2].strictTearingFunctionCall = NULL;
  nonLinearSystemData[2].analyticalJacobianColumn = NULL;
  nonLinearSystemData[2].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[2].jacobianIndex = -1;
  nonLinearSystemData[2].initializeStaticNLSData = initializeStaticDataNLS69;
  nonLinearSystemData[2].getIterationVars = getIterationVarsNLS69;
  nonLinearSystemData[2].checkConstraints = NULL;
  
  
  nonLinearSystemData[1].equationIndex = 67;
  nonLinearSystemData[1].size = 1;
  nonLinearSystemData[1].homotopySupport = 0;
  nonLinearSystemData[1].mixedSystem = 0;
  nonLinearSystemData[1].residualFunc = residualFunc67;
  nonLinearSystemData[1].strictTearingFunctionCall = NULL;
  nonLinearSystemData[1].analyticalJacobianColumn = NULL;
  nonLinearSystemData[1].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[1].jacobianIndex = -1;
  nonLinearSystemData[1].initializeStaticNLSData = initializeStaticDataNLS67;
  nonLinearSystemData[1].getIterationVars = getIterationVarsNLS67;
  nonLinearSystemData[1].checkConstraints = NULL;
  
  
  nonLinearSystemData[0].equationIndex = 36;
  nonLinearSystemData[0].size = 1;
  nonLinearSystemData[0].homotopySupport = 0;
  nonLinearSystemData[0].mixedSystem = 0;
  nonLinearSystemData[0].residualFunc = residualFunc36;
  nonLinearSystemData[0].strictTearingFunctionCall = NULL;
  nonLinearSystemData[0].analyticalJacobianColumn = NULL;
  nonLinearSystemData[0].initialAnalyticalJacobian = NULL;
  nonLinearSystemData[0].jacobianIndex = -1;
  nonLinearSystemData[0].initializeStaticNLSData = initializeStaticDataNLS36;
  nonLinearSystemData[0].getIterationVars = getIterationVarsNLS36;
  nonLinearSystemData[0].checkConstraints = NULL;
}

#if defined(__cplusplus)
}
#endif

