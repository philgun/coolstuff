/* Simulation code for sCO2SurrogatePBRig generated by the OpenModelica Compiler OpenModelica 1.15.0~dev-45-g634bc00. */
#if !defined(sCO2SurrogatePBRig__MODEL_H)
#define sCO2SurrogatePBRig__MODEL_H

#include "openmodelica.h"
#include "openmodelica_func.h"
#include "simulation_data.h"
#include "simulation/simulation_info_json.h"
#include "simulation/simulation_runtime.h"
#include "util/omc_error.h"
#include "simulation/solver/model_help.h"
#include "simulation/solver/delay.h"
#include "simulation/solver/linearSystem.h"
#include "simulation/solver/nonlinearSystem.h"
#include "simulation/solver/mixedSystem.h"

#if defined(__cplusplus)
extern "C" {
#endif

#include <string.h>

#include "sCO2SurrogatePBRig_functions.h"

#define Modelica_Blocks_Types_ExternalCombiTable2D_constructor_index 0
#define Modelica_Blocks_Types_ExternalCombiTable2D_destructor_index 1
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F61246C69667453696D706C6524666C7569645F5F61_Medium_ThermodynamicState_index 2
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F6124706F776572426C6F636B24666C7569645F5F61_Medium_ThermodynamicState_index 3
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F612473434F32504244657369676E506F696E7443616C63756C61746F72246C69667453696D706C6524666C7569645F5F61_Medium_ThermodynamicState_index 4
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B244854522466726F6D5F5F636F6D705F5F706F72745F5F61_Medium_ThermodynamicState_index 5
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B244854522466726F6D5F5F747572625F5F706F72745F5F61_Medium_ThermodynamicState_index 6
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B244C54522466726F6D5F5F636F6D705F5F706F72745F5F61_Medium_ThermodynamicState_index 7
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B244C54522466726F6D5F5F747572625F5F706F72745F5F61_Medium_ThermodynamicState_index 8
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B24636F6F6C657224706F72745F5F61_Medium_ThermodynamicState_index 9
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2465786368616E67657224434F325F5F706F72745F5F61_Medium_ThermodynamicState_index 10
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2465786368616E676572244854465F5F706F72745F5F61_Medium_ThermodynamicState_index 11
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B24666C7569645F5F61_Medium_ThermodynamicState_index 12
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B246D61696E436F6D70726573736F7224706F72745F5F61_Medium_ThermodynamicState_index 13
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B246D697865722466697273745F5F706F72745F5F61_Medium_ThermodynamicState_index 14
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B246D69786572247365636F6E645F5F706F72745F5F61_Medium_ThermodynamicState_index 15
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B247265436F6D70726573736F7224706F72745F5F61_Medium_ThermodynamicState_index 16
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2473706C697474657224706F72745F5F61_Medium_ThermodynamicState_index 17
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2474757262696E6524706F72745F5F61_Medium_ThermodynamicState_index 18
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F62246C69667453696D706C6524666C7569645F5F62_Medium_ThermodynamicState_index 19
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F6224706F776572426C6F636B24666C7569645F5F62_Medium_ThermodynamicState_index 20
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F622473434F32504244657369676E506F696E7443616C63756C61746F72246C69667453696D706C6524666C7569645F5F62_Medium_ThermodynamicState_index 21
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F622473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B244854522466726F6D5F5F636F6D705F5F706F72745F5F62_Medium_ThermodynamicState_index 22
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F622473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B244854522466726F6D5F5F747572625F5F706F72745F5F62_Medium_ThermodynamicState_index 23
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F622473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B244C54522466726F6D5F5F636F6D705F5F706F72745F5F62_Medium_ThermodynamicState_index 24
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F622473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B244C54522466726F6D5F5F747572625F5F706F72745F5F62_Medium_ThermodynamicState_index 25
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F622473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B24636F6F6C657224706F72745F5F62_Medium_ThermodynamicState_index 26
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F622473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2465786368616E67657224434F325F5F706F72745F5F62_Medium_ThermodynamicState_index 27
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F622473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2465786368616E676572244854465F5F706F72745F5F62_Medium_ThermodynamicState_index 28
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F622473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B24666C7569645F5F62_Medium_ThermodynamicState_index 29
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F622473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B246D61696E436F6D70726573736F7224706F72745F5F62_Medium_ThermodynamicState_index 30
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F622473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B246D6978657224706F72745F5F62_Medium_ThermodynamicState_index 31
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F622473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B247265436F6D70726573736F7224706F72745F5F62_Medium_ThermodynamicState_index 32
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F622473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2473706C69747465722467616D6D615F5F706F72745F5F62_Medium_ThermodynamicState_index 33
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F622473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2473706C6974746572246F6E655F5F67616D6D615F5F706F72745F5F62_Medium_ThermodynamicState_index 34
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F72745F5F622473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2474757262696E6524706F72745F5F62_Medium_ThermodynamicState_index 35
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F7274735F5F622473434F32504244657369676E506F696E7443616C63756C61746F722473696E6B24706F727473_Medium_ThermodynamicState_index 36
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F7274735F5F622473434F32504244657369676E506F696E7443616C63756C61746F7224736F7572636524706F727473_Medium_ThermodynamicState_index 37
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F7274735F5F622473696E6B24706F727473_Medium_ThermodynamicState_index 38
#define Modelica_Fluid_Interfaces__omcQuot_466C756964506F7274735F5F6224736F7572636524706F727473_Medium_ThermodynamicState_index 39
#define Modelica_Fluid_Sources__omcQuot_4669786564426F756E646172792473434F32504244657369676E506F696E7443616C63756C61746F722473696E6B_Medium_ThermodynamicState_index 40
#define Modelica_Fluid_Sources__omcQuot_4669786564426F756E646172792473434F32504244657369676E506F696E7443616C63756C61746F7224736F75726365_Medium_ThermodynamicState_index 41
#define Modelica_Fluid_Sources__omcQuot_4669786564426F756E646172792473696E6B_Medium_ThermodynamicState_index 42
#define Modelica_Fluid_Sources__omcQuot_4669786564426F756E6461727924736F75726365_Medium_ThermodynamicState_index 43
#define Modelica_Fluid_Utilities_checkBoundary_index 44
#define Modelica_Utilities_Streams_error_index 45
#define SolarTherm_Media_CO2_CO2__utilities_T__p__h_index 46
#define SolarTherm_Media_CO2_CO2__utilities_h__p__T_index 47
#define SolarTherm_Media_CO2_CO2__utilities_h__p__s_index 48
#define SolarTherm_Media_CO2_CO2__utilities_rho__p__h_index 49
#define SolarTherm_Media_CO2_CO2__utilities_s__p__h_index 50
#define SolarTherm_Media_SolidParticles_CarboHSP__utilities_T__h_index 51
#define SolarTherm_Media_SolidParticles_CarboHSP__utilities_h__T_index 52
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E53686166742473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B246D61696E436F6D70726573736F72_Medium_ThermodynamicState_index 53
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E53686166742473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B246D61696E436F6D70726573736F72_Medium__omcQuot_546865726D6F64796E616D696353746174652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B246D61696E436F6D70726573736F722473746174655F5F696E5F5F646573_index 54
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E53686166742473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B246D61696E436F6D70726573736F72_Medium__omcQuot_546865726D6F64796E616D696353746174652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B246D61696E436F6D70726573736F722473746174655F5F6973656E5F5F646573_index 55
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E53686166742473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B246D61696E436F6D70726573736F72_Medium_specificEntropy_index 56
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E53686166742473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B247265436F6D70726573736F72_Medium_ThermodynamicState_index 57
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E53686166742473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B247265436F6D70726573736F72_Medium__omcQuot_546865726D6F64796E616D696353746174652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B247265436F6D70726573736F722473746174655F5F696E5F5F646573_index 58
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E53686166742473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B247265436F6D70726573736F72_Medium__omcQuot_546865726D6F64796E616D696353746174652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B247265436F6D70726573736F722473746174655F5F6973656E5F5F646573_index 59
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6D70726573736F724F6E53686166742473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B247265436F6D70726573736F72_Medium_specificEntropy_index 60
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6F6C65722473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B24636F6F6C6572_Medium_ThermodynamicState_index 61
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_436F6F6C65722473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B24636F6F6C6572_Medium__omcQuot_546865726D6F64796E616D696353746174652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B24636F6F6C65722473746174655F5F646573_index 62
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_45786368616E6765725F5F4A50696465612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2465786368616E676572_MedPB_ThermodynamicState_index 63
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_45786368616E6765725F5F4A50696465612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2465786368616E676572_MedPB__omcQuot_546865726D6F64796E616D696353746174652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2465786368616E6765722473746174655F5F434F325F5F646573_index 64
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_45786368616E6765725F5F4A50696465612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2465786368616E676572_MedPB__omcQuot_546865726D6F64796E616D696353746174652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2465786368616E6765722473746174655F5F4854465F5F646573_index 65
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_45786368616E6765725F5F4A50696465612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2465786368616E676572_MedRec_ThermodynamicState_index 66
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_486561745265637570657261746F7244544176652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B24485452_Medium_ThermodynamicState_index 67
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_486561745265637570657261746F7244544176652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B24485452_Medium__omcQuot_546865726D6F64796E616D696353746174652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B244854522473746174655F5F636F6D705F5F646573_index 68
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_486561745265637570657261746F7244544176652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B24485452_Medium__omcQuot_546865726D6F64796E616D696353746174652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B244854522473746174655F5F747572625F5F646573_index 69
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_486561745265637570657261746F7244544176652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B244C5452_Medium_ThermodynamicState_index 70
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_486561745265637570657261746F7244544176652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B244C5452_Medium__omcQuot_546865726D6F64796E616D696353746174652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B244C54522473746174655F5F636F6D705F5F646573_index 71
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_486561745265637570657261746F7244544176652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B244C5452_Medium__omcQuot_546865726D6F64796E616D696353746174652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B244C54522473746174655F5F747572625F5F646573_index 72
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_54757262696E652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2474757262696E65_Medium_ThermodynamicState_index 73
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_54757262696E652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2474757262696E65_Medium__omcQuot_546865726D6F64796E616D696353746174652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2474757262696E652473746174655F5F61_index 74
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_54757262696E652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2474757262696E65_Medium__omcQuot_546865726D6F64796E616D696353746174652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2474757262696E652473746174655F5F696E5F5F646573_index 75
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_54757262696E652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2474757262696E65_Medium__omcQuot_546865726D6F64796E616D696353746174652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2474757262696E652473746174655F5F6973656E5F5F646573_index 76
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_54757262696E652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2474757262696E65_Medium__omcQuot_546865726D6F64796E616D696353746174652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2474757262696E652473746174655F5F6F75745F5F646573_index 77
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_54757262696E652473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B2474757262696E65_Medium_specificEntropy_index 78
#define SolarTherm_Models_PowerBlocks_sCO2Cycle_DirectDesign__omcQuot_7265636F6D7050425F5F4D6F6469666965645F5F4A50696465612473434F32504244657369676E506F696E7443616C63756C61746F7224706F776572426C6F636B_MedRec_ThermodynamicState_index 79
#define SolarTherm_Utilities_SurrogateModelsMultiOutput_predict_index 80
#define SolarTherm_Utilities_SurrogateModelsMultiOutput_STNeuralNetwork_constructor_index 81
#define SolarTherm_Utilities_SurrogateModelsMultiOutput_STNeuralNetwork_destructor_index 82

extern void sCO2SurrogatePBRig_callExternalObjectDestructors(DATA *_data, threadData_t *threadData);
#if !defined(OMC_NUM_NONLINEAR_SYSTEMS) || OMC_NUM_NONLINEAR_SYSTEMS>0
extern void sCO2SurrogatePBRig_initialNonLinearSystem(int nNonLinearSystems, NONLINEAR_SYSTEM_DATA *data);
#endif
#if !defined(OMC_NUM_LINEAR_SYSTEMS) || OMC_NUM_LINEAR_SYSTEMS>0
extern void sCO2SurrogatePBRig_initialLinearSystem(int nLinearSystems, LINEAR_SYSTEM_DATA *data);
#endif
#if !defined(OMC_NUM_MIXED_SYSTEMS) || OMC_NUM_MIXED_SYSTEMS>0
#endif
#if !defined(OMC_NO_STATESELECTION)
extern void sCO2SurrogatePBRig_initializeStateSets(int nStateSets, STATE_SET_DATA* statesetData, DATA *data);
#endif
extern int sCO2SurrogatePBRig_functionAlgebraics(DATA *data, threadData_t *threadData);
extern int sCO2SurrogatePBRig_function_storeDelayed(DATA *data, threadData_t *threadData);
extern int sCO2SurrogatePBRig_updateBoundVariableAttributes(DATA *data, threadData_t *threadData);
extern int sCO2SurrogatePBRig_functionInitialEquations(DATA *data, threadData_t *threadData);
extern int sCO2SurrogatePBRig_functionInitialEquations_lambda0(DATA *data, threadData_t *threadData);
extern int sCO2SurrogatePBRig_functionRemovedInitialEquations(DATA *data, threadData_t *threadData);
extern int sCO2SurrogatePBRig_updateBoundParameters(DATA *data, threadData_t *threadData);
extern int sCO2SurrogatePBRig_checkForAsserts(DATA *data, threadData_t *threadData);
extern int sCO2SurrogatePBRig_function_ZeroCrossingsEquations(DATA *data, threadData_t *threadData);
extern int sCO2SurrogatePBRig_function_ZeroCrossings(DATA *data, threadData_t *threadData, double* gout);
extern int sCO2SurrogatePBRig_function_updateRelations(DATA *data, threadData_t *threadData, int evalZeroCross);
extern const char* sCO2SurrogatePBRig_zeroCrossingDescription(int i, int **out_EquationIndexes);
extern const char* sCO2SurrogatePBRig_relationDescription(int i);
extern void sCO2SurrogatePBRig_function_initSample(DATA *data, threadData_t *threadData);
extern int sCO2SurrogatePBRig_initialAnalyticJacobianG(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int sCO2SurrogatePBRig_initialAnalyticJacobianA(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int sCO2SurrogatePBRig_initialAnalyticJacobianB(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int sCO2SurrogatePBRig_initialAnalyticJacobianC(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int sCO2SurrogatePBRig_initialAnalyticJacobianD(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int sCO2SurrogatePBRig_initialAnalyticJacobianF(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian);
extern int sCO2SurrogatePBRig_functionJacG_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int sCO2SurrogatePBRig_functionJacA_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int sCO2SurrogatePBRig_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int sCO2SurrogatePBRig_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int sCO2SurrogatePBRig_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern int sCO2SurrogatePBRig_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *thisJacobian, ANALYTIC_JACOBIAN *parentJacobian);
extern const char* sCO2SurrogatePBRig_linear_model_frame(void);
extern const char* sCO2SurrogatePBRig_linear_model_datarecovery_frame(void);
extern int sCO2SurrogatePBRig_mayer(DATA* data, modelica_real** res, short *);
extern int sCO2SurrogatePBRig_lagrange(DATA* data, modelica_real** res, short *, short *);
extern int sCO2SurrogatePBRig_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
extern int sCO2SurrogatePBRig_setInputData(DATA *data, const modelica_boolean file);
extern int sCO2SurrogatePBRig_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
extern void sCO2SurrogatePBRig_function_initSynchronous(DATA * data, threadData_t *threadData);
extern void sCO2SurrogatePBRig_function_updateSynchronous(DATA * data, threadData_t *threadData, long i);
extern int sCO2SurrogatePBRig_function_equationsSynchronous(DATA * data, threadData_t *threadData, long i);
extern void sCO2SurrogatePBRig_read_input_fmu(MODEL_DATA* modelData, SIMULATION_INFO* simulationData);
extern void sCO2SurrogatePBRig_function_savePreSynchronous(DATA *data, threadData_t *threadData);
extern int sCO2SurrogatePBRig_inputNames(DATA* data, char ** names);
extern int sCO2SurrogatePBRig_initializeDAEmodeData(DATA *data, DAEMODE_DATA*);
extern int sCO2SurrogatePBRig_functionLocalKnownVars(DATA*, threadData_t*);
extern int sCO2SurrogatePBRig_symbolicInlineSystem(DATA*, threadData_t*);

#include "sCO2SurrogatePBRig_literals.h"




#if defined(HPCOM) && !defined(_OPENMP)
  #error "HPCOM requires OpenMP or the results are wrong"
#endif
#if defined(_OPENMP)
  #include <omp.h>
#else
  /* dummy omp defines */
  #define omp_get_max_threads() 1
#endif

#if defined(__cplusplus)
}
#endif

#endif /* !defined(sCO2SurrogatePBRig__MODEL_H) */


