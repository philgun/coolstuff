/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "sCO2SurrogatePBRig_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation sCO2SurrogatePBRig_performSimulation
#define prefixedName_updateContinuousSystem sCO2SurrogatePBRig_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation sCO2SurrogatePBRig_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int sCO2SurrogatePBRig_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int sCO2SurrogatePBRig_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int sCO2SurrogatePBRig_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int sCO2SurrogatePBRig_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int sCO2SurrogatePBRig_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int sCO2SurrogatePBRig_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int sCO2SurrogatePBRig_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 992
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._P_cooling = min(200.0 * $cse27, sCO2PBDesignPointCalculator.powerBlock.cooler.P_cool_des)
*/
void sCO2SurrogatePBRig_eqFunction_992(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,992};
  data->localData[0]->realVars[216] /* sCO2PBDesignPointCalculator.powerBlock.cooler.P_cooling variable */ = fmin((200.0) * (data->localData[0]->realVars[32] /* $cse27 variable */),data->simulationInfo->realParameter[415] /* sCO2PBDesignPointCalculator.powerBlock.cooler.P_cool_des PARAM */);
  TRACE_POP
}
void sCO2SurrogatePBRig_eqFunction_993(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_994(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_995(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_996(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_997(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_998(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_999(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1000(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1001(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1002(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1003(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1004(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1005(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1006(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1007(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1008(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1009(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1010(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1011(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1012(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1013(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1014(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1015(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1016(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1017(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1018(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1019(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1020(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1021(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1022(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1023(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1024(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1025(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1026(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1027(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1028(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1029(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1030(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1031(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1032(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1033(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1034(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1035(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1036(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1037(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1038(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1039(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1040(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1041(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1042(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1043(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1044(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1045(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1046(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1047(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1048(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1049(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1050(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1051(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1052(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1053(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1054(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1055(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1056(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1057(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1058(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1059(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1060(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1061(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1062(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1063(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1064(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1065(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1066(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1067(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1068(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1069(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1070(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1071(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1072(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1073(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1074(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1075(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1076(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1077(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1078(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1079(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1080(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1081(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1082(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1083(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1084(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1085(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1086(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1087(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1088(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1089(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1090(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1091(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1092(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1093(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1094(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1095(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1096(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1097(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1098(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1099(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1100(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1101(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1102(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1103(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1104(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1105(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1106(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1107(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1108(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1109(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1110(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1111(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1112(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1113(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1114(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1115(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1116(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1117(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1118(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1119(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1120(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1121(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1122(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1123(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1124(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1125(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1126(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1127(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1128(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1129(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1130(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1131(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1132(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1133(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1134(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1208(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1207(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1206(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1205(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1204(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1203(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1202(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1201(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1200(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1199(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1198(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1197(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1196(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1195(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1194(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1193(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1192(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1191(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1190(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1189(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1188(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1187(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1186(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1185(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1184(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1183(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1182(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1181(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1180(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1179(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1178(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1177(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1176(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1175(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1174(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1173(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1172(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1171(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1170(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1169(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1168(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1167(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1166(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1165(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1164(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1163(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1162(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1161(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1160(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1159(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1158(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1157(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1156(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1155(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1154(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1153(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1152(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1151(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1150(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1149(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1148(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1147(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1146(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1145(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1144(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1143(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1142(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1141(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1140(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1139(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1138(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1137(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1136(DATA*, threadData_t*);
void sCO2SurrogatePBRig_eqFunction_1135(DATA*, threadData_t*);
/*
equation index: 1209
indexNonlinear: 46
type: NONLINEAR

vars: {sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[15], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[1], sCO2PBDesignPointCalculator._powerBlock._exchanger._CO2_port_b._m_flow, sCO2PBDesignPointCalculator._powerBlock._LTR._state_from_turb[15]._p, sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[14], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[14], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[13], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[13], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[12], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[12], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[11], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[11], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[10], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[9], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[8], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[8], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[7], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[7], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[6], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[5], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[5], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[4], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[4], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[2], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[15], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[15], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[3], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[2], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[4], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[3], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[4], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[5], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[5], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[6], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[6], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[7], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[7], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[8], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[8], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[9], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[10], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[9], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[11], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[10], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[12], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[12], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[11], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[13], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[13], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_comp[14], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[1], sCO2PBDesignPointCalculator._powerBlock._HTR._h_from_turb[14], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[2], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[3], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[4], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[6], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[7], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[5], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[8], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[10], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[9], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[11], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[12], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[13], sCO2PBDesignPointCalculator._powerBlock._exchanger._h_CO2[14], sCO2PBDesignPointCalculator._powerBlock._reCompressor._p_out, sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[2], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[2], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[3], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[3], sCO2PBDesignPointCalculator._powerBlock._turbine._C_spouting, sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[6], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_comp[9], sCO2PBDesignPointCalculator._powerBlock._LTR._h_from_turb[10]}
eqns: {993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097, 1098, 1099, 1100, 1101, 1102, 1103, 1104, 1105, 1106, 1107, 1108, 1109, 1110, 1111, 1112, 1113, 1114, 1115, 1116, 1117, 1118, 1119, 1120, 1121, 1122, 1123, 1124, 1125, 1126, 1127, 1128, 1129, 1130, 1131, 1132, 1133, 1134, 1208, 1207, 1206, 1205, 1204, 1203, 1202, 1201, 1200, 1199, 1198, 1197, 1196, 1195, 1194, 1193, 1192, 1191, 1190, 1189, 1188, 1187, 1186, 1185, 1184, 1183, 1182, 1181, 1180, 1179, 1178, 1177, 1176, 1175, 1174, 1173, 1172, 1171, 1170, 1169, 1168, 1167, 1166, 1165, 1164, 1163, 1162, 1161, 1160, 1159, 1158, 1157, 1156, 1155, 1154, 1153, 1152, 1151, 1150, 1149, 1148, 1147, 1146, 1145, 1144, 1143, 1142, 1141, 1140, 1139, 1138, 1137, 1136, 1135}
*/
void sCO2SurrogatePBRig_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1209};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1209 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[0] = data->localData[0]->realVars[261] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[1] = data->localData[0]->realVars[196] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[2] = data->localData[0]->realVars[225] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[3] = data->localData[0]->realVars[212] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[4] = data->localData[0]->realVars[194] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[14] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[5] = data->localData[0]->realVars[209] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[14] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[6] = data->localData[0]->realVars[193] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[13] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[7] = data->localData[0]->realVars[208] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[13] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[8] = data->localData[0]->realVars[207] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[12] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[9] = data->localData[0]->realVars[192] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[12] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[10] = data->localData[0]->realVars[206] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[11] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[11] = data->localData[0]->realVars[191] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[11] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[12] = data->localData[0]->realVars[190] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[10] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[13] = data->localData[0]->realVars[204] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[9] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[14] = data->localData[0]->realVars[188] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[8] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[15] = data->localData[0]->realVars[203] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[8] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[16] = data->localData[0]->realVars[187] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[7] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[17] = data->localData[0]->realVars[202] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[7] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[18] = data->localData[0]->realVars[186] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[6] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[19] = data->localData[0]->realVars[200] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[5] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[20] = data->localData[0]->realVars[185] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[5] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[21] = data->localData[0]->realVars[184] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[4] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[22] = data->localData[0]->realVars[199] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[4] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[23] = data->localData[0]->realVars[120] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[2] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[24] = data->localData[0]->realVars[195] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[15] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[25] = data->localData[0]->realVars[210] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[26] = data->localData[0]->realVars[121] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[3] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[27] = data->localData[0]->realVars[107] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[2] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[28] = data->localData[0]->realVars[122] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[4] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[29] = data->localData[0]->realVars[108] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[3] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[30] = data->localData[0]->realVars[109] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[4] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[31] = data->localData[0]->realVars[123] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[5] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[32] = data->localData[0]->realVars[110] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[5] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[33] = data->localData[0]->realVars[111] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[6] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[34] = data->localData[0]->realVars[124] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[6] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[35] = data->localData[0]->realVars[112] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[7] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[36] = data->localData[0]->realVars[125] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[7] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[37] = data->localData[0]->realVars[113] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[8] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[38] = data->localData[0]->realVars[126] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[8] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[39] = data->localData[0]->realVars[127] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[9] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[40] = data->localData[0]->realVars[128] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[10] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[41] = data->localData[0]->realVars[114] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[9] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[42] = data->localData[0]->realVars[116] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[11] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[43] = data->localData[0]->realVars[115] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[10] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[44] = data->localData[0]->realVars[130] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[12] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[45] = data->localData[0]->realVars[117] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[12] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[46] = data->localData[0]->realVars[129] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[11] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[47] = data->localData[0]->realVars[131] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[13] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[48] = data->localData[0]->realVars[118] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[13] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[49] = data->localData[0]->realVars[119] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[14] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[50] = data->localData[0]->realVars[247] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[51] = data->localData[0]->realVars[132] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[14] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[52] = data->localData[0]->realVars[248] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[2] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[53] = data->localData[0]->realVars[249] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[3] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[54] = data->localData[0]->realVars[250] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[4] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[55] = data->localData[0]->realVars[252] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[6] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[56] = data->localData[0]->realVars[253] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[7] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[57] = data->localData[0]->realVars[251] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[5] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[58] = data->localData[0]->realVars[254] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[8] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[59] = data->localData[0]->realVars[256] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[10] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[60] = data->localData[0]->realVars[255] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[9] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[61] = data->localData[0]->realVars[257] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[11] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[62] = data->localData[0]->realVars[258] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[12] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[63] = data->localData[0]->realVars[259] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[13] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[64] = data->localData[0]->realVars[260] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[14] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[65] = data->localData[0]->realVars[290] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[66] = data->localData[0]->realVars[182] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[2] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[67] = data->localData[0]->realVars[197] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[2] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[68] = data->localData[0]->realVars[183] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[3] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[69] = data->localData[0]->realVars[198] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[3] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[70] = data->localData[0]->realVars[298] /* sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[71] = data->localData[0]->realVars[201] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[6] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[72] = data->localData[0]->realVars[189] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[9] variable */;
  data->simulationInfo->nonlinearSystemData[46].nlsxOld[73] = data->localData[0]->realVars[205] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[10] variable */;
  retValue = solve_nonlinear_system(data, threadData, 46);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1209};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1209 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[261] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[0];
  data->localData[0]->realVars[196] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[1];
  data->localData[0]->realVars[225] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[2];
  data->localData[0]->realVars[212] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[3];
  data->localData[0]->realVars[194] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[14] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[4];
  data->localData[0]->realVars[209] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[14] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[5];
  data->localData[0]->realVars[193] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[13] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[6];
  data->localData[0]->realVars[208] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[13] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[7];
  data->localData[0]->realVars[207] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[12] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[8];
  data->localData[0]->realVars[192] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[12] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[9];
  data->localData[0]->realVars[206] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[11] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[10];
  data->localData[0]->realVars[191] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[11] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[11];
  data->localData[0]->realVars[190] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[10] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[12];
  data->localData[0]->realVars[204] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[9] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[13];
  data->localData[0]->realVars[188] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[8] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[14];
  data->localData[0]->realVars[203] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[8] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[15];
  data->localData[0]->realVars[187] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[7] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[16];
  data->localData[0]->realVars[202] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[7] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[17];
  data->localData[0]->realVars[186] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[6] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[18];
  data->localData[0]->realVars[200] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[5] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[19];
  data->localData[0]->realVars[185] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[5] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[20];
  data->localData[0]->realVars[184] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[4] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[21];
  data->localData[0]->realVars[199] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[4] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[22];
  data->localData[0]->realVars[120] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[2] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[23];
  data->localData[0]->realVars[195] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[15] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[24];
  data->localData[0]->realVars[210] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[25];
  data->localData[0]->realVars[121] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[3] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[26];
  data->localData[0]->realVars[107] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[2] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[27];
  data->localData[0]->realVars[122] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[4] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[28];
  data->localData[0]->realVars[108] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[3] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[29];
  data->localData[0]->realVars[109] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[4] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[30];
  data->localData[0]->realVars[123] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[5] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[31];
  data->localData[0]->realVars[110] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[5] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[32];
  data->localData[0]->realVars[111] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[6] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[33];
  data->localData[0]->realVars[124] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[6] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[34];
  data->localData[0]->realVars[112] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[7] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[35];
  data->localData[0]->realVars[125] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[7] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[36];
  data->localData[0]->realVars[113] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[8] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[37];
  data->localData[0]->realVars[126] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[8] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[38];
  data->localData[0]->realVars[127] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[9] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[39];
  data->localData[0]->realVars[128] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[10] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[40];
  data->localData[0]->realVars[114] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[9] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[41];
  data->localData[0]->realVars[116] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[11] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[42];
  data->localData[0]->realVars[115] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[10] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[43];
  data->localData[0]->realVars[130] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[12] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[44];
  data->localData[0]->realVars[117] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[12] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[45];
  data->localData[0]->realVars[129] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[11] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[46];
  data->localData[0]->realVars[131] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[13] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[47];
  data->localData[0]->realVars[118] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[13] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[48];
  data->localData[0]->realVars[119] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[14] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[49];
  data->localData[0]->realVars[247] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[50];
  data->localData[0]->realVars[132] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[14] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[51];
  data->localData[0]->realVars[248] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[2] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[52];
  data->localData[0]->realVars[249] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[3] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[53];
  data->localData[0]->realVars[250] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[4] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[54];
  data->localData[0]->realVars[252] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[6] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[55];
  data->localData[0]->realVars[253] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[7] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[56];
  data->localData[0]->realVars[251] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[5] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[57];
  data->localData[0]->realVars[254] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[8] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[58];
  data->localData[0]->realVars[256] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[10] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[59];
  data->localData[0]->realVars[255] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[9] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[60];
  data->localData[0]->realVars[257] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[11] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[61];
  data->localData[0]->realVars[258] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[12] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[62];
  data->localData[0]->realVars[259] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[13] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[63];
  data->localData[0]->realVars[260] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[14] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[64];
  data->localData[0]->realVars[290] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[65];
  data->localData[0]->realVars[182] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[2] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[66];
  data->localData[0]->realVars[197] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[2] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[67];
  data->localData[0]->realVars[183] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[3] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[68];
  data->localData[0]->realVars[198] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[3] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[69];
  data->localData[0]->realVars[298] /* sCO2PBDesignPointCalculator.powerBlock.turbine.C_spouting variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[70];
  data->localData[0]->realVars[201] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[6] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[71];
  data->localData[0]->realVars[189] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[9] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[72];
  data->localData[0]->realVars[205] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[10] variable */ = data->simulationInfo->nonlinearSystemData[46].nlsx[73];
  TRACE_POP
}
/*
equation index: 1210
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT[9] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[9] - sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[9]
*/
void sCO2SurrogatePBRig_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1210};
  data->localData[0]->realVars[174] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT[9] variable */ = data->localData[0]->realVars[159] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[9] variable */ - data->localData[0]->realVars[144] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[9] variable */;
  TRACE_POP
}
/*
equation index: 1211
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._W_turb = sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow * (sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] - sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[15])
*/
void sCO2SurrogatePBRig_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1211};
  data->localData[0]->realVars[299] /* sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb variable */ = (data->localData[0]->realVars[225] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[261] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] variable */ - data->localData[0]->realVars[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[15] variable */);
  TRACE_POP
}
/*
equation index: 1212
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT[15] = sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[15] - sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[15]
*/
void sCO2SurrogatePBRig_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1212};
  data->localData[0]->realVars[104] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT[15] variable */ = data->localData[0]->realVars[89] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[15] variable */ - data->localData[0]->realVars[75] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[15] variable */;
  TRACE_POP
}
/*
equation index: 1213
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._Q_cooler = sCO2PBDesignPointCalculator.powerBlock.cooler.port_b.m_flow * (sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] - sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h)
*/
void sCO2SurrogatePBRig_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1213};
  data->localData[0]->realVars[217] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_cooler variable */ = (data->localData[0]->realVars[221] /* sCO2PBDesignPointCalculator.powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[196] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] variable */ - data->localData[0]->realVars[284] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h variable */);
  TRACE_POP
}
/*
equation index: 1214
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT[3] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[3] - sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[3]
*/
void sCO2SurrogatePBRig_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1214};
  data->localData[0]->realVars[168] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT[3] variable */ = data->localData[0]->realVars[153] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[3] variable */ - data->localData[0]->realVars[138] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[3] variable */;
  TRACE_POP
}
/*
equation index: 1215
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT[2] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[2] - sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[2]
*/
void sCO2SurrogatePBRig_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1215};
  data->localData[0]->realVars[167] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT[2] variable */ = data->localData[0]->realVars[152] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[2] variable */ - data->localData[0]->realVars[137] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[2] variable */;
  TRACE_POP
}
/*
equation index: 1216
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT[1] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[1] - sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[1]
*/
void sCO2SurrogatePBRig_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1216};
  data->localData[0]->realVars[166] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT[1] variable */ = data->localData[0]->realVars[151] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[1] variable */ - data->localData[0]->realVars[136] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[1] variable */;
  TRACE_POP
}
/*
equation index: 1217
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT[1] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[1] - sCO2PBDesignPointCalculator.T_amb_input
*/
void sCO2SurrogatePBRig_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1217};
  data->localData[0]->realVars[219] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT[1] variable */ = data->localData[0]->realVars[151] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[1] variable */ - data->simulationInfo->realParameter[98] /* sCO2PBDesignPointCalculator.T_amb_input PARAM */;
  TRACE_POP
}
/*
equation index: 1218
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._W_comp = sCO2PBDesignPointCalculator.powerBlock.splitter.gamma_port_b.m_flow * (sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] - sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_b.h)
*/
void sCO2SurrogatePBRig_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1218};
  data->localData[0]->realVars[287] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp variable */ = (data->localData[0]->realVars[297] /* sCO2PBDesignPointCalculator.powerBlock.splitter.gamma_port_b.m_flow variable */) * (data->localData[0]->realVars[196] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] variable */ - data->localData[0]->realVars[295] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_b.h variable */);
  TRACE_POP
}
/*
equation index: 1219
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._deltaTAve = 0.5 * (sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT[1] + sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT[15])
*/
void sCO2SurrogatePBRig_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1219};
  data->localData[0]->realVars[246] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaTAve variable */ = (0.5) * (data->localData[0]->realVars[231] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT[1] variable */ + data->localData[0]->realVars[245] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT[15] variable */);
  TRACE_POP
}
/*
equation index: 1220
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._pinch_PHX_operation = min(sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT)
*/
void sCO2SurrogatePBRig_eqFunction_1220(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1220};
  real_array tmp0;
  modelica_real tmp1;
  real_array_create(&tmp0, ((modelica_real*)&((&data->localData[0]->realVars[231] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.deltaT[1] variable */)[calc_base_index_dims_subs(1, 15, ((modelica_integer) 1))])), 1, 15);
  tmp1 = min_real_array(tmp0);
  data->localData[0]->realVars[286] /* sCO2PBDesignPointCalculator.powerBlock.pinch_PHX_operation variable */ = tmp1;
  TRACE_POP
}
/*
equation index: 1221
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._Q_HX = sCO2PBDesignPointCalculator.powerBlock.HTR.from_comp_port_b.m_flow * (sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1] - sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15])
*/
void sCO2SurrogatePBRig_eqFunction_1221(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1221};
  data->localData[0]->realVars[227] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX variable */ = (data->localData[0]->realVars[105] /* sCO2PBDesignPointCalculator.powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[247] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1] variable */ - data->localData[0]->realVars[261] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] variable */);
  TRACE_POP
}
/*
equation index: 1222
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT[14] = sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[14] - sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[14]
*/
void sCO2SurrogatePBRig_eqFunction_1222(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1222};
  data->localData[0]->realVars[103] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT[14] variable */ = data->localData[0]->realVars[88] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[14] variable */ - data->localData[0]->realVars[74] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[14] variable */;
  TRACE_POP
}
/*
equation index: 1223
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT[13] = sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[13] - sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[13]
*/
void sCO2SurrogatePBRig_eqFunction_1223(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1223};
  data->localData[0]->realVars[102] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT[13] variable */ = data->localData[0]->realVars[87] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[13] variable */ - data->localData[0]->realVars[73] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[13] variable */;
  TRACE_POP
}
/*
equation index: 1224
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT[12] = sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[12] - sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[12]
*/
void sCO2SurrogatePBRig_eqFunction_1224(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1224};
  data->localData[0]->realVars[101] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT[12] variable */ = data->localData[0]->realVars[86] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[12] variable */ - data->localData[0]->realVars[72] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[12] variable */;
  TRACE_POP
}
/*
equation index: 1225
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT[10] = sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[10] - sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[10]
*/
void sCO2SurrogatePBRig_eqFunction_1225(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1225};
  data->localData[0]->realVars[99] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT[10] variable */ = data->localData[0]->realVars[84] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[10] variable */ - data->localData[0]->realVars[70] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[10] variable */;
  TRACE_POP
}
/*
equation index: 1226
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT[11] = sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[11] - sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[11]
*/
void sCO2SurrogatePBRig_eqFunction_1226(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1226};
  data->localData[0]->realVars[100] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT[11] variable */ = data->localData[0]->realVars[85] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[11] variable */ - data->localData[0]->realVars[71] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[11] variable */;
  TRACE_POP
}
/*
equation index: 1227
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT[9] = sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[9] - sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[9]
*/
void sCO2SurrogatePBRig_eqFunction_1227(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1227};
  data->localData[0]->realVars[98] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT[9] variable */ = data->localData[0]->realVars[83] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[9] variable */ - data->localData[0]->realVars[69] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[9] variable */;
  TRACE_POP
}
/*
equation index: 1228
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT[8] = sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[8] - sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[8]
*/
void sCO2SurrogatePBRig_eqFunction_1228(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1228};
  data->localData[0]->realVars[97] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT[8] variable */ = data->localData[0]->realVars[82] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[8] variable */ - data->localData[0]->realVars[68] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[8] variable */;
  TRACE_POP
}
/*
equation index: 1229
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT[7] = sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[7] - sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[7]
*/
void sCO2SurrogatePBRig_eqFunction_1229(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1229};
  data->localData[0]->realVars[96] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT[7] variable */ = data->localData[0]->realVars[81] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[7] variable */ - data->localData[0]->realVars[67] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[7] variable */;
  TRACE_POP
}
/*
equation index: 1230
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT[6] = sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[6] - sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[6]
*/
void sCO2SurrogatePBRig_eqFunction_1230(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1230};
  data->localData[0]->realVars[95] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT[6] variable */ = data->localData[0]->realVars[80] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[6] variable */ - data->localData[0]->realVars[66] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[6] variable */;
  TRACE_POP
}
/*
equation index: 1231
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT[5] = sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[5] - sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[5]
*/
void sCO2SurrogatePBRig_eqFunction_1231(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1231};
  data->localData[0]->realVars[94] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT[5] variable */ = data->localData[0]->realVars[79] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[5] variable */ - data->localData[0]->realVars[65] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[5] variable */;
  TRACE_POP
}
/*
equation index: 1232
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT[4] = sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[4] - sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[4]
*/
void sCO2SurrogatePBRig_eqFunction_1232(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1232};
  data->localData[0]->realVars[93] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT[4] variable */ = data->localData[0]->realVars[78] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[4] variable */ - data->localData[0]->realVars[64] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[4] variable */;
  TRACE_POP
}
/*
equation index: 1233
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT[2] = sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[2] - sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[2]
*/
void sCO2SurrogatePBRig_eqFunction_1233(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1233};
  data->localData[0]->realVars[91] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT[2] variable */ = data->localData[0]->realVars[76] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[2] variable */ - data->localData[0]->realVars[62] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[2] variable */;
  TRACE_POP
}
/*
equation index: 1234
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT[3] = sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[3] - sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[3]
*/
void sCO2SurrogatePBRig_eqFunction_1234(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1234};
  data->localData[0]->realVars[92] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT[3] variable */ = data->localData[0]->realVars[77] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[3] variable */ - data->localData[0]->realVars[63] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[3] variable */;
  TRACE_POP
}
/*
equation index: 1235
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._Q_HX = sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow * (sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] - sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15])
*/
void sCO2SurrogatePBRig_eqFunction_1235(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1235};
  data->localData[0]->realVars[135] /* sCO2PBDesignPointCalculator.powerBlock.LTR.Q_HX variable */ = (data->localData[0]->realVars[225] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[196] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] variable */ - data->localData[0]->realVars[210] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] variable */);
  TRACE_POP
}
/*
equation index: 1236
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._Q_HX = sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow * (sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] - sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[15])
*/
void sCO2SurrogatePBRig_eqFunction_1236(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1236};
  data->localData[0]->realVars[60] /* sCO2PBDesignPointCalculator.powerBlock.HTR.Q_HX variable */ = (data->localData[0]->realVars[225] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[210] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] variable */ - data->localData[0]->realVars[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[15] variable */);
  TRACE_POP
}
/*
equation index: 1237
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._HTR._deltaT[1] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[15] - sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[1]
*/
void sCO2SurrogatePBRig_eqFunction_1237(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1237};
  data->localData[0]->realVars[90] /* sCO2PBDesignPointCalculator.powerBlock.HTR.deltaT[1] variable */ = data->localData[0]->realVars[165] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[15] variable */ - data->localData[0]->realVars[61] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[1] variable */;
  TRACE_POP
}
/*
equation index: 1238
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._T_out = SolarTherm.Media.CO2.CO2_utilities.T_p_h(sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p, sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h, tableIDT_p_h)
*/
void sCO2SurrogatePBRig_eqFunction_1238(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1238};
  data->localData[0]->realVars[218] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_out variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[212] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p variable */, data->localData[0]->realVars[284] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h variable */, data->simulationInfo->extObjs[45]);
  TRACE_POP
}
/*
equation index: 1239
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._deltaT[2] = sCO2PBDesignPointCalculator.powerBlock.cooler.T_out - sCO2PBDesignPointCalculator.T_amb_input
*/
void sCO2SurrogatePBRig_eqFunction_1239(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1239};
  data->localData[0]->realVars[220] /* sCO2PBDesignPointCalculator.powerBlock.cooler.deltaT[2] variable */ = data->localData[0]->realVars[218] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_out variable */ - data->simulationInfo->realParameter[98] /* sCO2PBDesignPointCalculator.T_amb_input PARAM */;
  TRACE_POP
}
/*
equation index: 1240
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._W_comp = sCO2PBDesignPointCalculator.powerBlock.cooler.port_b.m_flow * (sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h - sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[1])
*/
void sCO2SurrogatePBRig_eqFunction_1240(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1240};
  data->localData[0]->realVars[277] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp variable */ = (data->localData[0]->realVars[221] /* sCO2PBDesignPointCalculator.powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[284] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h variable */ - data->localData[0]->realVars[181] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[1] variable */);
  TRACE_POP
}
/*
equation index: 1241
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._W_gross = max((-sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb) - sCO2PBDesignPointCalculator.powerBlock.cooler.P_cooling - sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp - sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp, 0.0)
*/
void sCO2SurrogatePBRig_eqFunction_1241(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1241};
  data->localData[0]->realVars[215] /* sCO2PBDesignPointCalculator.powerBlock.W_gross variable */ = fmax((-data->localData[0]->realVars[299] /* sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb variable */) - data->localData[0]->realVars[216] /* sCO2PBDesignPointCalculator.powerBlock.cooler.P_cooling variable */ - data->localData[0]->realVars[287] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp variable */ - data->localData[0]->realVars[277] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp variable */,0.0);
  TRACE_POP
}
/*
equation index: 1242
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._P_elec = max(sCO2PBDesignPointCalculator.powerBlock.W_gross, 0.0)
*/
void sCO2SurrogatePBRig_eqFunction_1242(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1242};
  data->localData[0]->realVars[54] /* sCO2PBDesignPointCalculator.P_elec variable */ = fmax(data->localData[0]->realVars[215] /* sCO2PBDesignPointCalculator.powerBlock.W_gross variable */,0.0);
  TRACE_POP
}
/*
equation index: 1243
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._W_fixed_load = max(((-sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp) - sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb - sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp) * sCO2PBDesignPointCalculator.powerBlock.f_fixed_load, 0.0)
*/
void sCO2SurrogatePBRig_eqFunction_1243(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1243};
  data->localData[0]->realVars[214] /* sCO2PBDesignPointCalculator.powerBlock.W_fixed_load variable */ = fmax(((-data->localData[0]->realVars[287] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp variable */) - data->localData[0]->realVars[299] /* sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb variable */ - data->localData[0]->realVars[277] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp variable */) * (data->simulationInfo->realParameter[678] /* sCO2PBDesignPointCalculator.powerBlock.f_fixed_load PARAM */),0.0);
  TRACE_POP
}
/*
equation index: 1244
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT[4] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[4] - sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[4]
*/
void sCO2SurrogatePBRig_eqFunction_1244(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1244};
  data->localData[0]->realVars[169] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT[4] variable */ = data->localData[0]->realVars[154] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[4] variable */ - data->localData[0]->realVars[139] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[4] variable */;
  TRACE_POP
}
/*
equation index: 1245
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT[5] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[5] - sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[5]
*/
void sCO2SurrogatePBRig_eqFunction_1245(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1245};
  data->localData[0]->realVars[170] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT[5] variable */ = data->localData[0]->realVars[155] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[5] variable */ - data->localData[0]->realVars[140] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[5] variable */;
  TRACE_POP
}
/*
equation index: 1246
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT[6] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[6] - sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[6]
*/
void sCO2SurrogatePBRig_eqFunction_1246(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1246};
  data->localData[0]->realVars[171] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT[6] variable */ = data->localData[0]->realVars[156] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[6] variable */ - data->localData[0]->realVars[141] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[6] variable */;
  TRACE_POP
}
/*
equation index: 1247
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT[7] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[7] - sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[7]
*/
void sCO2SurrogatePBRig_eqFunction_1247(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1247};
  data->localData[0]->realVars[172] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT[7] variable */ = data->localData[0]->realVars[157] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[7] variable */ - data->localData[0]->realVars[142] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[7] variable */;
  TRACE_POP
}
/*
equation index: 1248
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT[8] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[8] - sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[8]
*/
void sCO2SurrogatePBRig_eqFunction_1248(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1248};
  data->localData[0]->realVars[173] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT[8] variable */ = data->localData[0]->realVars[158] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[8] variable */ - data->localData[0]->realVars[143] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[8] variable */;
  TRACE_POP
}
/*
equation index: 1249
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT[10] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[10] - sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[10]
*/
void sCO2SurrogatePBRig_eqFunction_1249(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1249};
  data->localData[0]->realVars[175] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT[10] variable */ = data->localData[0]->realVars[160] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[10] variable */ - data->localData[0]->realVars[145] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[10] variable */;
  TRACE_POP
}
/*
equation index: 1250
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT[11] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[11] - sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[11]
*/
void sCO2SurrogatePBRig_eqFunction_1250(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1250};
  data->localData[0]->realVars[176] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT[11] variable */ = data->localData[0]->realVars[161] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[11] variable */ - data->localData[0]->realVars[146] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[11] variable */;
  TRACE_POP
}
/*
equation index: 1251
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT[12] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[12] - sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[12]
*/
void sCO2SurrogatePBRig_eqFunction_1251(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1251};
  data->localData[0]->realVars[177] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT[12] variable */ = data->localData[0]->realVars[162] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[12] variable */ - data->localData[0]->realVars[147] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[12] variable */;
  TRACE_POP
}
/*
equation index: 1252
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT[13] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[13] - sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[13]
*/
void sCO2SurrogatePBRig_eqFunction_1252(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1252};
  data->localData[0]->realVars[178] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT[13] variable */ = data->localData[0]->realVars[163] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[13] variable */ - data->localData[0]->realVars[148] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[13] variable */;
  TRACE_POP
}
/*
equation index: 1253
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT[14] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[14] - sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[14]
*/
void sCO2SurrogatePBRig_eqFunction_1253(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1253};
  data->localData[0]->realVars[179] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT[14] variable */ = data->localData[0]->realVars[164] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[14] variable */ - data->localData[0]->realVars[149] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[14] variable */;
  TRACE_POP
}
/*
equation index: 1254
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._LTR._deltaT[15] = sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[15] - sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[15]
*/
void sCO2SurrogatePBRig_eqFunction_1254(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1254};
  data->localData[0]->realVars[180] /* sCO2PBDesignPointCalculator.powerBlock.LTR.deltaT[15] variable */ = data->localData[0]->realVars[165] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[15] variable */ - data->localData[0]->realVars[150] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[15] variable */;
  TRACE_POP
}
/*
equation index: 1255
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._W_cycle = (-sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp) - sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb - sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp
*/
void sCO2SurrogatePBRig_eqFunction_1255(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1255};
  data->localData[0]->realVars[213] /* sCO2PBDesignPointCalculator.powerBlock.W_cycle variable */ = (-data->localData[0]->realVars[287] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp variable */) - data->localData[0]->realVars[299] /* sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb variable */ - data->localData[0]->realVars[277] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp variable */;
  TRACE_POP
}
/*
equation index: 1256
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._eta_cycle = ((-sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb) - sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp - sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp) / sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX
*/
void sCO2SurrogatePBRig_eqFunction_1256(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1256};
  data->localData[0]->realVars[222] /* sCO2PBDesignPointCalculator.powerBlock.eta_cycle variable */ = DIVISION_SIM((-data->localData[0]->realVars[299] /* sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb variable */) - data->localData[0]->realVars[277] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp variable */ - data->localData[0]->realVars[287] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp variable */,data->localData[0]->realVars[227] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX variable */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX",equationIndexes);
  TRACE_POP
}
/*
equation index: 1257
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._eta_cycle_net = sCO2PBDesignPointCalculator.P_elec * sCO2PBDesignPointCalculator.powerBlock.eta_motor * (1.0 - sCO2PBDesignPointCalculator.powerBlock.f_fixed_load) / sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX
*/
void sCO2SurrogatePBRig_eqFunction_1257(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1257};
  data->localData[0]->realVars[223] /* sCO2PBDesignPointCalculator.powerBlock.eta_cycle_net variable */ = (data->localData[0]->realVars[54] /* sCO2PBDesignPointCalculator.P_elec variable */) * ((data->simulationInfo->realParameter[521] /* sCO2PBDesignPointCalculator.powerBlock.eta_motor PARAM */) * (DIVISION_SIM(1.0 - data->simulationInfo->realParameter[678] /* sCO2PBDesignPointCalculator.powerBlock.f_fixed_load PARAM */,data->localData[0]->realVars[227] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX variable */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1258
type: SIMPLE_ASSIGN
der(sCO2PBDesignPointCalculator._powerBlock._E_net) = sCO2PBDesignPointCalculator.P_elec * sCO2PBDesignPointCalculator.powerBlock.eta_motor * (1.0 - sCO2PBDesignPointCalculator.powerBlock.f_fixed_load)
*/
void sCO2SurrogatePBRig_eqFunction_1258(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1258};
  data->localData[0]->realVars[7] /* der(sCO2PBDesignPointCalculator.powerBlock.E_net) STATE_DER */ = (data->localData[0]->realVars[54] /* sCO2PBDesignPointCalculator.P_elec variable */) * ((data->simulationInfo->realParameter[521] /* sCO2PBDesignPointCalculator.powerBlock.eta_motor PARAM */) * (1.0 - data->simulationInfo->realParameter[678] /* sCO2PBDesignPointCalculator.powerBlock.f_fixed_load PARAM */));
  TRACE_POP
}
/*
equation index: 1259
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._load = (-sCO2PBDesignPointCalculator.source.ports[1].m_flow) / sCO2PBDesignPointCalculator.powerBlock.m_HTF_des
*/
void sCO2SurrogatePBRig_eqFunction_1259(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1259};
  data->localData[0]->realVars[276] /* sCO2PBDesignPointCalculator.powerBlock.load variable */ = DIVISION_SIM((-data->localData[0]->realVars[329] /* sCO2PBDesignPointCalculator.source.ports[1].m_flow variable */),data->simulationInfo->realParameter[682] /* sCO2PBDesignPointCalculator.powerBlock.m_HTF_des PARAM */,"sCO2PBDesignPointCalculator.powerBlock.m_HTF_des",equationIndexes);
  TRACE_POP
}
/*
equation index: 1260
type: SIMPLE_ASSIGN
der(sCO2PBDesignPointCalculator._E_elec) = sCO2PBDesignPointCalculator.P_elec
*/
void sCO2SurrogatePBRig_eqFunction_1260(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1260};
  data->localData[0]->realVars[6] /* der(sCO2PBDesignPointCalculator.E_elec) STATE_DER */ = data->localData[0]->realVars[54] /* sCO2PBDesignPointCalculator.P_elec variable */;
  TRACE_POP
}
/*
equation index: 1261
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._eta_gross = sCO2PBDesignPointCalculator.powerBlock.W_gross / sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX
*/
void sCO2SurrogatePBRig_eqFunction_1261(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1261};
  data->localData[0]->realVars[56] /* sCO2PBDesignPointCalculator.eta_gross variable */ = DIVISION_SIM(data->localData[0]->realVars[215] /* sCO2PBDesignPointCalculator.powerBlock.W_gross variable */,data->localData[0]->realVars[227] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX variable */,"sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX",equationIndexes);
  TRACE_POP
}
/*
equation index: 1262
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._eta_Q = sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX / sCO2PBDesignPointCalculator.powerBlock.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_1262(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1262};
  data->localData[0]->realVars[55] /* sCO2PBDesignPointCalculator.eta_Q variable */ = DIVISION_SIM(data->localData[0]->realVars[227] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.Q_HX variable */,data->simulationInfo->realParameter[405] /* sCO2PBDesignPointCalculator.powerBlock.Q_HX_des PARAM */,"sCO2PBDesignPointCalculator.powerBlock.Q_HX_des",equationIndexes);
  TRACE_POP
}
/*
equation index: 1265
type: ARRAY_CALL_ASSIGN

_omcQuot_24544D505F31323633 = SolarTherm.Utilities.SurrogateModelsMultiOutput.predict(powerBlock.session, {150000000.0, powerBlock.T_in_ref_blk, powerBlock.p_high, powerBlock.PR, powerBlock.pinch_PHX, powerBlock.dTemp_HTF_PHX, powerBlock.raw_input[7], powerBlock.raw_input[8], T_amb_input}, 9, 2, powerBlock.X_max, powerBlock.X_min, powerBlock.out_max, powerBlock.out_min)
*/
void sCO2SurrogatePBRig_eqFunction_1265(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1265};
  real_array tmp2;
  real_array tmp3;
  real_array tmp4;
  real_array tmp5;
  real_array tmp6;
  real_array tmp7;
  array_alloc_scalar_real_array(&tmp2, 9, (modelica_real)150000000.0, (modelica_real)data->simulationInfo->realParameter[50] /* powerBlock.T_in_ref_blk PARAM */, (modelica_real)data->simulationInfo->realParameter[80] /* powerBlock.p_high PARAM */, (modelica_real)data->simulationInfo->realParameter[46] /* powerBlock.PR PARAM */, (modelica_real)data->simulationInfo->realParameter[81] /* powerBlock.pinch_PHX PARAM */, (modelica_real)data->simulationInfo->realParameter[69] /* powerBlock.dTemp_HTF_PHX PARAM */, (modelica_real)data->localData[0]->realVars[52] /* powerBlock.raw_input[7] variable */, (modelica_real)data->localData[0]->realVars[53] /* powerBlock.raw_input[8] variable */, (modelica_real)data->simulationInfo->realParameter[5] /* T_amb_input PARAM */);
  real_array_create(&tmp3, ((modelica_real*)&((&data->simulationInfo->realParameter[51] /* powerBlock.X_max[1] PARAM */)[calc_base_index_dims_subs(1, 9, ((modelica_integer) 1))])), 1, 9);
  real_array_create(&tmp4, ((modelica_real*)&((&data->simulationInfo->realParameter[60] /* powerBlock.X_min[1] PARAM */)[calc_base_index_dims_subs(1, 9, ((modelica_integer) 1))])), 1, 9);
  real_array_create(&tmp5, ((modelica_real*)&((&data->simulationInfo->realParameter[76] /* powerBlock.out_max[1] PARAM */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  real_array_create(&tmp6, ((modelica_real*)&((&data->simulationInfo->realParameter[78] /* powerBlock.out_min[1] PARAM */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  real_array_create(&tmp7, ((modelica_real*)&((&data->localData[0]->realVars[9] /* $TMP_1263[1] variable */)[calc_base_index_dims_subs(1, 2, ((modelica_integer) 1))])), 1, 2);
  copy_real_array_data(omc_SolarTherm_Utilities_SurrogateModelsMultiOutput_predict(threadData, data->simulationInfo->extObjs[0], tmp2, ((modelica_integer) 9), ((modelica_integer) 2), tmp3, tmp4, tmp5, tmp6), &tmp7);
  TRACE_POP
}
/*
equation index: 1263
type: SIMPLE_ASSIGN
eta_gross = $TMP_1263[1]
*/
void sCO2SurrogatePBRig_eqFunction_1263(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1263};
  data->localData[0]->realVars[42] /* eta_gross variable */ = data->localData[0]->realVars[9] /* $TMP_1263[1] variable */;
  TRACE_POP
}
/*
equation index: 1264
type: SIMPLE_ASSIGN
eta_Q = $TMP_1263[2]
*/
void sCO2SurrogatePBRig_eqFunction_1264(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1264};
  data->localData[0]->realVars[41] /* eta_Q variable */ = data->localData[0]->realVars[10] /* $TMP_1263[2] variable */;
  TRACE_POP
}
/*
equation index: 1266
type: SIMPLE_ASSIGN
powerBlock._Q_HX = eta_Q * powerBlock.Q_HX_des
*/
void sCO2SurrogatePBRig_eqFunction_1266(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1266};
  data->localData[0]->realVars[46] /* powerBlock.Q_HX variable */ = (data->localData[0]->realVars[41] /* eta_Q variable */) * (data->simulationInfo->realParameter[48] /* powerBlock.Q_HX_des PARAM */);
  TRACE_POP
}
/*
equation index: 1267
type: SIMPLE_ASSIGN
powerBlock._fluid_b._h_outflow = (source.ports[1].m_flow * source.state.h - powerBlock.Q_HX) / source.ports[1].m_flow
*/
void sCO2SurrogatePBRig_eqFunction_1267(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1267};
  data->localData[0]->realVars[50] /* powerBlock.fluid_b.h_outflow variable */ = DIVISION_SIM((data->localData[0]->realVars[357] /* source.ports[1].m_flow variable */) * (data->localData[0]->realVars[358] /* source.state.h variable */) - data->localData[0]->realVars[46] /* powerBlock.Q_HX variable */,data->localData[0]->realVars[357] /* source.ports[1].m_flow variable */,"source.ports[1].m_flow",equationIndexes);
  TRACE_POP
}
/*
equation index: 1268
type: SIMPLE_ASSIGN
powerBlock._W_gross = eta_gross * powerBlock.Q_HX
*/
void sCO2SurrogatePBRig_eqFunction_1268(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1268};
  data->localData[0]->realVars[47] /* powerBlock.W_gross variable */ = (data->localData[0]->realVars[42] /* eta_gross variable */) * (data->localData[0]->realVars[46] /* powerBlock.Q_HX variable */);
  TRACE_POP
}
/*
equation index: 1269
type: SIMPLE_ASSIGN
P_elec = powerBlock.W_gross * powerBlock.eta_motor * (1.0 - powerBlock.f_fixed_load)
*/
void sCO2SurrogatePBRig_eqFunction_1269(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1269};
  data->localData[0]->realVars[40] /* P_elec variable */ = (data->localData[0]->realVars[47] /* powerBlock.W_gross variable */) * ((data->simulationInfo->realParameter[70] /* powerBlock.eta_motor PARAM */) * (1.0 - data->simulationInfo->realParameter[71] /* powerBlock.f_fixed_load PARAM */));
  TRACE_POP
}
/*
equation index: 1270
type: SIMPLE_ASSIGN
powerBlock._eta_cycle_net = P_elec / powerBlock.Q_HX
*/
void sCO2SurrogatePBRig_eqFunction_1270(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1270};
  data->localData[0]->realVars[48] /* powerBlock.eta_cycle_net variable */ = DIVISION_SIM(data->localData[0]->realVars[40] /* P_elec variable */,data->localData[0]->realVars[46] /* powerBlock.Q_HX variable */,"powerBlock.Q_HX",equationIndexes);
  TRACE_POP
}
/*
equation index: 1271
type: SIMPLE_ASSIGN
der(powerBlock._E_net) = P_elec
*/
void sCO2SurrogatePBRig_eqFunction_1271(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1271};
  data->localData[0]->realVars[5] /* der(powerBlock.E_net) STATE_DER */ = data->localData[0]->realVars[40] /* P_elec variable */;
  TRACE_POP
}
/*
equation index: 1272
type: SIMPLE_ASSIGN
der(E_elec) = P_elec
*/
void sCO2SurrogatePBRig_eqFunction_1272(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1272};
  data->localData[0]->realVars[4] /* der(E_elec) STATE_DER */ = data->localData[0]->realVars[40] /* P_elec variable */;
  TRACE_POP
}
/*
equation index: 1278
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("CARBO HSP 40/70", {"Al2O3", "SiO2", "Fe2O3", "TiO2", "other"}, false, true, sCO2PBDesignPointCalculator.sink.X, "FixedBoundary");
*/
void sCO2SurrogatePBRig_eqFunction_1278(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1278};
  static const MMC_DEFSTRINGLIT(tmp8,15,"CARBO HSP 40/70");
  string_array tmp9;
  static const MMC_DEFSTRINGLIT(tmp10,5,"Al2O3");
  static const MMC_DEFSTRINGLIT(tmp11,4,"SiO2");
  static const MMC_DEFSTRINGLIT(tmp12,5,"Fe2O3");
  static const MMC_DEFSTRINGLIT(tmp13,4,"TiO2");
  static const MMC_DEFSTRINGLIT(tmp14,5,"other");
  real_array tmp15;
  static const MMC_DEFSTRINGLIT(tmp16,13,"FixedBoundary");
  array_alloc_scalar_string_array(&tmp9, 5, (modelica_string)MMC_REFSTRINGLIT(tmp10), (modelica_string)MMC_REFSTRINGLIT(tmp11), (modelica_string)MMC_REFSTRINGLIT(tmp12), (modelica_string)MMC_REFSTRINGLIT(tmp13), (modelica_string)MMC_REFSTRINGLIT(tmp14));
  real_array_create(&tmp15, ((modelica_real*)&((&data->simulationInfo->realParameter[767] /* sCO2PBDesignPointCalculator.sink.X[1] PARAM */)[calc_base_index_dims_subs(1, 5, ((modelica_integer) 1))])), 1, 5);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp8), tmp9, 0, 1, tmp15, MMC_REFSTRINGLIT(tmp16));
  TRACE_POP
}
/*
equation index: 1277
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("CARBO HSP 40/70", {"Al2O3", "SiO2", "Fe2O3", "TiO2", "other"}, false, false, sCO2PBDesignPointCalculator.source.X, "FixedBoundary");
*/
void sCO2SurrogatePBRig_eqFunction_1277(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1277};
  static const MMC_DEFSTRINGLIT(tmp17,15,"CARBO HSP 40/70");
  string_array tmp18;
  static const MMC_DEFSTRINGLIT(tmp19,5,"Al2O3");
  static const MMC_DEFSTRINGLIT(tmp20,4,"SiO2");
  static const MMC_DEFSTRINGLIT(tmp21,5,"Fe2O3");
  static const MMC_DEFSTRINGLIT(tmp22,4,"TiO2");
  static const MMC_DEFSTRINGLIT(tmp23,5,"other");
  real_array tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,13,"FixedBoundary");
  array_alloc_scalar_string_array(&tmp18, 5, (modelica_string)MMC_REFSTRINGLIT(tmp19), (modelica_string)MMC_REFSTRINGLIT(tmp20), (modelica_string)MMC_REFSTRINGLIT(tmp21), (modelica_string)MMC_REFSTRINGLIT(tmp22), (modelica_string)MMC_REFSTRINGLIT(tmp23));
  real_array_create(&tmp24, ((modelica_real*)&((&data->simulationInfo->realParameter[780] /* sCO2PBDesignPointCalculator.source.X[1] PARAM */)[calc_base_index_dims_subs(1, 5, ((modelica_integer) 1))])), 1, 5);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp17), tmp18, 0, 0, tmp24, MMC_REFSTRINGLIT(tmp25));
  TRACE_POP
}
/*
equation index: 1276
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("CARBO HSP 40/70", {"Al2O3", "SiO2", "Fe2O3", "TiO2", "other"}, false, true, sink.X, "FixedBoundary");
*/
void sCO2SurrogatePBRig_eqFunction_1276(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1276};
  static const MMC_DEFSTRINGLIT(tmp26,15,"CARBO HSP 40/70");
  string_array tmp27;
  static const MMC_DEFSTRINGLIT(tmp28,5,"Al2O3");
  static const MMC_DEFSTRINGLIT(tmp29,4,"SiO2");
  static const MMC_DEFSTRINGLIT(tmp30,5,"Fe2O3");
  static const MMC_DEFSTRINGLIT(tmp31,4,"TiO2");
  static const MMC_DEFSTRINGLIT(tmp32,5,"other");
  real_array tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,13,"FixedBoundary");
  array_alloc_scalar_string_array(&tmp27, 5, (modelica_string)MMC_REFSTRINGLIT(tmp28), (modelica_string)MMC_REFSTRINGLIT(tmp29), (modelica_string)MMC_REFSTRINGLIT(tmp30), (modelica_string)MMC_REFSTRINGLIT(tmp31), (modelica_string)MMC_REFSTRINGLIT(tmp32));
  real_array_create(&tmp33, ((modelica_real*)&((&data->simulationInfo->realParameter[789] /* sink.X[1] PARAM */)[calc_base_index_dims_subs(1, 5, ((modelica_integer) 1))])), 1, 5);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp26), tmp27, 0, 1, tmp33, MMC_REFSTRINGLIT(tmp34));
  TRACE_POP
}
/*
equation index: 1275
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("CARBO HSP 40/70", {"Al2O3", "SiO2", "Fe2O3", "TiO2", "other"}, false, false, source.X, "FixedBoundary");
*/
void sCO2SurrogatePBRig_eqFunction_1275(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1275};
  static const MMC_DEFSTRINGLIT(tmp35,15,"CARBO HSP 40/70");
  string_array tmp36;
  static const MMC_DEFSTRINGLIT(tmp37,5,"Al2O3");
  static const MMC_DEFSTRINGLIT(tmp38,4,"SiO2");
  static const MMC_DEFSTRINGLIT(tmp39,5,"Fe2O3");
  static const MMC_DEFSTRINGLIT(tmp40,4,"TiO2");
  static const MMC_DEFSTRINGLIT(tmp41,5,"other");
  real_array tmp42;
  static const MMC_DEFSTRINGLIT(tmp43,13,"FixedBoundary");
  array_alloc_scalar_string_array(&tmp36, 5, (modelica_string)MMC_REFSTRINGLIT(tmp37), (modelica_string)MMC_REFSTRINGLIT(tmp38), (modelica_string)MMC_REFSTRINGLIT(tmp39), (modelica_string)MMC_REFSTRINGLIT(tmp40), (modelica_string)MMC_REFSTRINGLIT(tmp41));
  real_array_create(&tmp42, ((modelica_real*)&((&data->simulationInfo->realParameter[802] /* source.X[1] PARAM */)[calc_base_index_dims_subs(1, 5, ((modelica_integer) 1))])), 1, 5);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp35), tmp36, 0, 0, tmp42, MMC_REFSTRINGLIT(tmp43));
  TRACE_POP
}
/*
equation index: 1274
type: ALGORITHM

  assert(sink.p >= 0.0, "Pressure (= " + String(sink.p, 6, 0, true) + " Pa) of medium \"" + "CARBO HSP 40/70" + "\" is negative
(Temperature = " + String(sink.medium.T, 6, 0, true) + " K)");
*/
void sCO2SurrogatePBRig_eqFunction_1274(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1274};
  modelica_boolean tmp44;
  static const MMC_DEFSTRINGLIT(tmp45,12,"Pressure (= ");
  modelica_string tmp46;
  static const MMC_DEFSTRINGLIT(tmp47,16," Pa) of medium \"");
  static const MMC_DEFSTRINGLIT(tmp48,15,"CARBO HSP 40/70");
  static const MMC_DEFSTRINGLIT(tmp49,29,"\" is negative\n(Temperature = ");
  modelica_string tmp50;
  static const MMC_DEFSTRINGLIT(tmp51,3," K)");
  static int tmp52 = 0;
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
  {
    tmp44 = GreaterEq(data->simulationInfo->realParameter[798] /* sink.p PARAM */,0.0);
    if(!tmp44)
    {
      tmp46 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[798] /* sink.p PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp45),tmp46);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp47));
      tmpMeta[2] = stringAppend(tmpMeta[1],MMC_REFSTRINGLIT(tmp48));
      tmpMeta[3] = stringAppend(tmpMeta[2],MMC_REFSTRINGLIT(tmp49));
      tmp50 = modelica_real_to_modelica_string(data->localData[0]->realVars[334] /* sink.medium.T variable */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[4] = stringAppend(tmpMeta[3],tmp50);
      tmpMeta[5] = stringAppend(tmpMeta[4],MMC_REFSTRINGLIT(tmp51));
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4529,7,4530,76,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsink.p >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[5]));
      }
    }
  }
  TRACE_POP
}
/*
equation index: 1273
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.sink.p >= 0.0, "Pressure (= " + String(sCO2PBDesignPointCalculator.sink.p, 6, 0, true) + " Pa) of medium \"" + "CARBO HSP 40/70" + "\" is negative
(Temperature = " + String(sCO2PBDesignPointCalculator.sink.medium.T, 6, 0, true) + " K)");
*/
void sCO2SurrogatePBRig_eqFunction_1273(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1273};
  modelica_boolean tmp53;
  static const MMC_DEFSTRINGLIT(tmp54,12,"Pressure (= ");
  modelica_string tmp55;
  static const MMC_DEFSTRINGLIT(tmp56,16," Pa) of medium \"");
  static const MMC_DEFSTRINGLIT(tmp57,15,"CARBO HSP 40/70");
  static const MMC_DEFSTRINGLIT(tmp58,29,"\" is negative\n(Temperature = ");
  modelica_string tmp59;
  static const MMC_DEFSTRINGLIT(tmp60,3," K)");
  static int tmp61 = 0;
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
  {
    tmp53 = GreaterEq(data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */,0.0);
    if(!tmp53)
    {
      tmp55 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[776] /* sCO2PBDesignPointCalculator.sink.p PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp54),tmp55);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp56));
      tmpMeta[2] = stringAppend(tmpMeta[1],MMC_REFSTRINGLIT(tmp57));
      tmpMeta[3] = stringAppend(tmpMeta[2],MMC_REFSTRINGLIT(tmp58));
      tmp59 = modelica_real_to_modelica_string(data->localData[0]->realVars[306] /* sCO2PBDesignPointCalculator.sink.medium.T variable */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[4] = stringAppend(tmpMeta[3],tmp59);
      tmpMeta[5] = stringAppend(tmpMeta[4],MMC_REFSTRINGLIT(tmp60));
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Media/package.mo",4529,7,4530,76,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.sink.p >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_withEquationIndexes(threadData, info, equationIndexes, MMC_STRINGDATA(tmpMeta[5]));
      }
    }
  }
  TRACE_POP
}

OMC_DISABLE_OPT
int sCO2SurrogatePBRig_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  sCO2SurrogatePBRig_functionLocalKnownVars(data, threadData);
  sCO2SurrogatePBRig_eqFunction_992(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1209(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1210(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1211(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1212(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1213(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1214(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1215(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1216(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1217(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1218(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1219(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1220(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1221(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1222(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1223(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1224(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1225(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1226(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1227(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1228(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1229(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1230(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1231(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1232(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1233(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1234(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1235(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1236(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1237(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1238(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1239(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1240(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1241(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1242(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1243(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1244(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1245(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1246(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1247(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1248(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1249(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1250(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1251(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1252(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1253(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1254(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1255(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1256(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1257(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1258(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1259(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1260(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1261(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1262(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1265(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1263(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1264(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1266(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1267(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1268(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1269(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1270(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1271(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1272(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1278(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1277(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1276(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1275(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1274(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1273(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int sCO2SurrogatePBRig_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void sCO2SurrogatePBRig_eqFunction_1265(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_1263(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_1264(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_1266(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_1268(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_1269(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_1271(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_1272(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_992(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_1209(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_1211(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_1218(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_1240(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_1241(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_1242(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_1258(DATA* data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_eqFunction_1260(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    sCO2SurrogatePBRig_eqFunction_1265(data, threadData);

    sCO2SurrogatePBRig_eqFunction_1263(data, threadData);

    sCO2SurrogatePBRig_eqFunction_1264(data, threadData);

    sCO2SurrogatePBRig_eqFunction_1266(data, threadData);

    sCO2SurrogatePBRig_eqFunction_1268(data, threadData);

    sCO2SurrogatePBRig_eqFunction_1269(data, threadData);

    sCO2SurrogatePBRig_eqFunction_1271(data, threadData);

    sCO2SurrogatePBRig_eqFunction_1272(data, threadData);

    sCO2SurrogatePBRig_eqFunction_992(data, threadData);

    sCO2SurrogatePBRig_eqFunction_1209(data, threadData);

    sCO2SurrogatePBRig_eqFunction_1211(data, threadData);

    sCO2SurrogatePBRig_eqFunction_1218(data, threadData);

    sCO2SurrogatePBRig_eqFunction_1240(data, threadData);

    sCO2SurrogatePBRig_eqFunction_1241(data, threadData);

    sCO2SurrogatePBRig_eqFunction_1242(data, threadData);

    sCO2SurrogatePBRig_eqFunction_1258(data, threadData);

    sCO2SurrogatePBRig_eqFunction_1260(data, threadData);
}

int sCO2SurrogatePBRig_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  sCO2SurrogatePBRig_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "sCO2SurrogatePBRig_12jac.h"
#include "sCO2SurrogatePBRig_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks sCO2SurrogatePBRig_callback = {
   (int (*)(DATA *, threadData_t *, void *)) sCO2SurrogatePBRig_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) sCO2SurrogatePBRig_performQSSSimulation,
   sCO2SurrogatePBRig_updateContinuousSystem,
   sCO2SurrogatePBRig_callExternalObjectDestructors,
   sCO2SurrogatePBRig_initialNonLinearSystem,
   sCO2SurrogatePBRig_initialLinearSystem,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   sCO2SurrogatePBRig_initializeStateSets,
   #else
   NULL,
   #endif
   sCO2SurrogatePBRig_initializeDAEmodeData,
   sCO2SurrogatePBRig_functionODE,
   sCO2SurrogatePBRig_functionAlgebraics,
   sCO2SurrogatePBRig_functionDAE,
   sCO2SurrogatePBRig_functionLocalKnownVars,
   sCO2SurrogatePBRig_input_function,
   sCO2SurrogatePBRig_input_function_init,
   sCO2SurrogatePBRig_input_function_updateStartValues,
   sCO2SurrogatePBRig_data_function,
   sCO2SurrogatePBRig_output_function,
   sCO2SurrogatePBRig_setc_function,
   sCO2SurrogatePBRig_function_storeDelayed,
   sCO2SurrogatePBRig_updateBoundVariableAttributes,
   sCO2SurrogatePBRig_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   sCO2SurrogatePBRig_functionInitialEquations_lambda0,
   sCO2SurrogatePBRig_functionRemovedInitialEquations,
   sCO2SurrogatePBRig_updateBoundParameters,
   sCO2SurrogatePBRig_checkForAsserts,
   sCO2SurrogatePBRig_function_ZeroCrossingsEquations,
   sCO2SurrogatePBRig_function_ZeroCrossings,
   sCO2SurrogatePBRig_function_updateRelations,
   sCO2SurrogatePBRig_zeroCrossingDescription,
   sCO2SurrogatePBRig_relationDescription,
   sCO2SurrogatePBRig_function_initSample,
   sCO2SurrogatePBRig_INDEX_JAC_A,
   sCO2SurrogatePBRig_INDEX_JAC_B,
   sCO2SurrogatePBRig_INDEX_JAC_C,
   sCO2SurrogatePBRig_INDEX_JAC_D,
   sCO2SurrogatePBRig_INDEX_JAC_F,
   sCO2SurrogatePBRig_initialAnalyticJacobianA,
   sCO2SurrogatePBRig_initialAnalyticJacobianB,
   sCO2SurrogatePBRig_initialAnalyticJacobianC,
   sCO2SurrogatePBRig_initialAnalyticJacobianD,
   sCO2SurrogatePBRig_initialAnalyticJacobianF,
   sCO2SurrogatePBRig_functionJacA_column,
   sCO2SurrogatePBRig_functionJacB_column,
   sCO2SurrogatePBRig_functionJacC_column,
   sCO2SurrogatePBRig_functionJacD_column,
   sCO2SurrogatePBRig_functionJacF_column,
   sCO2SurrogatePBRig_linear_model_frame,
   sCO2SurrogatePBRig_linear_model_datarecovery_frame,
   sCO2SurrogatePBRig_mayer,
   sCO2SurrogatePBRig_lagrange,
   sCO2SurrogatePBRig_pickUpBoundsForInputsInOptimization,
   sCO2SurrogatePBRig_setInputData,
   sCO2SurrogatePBRig_getTimeGrid,
   sCO2SurrogatePBRig_symbolicInlineSystem,
   sCO2SurrogatePBRig_function_initSynchronous,
   sCO2SurrogatePBRig_function_updateSynchronous,
   sCO2SurrogatePBRig_function_equationsSynchronous,
   sCO2SurrogatePBRig_inputNames,
   NULL,
   NULL,
   NULL,
   -1

};

#define _OMC_LIT_RESOURCE_0_name_data "Complex"
#define _OMC_LIT_RESOURCE_0_dir_data "/usr/lib/omlibrary"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_name,7,_OMC_LIT_RESOURCE_0_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir,18,_OMC_LIT_RESOURCE_0_dir_data);

#define _OMC_LIT_RESOURCE_1_name_data "Modelica"
#define _OMC_LIT_RESOURCE_1_dir_data "/usr/lib/omlibrary/Modelica 3.2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_name,8,_OMC_LIT_RESOURCE_1_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir,33,_OMC_LIT_RESOURCE_1_dir_data);

#define _OMC_LIT_RESOURCE_2_name_data "ModelicaServices"
#define _OMC_LIT_RESOURCE_2_dir_data "/usr/lib/omlibrary/ModelicaServices 3.2.2"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_name,16,_OMC_LIT_RESOURCE_2_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir,41,_OMC_LIT_RESOURCE_2_dir_data);

#define _OMC_LIT_RESOURCE_3_name_data "SolarTherm"
#define _OMC_LIT_RESOURCE_3_dir_data "/home/philgun/.local/lib/omlibrary/SolarTherm"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_name,10,_OMC_LIT_RESOURCE_3_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir,45,_OMC_LIT_RESOURCE_3_dir_data);

#define _OMC_LIT_RESOURCE_4_name_data "sCO2SurrogatePBRig"
#define _OMC_LIT_RESOURCE_4_dir_data "/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/sCO2-test-data/simulation_surrogate"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,18,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,106,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void sCO2SurrogatePBRig_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &sCO2SurrogatePBRig_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "sCO2SurrogatePBRig";
  data->modelData->modelFilePrefix = "sCO2SurrogatePBRig";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/sCO2-test-data/simulation_surrogate";
  data->modelData->modelGUID = "{f0e2a0f2-ca69-49a2-8f4b-b222ff045cff}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "sCO2SurrogatePBRig_init.c"
    ;
  static const char contents_info[] =
    #include "sCO2SurrogatePBRig_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "sCO2SurrogatePBRig_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "sCO2SurrogatePBRig_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 4;
  data->modelData->nVariablesReal = 360;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 4;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 814;
  data->modelData->nParametersInteger = 25;
  data->modelData->nParametersBoolean = 28;
  data->modelData->nParametersString = 2;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 298;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 4;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 49;
  
  data->modelData->modelDataXml.fileName = "sCO2SurrogatePBRig_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 83;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1891;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 3;
  data->modelData->nNonLinearSystems = 47;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 8;
  data->modelData->nOptimizeConstraints = 0;
  data->modelData->nOptimizeFinalConstraints = 0;
  
  data->modelData->nDelayExpressions = 0;
  
  data->modelData->nClocks = 0;
  data->modelData->nSubClocks = 0;
  
  data->modelData->nSensitivityVars = 0;
  data->modelData->nSensitivityParamVars = 0;
  data->modelData->nSetcVars = 0;
  data->modelData->ndataReconVars = 0;
}

static int rml_execution_failed()
{
  fflush(NULL);
  fprintf(stderr, "Execution failed!\n");
  fflush(NULL);
  return 1;
}

#if defined(threadData)
#undef threadData
#endif
/* call the simulation runtime main from our main! */
int main(int argc, char**argv)
{
  int res;
  DATA data;
  MODEL_DATA modelData;
  SIMULATION_INFO simInfo;
  data.modelData = &modelData;
  data.simulationInfo = &simInfo;
  measure_time_flag = 0;
  compiledInDAEMode = 0;
  compiledWithSymSolver = 0;
  MMC_INIT(0);
  omc_alloc_interface.init();
  {
    MMC_TRY_TOP()
  
    MMC_TRY_STACK()
  
    sCO2SurrogatePBRig_setupDataStruc(&data, threadData);
    res = _main_SimulationRuntime(argc, argv, &data, threadData);
    
    MMC_ELSE()
    rml_execution_failed();
    fprintf(stderr, "Stack overflow detected and was not caught.\nSend us a bug report at https://trac.openmodelica.org/OpenModelica/newticket\n    Include the following trace:\n");
    printStacktraceMessages();
    fflush(NULL);
    return 1;
    MMC_CATCH_STACK()
    
    MMC_CATCH_TOP(return rml_execution_failed());
  }

  fflush(NULL);
  EXIT(res);
  return res;
}

#ifdef __cplusplus
}
#endif


