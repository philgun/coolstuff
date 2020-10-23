/* Main Simulation File */

#if defined(__cplusplus)
extern "C" {
#endif

#include "sCO2PBCalculator_model.h"
#include "simulation/solver/events.h"

#define prefixedName_performSimulation sCO2PBCalculator_performSimulation
#define prefixedName_updateContinuousSystem sCO2PBCalculator_updateContinuousSystem
#include <simulation/solver/perform_simulation.c.inc>

#define prefixedName_performQSSSimulation sCO2PBCalculator_performQSSSimulation
#include <simulation/solver/perform_qss_simulation.c.inc>

/* dummy VARINFO and FILEINFO */
const FILE_INFO dummyFILE_INFO = omc_dummyFileInfo;
const VAR_INFO dummyVAR_INFO = omc_dummyVarInfo;

int sCO2PBCalculator_input_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int sCO2PBCalculator_input_function_init(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int sCO2PBCalculator_input_function_updateStartValues(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int sCO2PBCalculator_inputNames(DATA *data, char ** names){
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int sCO2PBCalculator_data_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  TRACE_POP
  return 0;
}

int sCO2PBCalculator_output_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}

int sCO2PBCalculator_setc_function(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/*
equation index: 947
type: SIMPLE_ASSIGN
powerBlock._cooler._P_cooling = min(200.0 * $cse27, powerBlock.cooler.P_cool_des)
*/
void sCO2PBCalculator_eqFunction_947(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,947};
  data->localData[0]->realVars[194] /* powerBlock.cooler.P_cooling variable */ = fmin((200.0) * (data->localData[0]->realVars[24] /* $cse27 variable */),data->simulationInfo->realParameter[323] /* powerBlock.cooler.P_cool_des PARAM */);
  TRACE_POP
}
void sCO2PBCalculator_eqFunction_948(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_949(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_950(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_951(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_952(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_953(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_954(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_955(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_956(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_957(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_958(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_959(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_960(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_961(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_962(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_963(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_964(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_965(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_966(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_967(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_968(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_969(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_970(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_971(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_972(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_973(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_974(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_975(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_976(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_977(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_978(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_979(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_980(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_981(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_982(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_983(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_984(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_985(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_986(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_987(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_988(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_989(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_990(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_991(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_992(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_993(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_994(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_995(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_996(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_997(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_998(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_999(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1000(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1001(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1002(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1003(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1004(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1005(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1006(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1007(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1008(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1009(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1010(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1011(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1012(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1013(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1014(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1015(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1016(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1017(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1018(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1019(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1020(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1021(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1022(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1023(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1024(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1025(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1026(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1027(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1028(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1029(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1030(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1031(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1032(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1033(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1034(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1035(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1036(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1037(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1038(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1039(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1040(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1041(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1042(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1043(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1044(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1045(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1046(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1047(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1048(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1049(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1050(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1051(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1052(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1053(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1054(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1055(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1056(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1057(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1058(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1059(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1060(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1061(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1062(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1063(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1064(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1065(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1066(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1067(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1068(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1069(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1070(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1071(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1072(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1073(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1074(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1075(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1076(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1077(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1078(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1079(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1080(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1081(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1082(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1083(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1084(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1085(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1086(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1087(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1088(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1089(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1163(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1162(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1161(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1160(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1159(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1158(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1157(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1156(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1155(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1154(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1153(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1152(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1151(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1150(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1149(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1148(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1147(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1146(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1145(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1144(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1143(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1142(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1141(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1140(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1139(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1138(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1137(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1136(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1135(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1134(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1133(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1132(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1131(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1130(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1129(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1128(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1127(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1126(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1125(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1124(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1123(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1122(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1121(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1120(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1119(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1118(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1117(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1116(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1115(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1114(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1113(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1112(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1111(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1110(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1109(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1108(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1107(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1106(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1105(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1104(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1103(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1102(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1101(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1100(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1099(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1098(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1097(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1096(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1095(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1094(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1093(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1092(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1091(DATA*, threadData_t*);
void sCO2PBCalculator_eqFunction_1090(DATA*, threadData_t*);
/*
equation index: 1164
indexNonlinear: 47
type: NONLINEAR

vars: {powerBlock._exchanger._h_CO2[15], powerBlock._LTR._h_from_turb[1], powerBlock._exchanger._CO2_port_b._m_flow, powerBlock._LTR._state_from_turb[15]._p, powerBlock._HTR._h_from_turb[2], powerBlock._HTR._h_from_comp[2], powerBlock._LTR._h_from_turb[15], powerBlock._LTR._h_from_turb[14], powerBlock._LTR._h_from_comp[14], powerBlock._LTR._h_from_comp[13], powerBlock._LTR._h_from_turb[12], powerBlock._LTR._h_from_comp[11], powerBlock._LTR._h_from_comp[10], powerBlock._LTR._h_from_turb[10], powerBlock._LTR._h_from_comp[9], powerBlock._LTR._h_from_comp[8], powerBlock._LTR._h_from_comp[7], powerBlock._LTR._h_from_turb[7], powerBlock._LTR._h_from_turb[8], powerBlock._LTR._h_from_turb[9], powerBlock._LTR._h_from_turb[6], powerBlock._LTR._h_from_comp[6], powerBlock._LTR._h_from_turb[5], powerBlock._LTR._h_from_comp[4], powerBlock._LTR._h_from_turb[4], powerBlock._LTR._h_from_comp[3], powerBlock._LTR._h_from_comp[2], powerBlock._LTR._h_from_turb[2], powerBlock._HTR._h_from_comp[3], powerBlock._HTR._h_from_turb[3], powerBlock._HTR._h_from_comp[4], powerBlock._HTR._h_from_turb[4], powerBlock._HTR._h_from_comp[5], powerBlock._HTR._h_from_turb[5], powerBlock._HTR._h_from_turb[6], powerBlock._HTR._h_from_turb[7], powerBlock._HTR._h_from_turb[8], powerBlock._HTR._h_from_turb[9], powerBlock._HTR._h_from_turb[10], powerBlock._HTR._h_from_comp[9], powerBlock._HTR._h_from_comp[8], powerBlock._HTR._h_from_comp[7], powerBlock._HTR._h_from_comp[6], powerBlock._HTR._h_from_comp[10], powerBlock._HTR._h_from_turb[11], powerBlock._HTR._h_from_turb[12], powerBlock._HTR._h_from_comp[13], powerBlock._HTR._h_from_comp[12], powerBlock._HTR._h_from_comp[11], powerBlock._HTR._h_from_turb[14], powerBlock._HTR._h_from_turb[13], powerBlock._HTR._h_from_comp[14], powerBlock._exchanger._h_CO2[1], powerBlock._exchanger._h_CO2[3], powerBlock._exchanger._h_CO2[4], powerBlock._exchanger._h_CO2[2], powerBlock._exchanger._h_CO2[5], powerBlock._exchanger._h_CO2[6], powerBlock._exchanger._h_CO2[7], powerBlock._exchanger._h_CO2[8], powerBlock._exchanger._h_CO2[9], powerBlock._exchanger._h_CO2[10], powerBlock._exchanger._h_CO2[11], powerBlock._exchanger._h_CO2[13], powerBlock._exchanger._h_CO2[12], powerBlock._exchanger._h_CO2[14], powerBlock._reCompressor._p_out, powerBlock._turbine._C_spouting, powerBlock._LTR._h_from_turb[3], powerBlock._LTR._h_from_comp[5], powerBlock._LTR._h_from_turb[11], powerBlock._LTR._h_from_comp[12], powerBlock._LTR._h_from_turb[13], powerBlock._LTR._h_from_comp[15]}
eqns: {948, 949, 950, 951, 952, 953, 954, 955, 956, 957, 958, 959, 960, 961, 962, 963, 964, 965, 966, 967, 968, 969, 970, 971, 972, 973, 974, 975, 976, 977, 978, 979, 980, 981, 982, 983, 984, 985, 986, 987, 988, 989, 990, 991, 992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001, 1002, 1003, 1004, 1005, 1006, 1007, 1008, 1009, 1010, 1011, 1012, 1013, 1014, 1015, 1016, 1017, 1018, 1019, 1020, 1021, 1022, 1023, 1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033, 1034, 1035, 1036, 1037, 1038, 1039, 1040, 1041, 1042, 1043, 1044, 1045, 1046, 1047, 1048, 1049, 1050, 1051, 1052, 1053, 1054, 1055, 1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065, 1066, 1067, 1068, 1069, 1070, 1071, 1072, 1073, 1074, 1075, 1076, 1077, 1078, 1079, 1080, 1081, 1082, 1083, 1084, 1085, 1086, 1087, 1088, 1089, 1163, 1162, 1161, 1160, 1159, 1158, 1157, 1156, 1155, 1154, 1153, 1152, 1151, 1150, 1149, 1148, 1147, 1146, 1145, 1144, 1143, 1142, 1141, 1140, 1139, 1138, 1137, 1136, 1135, 1134, 1133, 1132, 1131, 1130, 1129, 1128, 1127, 1126, 1125, 1124, 1123, 1122, 1121, 1120, 1119, 1118, 1117, 1116, 1115, 1114, 1113, 1112, 1111, 1110, 1109, 1108, 1107, 1106, 1105, 1104, 1103, 1102, 1101, 1100, 1099, 1098, 1097, 1096, 1095, 1094, 1093, 1092, 1091, 1090}
*/
void sCO2PBCalculator_eqFunction_1164(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1164};
  int retValue;
  if(ACTIVE_STREAM(LOG_DT))
  {
    infoStreamPrint(LOG_DT, 1, "Solving nonlinear system 1164 (STRICT TEARING SET if tearing enabled) at time = %18.10e", data->localData[0]->timeValue);
    messageClose(LOG_DT);
  }
  /* get old value */
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[0] = data->localData[0]->realVars[239] /* powerBlock.exchanger.h_CO2[15] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[1] = data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[1] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[2] = data->localData[0]->realVars[203] /* powerBlock.exchanger.CO2_port_b.m_flow variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[3] = data->localData[0]->realVars[190] /* powerBlock.LTR.state_from_turb[15].p variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[4] = data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[5] = data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[6] = data->localData[0]->realVars[188] /* powerBlock.LTR.h_from_turb[15] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[7] = data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[14] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[8] = data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[14] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[9] = data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[13] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[10] = data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[12] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[11] = data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[11] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[12] = data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[10] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[13] = data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[10] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[14] = data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[9] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[15] = data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[8] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[16] = data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[7] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[17] = data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[7] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[18] = data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[8] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[19] = data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[9] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[20] = data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[6] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[21] = data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[6] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[22] = data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[5] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[23] = data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[4] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[24] = data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[4] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[25] = data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[3] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[26] = data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[2] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[27] = data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[2] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[28] = data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[29] = data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[30] = data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[31] = data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[32] = data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[33] = data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[34] = data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[35] = data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[36] = data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[37] = data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[38] = data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[39] = data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[40] = data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[41] = data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[42] = data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[43] = data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[44] = data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[45] = data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[46] = data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[47] = data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[48] = data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[49] = data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[50] = data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[51] = data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[52] = data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[1] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[53] = data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[3] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[54] = data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[4] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[55] = data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[2] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[56] = data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[5] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[57] = data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[6] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[58] = data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[7] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[59] = data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[8] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[60] = data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[9] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[61] = data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[10] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[62] = data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[11] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[63] = data->localData[0]->realVars[237] /* powerBlock.exchanger.h_CO2[13] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[64] = data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[12] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[65] = data->localData[0]->realVars[238] /* powerBlock.exchanger.h_CO2[14] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[66] = data->localData[0]->realVars[267] /* powerBlock.reCompressor.p_out variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[67] = data->localData[0]->realVars[275] /* powerBlock.turbine.C_spouting variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[68] = data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[3] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[69] = data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[5] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[70] = data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[11] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[71] = data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[12] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[72] = data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[13] variable */;
  data->simulationInfo->nonlinearSystemData[47].nlsxOld[73] = data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_comp[15] variable */;
  retValue = solve_nonlinear_system(data, threadData, 47);
  /* check if solution process was successful */
  if (retValue > 0){
    const int indexes[2] = {1,1164};
    throwStreamPrintWithEquationIndexes(threadData, indexes, "Solving non-linear system 1164 failed at time=%.15g.\nFor more information please use -lv LOG_NLS.", data->localData[0]->timeValue);
  }
  /* write solution */
  data->localData[0]->realVars[239] /* powerBlock.exchanger.h_CO2[15] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[0];
  data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[1] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[1];
  data->localData[0]->realVars[203] /* powerBlock.exchanger.CO2_port_b.m_flow variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[2];
  data->localData[0]->realVars[190] /* powerBlock.LTR.state_from_turb[15].p variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[3];
  data->localData[0]->realVars[98] /* powerBlock.HTR.h_from_turb[2] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[4];
  data->localData[0]->realVars[85] /* powerBlock.HTR.h_from_comp[2] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[5];
  data->localData[0]->realVars[188] /* powerBlock.LTR.h_from_turb[15] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[6];
  data->localData[0]->realVars[187] /* powerBlock.LTR.h_from_turb[14] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[7];
  data->localData[0]->realVars[172] /* powerBlock.LTR.h_from_comp[14] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[8];
  data->localData[0]->realVars[171] /* powerBlock.LTR.h_from_comp[13] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[9];
  data->localData[0]->realVars[185] /* powerBlock.LTR.h_from_turb[12] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[10];
  data->localData[0]->realVars[169] /* powerBlock.LTR.h_from_comp[11] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[11];
  data->localData[0]->realVars[168] /* powerBlock.LTR.h_from_comp[10] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[12];
  data->localData[0]->realVars[183] /* powerBlock.LTR.h_from_turb[10] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[13];
  data->localData[0]->realVars[167] /* powerBlock.LTR.h_from_comp[9] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[14];
  data->localData[0]->realVars[166] /* powerBlock.LTR.h_from_comp[8] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[15];
  data->localData[0]->realVars[165] /* powerBlock.LTR.h_from_comp[7] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[16];
  data->localData[0]->realVars[180] /* powerBlock.LTR.h_from_turb[7] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[17];
  data->localData[0]->realVars[181] /* powerBlock.LTR.h_from_turb[8] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[18];
  data->localData[0]->realVars[182] /* powerBlock.LTR.h_from_turb[9] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[19];
  data->localData[0]->realVars[179] /* powerBlock.LTR.h_from_turb[6] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[20];
  data->localData[0]->realVars[164] /* powerBlock.LTR.h_from_comp[6] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[21];
  data->localData[0]->realVars[178] /* powerBlock.LTR.h_from_turb[5] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[22];
  data->localData[0]->realVars[162] /* powerBlock.LTR.h_from_comp[4] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[23];
  data->localData[0]->realVars[177] /* powerBlock.LTR.h_from_turb[4] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[24];
  data->localData[0]->realVars[161] /* powerBlock.LTR.h_from_comp[3] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[25];
  data->localData[0]->realVars[160] /* powerBlock.LTR.h_from_comp[2] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[26];
  data->localData[0]->realVars[175] /* powerBlock.LTR.h_from_turb[2] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[27];
  data->localData[0]->realVars[86] /* powerBlock.HTR.h_from_comp[3] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[28];
  data->localData[0]->realVars[99] /* powerBlock.HTR.h_from_turb[3] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[29];
  data->localData[0]->realVars[87] /* powerBlock.HTR.h_from_comp[4] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[30];
  data->localData[0]->realVars[100] /* powerBlock.HTR.h_from_turb[4] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[31];
  data->localData[0]->realVars[88] /* powerBlock.HTR.h_from_comp[5] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[32];
  data->localData[0]->realVars[101] /* powerBlock.HTR.h_from_turb[5] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[33];
  data->localData[0]->realVars[102] /* powerBlock.HTR.h_from_turb[6] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[34];
  data->localData[0]->realVars[103] /* powerBlock.HTR.h_from_turb[7] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[35];
  data->localData[0]->realVars[104] /* powerBlock.HTR.h_from_turb[8] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[36];
  data->localData[0]->realVars[105] /* powerBlock.HTR.h_from_turb[9] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[37];
  data->localData[0]->realVars[106] /* powerBlock.HTR.h_from_turb[10] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[38];
  data->localData[0]->realVars[92] /* powerBlock.HTR.h_from_comp[9] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[39];
  data->localData[0]->realVars[91] /* powerBlock.HTR.h_from_comp[8] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[40];
  data->localData[0]->realVars[90] /* powerBlock.HTR.h_from_comp[7] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[41];
  data->localData[0]->realVars[89] /* powerBlock.HTR.h_from_comp[6] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[42];
  data->localData[0]->realVars[93] /* powerBlock.HTR.h_from_comp[10] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[43];
  data->localData[0]->realVars[107] /* powerBlock.HTR.h_from_turb[11] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[44];
  data->localData[0]->realVars[108] /* powerBlock.HTR.h_from_turb[12] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[45];
  data->localData[0]->realVars[96] /* powerBlock.HTR.h_from_comp[13] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[46];
  data->localData[0]->realVars[95] /* powerBlock.HTR.h_from_comp[12] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[47];
  data->localData[0]->realVars[94] /* powerBlock.HTR.h_from_comp[11] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[48];
  data->localData[0]->realVars[110] /* powerBlock.HTR.h_from_turb[14] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[49];
  data->localData[0]->realVars[109] /* powerBlock.HTR.h_from_turb[13] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[50];
  data->localData[0]->realVars[97] /* powerBlock.HTR.h_from_comp[14] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[51];
  data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[1] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[52];
  data->localData[0]->realVars[227] /* powerBlock.exchanger.h_CO2[3] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[53];
  data->localData[0]->realVars[228] /* powerBlock.exchanger.h_CO2[4] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[54];
  data->localData[0]->realVars[226] /* powerBlock.exchanger.h_CO2[2] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[55];
  data->localData[0]->realVars[229] /* powerBlock.exchanger.h_CO2[5] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[56];
  data->localData[0]->realVars[230] /* powerBlock.exchanger.h_CO2[6] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[57];
  data->localData[0]->realVars[231] /* powerBlock.exchanger.h_CO2[7] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[58];
  data->localData[0]->realVars[232] /* powerBlock.exchanger.h_CO2[8] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[59];
  data->localData[0]->realVars[233] /* powerBlock.exchanger.h_CO2[9] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[60];
  data->localData[0]->realVars[234] /* powerBlock.exchanger.h_CO2[10] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[61];
  data->localData[0]->realVars[235] /* powerBlock.exchanger.h_CO2[11] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[62];
  data->localData[0]->realVars[237] /* powerBlock.exchanger.h_CO2[13] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[63];
  data->localData[0]->realVars[236] /* powerBlock.exchanger.h_CO2[12] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[64];
  data->localData[0]->realVars[238] /* powerBlock.exchanger.h_CO2[14] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[65];
  data->localData[0]->realVars[267] /* powerBlock.reCompressor.p_out variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[66];
  data->localData[0]->realVars[275] /* powerBlock.turbine.C_spouting variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[67];
  data->localData[0]->realVars[176] /* powerBlock.LTR.h_from_turb[3] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[68];
  data->localData[0]->realVars[163] /* powerBlock.LTR.h_from_comp[5] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[69];
  data->localData[0]->realVars[184] /* powerBlock.LTR.h_from_turb[11] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[70];
  data->localData[0]->realVars[170] /* powerBlock.LTR.h_from_comp[12] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[71];
  data->localData[0]->realVars[186] /* powerBlock.LTR.h_from_turb[13] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[72];
  data->localData[0]->realVars[173] /* powerBlock.LTR.h_from_comp[15] variable */ = data->simulationInfo->nonlinearSystemData[47].nlsx[73];
  TRACE_POP
}
/*
equation index: 1165
type: SIMPLE_ASSIGN
powerBlock._cooler._T_out = SolarTherm.Media.CO2.CO2_utilities.T_p_h(powerBlock.LTR.state_from_turb[15].p, powerBlock.mainCompressor.state_a.h, tableIDT_p_h)
*/
void sCO2PBCalculator_eqFunction_1165(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1165};
  data->localData[0]->realVars[196] /* powerBlock.cooler.T_out variable */ = omc_SolarTherm_Media_CO2_CO2__utilities_T__p__h(threadData, data->localData[0]->realVars[190] /* powerBlock.LTR.state_from_turb[15].p variable */, data->localData[0]->realVars[262] /* powerBlock.mainCompressor.state_a.h variable */, data->simulationInfo->extObjs[36]);
  TRACE_POP
}
/*
equation index: 1166
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT[2] = powerBlock.cooler.T_out - T_amb_input
*/
void sCO2PBCalculator_eqFunction_1166(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1166};
  data->localData[0]->realVars[198] /* powerBlock.cooler.deltaT[2] variable */ = data->localData[0]->realVars[196] /* powerBlock.cooler.T_out variable */ - data->simulationInfo->realParameter[4] /* T_amb_input PARAM */;
  TRACE_POP
}
/*
equation index: 1167
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._W_comp = powerBlock.cooler.port_b.m_flow * (powerBlock.mainCompressor.state_a.h - powerBlock.LTR.h_from_comp[1])
*/
void sCO2PBCalculator_eqFunction_1167(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1167};
  data->localData[0]->realVars[255] /* powerBlock.mainCompressor.W_comp variable */ = (data->localData[0]->realVars[199] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[262] /* powerBlock.mainCompressor.state_a.h variable */ - data->localData[0]->realVars[159] /* powerBlock.LTR.h_from_comp[1] variable */);
  TRACE_POP
}
/*
equation index: 1168
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT[15] = powerBlock.LTR.T_from_turb[15] - powerBlock.LTR.T_from_comp[15]
*/
void sCO2PBCalculator_eqFunction_1168(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1168};
  data->localData[0]->realVars[158] /* powerBlock.LTR.deltaT[15] variable */ = data->localData[0]->realVars[143] /* powerBlock.LTR.T_from_turb[15] variable */ - data->localData[0]->realVars[128] /* powerBlock.LTR.T_from_comp[15] variable */;
  TRACE_POP
}
/*
equation index: 1169
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT[11] = powerBlock.LTR.T_from_turb[11] - powerBlock.LTR.T_from_comp[11]
*/
void sCO2PBCalculator_eqFunction_1169(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1169};
  data->localData[0]->realVars[154] /* powerBlock.LTR.deltaT[11] variable */ = data->localData[0]->realVars[139] /* powerBlock.LTR.T_from_turb[11] variable */ - data->localData[0]->realVars[124] /* powerBlock.LTR.T_from_comp[11] variable */;
  TRACE_POP
}
/*
equation index: 1170
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT[3] = powerBlock.LTR.T_from_turb[3] - powerBlock.LTR.T_from_comp[3]
*/
void sCO2PBCalculator_eqFunction_1170(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1170};
  data->localData[0]->realVars[146] /* powerBlock.LTR.deltaT[3] variable */ = data->localData[0]->realVars[131] /* powerBlock.LTR.T_from_turb[3] variable */ - data->localData[0]->realVars[116] /* powerBlock.LTR.T_from_comp[3] variable */;
  TRACE_POP
}
/*
equation index: 1171
type: SIMPLE_ASSIGN
powerBlock._exchanger._Q_HX = powerBlock.HTR.from_comp_port_b.m_flow * (powerBlock.exchanger.h_CO2[1] - powerBlock.exchanger.h_CO2[15])
*/
void sCO2PBCalculator_eqFunction_1171(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1171};
  data->localData[0]->realVars[205] /* powerBlock.exchanger.Q_HX variable */ = (data->localData[0]->realVars[83] /* powerBlock.HTR.from_comp_port_b.m_flow variable */) * (data->localData[0]->realVars[225] /* powerBlock.exchanger.h_CO2[1] variable */ - data->localData[0]->realVars[239] /* powerBlock.exchanger.h_CO2[15] variable */);
  TRACE_POP
}
/*
equation index: 1172
type: SIMPLE_ASSIGN
powerBlock._turbine._W_turb = powerBlock.exchanger.CO2_port_b.m_flow * (powerBlock.exchanger.h_CO2[15] - powerBlock.HTR.h_from_turb[15])
*/
void sCO2PBCalculator_eqFunction_1172(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1172};
  data->localData[0]->realVars[276] /* powerBlock.turbine.W_turb variable */ = (data->localData[0]->realVars[203] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[239] /* powerBlock.exchanger.h_CO2[15] variable */ - data->localData[0]->realVars[111] /* powerBlock.HTR.h_from_turb[15] variable */);
  TRACE_POP
}
/*
equation index: 1173
type: SIMPLE_ASSIGN
powerBlock._cooler._Q_cooler = powerBlock.cooler.port_b.m_flow * (powerBlock.LTR.h_from_turb[1] - powerBlock.mainCompressor.state_a.h)
*/
void sCO2PBCalculator_eqFunction_1173(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1173};
  data->localData[0]->realVars[195] /* powerBlock.cooler.Q_cooler variable */ = (data->localData[0]->realVars[199] /* powerBlock.cooler.port_b.m_flow variable */) * (data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[1] variable */ - data->localData[0]->realVars[262] /* powerBlock.mainCompressor.state_a.h variable */);
  TRACE_POP
}
/*
equation index: 1174
type: SIMPLE_ASSIGN
powerBlock._reCompressor._W_comp = powerBlock.splitter.gamma_port_b.m_flow * (powerBlock.LTR.h_from_turb[1] - powerBlock.reCompressor.state_b.h)
*/
void sCO2PBCalculator_eqFunction_1174(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1174};
  data->localData[0]->realVars[264] /* powerBlock.reCompressor.W_comp variable */ = (data->localData[0]->realVars[274] /* powerBlock.splitter.gamma_port_b.m_flow variable */) * (data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[1] variable */ - data->localData[0]->realVars[272] /* powerBlock.reCompressor.state_b.h variable */);
  TRACE_POP
}
/*
equation index: 1175
type: SIMPLE_ASSIGN
powerBlock._W_gross = max((-powerBlock.turbine.W_turb) - powerBlock.cooler.P_cooling - powerBlock.reCompressor.W_comp - powerBlock.mainCompressor.W_comp, 0.0)
*/
void sCO2PBCalculator_eqFunction_1175(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1175};
  data->localData[0]->realVars[193] /* powerBlock.W_gross variable */ = fmax((-data->localData[0]->realVars[276] /* powerBlock.turbine.W_turb variable */) - data->localData[0]->realVars[194] /* powerBlock.cooler.P_cooling variable */ - data->localData[0]->realVars[264] /* powerBlock.reCompressor.W_comp variable */ - data->localData[0]->realVars[255] /* powerBlock.mainCompressor.W_comp variable */,0.0);
  TRACE_POP
}
/*
equation index: 1176
type: SIMPLE_ASSIGN
P_elec = max(powerBlock.W_gross, 0.0)
*/
void sCO2PBCalculator_eqFunction_1176(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1176};
  data->localData[0]->realVars[32] /* P_elec variable */ = fmax(data->localData[0]->realVars[193] /* powerBlock.W_gross variable */,0.0);
  TRACE_POP
}
/*
equation index: 1177
type: SIMPLE_ASSIGN
powerBlock._W_fixed_load = max(((-powerBlock.reCompressor.W_comp) - powerBlock.turbine.W_turb - powerBlock.mainCompressor.W_comp) * powerBlock.f_fixed_load, 0.0)
*/
void sCO2PBCalculator_eqFunction_1177(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1177};
  data->localData[0]->realVars[192] /* powerBlock.W_fixed_load variable */ = fmax(((-data->localData[0]->realVars[264] /* powerBlock.reCompressor.W_comp variable */) - data->localData[0]->realVars[276] /* powerBlock.turbine.W_turb variable */ - data->localData[0]->realVars[255] /* powerBlock.mainCompressor.W_comp variable */) * (data->simulationInfo->realParameter[585] /* powerBlock.f_fixed_load PARAM */),0.0);
  TRACE_POP
}
/*
equation index: 1178
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT[1] = powerBlock.LTR.T_from_turb[1] - powerBlock.LTR.T_from_comp[1]
*/
void sCO2PBCalculator_eqFunction_1178(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1178};
  data->localData[0]->realVars[144] /* powerBlock.LTR.deltaT[1] variable */ = data->localData[0]->realVars[129] /* powerBlock.LTR.T_from_turb[1] variable */ - data->localData[0]->realVars[114] /* powerBlock.LTR.T_from_comp[1] variable */;
  TRACE_POP
}
/*
equation index: 1179
type: SIMPLE_ASSIGN
powerBlock._cooler._deltaT[1] = powerBlock.LTR.T_from_turb[1] - T_amb_input
*/
void sCO2PBCalculator_eqFunction_1179(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1179};
  data->localData[0]->realVars[197] /* powerBlock.cooler.deltaT[1] variable */ = data->localData[0]->realVars[129] /* powerBlock.LTR.T_from_turb[1] variable */ - data->simulationInfo->realParameter[4] /* T_amb_input PARAM */;
  TRACE_POP
}
/*
equation index: 1180
type: SIMPLE_ASSIGN
powerBlock._exchanger._deltaTAve = 0.5 * (powerBlock.exchanger.deltaT[1] + powerBlock.exchanger.deltaT[15])
*/
void sCO2PBCalculator_eqFunction_1180(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1180};
  data->localData[0]->realVars[224] /* powerBlock.exchanger.deltaTAve variable */ = (0.5) * (data->localData[0]->realVars[209] /* powerBlock.exchanger.deltaT[1] variable */ + data->localData[0]->realVars[223] /* powerBlock.exchanger.deltaT[15] variable */);
  TRACE_POP
}
/*
equation index: 1181
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT[15] = powerBlock.HTR.T_from_turb[15] - powerBlock.HTR.T_from_comp[15]
*/
void sCO2PBCalculator_eqFunction_1181(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1181};
  data->localData[0]->realVars[82] /* powerBlock.HTR.deltaT[15] variable */ = data->localData[0]->realVars[67] /* powerBlock.HTR.T_from_turb[15] variable */ - data->localData[0]->realVars[53] /* powerBlock.HTR.T_from_comp[15] variable */;
  TRACE_POP
}
/*
equation index: 1182
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT[13] = powerBlock.HTR.T_from_turb[13] - powerBlock.HTR.T_from_comp[13]
*/
void sCO2PBCalculator_eqFunction_1182(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1182};
  data->localData[0]->realVars[80] /* powerBlock.HTR.deltaT[13] variable */ = data->localData[0]->realVars[65] /* powerBlock.HTR.T_from_turb[13] variable */ - data->localData[0]->realVars[51] /* powerBlock.HTR.T_from_comp[13] variable */;
  TRACE_POP
}
/*
equation index: 1183
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT[14] = powerBlock.HTR.T_from_turb[14] - powerBlock.HTR.T_from_comp[14]
*/
void sCO2PBCalculator_eqFunction_1183(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1183};
  data->localData[0]->realVars[81] /* powerBlock.HTR.deltaT[14] variable */ = data->localData[0]->realVars[66] /* powerBlock.HTR.T_from_turb[14] variable */ - data->localData[0]->realVars[52] /* powerBlock.HTR.T_from_comp[14] variable */;
  TRACE_POP
}
/*
equation index: 1184
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT[12] = powerBlock.HTR.T_from_turb[12] - powerBlock.HTR.T_from_comp[12]
*/
void sCO2PBCalculator_eqFunction_1184(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1184};
  data->localData[0]->realVars[79] /* powerBlock.HTR.deltaT[12] variable */ = data->localData[0]->realVars[64] /* powerBlock.HTR.T_from_turb[12] variable */ - data->localData[0]->realVars[50] /* powerBlock.HTR.T_from_comp[12] variable */;
  TRACE_POP
}
/*
equation index: 1185
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT[11] = powerBlock.HTR.T_from_turb[11] - powerBlock.HTR.T_from_comp[11]
*/
void sCO2PBCalculator_eqFunction_1185(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1185};
  data->localData[0]->realVars[78] /* powerBlock.HTR.deltaT[11] variable */ = data->localData[0]->realVars[63] /* powerBlock.HTR.T_from_turb[11] variable */ - data->localData[0]->realVars[49] /* powerBlock.HTR.T_from_comp[11] variable */;
  TRACE_POP
}
/*
equation index: 1186
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT[10] = powerBlock.HTR.T_from_turb[10] - powerBlock.HTR.T_from_comp[10]
*/
void sCO2PBCalculator_eqFunction_1186(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1186};
  data->localData[0]->realVars[77] /* powerBlock.HTR.deltaT[10] variable */ = data->localData[0]->realVars[62] /* powerBlock.HTR.T_from_turb[10] variable */ - data->localData[0]->realVars[48] /* powerBlock.HTR.T_from_comp[10] variable */;
  TRACE_POP
}
/*
equation index: 1187
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT[9] = powerBlock.HTR.T_from_turb[9] - powerBlock.HTR.T_from_comp[9]
*/
void sCO2PBCalculator_eqFunction_1187(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1187};
  data->localData[0]->realVars[76] /* powerBlock.HTR.deltaT[9] variable */ = data->localData[0]->realVars[61] /* powerBlock.HTR.T_from_turb[9] variable */ - data->localData[0]->realVars[47] /* powerBlock.HTR.T_from_comp[9] variable */;
  TRACE_POP
}
/*
equation index: 1188
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT[8] = powerBlock.HTR.T_from_turb[8] - powerBlock.HTR.T_from_comp[8]
*/
void sCO2PBCalculator_eqFunction_1188(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1188};
  data->localData[0]->realVars[75] /* powerBlock.HTR.deltaT[8] variable */ = data->localData[0]->realVars[60] /* powerBlock.HTR.T_from_turb[8] variable */ - data->localData[0]->realVars[46] /* powerBlock.HTR.T_from_comp[8] variable */;
  TRACE_POP
}
/*
equation index: 1189
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT[7] = powerBlock.HTR.T_from_turb[7] - powerBlock.HTR.T_from_comp[7]
*/
void sCO2PBCalculator_eqFunction_1189(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1189};
  data->localData[0]->realVars[74] /* powerBlock.HTR.deltaT[7] variable */ = data->localData[0]->realVars[59] /* powerBlock.HTR.T_from_turb[7] variable */ - data->localData[0]->realVars[45] /* powerBlock.HTR.T_from_comp[7] variable */;
  TRACE_POP
}
/*
equation index: 1190
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT[6] = powerBlock.HTR.T_from_turb[6] - powerBlock.HTR.T_from_comp[6]
*/
void sCO2PBCalculator_eqFunction_1190(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1190};
  data->localData[0]->realVars[73] /* powerBlock.HTR.deltaT[6] variable */ = data->localData[0]->realVars[58] /* powerBlock.HTR.T_from_turb[6] variable */ - data->localData[0]->realVars[44] /* powerBlock.HTR.T_from_comp[6] variable */;
  TRACE_POP
}
/*
equation index: 1191
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT[5] = powerBlock.HTR.T_from_turb[5] - powerBlock.HTR.T_from_comp[5]
*/
void sCO2PBCalculator_eqFunction_1191(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1191};
  data->localData[0]->realVars[72] /* powerBlock.HTR.deltaT[5] variable */ = data->localData[0]->realVars[57] /* powerBlock.HTR.T_from_turb[5] variable */ - data->localData[0]->realVars[43] /* powerBlock.HTR.T_from_comp[5] variable */;
  TRACE_POP
}
/*
equation index: 1192
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT[4] = powerBlock.HTR.T_from_turb[4] - powerBlock.HTR.T_from_comp[4]
*/
void sCO2PBCalculator_eqFunction_1192(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1192};
  data->localData[0]->realVars[71] /* powerBlock.HTR.deltaT[4] variable */ = data->localData[0]->realVars[56] /* powerBlock.HTR.T_from_turb[4] variable */ - data->localData[0]->realVars[42] /* powerBlock.HTR.T_from_comp[4] variable */;
  TRACE_POP
}
/*
equation index: 1193
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT[3] = powerBlock.HTR.T_from_turb[3] - powerBlock.HTR.T_from_comp[3]
*/
void sCO2PBCalculator_eqFunction_1193(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1193};
  data->localData[0]->realVars[70] /* powerBlock.HTR.deltaT[3] variable */ = data->localData[0]->realVars[55] /* powerBlock.HTR.T_from_turb[3] variable */ - data->localData[0]->realVars[41] /* powerBlock.HTR.T_from_comp[3] variable */;
  TRACE_POP
}
/*
equation index: 1194
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT[2] = powerBlock.LTR.T_from_turb[2] - powerBlock.LTR.T_from_comp[2]
*/
void sCO2PBCalculator_eqFunction_1194(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1194};
  data->localData[0]->realVars[145] /* powerBlock.LTR.deltaT[2] variable */ = data->localData[0]->realVars[130] /* powerBlock.LTR.T_from_turb[2] variable */ - data->localData[0]->realVars[115] /* powerBlock.LTR.T_from_comp[2] variable */;
  TRACE_POP
}
/*
equation index: 1195
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT[4] = powerBlock.LTR.T_from_turb[4] - powerBlock.LTR.T_from_comp[4]
*/
void sCO2PBCalculator_eqFunction_1195(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1195};
  data->localData[0]->realVars[147] /* powerBlock.LTR.deltaT[4] variable */ = data->localData[0]->realVars[132] /* powerBlock.LTR.T_from_turb[4] variable */ - data->localData[0]->realVars[117] /* powerBlock.LTR.T_from_comp[4] variable */;
  TRACE_POP
}
/*
equation index: 1196
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT[5] = powerBlock.LTR.T_from_turb[5] - powerBlock.LTR.T_from_comp[5]
*/
void sCO2PBCalculator_eqFunction_1196(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1196};
  data->localData[0]->realVars[148] /* powerBlock.LTR.deltaT[5] variable */ = data->localData[0]->realVars[133] /* powerBlock.LTR.T_from_turb[5] variable */ - data->localData[0]->realVars[118] /* powerBlock.LTR.T_from_comp[5] variable */;
  TRACE_POP
}
/*
equation index: 1197
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT[6] = powerBlock.LTR.T_from_turb[6] - powerBlock.LTR.T_from_comp[6]
*/
void sCO2PBCalculator_eqFunction_1197(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1197};
  data->localData[0]->realVars[149] /* powerBlock.LTR.deltaT[6] variable */ = data->localData[0]->realVars[134] /* powerBlock.LTR.T_from_turb[6] variable */ - data->localData[0]->realVars[119] /* powerBlock.LTR.T_from_comp[6] variable */;
  TRACE_POP
}
/*
equation index: 1198
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT[8] = powerBlock.LTR.T_from_turb[8] - powerBlock.LTR.T_from_comp[8]
*/
void sCO2PBCalculator_eqFunction_1198(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1198};
  data->localData[0]->realVars[151] /* powerBlock.LTR.deltaT[8] variable */ = data->localData[0]->realVars[136] /* powerBlock.LTR.T_from_turb[8] variable */ - data->localData[0]->realVars[121] /* powerBlock.LTR.T_from_comp[8] variable */;
  TRACE_POP
}
/*
equation index: 1199
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT[7] = powerBlock.LTR.T_from_turb[7] - powerBlock.LTR.T_from_comp[7]
*/
void sCO2PBCalculator_eqFunction_1199(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1199};
  data->localData[0]->realVars[150] /* powerBlock.LTR.deltaT[7] variable */ = data->localData[0]->realVars[135] /* powerBlock.LTR.T_from_turb[7] variable */ - data->localData[0]->realVars[120] /* powerBlock.LTR.T_from_comp[7] variable */;
  TRACE_POP
}
/*
equation index: 1200
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT[9] = powerBlock.LTR.T_from_turb[9] - powerBlock.LTR.T_from_comp[9]
*/
void sCO2PBCalculator_eqFunction_1200(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1200};
  data->localData[0]->realVars[152] /* powerBlock.LTR.deltaT[9] variable */ = data->localData[0]->realVars[137] /* powerBlock.LTR.T_from_turb[9] variable */ - data->localData[0]->realVars[122] /* powerBlock.LTR.T_from_comp[9] variable */;
  TRACE_POP
}
/*
equation index: 1201
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT[10] = powerBlock.LTR.T_from_turb[10] - powerBlock.LTR.T_from_comp[10]
*/
void sCO2PBCalculator_eqFunction_1201(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1201};
  data->localData[0]->realVars[153] /* powerBlock.LTR.deltaT[10] variable */ = data->localData[0]->realVars[138] /* powerBlock.LTR.T_from_turb[10] variable */ - data->localData[0]->realVars[123] /* powerBlock.LTR.T_from_comp[10] variable */;
  TRACE_POP
}
/*
equation index: 1202
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT[12] = powerBlock.LTR.T_from_turb[12] - powerBlock.LTR.T_from_comp[12]
*/
void sCO2PBCalculator_eqFunction_1202(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1202};
  data->localData[0]->realVars[155] /* powerBlock.LTR.deltaT[12] variable */ = data->localData[0]->realVars[140] /* powerBlock.LTR.T_from_turb[12] variable */ - data->localData[0]->realVars[125] /* powerBlock.LTR.T_from_comp[12] variable */;
  TRACE_POP
}
/*
equation index: 1203
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT[13] = powerBlock.LTR.T_from_turb[13] - powerBlock.LTR.T_from_comp[13]
*/
void sCO2PBCalculator_eqFunction_1203(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1203};
  data->localData[0]->realVars[156] /* powerBlock.LTR.deltaT[13] variable */ = data->localData[0]->realVars[141] /* powerBlock.LTR.T_from_turb[13] variable */ - data->localData[0]->realVars[126] /* powerBlock.LTR.T_from_comp[13] variable */;
  TRACE_POP
}
/*
equation index: 1204
type: SIMPLE_ASSIGN
powerBlock._LTR._deltaT[14] = powerBlock.LTR.T_from_turb[14] - powerBlock.LTR.T_from_comp[14]
*/
void sCO2PBCalculator_eqFunction_1204(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1204};
  data->localData[0]->realVars[157] /* powerBlock.LTR.deltaT[14] variable */ = data->localData[0]->realVars[142] /* powerBlock.LTR.T_from_turb[14] variable */ - data->localData[0]->realVars[127] /* powerBlock.LTR.T_from_comp[14] variable */;
  TRACE_POP
}
/*
equation index: 1205
type: SIMPLE_ASSIGN
powerBlock._LTR._Q_HX = powerBlock.exchanger.CO2_port_b.m_flow * (powerBlock.LTR.h_from_turb[1] - powerBlock.LTR.h_from_turb[15])
*/
void sCO2PBCalculator_eqFunction_1205(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1205};
  data->localData[0]->realVars[113] /* powerBlock.LTR.Q_HX variable */ = (data->localData[0]->realVars[203] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[174] /* powerBlock.LTR.h_from_turb[1] variable */ - data->localData[0]->realVars[188] /* powerBlock.LTR.h_from_turb[15] variable */);
  TRACE_POP
}
/*
equation index: 1206
type: SIMPLE_ASSIGN
powerBlock._HTR._Q_HX = powerBlock.exchanger.CO2_port_b.m_flow * (powerBlock.LTR.h_from_turb[15] - powerBlock.HTR.h_from_turb[15])
*/
void sCO2PBCalculator_eqFunction_1206(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1206};
  data->localData[0]->realVars[38] /* powerBlock.HTR.Q_HX variable */ = (data->localData[0]->realVars[203] /* powerBlock.exchanger.CO2_port_b.m_flow variable */) * (data->localData[0]->realVars[188] /* powerBlock.LTR.h_from_turb[15] variable */ - data->localData[0]->realVars[111] /* powerBlock.HTR.h_from_turb[15] variable */);
  TRACE_POP
}
/*
equation index: 1207
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT[2] = powerBlock.HTR.T_from_turb[2] - powerBlock.HTR.T_from_comp[2]
*/
void sCO2PBCalculator_eqFunction_1207(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1207};
  data->localData[0]->realVars[69] /* powerBlock.HTR.deltaT[2] variable */ = data->localData[0]->realVars[54] /* powerBlock.HTR.T_from_turb[2] variable */ - data->localData[0]->realVars[40] /* powerBlock.HTR.T_from_comp[2] variable */;
  TRACE_POP
}
/*
equation index: 1208
type: SIMPLE_ASSIGN
powerBlock._HTR._deltaT[1] = powerBlock.LTR.T_from_turb[15] - powerBlock.HTR.T_from_comp[1]
*/
void sCO2PBCalculator_eqFunction_1208(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1208};
  data->localData[0]->realVars[68] /* powerBlock.HTR.deltaT[1] variable */ = data->localData[0]->realVars[143] /* powerBlock.LTR.T_from_turb[15] variable */ - data->localData[0]->realVars[39] /* powerBlock.HTR.T_from_comp[1] variable */;
  TRACE_POP
}
/*
equation index: 1209
type: SIMPLE_ASSIGN
powerBlock._W_cycle = (-powerBlock.reCompressor.W_comp) - powerBlock.turbine.W_turb - powerBlock.mainCompressor.W_comp
*/
void sCO2PBCalculator_eqFunction_1209(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1209};
  data->localData[0]->realVars[191] /* powerBlock.W_cycle variable */ = (-data->localData[0]->realVars[264] /* powerBlock.reCompressor.W_comp variable */) - data->localData[0]->realVars[276] /* powerBlock.turbine.W_turb variable */ - data->localData[0]->realVars[255] /* powerBlock.mainCompressor.W_comp variable */;
  TRACE_POP
}
/*
equation index: 1210
type: SIMPLE_ASSIGN
powerBlock._eta_cycle = ((-powerBlock.turbine.W_turb) - powerBlock.mainCompressor.W_comp - powerBlock.reCompressor.W_comp) / powerBlock.exchanger.Q_HX
*/
void sCO2PBCalculator_eqFunction_1210(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1210};
  data->localData[0]->realVars[200] /* powerBlock.eta_cycle variable */ = DIVISION_SIM((-data->localData[0]->realVars[276] /* powerBlock.turbine.W_turb variable */) - data->localData[0]->realVars[255] /* powerBlock.mainCompressor.W_comp variable */ - data->localData[0]->realVars[264] /* powerBlock.reCompressor.W_comp variable */,data->localData[0]->realVars[205] /* powerBlock.exchanger.Q_HX variable */,"powerBlock.exchanger.Q_HX",equationIndexes);
  TRACE_POP
}
/*
equation index: 1211
type: SIMPLE_ASSIGN
powerBlock._eta_cycle_net = P_elec * powerBlock.eta_motor * (1.0 - powerBlock.f_fixed_load) / powerBlock.exchanger.Q_HX
*/
void sCO2PBCalculator_eqFunction_1211(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1211};
  data->localData[0]->realVars[201] /* powerBlock.eta_cycle_net variable */ = (data->localData[0]->realVars[32] /* P_elec variable */) * ((data->simulationInfo->realParameter[429] /* powerBlock.eta_motor PARAM */) * (DIVISION_SIM(1.0 - data->simulationInfo->realParameter[585] /* powerBlock.f_fixed_load PARAM */,data->localData[0]->realVars[205] /* powerBlock.exchanger.Q_HX variable */,"powerBlock.exchanger.Q_HX",equationIndexes)));
  TRACE_POP
}
/*
equation index: 1212
type: SIMPLE_ASSIGN
der(powerBlock._E_net) = P_elec * powerBlock.eta_motor * (1.0 - powerBlock.f_fixed_load)
*/
void sCO2PBCalculator_eqFunction_1212(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1212};
  data->localData[0]->realVars[3] /* der(powerBlock.E_net) STATE_DER */ = (data->localData[0]->realVars[32] /* P_elec variable */) * ((data->simulationInfo->realParameter[429] /* powerBlock.eta_motor PARAM */) * (1.0 - data->simulationInfo->realParameter[585] /* powerBlock.f_fixed_load PARAM */));
  TRACE_POP
}
/*
equation index: 1213
type: SIMPLE_ASSIGN
powerBlock._load = (-source.ports[1].m_flow) / powerBlock.m_HTF_des
*/
void sCO2PBCalculator_eqFunction_1213(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1213};
  data->localData[0]->realVars[254] /* powerBlock.load variable */ = DIVISION_SIM((-data->localData[0]->realVars[306] /* source.ports[1].m_flow variable */),data->simulationInfo->realParameter[589] /* powerBlock.m_HTF_des PARAM */,"powerBlock.m_HTF_des",equationIndexes);
  TRACE_POP
}
/*
equation index: 1214
type: SIMPLE_ASSIGN
der(E_elec) = P_elec
*/
void sCO2PBCalculator_eqFunction_1214(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1214};
  data->localData[0]->realVars[2] /* der(E_elec) STATE_DER */ = data->localData[0]->realVars[32] /* P_elec variable */;
  TRACE_POP
}
/*
equation index: 1215
type: SIMPLE_ASSIGN
eta_gross = powerBlock.W_gross / powerBlock.exchanger.Q_HX
*/
void sCO2PBCalculator_eqFunction_1215(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1215};
  data->localData[0]->realVars[34] /* eta_gross variable */ = DIVISION_SIM(data->localData[0]->realVars[193] /* powerBlock.W_gross variable */,data->localData[0]->realVars[205] /* powerBlock.exchanger.Q_HX variable */,"powerBlock.exchanger.Q_HX",equationIndexes);
  TRACE_POP
}
/*
equation index: 1216
type: SIMPLE_ASSIGN
eta_Q = powerBlock.exchanger.Q_HX / powerBlock.Q_HX_des
*/
void sCO2PBCalculator_eqFunction_1216(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1216};
  data->localData[0]->realVars[33] /* eta_Q variable */ = DIVISION_SIM(data->localData[0]->realVars[205] /* powerBlock.exchanger.Q_HX variable */,data->simulationInfo->realParameter[312] /* powerBlock.Q_HX_des PARAM */,"powerBlock.Q_HX_des",equationIndexes);
  TRACE_POP
}
/*
equation index: 1219
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("CARBO HSP 40/70", {"Al2O3", "SiO2", "Fe2O3", "TiO2", "other"}, false, true, sink.X, "FixedBoundary");
*/
void sCO2PBCalculator_eqFunction_1219(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1219};
  static const MMC_DEFSTRINGLIT(tmp0,15,"CARBO HSP 40/70");
  string_array tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,5,"Al2O3");
  static const MMC_DEFSTRINGLIT(tmp3,4,"SiO2");
  static const MMC_DEFSTRINGLIT(tmp4,5,"Fe2O3");
  static const MMC_DEFSTRINGLIT(tmp5,4,"TiO2");
  static const MMC_DEFSTRINGLIT(tmp6,5,"other");
  real_array tmp7;
  static const MMC_DEFSTRINGLIT(tmp8,13,"FixedBoundary");
  array_alloc_scalar_string_array(&tmp1, 5, (modelica_string)MMC_REFSTRINGLIT(tmp2), (modelica_string)MMC_REFSTRINGLIT(tmp3), (modelica_string)MMC_REFSTRINGLIT(tmp4), (modelica_string)MMC_REFSTRINGLIT(tmp5), (modelica_string)MMC_REFSTRINGLIT(tmp6));
  real_array_create(&tmp7, ((modelica_real*)&((&data->simulationInfo->realParameter[673] /* sink.X[1] PARAM */)[calc_base_index_dims_subs(1, 5, ((modelica_integer) 1))])), 1, 5);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp0), tmp1, 0, 1, tmp7, MMC_REFSTRINGLIT(tmp8));
  TRACE_POP
}
/*
equation index: 1218
type: ALGORITHM

  Modelica.Fluid.Utilities.checkBoundary("CARBO HSP 40/70", {"Al2O3", "SiO2", "Fe2O3", "TiO2", "other"}, false, false, source.X, "FixedBoundary");
*/
void sCO2PBCalculator_eqFunction_1218(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1218};
  static const MMC_DEFSTRINGLIT(tmp9,15,"CARBO HSP 40/70");
  string_array tmp10;
  static const MMC_DEFSTRINGLIT(tmp11,5,"Al2O3");
  static const MMC_DEFSTRINGLIT(tmp12,4,"SiO2");
  static const MMC_DEFSTRINGLIT(tmp13,5,"Fe2O3");
  static const MMC_DEFSTRINGLIT(tmp14,4,"TiO2");
  static const MMC_DEFSTRINGLIT(tmp15,5,"other");
  real_array tmp16;
  static const MMC_DEFSTRINGLIT(tmp17,13,"FixedBoundary");
  array_alloc_scalar_string_array(&tmp10, 5, (modelica_string)MMC_REFSTRINGLIT(tmp11), (modelica_string)MMC_REFSTRINGLIT(tmp12), (modelica_string)MMC_REFSTRINGLIT(tmp13), (modelica_string)MMC_REFSTRINGLIT(tmp14), (modelica_string)MMC_REFSTRINGLIT(tmp15));
  real_array_create(&tmp16, ((modelica_real*)&((&data->simulationInfo->realParameter[686] /* source.X[1] PARAM */)[calc_base_index_dims_subs(1, 5, ((modelica_integer) 1))])), 1, 5);
  omc_Modelica_Fluid_Utilities_checkBoundary(threadData, MMC_REFSTRINGLIT(tmp9), tmp10, 0, 0, tmp16, MMC_REFSTRINGLIT(tmp17));
  TRACE_POP
}
/*
equation index: 1217
type: ALGORITHM

  assert(sink.p >= 0.0, "Pressure (= " + String(sink.p, 6, 0, true) + " Pa) of medium \"" + "CARBO HSP 40/70" + "\" is negative
(Temperature = " + String(sink.medium.T, 6, 0, true) + " K)");
*/
void sCO2PBCalculator_eqFunction_1217(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1217};
  modelica_boolean tmp18;
  static const MMC_DEFSTRINGLIT(tmp19,12,"Pressure (= ");
  modelica_string tmp20;
  static const MMC_DEFSTRINGLIT(tmp21,16," Pa) of medium \"");
  static const MMC_DEFSTRINGLIT(tmp22,15,"CARBO HSP 40/70");
  static const MMC_DEFSTRINGLIT(tmp23,29,"\" is negative\n(Temperature = ");
  modelica_string tmp24;
  static const MMC_DEFSTRINGLIT(tmp25,3," K)");
  static int tmp26 = 0;
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
  {
    tmp18 = GreaterEq(data->simulationInfo->realParameter[682] /* sink.p PARAM */,0.0);
    if(!tmp18)
    {
      tmp20 = modelica_real_to_modelica_string(data->simulationInfo->realParameter[682] /* sink.p PARAM */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp19),tmp20);
      tmpMeta[1] = stringAppend(tmpMeta[0],MMC_REFSTRINGLIT(tmp21));
      tmpMeta[2] = stringAppend(tmpMeta[1],MMC_REFSTRINGLIT(tmp22));
      tmpMeta[3] = stringAppend(tmpMeta[2],MMC_REFSTRINGLIT(tmp23));
      tmp24 = modelica_real_to_modelica_string(data->localData[0]->realVars[283] /* sink.medium.T variable */, ((modelica_integer) 6), ((modelica_integer) 0), 1);
      tmpMeta[4] = stringAppend(tmpMeta[3],tmp24);
      tmpMeta[5] = stringAppend(tmpMeta[4],MMC_REFSTRINGLIT(tmp25));
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
int sCO2PBCalculator_functionDAE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  int equationIndexes[1] = {0};
  modelica_metatype tmpMeta[6] __attribute__((unused)) = {0};
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_DAE);
#endif

  data->simulationInfo->needToIterate = 0;
  data->simulationInfo->discreteCall = 1;
  sCO2PBCalculator_functionLocalKnownVars(data, threadData);
  sCO2PBCalculator_eqFunction_947(data, threadData);

  sCO2PBCalculator_eqFunction_1164(data, threadData);

  sCO2PBCalculator_eqFunction_1165(data, threadData);

  sCO2PBCalculator_eqFunction_1166(data, threadData);

  sCO2PBCalculator_eqFunction_1167(data, threadData);

  sCO2PBCalculator_eqFunction_1168(data, threadData);

  sCO2PBCalculator_eqFunction_1169(data, threadData);

  sCO2PBCalculator_eqFunction_1170(data, threadData);

  sCO2PBCalculator_eqFunction_1171(data, threadData);

  sCO2PBCalculator_eqFunction_1172(data, threadData);

  sCO2PBCalculator_eqFunction_1173(data, threadData);

  sCO2PBCalculator_eqFunction_1174(data, threadData);

  sCO2PBCalculator_eqFunction_1175(data, threadData);

  sCO2PBCalculator_eqFunction_1176(data, threadData);

  sCO2PBCalculator_eqFunction_1177(data, threadData);

  sCO2PBCalculator_eqFunction_1178(data, threadData);

  sCO2PBCalculator_eqFunction_1179(data, threadData);

  sCO2PBCalculator_eqFunction_1180(data, threadData);

  sCO2PBCalculator_eqFunction_1181(data, threadData);

  sCO2PBCalculator_eqFunction_1182(data, threadData);

  sCO2PBCalculator_eqFunction_1183(data, threadData);

  sCO2PBCalculator_eqFunction_1184(data, threadData);

  sCO2PBCalculator_eqFunction_1185(data, threadData);

  sCO2PBCalculator_eqFunction_1186(data, threadData);

  sCO2PBCalculator_eqFunction_1187(data, threadData);

  sCO2PBCalculator_eqFunction_1188(data, threadData);

  sCO2PBCalculator_eqFunction_1189(data, threadData);

  sCO2PBCalculator_eqFunction_1190(data, threadData);

  sCO2PBCalculator_eqFunction_1191(data, threadData);

  sCO2PBCalculator_eqFunction_1192(data, threadData);

  sCO2PBCalculator_eqFunction_1193(data, threadData);

  sCO2PBCalculator_eqFunction_1194(data, threadData);

  sCO2PBCalculator_eqFunction_1195(data, threadData);

  sCO2PBCalculator_eqFunction_1196(data, threadData);

  sCO2PBCalculator_eqFunction_1197(data, threadData);

  sCO2PBCalculator_eqFunction_1198(data, threadData);

  sCO2PBCalculator_eqFunction_1199(data, threadData);

  sCO2PBCalculator_eqFunction_1200(data, threadData);

  sCO2PBCalculator_eqFunction_1201(data, threadData);

  sCO2PBCalculator_eqFunction_1202(data, threadData);

  sCO2PBCalculator_eqFunction_1203(data, threadData);

  sCO2PBCalculator_eqFunction_1204(data, threadData);

  sCO2PBCalculator_eqFunction_1205(data, threadData);

  sCO2PBCalculator_eqFunction_1206(data, threadData);

  sCO2PBCalculator_eqFunction_1207(data, threadData);

  sCO2PBCalculator_eqFunction_1208(data, threadData);

  sCO2PBCalculator_eqFunction_1209(data, threadData);

  sCO2PBCalculator_eqFunction_1210(data, threadData);

  sCO2PBCalculator_eqFunction_1211(data, threadData);

  sCO2PBCalculator_eqFunction_1212(data, threadData);

  sCO2PBCalculator_eqFunction_1213(data, threadData);

  sCO2PBCalculator_eqFunction_1214(data, threadData);

  sCO2PBCalculator_eqFunction_1215(data, threadData);

  sCO2PBCalculator_eqFunction_1216(data, threadData);

  sCO2PBCalculator_eqFunction_1219(data, threadData);

  sCO2PBCalculator_eqFunction_1218(data, threadData);

  sCO2PBCalculator_eqFunction_1217(data, threadData);
  data->simulationInfo->discreteCall = 0;
  
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_DAE);
#endif
  TRACE_POP
  return 0;
}


int sCO2PBCalculator_functionLocalKnownVars(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  
  TRACE_POP
  return 0;
}


/* forwarded equations */
extern void sCO2PBCalculator_eqFunction_947(DATA* data, threadData_t *threadData);
extern void sCO2PBCalculator_eqFunction_1164(DATA* data, threadData_t *threadData);
extern void sCO2PBCalculator_eqFunction_1167(DATA* data, threadData_t *threadData);
extern void sCO2PBCalculator_eqFunction_1172(DATA* data, threadData_t *threadData);
extern void sCO2PBCalculator_eqFunction_1174(DATA* data, threadData_t *threadData);
extern void sCO2PBCalculator_eqFunction_1175(DATA* data, threadData_t *threadData);
extern void sCO2PBCalculator_eqFunction_1176(DATA* data, threadData_t *threadData);
extern void sCO2PBCalculator_eqFunction_1212(DATA* data, threadData_t *threadData);
extern void sCO2PBCalculator_eqFunction_1214(DATA* data, threadData_t *threadData);

static void functionODE_system0(DATA *data, threadData_t *threadData)
{
    sCO2PBCalculator_eqFunction_947(data, threadData);

    sCO2PBCalculator_eqFunction_1164(data, threadData);

    sCO2PBCalculator_eqFunction_1167(data, threadData);

    sCO2PBCalculator_eqFunction_1172(data, threadData);

    sCO2PBCalculator_eqFunction_1174(data, threadData);

    sCO2PBCalculator_eqFunction_1175(data, threadData);

    sCO2PBCalculator_eqFunction_1176(data, threadData);

    sCO2PBCalculator_eqFunction_1212(data, threadData);

    sCO2PBCalculator_eqFunction_1214(data, threadData);
}

int sCO2PBCalculator_functionODE(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_tick(SIM_TIMER_FUNCTION_ODE);
#endif

  
  data->simulationInfo->callStatistics.functionODE++;
  
  sCO2PBCalculator_functionLocalKnownVars(data, threadData);
  functionODE_system0(data, threadData);

#if !defined(OMC_MINIMAL_RUNTIME)
  if (measure_time_flag) rt_accumulate(SIM_TIMER_FUNCTION_ODE);
#endif

  TRACE_POP
  return 0;
}

/* forward the main in the simulation runtime */
extern int _main_SimulationRuntime(int argc, char**argv, DATA *data, threadData_t *threadData);

#include "sCO2PBCalculator_12jac.h"
#include "sCO2PBCalculator_13opt.h"

struct OpenModelicaGeneratedFunctionCallbacks sCO2PBCalculator_callback = {
   (int (*)(DATA *, threadData_t *, void *)) sCO2PBCalculator_performSimulation,
   (int (*)(DATA *, threadData_t *, void *)) sCO2PBCalculator_performQSSSimulation,
   sCO2PBCalculator_updateContinuousSystem,
   sCO2PBCalculator_callExternalObjectDestructors,
   sCO2PBCalculator_initialNonLinearSystem,
   sCO2PBCalculator_initialLinearSystem,
   NULL,
   #if !defined(OMC_NO_STATESELECTION)
   sCO2PBCalculator_initializeStateSets,
   #else
   NULL,
   #endif
   sCO2PBCalculator_initializeDAEmodeData,
   sCO2PBCalculator_functionODE,
   sCO2PBCalculator_functionAlgebraics,
   sCO2PBCalculator_functionDAE,
   sCO2PBCalculator_functionLocalKnownVars,
   sCO2PBCalculator_input_function,
   sCO2PBCalculator_input_function_init,
   sCO2PBCalculator_input_function_updateStartValues,
   sCO2PBCalculator_data_function,
   sCO2PBCalculator_output_function,
   sCO2PBCalculator_setc_function,
   sCO2PBCalculator_function_storeDelayed,
   sCO2PBCalculator_updateBoundVariableAttributes,
   sCO2PBCalculator_functionInitialEquations,
   1, /* useHomotopy - 0: local homotopy (equidistant lambda), 1: global homotopy (equidistant lambda), 2: new global homotopy approach (adaptive lambda), 3: new local homotopy approach (adaptive lambda)*/
   sCO2PBCalculator_functionInitialEquations_lambda0,
   sCO2PBCalculator_functionRemovedInitialEquations,
   sCO2PBCalculator_updateBoundParameters,
   sCO2PBCalculator_checkForAsserts,
   sCO2PBCalculator_function_ZeroCrossingsEquations,
   sCO2PBCalculator_function_ZeroCrossings,
   sCO2PBCalculator_function_updateRelations,
   sCO2PBCalculator_zeroCrossingDescription,
   sCO2PBCalculator_relationDescription,
   sCO2PBCalculator_function_initSample,
   sCO2PBCalculator_INDEX_JAC_A,
   sCO2PBCalculator_INDEX_JAC_B,
   sCO2PBCalculator_INDEX_JAC_C,
   sCO2PBCalculator_INDEX_JAC_D,
   sCO2PBCalculator_INDEX_JAC_F,
   sCO2PBCalculator_initialAnalyticJacobianA,
   sCO2PBCalculator_initialAnalyticJacobianB,
   sCO2PBCalculator_initialAnalyticJacobianC,
   sCO2PBCalculator_initialAnalyticJacobianD,
   sCO2PBCalculator_initialAnalyticJacobianF,
   sCO2PBCalculator_functionJacA_column,
   sCO2PBCalculator_functionJacB_column,
   sCO2PBCalculator_functionJacC_column,
   sCO2PBCalculator_functionJacD_column,
   sCO2PBCalculator_functionJacF_column,
   sCO2PBCalculator_linear_model_frame,
   sCO2PBCalculator_linear_model_datarecovery_frame,
   sCO2PBCalculator_mayer,
   sCO2PBCalculator_lagrange,
   sCO2PBCalculator_pickUpBoundsForInputsInOptimization,
   sCO2PBCalculator_setInputData,
   sCO2PBCalculator_getTimeGrid,
   sCO2PBCalculator_symbolicInlineSystem,
   sCO2PBCalculator_function_initSynchronous,
   sCO2PBCalculator_function_updateSynchronous,
   sCO2PBCalculator_function_equationsSynchronous,
   sCO2PBCalculator_inputNames,
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

#define _OMC_LIT_RESOURCE_4_name_data "sCO2PBCalculator"
#define _OMC_LIT_RESOURCE_4_dir_data "/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-3/simulation"
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_name,16,_OMC_LIT_RESOURCE_4_name_data);
static const MMC_DEFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir,77,_OMC_LIT_RESOURCE_4_dir_data);

static const MMC_DEFSTRUCTLIT(_OMC_LIT_RESOURCES,10,MMC_ARRAY_TAG) {MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_0_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_1_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_2_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_3_dir), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_name), MMC_REFSTRINGLIT(_OMC_LIT_RESOURCE_4_dir)}};
void sCO2PBCalculator_setupDataStruc(DATA *data, threadData_t *threadData)
{
  assertStreamPrint(threadData,0!=data, "Error while initialize Data");
  threadData->localRoots[LOCAL_ROOT_SIMULATION_DATA] = data;
  data->callback = &sCO2PBCalculator_callback;
  OpenModelica_updateUriMapping(threadData, MMC_REFSTRUCTLIT(_OMC_LIT_RESOURCES));
  data->modelData->modelName = "sCO2PBCalculator";
  data->modelData->modelFilePrefix = "sCO2PBCalculator";
  data->modelData->resultFileName = NULL;
  data->modelData->modelDir = "/home/philgun/Documents/codecodecode/codecodecode/surrogate-sCO2-3/simulation";
  data->modelData->modelGUID = "{e9b38061-2a45-4895-a134-617eb4ce4147}";
  #if defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME)
  data->modelData->initXMLData = NULL;
  data->modelData->modelDataXml.infoXMLData = NULL;
  #else
  #if defined(_MSC_VER) /* handle joke compilers */
  {
  /* for MSVC we encode a string like char x[] = {'a', 'b', 'c', '\0'} */
  /* because the string constant limit is 65535 bytes */
  static const char contents_init[] =
    #include "sCO2PBCalculator_init.c"
    ;
  static const char contents_info[] =
    #include "sCO2PBCalculator_info.c"
    ;
    data->modelData->initXMLData = contents_init;
    data->modelData->modelDataXml.infoXMLData = contents_info;
  }
  #else /* handle real compilers */
  data->modelData->initXMLData =
  #include "sCO2PBCalculator_init.c"
    ;
  data->modelData->modelDataXml.infoXMLData =
  #include "sCO2PBCalculator_info.c"
    ;
  #endif /* defined(_MSC_VER) */
  #endif /* defined(OPENMODELICA_XML_FROM_FILE_AT_RUNTIME) */
  
  data->modelData->nStates = 2;
  data->modelData->nVariablesReal = 309;
  data->modelData->nDiscreteReal = 0;
  data->modelData->nVariablesInteger = 0;
  data->modelData->nVariablesBoolean = 2;
  data->modelData->nVariablesString = 0;
  data->modelData->nParametersReal = 694;
  data->modelData->nParametersInteger = 14;
  data->modelData->nParametersBoolean = 14;
  data->modelData->nParametersString = 0;
  data->modelData->nInputVars = 0;
  data->modelData->nOutputVars = 0;
  
  data->modelData->nAliasReal = 275;
  data->modelData->nAliasInteger = 0;
  data->modelData->nAliasBoolean = 3;
  data->modelData->nAliasString = 0;
  
  data->modelData->nZeroCrossings = 0;
  data->modelData->nSamples = 0;
  data->modelData->nRelations = 0;
  data->modelData->nMathEvents = 0;
  data->modelData->nExtObjs = 40;
  
  data->modelData->modelDataXml.fileName = "sCO2PBCalculator_info.json";
  data->modelData->modelDataXml.modelInfoXmlLength = 0;
  data->modelData->modelDataXml.nFunctions = 72;
  data->modelData->modelDataXml.nProfileBlocks = 0;
  data->modelData->modelDataXml.nEquations = 1661;
  data->modelData->nMixedSystems = 0;
  data->modelData->nLinearSystems = 3;
  data->modelData->nNonLinearSystems = 48;
  data->modelData->nStateSets = 0;
  data->modelData->nJacobians = 9;
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
  
    sCO2PBCalculator_setupDataStruc(&data, threadData);
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


