/* update bound parameters and variable attributes (start, nominal, min, max) */
#include "sCO2SurrogatePBRig_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1279
type: SIMPLE_ASSIGN
_omcQuot_245354415254._sCO2PBDesignPointCalculator._powerBlock._reCompressor._eta_comp = sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_design
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1279(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1279};
  data->modelData->realVarsData[289].attribute /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_comp variable */.start = data->simulationInfo->realParameter[722] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_design PARAM */;
    data->localData[0]->realVars[289] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_comp variable */ = data->modelData->realVarsData[289].attribute /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_comp variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[289].info /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_comp */.name, (modelica_real) data->localData[0]->realVars[289] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_comp variable */);
  TRACE_POP
}

/*
equation index: 1280
type: SIMPLE_ASSIGN
_omcQuot_245354415254._sCO2PBDesignPointCalculator._powerBlock._mainCompressor._eta_comp = sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_design
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1280(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1280};
  data->modelData->realVarsData[279].attribute /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_comp variable */.start = data->simulationInfo->realParameter[689] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_design PARAM */;
    data->localData[0]->realVars[279] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_comp variable */ = data->modelData->realVarsData[279].attribute /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_comp variable */.start;
    infoStreamPrint(LOG_INIT, 0, "updated start value: %s(start=%g)", data->modelData->realVarsData[279].info /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_comp */.name, (modelica_real) data->localData[0]->realVars[279] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_comp variable */);
  TRACE_POP
}
OMC_DISABLE_OPT
int sCO2SurrogatePBRig_updateBoundVariableAttributes(DATA *data, threadData_t *threadData)
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
  sCO2SurrogatePBRig_eqFunction_1279(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1280(data, threadData);
  if (ACTIVE_STREAM(LOG_INIT)) messageClose(LOG_INIT);
  
  TRACE_POP
  return 0;
}

void sCO2SurrogatePBRig_updateBoundParameters_0(DATA *data, threadData_t *threadData);

/*
equation index: 1281
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._T_amb_input = T_amb_input
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1281(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1281};
  data->simulationInfo->realParameter[98] /* sCO2PBDesignPointCalculator.T_amb_input PARAM */ = data->simulationInfo->realParameter[5] /* T_amb_input PARAM */;
  TRACE_POP
}

/*
equation index: 1282
type: SIMPLE_ASSIGN
_omcQuot_246373653237 = exp(0.3537 * (-273.15 + sCO2PBDesignPointCalculator.T_amb_input))
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1282(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1282};
  data->localData[0]->realVars[32] /* $cse27 variable */ = exp((0.3537) * (-273.15 + data->simulationInfo->realParameter[98] /* sCO2PBDesignPointCalculator.T_amb_input PARAM */));
  TRACE_POP
}

/*
equation index: 1283
type: SIMPLE_ASSIGN
tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1283(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1283};
  data->simulationInfo->extObjs[48] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1284
type: SIMPLE_ASSIGN
tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1284(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1284};
  data->simulationInfo->extObjs[46] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1285
type: SIMPLE_ASSIGN
tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1285(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1285};
  data->simulationInfo->extObjs[45] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1286
type: SIMPLE_ASSIGN
tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1286(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1286};
  data->simulationInfo->extObjs[47] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1287
type: SIMPLE_ASSIGN
powerBlock._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1287(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1287};
  data->simulationInfo->extObjs[4] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1288
type: SIMPLE_ASSIGN
powerBlock._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1288(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1288};
  data->simulationInfo->extObjs[2] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1289
type: SIMPLE_ASSIGN
powerBlock._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1289(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1289};
  data->simulationInfo->extObjs[1] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1290
type: SIMPLE_ASSIGN
powerBlock._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1290(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1290};
  data->simulationInfo->extObjs[3] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1291
type: SIMPLE_ASSIGN
powerBlock._saved_model_dir = saved_model_dir
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1291(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1291};
  data->simulationInfo->stringParameter[0] /* powerBlock.saved_model_dir PARAM */ = data->simulationInfo->stringParameter[1] /* saved_model_dir PARAM */;
  TRACE_POP
}

/*
equation index: 1292
type: SIMPLE_ASSIGN
powerBlock._session = SolarTherm.Utilities.SurrogateModelsMultiOutput.STNeuralNetwork.constructor(powerBlock.saved_model_dir)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1292(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1292};
  data->simulationInfo->extObjs[0] = omc_SolarTherm_Utilities_SurrogateModelsMultiOutput_STNeuralNetwork_constructor(threadData, data->simulationInfo->stringParameter[0] /* powerBlock.saved_model_dir PARAM */);
  TRACE_POP
}

/*
equation index: 1293
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1293(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1293};
  data->simulationInfo->extObjs[44] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1294
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1294(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1294};
  data->simulationInfo->extObjs[42] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1295
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1295(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1295};
  data->simulationInfo->extObjs[41] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1296
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1296(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1296};
  data->simulationInfo->extObjs[43] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1297
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1297(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1297};
  data->simulationInfo->extObjs[36] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1298
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1298(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1298};
  data->simulationInfo->extObjs[34] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1299
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1299(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1299};
  data->simulationInfo->extObjs[33] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1300
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1300(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1300};
  data->simulationInfo->extObjs[35] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1301
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1301(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1301};
  data->simulationInfo->extObjs[8] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1302
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1302(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1302};
  data->simulationInfo->extObjs[6] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1303
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1303(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1303};
  data->simulationInfo->extObjs[5] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1304
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1304(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1304};
  data->simulationInfo->extObjs[7] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1305
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1305(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1305};
  data->simulationInfo->extObjs[24] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1306
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1306(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1306};
  data->simulationInfo->extObjs[22] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1307
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1307(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1307};
  data->simulationInfo->extObjs[21] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1308
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1308(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1308};
  data->simulationInfo->extObjs[23] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1309
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1309(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1309};
  data->simulationInfo->extObjs[16] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1310
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1310(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1310};
  data->simulationInfo->extObjs[14] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1311
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1311(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1311};
  data->simulationInfo->extObjs[13] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1312
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1312(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1312};
  data->simulationInfo->extObjs[15] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1313
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1313(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1313};
  data->simulationInfo->extObjs[40] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1314
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1314(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1314};
  data->simulationInfo->extObjs[38] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1315
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1315(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1315};
  data->simulationInfo->extObjs[37] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1316
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1316(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1316};
  data->simulationInfo->extObjs[39] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1317
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1317(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1317};
  data->simulationInfo->extObjs[20] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1318
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1318(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1318};
  data->simulationInfo->extObjs[18] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1319
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1319(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1319};
  data->simulationInfo->extObjs[17] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1320
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1320(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1320};
  data->simulationInfo->extObjs[19] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1321
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1321(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1321};
  data->simulationInfo->extObjs[32] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1322
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1322(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1322};
  data->simulationInfo->extObjs[30] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1323
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1323(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1323};
  data->simulationInfo->extObjs[29] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1324
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1324(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1324};
  data->simulationInfo->extObjs[31] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1325
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1325(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1325};
  data->simulationInfo->extObjs[12] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1326
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1326(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1326};
  data->simulationInfo->extObjs[10] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1327
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1327(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1327};
  data->simulationInfo->extObjs[9] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1328
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1328(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1328};
  data->simulationInfo->extObjs[11] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1329
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mixer._tableIDh_p_s = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_S.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1329(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1329};
  data->simulationInfo->extObjs[28] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT38, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1330
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mixer._tableIDd_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Density", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1330(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1330};
  data->simulationInfo->extObjs[26] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT31, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1331
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mixer._tableIDT_p_h = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Temperature", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_H.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1331(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1331};
  data->simulationInfo->extObjs[25] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT39, _OMC_LIT35, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1332
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mixer._tableIDh_p_T = Modelica.Blocks.Types.ExternalCombiTable2D.constructor("Enthalpy", "/home/philgun/.local/lib/omlibrary/SolarTherm/Data/CO2/Props_from_P_T.txt", {}, Modelica.Blocks.Types.Smoothness.LinearSegments)
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1332(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1332};
  data->simulationInfo->extObjs[27] = omc_Modelica_Blocks_Types_ExternalCombiTable2D_constructor(threadData, _OMC_LIT37, _OMC_LIT40, _OMC_LIT36, 1);
  TRACE_POP
}

/*
equation index: 1333
type: SIMPLE_ASSIGN
source._T = T_HTF_in
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1333(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1333};
  data->simulationInfo->realParameter[801] /* source.T PARAM */ = data->simulationInfo->realParameter[3] /* T_HTF_in PARAM */;
  TRACE_POP
}
extern void sCO2SurrogatePBRig_eqFunction_44(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_45(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_962(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_963(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_966(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_964(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_965(DATA *data, threadData_t *threadData);


/*
equation index: 1341
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._T_HTF_in = T_in_ref_blk
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1341(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1341};
  data->simulationInfo->realParameter[96] /* sCO2PBDesignPointCalculator.T_HTF_in PARAM */ = data->simulationInfo->realParameter[6] /* T_in_ref_blk PARAM */;
  TRACE_POP
}

/*
equation index: 1342
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._source._T = sCO2PBDesignPointCalculator.T_HTF_in
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1342(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1342};
  data->simulationInfo->realParameter[779] /* sCO2PBDesignPointCalculator.source.T PARAM */ = data->simulationInfo->realParameter[96] /* sCO2PBDesignPointCalculator.T_HTF_in PARAM */;
  TRACE_POP
}
extern void sCO2SurrogatePBRig_eqFunction_39(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_40(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_957(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_958(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_961(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_959(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_960(DATA *data, threadData_t *threadData);


/*
equation index: 1350
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._medium._state._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1350(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1350};
  data->simulationInfo->realParameter[775] /* sCO2PBDesignPointCalculator.sink.medium.state.p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1351
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF[1]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1351(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1351};
  data->simulationInfo->realParameter[633] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[1].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1352
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF[2]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1352(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1352};
  data->simulationInfo->realParameter[634] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[2].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1353
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF[3]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1353(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1353};
  data->simulationInfo->realParameter[635] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[3].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1354
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF[4]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1354(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1354};
  data->simulationInfo->realParameter[636] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[4].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1355
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF[5]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1355(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1355};
  data->simulationInfo->realParameter[637] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[5].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1356
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF[6]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1356(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1356};
  data->simulationInfo->realParameter[638] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[6].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1357
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF[7]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1357(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1357};
  data->simulationInfo->realParameter[639] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[7].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1358
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF[8]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1358(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1358};
  data->simulationInfo->realParameter[640] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[8].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1359
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF[9]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1359(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1359};
  data->simulationInfo->realParameter[641] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[9].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1360
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF[10]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1360(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1360};
  data->simulationInfo->realParameter[642] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[10].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1361
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF[11]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1361(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1361};
  data->simulationInfo->realParameter[643] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[11].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1362
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF[12]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1362(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1362};
  data->simulationInfo->realParameter[644] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[12].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1363
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF[13]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1363(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1363};
  data->simulationInfo->realParameter[645] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[13].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1364
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF[14]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1364(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1364};
  data->simulationInfo->realParameter[646] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[14].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1365
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF[15]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1365(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1365};
  data->simulationInfo->realParameter[647] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[15].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1366
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._liftSimple._fluid_b._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1366(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1366};
  data->simulationInfo->realParameter[110] /* sCO2PBDesignPointCalculator.liftSimple.fluid_b.p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1367
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._fluid_a._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1367(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1367};
  data->simulationInfo->realParameter[679] /* sCO2PBDesignPointCalculator.powerBlock.fluid_a.p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1368
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._HTF_port_a._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1368(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1368};
  data->simulationInfo->realParameter[524] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_a.p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1369
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._HTF_port_b._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1369(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1369};
  data->simulationInfo->realParameter[525] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_b.p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1370
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._fluid_b._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1370(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1370};
  data->simulationInfo->realParameter[680] /* sCO2PBDesignPointCalculator.powerBlock.fluid_b.p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1371
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._ports[1]._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1371(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1371};
  data->simulationInfo->realParameter[777] /* sCO2PBDesignPointCalculator.sink.ports[1].p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1372
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._medium._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1372(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1372};
  data->simulationInfo->realParameter[774] /* sCO2PBDesignPointCalculator.sink.medium.p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1373
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._sink._state._p = sCO2PBDesignPointCalculator.sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1373(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1373};
  data->simulationInfo->realParameter[778] /* sCO2PBDesignPointCalculator.sink.state.p PARAM */ = data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1374
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._splitter._gamma = sCO2PBDesignPointCalculator.powerBlock.gamma
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1374(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1374};
  data->simulationInfo->realParameter[736] /* sCO2PBDesignPointCalculator.powerBlock.splitter.gamma PARAM */ = data->simulationInfo->realParameter[681] /* sCO2PBDesignPointCalculator.powerBlock.gamma PARAM */;
  TRACE_POP
}

/*
equation index: 1375
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._splitter._gamma_var = sCO2PBDesignPointCalculator.powerBlock.splitter.gamma
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1375(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1375};
  data->simulationInfo->realParameter[737] /* sCO2PBDesignPointCalculator.powerBlock.splitter.gamma_var PARAM */ = data->simulationInfo->realParameter[736] /* sCO2PBDesignPointCalculator.powerBlock.splitter.gamma PARAM */;
  TRACE_POP
}

/*
equation index: 1376
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._T_amb = sCO2PBDesignPointCalculator.T_amb_input
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1376(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1376};
  data->simulationInfo->realParameter[434] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb PARAM */ = data->simulationInfo->realParameter[98] /* sCO2PBDesignPointCalculator.T_amb_input PARAM */;
  TRACE_POP
}

/*
equation index: 1377
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._T_amb = sCO2PBDesignPointCalculator.T_amb_input
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1377(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1377};
  data->simulationInfo->realParameter[408] /* sCO2PBDesignPointCalculator.powerBlock.T_amb PARAM */ = data->simulationInfo->realParameter[98] /* sCO2PBDesignPointCalculator.T_amb_input PARAM */;
  TRACE_POP
}

/*
equation index: 1378
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._T_amb_in._y = sCO2PBDesignPointCalculator.T_amb_input
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1378(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1378};
  data->simulationInfo->realParameter[97] /* sCO2PBDesignPointCalculator.T_amb_in.y PARAM */ = data->simulationInfo->realParameter[98] /* sCO2PBDesignPointCalculator.T_amb_input PARAM */;
  TRACE_POP
}

/*
equation index: 1379
type: SIMPLE_ASSIGN
sink._medium._state._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1379(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1379};
  data->simulationInfo->realParameter[797] /* sink.medium.state.p PARAM */ = data->simulationInfo->realParameter[798] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1380
type: SIMPLE_ASSIGN
liftSimple._fluid_b._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1380(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1380};
  data->simulationInfo->realParameter[34] /* liftSimple.fluid_b.p PARAM */ = data->simulationInfo->realParameter[798] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1381
type: SIMPLE_ASSIGN
powerBlock._fluid_a._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1381(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1381};
  data->simulationInfo->realParameter[72] /* powerBlock.fluid_a.p PARAM */ = data->simulationInfo->realParameter[798] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1382
type: SIMPLE_ASSIGN
powerBlock._fluid_b._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1382(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1382};
  data->simulationInfo->realParameter[73] /* powerBlock.fluid_b.p PARAM */ = data->simulationInfo->realParameter[798] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1383
type: SIMPLE_ASSIGN
sink._ports[1]._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1383(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1383};
  data->simulationInfo->realParameter[799] /* sink.ports[1].p PARAM */ = data->simulationInfo->realParameter[798] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1384
type: SIMPLE_ASSIGN
sink._medium._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1384(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1384};
  data->simulationInfo->realParameter[796] /* sink.medium.p PARAM */ = data->simulationInfo->realParameter[798] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1385
type: SIMPLE_ASSIGN
sink._state._p = sink.p
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1385(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1385};
  data->simulationInfo->realParameter[800] /* sink.state.p PARAM */ = data->simulationInfo->realParameter[798] /* sink.p PARAM */;
  TRACE_POP
}

/*
equation index: 1386
type: SIMPLE_ASSIGN
powerBlock._T_in_ref_blk = T_in_ref_blk
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1386(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1386};
  data->simulationInfo->realParameter[50] /* powerBlock.T_in_ref_blk PARAM */ = data->simulationInfo->realParameter[6] /* T_in_ref_blk PARAM */;
  TRACE_POP
}

/*
equation index: 1387
type: SIMPLE_ASSIGN
powerBlock._raw_input[2] = powerBlock.T_in_ref_blk
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1387(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1387};
  data->simulationInfo->realParameter[82] /* powerBlock.raw_input[2] PARAM */ = data->simulationInfo->realParameter[50] /* powerBlock.T_in_ref_blk PARAM */;
  TRACE_POP
}

/*
equation index: 1388
type: SIMPLE_ASSIGN
powerBlock._p_high = p_high
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1388(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1388};
  data->simulationInfo->realParameter[80] /* powerBlock.p_high PARAM */ = data->simulationInfo->realParameter[42] /* p_high PARAM */;
  TRACE_POP
}

/*
equation index: 1389
type: SIMPLE_ASSIGN
powerBlock._raw_input[3] = powerBlock.p_high
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1389(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1389};
  data->simulationInfo->realParameter[83] /* powerBlock.raw_input[3] PARAM */ = data->simulationInfo->realParameter[80] /* powerBlock.p_high PARAM */;
  TRACE_POP
}

/*
equation index: 1390
type: SIMPLE_ASSIGN
powerBlock._PR = PR
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1390(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1390};
  data->simulationInfo->realParameter[46] /* powerBlock.PR PARAM */ = data->simulationInfo->realParameter[0] /* PR PARAM */;
  TRACE_POP
}

/*
equation index: 1391
type: SIMPLE_ASSIGN
powerBlock._raw_input[4] = powerBlock.PR
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1391(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1391};
  data->simulationInfo->realParameter[84] /* powerBlock.raw_input[4] PARAM */ = data->simulationInfo->realParameter[46] /* powerBlock.PR PARAM */;
  TRACE_POP
}

/*
equation index: 1392
type: SIMPLE_ASSIGN
powerBlock._pinch_PHX = pinch_PHX
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1392(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1392};
  data->simulationInfo->realParameter[81] /* powerBlock.pinch_PHX PARAM */ = data->simulationInfo->realParameter[44] /* pinch_PHX PARAM */;
  TRACE_POP
}

/*
equation index: 1393
type: SIMPLE_ASSIGN
powerBlock._raw_input[5] = powerBlock.pinch_PHX
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1393(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1393};
  data->simulationInfo->realParameter[85] /* powerBlock.raw_input[5] PARAM */ = data->simulationInfo->realParameter[81] /* powerBlock.pinch_PHX PARAM */;
  TRACE_POP
}

/*
equation index: 1394
type: SIMPLE_ASSIGN
powerBlock._dTemp_HTF_PHX = dTemp_HTF_PHX
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1394(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1394};
  data->simulationInfo->realParameter[69] /* powerBlock.dTemp_HTF_PHX PARAM */ = data->simulationInfo->realParameter[27] /* dTemp_HTF_PHX PARAM */;
  TRACE_POP
}

/*
equation index: 1395
type: SIMPLE_ASSIGN
powerBlock._raw_input[6] = powerBlock.dTemp_HTF_PHX
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1395(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1395};
  data->simulationInfo->realParameter[86] /* powerBlock.raw_input[6] PARAM */ = data->simulationInfo->realParameter[69] /* powerBlock.dTemp_HTF_PHX PARAM */;
  TRACE_POP
}

/*
equation index: 1396
type: SIMPLE_ASSIGN
powerBlock._raw_input[9] = T_amb_input
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1396(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1396};
  data->simulationInfo->realParameter[87] /* powerBlock.raw_input[9] PARAM */ = data->simulationInfo->realParameter[5] /* T_amb_input PARAM */;
  TRACE_POP
}

/*
equation index: 1397
type: SIMPLE_ASSIGN
powerBlock._T_amb = T_amb_input
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1397(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1397};
  data->simulationInfo->realParameter[49] /* powerBlock.T_amb PARAM */ = data->simulationInfo->realParameter[5] /* T_amb_input PARAM */;
  TRACE_POP
}

/*
equation index: 1398
type: SIMPLE_ASSIGN
T_amb_in._y = T_amb_input
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1398(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1398};
  data->simulationInfo->realParameter[4] /* T_amb_in.y PARAM */ = data->simulationInfo->realParameter[5] /* T_amb_input PARAM */;
  TRACE_POP
}

/*
equation index: 1413
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._pinch_recuperator = pinch_recuperator
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1413(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1413};
  data->simulationInfo->realParameter[121] /* sCO2PBDesignPointCalculator.pinch_recuperator PARAM */ = data->simulationInfo->realParameter[45] /* pinch_recuperator PARAM */;
  TRACE_POP
}

/*
equation index: 1414
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._pinch_recuperator = sCO2PBDesignPointCalculator.pinch_recuperator
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1414(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1414};
  data->simulationInfo->realParameter[707] /* sCO2PBDesignPointCalculator.powerBlock.pinch_recuperator PARAM */ = data->simulationInfo->realParameter[121] /* sCO2PBDesignPointCalculator.pinch_recuperator PARAM */;
  TRACE_POP
}

/*
equation index: 1415
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._pinchRecuperator = sCO2PBDesignPointCalculator.powerBlock.pinch_recuperator
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1415(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1415};
  data->simulationInfo->realParameter[339] /* sCO2PBDesignPointCalculator.powerBlock.LTR.pinchRecuperator PARAM */ = data->simulationInfo->realParameter[707] /* sCO2PBDesignPointCalculator.powerBlock.pinch_recuperator PARAM */;
  TRACE_POP
}

/*
equation index: 1416
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._ratio_m_des = 1.0 - sCO2PBDesignPointCalculator.powerBlock.gamma
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1416(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1416};
  data->simulationInfo->realParameter[340] /* sCO2PBDesignPointCalculator.powerBlock.LTR.ratio_m_des PARAM */ = 1.0 - data->simulationInfo->realParameter[681] /* sCO2PBDesignPointCalculator.powerBlock.gamma PARAM */;
  TRACE_POP
}

/*
equation index: 1418
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._p_high = p_high
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1418(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1418};
  data->simulationInfo->realParameter[118] /* sCO2PBDesignPointCalculator.p_high PARAM */ = data->simulationInfo->realParameter[42] /* p_high PARAM */;
  TRACE_POP
}

/*
equation index: 1419
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._p_high = sCO2PBDesignPointCalculator.p_high
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1419(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1419};
  data->simulationInfo->realParameter[704] /* sCO2PBDesignPointCalculator.powerBlock.p_high PARAM */ = data->simulationInfo->realParameter[118] /* sCO2PBDesignPointCalculator.p_high PARAM */;
  TRACE_POP
}

/*
equation index: 1420
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._p_high_des = sCO2PBDesignPointCalculator.powerBlock.p_high
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1420(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1420};
  data->simulationInfo->realParameter[726] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_high_des PARAM */ = data->simulationInfo->realParameter[704] /* sCO2PBDesignPointCalculator.powerBlock.p_high PARAM */;
  TRACE_POP
}

/*
equation index: 1422
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._N_shaft = sCO2PBDesignPointCalculator.powerBlock.choiceN[4]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1422(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1422};
  data->simulationInfo->realParameter[401] /* sCO2PBDesignPointCalculator.powerBlock.N_shaft PARAM */ = data->simulationInfo->realParameter[414] /* sCO2PBDesignPointCalculator.powerBlock.choiceN[4] PARAM */;
  TRACE_POP
}

/*
equation index: 1423
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._N_design = sCO2PBDesignPointCalculator.powerBlock.N_shaft
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1423(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1423};
  data->simulationInfo->realParameter[716] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.N_design PARAM */ = data->simulationInfo->realParameter[401] /* sCO2PBDesignPointCalculator.powerBlock.N_shaft PARAM */;
  TRACE_POP
}

/*
equation index: 1424
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._T_in_ref_blk = T_in_ref_blk
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1424(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1424};
  data->simulationInfo->realParameter[100] /* sCO2PBDesignPointCalculator.T_in_ref_blk PARAM */ = data->simulationInfo->realParameter[6] /* T_in_ref_blk PARAM */;
  TRACE_POP
}

/*
equation index: 1425
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._T_HTF_in_des = sCO2PBDesignPointCalculator.T_in_ref_blk
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1425(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1425};
  data->simulationInfo->realParameter[406] /* sCO2PBDesignPointCalculator.powerBlock.T_HTF_in_des PARAM */ = data->simulationInfo->realParameter[100] /* sCO2PBDesignPointCalculator.T_in_ref_blk PARAM */;
  TRACE_POP
}

/*
equation index: 1426
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._T_in_HTF_des = sCO2PBDesignPointCalculator.powerBlock.T_HTF_in_des
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1426(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1426};
  data->simulationInfo->realParameter[558] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_in_HTF_des PARAM */ = data->simulationInfo->realParameter[406] /* sCO2PBDesignPointCalculator.powerBlock.T_HTF_in_des PARAM */;
  TRACE_POP
}

/*
equation index: 1427
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._dTemp_HTF_PHX = dTemp_HTF_PHX
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1427(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1427};
  data->simulationInfo->realParameter[103] /* sCO2PBDesignPointCalculator.dTemp_HTF_PHX PARAM */ = data->simulationInfo->realParameter[27] /* dTemp_HTF_PHX PARAM */;
  TRACE_POP
}

/*
equation index: 1428
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._T_cold_set = sCO2PBDesignPointCalculator.T_in_ref_blk - sCO2PBDesignPointCalculator.dTemp_HTF_PHX
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1428(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1428};
  data->simulationInfo->realParameter[99] /* sCO2PBDesignPointCalculator.T_cold_set PARAM */ = data->simulationInfo->realParameter[100] /* sCO2PBDesignPointCalculator.T_in_ref_blk PARAM */ - data->simulationInfo->realParameter[103] /* sCO2PBDesignPointCalculator.dTemp_HTF_PHX PARAM */;
  TRACE_POP
}

/*
equation index: 1429
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._T_HTF_out = sCO2PBDesignPointCalculator.T_cold_set
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1429(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1429};
  data->simulationInfo->realParameter[407] /* sCO2PBDesignPointCalculator.powerBlock.T_HTF_out PARAM */ = data->simulationInfo->realParameter[99] /* sCO2PBDesignPointCalculator.T_cold_set PARAM */;
  TRACE_POP
}

/*
equation index: 1430
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._T_out_HTF_des = sCO2PBDesignPointCalculator.powerBlock.T_HTF_out
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1430(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1430};
  data->simulationInfo->realParameter[560] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_out_HTF_des PARAM */ = data->simulationInfo->realParameter[407] /* sCO2PBDesignPointCalculator.powerBlock.T_HTF_out PARAM */;
  TRACE_POP
}

/*
equation index: 1431
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._pinch_PHX = pinch_PHX
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1431(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1431};
  data->simulationInfo->realParameter[120] /* sCO2PBDesignPointCalculator.pinch_PHX PARAM */ = data->simulationInfo->realParameter[44] /* pinch_PHX PARAM */;
  TRACE_POP
}

/*
equation index: 1432
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._pinch_PHX = sCO2PBDesignPointCalculator.pinch_PHX
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1432(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1432};
  data->simulationInfo->realParameter[706] /* sCO2PBDesignPointCalculator.powerBlock.pinch_PHX PARAM */ = data->simulationInfo->realParameter[120] /* sCO2PBDesignPointCalculator.pinch_PHX PARAM */;
  TRACE_POP
}

/*
equation index: 1433
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._pinch_PHX = sCO2PBDesignPointCalculator.powerBlock.pinch_PHX
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1433(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1433};
  data->simulationInfo->realParameter[601] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.pinch_PHX PARAM */ = data->simulationInfo->realParameter[706] /* sCO2PBDesignPointCalculator.powerBlock.pinch_PHX PARAM */;
  TRACE_POP
}

/*
equation index: 1436
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._N_shaft = sCO2PBDesignPointCalculator.powerBlock.N_shaft
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1436(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1436};
  data->simulationInfo->realParameter[742] /* sCO2PBDesignPointCalculator.powerBlock.turbine.N_shaft PARAM */ = data->simulationInfo->realParameter[401] /* sCO2PBDesignPointCalculator.powerBlock.N_shaft PARAM */;
  TRACE_POP
}

/*
equation index: 1437
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._blk_T_amb_des = blk_T_amb_des
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1437(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1437};
  data->simulationInfo->realParameter[102] /* sCO2PBDesignPointCalculator.blk_T_amb_des PARAM */ = data->simulationInfo->realParameter[26] /* blk_T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 1438
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._T_amb_des = sCO2PBDesignPointCalculator.blk_T_amb_des
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1438(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1438};
  data->simulationInfo->realParameter[409] /* sCO2PBDesignPointCalculator.powerBlock.T_amb_des PARAM */ = data->simulationInfo->realParameter[102] /* sCO2PBDesignPointCalculator.blk_T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 1439
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._T_amb = sCO2PBDesignPointCalculator.powerBlock.T_amb_des
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1439(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1439};
  data->simulationInfo->realParameter[744] /* sCO2PBDesignPointCalculator.powerBlock.turbine.T_amb PARAM */ = data->simulationInfo->realParameter[409] /* sCO2PBDesignPointCalculator.powerBlock.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 1440
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._PR = PR
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1440(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1440};
  data->simulationInfo->realParameter[94] /* sCO2PBDesignPointCalculator.PR PARAM */ = data->simulationInfo->realParameter[0] /* PR PARAM */;
  TRACE_POP
}

/*
equation index: 1441
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._PR = sCO2PBDesignPointCalculator.PR
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1441(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1441};
  data->simulationInfo->realParameter[402] /* sCO2PBDesignPointCalculator.powerBlock.PR PARAM */ = data->simulationInfo->realParameter[94] /* sCO2PBDesignPointCalculator.PR PARAM */;
  TRACE_POP
}

/*
equation index: 1442
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._PR = sCO2PBDesignPointCalculator.powerBlock.PR
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1442(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1442};
  data->simulationInfo->realParameter[743] /* sCO2PBDesignPointCalculator.powerBlock.turbine.PR PARAM */ = data->simulationInfo->realParameter[402] /* sCO2PBDesignPointCalculator.powerBlock.PR PARAM */;
  TRACE_POP
}

/*
equation index: 1443
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._eta_design = sCO2PBDesignPointCalculator.powerBlock.eta_turb
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1443(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1443};
  data->simulationInfo->realParameter[747] /* sCO2PBDesignPointCalculator.powerBlock.turbine.eta_design PARAM */ = data->simulationInfo->realParameter[523] /* sCO2PBDesignPointCalculator.powerBlock.eta_turb PARAM */;
  TRACE_POP
}

/*
equation index: 1446
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._T_low = T_low
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1446(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1446};
  data->simulationInfo->realParameter[101] /* sCO2PBDesignPointCalculator.T_low PARAM */ = data->simulationInfo->realParameter[7] /* T_low PARAM */;
  TRACE_POP
}

/*
equation index: 1447
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._T_low = sCO2PBDesignPointCalculator.T_low
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1447(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1447};
  data->simulationInfo->realParameter[410] /* sCO2PBDesignPointCalculator.powerBlock.T_low PARAM */ = data->simulationInfo->realParameter[101] /* sCO2PBDesignPointCalculator.T_low PARAM */;
  TRACE_POP
}

/*
equation index: 1448
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._T_low = sCO2PBDesignPointCalculator.powerBlock.T_low
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1448(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1448};
  data->simulationInfo->realParameter[436] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_low PARAM */ = data->simulationInfo->realParameter[410] /* sCO2PBDesignPointCalculator.powerBlock.T_low PARAM */;
  TRACE_POP
}

/*
equation index: 1449
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._T_amb_des = sCO2PBDesignPointCalculator.powerBlock.T_amb_des
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1449(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1449};
  data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */ = data->simulationInfo->realParameter[409] /* sCO2PBDesignPointCalculator.powerBlock.T_amb_des PARAM */;
  TRACE_POP
}

/*
equation index: 1450
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._p_high_des = sCO2PBDesignPointCalculator.powerBlock.p_high
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1450(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1450};
  data->simulationInfo->realParameter[693] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_high_des PARAM */ = data->simulationInfo->realParameter[704] /* sCO2PBDesignPointCalculator.powerBlock.p_high PARAM */;
  TRACE_POP
}

/*
equation index: 1452
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._N_design = sCO2PBDesignPointCalculator.powerBlock.N_shaft
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1452(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1452};
  data->simulationInfo->realParameter[683] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.N_design PARAM */ = data->simulationInfo->realParameter[401] /* sCO2PBDesignPointCalculator.powerBlock.N_shaft PARAM */;
  TRACE_POP
}

/*
equation index: 1453
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._eta_design = sCO2PBDesignPointCalculator.powerBlock.eta_comp_main
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1453(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1453};
  data->simulationInfo->realParameter[689] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_design PARAM */ = data->simulationInfo->realParameter[518] /* sCO2PBDesignPointCalculator.powerBlock.eta_comp_main PARAM */;
  TRACE_POP
}

/*
equation index: 1454
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._pinchRecuperator = sCO2PBDesignPointCalculator.powerBlock.pinch_recuperator
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1454(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1454};
  data->simulationInfo->realParameter[204] /* sCO2PBDesignPointCalculator.powerBlock.HTR.pinchRecuperator PARAM */ = data->simulationInfo->realParameter[707] /* sCO2PBDesignPointCalculator.powerBlock.pinch_recuperator PARAM */;
  TRACE_POP
}

/*
equation index: 1456
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._pri_exchanger = pri_exchanger
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1456(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1456};
  data->simulationInfo->realParameter[762] /* sCO2PBDesignPointCalculator.pri_exchanger PARAM */ = data->simulationInfo->realParameter[90] /* pri_exchanger PARAM */;
  TRACE_POP
}

/*
equation index: 1457
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._pri_exchanger = sCO2PBDesignPointCalculator.pri_exchanger
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1457(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1457};
  data->simulationInfo->realParameter[710] /* sCO2PBDesignPointCalculator.powerBlock.pri_exchanger PARAM */ = data->simulationInfo->realParameter[762] /* sCO2PBDesignPointCalculator.pri_exchanger PARAM */;
  TRACE_POP
}

/*
equation index: 1458
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._pri_generator = pri_generator
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1458(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1458};
  data->simulationInfo->realParameter[763] /* sCO2PBDesignPointCalculator.pri_generator PARAM */ = data->simulationInfo->realParameter[91] /* pri_generator PARAM */;
  TRACE_POP
}

/*
equation index: 1459
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._pri_generator = sCO2PBDesignPointCalculator.pri_generator
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1459(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1459};
  data->simulationInfo->realParameter[711] /* sCO2PBDesignPointCalculator.powerBlock.pri_generator PARAM */ = data->simulationInfo->realParameter[763] /* sCO2PBDesignPointCalculator.pri_generator PARAM */;
  TRACE_POP
}

/*
equation index: 1460
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._pri_cooler = pri_cooler
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1460(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1460};
  data->simulationInfo->realParameter[761] /* sCO2PBDesignPointCalculator.pri_cooler PARAM */ = data->simulationInfo->realParameter[89] /* pri_cooler PARAM */;
  TRACE_POP
}

/*
equation index: 1461
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._pri_cooler = sCO2PBDesignPointCalculator.pri_cooler
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1461(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1461};
  data->simulationInfo->realParameter[709] /* sCO2PBDesignPointCalculator.powerBlock.pri_cooler PARAM */ = data->simulationInfo->realParameter[761] /* sCO2PBDesignPointCalculator.pri_cooler PARAM */;
  TRACE_POP
}

/*
equation index: 1462
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._pri_compressor = pri_compressor
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1462(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1462};
  data->simulationInfo->realParameter[760] /* sCO2PBDesignPointCalculator.pri_compressor PARAM */ = data->simulationInfo->realParameter[88] /* pri_compressor PARAM */;
  TRACE_POP
}

/*
equation index: 1463
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._pri_compressor = sCO2PBDesignPointCalculator.pri_compressor
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1463(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1463};
  data->simulationInfo->realParameter[708] /* sCO2PBDesignPointCalculator.powerBlock.pri_compressor PARAM */ = data->simulationInfo->realParameter[760] /* sCO2PBDesignPointCalculator.pri_compressor PARAM */;
  TRACE_POP
}

/*
equation index: 1464
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._pri_turbine = pri_turbine
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1464(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1464};
  data->simulationInfo->realParameter[765] /* sCO2PBDesignPointCalculator.pri_turbine PARAM */ = data->simulationInfo->realParameter[93] /* pri_turbine PARAM */;
  TRACE_POP
}

/*
equation index: 1465
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._pri_turbine = sCO2PBDesignPointCalculator.pri_turbine
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1465(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1465};
  data->simulationInfo->realParameter[713] /* sCO2PBDesignPointCalculator.powerBlock.pri_turbine PARAM */ = data->simulationInfo->realParameter[765] /* sCO2PBDesignPointCalculator.pri_turbine PARAM */;
  TRACE_POP
}

/*
equation index: 1466
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._pri_recuperator = pri_recuperator
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1466(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1466};
  data->simulationInfo->realParameter[764] /* sCO2PBDesignPointCalculator.pri_recuperator PARAM */ = data->simulationInfo->realParameter[92] /* pri_recuperator PARAM */;
  TRACE_POP
}

/*
equation index: 1467
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._pri_recuperator = sCO2PBDesignPointCalculator.pri_recuperator
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1467(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1467};
  data->simulationInfo->realParameter[712] /* sCO2PBDesignPointCalculator.powerBlock.pri_recuperator PARAM */ = data->simulationInfo->realParameter[764] /* sCO2PBDesignPointCalculator.pri_recuperator PARAM */;
  TRACE_POP
}

/*
equation index: 1469
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._ratio_m_des = 1.0 - sCO2PBDesignPointCalculator.powerBlock.gamma
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1469(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1469};
  data->simulationInfo->realParameter[714] /* sCO2PBDesignPointCalculator.powerBlock.ratio_m_des PARAM */ = 1.0 - data->simulationInfo->realParameter[681] /* sCO2PBDesignPointCalculator.powerBlock.gamma PARAM */;
  TRACE_POP
}

/*
equation index: 1472
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._eta_motor = eta_motor
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1472(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1472};
  data->simulationInfo->realParameter[104] /* sCO2PBDesignPointCalculator.eta_motor PARAM */ = data->simulationInfo->realParameter[28] /* eta_motor PARAM */;
  TRACE_POP
}

/*
equation index: 1473
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._eta_motor = sCO2PBDesignPointCalculator.eta_motor
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1473(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1473};
  data->simulationInfo->realParameter[521] /* sCO2PBDesignPointCalculator.powerBlock.eta_motor PARAM */ = data->simulationInfo->realParameter[104] /* sCO2PBDesignPointCalculator.eta_motor PARAM */;
  TRACE_POP
}

/*
equation index: 1475
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._par_fr = par_fr
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1475(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1475};
  data->simulationInfo->realParameter[119] /* sCO2PBDesignPointCalculator.par_fr PARAM */ = data->simulationInfo->realParameter[43] /* par_fr PARAM */;
  TRACE_POP
}

/*
equation index: 1476
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._par_fr = sCO2PBDesignPointCalculator.par_fr
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1476(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1476};
  data->simulationInfo->realParameter[705] /* sCO2PBDesignPointCalculator.powerBlock.par_fr PARAM */ = data->simulationInfo->realParameter[119] /* sCO2PBDesignPointCalculator.par_fr PARAM */;
  TRACE_POP
}

/*
equation index: 1477
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._f_fixed_load = f_fixed_load
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1477(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1477};
  data->simulationInfo->realParameter[105] /* sCO2PBDesignPointCalculator.f_fixed_load PARAM */ = data->simulationInfo->realParameter[29] /* f_fixed_load PARAM */;
  TRACE_POP
}

/*
equation index: 1478
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._f_fixed_load = sCO2PBDesignPointCalculator.f_fixed_load
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1478(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1478};
  data->simulationInfo->realParameter[678] /* sCO2PBDesignPointCalculator.powerBlock.f_fixed_load PARAM */ = data->simulationInfo->realParameter[105] /* sCO2PBDesignPointCalculator.f_fixed_load PARAM */;
  TRACE_POP
}

/*
equation index: 1479
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._nu_min_blk = nu_min_blk
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1479(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1479};
  data->simulationInfo->realParameter[117] /* sCO2PBDesignPointCalculator.nu_min_blk PARAM */ = data->simulationInfo->realParameter[41] /* nu_min_blk PARAM */;
  TRACE_POP
}

/*
equation index: 1480
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._nu_min = sCO2PBDesignPointCalculator.nu_min_blk
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1480(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1480};
  data->simulationInfo->realParameter[703] /* sCO2PBDesignPointCalculator.powerBlock.nu_min PARAM */ = data->simulationInfo->realParameter[117] /* sCO2PBDesignPointCalculator.nu_min_blk PARAM */;
  TRACE_POP
}

/*
equation index: 1481
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._external_parasities = external_parasities
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1481(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1481};
  data->simulationInfo->booleanParameter[5] /* sCO2PBDesignPointCalculator.external_parasities PARAM */ = data->simulationInfo->booleanParameter[0] /* external_parasities PARAM */;
  TRACE_POP
}

/*
equation index: 1482
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._external_parasities = sCO2PBDesignPointCalculator.external_parasities
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1482(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1482};
  data->simulationInfo->booleanParameter[8] /* sCO2PBDesignPointCalculator.powerBlock.external_parasities PARAM */ = data->simulationInfo->booleanParameter[5] /* sCO2PBDesignPointCalculator.external_parasities PARAM */;
  TRACE_POP
}

/*
equation index: 1488
type: SIMPLE_ASSIGN
powerBlock._out_min[2] = y_min[2]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1488(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1488};
  data->simulationInfo->realParameter[79] /* powerBlock.out_min[2] PARAM */ = data->simulationInfo->realParameter[813] /* y_min[2] PARAM */;
  TRACE_POP
}

/*
equation index: 1489
type: SIMPLE_ASSIGN
powerBlock._out_min[1] = y_min[1]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1489(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1489};
  data->simulationInfo->realParameter[78] /* powerBlock.out_min[1] PARAM */ = data->simulationInfo->realParameter[812] /* y_min[1] PARAM */;
  TRACE_POP
}

/*
equation index: 1490
type: SIMPLE_ASSIGN
powerBlock._out_max[2] = y_max[2]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1490(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1490};
  data->simulationInfo->realParameter[77] /* powerBlock.out_max[2] PARAM */ = data->simulationInfo->realParameter[811] /* y_max[2] PARAM */;
  TRACE_POP
}

/*
equation index: 1491
type: SIMPLE_ASSIGN
powerBlock._out_max[1] = y_max[1]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1491(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1491};
  data->simulationInfo->realParameter[76] /* powerBlock.out_max[1] PARAM */ = data->simulationInfo->realParameter[810] /* y_max[1] PARAM */;
  TRACE_POP
}

/*
equation index: 1492
type: SIMPLE_ASSIGN
powerBlock._X_min[9] = X_min[9]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1492(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1492};
  data->simulationInfo->realParameter[68] /* powerBlock.X_min[9] PARAM */ = data->simulationInfo->realParameter[25] /* X_min[9] PARAM */;
  TRACE_POP
}

/*
equation index: 1493
type: SIMPLE_ASSIGN
powerBlock._X_min[8] = X_min[8]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1493(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1493};
  data->simulationInfo->realParameter[67] /* powerBlock.X_min[8] PARAM */ = data->simulationInfo->realParameter[24] /* X_min[8] PARAM */;
  TRACE_POP
}

/*
equation index: 1494
type: SIMPLE_ASSIGN
powerBlock._X_min[7] = X_min[7]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1494(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1494};
  data->simulationInfo->realParameter[66] /* powerBlock.X_min[7] PARAM */ = data->simulationInfo->realParameter[23] /* X_min[7] PARAM */;
  TRACE_POP
}

/*
equation index: 1495
type: SIMPLE_ASSIGN
powerBlock._X_min[6] = X_min[6]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1495(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1495};
  data->simulationInfo->realParameter[65] /* powerBlock.X_min[6] PARAM */ = data->simulationInfo->realParameter[22] /* X_min[6] PARAM */;
  TRACE_POP
}

/*
equation index: 1496
type: SIMPLE_ASSIGN
powerBlock._X_min[5] = X_min[5]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1496(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1496};
  data->simulationInfo->realParameter[64] /* powerBlock.X_min[5] PARAM */ = data->simulationInfo->realParameter[21] /* X_min[5] PARAM */;
  TRACE_POP
}

/*
equation index: 1497
type: SIMPLE_ASSIGN
powerBlock._X_min[4] = X_min[4]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1497(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1497};
  data->simulationInfo->realParameter[63] /* powerBlock.X_min[4] PARAM */ = data->simulationInfo->realParameter[20] /* X_min[4] PARAM */;
  TRACE_POP
}

/*
equation index: 1498
type: SIMPLE_ASSIGN
powerBlock._X_min[3] = X_min[3]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1498(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1498};
  data->simulationInfo->realParameter[62] /* powerBlock.X_min[3] PARAM */ = data->simulationInfo->realParameter[19] /* X_min[3] PARAM */;
  TRACE_POP
}

/*
equation index: 1499
type: SIMPLE_ASSIGN
powerBlock._X_min[2] = X_min[2]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1499(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1499};
  data->simulationInfo->realParameter[61] /* powerBlock.X_min[2] PARAM */ = data->simulationInfo->realParameter[18] /* X_min[2] PARAM */;
  TRACE_POP
}

/*
equation index: 1500
type: SIMPLE_ASSIGN
powerBlock._X_min[1] = X_min[1]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1500(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1500};
  data->simulationInfo->realParameter[60] /* powerBlock.X_min[1] PARAM */ = data->simulationInfo->realParameter[17] /* X_min[1] PARAM */;
  TRACE_POP
}

/*
equation index: 1501
type: SIMPLE_ASSIGN
powerBlock._X_max[9] = X_max[9]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1501(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1501};
  data->simulationInfo->realParameter[59] /* powerBlock.X_max[9] PARAM */ = data->simulationInfo->realParameter[16] /* X_max[9] PARAM */;
  TRACE_POP
}

/*
equation index: 1502
type: SIMPLE_ASSIGN
powerBlock._X_max[8] = X_max[8]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1502(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1502};
  data->simulationInfo->realParameter[58] /* powerBlock.X_max[8] PARAM */ = data->simulationInfo->realParameter[15] /* X_max[8] PARAM */;
  TRACE_POP
}

/*
equation index: 1503
type: SIMPLE_ASSIGN
powerBlock._X_max[7] = X_max[7]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1503(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1503};
  data->simulationInfo->realParameter[57] /* powerBlock.X_max[7] PARAM */ = data->simulationInfo->realParameter[14] /* X_max[7] PARAM */;
  TRACE_POP
}

/*
equation index: 1504
type: SIMPLE_ASSIGN
powerBlock._X_max[6] = X_max[6]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1504(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1504};
  data->simulationInfo->realParameter[56] /* powerBlock.X_max[6] PARAM */ = data->simulationInfo->realParameter[13] /* X_max[6] PARAM */;
  TRACE_POP
}

/*
equation index: 1505
type: SIMPLE_ASSIGN
powerBlock._X_max[5] = X_max[5]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1505(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1505};
  data->simulationInfo->realParameter[55] /* powerBlock.X_max[5] PARAM */ = data->simulationInfo->realParameter[12] /* X_max[5] PARAM */;
  TRACE_POP
}

/*
equation index: 1506
type: SIMPLE_ASSIGN
powerBlock._X_max[4] = X_max[4]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1506(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1506};
  data->simulationInfo->realParameter[54] /* powerBlock.X_max[4] PARAM */ = data->simulationInfo->realParameter[11] /* X_max[4] PARAM */;
  TRACE_POP
}

/*
equation index: 1507
type: SIMPLE_ASSIGN
powerBlock._X_max[3] = X_max[3]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1507(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1507};
  data->simulationInfo->realParameter[53] /* powerBlock.X_max[3] PARAM */ = data->simulationInfo->realParameter[10] /* X_max[3] PARAM */;
  TRACE_POP
}

/*
equation index: 1508
type: SIMPLE_ASSIGN
powerBlock._X_max[2] = X_max[2]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1508(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1508};
  data->simulationInfo->realParameter[52] /* powerBlock.X_max[2] PARAM */ = data->simulationInfo->realParameter[9] /* X_max[2] PARAM */;
  TRACE_POP
}

/*
equation index: 1509
type: SIMPLE_ASSIGN
powerBlock._X_max[1] = X_max[1]
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1509(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1509};
  data->simulationInfo->realParameter[51] /* powerBlock.X_max[1] PARAM */ = data->simulationInfo->realParameter[8] /* X_max[1] PARAM */;
  TRACE_POP
}

/*
equation index: 1513
type: SIMPLE_ASSIGN
powerBlock._f_fixed_load = f_fixed_load
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1513(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1513};
  data->simulationInfo->realParameter[71] /* powerBlock.f_fixed_load PARAM */ = data->simulationInfo->realParameter[29] /* f_fixed_load PARAM */;
  TRACE_POP
}
extern void sCO2SurrogatePBRig_eqFunction_956(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_955(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_954(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_953(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_952(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_951(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_46(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_48(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_950(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_47(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_949(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_948(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_947(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_946(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_945(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_944(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_41(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_943(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_42(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_43(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_38(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_37(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_36(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_35(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_34(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_33(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_32(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_31(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_30(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_29(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_28(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_27(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_26(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_25(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_24(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_23(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_22(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_21(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_20(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_19(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_18(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_17(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_16(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_15(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_14(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_13(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_12(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_11(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_10(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_9(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_8(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_7(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_6(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_5(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_4(DATA *data, threadData_t *threadData);

extern void sCO2SurrogatePBRig_eqFunction_3(DATA *data, threadData_t *threadData);


/*
equation index: 1590
type: ALGORITHM

  assert(T_amb_input >= 0.0, "Variable violating min constraint: 0.0 <= T_amb_input, has value: " + String(T_amb_input, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1590(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1590};
  modelica_boolean tmp0;
  static const MMC_DEFSTRINGLIT(tmp1,66,"Variable violating min constraint: 0.0 <= T_amb_input, has value: ");
  modelica_string tmp2;
  static int tmp3 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp3)
  {
    tmp0 = GreaterEq(data->simulationInfo->realParameter[5] /* T_amb_input PARAM */,0.0);
    if(!tmp0)
    {
      tmp2 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[5] /* T_amb_input PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp1),tmp2);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/sCO2-test-data/simulation_surrogate/sCO2SurrogatePBRig.mo",34,3,34,48,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nT_amb_input >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp3 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1591
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.T_amb_input >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.T_amb_input, has value: " + String(sCO2PBDesignPointCalculator.T_amb_input, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1591(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1591};
  modelica_boolean tmp4;
  static const MMC_DEFSTRINGLIT(tmp5,94,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.T_amb_input, has value: ");
  modelica_string tmp6;
  static int tmp7 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp7)
  {
    tmp4 = GreaterEq(data->simulationInfo->realParameter[98] /* sCO2PBDesignPointCalculator.T_amb_input PARAM */,0.0);
    if(!tmp4)
    {
      tmp6 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[98] /* sCO2PBDesignPointCalculator.T_amb_input PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp5),tmp6);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2PBCalculator_Using_JPidea.mo",37,3,37,47,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.T_amb_input >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp7 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1592
type: ALGORITHM

  assert(T_HTF_in >= 0.0, "Variable violating min constraint: 0.0 <= T_HTF_in, has value: " + String(T_HTF_in, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1592(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1592};
  modelica_boolean tmp8;
  static const MMC_DEFSTRINGLIT(tmp9,63,"Variable violating min constraint: 0.0 <= T_HTF_in, has value: ");
  modelica_string tmp10;
  static int tmp11 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp11)
  {
    tmp8 = GreaterEq(data->simulationInfo->realParameter[3] /* T_HTF_in PARAM */,0.0);
    if(!tmp8)
    {
      tmp10 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[3] /* T_HTF_in PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp9),tmp10);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/sCO2-test-data/simulation_surrogate/sCO2SurrogatePBRig.mo",33,3,33,46,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nT_HTF_in >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp11 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1593
type: ALGORITHM

  assert(source.T >= 300.0 and source.T <= 1370.0, "Variable violating min/max constraint: 300.0 <= source.T <= 1370.0, has value: " + String(source.T, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1593(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1593};
  modelica_boolean tmp12;
  modelica_boolean tmp13;
  static const MMC_DEFSTRINGLIT(tmp14,79,"Variable violating min/max constraint: 300.0 <= source.T <= 1370.0, has value: ");
  modelica_string tmp15;
  static int tmp16 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp16)
  {
    tmp12 = GreaterEq(data->simulationInfo->realParameter[801] /* source.T PARAM */,300.0);
    tmp13 = LessEq(data->simulationInfo->realParameter[801] /* source.T PARAM */,1370.0);
    if(!(tmp12 && tmp13))
    {
      tmp15 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[801] /* source.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp14),tmp15);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",24,5,26,42,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.T >= 300.0 and source.T <= 1370.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp16 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1594
type: ALGORITHM

  assert(sink.T >= 300.0 and sink.T <= 1370.0, "Variable violating min/max constraint: 300.0 <= sink.T <= 1370.0, has value: " + String(sink.T, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1594(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1594};
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  static const MMC_DEFSTRINGLIT(tmp19,77,"Variable violating min/max constraint: 300.0 <= sink.T <= 1370.0, has value: ");
  modelica_string tmp20;
  static int tmp21 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp21)
  {
    tmp17 = GreaterEq(data->simulationInfo->realParameter[788] /* sink.T PARAM */,300.0);
    tmp18 = LessEq(data->simulationInfo->realParameter[788] /* sink.T PARAM */,1370.0);
    if(!(tmp17 && tmp18))
    {
      tmp20 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[788] /* sink.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp19),tmp20);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",24,5,26,42,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.T >= 300.0 and sink.T <= 1370.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp21 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1595
type: ALGORITHM

  assert(sink.p >= 0.0 and sink.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sink.p <= 100000000.0, has value: " + String(sink.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1595(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1595};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,80,"Variable violating min/max constraint: 0.0 <= sink.p <= 100000000.0, has value: ");
  modelica_string tmp25;
  static int tmp26 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp26)
  {
    tmp22 = GreaterEq(data->simulationInfo->realParameter[798] /* sink.p PARAM */,0.0);
    tmp23 = LessEq(data->simulationInfo->realParameter[798] /* sink.p PARAM */,100000000.0);
    if(!(tmp22 && tmp23))
    {
      tmp25 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[798] /* sink.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp24),tmp25);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",10,5,12,42,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.p >= 0.0 and sink.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp26 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1596
type: ALGORITHM

  assert(T_in_ref_blk >= 0.0, "Variable violating min constraint: 0.0 <= T_in_ref_blk, has value: " + String(T_in_ref_blk, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1596(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1596};
  modelica_boolean tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,67,"Variable violating min constraint: 0.0 <= T_in_ref_blk, has value: ");
  modelica_string tmp29;
  static int tmp30 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp30)
  {
    tmp27 = GreaterEq(data->simulationInfo->realParameter[6] /* T_in_ref_blk PARAM */,0.0);
    if(!tmp27)
    {
      tmp29 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[6] /* T_in_ref_blk PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp28),tmp29);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/sCO2-test-data/simulation_surrogate/sCO2SurrogatePBRig.mo",26,3,26,50,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nT_in_ref_blk >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp30 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1597
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.T_HTF_in >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.T_HTF_in, has value: " + String(sCO2PBDesignPointCalculator.T_HTF_in, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1597(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1597};
  modelica_boolean tmp31;
  static const MMC_DEFSTRINGLIT(tmp32,91,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.T_HTF_in, has value: ");
  modelica_string tmp33;
  static int tmp34 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp34)
  {
    tmp31 = GreaterEq(data->simulationInfo->realParameter[96] /* sCO2PBDesignPointCalculator.T_HTF_in PARAM */,0.0);
    if(!tmp31)
    {
      tmp33 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[96] /* sCO2PBDesignPointCalculator.T_HTF_in PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp32),tmp33);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2PBCalculator_Using_JPidea.mo",36,3,36,46,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.T_HTF_in >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp34 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1598
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.source.T >= 300.0 and sCO2PBDesignPointCalculator.source.T <= 1370.0, "Variable violating min/max constraint: 300.0 <= sCO2PBDesignPointCalculator.source.T <= 1370.0, has value: " + String(sCO2PBDesignPointCalculator.source.T, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1598(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1598};
  modelica_boolean tmp35;
  modelica_boolean tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,107,"Variable violating min/max constraint: 300.0 <= sCO2PBDesignPointCalculator.source.T <= 1370.0, has value: ");
  modelica_string tmp38;
  static int tmp39 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp39)
  {
    tmp35 = GreaterEq(data->simulationInfo->realParameter[779] /* sCO2PBDesignPointCalculator.source.T PARAM */,300.0);
    tmp36 = LessEq(data->simulationInfo->realParameter[779] /* sCO2PBDesignPointCalculator.source.T PARAM */,1370.0);
    if(!(tmp35 && tmp36))
    {
      tmp38 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[779] /* sCO2PBDesignPointCalculator.source.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp37),tmp38);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",24,5,26,42,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.source.T >= 300.0 and sCO2PBDesignPointCalculator.source.T <= 1370.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp39 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1599
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.T >= 300.0 and sCO2PBDesignPointCalculator.sink.T <= 1370.0, "Variable violating min/max constraint: 300.0 <= sCO2PBDesignPointCalculator.sink.T <= 1370.0, has value: " + String(sCO2PBDesignPointCalculator.sink.T, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1599(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1599};
  modelica_boolean tmp40;
  modelica_boolean tmp41;
  static const MMC_DEFSTRINGLIT(tmp42,105,"Variable violating min/max constraint: 300.0 <= sCO2PBDesignPointCalculator.sink.T <= 1370.0, has value: ");
  modelica_string tmp43;
  static int tmp44 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp44)
  {
    tmp40 = GreaterEq(data->simulationInfo->realParameter[766] /* sCO2PBDesignPointCalculator.sink.T PARAM */,300.0);
    tmp41 = LessEq(data->simulationInfo->realParameter[766] /* sCO2PBDesignPointCalculator.sink.T PARAM */,1370.0);
    if(!(tmp40 && tmp41))
    {
      tmp43 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[766] /* sCO2PBDesignPointCalculator.sink.T PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp42),tmp43);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",24,5,26,42,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.T >= 300.0 and sCO2PBDesignPointCalculator.sink.T <= 1370.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp44 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1600
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.p >= 0.0 and sCO2PBDesignPointCalculator.sink.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.sink.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1600(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1600};
  modelica_boolean tmp45;
  modelica_boolean tmp46;
  static const MMC_DEFSTRINGLIT(tmp47,108,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.p <= 100000000.0, has value: ");
  modelica_string tmp48;
  static int tmp49 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp49)
  {
    tmp45 = GreaterEq(data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */,0.0);
    tmp46 = LessEq(data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */,100000000.0);
    if(!(tmp45 && tmp46))
    {
      tmp48 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp47),tmp48);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",10,5,12,42,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.p >= 0.0 and sCO2PBDesignPointCalculator.sink.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp49 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1601
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.medium.state.p >= 0.0 and sCO2PBDesignPointCalculator.sink.medium.state.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.medium.state.p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.sink.medium.state.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1601(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1601};
  modelica_boolean tmp50;
  modelica_boolean tmp51;
  static const MMC_DEFSTRINGLIT(tmp52,121,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.medium.state.p <= 100000000.0, has value: ");
  modelica_string tmp53;
  static int tmp54 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp54)
  {
    tmp50 = GreaterEq(data->simulationInfo->realParameter[775] /* sCO2PBDesignPointCalculator.sink.medium.state.p PARAM */,0.0);
    tmp51 = LessEq(data->simulationInfo->realParameter[775] /* sCO2PBDesignPointCalculator.sink.medium.state.p PARAM */,100000000.0);
    if(!(tmp50 && tmp51))
    {
      tmp53 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[775] /* sCO2PBDesignPointCalculator.sink.medium.state.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp52),tmp53);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/SolidParticles/CarboHSP_ph/package.mo",71,3,71,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.medium.state.p >= 0.0 and sCO2PBDesignPointCalculator.sink.medium.state.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp54 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1602
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[1].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[1].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[1].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[1].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1602(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1602};
  modelica_boolean tmp55;
  modelica_boolean tmp56;
  static const MMC_DEFSTRINGLIT(tmp57,137,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[1].p <= 100000000.0, has value: ");
  modelica_string tmp58;
  static int tmp59 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp59)
  {
    tmp55 = GreaterEq(data->simulationInfo->realParameter[633] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[1].p PARAM */,0.0);
    tmp56 = LessEq(data->simulationInfo->realParameter[633] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[1].p PARAM */,100000000.0);
    if(!(tmp55 && tmp56))
    {
      tmp58 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[633] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[1].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp57),tmp58);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[1].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[1].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp59 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1603
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[2].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[2].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[2].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[2].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1603(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1603};
  modelica_boolean tmp60;
  modelica_boolean tmp61;
  static const MMC_DEFSTRINGLIT(tmp62,137,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[2].p <= 100000000.0, has value: ");
  modelica_string tmp63;
  static int tmp64 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp64)
  {
    tmp60 = GreaterEq(data->simulationInfo->realParameter[634] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[2].p PARAM */,0.0);
    tmp61 = LessEq(data->simulationInfo->realParameter[634] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[2].p PARAM */,100000000.0);
    if(!(tmp60 && tmp61))
    {
      tmp63 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[634] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[2].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp62),tmp63);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[2].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[2].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp64 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1604
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[3].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[3].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[3].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[3].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1604(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1604};
  modelica_boolean tmp65;
  modelica_boolean tmp66;
  static const MMC_DEFSTRINGLIT(tmp67,137,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[3].p <= 100000000.0, has value: ");
  modelica_string tmp68;
  static int tmp69 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp69)
  {
    tmp65 = GreaterEq(data->simulationInfo->realParameter[635] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[3].p PARAM */,0.0);
    tmp66 = LessEq(data->simulationInfo->realParameter[635] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[3].p PARAM */,100000000.0);
    if(!(tmp65 && tmp66))
    {
      tmp68 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[635] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[3].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp67),tmp68);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[3].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[3].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp69 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1605
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[4].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[4].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[4].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[4].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1605(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1605};
  modelica_boolean tmp70;
  modelica_boolean tmp71;
  static const MMC_DEFSTRINGLIT(tmp72,137,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[4].p <= 100000000.0, has value: ");
  modelica_string tmp73;
  static int tmp74 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp74)
  {
    tmp70 = GreaterEq(data->simulationInfo->realParameter[636] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[4].p PARAM */,0.0);
    tmp71 = LessEq(data->simulationInfo->realParameter[636] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[4].p PARAM */,100000000.0);
    if(!(tmp70 && tmp71))
    {
      tmp73 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[636] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[4].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp72),tmp73);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[4].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[4].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp74 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1606
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[5].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[5].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[5].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[5].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1606(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1606};
  modelica_boolean tmp75;
  modelica_boolean tmp76;
  static const MMC_DEFSTRINGLIT(tmp77,137,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[5].p <= 100000000.0, has value: ");
  modelica_string tmp78;
  static int tmp79 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp79)
  {
    tmp75 = GreaterEq(data->simulationInfo->realParameter[637] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[5].p PARAM */,0.0);
    tmp76 = LessEq(data->simulationInfo->realParameter[637] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[5].p PARAM */,100000000.0);
    if(!(tmp75 && tmp76))
    {
      tmp78 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[637] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[5].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp77),tmp78);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[5].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[5].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp79 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1607
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[6].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[6].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[6].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[6].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1607(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1607};
  modelica_boolean tmp80;
  modelica_boolean tmp81;
  static const MMC_DEFSTRINGLIT(tmp82,137,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[6].p <= 100000000.0, has value: ");
  modelica_string tmp83;
  static int tmp84 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp84)
  {
    tmp80 = GreaterEq(data->simulationInfo->realParameter[638] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[6].p PARAM */,0.0);
    tmp81 = LessEq(data->simulationInfo->realParameter[638] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[6].p PARAM */,100000000.0);
    if(!(tmp80 && tmp81))
    {
      tmp83 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[638] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[6].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp82),tmp83);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[6].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[6].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp84 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1608
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[7].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[7].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[7].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[7].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1608(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1608};
  modelica_boolean tmp85;
  modelica_boolean tmp86;
  static const MMC_DEFSTRINGLIT(tmp87,137,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[7].p <= 100000000.0, has value: ");
  modelica_string tmp88;
  static int tmp89 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp89)
  {
    tmp85 = GreaterEq(data->simulationInfo->realParameter[639] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[7].p PARAM */,0.0);
    tmp86 = LessEq(data->simulationInfo->realParameter[639] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[7].p PARAM */,100000000.0);
    if(!(tmp85 && tmp86))
    {
      tmp88 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[639] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[7].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp87),tmp88);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[7].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[7].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp89 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1609
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[8].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[8].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[8].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[8].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1609(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1609};
  modelica_boolean tmp90;
  modelica_boolean tmp91;
  static const MMC_DEFSTRINGLIT(tmp92,137,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[8].p <= 100000000.0, has value: ");
  modelica_string tmp93;
  static int tmp94 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp94)
  {
    tmp90 = GreaterEq(data->simulationInfo->realParameter[640] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[8].p PARAM */,0.0);
    tmp91 = LessEq(data->simulationInfo->realParameter[640] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[8].p PARAM */,100000000.0);
    if(!(tmp90 && tmp91))
    {
      tmp93 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[640] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[8].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp92),tmp93);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[8].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[8].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp94 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1610
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[9].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[9].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[9].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[9].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1610(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1610};
  modelica_boolean tmp95;
  modelica_boolean tmp96;
  static const MMC_DEFSTRINGLIT(tmp97,137,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[9].p <= 100000000.0, has value: ");
  modelica_string tmp98;
  static int tmp99 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp99)
  {
    tmp95 = GreaterEq(data->simulationInfo->realParameter[641] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[9].p PARAM */,0.0);
    tmp96 = LessEq(data->simulationInfo->realParameter[641] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[9].p PARAM */,100000000.0);
    if(!(tmp95 && tmp96))
    {
      tmp98 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[641] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[9].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp97),tmp98);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[9].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[9].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp99 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1611
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[10].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[10].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[10].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[10].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1611(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1611};
  modelica_boolean tmp100;
  modelica_boolean tmp101;
  static const MMC_DEFSTRINGLIT(tmp102,138,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[10].p <= 100000000.0, has value: ");
  modelica_string tmp103;
  static int tmp104 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp104)
  {
    tmp100 = GreaterEq(data->simulationInfo->realParameter[642] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[10].p PARAM */,0.0);
    tmp101 = LessEq(data->simulationInfo->realParameter[642] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[10].p PARAM */,100000000.0);
    if(!(tmp100 && tmp101))
    {
      tmp103 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[642] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[10].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp102),tmp103);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[10].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[10].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp104 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1612
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[11].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[11].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[11].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[11].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1612(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1612};
  modelica_boolean tmp105;
  modelica_boolean tmp106;
  static const MMC_DEFSTRINGLIT(tmp107,138,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[11].p <= 100000000.0, has value: ");
  modelica_string tmp108;
  static int tmp109 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp109)
  {
    tmp105 = GreaterEq(data->simulationInfo->realParameter[643] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[11].p PARAM */,0.0);
    tmp106 = LessEq(data->simulationInfo->realParameter[643] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[11].p PARAM */,100000000.0);
    if(!(tmp105 && tmp106))
    {
      tmp108 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[643] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[11].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp107),tmp108);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[11].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[11].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp109 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1613
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[12].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[12].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[12].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[12].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1613(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1613};
  modelica_boolean tmp110;
  modelica_boolean tmp111;
  static const MMC_DEFSTRINGLIT(tmp112,138,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[12].p <= 100000000.0, has value: ");
  modelica_string tmp113;
  static int tmp114 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp114)
  {
    tmp110 = GreaterEq(data->simulationInfo->realParameter[644] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[12].p PARAM */,0.0);
    tmp111 = LessEq(data->simulationInfo->realParameter[644] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[12].p PARAM */,100000000.0);
    if(!(tmp110 && tmp111))
    {
      tmp113 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[644] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[12].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp112),tmp113);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[12].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[12].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp114 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1614
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[13].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[13].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[13].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[13].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1614(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1614};
  modelica_boolean tmp115;
  modelica_boolean tmp116;
  static const MMC_DEFSTRINGLIT(tmp117,138,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[13].p <= 100000000.0, has value: ");
  modelica_string tmp118;
  static int tmp119 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp119)
  {
    tmp115 = GreaterEq(data->simulationInfo->realParameter[645] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[13].p PARAM */,0.0);
    tmp116 = LessEq(data->simulationInfo->realParameter[645] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[13].p PARAM */,100000000.0);
    if(!(tmp115 && tmp116))
    {
      tmp118 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[645] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[13].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp117),tmp118);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[13].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[13].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp119 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1615
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[14].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[14].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[14].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[14].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1615(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1615};
  modelica_boolean tmp120;
  modelica_boolean tmp121;
  static const MMC_DEFSTRINGLIT(tmp122,138,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[14].p <= 100000000.0, has value: ");
  modelica_string tmp123;
  static int tmp124 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp124)
  {
    tmp120 = GreaterEq(data->simulationInfo->realParameter[646] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[14].p PARAM */,0.0);
    tmp121 = LessEq(data->simulationInfo->realParameter[646] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[14].p PARAM */,100000000.0);
    if(!(tmp120 && tmp121))
    {
      tmp123 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[646] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[14].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp122),tmp123);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[14].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[14].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp124 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1616
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[15].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[15].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[15].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[15].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1616(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1616};
  modelica_boolean tmp125;
  modelica_boolean tmp126;
  static const MMC_DEFSTRINGLIT(tmp127,138,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[15].p <= 100000000.0, has value: ");
  modelica_string tmp128;
  static int tmp129 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp129)
  {
    tmp125 = GreaterEq(data->simulationInfo->realParameter[647] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[15].p PARAM */,0.0);
    tmp126 = LessEq(data->simulationInfo->realParameter[647] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[15].p PARAM */,100000000.0);
    if(!(tmp125 && tmp126))
    {
      tmp128 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[647] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[15].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp127),tmp128);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[15].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF[15].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp129 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1617
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.liftSimple.fluid_b.p >= 0.0 and sCO2PBDesignPointCalculator.liftSimple.fluid_b.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.liftSimple.fluid_b.p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.liftSimple.fluid_b.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1617(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1617};
  modelica_boolean tmp130;
  modelica_boolean tmp131;
  static const MMC_DEFSTRINGLIT(tmp132,122,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.liftSimple.fluid_b.p <= 100000000.0, has value: ");
  modelica_string tmp133;
  static int tmp134 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp134)
  {
    tmp130 = GreaterEq(data->simulationInfo->realParameter[110] /* sCO2PBDesignPointCalculator.liftSimple.fluid_b.p PARAM */,0.0);
    tmp131 = LessEq(data->simulationInfo->realParameter[110] /* sCO2PBDesignPointCalculator.liftSimple.fluid_b.p PARAM */,100000000.0);
    if(!(tmp130 && tmp131))
    {
      tmp133 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[110] /* sCO2PBDesignPointCalculator.liftSimple.fluid_b.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp132),tmp133);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.liftSimple.fluid_b.p >= 0.0 and sCO2PBDesignPointCalculator.liftSimple.fluid_b.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp134 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1618
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.fluid_a.p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.fluid_a.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.fluid_a.p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.fluid_a.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1618(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1618};
  modelica_boolean tmp135;
  modelica_boolean tmp136;
  static const MMC_DEFSTRINGLIT(tmp137,122,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.fluid_a.p <= 100000000.0, has value: ");
  modelica_string tmp138;
  static int tmp139 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp139)
  {
    tmp135 = GreaterEq(data->simulationInfo->realParameter[679] /* sCO2PBDesignPointCalculator.powerBlock.fluid_a.p PARAM */,0.0);
    tmp136 = LessEq(data->simulationInfo->realParameter[679] /* sCO2PBDesignPointCalculator.powerBlock.fluid_a.p PARAM */,100000000.0);
    if(!(tmp135 && tmp136))
    {
      tmp138 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[679] /* sCO2PBDesignPointCalculator.powerBlock.fluid_a.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp137),tmp138);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.fluid_a.p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.fluid_a.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp139 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1619
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_a.p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_a.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_a.p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_a.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1619(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1619};
  modelica_boolean tmp140;
  modelica_boolean tmp141;
  static const MMC_DEFSTRINGLIT(tmp142,135,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_a.p <= 100000000.0, has value: ");
  modelica_string tmp143;
  static int tmp144 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp144)
  {
    tmp140 = GreaterEq(data->simulationInfo->realParameter[524] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_a.p PARAM */,0.0);
    tmp141 = LessEq(data->simulationInfo->realParameter[524] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_a.p PARAM */,100000000.0);
    if(!(tmp140 && tmp141))
    {
      tmp143 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[524] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_a.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp142),tmp143);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_a.p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_a.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp144 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1620
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_b.p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_b.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_b.p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_b.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1620(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1620};
  modelica_boolean tmp145;
  modelica_boolean tmp146;
  static const MMC_DEFSTRINGLIT(tmp147,135,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_b.p <= 100000000.0, has value: ");
  modelica_string tmp148;
  static int tmp149 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp149)
  {
    tmp145 = GreaterEq(data->simulationInfo->realParameter[525] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_b.p PARAM */,0.0);
    tmp146 = LessEq(data->simulationInfo->realParameter[525] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_b.p PARAM */,100000000.0);
    if(!(tmp145 && tmp146))
    {
      tmp148 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[525] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_b.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp147),tmp148);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_b.p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.HTF_port_b.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp149 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1621
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.fluid_b.p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.fluid_b.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.fluid_b.p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.fluid_b.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1621(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1621};
  modelica_boolean tmp150;
  modelica_boolean tmp151;
  static const MMC_DEFSTRINGLIT(tmp152,122,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.fluid_b.p <= 100000000.0, has value: ");
  modelica_string tmp153;
  static int tmp154 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp154)
  {
    tmp150 = GreaterEq(data->simulationInfo->realParameter[680] /* sCO2PBDesignPointCalculator.powerBlock.fluid_b.p PARAM */,0.0);
    tmp151 = LessEq(data->simulationInfo->realParameter[680] /* sCO2PBDesignPointCalculator.powerBlock.fluid_b.p PARAM */,100000000.0);
    if(!(tmp150 && tmp151))
    {
      tmp153 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[680] /* sCO2PBDesignPointCalculator.powerBlock.fluid_b.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp152),tmp153);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.fluid_b.p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.fluid_b.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp154 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1622
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.ports[1].p >= 0.0 and sCO2PBDesignPointCalculator.sink.ports[1].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.ports[1].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.sink.ports[1].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1622(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1622};
  modelica_boolean tmp155;
  modelica_boolean tmp156;
  static const MMC_DEFSTRINGLIT(tmp157,117,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.ports[1].p <= 100000000.0, has value: ");
  modelica_string tmp158;
  static int tmp159 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp159)
  {
    tmp155 = GreaterEq(data->simulationInfo->realParameter[777] /* sCO2PBDesignPointCalculator.sink.ports[1].p PARAM */,0.0);
    tmp156 = LessEq(data->simulationInfo->realParameter[777] /* sCO2PBDesignPointCalculator.sink.ports[1].p PARAM */,100000000.0);
    if(!(tmp155 && tmp156))
    {
      tmp158 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[777] /* sCO2PBDesignPointCalculator.sink.ports[1].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp157),tmp158);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.ports[1].p >= 0.0 and sCO2PBDesignPointCalculator.sink.ports[1].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp159 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1623
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.medium.p >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.medium.p, has value: " + String(sCO2PBDesignPointCalculator.sink.medium.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1623(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1623};
  modelica_boolean tmp160;
  static const MMC_DEFSTRINGLIT(tmp161,96,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.medium.p, has value: ");
  modelica_string tmp162;
  static int tmp163 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp163)
  {
    tmp160 = GreaterEq(data->simulationInfo->realParameter[774] /* sCO2PBDesignPointCalculator.sink.medium.p PARAM */,0.0);
    if(!tmp160)
    {
      tmp162 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[774] /* sCO2PBDesignPointCalculator.sink.medium.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp161),tmp162);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4477,7,4477,60,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.medium.p >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp163 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1624
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.state.p >= 0.0 and sCO2PBDesignPointCalculator.sink.state.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.state.p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.sink.state.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1624(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1624};
  modelica_boolean tmp164;
  modelica_boolean tmp165;
  static const MMC_DEFSTRINGLIT(tmp166,114,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.state.p <= 100000000.0, has value: ");
  modelica_string tmp167;
  static int tmp168 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp168)
  {
    tmp164 = GreaterEq(data->simulationInfo->realParameter[778] /* sCO2PBDesignPointCalculator.sink.state.p PARAM */,0.0);
    tmp165 = LessEq(data->simulationInfo->realParameter[778] /* sCO2PBDesignPointCalculator.sink.state.p PARAM */,100000000.0);
    if(!(tmp164 && tmp165))
    {
      tmp167 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[778] /* sCO2PBDesignPointCalculator.sink.state.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp166),tmp167);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/SolidParticles/CarboHSP_ph/package.mo",71,3,71,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.state.p >= 0.0 and sCO2PBDesignPointCalculator.sink.state.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp168 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1625
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1625(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1625};
  modelica_boolean tmp169;
  static const MMC_DEFSTRINGLIT(tmp170,106,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb, has value: ");
  modelica_string tmp171;
  static int tmp172 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp172)
  {
    tmp169 = GreaterEq(data->simulationInfo->realParameter[434] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb PARAM */,0.0);
    if(!tmp169)
    {
      tmp171 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[434] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp170),tmp171);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",381,4,381,89,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.cooler.T_amb >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp172 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1626
type: ALGORITHM

  assert(sink.medium.state.p >= 0.0 and sink.medium.state.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sink.medium.state.p <= 100000000.0, has value: " + String(sink.medium.state.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1626(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1626};
  modelica_boolean tmp173;
  modelica_boolean tmp174;
  static const MMC_DEFSTRINGLIT(tmp175,93,"Variable violating min/max constraint: 0.0 <= sink.medium.state.p <= 100000000.0, has value: ");
  modelica_string tmp176;
  static int tmp177 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp177)
  {
    tmp173 = GreaterEq(data->simulationInfo->realParameter[797] /* sink.medium.state.p PARAM */,0.0);
    tmp174 = LessEq(data->simulationInfo->realParameter[797] /* sink.medium.state.p PARAM */,100000000.0);
    if(!(tmp173 && tmp174))
    {
      tmp176 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[797] /* sink.medium.state.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp175),tmp176);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/SolidParticles/CarboHSP_ph/package.mo",71,3,71,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.medium.state.p >= 0.0 and sink.medium.state.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp177 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1627
type: ALGORITHM

  assert(liftSimple.fluid_b.p >= 0.0 and liftSimple.fluid_b.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= liftSimple.fluid_b.p <= 100000000.0, has value: " + String(liftSimple.fluid_b.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1627(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1627};
  modelica_boolean tmp178;
  modelica_boolean tmp179;
  static const MMC_DEFSTRINGLIT(tmp180,94,"Variable violating min/max constraint: 0.0 <= liftSimple.fluid_b.p <= 100000000.0, has value: ");
  modelica_string tmp181;
  static int tmp182 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp182)
  {
    tmp178 = GreaterEq(data->simulationInfo->realParameter[34] /* liftSimple.fluid_b.p PARAM */,0.0);
    tmp179 = LessEq(data->simulationInfo->realParameter[34] /* liftSimple.fluid_b.p PARAM */,100000000.0);
    if(!(tmp178 && tmp179))
    {
      tmp181 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[34] /* liftSimple.fluid_b.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp180),tmp181);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nliftSimple.fluid_b.p >= 0.0 and liftSimple.fluid_b.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp182 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1628
type: ALGORITHM

  assert(powerBlock.fluid_a.p >= 0.0 and powerBlock.fluid_a.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.fluid_a.p <= 100000000.0, has value: " + String(powerBlock.fluid_a.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1628(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1628};
  modelica_boolean tmp183;
  modelica_boolean tmp184;
  static const MMC_DEFSTRINGLIT(tmp185,94,"Variable violating min/max constraint: 0.0 <= powerBlock.fluid_a.p <= 100000000.0, has value: ");
  modelica_string tmp186;
  static int tmp187 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp187)
  {
    tmp183 = GreaterEq(data->simulationInfo->realParameter[72] /* powerBlock.fluid_a.p PARAM */,0.0);
    tmp184 = LessEq(data->simulationInfo->realParameter[72] /* powerBlock.fluid_a.p PARAM */,100000000.0);
    if(!(tmp183 && tmp184))
    {
      tmp186 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[72] /* powerBlock.fluid_a.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp185),tmp186);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.fluid_a.p >= 0.0 and powerBlock.fluid_a.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp187 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1629
type: ALGORITHM

  assert(powerBlock.fluid_b.p >= 0.0 and powerBlock.fluid_b.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= powerBlock.fluid_b.p <= 100000000.0, has value: " + String(powerBlock.fluid_b.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1629(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1629};
  modelica_boolean tmp188;
  modelica_boolean tmp189;
  static const MMC_DEFSTRINGLIT(tmp190,94,"Variable violating min/max constraint: 0.0 <= powerBlock.fluid_b.p <= 100000000.0, has value: ");
  modelica_string tmp191;
  static int tmp192 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp192)
  {
    tmp188 = GreaterEq(data->simulationInfo->realParameter[73] /* powerBlock.fluid_b.p PARAM */,0.0);
    tmp189 = LessEq(data->simulationInfo->realParameter[73] /* powerBlock.fluid_b.p PARAM */,100000000.0);
    if(!(tmp188 && tmp189))
    {
      tmp191 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[73] /* powerBlock.fluid_b.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp190),tmp191);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.fluid_b.p >= 0.0 and powerBlock.fluid_b.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp192 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1630
type: ALGORITHM

  assert(sink.ports[1].p >= 0.0 and sink.ports[1].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sink.ports[1].p <= 100000000.0, has value: " + String(sink.ports[1].p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1630(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1630};
  modelica_boolean tmp193;
  modelica_boolean tmp194;
  static const MMC_DEFSTRINGLIT(tmp195,89,"Variable violating min/max constraint: 0.0 <= sink.ports[1].p <= 100000000.0, has value: ");
  modelica_string tmp196;
  static int tmp197 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp197)
  {
    tmp193 = GreaterEq(data->simulationInfo->realParameter[799] /* sink.ports[1].p PARAM */,0.0);
    tmp194 = LessEq(data->simulationInfo->realParameter[799] /* sink.ports[1].p PARAM */,100000000.0);
    if(!(tmp193 && tmp194))
    {
      tmp196 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[799] /* sink.ports[1].p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp195),tmp196);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",15,5,15,79,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.ports[1].p >= 0.0 and sink.ports[1].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp197 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1631
type: ALGORITHM

  assert(sink.medium.p >= 0.0, "Variable violating min constraint: 0.0 <= sink.medium.p, has value: " + String(sink.medium.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1631(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1631};
  modelica_boolean tmp198;
  static const MMC_DEFSTRINGLIT(tmp199,68,"Variable violating min constraint: 0.0 <= sink.medium.p, has value: ");
  modelica_string tmp200;
  static int tmp201 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp201)
  {
    tmp198 = GreaterEq(data->simulationInfo->realParameter[796] /* sink.medium.p PARAM */,0.0);
    if(!tmp198)
    {
      tmp200 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[796] /* sink.medium.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp199),tmp200);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4477,7,4477,60,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.medium.p >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp201 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1632
type: ALGORITHM

  assert(sink.state.p >= 0.0 and sink.state.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sink.state.p <= 100000000.0, has value: " + String(sink.state.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1632(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1632};
  modelica_boolean tmp202;
  modelica_boolean tmp203;
  static const MMC_DEFSTRINGLIT(tmp204,86,"Variable violating min/max constraint: 0.0 <= sink.state.p <= 100000000.0, has value: ");
  modelica_string tmp205;
  static int tmp206 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp206)
  {
    tmp202 = GreaterEq(data->simulationInfo->realParameter[800] /* sink.state.p PARAM */,0.0);
    tmp203 = LessEq(data->simulationInfo->realParameter[800] /* sink.state.p PARAM */,100000000.0);
    if(!(tmp202 && tmp203))
    {
      tmp205 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[800] /* sink.state.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp204),tmp205);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/SolidParticles/CarboHSP_ph/package.mo",71,3,71,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.state.p >= 0.0 and sink.state.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp206 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1633
type: ALGORITHM

  assert(powerBlock.T_in_ref_blk >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.T_in_ref_blk, has value: " + String(powerBlock.T_in_ref_blk, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1633(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1633};
  modelica_boolean tmp207;
  static const MMC_DEFSTRINGLIT(tmp208,78,"Variable violating min constraint: 0.0 <= powerBlock.T_in_ref_blk, has value: ");
  modelica_string tmp209;
  static int tmp210 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp210)
  {
    tmp207 = GreaterEq(data->simulationInfo->realParameter[50] /* powerBlock.T_in_ref_blk PARAM */,0.0);
    if(!tmp207)
    {
      tmp209 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[50] /* powerBlock.T_in_ref_blk PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp208),tmp209);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/SurrogatesCO2PB.mo",34,3,34,50,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.T_in_ref_blk >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp210 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1634
type: ALGORITHM

  assert(p_high >= 0.0, "Variable violating min constraint: 0.0 <= p_high, has value: " + String(p_high, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1634(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1634};
  modelica_boolean tmp211;
  static const MMC_DEFSTRINGLIT(tmp212,61,"Variable violating min constraint: 0.0 <= p_high, has value: ");
  modelica_string tmp213;
  static int tmp214 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp214)
  {
    tmp211 = GreaterEq(data->simulationInfo->realParameter[42] /* p_high PARAM */,0.0);
    if(!tmp211)
    {
      tmp213 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[42] /* p_high PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp212),tmp213);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/sCO2-test-data/simulation_surrogate/sCO2SurrogatePBRig.mo",27,3,27,82,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\np_high >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp214 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1635
type: ALGORITHM

  assert(powerBlock.p_high >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.p_high, has value: " + String(powerBlock.p_high, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1635(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1635};
  modelica_boolean tmp215;
  static const MMC_DEFSTRINGLIT(tmp216,72,"Variable violating min constraint: 0.0 <= powerBlock.p_high, has value: ");
  modelica_string tmp217;
  static int tmp218 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp218)
  {
    tmp215 = GreaterEq(data->simulationInfo->realParameter[80] /* powerBlock.p_high PARAM */,0.0);
    if(!tmp215)
    {
      tmp217 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[80] /* powerBlock.p_high PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp216),tmp217);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/SurrogatesCO2PB.mo",35,3,35,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.p_high >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp218 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1636
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.liftSimple.eff >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.liftSimple.eff, has value: " + String(sCO2PBDesignPointCalculator.liftSimple.eff, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1636(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1636};
  modelica_boolean tmp219;
  static const MMC_DEFSTRINGLIT(tmp220,97,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.liftSimple.eff, has value: ");
  modelica_string tmp221;
  static int tmp222 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp222)
  {
    tmp219 = GreaterEq(data->simulationInfo->realParameter[109] /* sCO2PBDesignPointCalculator.liftSimple.eff PARAM */,0.0);
    if(!tmp219)
    {
      tmp221 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[109] /* sCO2PBDesignPointCalculator.liftSimple.eff PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp220),tmp221);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/Fluid/Pumps/LiftSimple.mo",16,2,16,64,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.liftSimple.eff >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp222 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1637
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.liftSimple.dh >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.liftSimple.dh, has value: " + String(sCO2PBDesignPointCalculator.liftSimple.dh, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1637(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1637};
  modelica_boolean tmp223;
  static const MMC_DEFSTRINGLIT(tmp224,96,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.liftSimple.dh, has value: ");
  modelica_string tmp225;
  static int tmp226 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp226)
  {
    tmp223 = GreaterEq(data->simulationInfo->realParameter[107] /* sCO2PBDesignPointCalculator.liftSimple.dh PARAM */,0.0);
    if(!tmp223)
    {
      tmp225 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[107] /* sCO2PBDesignPointCalculator.liftSimple.dh PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp224),tmp225);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/Fluid/Pumps/LiftSimple.mo",14,2,14,52,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.liftSimple.dh >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp226 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1638
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.X[5] >= 0.0 and sCO2PBDesignPointCalculator.sink.X[5] <= 1.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.X[5] <= 1.0, has value: " + String(sCO2PBDesignPointCalculator.sink.X[5], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1638(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1638};
  modelica_boolean tmp227;
  modelica_boolean tmp228;
  static const MMC_DEFSTRINGLIT(tmp229,103,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.X[5] <= 1.0, has value: ");
  modelica_string tmp230;
  static int tmp231 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp231)
  {
    tmp227 = GreaterEq(data->simulationInfo->realParameter[771] /* sCO2PBDesignPointCalculator.sink.X[5] PARAM */,0.0);
    tmp228 = LessEq(data->simulationInfo->realParameter[771] /* sCO2PBDesignPointCalculator.sink.X[5] PARAM */,1.0);
    if(!(tmp227 && tmp228))
    {
      tmp230 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[771] /* sCO2PBDesignPointCalculator.sink.X[5] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp229),tmp230);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.X[5] >= 0.0 and sCO2PBDesignPointCalculator.sink.X[5] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp231 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1639
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.X[4] >= 0.0 and sCO2PBDesignPointCalculator.sink.X[4] <= 1.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.X[4] <= 1.0, has value: " + String(sCO2PBDesignPointCalculator.sink.X[4], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1639(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1639};
  modelica_boolean tmp232;
  modelica_boolean tmp233;
  static const MMC_DEFSTRINGLIT(tmp234,103,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.X[4] <= 1.0, has value: ");
  modelica_string tmp235;
  static int tmp236 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp236)
  {
    tmp232 = GreaterEq(data->simulationInfo->realParameter[770] /* sCO2PBDesignPointCalculator.sink.X[4] PARAM */,0.0);
    tmp233 = LessEq(data->simulationInfo->realParameter[770] /* sCO2PBDesignPointCalculator.sink.X[4] PARAM */,1.0);
    if(!(tmp232 && tmp233))
    {
      tmp235 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[770] /* sCO2PBDesignPointCalculator.sink.X[4] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp234),tmp235);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.X[4] >= 0.0 and sCO2PBDesignPointCalculator.sink.X[4] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp236 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1640
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.X[3] >= 0.0 and sCO2PBDesignPointCalculator.sink.X[3] <= 1.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.X[3] <= 1.0, has value: " + String(sCO2PBDesignPointCalculator.sink.X[3], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1640(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1640};
  modelica_boolean tmp237;
  modelica_boolean tmp238;
  static const MMC_DEFSTRINGLIT(tmp239,103,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.X[3] <= 1.0, has value: ");
  modelica_string tmp240;
  static int tmp241 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp241)
  {
    tmp237 = GreaterEq(data->simulationInfo->realParameter[769] /* sCO2PBDesignPointCalculator.sink.X[3] PARAM */,0.0);
    tmp238 = LessEq(data->simulationInfo->realParameter[769] /* sCO2PBDesignPointCalculator.sink.X[3] PARAM */,1.0);
    if(!(tmp237 && tmp238))
    {
      tmp240 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[769] /* sCO2PBDesignPointCalculator.sink.X[3] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp239),tmp240);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.X[3] >= 0.0 and sCO2PBDesignPointCalculator.sink.X[3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp241 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1641
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.X[2] >= 0.0 and sCO2PBDesignPointCalculator.sink.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.X[2] <= 1.0, has value: " + String(sCO2PBDesignPointCalculator.sink.X[2], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1641(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1641};
  modelica_boolean tmp242;
  modelica_boolean tmp243;
  static const MMC_DEFSTRINGLIT(tmp244,103,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.X[2] <= 1.0, has value: ");
  modelica_string tmp245;
  static int tmp246 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp246)
  {
    tmp242 = GreaterEq(data->simulationInfo->realParameter[768] /* sCO2PBDesignPointCalculator.sink.X[2] PARAM */,0.0);
    tmp243 = LessEq(data->simulationInfo->realParameter[768] /* sCO2PBDesignPointCalculator.sink.X[2] PARAM */,1.0);
    if(!(tmp242 && tmp243))
    {
      tmp245 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[768] /* sCO2PBDesignPointCalculator.sink.X[2] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp244),tmp245);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.X[2] >= 0.0 and sCO2PBDesignPointCalculator.sink.X[2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp246 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1642
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.X[1] >= 0.0 and sCO2PBDesignPointCalculator.sink.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.X[1] <= 1.0, has value: " + String(sCO2PBDesignPointCalculator.sink.X[1], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1642(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1642};
  modelica_boolean tmp247;
  modelica_boolean tmp248;
  static const MMC_DEFSTRINGLIT(tmp249,103,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.X[1] <= 1.0, has value: ");
  modelica_string tmp250;
  static int tmp251 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp251)
  {
    tmp247 = GreaterEq(data->simulationInfo->realParameter[767] /* sCO2PBDesignPointCalculator.sink.X[1] PARAM */,0.0);
    tmp248 = LessEq(data->simulationInfo->realParameter[767] /* sCO2PBDesignPointCalculator.sink.X[1] PARAM */,1.0);
    if(!(tmp247 && tmp248))
    {
      tmp250 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[767] /* sCO2PBDesignPointCalculator.sink.X[1] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp249),tmp250);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.X[1] >= 0.0 and sCO2PBDesignPointCalculator.sink.X[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp251 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1643
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.h >= -10000000000.0 and sCO2PBDesignPointCalculator.sink.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.sink.h <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.sink.h, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1643(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1643};
  modelica_boolean tmp252;
  modelica_boolean tmp253;
  static const MMC_DEFSTRINGLIT(tmp254,121,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.sink.h <= 10000000000.0, has value: ");
  modelica_string tmp255;
  static int tmp256 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp256)
  {
    tmp252 = GreaterEq(data->simulationInfo->realParameter[773] /* sCO2PBDesignPointCalculator.sink.h PARAM */,-10000000000.0);
    tmp253 = LessEq(data->simulationInfo->realParameter[773] /* sCO2PBDesignPointCalculator.sink.h PARAM */,10000000000.0);
    if(!(tmp252 && tmp253))
    {
      tmp255 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[773] /* sCO2PBDesignPointCalculator.sink.h PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp254),tmp255);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",27,5,30,39,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.h >= -10000000000.0 and sCO2PBDesignPointCalculator.sink.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp256 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1644
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.d >= 0.0 and sCO2PBDesignPointCalculator.sink.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.d <= 100000.0, has value: " + String(sCO2PBDesignPointCalculator.sink.d, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1644(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1644};
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  static const MMC_DEFSTRINGLIT(tmp259,105,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.sink.d <= 100000.0, has value: ");
  modelica_string tmp260;
  static int tmp261 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp261)
  {
    tmp257 = GreaterEq(data->simulationInfo->realParameter[772] /* sCO2PBDesignPointCalculator.sink.d PARAM */,0.0);
    tmp258 = LessEq(data->simulationInfo->realParameter[772] /* sCO2PBDesignPointCalculator.sink.d PARAM */,100000.0);
    if(!(tmp257 && tmp258))
    {
      tmp260 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[772] /* sCO2PBDesignPointCalculator.sink.d PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp259),tmp260);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",13,3,20,44,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.d >= 0.0 and sCO2PBDesignPointCalculator.sink.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp261 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1645
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and sCO2PBDesignPointCalculator.sink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= sCO2PBDesignPointCalculator.sink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(sCO2PBDesignPointCalculator.sink.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1645(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1645};
  modelica_boolean tmp262;
  modelica_boolean tmp263;
  static const MMC_DEFSTRINGLIT(tmp264,205,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= sCO2PBDesignPointCalculator.sink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp265;
  static int tmp266 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp266)
  {
    tmp262 = GreaterEq(data->simulationInfo->integerParameter[17] /* sCO2PBDesignPointCalculator.sink.flowDirection PARAM */,1);
    tmp263 = LessEq(data->simulationInfo->integerParameter[17] /* sCO2PBDesignPointCalculator.sink.flowDirection PARAM */,3);
    if(!(tmp262 && tmp263))
    {
      tmp265 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[17] /* sCO2PBDesignPointCalculator.sink.flowDirection PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp264),tmp265);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",776,5,778,95,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and sCO2PBDesignPointCalculator.sink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp266 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1646
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.source.X[5] >= 0.0 and sCO2PBDesignPointCalculator.source.X[5] <= 1.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.source.X[5] <= 1.0, has value: " + String(sCO2PBDesignPointCalculator.source.X[5], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1646(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1646};
  modelica_boolean tmp267;
  modelica_boolean tmp268;
  static const MMC_DEFSTRINGLIT(tmp269,105,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.source.X[5] <= 1.0, has value: ");
  modelica_string tmp270;
  static int tmp271 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp271)
  {
    tmp267 = GreaterEq(data->simulationInfo->realParameter[784] /* sCO2PBDesignPointCalculator.source.X[5] PARAM */,0.0);
    tmp268 = LessEq(data->simulationInfo->realParameter[784] /* sCO2PBDesignPointCalculator.source.X[5] PARAM */,1.0);
    if(!(tmp267 && tmp268))
    {
      tmp270 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[784] /* sCO2PBDesignPointCalculator.source.X[5] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp269),tmp270);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.source.X[5] >= 0.0 and sCO2PBDesignPointCalculator.source.X[5] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp271 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1647
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.source.X[4] >= 0.0 and sCO2PBDesignPointCalculator.source.X[4] <= 1.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.source.X[4] <= 1.0, has value: " + String(sCO2PBDesignPointCalculator.source.X[4], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1647(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1647};
  modelica_boolean tmp272;
  modelica_boolean tmp273;
  static const MMC_DEFSTRINGLIT(tmp274,105,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.source.X[4] <= 1.0, has value: ");
  modelica_string tmp275;
  static int tmp276 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp276)
  {
    tmp272 = GreaterEq(data->simulationInfo->realParameter[783] /* sCO2PBDesignPointCalculator.source.X[4] PARAM */,0.0);
    tmp273 = LessEq(data->simulationInfo->realParameter[783] /* sCO2PBDesignPointCalculator.source.X[4] PARAM */,1.0);
    if(!(tmp272 && tmp273))
    {
      tmp275 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[783] /* sCO2PBDesignPointCalculator.source.X[4] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp274),tmp275);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.source.X[4] >= 0.0 and sCO2PBDesignPointCalculator.source.X[4] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp276 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1648
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.source.X[3] >= 0.0 and sCO2PBDesignPointCalculator.source.X[3] <= 1.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.source.X[3] <= 1.0, has value: " + String(sCO2PBDesignPointCalculator.source.X[3], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1648(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1648};
  modelica_boolean tmp277;
  modelica_boolean tmp278;
  static const MMC_DEFSTRINGLIT(tmp279,105,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.source.X[3] <= 1.0, has value: ");
  modelica_string tmp280;
  static int tmp281 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp281)
  {
    tmp277 = GreaterEq(data->simulationInfo->realParameter[782] /* sCO2PBDesignPointCalculator.source.X[3] PARAM */,0.0);
    tmp278 = LessEq(data->simulationInfo->realParameter[782] /* sCO2PBDesignPointCalculator.source.X[3] PARAM */,1.0);
    if(!(tmp277 && tmp278))
    {
      tmp280 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[782] /* sCO2PBDesignPointCalculator.source.X[3] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp279),tmp280);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.source.X[3] >= 0.0 and sCO2PBDesignPointCalculator.source.X[3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp281 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1649
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.source.X[2] >= 0.0 and sCO2PBDesignPointCalculator.source.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.source.X[2] <= 1.0, has value: " + String(sCO2PBDesignPointCalculator.source.X[2], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1649(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1649};
  modelica_boolean tmp282;
  modelica_boolean tmp283;
  static const MMC_DEFSTRINGLIT(tmp284,105,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.source.X[2] <= 1.0, has value: ");
  modelica_string tmp285;
  static int tmp286 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp286)
  {
    tmp282 = GreaterEq(data->simulationInfo->realParameter[781] /* sCO2PBDesignPointCalculator.source.X[2] PARAM */,0.0);
    tmp283 = LessEq(data->simulationInfo->realParameter[781] /* sCO2PBDesignPointCalculator.source.X[2] PARAM */,1.0);
    if(!(tmp282 && tmp283))
    {
      tmp285 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[781] /* sCO2PBDesignPointCalculator.source.X[2] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp284),tmp285);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.source.X[2] >= 0.0 and sCO2PBDesignPointCalculator.source.X[2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp286 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1650
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.source.X[1] >= 0.0 and sCO2PBDesignPointCalculator.source.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.source.X[1] <= 1.0, has value: " + String(sCO2PBDesignPointCalculator.source.X[1], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1650(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1650};
  modelica_boolean tmp287;
  modelica_boolean tmp288;
  static const MMC_DEFSTRINGLIT(tmp289,105,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.source.X[1] <= 1.0, has value: ");
  modelica_string tmp290;
  static int tmp291 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp291)
  {
    tmp287 = GreaterEq(data->simulationInfo->realParameter[780] /* sCO2PBDesignPointCalculator.source.X[1] PARAM */,0.0);
    tmp288 = LessEq(data->simulationInfo->realParameter[780] /* sCO2PBDesignPointCalculator.source.X[1] PARAM */,1.0);
    if(!(tmp287 && tmp288))
    {
      tmp290 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[780] /* sCO2PBDesignPointCalculator.source.X[1] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp289),tmp290);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.source.X[1] >= 0.0 and sCO2PBDesignPointCalculator.source.X[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp291 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1651
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.source.h >= -10000000000.0 and sCO2PBDesignPointCalculator.source.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.source.h <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.source.h, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1651(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1651};
  modelica_boolean tmp292;
  modelica_boolean tmp293;
  static const MMC_DEFSTRINGLIT(tmp294,123,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.source.h <= 10000000000.0, has value: ");
  modelica_string tmp295;
  static int tmp296 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp296)
  {
    tmp292 = GreaterEq(data->simulationInfo->realParameter[786] /* sCO2PBDesignPointCalculator.source.h PARAM */,-10000000000.0);
    tmp293 = LessEq(data->simulationInfo->realParameter[786] /* sCO2PBDesignPointCalculator.source.h PARAM */,10000000000.0);
    if(!(tmp292 && tmp293))
    {
      tmp295 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[786] /* sCO2PBDesignPointCalculator.source.h PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp294),tmp295);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",27,5,30,39,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.source.h >= -10000000000.0 and sCO2PBDesignPointCalculator.source.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp296 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1652
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.source.d >= 0.0 and sCO2PBDesignPointCalculator.source.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.source.d <= 100000.0, has value: " + String(sCO2PBDesignPointCalculator.source.d, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1652(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1652};
  modelica_boolean tmp297;
  modelica_boolean tmp298;
  static const MMC_DEFSTRINGLIT(tmp299,107,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.source.d <= 100000.0, has value: ");
  modelica_string tmp300;
  static int tmp301 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp301)
  {
    tmp297 = GreaterEq(data->simulationInfo->realParameter[785] /* sCO2PBDesignPointCalculator.source.d PARAM */,0.0);
    tmp298 = LessEq(data->simulationInfo->realParameter[785] /* sCO2PBDesignPointCalculator.source.d PARAM */,100000.0);
    if(!(tmp297 && tmp298))
    {
      tmp300 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[785] /* sCO2PBDesignPointCalculator.source.d PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp299),tmp300);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",13,3,20,44,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.source.d >= 0.0 and sCO2PBDesignPointCalculator.source.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp301 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1653
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.source.p >= 0.0 and sCO2PBDesignPointCalculator.source.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.source.p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.source.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1653(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1653};
  modelica_boolean tmp302;
  modelica_boolean tmp303;
  static const MMC_DEFSTRINGLIT(tmp304,110,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.source.p <= 100000000.0, has value: ");
  modelica_string tmp305;
  static int tmp306 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp306)
  {
    tmp302 = GreaterEq(data->simulationInfo->realParameter[787] /* sCO2PBDesignPointCalculator.source.p PARAM */,0.0);
    tmp303 = LessEq(data->simulationInfo->realParameter[787] /* sCO2PBDesignPointCalculator.source.p PARAM */,100000000.0);
    if(!(tmp302 && tmp303))
    {
      tmp305 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[787] /* sCO2PBDesignPointCalculator.source.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp304),tmp305);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",10,5,12,42,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.source.p >= 0.0 and sCO2PBDesignPointCalculator.source.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp306 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1654
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.source.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and sCO2PBDesignPointCalculator.source.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= sCO2PBDesignPointCalculator.source.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(sCO2PBDesignPointCalculator.source.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1654(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1654};
  modelica_boolean tmp307;
  modelica_boolean tmp308;
  static const MMC_DEFSTRINGLIT(tmp309,207,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= sCO2PBDesignPointCalculator.source.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp310;
  static int tmp311 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp311)
  {
    tmp307 = GreaterEq(data->simulationInfo->integerParameter[19] /* sCO2PBDesignPointCalculator.source.flowDirection PARAM */,1);
    tmp308 = LessEq(data->simulationInfo->integerParameter[19] /* sCO2PBDesignPointCalculator.source.flowDirection PARAM */,3);
    if(!(tmp307 && tmp308))
    {
      tmp310 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[19] /* sCO2PBDesignPointCalculator.source.flowDirection PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp309),tmp310);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",776,5,778,95,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.source.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and sCO2PBDesignPointCalculator.source.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp311 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1655
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.h >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.h <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.h, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1655(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1655};
  modelica_boolean tmp312;
  modelica_boolean tmp313;
  static const MMC_DEFSTRINGLIT(tmp314,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.h <= 10000000000.0, has value: ");
  modelica_string tmp315;
  static int tmp316 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp316)
  {
    tmp312 = GreaterEq(data->simulationInfo->realParameter[738] /* sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.h PARAM */,-10000000000.0);
    tmp313 = LessEq(data->simulationInfo->realParameter[738] /* sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.h PARAM */,10000000000.0);
    if(!(tmp312 && tmp313))
    {
      tmp315 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[738] /* sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.h PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp314),tmp315);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/SolidParticles/CarboHSP_ph/package.mo",72,3,72,41,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.h >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp316 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1656
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1656(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1656};
  modelica_boolean tmp317;
  modelica_boolean tmp318;
  static const MMC_DEFSTRINGLIT(tmp319,131,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.p <= 100000000.0, has value: ");
  modelica_string tmp320;
  static int tmp321 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp321)
  {
    tmp317 = GreaterEq(data->simulationInfo->realParameter[739] /* sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.p PARAM */,0.0);
    tmp318 = LessEq(data->simulationInfo->realParameter[739] /* sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.p PARAM */,100000000.0);
    if(!(tmp317 && tmp318))
    {
      tmp320 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[739] /* sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp319),tmp320);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/SolidParticles/CarboHSP_ph/package.mo",71,3,71,51,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.state_HTF_in_des.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp321 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1657
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.pinch_recuperator >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.pinch_recuperator, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.pinch_recuperator, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1657(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1657};
  modelica_boolean tmp322;
  static const MMC_DEFSTRINGLIT(tmp323,111,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.pinch_recuperator, has value: ");
  modelica_string tmp324;
  static int tmp325 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp325)
  {
    tmp322 = GreaterEq(data->simulationInfo->realParameter[707] /* sCO2PBDesignPointCalculator.powerBlock.pinch_recuperator PARAM */,0.0);
    if(!tmp322)
    {
      tmp324 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[707] /* sCO2PBDesignPointCalculator.powerBlock.pinch_recuperator PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp323),tmp324);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",1948,7,1948,53,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.pinch_recuperator >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp325 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1658
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.reCompressor.phi_opt >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.phi_opt, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.reCompressor.phi_opt, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1658(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1658};
  modelica_boolean tmp326;
  static const MMC_DEFSTRINGLIT(tmp327,114,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.phi_opt, has value: ");
  modelica_string tmp328;
  static int tmp329 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp329)
  {
    tmp326 = GreaterEq(data->simulationInfo->realParameter[729] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.phi_opt PARAM */,0.0);
    if(!tmp326)
    {
      tmp328 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[729] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.phi_opt PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp327),tmp328);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",600,4,600,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.reCompressor.phi_opt >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp329 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1659
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.p_high >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.p_high, has value: " + String(sCO2PBDesignPointCalculator.p_high, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1659(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1659};
  modelica_boolean tmp330;
  static const MMC_DEFSTRINGLIT(tmp331,89,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.p_high, has value: ");
  modelica_string tmp332;
  static int tmp333 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp333)
  {
    tmp330 = GreaterEq(data->simulationInfo->realParameter[118] /* sCO2PBDesignPointCalculator.p_high PARAM */,0.0);
    if(!tmp330)
    {
      tmp332 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[118] /* sCO2PBDesignPointCalculator.p_high PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp331),tmp332);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2PBCalculator_Using_JPidea.mo",28,3,28,82,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.p_high >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp333 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1660
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.p_high >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.p_high, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.p_high, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1660(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1660};
  modelica_boolean tmp334;
  static const MMC_DEFSTRINGLIT(tmp335,100,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.p_high, has value: ");
  modelica_string tmp336;
  static int tmp337 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp337)
  {
    tmp334 = GreaterEq(data->simulationInfo->realParameter[704] /* sCO2PBDesignPointCalculator.powerBlock.p_high PARAM */,0.0);
    if(!tmp334)
    {
      tmp336 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[704] /* sCO2PBDesignPointCalculator.powerBlock.p_high PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp335),tmp336);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",1953,7,1953,87,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.p_high >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp337 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1661
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_high_des >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_high_des, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_high_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1661(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1661};
  modelica_boolean tmp338;
  static const MMC_DEFSTRINGLIT(tmp339,117,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_high_des, has value: ");
  modelica_string tmp340;
  static int tmp341 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp341)
  {
    tmp338 = GreaterEq(data->simulationInfo->realParameter[726] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_high_des PARAM */,0.0);
    if(!tmp338)
    {
      tmp340 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[726] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_high_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp339),tmp340);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",599,4,599,60,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.reCompressor.p_high_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp341 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1662
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.reCompressor.T_in_des >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.T_in_des, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.reCompressor.T_in_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1662(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1662};
  modelica_boolean tmp342;
  static const MMC_DEFSTRINGLIT(tmp343,115,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.T_in_des, has value: ");
  modelica_string tmp344;
  static int tmp345 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp345)
  {
    tmp342 = GreaterEq(data->simulationInfo->realParameter[719] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.T_in_des PARAM */,0.0);
    if(!tmp342)
    {
      tmp344 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[719] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.T_in_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp343),tmp344);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",598,4,598,127,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.reCompressor.T_in_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp345 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1663
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.reCompressor.PR >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.PR, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.reCompressor.PR, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1663(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1663};
  modelica_boolean tmp346;
  static const MMC_DEFSTRINGLIT(tmp347,109,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.PR, has value: ");
  modelica_string tmp348;
  static int tmp349 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp349)
  {
    tmp346 = GreaterEq(data->simulationInfo->realParameter[717] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.PR PARAM */,0.0);
    if(!tmp346)
    {
      tmp348 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[717] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.PR PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp347),tmp348);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",596,4,596,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.reCompressor.PR >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp349 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1664
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_design >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_design, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_design, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1664(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1664};
  modelica_boolean tmp350;
  static const MMC_DEFSTRINGLIT(tmp351,117,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_design, has value: ");
  modelica_string tmp352;
  static int tmp353 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp353)
  {
    tmp350 = GreaterEq(data->simulationInfo->realParameter[722] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_design PARAM */,0.0);
    if(!tmp350)
    {
      tmp352 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[722] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_design PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp351),tmp352);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",594,4,594,95,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_design >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp353 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1665
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.T_in_ref_blk >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.T_in_ref_blk, has value: " + String(sCO2PBDesignPointCalculator.T_in_ref_blk, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1665(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1665};
  modelica_boolean tmp354;
  static const MMC_DEFSTRINGLIT(tmp355,95,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.T_in_ref_blk, has value: ");
  modelica_string tmp356;
  static int tmp357 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp357)
  {
    tmp354 = GreaterEq(data->simulationInfo->realParameter[100] /* sCO2PBDesignPointCalculator.T_in_ref_blk PARAM */,0.0);
    if(!tmp354)
    {
      tmp356 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[100] /* sCO2PBDesignPointCalculator.T_in_ref_blk PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp355),tmp356);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2PBCalculator_Using_JPidea.mo",27,3,27,50,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.T_in_ref_blk >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp357 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1666
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.T_HTF_in_des >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.T_HTF_in_des, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.T_HTF_in_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1666(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1666};
  modelica_boolean tmp358;
  static const MMC_DEFSTRINGLIT(tmp359,106,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.T_HTF_in_des, has value: ");
  modelica_string tmp360;
  static int tmp361 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp361)
  {
    tmp358 = GreaterEq(data->simulationInfo->realParameter[406] /* sCO2PBDesignPointCalculator.powerBlock.T_HTF_in_des PARAM */,0.0);
    if(!tmp358)
    {
      tmp360 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[406] /* sCO2PBDesignPointCalculator.powerBlock.T_HTF_in_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp359),tmp360);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",1984,7,1984,72,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.T_HTF_in_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp361 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1667
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.T_in_HTF_des >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.T_in_HTF_des, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.T_in_HTF_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1667(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1667};
  modelica_boolean tmp362;
  static const MMC_DEFSTRINGLIT(tmp363,116,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.T_in_HTF_des, has value: ");
  modelica_string tmp364;
  static int tmp365 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp365)
  {
    tmp362 = GreaterEq(data->simulationInfo->realParameter[558] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_in_HTF_des PARAM */,0.0);
    if(!tmp362)
    {
      tmp364 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[558] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_in_HTF_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp363),tmp364);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2266,7,2266,68,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.T_in_HTF_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp365 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1668
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.T_cold_set >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.T_cold_set, has value: " + String(sCO2PBDesignPointCalculator.T_cold_set, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1668(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1668};
  modelica_boolean tmp366;
  static const MMC_DEFSTRINGLIT(tmp367,93,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.T_cold_set, has value: ");
  modelica_string tmp368;
  static int tmp369 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp369)
  {
    tmp366 = GreaterEq(data->simulationInfo->realParameter[99] /* sCO2PBDesignPointCalculator.T_cold_set PARAM */,0.0);
    if(!tmp366)
    {
      tmp368 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[99] /* sCO2PBDesignPointCalculator.T_cold_set PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp367),tmp368);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2PBCalculator_Using_JPidea.mo",32,3,32,69,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.T_cold_set >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp369 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1669
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.T_HTF_out >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.T_HTF_out, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.T_HTF_out, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1669(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1669};
  modelica_boolean tmp370;
  static const MMC_DEFSTRINGLIT(tmp371,103,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.T_HTF_out, has value: ");
  modelica_string tmp372;
  static int tmp373 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp373)
  {
    tmp370 = GreaterEq(data->simulationInfo->realParameter[407] /* sCO2PBDesignPointCalculator.powerBlock.T_HTF_out PARAM */,0.0);
    if(!tmp370)
    {
      tmp372 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[407] /* sCO2PBDesignPointCalculator.powerBlock.T_HTF_out PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp371),tmp372);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",1950,7,1950,50,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.T_HTF_out >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp373 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1670
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.T_out_HTF_des >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.T_out_HTF_des, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.T_out_HTF_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1670(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1670};
  modelica_boolean tmp374;
  static const MMC_DEFSTRINGLIT(tmp375,117,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.T_out_HTF_des, has value: ");
  modelica_string tmp376;
  static int tmp377 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp377)
  {
    tmp374 = GreaterEq(data->simulationInfo->realParameter[560] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_out_HTF_des PARAM */,0.0);
    if(!tmp374)
    {
      tmp376 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[560] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_out_HTF_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp375),tmp376);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2267,7,2267,68,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.T_out_HTF_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp377 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1671
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.T_out_CO2_des >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.T_out_CO2_des, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.T_out_CO2_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1671(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1671};
  modelica_boolean tmp378;
  static const MMC_DEFSTRINGLIT(tmp379,117,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.T_out_CO2_des, has value: ");
  modelica_string tmp380;
  static int tmp381 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp381)
  {
    tmp378 = GreaterEq(data->simulationInfo->realParameter[559] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_out_CO2_des PARAM */,0.0);
    if(!tmp378)
    {
      tmp380 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[559] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_out_CO2_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp379),tmp380);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2269,4,2269,73,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.T_out_CO2_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp381 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1672
type: ALGORITHM

  assert(blk_T_amb_des >= 0.0, "Variable violating min constraint: 0.0 <= blk_T_amb_des, has value: " + String(blk_T_amb_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1672(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1672};
  modelica_boolean tmp382;
  static const MMC_DEFSTRINGLIT(tmp383,68,"Variable violating min constraint: 0.0 <= blk_T_amb_des, has value: ");
  modelica_string tmp384;
  static int tmp385 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp385)
  {
    tmp382 = GreaterEq(data->simulationInfo->realParameter[26] /* blk_T_amb_des PARAM */,0.0);
    if(!tmp382)
    {
      tmp384 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[26] /* blk_T_amb_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp383),tmp384);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/sCO2-test-data/simulation_surrogate/sCO2SurrogatePBRig.mo",42,3,42,57,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nblk_T_amb_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp385 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1673
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.blk_T_amb_des >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.blk_T_amb_des, has value: " + String(sCO2PBDesignPointCalculator.blk_T_amb_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1673(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1673};
  modelica_boolean tmp386;
  static const MMC_DEFSTRINGLIT(tmp387,96,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.blk_T_amb_des, has value: ");
  modelica_string tmp388;
  static int tmp389 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp389)
  {
    tmp386 = GreaterEq(data->simulationInfo->realParameter[102] /* sCO2PBDesignPointCalculator.blk_T_amb_des PARAM */,0.0);
    if(!tmp386)
    {
      tmp388 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[102] /* sCO2PBDesignPointCalculator.blk_T_amb_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp387),tmp388);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2PBCalculator_Using_JPidea.mo",42,3,42,57,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.blk_T_amb_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp389 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1674
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.T_amb_des >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.T_amb_des, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.T_amb_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1674(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1674};
  modelica_boolean tmp390;
  static const MMC_DEFSTRINGLIT(tmp391,103,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.T_amb_des, has value: ");
  modelica_string tmp392;
  static int tmp393 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp393)
  {
    tmp390 = GreaterEq(data->simulationInfo->realParameter[409] /* sCO2PBDesignPointCalculator.powerBlock.T_amb_des PARAM */,0.0);
    if(!tmp390)
    {
      tmp392 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[409] /* sCO2PBDesignPointCalculator.powerBlock.T_amb_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp391),tmp392);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",1955,7,1955,90,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.T_amb_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp393 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1675
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.turbine.T_amb >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.turbine.T_amb, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.turbine.T_amb, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1675(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1675};
  modelica_boolean tmp394;
  static const MMC_DEFSTRINGLIT(tmp395,107,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.turbine.T_amb, has value: ");
  modelica_string tmp396;
  static int tmp397 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp397)
  {
    tmp394 = GreaterEq(data->simulationInfo->realParameter[744] /* sCO2PBDesignPointCalculator.powerBlock.turbine.T_amb PARAM */,0.0);
    if(!tmp394)
    {
      tmp396 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[744] /* sCO2PBDesignPointCalculator.powerBlock.turbine.T_amb PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp395),tmp396);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",140,4,140,85,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.turbine.T_amb >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp397 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1676
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.turbine.PR >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.turbine.PR, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.turbine.PR, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1676(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1676};
  modelica_boolean tmp398;
  static const MMC_DEFSTRINGLIT(tmp399,104,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.turbine.PR, has value: ");
  modelica_string tmp400;
  static int tmp401 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp401)
  {
    tmp398 = GreaterEq(data->simulationInfo->realParameter[743] /* sCO2PBDesignPointCalculator.powerBlock.turbine.PR PARAM */,0.0);
    if(!tmp398)
    {
      tmp400 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[743] /* sCO2PBDesignPointCalculator.powerBlock.turbine.PR PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp399),tmp400);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",139,4,139,65,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.turbine.PR >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp401 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1677
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.eta_turb >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.eta_turb, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.eta_turb, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1677(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1677};
  modelica_boolean tmp402;
  static const MMC_DEFSTRINGLIT(tmp403,102,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.eta_turb, has value: ");
  modelica_string tmp404;
  static int tmp405 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp405)
  {
    tmp402 = GreaterEq(data->simulationInfo->realParameter[523] /* sCO2PBDesignPointCalculator.powerBlock.eta_turb PARAM */,0.0);
    if(!tmp402)
    {
      tmp404 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[523] /* sCO2PBDesignPointCalculator.powerBlock.eta_turb PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp403),tmp404);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",1972,7,1972,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.eta_turb >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp405 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1678
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.turbine.eta_design >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.turbine.eta_design, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.turbine.eta_design, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1678(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1678};
  modelica_boolean tmp406;
  static const MMC_DEFSTRINGLIT(tmp407,112,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.turbine.eta_design, has value: ");
  modelica_string tmp408;
  static int tmp409 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp409)
  {
    tmp406 = GreaterEq(data->simulationInfo->realParameter[747] /* sCO2PBDesignPointCalculator.powerBlock.turbine.eta_design PARAM */,0.0);
    if(!tmp406)
    {
      tmp408 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[747] /* sCO2PBDesignPointCalculator.powerBlock.turbine.eta_design PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp407),tmp408);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",138,4,138,97,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.turbine.eta_design >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp409 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1679
type: ALGORITHM

  assert(T_low >= 0.0, "Variable violating min constraint: 0.0 <= T_low, has value: " + String(T_low, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1679(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1679};
  modelica_boolean tmp410;
  static const MMC_DEFSTRINGLIT(tmp411,60,"Variable violating min constraint: 0.0 <= T_low, has value: ");
  modelica_string tmp412;
  static int tmp413 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp413)
  {
    tmp410 = GreaterEq(data->simulationInfo->realParameter[7] /* T_low PARAM */,0.0);
    if(!tmp410)
    {
      tmp412 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[7] /* T_low PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp411),tmp412);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/sCO2-test-data/simulation_surrogate/sCO2SurrogatePBRig.mo",41,3,41,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nT_low >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp413 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1680
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.T_low >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.T_low, has value: " + String(sCO2PBDesignPointCalculator.T_low, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1680(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1680};
  modelica_boolean tmp414;
  static const MMC_DEFSTRINGLIT(tmp415,88,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.T_low, has value: ");
  modelica_string tmp416;
  static int tmp417 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp417)
  {
    tmp414 = GreaterEq(data->simulationInfo->realParameter[101] /* sCO2PBDesignPointCalculator.T_low PARAM */,0.0);
    if(!tmp414)
    {
      tmp416 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[101] /* sCO2PBDesignPointCalculator.T_low PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp415),tmp416);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2PBCalculator_Using_JPidea.mo",41,3,41,93,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.T_low >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp417 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1681
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.T_low >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.T_low, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.T_low, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1681(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1681};
  modelica_boolean tmp418;
  static const MMC_DEFSTRINGLIT(tmp419,99,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.T_low, has value: ");
  modelica_string tmp420;
  static int tmp421 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp421)
  {
    tmp418 = GreaterEq(data->simulationInfo->realParameter[410] /* sCO2PBDesignPointCalculator.powerBlock.T_low PARAM */,0.0);
    if(!tmp418)
    {
      tmp420 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[410] /* sCO2PBDesignPointCalculator.powerBlock.T_low PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp419),tmp420);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",1982,7,1982,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.T_low >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp421 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1682
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.cooler.T_low >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.cooler.T_low, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.cooler.T_low, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1682(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1682};
  modelica_boolean tmp422;
  static const MMC_DEFSTRINGLIT(tmp423,106,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.cooler.T_low, has value: ");
  modelica_string tmp424;
  static int tmp425 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp425)
  {
    tmp422 = GreaterEq(data->simulationInfo->realParameter[436] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_low PARAM */,0.0);
    if(!tmp422)
    {
      tmp424 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[436] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_low PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp423),tmp424);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",385,4,385,64,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.cooler.T_low >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp425 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1683
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1683(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1683};
  modelica_boolean tmp426;
  static const MMC_DEFSTRINGLIT(tmp427,110,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des, has value: ");
  modelica_string tmp428;
  static int tmp429 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp429)
  {
    tmp426 = GreaterEq(data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */,0.0);
    if(!tmp426)
    {
      tmp428 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[435] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp427),tmp428);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",383,4,383,116,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.cooler.T_amb_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp429 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1684
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi_opt >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi_opt, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi_opt, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1684(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1684};
  modelica_boolean tmp430;
  static const MMC_DEFSTRINGLIT(tmp431,116,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi_opt, has value: ");
  modelica_string tmp432;
  static int tmp433 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp433)
  {
    tmp430 = GreaterEq(data->simulationInfo->realParameter[696] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi_opt PARAM */,0.0);
    if(!tmp430)
    {
      tmp432 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[696] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi_opt PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp431),tmp432);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",600,4,600,81,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi_opt >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp433 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1685
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_high_des >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_high_des, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_high_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1685(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1685};
  modelica_boolean tmp434;
  static const MMC_DEFSTRINGLIT(tmp435,119,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_high_des, has value: ");
  modelica_string tmp436;
  static int tmp437 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp437)
  {
    tmp434 = GreaterEq(data->simulationInfo->realParameter[693] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_high_des PARAM */,0.0);
    if(!tmp434)
    {
      tmp436 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[693] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_high_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp435),tmp436);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",599,4,599,60,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.mainCompressor.p_high_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp437 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1686
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.T_in_des >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.T_in_des, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.T_in_des, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1686(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1686};
  modelica_boolean tmp438;
  static const MMC_DEFSTRINGLIT(tmp439,117,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.T_in_des, has value: ");
  modelica_string tmp440;
  static int tmp441 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp441)
  {
    tmp438 = GreaterEq(data->simulationInfo->realParameter[686] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.T_in_des PARAM */,0.0);
    if(!tmp438)
    {
      tmp440 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[686] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.T_in_des PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp439),tmp440);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",598,4,598,127,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.mainCompressor.T_in_des >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp441 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1687
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.PR >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.PR, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.PR, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1687(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1687};
  modelica_boolean tmp442;
  static const MMC_DEFSTRINGLIT(tmp443,111,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.PR, has value: ");
  modelica_string tmp444;
  static int tmp445 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp445)
  {
    tmp442 = GreaterEq(data->simulationInfo->realParameter[684] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.PR PARAM */,0.0);
    if(!tmp442)
    {
      tmp444 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[684] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.PR PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp443),tmp444);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",596,4,596,58,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.mainCompressor.PR >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp445 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1688
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.eta_comp_main >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.eta_comp_main, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.eta_comp_main, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1688(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1688};
  modelica_boolean tmp446;
  static const MMC_DEFSTRINGLIT(tmp447,107,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.eta_comp_main, has value: ");
  modelica_string tmp448;
  static int tmp449 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp449)
  {
    tmp446 = GreaterEq(data->simulationInfo->realParameter[518] /* sCO2PBDesignPointCalculator.powerBlock.eta_comp_main PARAM */,0.0);
    if(!tmp446)
    {
      tmp448 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[518] /* sCO2PBDesignPointCalculator.powerBlock.eta_comp_main PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp447),tmp448);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",1968,7,1968,101,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.eta_comp_main >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp449 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1689
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_design >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_design, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_design, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1689(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1689};
  modelica_boolean tmp450;
  static const MMC_DEFSTRINGLIT(tmp451,119,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_design, has value: ");
  modelica_string tmp452;
  static int tmp453 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp453)
  {
    tmp450 = GreaterEq(data->simulationInfo->realParameter[689] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_design PARAM */,0.0);
    if(!tmp450)
    {
      tmp452 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[689] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_design PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp451),tmp452);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",594,4,594,95,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_design >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp453 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1690
type: ALGORITHM

  assert(eta_motor >= 0.0, "Variable violating min constraint: 0.0 <= eta_motor, has value: " + String(eta_motor, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1690(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1690};
  modelica_boolean tmp454;
  static const MMC_DEFSTRINGLIT(tmp455,64,"Variable violating min constraint: 0.0 <= eta_motor, has value: ");
  modelica_string tmp456;
  static int tmp457 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp457)
  {
    tmp454 = GreaterEq(data->simulationInfo->realParameter[28] /* eta_motor PARAM */,0.0);
    if(!tmp454)
    {
      tmp456 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[28] /* eta_motor PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp455),tmp456);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/sCO2-test-data/simulation_surrogate/sCO2SurrogatePBRig.mo",39,3,39,74,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neta_motor >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp457 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1691
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.eta_motor >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.eta_motor, has value: " + String(sCO2PBDesignPointCalculator.eta_motor, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1691(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1691};
  modelica_boolean tmp458;
  static const MMC_DEFSTRINGLIT(tmp459,92,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.eta_motor, has value: ");
  modelica_string tmp460;
  static int tmp461 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp461)
  {
    tmp458 = GreaterEq(data->simulationInfo->realParameter[104] /* sCO2PBDesignPointCalculator.eta_motor PARAM */,0.0);
    if(!tmp458)
    {
      tmp460 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[104] /* sCO2PBDesignPointCalculator.eta_motor PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp459),tmp460);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2PBCalculator_Using_JPidea.mo",48,3,48,77,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.eta_motor >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp461 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1692
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.eta_motor >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.eta_motor, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.eta_motor, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1692(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1692};
  modelica_boolean tmp462;
  static const MMC_DEFSTRINGLIT(tmp463,103,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.eta_motor, has value: ");
  modelica_string tmp464;
  static int tmp465 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp465)
  {
    tmp462 = GreaterEq(data->simulationInfo->realParameter[521] /* sCO2PBDesignPointCalculator.powerBlock.eta_motor PARAM */,0.0);
    if(!tmp462)
    {
      tmp464 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[521] /* sCO2PBDesignPointCalculator.powerBlock.eta_motor PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp463),tmp464);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",1974,7,1974,78,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.eta_motor >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp465 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1693
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.eta_comp_re >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.eta_comp_re, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.eta_comp_re, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1693(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1693};
  modelica_boolean tmp466;
  static const MMC_DEFSTRINGLIT(tmp467,105,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.eta_comp_re, has value: ");
  modelica_string tmp468;
  static int tmp469 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp469)
  {
    tmp466 = GreaterEq(data->simulationInfo->realParameter[519] /* sCO2PBDesignPointCalculator.powerBlock.eta_comp_re PARAM */,0.0);
    if(!tmp466)
    {
      tmp468 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[519] /* sCO2PBDesignPointCalculator.powerBlock.eta_comp_re PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp467),tmp468);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",1970,7,1970,100,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.eta_comp_re >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp469 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1694
type: ALGORITHM

  assert(liftSimple.eff >= 0.0, "Variable violating min constraint: 0.0 <= liftSimple.eff, has value: " + String(liftSimple.eff, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1694(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1694};
  modelica_boolean tmp470;
  static const MMC_DEFSTRINGLIT(tmp471,69,"Variable violating min constraint: 0.0 <= liftSimple.eff, has value: ");
  modelica_string tmp472;
  static int tmp473 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp473)
  {
    tmp470 = GreaterEq(data->simulationInfo->realParameter[33] /* liftSimple.eff PARAM */,0.0);
    if(!tmp470)
    {
      tmp472 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[33] /* liftSimple.eff PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp471),tmp472);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/Fluid/Pumps/LiftSimple.mo",16,2,16,64,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nliftSimple.eff >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp473 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1695
type: ALGORITHM

  assert(liftSimple.dh >= 0.0, "Variable violating min constraint: 0.0 <= liftSimple.dh, has value: " + String(liftSimple.dh, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1695(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1695};
  modelica_boolean tmp474;
  static const MMC_DEFSTRINGLIT(tmp475,68,"Variable violating min constraint: 0.0 <= liftSimple.dh, has value: ");
  modelica_string tmp476;
  static int tmp477 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp477)
  {
    tmp474 = GreaterEq(data->simulationInfo->realParameter[31] /* liftSimple.dh PARAM */,0.0);
    if(!tmp474)
    {
      tmp476 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[31] /* liftSimple.dh PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp475),tmp476);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/Fluid/Pumps/LiftSimple.mo",14,2,14,52,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nliftSimple.dh >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp477 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1696
type: ALGORITHM

  assert(sink.X[5] >= 0.0 and sink.X[5] <= 1.0, "Variable violating min/max constraint: 0.0 <= sink.X[5] <= 1.0, has value: " + String(sink.X[5], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1696(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1696};
  modelica_boolean tmp478;
  modelica_boolean tmp479;
  static const MMC_DEFSTRINGLIT(tmp480,75,"Variable violating min/max constraint: 0.0 <= sink.X[5] <= 1.0, has value: ");
  modelica_string tmp481;
  static int tmp482 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp482)
  {
    tmp478 = GreaterEq(data->simulationInfo->realParameter[793] /* sink.X[5] PARAM */,0.0);
    tmp479 = LessEq(data->simulationInfo->realParameter[793] /* sink.X[5] PARAM */,1.0);
    if(!(tmp478 && tmp479))
    {
      tmp481 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[793] /* sink.X[5] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp480),tmp481);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.X[5] >= 0.0 and sink.X[5] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp482 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1697
type: ALGORITHM

  assert(sink.X[4] >= 0.0 and sink.X[4] <= 1.0, "Variable violating min/max constraint: 0.0 <= sink.X[4] <= 1.0, has value: " + String(sink.X[4], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1697(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1697};
  modelica_boolean tmp483;
  modelica_boolean tmp484;
  static const MMC_DEFSTRINGLIT(tmp485,75,"Variable violating min/max constraint: 0.0 <= sink.X[4] <= 1.0, has value: ");
  modelica_string tmp486;
  static int tmp487 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp487)
  {
    tmp483 = GreaterEq(data->simulationInfo->realParameter[792] /* sink.X[4] PARAM */,0.0);
    tmp484 = LessEq(data->simulationInfo->realParameter[792] /* sink.X[4] PARAM */,1.0);
    if(!(tmp483 && tmp484))
    {
      tmp486 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[792] /* sink.X[4] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp485),tmp486);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.X[4] >= 0.0 and sink.X[4] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp487 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1698
type: ALGORITHM

  assert(sink.X[3] >= 0.0 and sink.X[3] <= 1.0, "Variable violating min/max constraint: 0.0 <= sink.X[3] <= 1.0, has value: " + String(sink.X[3], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1698(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1698};
  modelica_boolean tmp488;
  modelica_boolean tmp489;
  static const MMC_DEFSTRINGLIT(tmp490,75,"Variable violating min/max constraint: 0.0 <= sink.X[3] <= 1.0, has value: ");
  modelica_string tmp491;
  static int tmp492 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp492)
  {
    tmp488 = GreaterEq(data->simulationInfo->realParameter[791] /* sink.X[3] PARAM */,0.0);
    tmp489 = LessEq(data->simulationInfo->realParameter[791] /* sink.X[3] PARAM */,1.0);
    if(!(tmp488 && tmp489))
    {
      tmp491 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[791] /* sink.X[3] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp490),tmp491);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.X[3] >= 0.0 and sink.X[3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp492 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1699
type: ALGORITHM

  assert(sink.X[2] >= 0.0 and sink.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= sink.X[2] <= 1.0, has value: " + String(sink.X[2], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1699(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1699};
  modelica_boolean tmp493;
  modelica_boolean tmp494;
  static const MMC_DEFSTRINGLIT(tmp495,75,"Variable violating min/max constraint: 0.0 <= sink.X[2] <= 1.0, has value: ");
  modelica_string tmp496;
  static int tmp497 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp497)
  {
    tmp493 = GreaterEq(data->simulationInfo->realParameter[790] /* sink.X[2] PARAM */,0.0);
    tmp494 = LessEq(data->simulationInfo->realParameter[790] /* sink.X[2] PARAM */,1.0);
    if(!(tmp493 && tmp494))
    {
      tmp496 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[790] /* sink.X[2] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp495),tmp496);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.X[2] >= 0.0 and sink.X[2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp497 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1700
type: ALGORITHM

  assert(sink.X[1] >= 0.0 and sink.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= sink.X[1] <= 1.0, has value: " + String(sink.X[1], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1700(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1700};
  modelica_boolean tmp498;
  modelica_boolean tmp499;
  static const MMC_DEFSTRINGLIT(tmp500,75,"Variable violating min/max constraint: 0.0 <= sink.X[1] <= 1.0, has value: ");
  modelica_string tmp501;
  static int tmp502 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp502)
  {
    tmp498 = GreaterEq(data->simulationInfo->realParameter[789] /* sink.X[1] PARAM */,0.0);
    tmp499 = LessEq(data->simulationInfo->realParameter[789] /* sink.X[1] PARAM */,1.0);
    if(!(tmp498 && tmp499))
    {
      tmp501 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[789] /* sink.X[1] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp500),tmp501);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.X[1] >= 0.0 and sink.X[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp502 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1701
type: ALGORITHM

  assert(sink.h >= -10000000000.0 and sink.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sink.h <= 10000000000.0, has value: " + String(sink.h, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1701(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1701};
  modelica_boolean tmp503;
  modelica_boolean tmp504;
  static const MMC_DEFSTRINGLIT(tmp505,93,"Variable violating min/max constraint: -10000000000.0 <= sink.h <= 10000000000.0, has value: ");
  modelica_string tmp506;
  static int tmp507 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp507)
  {
    tmp503 = GreaterEq(data->simulationInfo->realParameter[795] /* sink.h PARAM */,-10000000000.0);
    tmp504 = LessEq(data->simulationInfo->realParameter[795] /* sink.h PARAM */,10000000000.0);
    if(!(tmp503 && tmp504))
    {
      tmp506 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[795] /* sink.h PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp505),tmp506);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",27,5,30,39,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.h >= -10000000000.0 and sink.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp507 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1702
type: ALGORITHM

  assert(sink.d >= 0.0 and sink.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= sink.d <= 100000.0, has value: " + String(sink.d, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1702(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1702};
  modelica_boolean tmp508;
  modelica_boolean tmp509;
  static const MMC_DEFSTRINGLIT(tmp510,77,"Variable violating min/max constraint: 0.0 <= sink.d <= 100000.0, has value: ");
  modelica_string tmp511;
  static int tmp512 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp512)
  {
    tmp508 = GreaterEq(data->simulationInfo->realParameter[794] /* sink.d PARAM */,0.0);
    tmp509 = LessEq(data->simulationInfo->realParameter[794] /* sink.d PARAM */,100000.0);
    if(!(tmp508 && tmp509))
    {
      tmp511 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[794] /* sink.d PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp510),tmp511);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",13,3,20,44,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.d >= 0.0 and sink.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp512 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1703
type: ALGORITHM

  assert(sink.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and sink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= sink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(sink.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1703(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1703};
  modelica_boolean tmp513;
  modelica_boolean tmp514;
  static const MMC_DEFSTRINGLIT(tmp515,177,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= sink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp516;
  static int tmp517 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp517)
  {
    tmp513 = GreaterEq(data->simulationInfo->integerParameter[21] /* sink.flowDirection PARAM */,1);
    tmp514 = LessEq(data->simulationInfo->integerParameter[21] /* sink.flowDirection PARAM */,3);
    if(!(tmp513 && tmp514))
    {
      tmp516 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[21] /* sink.flowDirection PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp515),tmp516);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",776,5,778,95,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and sink.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp517 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1704
type: ALGORITHM

  assert(source.X[5] >= 0.0 and source.X[5] <= 1.0, "Variable violating min/max constraint: 0.0 <= source.X[5] <= 1.0, has value: " + String(source.X[5], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1704(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1704};
  modelica_boolean tmp518;
  modelica_boolean tmp519;
  static const MMC_DEFSTRINGLIT(tmp520,77,"Variable violating min/max constraint: 0.0 <= source.X[5] <= 1.0, has value: ");
  modelica_string tmp521;
  static int tmp522 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp522)
  {
    tmp518 = GreaterEq(data->simulationInfo->realParameter[806] /* source.X[5] PARAM */,0.0);
    tmp519 = LessEq(data->simulationInfo->realParameter[806] /* source.X[5] PARAM */,1.0);
    if(!(tmp518 && tmp519))
    {
      tmp521 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[806] /* source.X[5] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp520),tmp521);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.X[5] >= 0.0 and source.X[5] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp522 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1705
type: ALGORITHM

  assert(source.X[4] >= 0.0 and source.X[4] <= 1.0, "Variable violating min/max constraint: 0.0 <= source.X[4] <= 1.0, has value: " + String(source.X[4], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1705(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1705};
  modelica_boolean tmp523;
  modelica_boolean tmp524;
  static const MMC_DEFSTRINGLIT(tmp525,77,"Variable violating min/max constraint: 0.0 <= source.X[4] <= 1.0, has value: ");
  modelica_string tmp526;
  static int tmp527 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp527)
  {
    tmp523 = GreaterEq(data->simulationInfo->realParameter[805] /* source.X[4] PARAM */,0.0);
    tmp524 = LessEq(data->simulationInfo->realParameter[805] /* source.X[4] PARAM */,1.0);
    if(!(tmp523 && tmp524))
    {
      tmp526 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[805] /* source.X[4] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp525),tmp526);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.X[4] >= 0.0 and source.X[4] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp527 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1706
type: ALGORITHM

  assert(source.X[3] >= 0.0 and source.X[3] <= 1.0, "Variable violating min/max constraint: 0.0 <= source.X[3] <= 1.0, has value: " + String(source.X[3], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1706(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1706};
  modelica_boolean tmp528;
  modelica_boolean tmp529;
  static const MMC_DEFSTRINGLIT(tmp530,77,"Variable violating min/max constraint: 0.0 <= source.X[3] <= 1.0, has value: ");
  modelica_string tmp531;
  static int tmp532 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp532)
  {
    tmp528 = GreaterEq(data->simulationInfo->realParameter[804] /* source.X[3] PARAM */,0.0);
    tmp529 = LessEq(data->simulationInfo->realParameter[804] /* source.X[3] PARAM */,1.0);
    if(!(tmp528 && tmp529))
    {
      tmp531 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[804] /* source.X[3] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp530),tmp531);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.X[3] >= 0.0 and source.X[3] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp532 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1707
type: ALGORITHM

  assert(source.X[2] >= 0.0 and source.X[2] <= 1.0, "Variable violating min/max constraint: 0.0 <= source.X[2] <= 1.0, has value: " + String(source.X[2], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1707(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1707};
  modelica_boolean tmp533;
  modelica_boolean tmp534;
  static const MMC_DEFSTRINGLIT(tmp535,77,"Variable violating min/max constraint: 0.0 <= source.X[2] <= 1.0, has value: ");
  modelica_string tmp536;
  static int tmp537 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp537)
  {
    tmp533 = GreaterEq(data->simulationInfo->realParameter[803] /* source.X[2] PARAM */,0.0);
    tmp534 = LessEq(data->simulationInfo->realParameter[803] /* source.X[2] PARAM */,1.0);
    if(!(tmp533 && tmp534))
    {
      tmp536 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[803] /* source.X[2] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp535),tmp536);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.X[2] >= 0.0 and source.X[2] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp537 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1708
type: ALGORITHM

  assert(source.X[1] >= 0.0 and source.X[1] <= 1.0, "Variable violating min/max constraint: 0.0 <= source.X[1] <= 1.0, has value: " + String(source.X[1], "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1708(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1708};
  modelica_boolean tmp538;
  modelica_boolean tmp539;
  static const MMC_DEFSTRINGLIT(tmp540,77,"Variable violating min/max constraint: 0.0 <= source.X[1] <= 1.0, has value: ");
  modelica_string tmp541;
  static int tmp542 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp542)
  {
    tmp538 = GreaterEq(data->simulationInfo->realParameter[802] /* source.X[1] PARAM */,0.0);
    tmp539 = LessEq(data->simulationInfo->realParameter[802] /* source.X[1] PARAM */,1.0);
    if(!(tmp538 && tmp539))
    {
      tmp541 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[802] /* source.X[1] PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp540),tmp541);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",31,5,34,90,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.X[1] >= 0.0 and source.X[1] <= 1.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp542 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1709
type: ALGORITHM

  assert(source.h >= -10000000000.0 and source.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= source.h <= 10000000000.0, has value: " + String(source.h, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1709(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1709};
  modelica_boolean tmp543;
  modelica_boolean tmp544;
  static const MMC_DEFSTRINGLIT(tmp545,95,"Variable violating min/max constraint: -10000000000.0 <= source.h <= 10000000000.0, has value: ");
  modelica_string tmp546;
  static int tmp547 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp547)
  {
    tmp543 = GreaterEq(data->simulationInfo->realParameter[808] /* source.h PARAM */,-10000000000.0);
    tmp544 = LessEq(data->simulationInfo->realParameter[808] /* source.h PARAM */,10000000000.0);
    if(!(tmp543 && tmp544))
    {
      tmp546 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[808] /* source.h PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp545),tmp546);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",27,5,30,39,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.h >= -10000000000.0 and source.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp547 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1710
type: ALGORITHM

  assert(source.d >= 0.0 and source.d <= 100000.0, "Variable violating min/max constraint: 0.0 <= source.d <= 100000.0, has value: " + String(source.d, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1710(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1710};
  modelica_boolean tmp548;
  modelica_boolean tmp549;
  static const MMC_DEFSTRINGLIT(tmp550,79,"Variable violating min/max constraint: 0.0 <= source.d <= 100000.0, has value: ");
  modelica_string tmp551;
  static int tmp552 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp552)
  {
    tmp548 = GreaterEq(data->simulationInfo->realParameter[807] /* source.d PARAM */,0.0);
    tmp549 = LessEq(data->simulationInfo->realParameter[807] /* source.d PARAM */,100000.0);
    if(!(tmp548 && tmp549))
    {
      tmp551 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[807] /* source.d PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp550),tmp551);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",13,3,20,44,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.d >= 0.0 and source.d <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp552 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1711
type: ALGORITHM

  assert(source.p >= 0.0 and source.p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= source.p <= 100000000.0, has value: " + String(source.p, "g"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1711(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1711};
  modelica_boolean tmp553;
  modelica_boolean tmp554;
  static const MMC_DEFSTRINGLIT(tmp555,82,"Variable violating min/max constraint: 0.0 <= source.p <= 100000000.0, has value: ");
  modelica_string tmp556;
  static int tmp557 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp557)
  {
    tmp553 = GreaterEq(data->simulationInfo->realParameter[809] /* source.p PARAM */,0.0);
    tmp554 = LessEq(data->simulationInfo->realParameter[809] /* source.p PARAM */,100000000.0);
    if(!(tmp553 && tmp554))
    {
      tmp556 = modelica_real_to_modelica_string_format(data->simulationInfo->realParameter[809] /* source.p PARAM */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp555),tmp556);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",10,5,12,42,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.p >= 0.0 and source.p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp557 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1712
type: ALGORITHM

  assert(source.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and source.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, "Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= source.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: " + String(source.flowDirection, "d"));
*/
OMC_DISABLE_OPT
static void sCO2SurrogatePBRig_eqFunction_1712(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1712};
  modelica_boolean tmp558;
  modelica_boolean tmp559;
  static const MMC_DEFSTRINGLIT(tmp560,179,"Variable violating min/max constraint: Modelica.Fluid.Types.PortFlowDirection.Entering <= source.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional, has value: ");
  modelica_string tmp561;
  static int tmp562 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp562)
  {
    tmp558 = GreaterEq(data->simulationInfo->integerParameter[23] /* source.flowDirection PARAM */,1);
    tmp559 = LessEq(data->simulationInfo->integerParameter[23] /* source.flowDirection PARAM */,3);
    if(!(tmp558 && tmp559))
    {
      tmp561 = modelica_integer_to_modelica_string_format(data->simulationInfo->integerParameter[23] /* source.flowDirection PARAM */, (modelica_string) mmc_strings_len1[100]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp560),tmp561);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Sources.mo",776,5,778,95,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsource.flowDirection >= Modelica.Fluid.Types.PortFlowDirection.Entering and source.flowDirection <= Modelica.Fluid.Types.PortFlowDirection.Bidirectional", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp562 = 1;
    }
  }
  TRACE_POP
}
OMC_DISABLE_OPT
void sCO2SurrogatePBRig_updateBoundParameters_0(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  sCO2SurrogatePBRig_eqFunction_1281(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1282(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1283(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1284(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1285(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1286(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1287(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1288(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1289(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1290(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1291(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1292(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1293(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1294(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1295(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1296(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1297(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1298(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1299(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1300(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1301(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1302(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1303(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1304(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1305(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1306(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1307(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1308(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1309(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1310(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1311(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1312(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1313(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1314(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1315(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1316(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1317(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1318(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1319(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1320(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1321(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1322(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1323(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1324(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1325(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1326(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1327(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1328(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1329(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1330(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1331(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1332(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1333(data, threadData);
  sCO2SurrogatePBRig_eqFunction_44(data, threadData);
  sCO2SurrogatePBRig_eqFunction_45(data, threadData);
  sCO2SurrogatePBRig_eqFunction_962(data, threadData);
  sCO2SurrogatePBRig_eqFunction_963(data, threadData);
  sCO2SurrogatePBRig_eqFunction_966(data, threadData);
  sCO2SurrogatePBRig_eqFunction_964(data, threadData);
  sCO2SurrogatePBRig_eqFunction_965(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1341(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1342(data, threadData);
  sCO2SurrogatePBRig_eqFunction_39(data, threadData);
  sCO2SurrogatePBRig_eqFunction_40(data, threadData);
  sCO2SurrogatePBRig_eqFunction_957(data, threadData);
  sCO2SurrogatePBRig_eqFunction_958(data, threadData);
  sCO2SurrogatePBRig_eqFunction_961(data, threadData);
  sCO2SurrogatePBRig_eqFunction_959(data, threadData);
  sCO2SurrogatePBRig_eqFunction_960(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1350(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1351(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1352(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1353(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1354(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1355(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1356(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1357(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1358(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1359(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1360(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1361(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1362(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1363(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1364(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1365(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1366(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1367(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1368(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1369(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1370(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1371(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1372(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1373(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1374(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1375(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1376(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1377(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1378(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1379(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1380(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1381(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1382(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1383(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1384(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1385(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1386(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1387(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1388(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1389(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1390(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1391(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1392(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1393(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1394(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1395(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1396(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1397(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1398(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1413(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1414(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1415(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1416(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1418(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1419(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1420(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1422(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1423(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1424(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1425(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1426(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1427(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1428(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1429(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1430(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1431(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1432(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1433(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1436(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1437(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1438(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1439(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1440(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1441(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1442(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1443(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1446(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1447(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1448(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1449(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1450(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1452(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1453(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1454(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1456(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1457(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1458(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1459(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1460(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1461(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1462(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1463(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1464(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1465(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1466(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1467(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1469(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1472(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1473(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1475(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1476(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1477(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1478(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1479(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1480(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1481(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1482(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1488(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1489(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1490(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1491(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1492(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1493(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1494(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1495(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1496(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1497(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1498(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1499(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1500(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1501(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1502(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1503(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1504(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1505(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1506(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1507(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1508(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1509(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1513(data, threadData);
  sCO2SurrogatePBRig_eqFunction_956(data, threadData);
  sCO2SurrogatePBRig_eqFunction_955(data, threadData);
  sCO2SurrogatePBRig_eqFunction_954(data, threadData);
  sCO2SurrogatePBRig_eqFunction_953(data, threadData);
  sCO2SurrogatePBRig_eqFunction_952(data, threadData);
  sCO2SurrogatePBRig_eqFunction_951(data, threadData);
  sCO2SurrogatePBRig_eqFunction_46(data, threadData);
  sCO2SurrogatePBRig_eqFunction_48(data, threadData);
  sCO2SurrogatePBRig_eqFunction_950(data, threadData);
  sCO2SurrogatePBRig_eqFunction_47(data, threadData);
  sCO2SurrogatePBRig_eqFunction_949(data, threadData);
  sCO2SurrogatePBRig_eqFunction_948(data, threadData);
  sCO2SurrogatePBRig_eqFunction_947(data, threadData);
  sCO2SurrogatePBRig_eqFunction_946(data, threadData);
  sCO2SurrogatePBRig_eqFunction_945(data, threadData);
  sCO2SurrogatePBRig_eqFunction_944(data, threadData);
  sCO2SurrogatePBRig_eqFunction_41(data, threadData);
  sCO2SurrogatePBRig_eqFunction_943(data, threadData);
  sCO2SurrogatePBRig_eqFunction_42(data, threadData);
  sCO2SurrogatePBRig_eqFunction_43(data, threadData);
  sCO2SurrogatePBRig_eqFunction_38(data, threadData);
  sCO2SurrogatePBRig_eqFunction_37(data, threadData);
  sCO2SurrogatePBRig_eqFunction_36(data, threadData);
  sCO2SurrogatePBRig_eqFunction_35(data, threadData);
  sCO2SurrogatePBRig_eqFunction_34(data, threadData);
  sCO2SurrogatePBRig_eqFunction_33(data, threadData);
  sCO2SurrogatePBRig_eqFunction_32(data, threadData);
  sCO2SurrogatePBRig_eqFunction_31(data, threadData);
  sCO2SurrogatePBRig_eqFunction_30(data, threadData);
  sCO2SurrogatePBRig_eqFunction_29(data, threadData);
  sCO2SurrogatePBRig_eqFunction_28(data, threadData);
  sCO2SurrogatePBRig_eqFunction_27(data, threadData);
  sCO2SurrogatePBRig_eqFunction_26(data, threadData);
  sCO2SurrogatePBRig_eqFunction_25(data, threadData);
  sCO2SurrogatePBRig_eqFunction_24(data, threadData);
  sCO2SurrogatePBRig_eqFunction_23(data, threadData);
  sCO2SurrogatePBRig_eqFunction_22(data, threadData);
  sCO2SurrogatePBRig_eqFunction_21(data, threadData);
  sCO2SurrogatePBRig_eqFunction_20(data, threadData);
  sCO2SurrogatePBRig_eqFunction_19(data, threadData);
  sCO2SurrogatePBRig_eqFunction_18(data, threadData);
  sCO2SurrogatePBRig_eqFunction_17(data, threadData);
  sCO2SurrogatePBRig_eqFunction_16(data, threadData);
  sCO2SurrogatePBRig_eqFunction_15(data, threadData);
  sCO2SurrogatePBRig_eqFunction_14(data, threadData);
  sCO2SurrogatePBRig_eqFunction_13(data, threadData);
  sCO2SurrogatePBRig_eqFunction_12(data, threadData);
  sCO2SurrogatePBRig_eqFunction_11(data, threadData);
  sCO2SurrogatePBRig_eqFunction_10(data, threadData);
  sCO2SurrogatePBRig_eqFunction_9(data, threadData);
  sCO2SurrogatePBRig_eqFunction_8(data, threadData);
  sCO2SurrogatePBRig_eqFunction_7(data, threadData);
  sCO2SurrogatePBRig_eqFunction_6(data, threadData);
  sCO2SurrogatePBRig_eqFunction_5(data, threadData);
  sCO2SurrogatePBRig_eqFunction_4(data, threadData);
  sCO2SurrogatePBRig_eqFunction_3(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1590(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1591(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1592(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1593(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1594(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1595(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1596(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1597(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1598(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1599(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1600(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1601(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1602(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1603(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1604(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1605(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1606(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1607(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1608(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1609(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1610(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1611(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1612(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1613(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1614(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1615(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1616(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1617(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1618(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1619(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1620(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1621(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1622(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1623(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1624(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1625(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1626(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1627(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1628(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1629(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1630(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1631(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1632(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1633(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1634(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1635(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1636(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1637(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1638(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1639(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1640(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1641(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1642(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1643(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1644(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1645(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1646(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1647(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1648(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1649(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1650(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1651(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1652(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1653(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1654(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1655(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1656(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1657(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1658(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1659(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1660(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1661(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1662(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1663(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1664(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1665(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1666(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1667(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1668(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1669(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1670(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1671(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1672(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1673(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1674(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1675(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1676(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1677(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1678(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1679(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1680(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1681(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1682(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1683(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1684(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1685(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1686(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1687(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1688(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1689(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1690(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1691(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1692(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1693(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1694(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1695(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1696(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1697(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1698(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1699(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1700(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1701(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1702(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1703(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1704(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1705(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1706(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1707(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1708(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1709(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1710(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1711(data, threadData);
  sCO2SurrogatePBRig_eqFunction_1712(data, threadData);
  TRACE_POP
}
OMC_DISABLE_OPT
int sCO2SurrogatePBRig_updateBoundParameters(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  data->simulationInfo->integerParameter[1] /* N_LTR_parameter PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[1].time_unvarying = 1;
  data->simulationInfo->integerParameter[2] /* N_exch_parameter PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[2].time_unvarying = 1;
  data->simulationInfo->integerParameter[3] /* inputsize PARAM */ = ((modelica_integer) 9);
  data->modelData->integerParameterData[3].time_unvarying = 1;
  data->simulationInfo->integerParameter[4] /* outputsize PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[4].time_unvarying = 1;
  data->simulationInfo->integerParameter[5] /* powerBlock.inputsize PARAM */ = ((modelica_integer) 9);
  data->modelData->integerParameterData[5].time_unvarying = 1;
  data->simulationInfo->integerParameter[6] /* powerBlock.outputsize PARAM */ = ((modelica_integer) 2);
  data->modelData->integerParameterData[6].time_unvarying = 1;
  data->simulationInfo->integerParameter[8] /* sCO2PBDesignPointCalculator.N_LTR_parameter PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[8].time_unvarying = 1;
  data->simulationInfo->integerParameter[9] /* sCO2PBDesignPointCalculator.N_exch_parameter PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[9].time_unvarying = 1;
  data->simulationInfo->integerParameter[10] /* sCO2PBDesignPointCalculator.powerBlock.HTR.N_q PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[10].time_unvarying = 1;
  data->simulationInfo->integerParameter[11] /* sCO2PBDesignPointCalculator.powerBlock.LTR.N_q PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[11].time_unvarying = 1;
  data->simulationInfo->integerParameter[12] /* sCO2PBDesignPointCalculator.powerBlock.N_HTR PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[12].time_unvarying = 1;
  data->simulationInfo->integerParameter[13] /* sCO2PBDesignPointCalculator.powerBlock.N_LTR PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[13].time_unvarying = 1;
  data->simulationInfo->integerParameter[14] /* sCO2PBDesignPointCalculator.powerBlock.N_exch PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[14].time_unvarying = 1;
  data->simulationInfo->integerParameter[15] /* sCO2PBDesignPointCalculator.powerBlock.cooler.N_cool PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[15].time_unvarying = 1;
  data->simulationInfo->integerParameter[16] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.N_exch PARAM */ = ((modelica_integer) 15);
  data->modelData->integerParameterData[16].time_unvarying = 1;
  data->simulationInfo->integerParameter[18] /* sCO2PBDesignPointCalculator.sink.nPorts PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[18].time_unvarying = 1;
  data->simulationInfo->integerParameter[20] /* sCO2PBDesignPointCalculator.source.nPorts PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[20].time_unvarying = 1;
  data->simulationInfo->integerParameter[22] /* sink.nPorts PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[22].time_unvarying = 1;
  data->simulationInfo->integerParameter[24] /* source.nPorts PARAM */ = ((modelica_integer) 1);
  data->modelData->integerParameterData[24].time_unvarying = 1;
  data->simulationInfo->realParameter[1] /* P_net PARAM */ = 150000000.0;
  data->modelData->realParameterData[1].time_unvarying = 1;
  data->simulationInfo->realParameter[47] /* powerBlock.P_net PARAM */ = 150000000.0;
  data->modelData->realParameterData[47].time_unvarying = 1;
  data->simulationInfo->realParameter[95] /* sCO2PBDesignPointCalculator.P_net PARAM */ = 150000000.0;
  data->modelData->realParameterData[95].time_unvarying = 1;
  data->simulationInfo->realParameter[266] /* sCO2PBDesignPointCalculator.powerBlock.LTR.P_nom_des PARAM */ = 150000000.0;
  data->modelData->realParameterData[266].time_unvarying = 1;
  data->simulationInfo->realParameter[404] /* sCO2PBDesignPointCalculator.powerBlock.P_nom PARAM */ = 150000000.0;
  data->modelData->realParameterData[404].time_unvarying = 1;
  data->simulationInfo->realParameter[416] /* sCO2PBDesignPointCalculator.powerBlock.cooler.P_nom_des PARAM */ = 150000000.0;
  data->modelData->realParameterData[416].time_unvarying = 1;
  data->simulationInfo->realParameter[526] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.P_nom_des PARAM */ = 150000000.0;
  data->modelData->realParameterData[526].time_unvarying = 1;
  data->simulationInfo->realParameter[685] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.P_nom_des PARAM */ = 150000000.0;
  data->modelData->realParameterData[685].time_unvarying = 1;
  data->simulationInfo->realParameter[718] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.P_nom_des PARAM */ = 150000000.0;
  data->modelData->realParameterData[718].time_unvarying = 1;
  data->simulationInfo->booleanParameter[1] /* liftSimple.cont_m_flow PARAM */ = 1;
  data->modelData->booleanParameterData[1].time_unvarying = 1;
  data->simulationInfo->booleanParameter[4] /* powerBlock.test_mode PARAM */ = 1;
  data->modelData->booleanParameterData[4].time_unvarying = 1;
  data->simulationInfo->booleanParameter[6] /* sCO2PBDesignPointCalculator.liftSimple.cont_m_flow PARAM */ = 1;
  data->modelData->booleanParameterData[6].time_unvarying = 1;
  data->simulationInfo->booleanParameter[9] /* sCO2PBDesignPointCalculator.powerBlock.test_mode PARAM */ = 1;
  data->modelData->booleanParameterData[9].time_unvarying = 1;
  data->simulationInfo->booleanParameter[10] /* sCO2PBDesignPointCalculator.sink.medium.preferredMediumStates PARAM */ = 0;
  data->modelData->booleanParameterData[10].time_unvarying = 1;
  data->simulationInfo->booleanParameter[11] /* sCO2PBDesignPointCalculator.sink.medium.standardOrderComponents PARAM */ = 1;
  data->modelData->booleanParameterData[11].time_unvarying = 1;
  data->simulationInfo->booleanParameter[12] /* sCO2PBDesignPointCalculator.sink.use_T PARAM */ = 1;
  data->modelData->booleanParameterData[12].time_unvarying = 1;
  data->simulationInfo->booleanParameter[13] /* sCO2PBDesignPointCalculator.sink.use_p PARAM */ = 1;
  data->modelData->booleanParameterData[13].time_unvarying = 1;
  data->simulationInfo->booleanParameter[14] /* sCO2PBDesignPointCalculator.source.medium.preferredMediumStates PARAM */ = 0;
  data->modelData->booleanParameterData[14].time_unvarying = 1;
  data->simulationInfo->booleanParameter[15] /* sCO2PBDesignPointCalculator.source.medium.standardOrderComponents PARAM */ = 1;
  data->modelData->booleanParameterData[15].time_unvarying = 1;
  data->simulationInfo->booleanParameter[16] /* sCO2PBDesignPointCalculator.source.use_T PARAM */ = 1;
  data->modelData->booleanParameterData[16].time_unvarying = 1;
  data->simulationInfo->booleanParameter[17] /* sCO2PBDesignPointCalculator.source.use_p PARAM */ = 0;
  data->modelData->booleanParameterData[17].time_unvarying = 1;
  data->simulationInfo->booleanParameter[18] /* sCO2PBDesignPointCalculator.test_mode PARAM */ = 1;
  data->modelData->booleanParameterData[18].time_unvarying = 1;
  data->simulationInfo->booleanParameter[19] /* sink.medium.preferredMediumStates PARAM */ = 0;
  data->modelData->booleanParameterData[19].time_unvarying = 1;
  data->simulationInfo->booleanParameter[20] /* sink.medium.standardOrderComponents PARAM */ = 1;
  data->modelData->booleanParameterData[20].time_unvarying = 1;
  data->simulationInfo->booleanParameter[21] /* sink.use_T PARAM */ = 1;
  data->modelData->booleanParameterData[21].time_unvarying = 1;
  data->simulationInfo->booleanParameter[22] /* sink.use_p PARAM */ = 1;
  data->modelData->booleanParameterData[22].time_unvarying = 1;
  data->simulationInfo->booleanParameter[23] /* source.medium.preferredMediumStates PARAM */ = 0;
  data->modelData->booleanParameterData[23].time_unvarying = 1;
  data->simulationInfo->booleanParameter[24] /* source.medium.standardOrderComponents PARAM */ = 1;
  data->modelData->booleanParameterData[24].time_unvarying = 1;
  data->simulationInfo->booleanParameter[25] /* source.use_T PARAM */ = 1;
  data->modelData->booleanParameterData[25].time_unvarying = 1;
  data->simulationInfo->booleanParameter[26] /* source.use_p PARAM */ = 0;
  data->modelData->booleanParameterData[26].time_unvarying = 1;
  data->simulationInfo->booleanParameter[27] /* test_mode PARAM */ = 1;
  data->modelData->booleanParameterData[27].time_unvarying = 1;
  data->simulationInfo->integerParameter[17] /* sCO2PBDesignPointCalculator.sink.flowDirection PARAM */ = 3;
  data->modelData->integerParameterData[17].time_unvarying = 1;
  data->simulationInfo->integerParameter[19] /* sCO2PBDesignPointCalculator.source.flowDirection PARAM */ = 3;
  data->modelData->integerParameterData[19].time_unvarying = 1;
  data->simulationInfo->integerParameter[21] /* sink.flowDirection PARAM */ = 3;
  data->modelData->integerParameterData[21].time_unvarying = 1;
  data->simulationInfo->integerParameter[23] /* source.flowDirection PARAM */ = 3;
  data->modelData->integerParameterData[23].time_unvarying = 1;
  sCO2SurrogatePBRig_updateBoundParameters_0(data, threadData);
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

