/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "sCO2PBRig_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1220
type: SIMPLE_ASSIGN
_omcQuot_245354415254._powerBlock._reCompressor._eta_comp = powerBlock.reCompressor.eta_design
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1220};
  data->modelData->realVarsData[265].attribute /* powerBlock.reCompressor.eta_comp variable */.start = data->simulationInfo->realParameter[626] /* powerBlock.reCompressor.eta_design PARAM */;
    data->localData[0]->realVars[265] /* powerBlock.reCompressor.eta_comp variable */ = data->modelData->realVarsData[265].attribute /* powerBlock.reCompressor.eta_comp variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[265].info /* powerBlock.reCompressor.eta_comp */.name, (modelica_real) data->localData[0]->realVars[265] /* powerBlock.reCompressor.eta_comp variable */);
  TRACE_POP
}

/*
equation index: 1221
type: SIMPLE_ASSIGN
_omcQuot_245354415254._powerBlock._mainCompressor._eta_comp = powerBlock.mainCompressor.eta_design
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1221};
  data->modelData->realVarsData[255].attribute /* powerBlock.mainCompressor.eta_comp variable */.start = data->simulationInfo->realParameter[594] /* powerBlock.mainCompressor.eta_design PARAM */;
    data->localData[0]->realVars[255] /* powerBlock.mainCompressor.eta_comp variable */ = data->modelData->realVarsData[255].attribute /* powerBlock.mainCompressor.eta_comp variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[255].info /* powerBlock.mainCompressor.eta_comp */.name, (modelica_real) data->localData[0]->realVars[255] /* powerBlock.mainCompressor.eta_comp variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int sCO2PBRig_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  /* min ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating min-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* max ******************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating max-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* nominal **************************************************** */
  
  infoStreamPrint(LOG_INIT, 1, "updating nominal-values");
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  /* start ****************************************************** */
  infoStreamPrint(LOG_INIT, 1, "updating primary start-values");
  sCO2PBRig_eqFunction_1220(data, threadData);

  sCO2PBRig_eqFunction_1221(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void sCO2PBRig_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 1222
type: SIMPLE_ASSIGN
T_amb_input = blk_T_amb_des
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1222};
  data->simulationInfo->realParameter[4] /* T_amb_input PARAM */ = data->simulationInfo->realParameter[9] /* blk_T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 1223
type: SIMPLE_ASSIGN
_omcQuot_246373653238 = exp(0.3537 * (-273.15 + T_amb_input))
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1223};
  data->localData[0]->realVars[24] /* $cse28 variable */ = exp((0.3537) * (-273.15 + data->simulationInfo->realParameter[4] /* T_amb_input PARAM */));
  TRACE_POP
}

/*
equation index: 1224
type: SIMPLE_ASSIGN
tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1224};
  data->simulationInfo->extObjs[39] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1225
type: SIMPLE_ASSIGN
tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1225};
  data->simulationInfo->extObjs[37] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1226
type: SIMPLE_ASSIGN
tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1226};
  data->simulationInfo->extObjs[36] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1227
type: SIMPLE_ASSIGN
tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1227};
  data->simulationInfo->extObjs[38] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1228
type: SIMPLE_ASSIGN
powerBlock._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1228};
  data->simulationInfo->extObjs[31] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1229
type: SIMPLE_ASSIGN
powerBlock._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1229};
  data->simulationInfo->extObjs[29] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1230
type: SIMPLE_ASSIGN
powerBlock._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1230};
  data->simulationInfo->extObjs[28] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1231
type: SIMPLE_ASSIGN
powerBlock._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1231};
  data->simulationInfo->extObjs[30] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1232
type: SIMPLE_ASSIGN
powerBlock._HTR._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1232};
  data->simulationInfo->extObjs[3] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1233
type: SIMPLE_ASSIGN
powerBlock._HTR._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1233};
  data->simulationInfo->extObjs[1] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1234
type: SIMPLE_ASSIGN
powerBlock._HTR._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1234};
  data->simulationInfo->extObjs[0] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1235
type: SIMPLE_ASSIGN
powerBlock._HTR._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1235};
  data->simulationInfo->extObjs[2] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1236
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1236};
  data->simulationInfo->extObjs[19] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1237
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1237};
  data->simulationInfo->extObjs[17] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1238
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1238};
  data->simulationInfo->extObjs[16] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1239
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1239};
  data->simulationInfo->extObjs[18] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1240
type: SIMPLE_ASSIGN
powerBlock._cooler._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1240};
  data->simulationInfo->extObjs[11] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1241
type: SIMPLE_ASSIGN
powerBlock._cooler._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1241};
  data->simulationInfo->extObjs[9] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1242
type: SIMPLE_ASSIGN
powerBlock._cooler._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1242};
  data->simulationInfo->extObjs[8] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1243
type: SIMPLE_ASSIGN
powerBlock._cooler._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1243};
  data->simulationInfo->extObjs[10] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1244
type: SIMPLE_ASSIGN
powerBlock._turbine._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1244};
  data->simulationInfo->extObjs[35] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1245
type: SIMPLE_ASSIGN
powerBlock._turbine._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1245};
  data->simulationInfo->extObjs[33] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1246
type: SIMPLE_ASSIGN
powerBlock._turbine._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1246};
  data->simulationInfo->extObjs[32] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1247
type: SIMPLE_ASSIGN
powerBlock._turbine._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1247};
  data->simulationInfo->extObjs[34] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1248
type: SIMPLE_ASSIGN
powerBlock._exchanger._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1248};
  data->simulationInfo->extObjs[15] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1249
type: SIMPLE_ASSIGN
powerBlock._exchanger._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1249};
  data->simulationInfo->extObjs[13] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1250
type: SIMPLE_ASSIGN
powerBlock._exchanger._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1250};
  data->simulationInfo->extObjs[12] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1251
type: SIMPLE_ASSIGN
powerBlock._exchanger._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1251};
  data->simulationInfo->extObjs[14] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1252
type: SIMPLE_ASSIGN
powerBlock._reCompressor._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1252};
  data->simulationInfo->extObjs[27] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1253
type: SIMPLE_ASSIGN
powerBlock._reCompressor._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1253};
  data->simulationInfo->extObjs[25] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1254
type: SIMPLE_ASSIGN
powerBlock._reCompressor._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1254};
  data->simulationInfo->extObjs[24] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1255
type: SIMPLE_ASSIGN
powerBlock._reCompressor._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1255};
  data->simulationInfo->extObjs[26] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1256
type: SIMPLE_ASSIGN
powerBlock._LTR._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1256};
  data->simulationInfo->extObjs[7] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1257
type: SIMPLE_ASSIGN
powerBlock._LTR._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1257};
  data->simulationInfo->extObjs[5] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1258
type: SIMPLE_ASSIGN
powerBlock._LTR._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1258};
  data->simulationInfo->extObjs[4] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1259
type: SIMPLE_ASSIGN
powerBlock._LTR._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1259};
  data->simulationInfo->extObjs[6] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1260
type: SIMPLE_ASSIGN
powerBlock._mixer._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1260};
  data->simulationInfo->extObjs[23] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1261
type: SIMPLE_ASSIGN
powerBlock._mixer._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1261};
  data->simulationInfo->extObjs[21] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1262
type: SIMPLE_ASSIGN
powerBlock._mixer._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1262};
  data->simulationInfo->extObjs[20] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1263
type: SIMPLE_ASSIGN
powerBlock._mixer._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1263};
  data->simulationInfo->extObjs[22] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1264
type: SIMPLE_ASSIGN
T_high = T_in_ref_blk - delta
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1264};
  data->simulationInfo->realParameter[6] /* T_high PARAM */ = data->simulationInfo->realParameter[7] /* T_in_ref_blk PARAM */ - data->simulationInfo->realParameter[10] /* delta PARAM */;
  TRACE_POP
}

/*
equation index: 1265
type: SIMPLE_ASSIGN
T_HTF_in = T_high
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1265};
  data->simulationInfo->realParameter[2] /* T_HTF_in PARAM */ = data->simulationInfo->realParameter[6] /* T_high PARAM */;
  TRACE_POP
}

/*
equation index: 1266
type: SIMPLE_ASSIGN
source._T = T_HTF_in
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1266};
  data->simulationInfo->realParameter[683] /* source.T PARAM */ = data->simulationInfo->realParameter[2] /* T_HTF_in PARAM */;
  TRACE_POP
}
extern void sCO2PBRig_eqFunction_22(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_23(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_921(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_922(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_925(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_923(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_924(DATA *data, threadData_t *threadData);


/*
equation index: 1274
type: SIMPLE_ASSIGN
sink._medium._state._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1274};
  data->simulationInfo->realParameter[679] /* sink.medium.state.p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1275
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF[1]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1275};
  data->simulationInfo->realParameter[538] /* powerBlock.exchanger.state_HTF[1].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1276
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF[2]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1276};
  data->simulationInfo->realParameter[539] /* powerBlock.exchanger.state_HTF[2].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1277
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF[3]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1277};
  data->simulationInfo->realParameter[540] /* powerBlock.exchanger.state_HTF[3].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1278
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF[4]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1278};
  data->simulationInfo->realParameter[541] /* powerBlock.exchanger.state_HTF[4].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1279
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF[5]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1279};
  data->simulationInfo->realParameter[542] /* powerBlock.exchanger.state_HTF[5].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1280
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF[6]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1280};
  data->simulationInfo->realParameter[543] /* powerBlock.exchanger.state_HTF[6].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1281
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF[7]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1281};
  data->simulationInfo->realParameter[544] /* powerBlock.exchanger.state_HTF[7].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1282
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF[8]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1282};
  data->simulationInfo->realParameter[545] /* powerBlock.exchanger.state_HTF[8].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1283
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF[9]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1283};
  data->simulationInfo->realParameter[546] /* powerBlock.exchanger.state_HTF[9].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1284
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF[10]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1284};
  data->simulationInfo->realParameter[547] /* powerBlock.exchanger.state_HTF[10].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1285
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF[11]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1285};
  data->simulationInfo->realParameter[548] /* powerBlock.exchanger.state_HTF[11].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1286
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF[12]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1286};
  data->simulationInfo->realParameter[549] /* powerBlock.exchanger.state_HTF[12].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1287
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF[13]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1287};
  data->simulationInfo->realParameter[550] /* powerBlock.exchanger.state_HTF[13].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1288
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF[14]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1288};
  data->simulationInfo->realParameter[551] /* powerBlock.exchanger.state_HTF[14].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1289
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF[15]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1289};
  data->simulationInfo->realParameter[552] /* powerBlock.exchanger.state_HTF[15].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1290
type: SIMPLE_ASSIGN
liftSimple._fluid_b._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1290};
  data->simulationInfo->realParameter[17] /* liftSimple.fluid_b.p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1291
type: SIMPLE_ASSIGN
powerBlock._fluid_a._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1291};
  data->simulationInfo->realParameter[584] /* powerBlock.fluid_a.p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1292
type: SIMPLE_ASSIGN
powerBlock._exchanger._HTF_port_a._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1292};
  data->simulationInfo->realParameter[431] /* powerBlock.exchanger.HTF_port_a.p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1293
type: SIMPLE_ASSIGN
powerBlock._exchanger._HTF_port_b._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1293};
  data->simulationInfo->realParameter[432] /* powerBlock.exchanger.HTF_port_b.p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1294
type: SIMPLE_ASSIGN
powerBlock._fluid_b._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1294};
  data->simulationInfo->realParameter[585] /* powerBlock.fluid_b.p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1295
type: SIMPLE_ASSIGN
sink._ports[1]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1295};
  data->simulationInfo->realParameter[681] /* sink.ports[1].p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1296
type: SIMPLE_ASSIGN
sink._medium._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1296};
  data->simulationInfo->realParameter[678] /* sink.medium.p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1297
type: SIMPLE_ASSIGN
sink._state._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1297};
  data->simulationInfo->realParameter[682] /* sink.state.p PARAM */ = data->simulationInfo->realParameter[680] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1298
type: SIMPLE_ASSIGN
powerBlock._splitter._gamma = powerBlock.gamma
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1298};
  data->simulationInfo->realParameter[640] /* powerBlock.splitter.gamma PARAM */ = data->simulationInfo->realParameter[586] /* powerBlock.gamma PARAM */;
  TRACE_POP
}

/*
equation index: 1299
type: SIMPLE_ASSIGN
powerBlock._splitter._gamma_var = powerBlock.splitter.gamma
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1299};
  data->simulationInfo->realParameter[641] /* powerBlock.splitter.gamma_var PARAM */ = data->simulationInfo->realParameter[640] /* powerBlock.splitter.gamma PARAM */;
  TRACE_POP
}

/*
equation index: 1300
type: SIMPLE_ASSIGN
powerBlock._cooler._T_amb = T_amb_input
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1300};
  data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb PARAM */ = data->simulationInfo->realParameter[4] /* T_amb_input PARAM */;
  TRACE_POP
}

/*
equation index: 1301
type: SIMPLE_ASSIGN
powerBlock._T_amb = T_amb_input
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1301};
  data->simulationInfo->realParameter[314] /* powerBlock.T_amb PARAM */ = data->simulationInfo->realParameter[4] /* T_amb_input PARAM */;
  TRACE_POP
}

/*
equation index: 1302
type: SIMPLE_ASSIGN
T_amb_in._y = T_amb_input
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1302};
  data->simulationInfo->realParameter[3] /* T_amb_in.y PARAM */ = data->simulationInfo->realParameter[4] /* T_amb_input PARAM */;
  TRACE_POP
}

/*
equation index: 1317
type: SIMPLE_ASSIGN
powerBlock._pinch_recuperator = pinch_recuperator
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1317};
  data->simulationInfo->realParameter[611] /* powerBlock.pinch_recuperator PARAM */ = data->simulationInfo->realParameter[27] /* pinch_recuperator PARAM */;
  TRACE_POP
}

/*
equation index: 1318
type: SIMPLE_ASSIGN
powerBlock._LTR._pinchRecuperator = powerBlock.pinch_recuperator
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1318};
  data->simulationInfo->realParameter[245] /* powerBlock.LTR.pinchRecuperator PARAM */ = data->simulationInfo->realParameter[611] /* powerBlock.pinch_recuperator PARAM */;
  TRACE_POP
}

/*
equation index: 1319
type: SIMPLE_ASSIGN
powerBlock._LTR._ratio_m_des = 1.0 - powerBlock.gamma
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1319};
  data->simulationInfo->realParameter[246] /* powerBlock.LTR.ratio_m_des PARAM */ = 1.0 - data->simulationInfo->realParameter[586] /* powerBlock.gamma PARAM */;
  TRACE_POP
}

/*
equation index: 1321
type: SIMPLE_ASSIGN
powerBlock._p_high = p_high
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1321};
  data->simulationInfo->realParameter[609] /* powerBlock.p_high PARAM */ = data->simulationInfo->realParameter[25] /* p_high PARAM */;
  TRACE_POP
}

/*
equation index: 1322
type: SIMPLE_ASSIGN
powerBlock._reCompressor._p_high_des = powerBlock.p_high
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1322};
  data->simulationInfo->realParameter[630] /* powerBlock.reCompressor.p_high_des PARAM */ = data->simulationInfo->realParameter[609] /* powerBlock.p_high PARAM */;
  TRACE_POP
}

/*
equation index: 1324
type: SIMPLE_ASSIGN
powerBlock._N_shaft = powerBlock.choiceN[3]
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1324};
  data->simulationInfo->realParameter[307] /* powerBlock.N_shaft PARAM */ = data->simulationInfo->realParameter[320] /* powerBlock.choiceN[3] PARAM */;
  TRACE_POP
}

/*
equation index: 1325
type: SIMPLE_ASSIGN
powerBlock._reCompressor._N_design = powerBlock.N_shaft
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1325};
  data->simulationInfo->realParameter[620] /* powerBlock.reCompressor.N_design PARAM */ = data->simulationInfo->realParameter[307] /* powerBlock.N_shaft PARAM */;
  TRACE_POP
}

/*
equation index: 1328
type: SIMPLE_ASSIGN
powerBlock._T_high = T_high
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1328};
  data->simulationInfo->realParameter[316] /* powerBlock.T_high PARAM */ = data->simulationInfo->realParameter[6] /* T_high PARAM */;
  TRACE_POP
}

/*
equation index: 1329
type: SIMPLE_ASSIGN
powerBlock._exchanger._T_out_CO2_des = powerBlock.T_high
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1329};
  data->simulationInfo->realParameter[466] /* powerBlock.exchanger.T_out_CO2_des PARAM */ = data->simulationInfo->realParameter[316] /* powerBlock.T_high PARAM */;
  TRACE_POP
}

/*
equation index: 1330
type: SIMPLE_ASSIGN
powerBlock._turbine._N_shaft = powerBlock.N_shaft
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1330};
  data->simulationInfo->realParameter[646] /* powerBlock.turbine.N_shaft PARAM */ = data->simulationInfo->realParameter[307] /* powerBlock.N_shaft PARAM */;
  TRACE_POP
}

/*
equation index: 1331
type: SIMPLE_ASSIGN
powerBlock._T_amb_des = blk_T_amb_des
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1331};
  data->simulationInfo->realParameter[315] /* powerBlock.T_amb_des PARAM */ = data->simulationInfo->realParameter[9] /* blk_T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 1332
type: SIMPLE_ASSIGN
powerBlock._turbine._T_amb = powerBlock.T_amb_des
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1332};
  data->simulationInfo->realParameter[648] /* powerBlock.turbine.T_amb PARAM */ = data->simulationInfo->realParameter[315] /* powerBlock.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 1333
type: SIMPLE_ASSIGN
powerBlock._PR = PR
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1333};
  data->simulationInfo->realParameter[308] /* powerBlock.PR PARAM */ = data->simulationInfo->realParameter[0] /* PR PARAM */;
  TRACE_POP
}

/*
equation index: 1334
type: SIMPLE_ASSIGN
powerBlock._turbine._PR = powerBlock.PR
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1334(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1334};
  data->simulationInfo->realParameter[647] /* powerBlock.turbine.PR PARAM */ = data->simulationInfo->realParameter[308] /* powerBlock.PR PARAM */;
  TRACE_POP
}

/*
equation index: 1335
type: SIMPLE_ASSIGN
powerBlock._turbine._eta_design = powerBlock.eta_turb
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1335(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1335};
  data->simulationInfo->realParameter[651] /* powerBlock.turbine.eta_design PARAM */ = data->simulationInfo->realParameter[430] /* powerBlock.eta_turb PARAM */;
  TRACE_POP
}

/*
equation index: 1338
type: SIMPLE_ASSIGN
powerBlock._T_low = T_low
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1338(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1338};
  data->simulationInfo->realParameter[317] /* powerBlock.T_low PARAM */ = data->simulationInfo->realParameter[8] /* T_low PARAM */;
  TRACE_POP
}

/*
equation index: 1339
type: SIMPLE_ASSIGN
powerBlock._cooler._T_low = powerBlock.T_low
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1339(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1339};
  data->simulationInfo->realParameter[343] /* powerBlock.cooler.T_low PARAM */ = data->simulationInfo->realParameter[317] /* powerBlock.T_low PARAM */;
  TRACE_POP
}

/*
equation index: 1340
type: SIMPLE_ASSIGN
powerBlock._cooler._T_amb_des = powerBlock.T_amb_des
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1340(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1340};
  data->simulationInfo->realParameter[342] /* powerBlock.cooler.T_amb_des PARAM */ = data->simulationInfo->realParameter[315] /* powerBlock.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 1341
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._p_high_des = powerBlock.p_high
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1341};
  data->simulationInfo->realParameter[598] /* powerBlock.mainCompressor.p_high_des PARAM */ = data->simulationInfo->realParameter[609] /* powerBlock.p_high PARAM */;
  TRACE_POP
}

/*
equation index: 1343
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._N_design = powerBlock.N_shaft
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1343(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1343};
  data->simulationInfo->realParameter[588] /* powerBlock.mainCompressor.N_design PARAM */ = data->simulationInfo->realParameter[307] /* powerBlock.N_shaft PARAM */;
  TRACE_POP
}

/*
equation index: 1344
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._eta_design = powerBlock.eta_comp_main
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1344(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1344};
  data->simulationInfo->realParameter[594] /* powerBlock.mainCompressor.eta_design PARAM */ = data->simulationInfo->realParameter[425] /* powerBlock.eta_comp_main PARAM */;
  TRACE_POP
}

/*
equation index: 1345
type: SIMPLE_ASSIGN
powerBlock._HTR._pinchRecuperator = powerBlock.pinch_recuperator
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1345(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1345};
  data->simulationInfo->realParameter[110] /* powerBlock.HTR.pinchRecuperator PARAM */ = data->simulationInfo->realParameter[611] /* powerBlock.pinch_recuperator PARAM */;
  TRACE_POP
}

/*
equation index: 1347
type: SIMPLE_ASSIGN
powerBlock._pri_exchanger = pri_exchanger
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1347(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1347};
  data->simulationInfo->realParameter[614] /* powerBlock.pri_exchanger PARAM */ = data->simulationInfo->realParameter[666] /* pri_exchanger PARAM */;
  TRACE_POP
}

/*
equation index: 1348
type: SIMPLE_ASSIGN
powerBlock._pri_generator = pri_generator
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1348(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1348};
  data->simulationInfo->realParameter[615] /* powerBlock.pri_generator PARAM */ = data->simulationInfo->realParameter[667] /* pri_generator PARAM */;
  TRACE_POP
}

/*
equation index: 1349
type: SIMPLE_ASSIGN
powerBlock._pri_cooler = pri_cooler
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1349(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1349};
  data->simulationInfo->realParameter[613] /* powerBlock.pri_cooler PARAM */ = data->simulationInfo->realParameter[665] /* pri_cooler PARAM */;
  TRACE_POP
}

/*
equation index: 1350
type: SIMPLE_ASSIGN
powerBlock._pri_compressor = pri_compressor
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1350};
  data->simulationInfo->realParameter[612] /* powerBlock.pri_compressor PARAM */ = data->simulationInfo->realParameter[664] /* pri_compressor PARAM */;
  TRACE_POP
}

/*
equation index: 1351
type: SIMPLE_ASSIGN
powerBlock._pri_turbine = pri_turbine
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1351};
  data->simulationInfo->realParameter[617] /* powerBlock.pri_turbine PARAM */ = data->simulationInfo->realParameter[669] /* pri_turbine PARAM */;
  TRACE_POP
}

/*
equation index: 1352
type: SIMPLE_ASSIGN
powerBlock._pri_recuperator = pri_recuperator
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1352};
  data->simulationInfo->realParameter[616] /* powerBlock.pri_recuperator PARAM */ = data->simulationInfo->realParameter[668] /* pri_recuperator PARAM */;
  TRACE_POP
}

/*
equation index: 1353
type: SIMPLE_ASSIGN
powerBlock._T_HTF_out = T_cold_set
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1353};
  data->simulationInfo->realParameter[313] /* powerBlock.T_HTF_out PARAM */ = data->simulationInfo->realParameter[5] /* T_cold_set PARAM */;
  TRACE_POP
}

/*
equation index: 1355
type: SIMPLE_ASSIGN
powerBlock._T_HTF_in_des = T_in_ref_blk
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1355};
  data->simulationInfo->realParameter[312] /* powerBlock.T_HTF_in_des PARAM */ = data->simulationInfo->realParameter[7] /* T_in_ref_blk PARAM */;
  TRACE_POP
}

/*
equation index: 1356
type: SIMPLE_ASSIGN
powerBlock._ratio_m_des = 1.0 - powerBlock.gamma
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1356};
  data->simulationInfo->realParameter[618] /* powerBlock.ratio_m_des PARAM */ = 1.0 - data->simulationInfo->realParameter[586] /* powerBlock.gamma PARAM */;
  TRACE_POP
}

/*
equation index: 1359
type: SIMPLE_ASSIGN
powerBlock._eta_motor = eta_motor
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1359};
  data->simulationInfo->realParameter[428] /* powerBlock.eta_motor PARAM */ = data->simulationInfo->realParameter[11] /* eta_motor PARAM */;
  TRACE_POP
}

/*
equation index: 1361
type: SIMPLE_ASSIGN
powerBlock._par_fr = par_fr
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1361};
  data->simulationInfo->realParameter[610] /* powerBlock.par_fr PARAM */ = data->simulationInfo->realParameter[26] /* par_fr PARAM */;
  TRACE_POP
}

/*
equation index: 1362
type: SIMPLE_ASSIGN
powerBlock._f_fixed_load = f_fixed_load
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1362};
  data->simulationInfo->realParameter[583] /* powerBlock.f_fixed_load PARAM */ = data->simulationInfo->realParameter[12] /* f_fixed_load PARAM */;
  TRACE_POP
}

/*
equation index: 1363
type: SIMPLE_ASSIGN
powerBlock._nu_min = nu_min_blk
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1363};
  data->simulationInfo->realParameter[608] /* powerBlock.nu_min PARAM */ = data->simulationInfo->realParameter[24] /* nu_min_blk PARAM */;
  TRACE_POP
}
extern void sCO2PBRig_eqFunction_920(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_919(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_918(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_917(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_916(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_24(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_915(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_25(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_26(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_21(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_20(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_19(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_18(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_17(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_16(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_15(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_14(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_13(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_12(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_11(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_10(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_9(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_8(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_7(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_6(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_5(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_4(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_3(DATA *data, threadData_t *threadData);

extern void sCO2PBRig_eqFunction_2(DATA *data, threadData_t *threadData);


/*
equation index: 1397
type: ALGORITHM

  assert(blk_T_amb_des >= 0.0, "Variable violating min constraint: 0.0 <= blk_T_amb_des, has value: " + String(blk_T_amb_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1397};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,68,"Variable violating min constraint: 0.0 <= blk_T_amb_des, has value: ");
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp3)
  {
    tmp0 = GreaterEq(data->simulationInfo->realParameter[9] /* blk_T_amb_des PARAM */,0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[9] /* blk_T_amb_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-morris-algorithm/simulation/sCO2PBRig.mo",24,3,24,57,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nblk_T_amb_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp3 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1398
type: ALGORITHM

  assert(T_amb_input >= 0.0, "Variable violating min constraint: 0.0 <= T_amb_input, has value: " + String(T_amb_input, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1398};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,66,"Variable violating min constraint: 0.0 <= T_amb_input, has value: ");
  modelica_string tmp6;
  static int tmp7 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp7)
  {
    tmp4 = GreaterEq(data->simulationInfo->realParameter[4] /* T_amb_input PARAM */,0.0);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[4] /* T_amb_input PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-morris-algorithm/simulation/sCO2PBRig.mo",43,3,43,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nT_amb_input >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp7 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1399
type: ALGORITHM

  assert(T_in_ref_blk >= 0.0, "Variable violating min constraint: 0.0 <= T_in_ref_blk, has value: " + String(T_in_ref_blk, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1399(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1399};
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,67,"Variable violating min constraint: 0.0 <= T_in_ref_blk, has value: ");
  modelica_string tmp10;
  static int tmp11 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp11)
  {
    tmp8 = GreaterEq(data->simulationInfo->realParameter[7] /* T_in_ref_blk PARAM */,0.0);
    if(!tmp8)
    {
      tmp10 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[7] /* T_in_ref_blk PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp9),tmp10);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-morris-algorithm/simulation/sCO2PBRig.mo",20,3,20,50,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nT_in_ref_blk >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp11 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1400
type: ALGORITHM

  assert(delta >= 0.0, "Variable violating min constraint: 0.0 <= delta, has value: " + String(delta, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1400(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1400};
  modelica_boolean tmp12;
  static const MMC_DEFSTRINGLIT(tmp13,60,"Variable violating min constraint: 0.0 <= delta, has value: ");
  modelica_string tmp14;
  static int tmp15 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp15)
  {
    tmp12 = GreaterEq(data->simulationInfo->realParameter[10] /* delta PARAM */,0.0);
    if(!tmp12)
    {
      tmp14 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[10] /* delta PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp13),tmp14);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-morris-algorithm/simulation/sCO2PBRig.mo",21,3,21,63,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\ndelta >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp15 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1401
type: ALGORITHM

  assert(T_high >= 0.0, "Variable violating min constraint: 0.0 <= T_high, has value: " + String(T_high, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1401(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1401};
  modelica_boolean tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,61,"Variable violating min constraint: 0.0 <= T_high, has value: ");
  modelica_string tmp18;
  static int tmp19 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp19)
  {
    tmp16 = GreaterEq(data->simulationInfo->realParameter[6] /* T_high PARAM */,0.0);
    if(!tmp16)
    {
      tmp18 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[6] /* T_high PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp17),tmp18);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-morris-algorithm/simulation/sCO2PBRig.mo",23,3,23,101,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nT_high >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp19 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1402
type: ALGORITHM

  assert(T_HTF_in >= 0.0, "Variable violating min constraint: 0.0 <= T_HTF_in, has value: " + String(T_HTF_in, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1402(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1402};
  modelica_boolean tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,63,"Variable violating min constraint: 0.0 <= T_HTF_in, has value: ");
  modelica_string tmp22;
  static int tmp23 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp23)
  {
    tmp20 = GreaterEq(data->simulationInfo->realParameter[2] /* T_HTF_in PARAM */,0.0);
    if(!tmp20)
    {
      tmp22 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[2] /* T_HTF_in PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp21),tmp22);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-morris-algorithm/simulation/sCO2PBRig.mo",44,3,44,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nT_HTF_in >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp23 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1403
type: ALGORITHM

  assert(source.T >= 300.0 and source.T <= 1370.0, "Variable violating min/max constraint: 300.0 <= source.T <= 1370.0, has value: " + String(source.T, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1403(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1403};
  modelica_boolean tmp24;
  modelica_boolean tmp25;
  static const MMC_DEFSTRINGLIT(tmp26,79,"Variable violating min/max constraint: 300.0 <= source.T <= 1370.0, has value: ");
  modelica_string tmp27;
  static int tmp28 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp28)
  {
    tmp24 = GreaterEq(data->simulationInfo->realParameter[683] /* source.T PARAM */,300.0);
    tmp25 = LessEq(data->simulationInfo->realParameter[683] /* source.T PARAM */,1370.0);
    if(!(tmp24 && tmp25))
    {
      tmp27 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[683] /* source.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp26),tmp27);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",24,5,26,42,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.T >= 300.0 and source.T <= 1370.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp28 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1404
type: ALGORITHM

  assert(sink.T >= 300.0 and sink.T <= 1370.0, "Variable violating min/max constraint: 300.0 <= sink.T <= 1370.0, has value: " + String(sink.T, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1404(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1404};
  modelica_boolean tmp29;
  modelica_boolean tmp30;
  static const MMC_DEFSTRINGLIT(tmp31,77,"Variable violating min/max constraint: 300.0 <= sink.T <= 1370.0, has value: ");
  modelica_string tmp32;
  static int tmp33 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp33)
  {
    tmp29 = GreaterEq(data->simulationInfo->realParameter[670] /* sink.T PARAM */,300.0);
    tmp30 = LessEq(data->simulationInfo->realParameter[670] /* sink.T PARAM */,1370.0);
    if(!(tmp29 && tmp30))
    {
      tmp32 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[670] /* sink.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp31),tmp32);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",24,5,26,42,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.T >= 300.0 and sink.T <= 1370.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp33 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1405
type: ALGORITHM

  assert(sink.p >= 0.0 and sink.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sink.p <= 100000000.0, has value: " + String(sink.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1405(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1405};
  modelica_boolean tmp34;
  modelica_boolean tmp35;
  static const MMC_DEFSTRINGLIT(tmp36,80,"Variable violating min/max constraint: 0.0 <= sink.p <= 100000000.0, has value: ");
  modelica_string tmp37;
  static int tmp38 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp38)
  {
    tmp34 = GreaterEq(data->simulationInfo->realParameter[680] /* sink.p PARAM */,0.0);
    tmp35 = LessEq(data->simulationInfo->realParameter[680] /* sink.p PARAM */,100000000.0);
    if(!(tmp34 && tmp35))
    {
      tmp37 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[680] /* sink.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp36),tmp37);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",10,5,12,42,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.p >= 0.0 and sink.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp38 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1406
type: ALGORITHM

  assert(sink.medium.state.p >= 0.0 and sink.medium.state.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sink.medium.state.p <= 100000000.0, has value: " + String(sink.medium.state.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1406(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1406};
  modelica_boolean tmp39;
  modelica_boolean tmp40;
  static const MMC_DEFSTRINGLIT(tmp41,93,"Variable violating min/max constraint: 0.0 <= sink.medium.state.p <= 100000000.0, has value: ");
  modelica_string tmp42;
  static int tmp43 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp43)
  {
    tmp39 = GreaterEq(data->simulationInfo->realParameter[679] /* sink.medium.state.p PARAM */,0.0);
    tmp40 = LessEq(data->simulationInfo->realParameter[679] /* sink.medium.state.p PARAM */,100000000.0);
    if(!(tmp39 && tmp40))
    {
      tmp42 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[679] /* sink.medium.state.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp41),tmp42);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/SolidParticles/CarboHSP_ph/package.mo",71,3,71,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.medium.state.p >= 0.0 and sink.medium.state.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp43 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1407
type: ALGORITHM

  assert(powerBlock.exchanger.state_HTF[1].p >= 0.0 and powerBlock.exchanger.state_HTF[1].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[1].p <= 100000000.0, has value: " + String(powerBlock.exchanger.state_HTF[1].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1407(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1407};
  modelica_boolean tmp44;
  modelica_boolean tmp45;
  static const MMC_DEFSTRINGLIT(tmp46,109,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[1].p <= 100000000.0, has value: ");
  modelica_string tmp47;
  static int tmp48 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp48)
  {
    tmp44 = GreaterEq(data->simulationInfo->realParameter[538] /* powerBlock.exchanger.state_HTF[1].p PARAM */,0.0);
    tmp45 = LessEq(data->simulationInfo->realParameter[538] /* powerBlock.exchanger.state_HTF[1].p PARAM */,100000000.0);
    if(!(tmp44 && tmp45))
    {
      tmp47 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[538] /* powerBlock.exchanger.state_HTF[1].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp46),tmp47);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.state_HTF[1].p >= 0.0 and powerBlock.exchanger.state_HTF[1].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp48 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1408
type: ALGORITHM

  assert(powerBlock.exchanger.state_HTF[2].p >= 0.0 and powerBlock.exchanger.state_HTF[2].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[2].p <= 100000000.0, has value: " + String(powerBlock.exchanger.state_HTF[2].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1408(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1408};
  modelica_boolean tmp49;
  modelica_boolean tmp50;
  static const MMC_DEFSTRINGLIT(tmp51,109,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[2].p <= 100000000.0, has value: ");
  modelica_string tmp52;
  static int tmp53 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp53)
  {
    tmp49 = GreaterEq(data->simulationInfo->realParameter[539] /* powerBlock.exchanger.state_HTF[2].p PARAM */,0.0);
    tmp50 = LessEq(data->simulationInfo->realParameter[539] /* powerBlock.exchanger.state_HTF[2].p PARAM */,100000000.0);
    if(!(tmp49 && tmp50))
    {
      tmp52 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[539] /* powerBlock.exchanger.state_HTF[2].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp51),tmp52);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.state_HTF[2].p >= 0.0 and powerBlock.exchanger.state_HTF[2].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp53 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1409
type: ALGORITHM

  assert(powerBlock.exchanger.state_HTF[3].p >= 0.0 and powerBlock.exchanger.state_HTF[3].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[3].p <= 100000000.0, has value: " + String(powerBlock.exchanger.state_HTF[3].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1409(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1409};
  modelica_boolean tmp54;
  modelica_boolean tmp55;
  static const MMC_DEFSTRINGLIT(tmp56,109,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[3].p <= 100000000.0, has value: ");
  modelica_string tmp57;
  static int tmp58 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp58)
  {
    tmp54 = GreaterEq(data->simulationInfo->realParameter[540] /* powerBlock.exchanger.state_HTF[3].p PARAM */,0.0);
    tmp55 = LessEq(data->simulationInfo->realParameter[540] /* powerBlock.exchanger.state_HTF[3].p PARAM */,100000000.0);
    if(!(tmp54 && tmp55))
    {
      tmp57 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[540] /* powerBlock.exchanger.state_HTF[3].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp56),tmp57);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.state_HTF[3].p >= 0.0 and powerBlock.exchanger.state_HTF[3].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp58 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1410
type: ALGORITHM

  assert(powerBlock.exchanger.state_HTF[4].p >= 0.0 and powerBlock.exchanger.state_HTF[4].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[4].p <= 100000000.0, has value: " + String(powerBlock.exchanger.state_HTF[4].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1410(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1410};
  modelica_boolean tmp59;
  modelica_boolean tmp60;
  static const MMC_DEFSTRINGLIT(tmp61,109,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[4].p <= 100000000.0, has value: ");
  modelica_string tmp62;
  static int tmp63 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp63)
  {
    tmp59 = GreaterEq(data->simulationInfo->realParameter[541] /* powerBlock.exchanger.state_HTF[4].p PARAM */,0.0);
    tmp60 = LessEq(data->simulationInfo->realParameter[541] /* powerBlock.exchanger.state_HTF[4].p PARAM */,100000000.0);
    if(!(tmp59 && tmp60))
    {
      tmp62 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[541] /* powerBlock.exchanger.state_HTF[4].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp61),tmp62);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.state_HTF[4].p >= 0.0 and powerBlock.exchanger.state_HTF[4].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp63 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1411
type: ALGORITHM

  assert(powerBlock.exchanger.state_HTF[5].p >= 0.0 and powerBlock.exchanger.state_HTF[5].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[5].p <= 100000000.0, has value: " + String(powerBlock.exchanger.state_HTF[5].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1411(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1411};
  modelica_boolean tmp64;
  modelica_boolean tmp65;
  static const MMC_DEFSTRINGLIT(tmp66,109,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[5].p <= 100000000.0, has value: ");
  modelica_string tmp67;
  static int tmp68 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp68)
  {
    tmp64 = GreaterEq(data->simulationInfo->realParameter[542] /* powerBlock.exchanger.state_HTF[5].p PARAM */,0.0);
    tmp65 = LessEq(data->simulationInfo->realParameter[542] /* powerBlock.exchanger.state_HTF[5].p PARAM */,100000000.0);
    if(!(tmp64 && tmp65))
    {
      tmp67 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[542] /* powerBlock.exchanger.state_HTF[5].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp66),tmp67);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.state_HTF[5].p >= 0.0 and powerBlock.exchanger.state_HTF[5].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp68 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1412
type: ALGORITHM

  assert(powerBlock.exchanger.state_HTF[6].p >= 0.0 and powerBlock.exchanger.state_HTF[6].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[6].p <= 100000000.0, has value: " + String(powerBlock.exchanger.state_HTF[6].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1412(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1412};
  modelica_boolean tmp69;
  modelica_boolean tmp70;
  static const MMC_DEFSTRINGLIT(tmp71,109,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[6].p <= 100000000.0, has value: ");
  modelica_string tmp72;
  static int tmp73 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp73)
  {
    tmp69 = GreaterEq(data->simulationInfo->realParameter[543] /* powerBlock.exchanger.state_HTF[6].p PARAM */,0.0);
    tmp70 = LessEq(data->simulationInfo->realParameter[543] /* powerBlock.exchanger.state_HTF[6].p PARAM */,100000000.0);
    if(!(tmp69 && tmp70))
    {
      tmp72 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[543] /* powerBlock.exchanger.state_HTF[6].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp71),tmp72);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.state_HTF[6].p >= 0.0 and powerBlock.exchanger.state_HTF[6].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp73 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1413
type: ALGORITHM

  assert(powerBlock.exchanger.state_HTF[7].p >= 0.0 and powerBlock.exchanger.state_HTF[7].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[7].p <= 100000000.0, has value: " + String(powerBlock.exchanger.state_HTF[7].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1413};
  modelica_boolean tmp74;
  modelica_boolean tmp75;
  static const MMC_DEFSTRINGLIT(tmp76,109,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[7].p <= 100000000.0, has value: ");
  modelica_string tmp77;
  static int tmp78 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp78)
  {
    tmp74 = GreaterEq(data->simulationInfo->realParameter[544] /* powerBlock.exchanger.state_HTF[7].p PARAM */,0.0);
    tmp75 = LessEq(data->simulationInfo->realParameter[544] /* powerBlock.exchanger.state_HTF[7].p PARAM */,100000000.0);
    if(!(tmp74 && tmp75))
    {
      tmp77 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[544] /* powerBlock.exchanger.state_HTF[7].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp76),tmp77);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.state_HTF[7].p >= 0.0 and powerBlock.exchanger.state_HTF[7].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp78 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1414
type: ALGORITHM

  assert(powerBlock.exchanger.state_HTF[8].p >= 0.0 and powerBlock.exchanger.state_HTF[8].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[8].p <= 100000000.0, has value: " + String(powerBlock.exchanger.state_HTF[8].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1414};
  modelica_boolean tmp79;
  modelica_boolean tmp80;
  static const MMC_DEFSTRINGLIT(tmp81,109,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[8].p <= 100000000.0, has value: ");
  modelica_string tmp82;
  static int tmp83 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp83)
  {
    tmp79 = GreaterEq(data->simulationInfo->realParameter[545] /* powerBlock.exchanger.state_HTF[8].p PARAM */,0.0);
    tmp80 = LessEq(data->simulationInfo->realParameter[545] /* powerBlock.exchanger.state_HTF[8].p PARAM */,100000000.0);
    if(!(tmp79 && tmp80))
    {
      tmp82 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[545] /* powerBlock.exchanger.state_HTF[8].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp81),tmp82);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.state_HTF[8].p >= 0.0 and powerBlock.exchanger.state_HTF[8].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp83 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1415
type: ALGORITHM

  assert(powerBlock.exchanger.state_HTF[9].p >= 0.0 and powerBlock.exchanger.state_HTF[9].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[9].p <= 100000000.0, has value: " + String(powerBlock.exchanger.state_HTF[9].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1415};
  modelica_boolean tmp84;
  modelica_boolean tmp85;
  static const MMC_DEFSTRINGLIT(tmp86,109,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[9].p <= 100000000.0, has value: ");
  modelica_string tmp87;
  static int tmp88 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp88)
  {
    tmp84 = GreaterEq(data->simulationInfo->realParameter[546] /* powerBlock.exchanger.state_HTF[9].p PARAM */,0.0);
    tmp85 = LessEq(data->simulationInfo->realParameter[546] /* powerBlock.exchanger.state_HTF[9].p PARAM */,100000000.0);
    if(!(tmp84 && tmp85))
    {
      tmp87 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[546] /* powerBlock.exchanger.state_HTF[9].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp86),tmp87);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.state_HTF[9].p >= 0.0 and powerBlock.exchanger.state_HTF[9].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp88 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1416
type: ALGORITHM

  assert(powerBlock.exchanger.state_HTF[10].p >= 0.0 and powerBlock.exchanger.state_HTF[10].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[10].p <= 100000000.0, has value: " + String(powerBlock.exchanger.state_HTF[10].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1416};
  modelica_boolean tmp89;
  modelica_boolean tmp90;
  static const MMC_DEFSTRINGLIT(tmp91,110,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[10].p <= 100000000.0, has value: ");
  modelica_string tmp92;
  static int tmp93 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp93)
  {
    tmp89 = GreaterEq(data->simulationInfo->realParameter[547] /* powerBlock.exchanger.state_HTF[10].p PARAM */,0.0);
    tmp90 = LessEq(data->simulationInfo->realParameter[547] /* powerBlock.exchanger.state_HTF[10].p PARAM */,100000000.0);
    if(!(tmp89 && tmp90))
    {
      tmp92 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[547] /* powerBlock.exchanger.state_HTF[10].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp91),tmp92);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.state_HTF[10].p >= 0.0 and powerBlock.exchanger.state_HTF[10].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp93 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1417
type: ALGORITHM

  assert(powerBlock.exchanger.state_HTF[11].p >= 0.0 and powerBlock.exchanger.state_HTF[11].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[11].p <= 100000000.0, has value: " + String(powerBlock.exchanger.state_HTF[11].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1417(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1417};
  modelica_boolean tmp94;
  modelica_boolean tmp95;
  static const MMC_DEFSTRINGLIT(tmp96,110,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[11].p <= 100000000.0, has value: ");
  modelica_string tmp97;
  static int tmp98 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp98)
  {
    tmp94 = GreaterEq(data->simulationInfo->realParameter[548] /* powerBlock.exchanger.state_HTF[11].p PARAM */,0.0);
    tmp95 = LessEq(data->simulationInfo->realParameter[548] /* powerBlock.exchanger.state_HTF[11].p PARAM */,100000000.0);
    if(!(tmp94 && tmp95))
    {
      tmp97 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[548] /* powerBlock.exchanger.state_HTF[11].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp96),tmp97);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.state_HTF[11].p >= 0.0 and powerBlock.exchanger.state_HTF[11].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp98 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1418
type: ALGORITHM

  assert(powerBlock.exchanger.state_HTF[12].p >= 0.0 and powerBlock.exchanger.state_HTF[12].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[12].p <= 100000000.0, has value: " + String(powerBlock.exchanger.state_HTF[12].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1418};
  modelica_boolean tmp99;
  modelica_boolean tmp100;
  static const MMC_DEFSTRINGLIT(tmp101,110,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[12].p <= 100000000.0, has value: ");
  modelica_string tmp102;
  static int tmp103 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp103)
  {
    tmp99 = GreaterEq(data->simulationInfo->realParameter[549] /* powerBlock.exchanger.state_HTF[12].p PARAM */,0.0);
    tmp100 = LessEq(data->simulationInfo->realParameter[549] /* powerBlock.exchanger.state_HTF[12].p PARAM */,100000000.0);
    if(!(tmp99 && tmp100))
    {
      tmp102 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[549] /* powerBlock.exchanger.state_HTF[12].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp101),tmp102);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.state_HTF[12].p >= 0.0 and powerBlock.exchanger.state_HTF[12].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp103 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1419
type: ALGORITHM

  assert(powerBlock.exchanger.state_HTF[13].p >= 0.0 and powerBlock.exchanger.state_HTF[13].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[13].p <= 100000000.0, has value: " + String(powerBlock.exchanger.state_HTF[13].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1419};
  modelica_boolean tmp104;
  modelica_boolean tmp105;
  static const MMC_DEFSTRINGLIT(tmp106,110,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[13].p <= 100000000.0, has value: ");
  modelica_string tmp107;
  static int tmp108 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp108)
  {
    tmp104 = GreaterEq(data->simulationInfo->realParameter[550] /* powerBlock.exchanger.state_HTF[13].p PARAM */,0.0);
    tmp105 = LessEq(data->simulationInfo->realParameter[550] /* powerBlock.exchanger.state_HTF[13].p PARAM */,100000000.0);
    if(!(tmp104 && tmp105))
    {
      tmp107 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[550] /* powerBlock.exchanger.state_HTF[13].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp106),tmp107);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.state_HTF[13].p >= 0.0 and powerBlock.exchanger.state_HTF[13].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp108 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1420
type: ALGORITHM

  assert(powerBlock.exchanger.state_HTF[14].p >= 0.0 and powerBlock.exchanger.state_HTF[14].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[14].p <= 100000000.0, has value: " + String(powerBlock.exchanger.state_HTF[14].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1420};
  modelica_boolean tmp109;
  modelica_boolean tmp110;
  static const MMC_DEFSTRINGLIT(tmp111,110,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[14].p <= 100000000.0, has value: ");
  modelica_string tmp112;
  static int tmp113 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp113)
  {
    tmp109 = GreaterEq(data->simulationInfo->realParameter[551] /* powerBlock.exchanger.state_HTF[14].p PARAM */,0.0);
    tmp110 = LessEq(data->simulationInfo->realParameter[551] /* powerBlock.exchanger.state_HTF[14].p PARAM */,100000000.0);
    if(!(tmp109 && tmp110))
    {
      tmp112 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[551] /* powerBlock.exchanger.state_HTF[14].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp111),tmp112);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.state_HTF[14].p >= 0.0 and powerBlock.exchanger.state_HTF[14].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp113 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1421
type: ALGORITHM

  assert(powerBlock.exchanger.state_HTF[15].p >= 0.0 and powerBlock.exchanger.state_HTF[15].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[15].p <= 100000000.0, has value: " + String(powerBlock.exchanger.state_HTF[15].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1421(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1421};
  modelica_boolean tmp114;
  modelica_boolean tmp115;
  static const MMC_DEFSTRINGLIT(tmp116,110,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.state_HTF[15].p <= 100000000.0, has value: ");
  modelica_string tmp117;
  static int tmp118 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp118)
  {
    tmp114 = GreaterEq(data->simulationInfo->realParameter[552] /* powerBlock.exchanger.state_HTF[15].p PARAM */,0.0);
    tmp115 = LessEq(data->simulationInfo->realParameter[552] /* powerBlock.exchanger.state_HTF[15].p PARAM */,100000000.0);
    if(!(tmp114 && tmp115))
    {
      tmp117 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[552] /* powerBlock.exchanger.state_HTF[15].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp116),tmp117);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.state_HTF[15].p >= 0.0 and powerBlock.exchanger.state_HTF[15].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp118 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1422
type: ALGORITHM

  assert(liftSimple.fluid_b.p >= 0.0 and liftSimple.fluid_b.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= liftSimple.fluid_b.p <= 100000000.0, has value: " + String(liftSimple.fluid_b.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1422};
  modelica_boolean tmp119;
  modelica_boolean tmp120;
  static const MMC_DEFSTRINGLIT(tmp121,94,"Variable violating min/max constraint: 0.0 <= liftSimple.fluid_b.p <= 100000000.0, has value: ");
  modelica_string tmp122;
  static int tmp123 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp123)
  {
    tmp119 = GreaterEq(data->simulationInfo->realParameter[17] /* liftSimple.fluid_b.p PARAM */,0.0);
    tmp120 = LessEq(data->simulationInfo->realParameter[17] /* liftSimple.fluid_b.p PARAM */,100000000.0);
    if(!(tmp119 && tmp120))
    {
      tmp122 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[17] /* liftSimple.fluid_b.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp121),tmp122);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nliftSimple.fluid_b.p >= 0.0 and liftSimple.fluid_b.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp123 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1423
type: ALGORITHM

  assert(powerBlock.fluid_a.p >= 0.0 and powerBlock.fluid_a.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.fluid_a.p <= 100000000.0, has value: " + String(powerBlock.fluid_a.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1423};
  modelica_boolean tmp124;
  modelica_boolean tmp125;
  static const MMC_DEFSTRINGLIT(tmp126,94,"Variable violating min/max constraint: 0.0 <= powerBlock.fluid_a.p <= 100000000.0, has value: ");
  modelica_string tmp127;
  static int tmp128 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp128)
  {
    tmp124 = GreaterEq(data->simulationInfo->realParameter[584] /* powerBlock.fluid_a.p PARAM */,0.0);
    tmp125 = LessEq(data->simulationInfo->realParameter[584] /* powerBlock.fluid_a.p PARAM */,100000000.0);
    if(!(tmp124 && tmp125))
    {
      tmp127 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[584] /* powerBlock.fluid_a.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp126),tmp127);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.fluid_a.p >= 0.0 and powerBlock.fluid_a.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp128 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1424
type: ALGORITHM

  assert(powerBlock.exchanger.HTF_port_a.p >= 0.0 and powerBlock.exchanger.HTF_port_a.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.HTF_port_a.p <= 100000000.0, has value: " + String(powerBlock.exchanger.HTF_port_a.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1424};
  modelica_boolean tmp129;
  modelica_boolean tmp130;
  static const MMC_DEFSTRINGLIT(tmp131,107,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.HTF_port_a.p <= 100000000.0, has value: ");
  modelica_string tmp132;
  static int tmp133 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp133)
  {
    tmp129 = GreaterEq(data->simulationInfo->realParameter[431] /* powerBlock.exchanger.HTF_port_a.p PARAM */,0.0);
    tmp130 = LessEq(data->simulationInfo->realParameter[431] /* powerBlock.exchanger.HTF_port_a.p PARAM */,100000000.0);
    if(!(tmp129 && tmp130))
    {
      tmp132 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[431] /* powerBlock.exchanger.HTF_port_a.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp131),tmp132);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.HTF_port_a.p >= 0.0 and powerBlock.exchanger.HTF_port_a.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp133 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1425
type: ALGORITHM

  assert(powerBlock.exchanger.HTF_port_b.p >= 0.0 and powerBlock.exchanger.HTF_port_b.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.HTF_port_b.p <= 100000000.0, has value: " + String(powerBlock.exchanger.HTF_port_b.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1425};
  modelica_boolean tmp134;
  modelica_boolean tmp135;
  static const MMC_DEFSTRINGLIT(tmp136,107,"Variable violating min/max constraint: 0.0 <= powerBlock.exchanger.HTF_port_b.p <= 100000000.0, has value: ");
  modelica_string tmp137;
  static int tmp138 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp138)
  {
    tmp134 = GreaterEq(data->simulationInfo->realParameter[432] /* powerBlock.exchanger.HTF_port_b.p PARAM */,0.0);
    tmp135 = LessEq(data->simulationInfo->realParameter[432] /* powerBlock.exchanger.HTF_port_b.p PARAM */,100000000.0);
    if(!(tmp134 && tmp135))
    {
      tmp137 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[432] /* powerBlock.exchanger.HTF_port_b.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp136),tmp137);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.HTF_port_b.p >= 0.0 and powerBlock.exchanger.HTF_port_b.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp138 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1426
type: ALGORITHM

  assert(powerBlock.fluid_b.p >= 0.0 and powerBlock.fluid_b.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.fluid_b.p <= 100000000.0, has value: " + String(powerBlock.fluid_b.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1426};
  modelica_boolean tmp139;
  modelica_boolean tmp140;
  static const MMC_DEFSTRINGLIT(tmp141,94,"Variable violating min/max constraint: 0.0 <= powerBlock.fluid_b.p <= 100000000.0, has value: ");
  modelica_string tmp142;
  static int tmp143 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp143)
  {
    tmp139 = GreaterEq(data->simulationInfo->realParameter[585] /* powerBlock.fluid_b.p PARAM */,0.0);
    tmp140 = LessEq(data->simulationInfo->realParameter[585] /* powerBlock.fluid_b.p PARAM */,100000000.0);
    if(!(tmp139 && tmp140))
    {
      tmp142 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[585] /* powerBlock.fluid_b.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp141),tmp142);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.fluid_b.p >= 0.0 and powerBlock.fluid_b.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp143 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1427
type: ALGORITHM

  assert(sink.ports[1].p >= 0.0 and sink.ports[1].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sink.ports[1].p <= 100000000.0, has value: " + String(sink.ports[1].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1427};
  modelica_boolean tmp144;
  modelica_boolean tmp145;
  static const MMC_DEFSTRINGLIT(tmp146,89,"Variable violating min/max constraint: 0.0 <= sink.ports[1].p <= 100000000.0, has value: ");
  modelica_string tmp147;
  static int tmp148 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp148)
  {
    tmp144 = GreaterEq(data->simulationInfo->realParameter[681] /* sink.ports[1].p PARAM */,0.0);
    tmp145 = LessEq(data->simulationInfo->realParameter[681] /* sink.ports[1].p PARAM */,100000000.0);
    if(!(tmp144 && tmp145))
    {
      tmp147 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[681] /* sink.ports[1].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp146),tmp147);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.ports[1].p >= 0.0 and sink.ports[1].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp148 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1428
type: ALGORITHM

  assert(sink.medium.p >= 0.0, "Variable violating min constraint: 0.0 <= sink.medium.p, has value: " + String(sink.medium.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1428};
  modelica_boolean tmp149;
  static const MMC_DEFSTRINGLIT(tmp150,68,"Variable violating min constraint: 0.0 <= sink.medium.p, has value: ");
  modelica_string tmp151;
  static int tmp152 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp152)
  {
    tmp149 = GreaterEq(data->simulationInfo->realParameter[678] /* sink.medium.p PARAM */,0.0);
    if(!tmp149)
    {
      tmp151 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[678] /* sink.medium.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp150),tmp151);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4477,7,4477,60,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.medium.p >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp152 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1429
type: ALGORITHM

  assert(sink.state.p >= 0.0 and sink.state.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sink.state.p <= 100000000.0, has value: " + String(sink.state.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1429};
  modelica_boolean tmp153;
  modelica_boolean tmp154;
  static const MMC_DEFSTRINGLIT(tmp155,86,"Variable violating min/max constraint: 0.0 <= sink.state.p <= 100000000.0, has value: ");
  modelica_string tmp156;
  static int tmp157 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp157)
  {
    tmp153 = GreaterEq(data->simulationInfo->realParameter[682] /* sink.state.p PARAM */,0.0);
    tmp154 = LessEq(data->simulationInfo->realParameter[682] /* sink.state.p PARAM */,100000000.0);
    if(!(tmp153 && tmp154))
    {
      tmp156 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[682] /* sink.state.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp155),tmp156);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/SolidParticles/CarboHSP_ph/package.mo",71,3,71,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.state.p >= 0.0 and sink.state.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp157 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1430
type: ALGORITHM

  assert(powerBlock.cooler.T_amb >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.cooler.T_amb, has value: " + String(powerBlock.cooler.T_amb, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1430};
  modelica_boolean tmp158;
  static const MMC_DEFSTRINGLIT(tmp159,78,"Variable violating min constraint: 0.0 <= powerBlock.cooler.T_amb, has value: ");
  modelica_string tmp160;
  static int tmp161 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp161)
  {
    tmp158 = GreaterEq(data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb PARAM */,0.0);
    if(!tmp158)
    {
      tmp160 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[341] /* powerBlock.cooler.T_amb PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp159),tmp160);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",360,4,360,89,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.cooler.T_amb >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp161 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1431
type: ALGORITHM

  assert(liftSimple.eff >= 0.0, "Variable violating min constraint: 0.0 <= liftSimple.eff, has value: " + String(liftSimple.eff, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1431};
  modelica_boolean tmp162;
  static const MMC_DEFSTRINGLIT(tmp163,69,"Variable violating min constraint: 0.0 <= liftSimple.eff, has value: ");
  modelica_string tmp164;
  static int tmp165 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp165)
  {
    tmp162 = GreaterEq(data->simulationInfo->realParameter[16] /* liftSimple.eff PARAM */,0.0);
    if(!tmp162)
    {
      tmp164 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[16] /* liftSimple.eff PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp163),tmp164);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/Fluid/Pumps/LiftSimple.mo",16,2,16,64,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nliftSimple.eff >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp165 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1432
type: ALGORITHM

  assert(liftSimple.dh >= 0.0, "Variable violating min constraint: 0.0 <= liftSimple.dh, has value: " + String(liftSimple.dh, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1432};
  modelica_boolean tmp166;
  static const MMC_DEFSTRINGLIT(tmp167,68,"Variable violating min constraint: 0.0 <= liftSimple.dh, has value: ");
  modelica_string tmp168;
  static int tmp169 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp169)
  {
    tmp166 = GreaterEq(data->simulationInfo->realParameter[14] /* liftSimple.dh PARAM */,0.0);
    if(!tmp166)
    {
      tmp168 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[14] /* liftSimple.dh PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp167),tmp168);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/Fluid/Pumps/LiftSimple.mo",14,2,14,52,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nliftSimple.dh >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp169 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1433
type: ALGORITHM

  assert(sink.X[5] >= 0.0 and sink.X[5] <= 1.0, "Variable violating min/max constraint: 0.0 <= sink.X[5] <= 1.0, has value: " + String(sink.X[5], "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1433};
  modelica_boolean tmp170;
  modelica_boolean tmp171;
  static const MMC_DEFSTRINGLIT(tmp172,75,"Variable violating min/max constraint: 0.0 <= sink.X[5] <= 1.0, has value: ");
  modelica_string tmp173;
  static int tmp174 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp174)
  {
    tmp170 = GreaterEq(data->simulationInfo->realParameter[675] /* sink.X[5] PARAM */,0.0);
    tmp171 = LessEq(data->simulationInfo->realParameter[675] /* sink.X[5] PARAM */,1.0);
    if(!(tmp170 && tmp171))
    {
      tmp173 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[675] /* sink.X[5] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp172),tmp173);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.X[5] >= 0.0 and sink.X[5] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp174 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1434
type: ALGORITHM

  assert(sink.X[4] >= 0.0 and sink.X[4] <= 1.0, "Variable violating min/max constraint: 0.0 <= sink.X[4] <= 1.0, has value: " + String(sink.X[4], "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1434(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1434};
  modelica_boolean tmp175;
  modelica_boolean tmp176;
  static const MMC_DEFSTRINGLIT(tmp177,75,"Variable violating min/max constraint: 0.0 <= sink.X[4] <= 1.0, has value: ");
  modelica_string tmp178;
  static int tmp179 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp179)
  {
    tmp175 = GreaterEq(data->simulationInfo->realParameter[674] /* sink.X[4] PARAM */,0.0);
    tmp176 = LessEq(data->simulationInfo->realParameter[674] /* sink.X[4] PARAM */,1.0);
    if(!(tmp175 && tmp176))
    {
      tmp178 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[674] /* sink.X[4] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp177),tmp178);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.X[4] >= 0.0 and sink.X[4] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp179 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1435
type: ALGORITHM

  assert(sink.X[3] >= 0.0 and sink.X[3] <= 1.0, "Variable violating min/max constraint: 0.0 <= sink.X[3] <= 1.0, has value: " + String(sink.X[3], "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1435(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1435};
  modelica_boolean tmp180;
  modelica_boolean tmp181;
  static const MMC_DEFSTRINGLIT(tmp182,75,"Variable violating min/max constraint: 0.0 <= sink.X[3] <= 1.0, has value: ");
  modelica_string tmp183;
  static int tmp184 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp184)
  {
    tmp180 = GreaterEq(data->simulationInfo->realParameter[673] /* sink.X[3] PARAM */,0.0);
    tmp181 = LessEq(data->simulationInfo->realParameter[673] /* sink.X[3] PARAM */,1.0);
    if(!(tmp180 && tmp181))
    {
      tmp183 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[673] /* sink.X[3] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp182),tmp183);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.X[3] >= 0.0 and sink.X[3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp184 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1436
type: ALGORITHM

  assert(sink.X[2] >= 0.0 and sink.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= sink.X[2] <= 1.0, has value: " + String(sink.X[2], "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1436};
  modelica_boolean tmp185;
  modelica_boolean tmp186;
  static const MMC_DEFSTRINGLIT(tmp187,75,"Variable violating min/max constraint: 0.0 <= sink.X[2] <= 1.0, has value: ");
  modelica_string tmp188;
  static int tmp189 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp189)
  {
    tmp185 = GreaterEq(data->simulationInfo->realParameter[672] /* sink.X[2] PARAM */,0.0);
    tmp186 = LessEq(data->simulationInfo->realParameter[672] /* sink.X[2] PARAM */,1.0);
    if(!(tmp185 && tmp186))
    {
      tmp188 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[672] /* sink.X[2] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp187),tmp188);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.X[2] >= 0.0 and sink.X[2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp189 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1437
type: ALGORITHM

  assert(sink.X[1] >= 0.0 and sink.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= sink.X[1] <= 1.0, has value: " + String(sink.X[1], "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1437};
  modelica_boolean tmp190;
  modelica_boolean tmp191;
  static const MMC_DEFSTRINGLIT(tmp192,75,"Variable violating min/max constraint: 0.0 <= sink.X[1] <= 1.0, has value: ");
  modelica_string tmp193;
  static int tmp194 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp194)
  {
    tmp190 = GreaterEq(data->simulationInfo->realParameter[671] /* sink.X[1] PARAM */,0.0);
    tmp191 = LessEq(data->simulationInfo->realParameter[671] /* sink.X[1] PARAM */,1.0);
    if(!(tmp190 && tmp191))
    {
      tmp193 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[671] /* sink.X[1] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp192),tmp193);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.X[1] >= 0.0 and sink.X[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp194 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1438
type: ALGORITHM

  assert(sink.h >= -10000000000.0 and sink.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sink.h <= 10000000000.0, has value: " + String(sink.h, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1438};
  modelica_boolean tmp195;
  modelica_boolean tmp196;
  static const MMC_DEFSTRINGLIT(tmp197,93,"Variable violating min/max constraint: -10000000000.0 <= sink.h <= 10000000000.0, has value: ");
  modelica_string tmp198;
  static int tmp199 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp199)
  {
    tmp195 = GreaterEq(data->simulationInfo->realParameter[677] /* sink.h PARAM */,-10000000000.0);
    tmp196 = LessEq(data->simulationInfo->realParameter[677] /* sink.h PARAM */,10000000000.0);
    if(!(tmp195 && tmp196))
    {
      tmp198 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[677] /* sink.h PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp197),tmp198);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",27,5,30,39,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.h >= -10000000000.0 and sink.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp199 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1439
type: ALGORITHM

  assert(sink.d >= 0.0 and sink.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= sink.d <= 100000.0, has value: " + String(sink.d, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1439};
  modelica_boolean tmp200;
  modelica_boolean tmp201;
  static const MMC_DEFSTRINGLIT(tmp202,77,"Variable violating min/max constraint: 0.0 <= sink.d <= 100000.0, has value: ");
  modelica_string tmp203;
  static int tmp204 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp204)
  {
    tmp200 = GreaterEq(data->simulationInfo->realParameter[676] /* sink.d PARAM */,0.0);
    tmp201 = LessEq(data->simulationInfo->realParameter[676] /* sink.d PARAM */,100000.0);
    if(!(tmp200 && tmp201))
    {
      tmp203 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[676] /* sink.d PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp202),tmp203);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",13,3,20,44,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.d >= 0.0 and sink.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp204 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1440
type: ALGORITHM

  assert(sink.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and sink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= sink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(sink.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1440};
  modelica_boolean tmp205;
  modelica_boolean tmp206;
  static const MMC_DEFSTRINGLIT(tmp207,177,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= sink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp208;
  static int tmp209 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp209)
  {
    tmp205 = GreaterEq(data->simulationInfo->integerParameter[10] /* sink.flowDirection PARAM */,1);
    tmp206 = LessEq(data->simulationInfo->integerParameter[10] /* sink.flowDirection PARAM */,3);
    if(!(tmp205 && tmp206))
    {
      tmp208 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[10] /* sink.flowDirection PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp207),tmp208);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",776,5,778,95,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and sink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp209 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1441
type: ALGORITHM

  assert(source.X[5] >= 0.0 and source.X[5] <= 1.0, "Variable violating min/max constraint: 0.0 <= source.X[5] <= 1.0, has value: " + String(source.X[5], "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1441};
  modelica_boolean tmp210;
  modelica_boolean tmp211;
  static const MMC_DEFSTRINGLIT(tmp212,77,"Variable violating min/max constraint: 0.0 <= source.X[5] <= 1.0, has value: ");
  modelica_string tmp213;
  static int tmp214 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp214)
  {
    tmp210 = GreaterEq(data->simulationInfo->realParameter[688] /* source.X[5] PARAM */,0.0);
    tmp211 = LessEq(data->simulationInfo->realParameter[688] /* source.X[5] PARAM */,1.0);
    if(!(tmp210 && tmp211))
    {
      tmp213 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[688] /* source.X[5] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp212),tmp213);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.X[5] >= 0.0 and source.X[5] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp214 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1442
type: ALGORITHM

  assert(source.X[4] >= 0.0 and source.X[4] <= 1.0, "Variable violating min/max constraint: 0.0 <= source.X[4] <= 1.0, has value: " + String(source.X[4], "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1442};
  modelica_boolean tmp215;
  modelica_boolean tmp216;
  static const MMC_DEFSTRINGLIT(tmp217,77,"Variable violating min/max constraint: 0.0 <= source.X[4] <= 1.0, has value: ");
  modelica_string tmp218;
  static int tmp219 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp219)
  {
    tmp215 = GreaterEq(data->simulationInfo->realParameter[687] /* source.X[4] PARAM */,0.0);
    tmp216 = LessEq(data->simulationInfo->realParameter[687] /* source.X[4] PARAM */,1.0);
    if(!(tmp215 && tmp216))
    {
      tmp218 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[687] /* source.X[4] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp217),tmp218);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.X[4] >= 0.0 and source.X[4] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp219 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1443
type: ALGORITHM

  assert(source.X[3] >= 0.0 and source.X[3] <= 1.0, "Variable violating min/max constraint: 0.0 <= source.X[3] <= 1.0, has value: " + String(source.X[3], "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1443};
  modelica_boolean tmp220;
  modelica_boolean tmp221;
  static const MMC_DEFSTRINGLIT(tmp222,77,"Variable violating min/max constraint: 0.0 <= source.X[3] <= 1.0, has value: ");
  modelica_string tmp223;
  static int tmp224 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp224)
  {
    tmp220 = GreaterEq(data->simulationInfo->realParameter[686] /* source.X[3] PARAM */,0.0);
    tmp221 = LessEq(data->simulationInfo->realParameter[686] /* source.X[3] PARAM */,1.0);
    if(!(tmp220 && tmp221))
    {
      tmp223 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[686] /* source.X[3] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp222),tmp223);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.X[3] >= 0.0 and source.X[3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp224 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1444
type: ALGORITHM

  assert(source.X[2] >= 0.0 and source.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= source.X[2] <= 1.0, has value: " + String(source.X[2], "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1444(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1444};
  modelica_boolean tmp225;
  modelica_boolean tmp226;
  static const MMC_DEFSTRINGLIT(tmp227,77,"Variable violating min/max constraint: 0.0 <= source.X[2] <= 1.0, has value: ");
  modelica_string tmp228;
  static int tmp229 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp229)
  {
    tmp225 = GreaterEq(data->simulationInfo->realParameter[685] /* source.X[2] PARAM */,0.0);
    tmp226 = LessEq(data->simulationInfo->realParameter[685] /* source.X[2] PARAM */,1.0);
    if(!(tmp225 && tmp226))
    {
      tmp228 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[685] /* source.X[2] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp227),tmp228);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.X[2] >= 0.0 and source.X[2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp229 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1445
type: ALGORITHM

  assert(source.X[1] >= 0.0 and source.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= source.X[1] <= 1.0, has value: " + String(source.X[1], "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1445(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1445};
  modelica_boolean tmp230;
  modelica_boolean tmp231;
  static const MMC_DEFSTRINGLIT(tmp232,77,"Variable violating min/max constraint: 0.0 <= source.X[1] <= 1.0, has value: ");
  modelica_string tmp233;
  static int tmp234 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp234)
  {
    tmp230 = GreaterEq(data->simulationInfo->realParameter[684] /* source.X[1] PARAM */,0.0);
    tmp231 = LessEq(data->simulationInfo->realParameter[684] /* source.X[1] PARAM */,1.0);
    if(!(tmp230 && tmp231))
    {
      tmp233 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[684] /* source.X[1] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp232),tmp233);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.X[1] >= 0.0 and source.X[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp234 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1446
type: ALGORITHM

  assert(source.h >= -10000000000.0 and source.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= source.h <= 10000000000.0, has value: " + String(source.h, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1446};
  modelica_boolean tmp235;
  modelica_boolean tmp236;
  static const MMC_DEFSTRINGLIT(tmp237,95,"Variable violating min/max constraint: -10000000000.0 <= source.h <= 10000000000.0, has value: ");
  modelica_string tmp238;
  static int tmp239 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp239)
  {
    tmp235 = GreaterEq(data->simulationInfo->realParameter[690] /* source.h PARAM */,-10000000000.0);
    tmp236 = LessEq(data->simulationInfo->realParameter[690] /* source.h PARAM */,10000000000.0);
    if(!(tmp235 && tmp236))
    {
      tmp238 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[690] /* source.h PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp237),tmp238);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",27,5,30,39,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.h >= -10000000000.0 and source.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp239 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1447
type: ALGORITHM

  assert(source.d >= 0.0 and source.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= source.d <= 100000.0, has value: " + String(source.d, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1447};
  modelica_boolean tmp240;
  modelica_boolean tmp241;
  static const MMC_DEFSTRINGLIT(tmp242,79,"Variable violating min/max constraint: 0.0 <= source.d <= 100000.0, has value: ");
  modelica_string tmp243;
  static int tmp244 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp244)
  {
    tmp240 = GreaterEq(data->simulationInfo->realParameter[689] /* source.d PARAM */,0.0);
    tmp241 = LessEq(data->simulationInfo->realParameter[689] /* source.d PARAM */,100000.0);
    if(!(tmp240 && tmp241))
    {
      tmp243 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[689] /* source.d PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp242),tmp243);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",13,3,20,44,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.d >= 0.0 and source.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp244 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1448
type: ALGORITHM

  assert(source.p >= 0.0 and source.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= source.p <= 100000000.0, has value: " + String(source.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1448};
  modelica_boolean tmp245;
  modelica_boolean tmp246;
  static const MMC_DEFSTRINGLIT(tmp247,82,"Variable violating min/max constraint: 0.0 <= source.p <= 100000000.0, has value: ");
  modelica_string tmp248;
  static int tmp249 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp249)
  {
    tmp245 = GreaterEq(data->simulationInfo->realParameter[691] /* source.p PARAM */,0.0);
    tmp246 = LessEq(data->simulationInfo->realParameter[691] /* source.p PARAM */,100000000.0);
    if(!(tmp245 && tmp246))
    {
      tmp248 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[691] /* source.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp247),tmp248);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",10,5,12,42,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.p >= 0.0 and source.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp249 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1449
type: ALGORITHM

  assert(source.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and source.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= source.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(source.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1449};
  modelica_boolean tmp250;
  modelica_boolean tmp251;
  static const MMC_DEFSTRINGLIT(tmp252,179,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= source.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp253;
  static int tmp254 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp254)
  {
    tmp250 = GreaterEq(data->simulationInfo->integerParameter[12] /* source.flowDirection PARAM */,1);
    tmp251 = LessEq(data->simulationInfo->integerParameter[12] /* source.flowDirection PARAM */,3);
    if(!(tmp250 && tmp251))
    {
      tmp253 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[12] /* source.flowDirection PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp252),tmp253);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",776,5,778,95,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and source.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp254 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1450
type: ALGORITHM

  assert(powerBlock.state_HTF_in_des.h >= -10000000000.0 and powerBlock.state_HTF_in_des.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= powerBlock.state_HTF_in_des.h <= 10000000000.0, has value: " + String(powerBlock.state_HTF_in_des.h, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1450};
  modelica_boolean tmp255;
  modelica_boolean tmp256;
  static const MMC_DEFSTRINGLIT(tmp257,116,"Variable violating min/max constraint: -10000000000.0 <= powerBlock.state_HTF_in_des.h <= 10000000000.0, has value: ");
  modelica_string tmp258;
  static int tmp259 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp259)
  {
    tmp255 = GreaterEq(data->simulationInfo->realParameter[642] /* powerBlock.state_HTF_in_des.h PARAM */,-10000000000.0);
    tmp256 = LessEq(data->simulationInfo->realParameter[642] /* powerBlock.state_HTF_in_des.h PARAM */,10000000000.0);
    if(!(tmp255 && tmp256))
    {
      tmp258 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[642] /* powerBlock.state_HTF_in_des.h PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp257),tmp258);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/SolidParticles/CarboHSP_ph/package.mo",72,3,72,41,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.state_HTF_in_des.h >= -10000000000.0 and powerBlock.state_HTF_in_des.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp259 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1451
type: ALGORITHM

  assert(powerBlock.state_HTF_in_des.p >= 0.0 and powerBlock.state_HTF_in_des.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.state_HTF_in_des.p <= 100000000.0, has value: " + String(powerBlock.state_HTF_in_des.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1451(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1451};
  modelica_boolean tmp260;
  modelica_boolean tmp261;
  static const MMC_DEFSTRINGLIT(tmp262,103,"Variable violating min/max constraint: 0.0 <= powerBlock.state_HTF_in_des.p <= 100000000.0, has value: ");
  modelica_string tmp263;
  static int tmp264 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp264)
  {
    tmp260 = GreaterEq(data->simulationInfo->realParameter[643] /* powerBlock.state_HTF_in_des.p PARAM */,0.0);
    tmp261 = LessEq(data->simulationInfo->realParameter[643] /* powerBlock.state_HTF_in_des.p PARAM */,100000000.0);
    if(!(tmp260 && tmp261))
    {
      tmp263 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[643] /* powerBlock.state_HTF_in_des.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp262),tmp263);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/SolidParticles/CarboHSP_ph/package.mo",71,3,71,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.state_HTF_in_des.p >= 0.0 and powerBlock.state_HTF_in_des.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp264 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1452
type: ALGORITHM

  assert(powerBlock.pinch_recuperator >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.pinch_recuperator, has value: " + String(powerBlock.pinch_recuperator, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1452};
  modelica_boolean tmp265;
  static const MMC_DEFSTRINGLIT(tmp266,83,"Variable violating min constraint: 0.0 <= powerBlock.pinch_recuperator, has value: ");
  modelica_string tmp267;
  static int tmp268 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp268)
  {
    tmp265 = GreaterEq(data->simulationInfo->realParameter[611] /* powerBlock.pinch_recuperator PARAM */,0.0);
    if(!tmp265)
    {
      tmp267 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[611] /* powerBlock.pinch_recuperator PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp266),tmp267);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",805,7,805,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.pinch_recuperator >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp268 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1453
type: ALGORITHM

  assert(powerBlock.reCompressor.phi_opt >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.reCompressor.phi_opt, has value: " + String(powerBlock.reCompressor.phi_opt, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1453};
  modelica_boolean tmp269;
  static const MMC_DEFSTRINGLIT(tmp270,86,"Variable violating min constraint: 0.0 <= powerBlock.reCompressor.phi_opt, has value: ");
  modelica_string tmp271;
  static int tmp272 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp272)
  {
    tmp269 = GreaterEq(data->simulationInfo->realParameter[633] /* powerBlock.reCompressor.phi_opt PARAM */,0.0);
    if(!tmp269)
    {
      tmp271 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[633] /* powerBlock.reCompressor.phi_opt PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp270),tmp271);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",578,4,578,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.reCompressor.phi_opt >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp272 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1454
type: ALGORITHM

  assert(p_high >= 0.0, "Variable violating min constraint: 0.0 <= p_high, has value: " + String(p_high, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1454};
  modelica_boolean tmp273;
  static const MMC_DEFSTRINGLIT(tmp274,61,"Variable violating min constraint: 0.0 <= p_high, has value: ");
  modelica_string tmp275;
  static int tmp276 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp276)
  {
    tmp273 = GreaterEq(data->simulationInfo->realParameter[25] /* p_high PARAM */,0.0);
    if(!tmp273)
    {
      tmp275 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[25] /* p_high PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp274),tmp275);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-morris-algorithm/simulation/sCO2PBRig.mo",25,3,25,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\np_high >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp276 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1455
type: ALGORITHM

  assert(powerBlock.p_high >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.p_high, has value: " + String(powerBlock.p_high, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1455(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1455};
  modelica_boolean tmp277;
  static const MMC_DEFSTRINGLIT(tmp278,72,"Variable violating min constraint: 0.0 <= powerBlock.p_high, has value: ");
  modelica_string tmp279;
  static int tmp280 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp280)
  {
    tmp277 = GreaterEq(data->simulationInfo->realParameter[609] /* powerBlock.p_high PARAM */,0.0);
    if(!tmp277)
    {
      tmp279 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[609] /* powerBlock.p_high PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp278),tmp279);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",808,7,808,87,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.p_high >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp280 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1456
type: ALGORITHM

  assert(powerBlock.reCompressor.p_high_des >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.reCompressor.p_high_des, has value: " + String(powerBlock.reCompressor.p_high_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1456};
  modelica_boolean tmp281;
  static const MMC_DEFSTRINGLIT(tmp282,89,"Variable violating min constraint: 0.0 <= powerBlock.reCompressor.p_high_des, has value: ");
  modelica_string tmp283;
  static int tmp284 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp284)
  {
    tmp281 = GreaterEq(data->simulationInfo->realParameter[630] /* powerBlock.reCompressor.p_high_des PARAM */,0.0);
    if(!tmp281)
    {
      tmp283 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[630] /* powerBlock.reCompressor.p_high_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp282),tmp283);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",577,4,577,60,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.reCompressor.p_high_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp284 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1457
type: ALGORITHM

  assert(powerBlock.reCompressor.T_in_des >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.reCompressor.T_in_des, has value: " + String(powerBlock.reCompressor.T_in_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1457};
  modelica_boolean tmp285;
  static const MMC_DEFSTRINGLIT(tmp286,87,"Variable violating min constraint: 0.0 <= powerBlock.reCompressor.T_in_des, has value: ");
  modelica_string tmp287;
  static int tmp288 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp288)
  {
    tmp285 = GreaterEq(data->simulationInfo->realParameter[623] /* powerBlock.reCompressor.T_in_des PARAM */,0.0);
    if(!tmp285)
    {
      tmp287 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[623] /* powerBlock.reCompressor.T_in_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp286),tmp287);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",576,4,576,127,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.reCompressor.T_in_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp288 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1458
type: ALGORITHM

  assert(powerBlock.reCompressor.PR >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.reCompressor.PR, has value: " + String(powerBlock.reCompressor.PR, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1458};
  modelica_boolean tmp289;
  static const MMC_DEFSTRINGLIT(tmp290,81,"Variable violating min constraint: 0.0 <= powerBlock.reCompressor.PR, has value: ");
  modelica_string tmp291;
  static int tmp292 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp292)
  {
    tmp289 = GreaterEq(data->simulationInfo->realParameter[621] /* powerBlock.reCompressor.PR PARAM */,0.0);
    if(!tmp289)
    {
      tmp291 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[621] /* powerBlock.reCompressor.PR PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp290),tmp291);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",574,4,574,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.reCompressor.PR >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp292 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1459
type: ALGORITHM

  assert(powerBlock.reCompressor.eta_design >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.reCompressor.eta_design, has value: " + String(powerBlock.reCompressor.eta_design, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1459};
  modelica_boolean tmp293;
  static const MMC_DEFSTRINGLIT(tmp294,89,"Variable violating min constraint: 0.0 <= powerBlock.reCompressor.eta_design, has value: ");
  modelica_string tmp295;
  static int tmp296 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp296)
  {
    tmp293 = GreaterEq(data->simulationInfo->realParameter[626] /* powerBlock.reCompressor.eta_design PARAM */,0.0);
    if(!tmp293)
    {
      tmp295 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[626] /* powerBlock.reCompressor.eta_design PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp294),tmp295);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",572,4,572,95,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.reCompressor.eta_design >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp296 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1460
type: ALGORITHM

  assert(powerBlock.exchanger.T_HTF_des_out >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.exchanger.T_HTF_des_out, has value: " + String(powerBlock.exchanger.T_HTF_des_out, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1460};
  modelica_boolean tmp297;
  static const MMC_DEFSTRINGLIT(tmp298,89,"Variable violating min constraint: 0.0 <= powerBlock.exchanger.T_HTF_des_out, has value: ");
  modelica_string tmp299;
  static int tmp300 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp300)
  {
    tmp297 = GreaterEq(data->simulationInfo->realParameter[465] /* powerBlock.exchanger.T_HTF_des_out PARAM */,0.0);
    if(!tmp297)
    {
      tmp299 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[465] /* powerBlock.exchanger.T_HTF_des_out PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp298),tmp299);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",251,4,251,75,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.T_HTF_des_out >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp300 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1461
type: ALGORITHM

  assert(powerBlock.T_high >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.T_high, has value: " + String(powerBlock.T_high, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1461};
  modelica_boolean tmp301;
  static const MMC_DEFSTRINGLIT(tmp302,72,"Variable violating min constraint: 0.0 <= powerBlock.T_high, has value: ");
  modelica_string tmp303;
  static int tmp304 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp304)
  {
    tmp301 = GreaterEq(data->simulationInfo->realParameter[316] /* powerBlock.T_high PARAM */,0.0);
    if(!tmp301)
    {
      tmp303 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[316] /* powerBlock.T_high PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp302),tmp303);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",809,7,809,101,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.T_high >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp304 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1462
type: ALGORITHM

  assert(powerBlock.exchanger.T_out_CO2_des >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.exchanger.T_out_CO2_des, has value: " + String(powerBlock.exchanger.T_out_CO2_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1462};
  modelica_boolean tmp305;
  static const MMC_DEFSTRINGLIT(tmp306,89,"Variable violating min constraint: 0.0 <= powerBlock.exchanger.T_out_CO2_des, has value: ");
  modelica_string tmp307;
  static int tmp308 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp308)
  {
    tmp305 = GreaterEq(data->simulationInfo->realParameter[466] /* powerBlock.exchanger.T_out_CO2_des PARAM */,0.0);
    if(!tmp305)
    {
      tmp307 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[466] /* powerBlock.exchanger.T_out_CO2_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp306),tmp307);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",231,4,231,73,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.exchanger.T_out_CO2_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp308 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1463
type: ALGORITHM

  assert(powerBlock.T_amb_des >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.T_amb_des, has value: " + String(powerBlock.T_amb_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1463};
  modelica_boolean tmp309;
  static const MMC_DEFSTRINGLIT(tmp310,75,"Variable violating min constraint: 0.0 <= powerBlock.T_amb_des, has value: ");
  modelica_string tmp311;
  static int tmp312 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp312)
  {
    tmp309 = GreaterEq(data->simulationInfo->realParameter[315] /* powerBlock.T_amb_des PARAM */,0.0);
    if(!tmp309)
    {
      tmp311 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[315] /* powerBlock.T_amb_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp310),tmp311);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",810,7,810,90,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.T_amb_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp312 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1464
type: ALGORITHM

  assert(powerBlock.turbine.T_amb >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.turbine.T_amb, has value: " + String(powerBlock.turbine.T_amb, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1464};
  modelica_boolean tmp313;
  static const MMC_DEFSTRINGLIT(tmp314,79,"Variable violating min constraint: 0.0 <= powerBlock.turbine.T_amb, has value: ");
  modelica_string tmp315;
  static int tmp316 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp316)
  {
    tmp313 = GreaterEq(data->simulationInfo->realParameter[648] /* powerBlock.turbine.T_amb PARAM */,0.0);
    if(!tmp313)
    {
      tmp315 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[648] /* powerBlock.turbine.T_amb PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp314),tmp315);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",140,4,140,85,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.turbine.T_amb >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp316 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1465
type: ALGORITHM

  assert(powerBlock.turbine.PR >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.turbine.PR, has value: " + String(powerBlock.turbine.PR, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1465};
  modelica_boolean tmp317;
  static const MMC_DEFSTRINGLIT(tmp318,76,"Variable violating min constraint: 0.0 <= powerBlock.turbine.PR, has value: ");
  modelica_string tmp319;
  static int tmp320 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp320)
  {
    tmp317 = GreaterEq(data->simulationInfo->realParameter[647] /* powerBlock.turbine.PR PARAM */,0.0);
    if(!tmp317)
    {
      tmp319 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[647] /* powerBlock.turbine.PR PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp318),tmp319);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",139,4,139,65,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.turbine.PR >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp320 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1466
type: ALGORITHM

  assert(powerBlock.eta_turb >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.eta_turb, has value: " + String(powerBlock.eta_turb, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1466};
  modelica_boolean tmp321;
  static const MMC_DEFSTRINGLIT(tmp322,74,"Variable violating min constraint: 0.0 <= powerBlock.eta_turb, has value: ");
  modelica_string tmp323;
  static int tmp324 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp324)
  {
    tmp321 = GreaterEq(data->simulationInfo->realParameter[430] /* powerBlock.eta_turb PARAM */,0.0);
    if(!tmp321)
    {
      tmp323 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[430] /* powerBlock.eta_turb PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp322),tmp323);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",828,7,828,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.eta_turb >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp324 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1467
type: ALGORITHM

  assert(powerBlock.turbine.eta_design >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.turbine.eta_design, has value: " + String(powerBlock.turbine.eta_design, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1467};
  modelica_boolean tmp325;
  static const MMC_DEFSTRINGLIT(tmp326,84,"Variable violating min constraint: 0.0 <= powerBlock.turbine.eta_design, has value: ");
  modelica_string tmp327;
  static int tmp328 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp328)
  {
    tmp325 = GreaterEq(data->simulationInfo->realParameter[651] /* powerBlock.turbine.eta_design PARAM */,0.0);
    if(!tmp325)
    {
      tmp327 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[651] /* powerBlock.turbine.eta_design PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp326),tmp327);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",138,4,138,97,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.turbine.eta_design >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp328 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1468
type: ALGORITHM

  assert(T_low >= 0.0, "Variable violating min constraint: 0.0 <= T_low, has value: " + String(T_low, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1468(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1468};
  modelica_boolean tmp329;
  static const MMC_DEFSTRINGLIT(tmp330,60,"Variable violating min constraint: 0.0 <= T_low, has value: ");
  modelica_string tmp331;
  static int tmp332 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp332)
  {
    tmp329 = GreaterEq(data->simulationInfo->realParameter[8] /* T_low PARAM */,0.0);
    if(!tmp329)
    {
      tmp331 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[8] /* T_low PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp330),tmp331);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-morris-algorithm/simulation/sCO2PBRig.mo",22,3,22,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nT_low >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp332 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1469
type: ALGORITHM

  assert(powerBlock.T_low >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.T_low, has value: " + String(powerBlock.T_low, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1469};
  modelica_boolean tmp333;
  static const MMC_DEFSTRINGLIT(tmp334,71,"Variable violating min constraint: 0.0 <= powerBlock.T_low, has value: ");
  modelica_string tmp335;
  static int tmp336 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp336)
  {
    tmp333 = GreaterEq(data->simulationInfo->realParameter[317] /* powerBlock.T_low PARAM */,0.0);
    if(!tmp333)
    {
      tmp335 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[317] /* powerBlock.T_low PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp334),tmp335);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",838,7,838,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.T_low >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp336 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1470
type: ALGORITHM

  assert(powerBlock.cooler.T_low >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.cooler.T_low, has value: " + String(powerBlock.cooler.T_low, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1470(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1470};
  modelica_boolean tmp337;
  static const MMC_DEFSTRINGLIT(tmp338,78,"Variable violating min constraint: 0.0 <= powerBlock.cooler.T_low, has value: ");
  modelica_string tmp339;
  static int tmp340 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp340)
  {
    tmp337 = GreaterEq(data->simulationInfo->realParameter[343] /* powerBlock.cooler.T_low PARAM */,0.0);
    if(!tmp337)
    {
      tmp339 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[343] /* powerBlock.cooler.T_low PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp338),tmp339);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",364,4,364,64,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.cooler.T_low >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp340 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1471
type: ALGORITHM

  assert(powerBlock.cooler.T_amb_des >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.cooler.T_amb_des, has value: " + String(powerBlock.cooler.T_amb_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1471(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1471};
  modelica_boolean tmp341;
  static const MMC_DEFSTRINGLIT(tmp342,82,"Variable violating min constraint: 0.0 <= powerBlock.cooler.T_amb_des, has value: ");
  modelica_string tmp343;
  static int tmp344 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp344)
  {
    tmp341 = GreaterEq(data->simulationInfo->realParameter[342] /* powerBlock.cooler.T_amb_des PARAM */,0.0);
    if(!tmp341)
    {
      tmp343 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[342] /* powerBlock.cooler.T_amb_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp342),tmp343);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",362,4,362,116,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.cooler.T_amb_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp344 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1472
type: ALGORITHM

  assert(powerBlock.mainCompressor.phi_opt >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.mainCompressor.phi_opt, has value: " + String(powerBlock.mainCompressor.phi_opt, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1472};
  modelica_boolean tmp345;
  static const MMC_DEFSTRINGLIT(tmp346,88,"Variable violating min constraint: 0.0 <= powerBlock.mainCompressor.phi_opt, has value: ");
  modelica_string tmp347;
  static int tmp348 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp348)
  {
    tmp345 = GreaterEq(data->simulationInfo->realParameter[601] /* powerBlock.mainCompressor.phi_opt PARAM */,0.0);
    if(!tmp345)
    {
      tmp347 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[601] /* powerBlock.mainCompressor.phi_opt PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp346),tmp347);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",578,4,578,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.mainCompressor.phi_opt >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp348 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1473
type: ALGORITHM

  assert(powerBlock.mainCompressor.p_high_des >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.mainCompressor.p_high_des, has value: " + String(powerBlock.mainCompressor.p_high_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1473};
  modelica_boolean tmp349;
  static const MMC_DEFSTRINGLIT(tmp350,91,"Variable violating min constraint: 0.0 <= powerBlock.mainCompressor.p_high_des, has value: ");
  modelica_string tmp351;
  static int tmp352 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp352)
  {
    tmp349 = GreaterEq(data->simulationInfo->realParameter[598] /* powerBlock.mainCompressor.p_high_des PARAM */,0.0);
    if(!tmp349)
    {
      tmp351 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[598] /* powerBlock.mainCompressor.p_high_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp350),tmp351);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",577,4,577,60,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.mainCompressor.p_high_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp352 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1474
type: ALGORITHM

  assert(powerBlock.mainCompressor.T_in_des >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.mainCompressor.T_in_des, has value: " + String(powerBlock.mainCompressor.T_in_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1474(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1474};
  modelica_boolean tmp353;
  static const MMC_DEFSTRINGLIT(tmp354,89,"Variable violating min constraint: 0.0 <= powerBlock.mainCompressor.T_in_des, has value: ");
  modelica_string tmp355;
  static int tmp356 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp356)
  {
    tmp353 = GreaterEq(data->simulationInfo->realParameter[591] /* powerBlock.mainCompressor.T_in_des PARAM */,0.0);
    if(!tmp353)
    {
      tmp355 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[591] /* powerBlock.mainCompressor.T_in_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp354),tmp355);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",576,4,576,127,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.mainCompressor.T_in_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp356 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1475
type: ALGORITHM

  assert(powerBlock.mainCompressor.PR >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.mainCompressor.PR, has value: " + String(powerBlock.mainCompressor.PR, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1475};
  modelica_boolean tmp357;
  static const MMC_DEFSTRINGLIT(tmp358,83,"Variable violating min constraint: 0.0 <= powerBlock.mainCompressor.PR, has value: ");
  modelica_string tmp359;
  static int tmp360 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp360)
  {
    tmp357 = GreaterEq(data->simulationInfo->realParameter[589] /* powerBlock.mainCompressor.PR PARAM */,0.0);
    if(!tmp357)
    {
      tmp359 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[589] /* powerBlock.mainCompressor.PR PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp358),tmp359);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",574,4,574,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.mainCompressor.PR >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp360 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1476
type: ALGORITHM

  assert(powerBlock.eta_comp_main >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.eta_comp_main, has value: " + String(powerBlock.eta_comp_main, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1476};
  modelica_boolean tmp361;
  static const MMC_DEFSTRINGLIT(tmp362,79,"Variable violating min constraint: 0.0 <= powerBlock.eta_comp_main, has value: ");
  modelica_string tmp363;
  static int tmp364 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp364)
  {
    tmp361 = GreaterEq(data->simulationInfo->realParameter[425] /* powerBlock.eta_comp_main PARAM */,0.0);
    if(!tmp361)
    {
      tmp363 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[425] /* powerBlock.eta_comp_main PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp362),tmp363);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",824,7,824,101,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.eta_comp_main >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp364 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1477
type: ALGORITHM

  assert(powerBlock.mainCompressor.eta_design >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.mainCompressor.eta_design, has value: " + String(powerBlock.mainCompressor.eta_design, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1477};
  modelica_boolean tmp365;
  static const MMC_DEFSTRINGLIT(tmp366,91,"Variable violating min constraint: 0.0 <= powerBlock.mainCompressor.eta_design, has value: ");
  modelica_string tmp367;
  static int tmp368 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp368)
  {
    tmp365 = GreaterEq(data->simulationInfo->realParameter[594] /* powerBlock.mainCompressor.eta_design PARAM */,0.0);
    if(!tmp365)
    {
      tmp367 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[594] /* powerBlock.mainCompressor.eta_design PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp366),tmp367);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",572,4,572,95,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.mainCompressor.eta_design >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp368 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1478
type: ALGORITHM

  assert(T_cold_set >= 0.0, "Variable violating min constraint: 0.0 <= T_cold_set, has value: " + String(T_cold_set, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1478};
  modelica_boolean tmp369;
  static const MMC_DEFSTRINGLIT(tmp370,65,"Variable violating min constraint: 0.0 <= T_cold_set, has value: ");
  modelica_string tmp371;
  static int tmp372 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp372)
  {
    tmp369 = GreaterEq(data->simulationInfo->realParameter[5] /* T_cold_set PARAM */,0.0);
    if(!tmp369)
    {
      tmp371 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[5] /* T_cold_set PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp370),tmp371);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-morris-algorithm/simulation/sCO2PBRig.mo",32,3,32,47,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nT_cold_set >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp372 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1479
type: ALGORITHM

  assert(powerBlock.T_HTF_out >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.T_HTF_out, has value: " + String(powerBlock.T_HTF_out, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1479};
  modelica_boolean tmp373;
  static const MMC_DEFSTRINGLIT(tmp374,75,"Variable violating min constraint: 0.0 <= powerBlock.T_HTF_out, has value: ");
  modelica_string tmp375;
  static int tmp376 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp376)
  {
    tmp373 = GreaterEq(data->simulationInfo->realParameter[313] /* powerBlock.T_HTF_out PARAM */,0.0);
    if(!tmp373)
    {
      tmp375 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[313] /* powerBlock.T_HTF_out PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp374),tmp375);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",842,7,842,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.T_HTF_out >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp376 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1480
type: ALGORITHM

  assert(powerBlock.T_HTF_in_des >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.T_HTF_in_des, has value: " + String(powerBlock.T_HTF_in_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1480};
  modelica_boolean tmp377;
  static const MMC_DEFSTRINGLIT(tmp378,78,"Variable violating min constraint: 0.0 <= powerBlock.T_HTF_in_des, has value: ");
  modelica_string tmp379;
  static int tmp380 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp380)
  {
    tmp377 = GreaterEq(data->simulationInfo->realParameter[312] /* powerBlock.T_HTF_in_des PARAM */,0.0);
    if(!tmp377)
    {
      tmp379 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[312] /* powerBlock.T_HTF_in_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp378),tmp379);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",840,7,840,72,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.T_HTF_in_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp380 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1481
type: ALGORITHM

  assert(eta_motor >= 0.0, "Variable violating min constraint: 0.0 <= eta_motor, has value: " + String(eta_motor, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1481};
  modelica_boolean tmp381;
  static const MMC_DEFSTRINGLIT(tmp382,64,"Variable violating min constraint: 0.0 <= eta_motor, has value: ");
  modelica_string tmp383;
  static int tmp384 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp384)
  {
    tmp381 = GreaterEq(data->simulationInfo->realParameter[11] /* eta_motor PARAM */,0.0);
    if(!tmp381)
    {
      tmp383 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[11] /* eta_motor PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp382),tmp383);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-morris-algorithm/simulation/sCO2PBRig.mo",40,3,40,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neta_motor >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp384 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1482
type: ALGORITHM

  assert(powerBlock.eta_motor >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.eta_motor, has value: " + String(powerBlock.eta_motor, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1482};
  modelica_boolean tmp385;
  static const MMC_DEFSTRINGLIT(tmp386,75,"Variable violating min constraint: 0.0 <= powerBlock.eta_motor, has value: ");
  modelica_string tmp387;
  static int tmp388 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp388)
  {
    tmp385 = GreaterEq(data->simulationInfo->realParameter[428] /* powerBlock.eta_motor PARAM */,0.0);
    if(!tmp385)
    {
      tmp387 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[428] /* powerBlock.eta_motor PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp386),tmp387);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",830,7,830,78,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.eta_motor >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp388 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1483
type: ALGORITHM

  assert(powerBlock.eta_comp_re >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.eta_comp_re, has value: " + String(powerBlock.eta_comp_re, "g"));
*/
OMC_DISABLE_OPT
static void sCO2PBRig_eqFunction_1483(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1483};
  modelica_boolean tmp389;
  static const MMC_DEFSTRINGLIT(tmp390,77,"Variable violating min constraint: 0.0 <= powerBlock.eta_comp_re, has value: ");
  modelica_string tmp391;
  static int tmp392 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp392)
  {
    tmp389 = GreaterEq(data->simulationInfo->realParameter[426] /* powerBlock.eta_comp_re PARAM */,0.0);
    if(!tmp389)
    {
      tmp391 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[426] /* powerBlock.eta_comp_re PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp390),tmp391);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",826,7,826,100,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.eta_comp_re >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp392 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void sCO2PBRig_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  sCO2PBRig_eqFunction_1222(data, threadData);
  sCO2PBRig_eqFunction_1223(data, threadData);
  sCO2PBRig_eqFunction_1224(data, threadData);
  sCO2PBRig_eqFunction_1225(data, threadData);
  sCO2PBRig_eqFunction_1226(data, threadData);
  sCO2PBRig_eqFunction_1227(data, threadData);
  sCO2PBRig_eqFunction_1228(data, threadData);
  sCO2PBRig_eqFunction_1229(data, threadData);
  sCO2PBRig_eqFunction_1230(data, threadData);
  sCO2PBRig_eqFunction_1231(data, threadData);
  sCO2PBRig_eqFunction_1232(data, threadData);
  sCO2PBRig_eqFunction_1233(data, threadData);
  sCO2PBRig_eqFunction_1234(data, threadData);
  sCO2PBRig_eqFunction_1235(data, threadData);
  sCO2PBRig_eqFunction_1236(data, threadData);
  sCO2PBRig_eqFunction_1237(data, threadData);
  sCO2PBRig_eqFunction_1238(data, threadData);
  sCO2PBRig_eqFunction_1239(data, threadData);
  sCO2PBRig_eqFunction_1240(data, threadData);
  sCO2PBRig_eqFunction_1241(data, threadData);
  sCO2PBRig_eqFunction_1242(data, threadData);
  sCO2PBRig_eqFunction_1243(data, threadData);
  sCO2PBRig_eqFunction_1244(data, threadData);
  sCO2PBRig_eqFunction_1245(data, threadData);
  sCO2PBRig_eqFunction_1246(data, threadData);
  sCO2PBRig_eqFunction_1247(data, threadData);
  sCO2PBRig_eqFunction_1248(data, threadData);
  sCO2PBRig_eqFunction_1249(data, threadData);
  sCO2PBRig_eqFunction_1250(data, threadData);
  sCO2PBRig_eqFunction_1251(data, threadData);
  sCO2PBRig_eqFunction_1252(data, threadData);
  sCO2PBRig_eqFunction_1253(data, threadData);
  sCO2PBRig_eqFunction_1254(data, threadData);
  sCO2PBRig_eqFunction_1255(data, threadData);
  sCO2PBRig_eqFunction_1256(data, threadData);
  sCO2PBRig_eqFunction_1257(data, threadData);
  sCO2PBRig_eqFunction_1258(data, threadData);
  sCO2PBRig_eqFunction_1259(data, threadData);
  sCO2PBRig_eqFunction_1260(data, threadData);
  sCO2PBRig_eqFunction_1261(data, threadData);
  sCO2PBRig_eqFunction_1262(data, threadData);
  sCO2PBRig_eqFunction_1263(data, threadData);
  sCO2PBRig_eqFunction_1264(data, threadData);
  sCO2PBRig_eqFunction_1265(data, threadData);
  sCO2PBRig_eqFunction_1266(data, threadData);
  sCO2PBRig_eqFunction_22(data, threadData);
  sCO2PBRig_eqFunction_23(data, threadData);
  sCO2PBRig_eqFunction_921(data, threadData);
  sCO2PBRig_eqFunction_922(data, threadData);
  sCO2PBRig_eqFunction_925(data, threadData);
  sCO2PBRig_eqFunction_923(data, threadData);
  sCO2PBRig_eqFunction_924(data, threadData);
  sCO2PBRig_eqFunction_1274(data, threadData);
  sCO2PBRig_eqFunction_1275(data, threadData);
  sCO2PBRig_eqFunction_1276(data, threadData);
  sCO2PBRig_eqFunction_1277(data, threadData);
  sCO2PBRig_eqFunction_1278(data, threadData);
  sCO2PBRig_eqFunction_1279(data, threadData);
  sCO2PBRig_eqFunction_1280(data, threadData);
  sCO2PBRig_eqFunction_1281(data, threadData);
  sCO2PBRig_eqFunction_1282(data, threadData);
  sCO2PBRig_eqFunction_1283(data, threadData);
  sCO2PBRig_eqFunction_1284(data, threadData);
  sCO2PBRig_eqFunction_1285(data, threadData);
  sCO2PBRig_eqFunction_1286(data, threadData);
  sCO2PBRig_eqFunction_1287(data, threadData);
  sCO2PBRig_eqFunction_1288(data, threadData);
  sCO2PBRig_eqFunction_1289(data, threadData);
  sCO2PBRig_eqFunction_1290(data, threadData);
  sCO2PBRig_eqFunction_1291(data, threadData);
  sCO2PBRig_eqFunction_1292(data, threadData);
  sCO2PBRig_eqFunction_1293(data, threadData);
  sCO2PBRig_eqFunction_1294(data, threadData);
  sCO2PBRig_eqFunction_1295(data, threadData);
  sCO2PBRig_eqFunction_1296(data, threadData);
  sCO2PBRig_eqFunction_1297(data, threadData);
  sCO2PBRig_eqFunction_1298(data, threadData);
  sCO2PBRig_eqFunction_1299(data, threadData);
  sCO2PBRig_eqFunction_1300(data, threadData);
  sCO2PBRig_eqFunction_1301(data, threadData);
  sCO2PBRig_eqFunction_1302(data, threadData);
  sCO2PBRig_eqFunction_1317(data, threadData);
  sCO2PBRig_eqFunction_1318(data, threadData);
  sCO2PBRig_eqFunction_1319(data, threadData);
  sCO2PBRig_eqFunction_1321(data, threadData);
  sCO2PBRig_eqFunction_1322(data, threadData);
  sCO2PBRig_eqFunction_1324(data, threadData);
  sCO2PBRig_eqFunction_1325(data, threadData);
  sCO2PBRig_eqFunction_1328(data, threadData);
  sCO2PBRig_eqFunction_1329(data, threadData);
  sCO2PBRig_eqFunction_1330(data, threadData);
  sCO2PBRig_eqFunction_1331(data, threadData);
  sCO2PBRig_eqFunction_1332(data, threadData);
  sCO2PBRig_eqFunction_1333(data, threadData);
  sCO2PBRig_eqFunction_1334(data, threadData);
  sCO2PBRig_eqFunction_1335(data, threadData);
  sCO2PBRig_eqFunction_1338(data, threadData);
  sCO2PBRig_eqFunction_1339(data, threadData);
  sCO2PBRig_eqFunction_1340(data, threadData);
  sCO2PBRig_eqFunction_1341(data, threadData);
  sCO2PBRig_eqFunction_1343(data, threadData);
  sCO2PBRig_eqFunction_1344(data, threadData);
  sCO2PBRig_eqFunction_1345(data, threadData);
  sCO2PBRig_eqFunction_1347(data, threadData);
  sCO2PBRig_eqFunction_1348(data, threadData);
  sCO2PBRig_eqFunction_1349(data, threadData);
  sCO2PBRig_eqFunction_1350(data, threadData);
  sCO2PBRig_eqFunction_1351(data, threadData);
  sCO2PBRig_eqFunction_1352(data, threadData);
  sCO2PBRig_eqFunction_1353(data, threadData);
  sCO2PBRig_eqFunction_1355(data, threadData);
  sCO2PBRig_eqFunction_1356(data, threadData);
  sCO2PBRig_eqFunction_1359(data, threadData);
  sCO2PBRig_eqFunction_1361(data, threadData);
  sCO2PBRig_eqFunction_1362(data, threadData);
  sCO2PBRig_eqFunction_1363(data, threadData);
  sCO2PBRig_eqFunction_920(data, threadData);
  sCO2PBRig_eqFunction_919(data, threadData);
  sCO2PBRig_eqFunction_918(data, threadData);
  sCO2PBRig_eqFunction_917(data, threadData);
  sCO2PBRig_eqFunction_916(data, threadData);
  sCO2PBRig_eqFunction_24(data, threadData);
  sCO2PBRig_eqFunction_915(data, threadData);
  sCO2PBRig_eqFunction_25(data, threadData);
  sCO2PBRig_eqFunction_26(data, threadData);
  sCO2PBRig_eqFunction_21(data, threadData);
  sCO2PBRig_eqFunction_20(data, threadData);
  sCO2PBRig_eqFunction_19(data, threadData);
  sCO2PBRig_eqFunction_18(data, threadData);
  sCO2PBRig_eqFunction_17(data, threadData);
  sCO2PBRig_eqFunction_16(data, threadData);
  sCO2PBRig_eqFunction_15(data, threadData);
  sCO2PBRig_eqFunction_14(data, threadData);
  sCO2PBRig_eqFunction_13(data, threadData);
  sCO2PBRig_eqFunction_12(data, threadData);
  sCO2PBRig_eqFunction_11(data, threadData);
  sCO2PBRig_eqFunction_10(data, threadData);
  sCO2PBRig_eqFunction_9(data, threadData);
  sCO2PBRig_eqFunction_8(data, threadData);
  sCO2PBRig_eqFunction_7(data, threadData);
  sCO2PBRig_eqFunction_6(data, threadData);
  sCO2PBRig_eqFunction_5(data, threadData);
  sCO2PBRig_eqFunction_4(data, threadData);
  sCO2PBRig_eqFunction_3(data, threadData);
  sCO2PBRig_eqFunction_2(data, threadData);
  sCO2PBRig_eqFunction_1397(data, threadData);
  sCO2PBRig_eqFunction_1398(data, threadData);
  sCO2PBRig_eqFunction_1399(data, threadData);
  sCO2PBRig_eqFunction_1400(data, threadData);
  sCO2PBRig_eqFunction_1401(data, threadData);
  sCO2PBRig_eqFunction_1402(data, threadData);
  sCO2PBRig_eqFunction_1403(data, threadData);
  sCO2PBRig_eqFunction_1404(data, threadData);
  sCO2PBRig_eqFunction_1405(data, threadData);
  sCO2PBRig_eqFunction_1406(data, threadData);
  sCO2PBRig_eqFunction_1407(data, threadData);
  sCO2PBRig_eqFunction_1408(data, threadData);
  sCO2PBRig_eqFunction_1409(data, threadData);
  sCO2PBRig_eqFunction_1410(data, threadData);
  sCO2PBRig_eqFunction_1411(data, threadData);
  sCO2PBRig_eqFunction_1412(data, threadData);
  sCO2PBRig_eqFunction_1413(data, threadData);
  sCO2PBRig_eqFunction_1414(data, threadData);
  sCO2PBRig_eqFunction_1415(data, threadData);
  sCO2PBRig_eqFunction_1416(data, threadData);
  sCO2PBRig_eqFunction_1417(data, threadData);
  sCO2PBRig_eqFunction_1418(data, threadData);
  sCO2PBRig_eqFunction_1419(data, threadData);
  sCO2PBRig_eqFunction_1420(data, threadData);
  sCO2PBRig_eqFunction_1421(data, threadData);
  sCO2PBRig_eqFunction_1422(data, threadData);
  sCO2PBRig_eqFunction_1423(data, threadData);
  sCO2PBRig_eqFunction_1424(data, threadData);
  sCO2PBRig_eqFunction_1425(data, threadData);
  sCO2PBRig_eqFunction_1426(data, threadData);
  sCO2PBRig_eqFunction_1427(data, threadData);
  sCO2PBRig_eqFunction_1428(data, threadData);
  sCO2PBRig_eqFunction_1429(data, threadData);
  sCO2PBRig_eqFunction_1430(data, threadData);
  sCO2PBRig_eqFunction_1431(data, threadData);
  sCO2PBRig_eqFunction_1432(data, threadData);
  sCO2PBRig_eqFunction_1433(data, threadData);
  sCO2PBRig_eqFunction_1434(data, threadData);
  sCO2PBRig_eqFunction_1435(data, threadData);
  sCO2PBRig_eqFunction_1436(data, threadData);
  sCO2PBRig_eqFunction_1437(data, threadData);
  sCO2PBRig_eqFunction_1438(data, threadData);
  sCO2PBRig_eqFunction_1439(data, threadData);
  sCO2PBRig_eqFunction_1440(data, threadData);
  sCO2PBRig_eqFunction_1441(data, threadData);
  sCO2PBRig_eqFunction_1442(data, threadData);
  sCO2PBRig_eqFunction_1443(data, threadData);
  sCO2PBRig_eqFunction_1444(data, threadData);
  sCO2PBRig_eqFunction_1445(data, threadData);
  sCO2PBRig_eqFunction_1446(data, threadData);
  sCO2PBRig_eqFunction_1447(data, threadData);
  sCO2PBRig_eqFunction_1448(data, threadData);
  sCO2PBRig_eqFunction_1449(data, threadData);
  sCO2PBRig_eqFunction_1450(data, threadData);
  sCO2PBRig_eqFunction_1451(data, threadData);
  sCO2PBRig_eqFunction_1452(data, threadData);
  sCO2PBRig_eqFunction_1453(data, threadData);
  sCO2PBRig_eqFunction_1454(data, threadData);
  sCO2PBRig_eqFunction_1455(data, threadData);
  sCO2PBRig_eqFunction_1456(data, threadData);
  sCO2PBRig_eqFunction_1457(data, threadData);
  sCO2PBRig_eqFunction_1458(data, threadData);
  sCO2PBRig_eqFunction_1459(data, threadData);
  sCO2PBRig_eqFunction_1460(data, threadData);
  sCO2PBRig_eqFunction_1461(data, threadData);
  sCO2PBRig_eqFunction_1462(data, threadData);
  sCO2PBRig_eqFunction_1463(data, threadData);
  sCO2PBRig_eqFunction_1464(data, threadData);
  sCO2PBRig_eqFunction_1465(data, threadData);
  sCO2PBRig_eqFunction_1466(data, threadData);
  sCO2PBRig_eqFunction_1467(data, threadData);
  sCO2PBRig_eqFunction_1468(data, threadData);
  sCO2PBRig_eqFunction_1469(data, threadData);
  sCO2PBRig_eqFunction_1470(data, threadData);
  sCO2PBRig_eqFunction_1471(data, threadData);
  sCO2PBRig_eqFunction_1472(data, threadData);
  sCO2PBRig_eqFunction_1473(data, threadData);
  sCO2PBRig_eqFunction_1474(data, threadData);
  sCO2PBRig_eqFunction_1475(data, threadData);
  sCO2PBRig_eqFunction_1476(data, threadData);
  sCO2PBRig_eqFunction_1477(data, threadData);
  sCO2PBRig_eqFunction_1478(data, threadData);
  sCO2PBRig_eqFunction_1479(data, threadData);
  sCO2PBRig_eqFunction_1480(data, threadData);
  sCO2PBRig_eqFunction_1481(data, threadData);
  sCO2PBRig_eqFunction_1482(data, threadData);
  sCO2PBRig_eqFunction_1483(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int sCO2PBRig_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[1] /* N_LTR_parameter PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* N_exch_parameter PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* powerBlock.HTR.N_q PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* powerBlock.LTR.N_q PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* powerBlock.N_HTR PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* powerBlock.N_LTR PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  data->simulationInfo->integerParameter[7] /* powerBlock.N_exch PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[7].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] /* powerBlock.cooler.N_cool PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] /* powerBlock.exchanger.N_exch PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->simulationInfo->integerParameter[11] /* sink.nPorts PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[11].time_unvarying = 1;
  data->simulationInfo->integerParameter[13] /* source.nPorts PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[13].time_unvarying = 1;
  data->simulationInfo->realParameter[1] /* P_net PARAM */ = 100000000.0;
  data->modelData->realParameterData[1].time_unvarying = 1;
  data->simulationInfo->realParameter[172] /* powerBlock.LTR.P_nom_des PARAM */ = 100000000.0;
  data->modelData->realParameterData[172].time_unvarying = 1;
  data->simulationInfo->realParameter[310] /* powerBlock.P_nom PARAM */ = 100000000.0;
  data->modelData->realParameterData[310].time_unvarying = 1;
  data->simulationInfo->realParameter[323] /* powerBlock.cooler.P_nom_des PARAM */ = 100000000.0;
  data->modelData->realParameterData[323].time_unvarying = 1;
  data->simulationInfo->realParameter[433] /* powerBlock.exchanger.P_nom_des PARAM */ = 100000000.0;
  data->modelData->realParameterData[433].time_unvarying = 1;
  data->simulationInfo->realParameter[590] /* powerBlock.mainCompressor.P_nom_des PARAM */ = 100000000.0;
  data->modelData->realParameterData[590].time_unvarying = 1;
  data->simulationInfo->realParameter[622] /* powerBlock.reCompressor.P_nom_des PARAM */ = 100000000.0;
  data->modelData->realParameterData[622].time_unvarying = 1;
  data->simulationInfo->booleanParameter[0] /* liftSimple.cont_m_flow PARAM */ = 1;
  data->modelData->booleanParameterData[0].time_unvarying = 1;
  data->simulationInfo->booleanParameter[3] /* powerBlock.test_mode PARAM */ = 1;
  data->modelData->booleanParameterData[3].time_unvarying = 1;
  data->simulationInfo->booleanParameter[4] /* sink.medium.preferredMediumStates PARAM */ = 0;
  data->modelData->booleanParameterData[4].time_unvarying = 1;
  data->simulationInfo->booleanParameter[5] /* sink.medium.standardOrderComponents PARAM */ = 1;
  data->modelData->booleanParameterData[5].time_unvarying = 1;
  data->simulationInfo->booleanParameter[6] /* sink.use_T PARAM */ = 1;
  data->modelData->booleanParameterData[6].time_unvarying = 1;
  data->simulationInfo->booleanParameter[7] /* sink.use_p PARAM */ = 1;
  data->modelData->booleanParameterData[7].time_unvarying = 1;
  data->simulationInfo->booleanParameter[8] /* source.medium.preferredMediumStates PARAM */ = 0;
  data->modelData->booleanParameterData[8].time_unvarying = 1;
  data->simulationInfo->booleanParameter[9] /* source.medium.standardOrderComponents PARAM */ = 1;
  data->modelData->booleanParameterData[9].time_unvarying = 1;
  data->simulationInfo->booleanParameter[10] /* source.use_T PARAM */ = 1;
  data->modelData->booleanParameterData[10].time_unvarying = 1;
  data->simulationInfo->booleanParameter[11] /* source.use_p PARAM */ = 0;
  data->modelData->booleanParameterData[11].time_unvarying = 1;
  data->simulationInfo->integerParameter[10] /* sink.flowDirection PARAM */ = 3;
  data->modelData->integerParameterData[10].time_unvarying = 1;
  data->simulationInfo->integerParameter[12] /* source.flowDirection PARAM */ = 3;
  data->modelData->integerParameterData[12].time_unvarying = 1;
  sCO2PBRig_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

