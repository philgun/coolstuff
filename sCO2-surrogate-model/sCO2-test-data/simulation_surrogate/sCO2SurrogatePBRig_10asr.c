/* Asserts */
#include "sCO2SurrogatePBRig_model.h"
#if defined(__cplusplus)
extern "C" {
#endif


/*
equation index: 1887
type: ALGORITHM

  assert(powerBlock.fluid_b.h_outflow >= -10000000000.0 and powerBlock.fluid_b.h_outflow <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= powerBlock.fluid_b.h_outflow <= 10000000000.0, has value: " + String(powerBlock.fluid_b.h_outflow, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1887(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1887};
  modelica_boolean tmp0;
  modelica_boolean tmp1;
  static const MMC_DEFSTRINGLIT(tmp2,115,"Variable violating min/max constraint: -10000000000.0 <= powerBlock.fluid_b.h_outflow <= 10000000000.0, has value: ");
  modelica_string tmp3;
  static int tmp4 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp4)
  {
    tmp0 = GreaterEq(data->localData[0]->realVars[50] /* powerBlock.fluid_b.h_outflow variable */,-10000000000.0);
    tmp1 = LessEq(data->localData[0]->realVars[50] /* powerBlock.fluid_b.h_outflow variable */,10000000000.0);
    if(!(tmp0 && tmp1))
    {
      tmp3 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[50] /* powerBlock.fluid_b.h_outflow variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp2),tmp3);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",16,5,17,84,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.fluid_b.h_outflow >= -10000000000.0 and powerBlock.fluid_b.h_outflow <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp4 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1888
type: ALGORITHM

  assert(powerBlock.eta_cycle_net >= 0.0, "Variable violating min constraint: 0.0 <= powerBlock.eta_cycle_net, has value: " + String(powerBlock.eta_cycle_net, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1888(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1888};
  modelica_boolean tmp5;
  static const MMC_DEFSTRINGLIT(tmp6,79,"Variable violating min constraint: 0.0 <= powerBlock.eta_cycle_net, has value: ");
  modelica_string tmp7;
  static int tmp8 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp8)
  {
    tmp5 = GreaterEq(data->localData[0]->realVars[48] /* powerBlock.eta_cycle_net variable */,0.0);
    if(!tmp5)
    {
      tmp7 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[48] /* powerBlock.eta_cycle_net variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp6),tmp7);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/SurrogatesCO2PB.mo",84,3,84,30,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\npowerBlock.eta_cycle_net >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp8 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1889
type: ALGORITHM

  assert(eta_gross >= 0.0, "Variable violating min constraint: 0.0 <= eta_gross, has value: " + String(eta_gross, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1889(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1889};
  modelica_boolean tmp9;
  static const MMC_DEFSTRINGLIT(tmp10,64,"Variable violating min constraint: 0.0 <= eta_gross, has value: ");
  modelica_string tmp11;
  static int tmp12 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp12)
  {
    tmp9 = GreaterEq(data->localData[0]->realVars[42] /* eta_gross variable */,0.0);
    if(!tmp9)
    {
      tmp11 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[42] /* eta_gross variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp10),tmp11);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/sCO2-test-data/simulation_surrogate/sCO2SurrogatePBRig.mo",87,3,87,17,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neta_gross >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp12 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1890
type: ALGORITHM

  assert(eta_Q >= 0.0, "Variable violating min constraint: 0.0 <= eta_Q, has value: " + String(eta_Q, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1890(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1890};
  modelica_boolean tmp13;
  static const MMC_DEFSTRINGLIT(tmp14,60,"Variable violating min constraint: 0.0 <= eta_Q, has value: ");
  modelica_string tmp15;
  static int tmp16 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp16)
  {
    tmp13 = GreaterEq(data->localData[0]->realVars[41] /* eta_Q variable */,0.0);
    if(!tmp13)
    {
      tmp15 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[41] /* eta_Q variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp14),tmp15);
      {
        FILE_INFO info = {"/home/philgun/Documents/codecodecode/codecodecode/sCO2-surrogate-model/sCO2-test-data/simulation_surrogate/sCO2SurrogatePBRig.mo",88,3,88,13,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\neta_Q >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp16 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1713
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.from_comp_port_b.m_flow >= -100000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.from_comp_port_b.m_flow <= 100000.0, "Variable violating min/max constraint: -100000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.from_comp_port_b.m_flow <= 100000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.from_comp_port_b.m_flow, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1713(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1713};
  modelica_boolean tmp17;
  modelica_boolean tmp18;
  static const MMC_DEFSTRINGLIT(tmp19,143,"Variable violating min/max constraint: -100000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.from_comp_port_b.m_flow <= 100000.0, has value: ");
  modelica_string tmp20;
  static int tmp21 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp21)
  {
    tmp17 = GreaterEq(data->localData[0]->realVars[105] /* sCO2PBDesignPointCalculator.powerBlock.HTR.from_comp_port_b.m_flow variable */,-100000.0);
    tmp18 = LessEq(data->localData[0]->realVars[105] /* sCO2PBDesignPointCalculator.powerBlock.HTR.from_comp_port_b.m_flow variable */,100000.0);
    if(!(tmp17 && tmp18))
    {
      tmp20 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[105] /* sCO2PBDesignPointCalculator.powerBlock.HTR.from_comp_port_b.m_flow variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp19),tmp20);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",13,5,14,68,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.from_comp_port_b.m_flow >= -100000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.from_comp_port_b.m_flow <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp21 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1714
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[2] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[2] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[2], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1714(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1714};
  modelica_boolean tmp22;
  modelica_boolean tmp23;
  static const MMC_DEFSTRINGLIT(tmp24,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[2] <= 10000000000.0, has value: ");
  modelica_string tmp25;
  static int tmp26 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp26)
  {
    tmp22 = GreaterEq(data->localData[0]->realVars[120] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[2] variable */,-10000000000.0);
    tmp23 = LessEq(data->localData[0]->realVars[120] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[2] variable */,10000000000.0);
    if(!(tmp22 && tmp23))
    {
      tmp25 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[120] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp24),tmp25);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[2] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp26 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1715
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[3] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[3] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[3] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[3], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1715(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1715};
  modelica_boolean tmp27;
  modelica_boolean tmp28;
  static const MMC_DEFSTRINGLIT(tmp29,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[3] <= 10000000000.0, has value: ");
  modelica_string tmp30;
  static int tmp31 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp31)
  {
    tmp27 = GreaterEq(data->localData[0]->realVars[121] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[3] variable */,-10000000000.0);
    tmp28 = LessEq(data->localData[0]->realVars[121] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[3] variable */,10000000000.0);
    if(!(tmp27 && tmp28))
    {
      tmp30 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[121] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp29),tmp30);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[3] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[3] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp31 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1716
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[4] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[4] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[4] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[4], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1716(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1716};
  modelica_boolean tmp32;
  modelica_boolean tmp33;
  static const MMC_DEFSTRINGLIT(tmp34,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[4] <= 10000000000.0, has value: ");
  modelica_string tmp35;
  static int tmp36 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp36)
  {
    tmp32 = GreaterEq(data->localData[0]->realVars[122] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[4] variable */,-10000000000.0);
    tmp33 = LessEq(data->localData[0]->realVars[122] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[4] variable */,10000000000.0);
    if(!(tmp32 && tmp33))
    {
      tmp35 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[122] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[4] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp34),tmp35);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[4] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[4] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp36 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1717
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[5] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[5] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[5] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[5], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1717(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1717};
  modelica_boolean tmp37;
  modelica_boolean tmp38;
  static const MMC_DEFSTRINGLIT(tmp39,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[5] <= 10000000000.0, has value: ");
  modelica_string tmp40;
  static int tmp41 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp41)
  {
    tmp37 = GreaterEq(data->localData[0]->realVars[123] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[5] variable */,-10000000000.0);
    tmp38 = LessEq(data->localData[0]->realVars[123] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[5] variable */,10000000000.0);
    if(!(tmp37 && tmp38))
    {
      tmp40 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[123] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[5] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp39),tmp40);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[5] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[5] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp41 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1718
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[6] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[6] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[6] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[6], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1718(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1718};
  modelica_boolean tmp42;
  modelica_boolean tmp43;
  static const MMC_DEFSTRINGLIT(tmp44,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[6] <= 10000000000.0, has value: ");
  modelica_string tmp45;
  static int tmp46 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp46)
  {
    tmp42 = GreaterEq(data->localData[0]->realVars[124] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[6] variable */,-10000000000.0);
    tmp43 = LessEq(data->localData[0]->realVars[124] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[6] variable */,10000000000.0);
    if(!(tmp42 && tmp43))
    {
      tmp45 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[124] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[6] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp44),tmp45);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[6] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[6] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp46 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1719
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[7] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[7] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[7] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[7], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1719(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1719};
  modelica_boolean tmp47;
  modelica_boolean tmp48;
  static const MMC_DEFSTRINGLIT(tmp49,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[7] <= 10000000000.0, has value: ");
  modelica_string tmp50;
  static int tmp51 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp51)
  {
    tmp47 = GreaterEq(data->localData[0]->realVars[125] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[7] variable */,-10000000000.0);
    tmp48 = LessEq(data->localData[0]->realVars[125] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[7] variable */,10000000000.0);
    if(!(tmp47 && tmp48))
    {
      tmp50 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[125] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[7] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp49),tmp50);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[7] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[7] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp51 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1720
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[8] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[8] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[8] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[8], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1720(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1720};
  modelica_boolean tmp52;
  modelica_boolean tmp53;
  static const MMC_DEFSTRINGLIT(tmp54,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[8] <= 10000000000.0, has value: ");
  modelica_string tmp55;
  static int tmp56 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp56)
  {
    tmp52 = GreaterEq(data->localData[0]->realVars[126] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[8] variable */,-10000000000.0);
    tmp53 = LessEq(data->localData[0]->realVars[126] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[8] variable */,10000000000.0);
    if(!(tmp52 && tmp53))
    {
      tmp55 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[126] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[8] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp54),tmp55);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[8] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[8] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp56 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1721
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[9] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[9] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[9] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[9], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1721(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1721};
  modelica_boolean tmp57;
  modelica_boolean tmp58;
  static const MMC_DEFSTRINGLIT(tmp59,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[9] <= 10000000000.0, has value: ");
  modelica_string tmp60;
  static int tmp61 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp61)
  {
    tmp57 = GreaterEq(data->localData[0]->realVars[127] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[9] variable */,-10000000000.0);
    tmp58 = LessEq(data->localData[0]->realVars[127] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[9] variable */,10000000000.0);
    if(!(tmp57 && tmp58))
    {
      tmp60 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[127] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[9] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp59),tmp60);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[9] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[9] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp61 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1722
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[10] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[10] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[10] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[10], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1722(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1722};
  modelica_boolean tmp62;
  modelica_boolean tmp63;
  static const MMC_DEFSTRINGLIT(tmp64,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[10] <= 10000000000.0, has value: ");
  modelica_string tmp65;
  static int tmp66 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp66)
  {
    tmp62 = GreaterEq(data->localData[0]->realVars[128] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[10] variable */,-10000000000.0);
    tmp63 = LessEq(data->localData[0]->realVars[128] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[10] variable */,10000000000.0);
    if(!(tmp62 && tmp63))
    {
      tmp65 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[128] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[10] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp64),tmp65);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[10] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[10] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp66 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1723
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[11] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[11] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[11] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[11], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1723(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1723};
  modelica_boolean tmp67;
  modelica_boolean tmp68;
  static const MMC_DEFSTRINGLIT(tmp69,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[11] <= 10000000000.0, has value: ");
  modelica_string tmp70;
  static int tmp71 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp71)
  {
    tmp67 = GreaterEq(data->localData[0]->realVars[129] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[11] variable */,-10000000000.0);
    tmp68 = LessEq(data->localData[0]->realVars[129] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[11] variable */,10000000000.0);
    if(!(tmp67 && tmp68))
    {
      tmp70 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[129] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[11] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp69),tmp70);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[11] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[11] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp71 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1724
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[12] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[12] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[12] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[12], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1724(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1724};
  modelica_boolean tmp72;
  modelica_boolean tmp73;
  static const MMC_DEFSTRINGLIT(tmp74,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[12] <= 10000000000.0, has value: ");
  modelica_string tmp75;
  static int tmp76 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp76)
  {
    tmp72 = GreaterEq(data->localData[0]->realVars[130] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[12] variable */,-10000000000.0);
    tmp73 = LessEq(data->localData[0]->realVars[130] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[12] variable */,10000000000.0);
    if(!(tmp72 && tmp73))
    {
      tmp75 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[130] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[12] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp74),tmp75);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[12] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[12] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp76 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1725
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[13] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[13] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[13] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[13], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1725(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1725};
  modelica_boolean tmp77;
  modelica_boolean tmp78;
  static const MMC_DEFSTRINGLIT(tmp79,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[13] <= 10000000000.0, has value: ");
  modelica_string tmp80;
  static int tmp81 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp81)
  {
    tmp77 = GreaterEq(data->localData[0]->realVars[131] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[13] variable */,-10000000000.0);
    tmp78 = LessEq(data->localData[0]->realVars[131] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[13] variable */,10000000000.0);
    if(!(tmp77 && tmp78))
    {
      tmp80 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[131] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[13] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp79),tmp80);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[13] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[13] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp81 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1726
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[14] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[14] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[14] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[14], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1726(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1726};
  modelica_boolean tmp82;
  modelica_boolean tmp83;
  static const MMC_DEFSTRINGLIT(tmp84,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[14] <= 10000000000.0, has value: ");
  modelica_string tmp85;
  static int tmp86 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp86)
  {
    tmp82 = GreaterEq(data->localData[0]->realVars[132] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[14] variable */,-10000000000.0);
    tmp83 = LessEq(data->localData[0]->realVars[132] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[14] variable */,10000000000.0);
    if(!(tmp82 && tmp83))
    {
      tmp85 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[132] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[14] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp84),tmp85);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[14] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[14] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp86 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1727
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[15] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[15] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[15] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[15], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1727(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1727};
  modelica_boolean tmp87;
  modelica_boolean tmp88;
  static const MMC_DEFSTRINGLIT(tmp89,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[15] <= 10000000000.0, has value: ");
  modelica_string tmp90;
  static int tmp91 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp91)
  {
    tmp87 = GreaterEq(data->localData[0]->realVars[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[15] variable */,-10000000000.0);
    tmp88 = LessEq(data->localData[0]->realVars[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[15] variable */,10000000000.0);
    if(!(tmp87 && tmp88))
    {
      tmp90 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[133] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[15] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp89),tmp90);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[15] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_turb[15] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp91 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1728
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[2] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[2] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[2] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[2], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1728(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1728};
  modelica_boolean tmp92;
  modelica_boolean tmp93;
  static const MMC_DEFSTRINGLIT(tmp94,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[2] <= 873.15, has value: ");
  modelica_string tmp95;
  static int tmp96 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp96)
  {
    tmp92 = GreaterEq(data->localData[0]->realVars[76] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[2] variable */,20.0);
    tmp93 = LessEq(data->localData[0]->realVars[76] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[2] variable */,873.15);
    if(!(tmp92 && tmp93))
    {
      tmp95 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[76] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp94),tmp95);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[2] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[2] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp96 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1729
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[3] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[3] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[3] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[3], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1729(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1729};
  modelica_boolean tmp97;
  modelica_boolean tmp98;
  static const MMC_DEFSTRINGLIT(tmp99,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[3] <= 873.15, has value: ");
  modelica_string tmp100;
  static int tmp101 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp101)
  {
    tmp97 = GreaterEq(data->localData[0]->realVars[77] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[3] variable */,20.0);
    tmp98 = LessEq(data->localData[0]->realVars[77] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[3] variable */,873.15);
    if(!(tmp97 && tmp98))
    {
      tmp100 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[77] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp99),tmp100);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[3] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[3] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp101 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1730
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[4] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[4] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[4] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[4], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1730(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1730};
  modelica_boolean tmp102;
  modelica_boolean tmp103;
  static const MMC_DEFSTRINGLIT(tmp104,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[4] <= 873.15, has value: ");
  modelica_string tmp105;
  static int tmp106 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp106)
  {
    tmp102 = GreaterEq(data->localData[0]->realVars[78] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[4] variable */,20.0);
    tmp103 = LessEq(data->localData[0]->realVars[78] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[4] variable */,873.15);
    if(!(tmp102 && tmp103))
    {
      tmp105 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[78] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[4] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp104),tmp105);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[4] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[4] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp106 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1731
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[5] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[5] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[5] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[5], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1731(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1731};
  modelica_boolean tmp107;
  modelica_boolean tmp108;
  static const MMC_DEFSTRINGLIT(tmp109,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[5] <= 873.15, has value: ");
  modelica_string tmp110;
  static int tmp111 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp111)
  {
    tmp107 = GreaterEq(data->localData[0]->realVars[79] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[5] variable */,20.0);
    tmp108 = LessEq(data->localData[0]->realVars[79] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[5] variable */,873.15);
    if(!(tmp107 && tmp108))
    {
      tmp110 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[79] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[5] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp109),tmp110);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[5] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[5] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp111 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1732
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[6] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[6] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[6] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[6], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1732(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1732};
  modelica_boolean tmp112;
  modelica_boolean tmp113;
  static const MMC_DEFSTRINGLIT(tmp114,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[6] <= 873.15, has value: ");
  modelica_string tmp115;
  static int tmp116 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp116)
  {
    tmp112 = GreaterEq(data->localData[0]->realVars[80] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[6] variable */,20.0);
    tmp113 = LessEq(data->localData[0]->realVars[80] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[6] variable */,873.15);
    if(!(tmp112 && tmp113))
    {
      tmp115 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[80] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[6] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp114),tmp115);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[6] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[6] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp116 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1733
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[7] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[7] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[7] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[7], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1733(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1733};
  modelica_boolean tmp117;
  modelica_boolean tmp118;
  static const MMC_DEFSTRINGLIT(tmp119,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[7] <= 873.15, has value: ");
  modelica_string tmp120;
  static int tmp121 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp121)
  {
    tmp117 = GreaterEq(data->localData[0]->realVars[81] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[7] variable */,20.0);
    tmp118 = LessEq(data->localData[0]->realVars[81] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[7] variable */,873.15);
    if(!(tmp117 && tmp118))
    {
      tmp120 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[81] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[7] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp119),tmp120);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[7] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[7] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp121 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1734
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[8] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[8] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[8] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[8], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1734(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1734};
  modelica_boolean tmp122;
  modelica_boolean tmp123;
  static const MMC_DEFSTRINGLIT(tmp124,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[8] <= 873.15, has value: ");
  modelica_string tmp125;
  static int tmp126 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp126)
  {
    tmp122 = GreaterEq(data->localData[0]->realVars[82] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[8] variable */,20.0);
    tmp123 = LessEq(data->localData[0]->realVars[82] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[8] variable */,873.15);
    if(!(tmp122 && tmp123))
    {
      tmp125 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[82] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[8] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp124),tmp125);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[8] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[8] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp126 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1735
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[9] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[9] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[9] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[9], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1735(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1735};
  modelica_boolean tmp127;
  modelica_boolean tmp128;
  static const MMC_DEFSTRINGLIT(tmp129,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[9] <= 873.15, has value: ");
  modelica_string tmp130;
  static int tmp131 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp131)
  {
    tmp127 = GreaterEq(data->localData[0]->realVars[83] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[9] variable */,20.0);
    tmp128 = LessEq(data->localData[0]->realVars[83] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[9] variable */,873.15);
    if(!(tmp127 && tmp128))
    {
      tmp130 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[83] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[9] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp129),tmp130);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[9] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[9] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp131 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1736
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[10] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[10] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[10] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[10], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1736(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1736};
  modelica_boolean tmp132;
  modelica_boolean tmp133;
  static const MMC_DEFSTRINGLIT(tmp134,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[10] <= 873.15, has value: ");
  modelica_string tmp135;
  static int tmp136 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp136)
  {
    tmp132 = GreaterEq(data->localData[0]->realVars[84] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[10] variable */,20.0);
    tmp133 = LessEq(data->localData[0]->realVars[84] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[10] variable */,873.15);
    if(!(tmp132 && tmp133))
    {
      tmp135 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[84] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[10] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp134),tmp135);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[10] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[10] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp136 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1737
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[11] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[11] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[11] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[11], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1737(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1737};
  modelica_boolean tmp137;
  modelica_boolean tmp138;
  static const MMC_DEFSTRINGLIT(tmp139,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[11] <= 873.15, has value: ");
  modelica_string tmp140;
  static int tmp141 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp141)
  {
    tmp137 = GreaterEq(data->localData[0]->realVars[85] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[11] variable */,20.0);
    tmp138 = LessEq(data->localData[0]->realVars[85] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[11] variable */,873.15);
    if(!(tmp137 && tmp138))
    {
      tmp140 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[85] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[11] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp139),tmp140);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[11] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[11] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp141 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1738
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[12] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[12] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[12] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[12], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1738(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1738};
  modelica_boolean tmp142;
  modelica_boolean tmp143;
  static const MMC_DEFSTRINGLIT(tmp144,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[12] <= 873.15, has value: ");
  modelica_string tmp145;
  static int tmp146 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp146)
  {
    tmp142 = GreaterEq(data->localData[0]->realVars[86] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[12] variable */,20.0);
    tmp143 = LessEq(data->localData[0]->realVars[86] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[12] variable */,873.15);
    if(!(tmp142 && tmp143))
    {
      tmp145 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[86] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[12] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp144),tmp145);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[12] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[12] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp146 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1739
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[13] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[13] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[13] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[13], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1739(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1739};
  modelica_boolean tmp147;
  modelica_boolean tmp148;
  static const MMC_DEFSTRINGLIT(tmp149,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[13] <= 873.15, has value: ");
  modelica_string tmp150;
  static int tmp151 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp151)
  {
    tmp147 = GreaterEq(data->localData[0]->realVars[87] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[13] variable */,20.0);
    tmp148 = LessEq(data->localData[0]->realVars[87] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[13] variable */,873.15);
    if(!(tmp147 && tmp148))
    {
      tmp150 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[87] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[13] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp149),tmp150);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[13] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[13] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp151 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1740
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[14] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[14] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[14] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[14], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1740(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1740};
  modelica_boolean tmp152;
  modelica_boolean tmp153;
  static const MMC_DEFSTRINGLIT(tmp154,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[14] <= 873.15, has value: ");
  modelica_string tmp155;
  static int tmp156 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp156)
  {
    tmp152 = GreaterEq(data->localData[0]->realVars[88] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[14] variable */,20.0);
    tmp153 = LessEq(data->localData[0]->realVars[88] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[14] variable */,873.15);
    if(!(tmp152 && tmp153))
    {
      tmp155 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[88] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[14] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp154),tmp155);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[14] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[14] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp156 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1741
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[15] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[15] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[15] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[15], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1741(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1741};
  modelica_boolean tmp157;
  modelica_boolean tmp158;
  static const MMC_DEFSTRINGLIT(tmp159,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[15] <= 873.15, has value: ");
  modelica_string tmp160;
  static int tmp161 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp161)
  {
    tmp157 = GreaterEq(data->localData[0]->realVars[89] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[15] variable */,20.0);
    tmp158 = LessEq(data->localData[0]->realVars[89] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[15] variable */,873.15);
    if(!(tmp157 && tmp158))
    {
      tmp160 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[89] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[15] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp159),tmp160);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[15] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_turb[15] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp161 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1742
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[1] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[1] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[1] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[1], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1742(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1742};
  modelica_boolean tmp162;
  modelica_boolean tmp163;
  static const MMC_DEFSTRINGLIT(tmp164,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[1] <= 873.15, has value: ");
  modelica_string tmp165;
  static int tmp166 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp166)
  {
    tmp162 = GreaterEq(data->localData[0]->realVars[61] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[1] variable */,20.0);
    tmp163 = LessEq(data->localData[0]->realVars[61] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[1] variable */,873.15);
    if(!(tmp162 && tmp163))
    {
      tmp165 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[61] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp164),tmp165);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[1] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[1] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp166 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1743
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[2] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[2] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[2] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[2], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1743(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1743};
  modelica_boolean tmp167;
  modelica_boolean tmp168;
  static const MMC_DEFSTRINGLIT(tmp169,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[2] <= 873.15, has value: ");
  modelica_string tmp170;
  static int tmp171 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp171)
  {
    tmp167 = GreaterEq(data->localData[0]->realVars[62] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[2] variable */,20.0);
    tmp168 = LessEq(data->localData[0]->realVars[62] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[2] variable */,873.15);
    if(!(tmp167 && tmp168))
    {
      tmp170 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[62] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp169),tmp170);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[2] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[2] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp171 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1744
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[3] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[3] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[3] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[3], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1744(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1744};
  modelica_boolean tmp172;
  modelica_boolean tmp173;
  static const MMC_DEFSTRINGLIT(tmp174,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[3] <= 873.15, has value: ");
  modelica_string tmp175;
  static int tmp176 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp176)
  {
    tmp172 = GreaterEq(data->localData[0]->realVars[63] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[3] variable */,20.0);
    tmp173 = LessEq(data->localData[0]->realVars[63] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[3] variable */,873.15);
    if(!(tmp172 && tmp173))
    {
      tmp175 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[63] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp174),tmp175);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[3] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[3] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp176 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1745
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[4] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[4] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[4] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[4], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1745(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1745};
  modelica_boolean tmp177;
  modelica_boolean tmp178;
  static const MMC_DEFSTRINGLIT(tmp179,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[4] <= 873.15, has value: ");
  modelica_string tmp180;
  static int tmp181 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp181)
  {
    tmp177 = GreaterEq(data->localData[0]->realVars[64] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[4] variable */,20.0);
    tmp178 = LessEq(data->localData[0]->realVars[64] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[4] variable */,873.15);
    if(!(tmp177 && tmp178))
    {
      tmp180 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[64] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[4] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp179),tmp180);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[4] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[4] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp181 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1746
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[5] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[5] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[5] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[5], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1746(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1746};
  modelica_boolean tmp182;
  modelica_boolean tmp183;
  static const MMC_DEFSTRINGLIT(tmp184,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[5] <= 873.15, has value: ");
  modelica_string tmp185;
  static int tmp186 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp186)
  {
    tmp182 = GreaterEq(data->localData[0]->realVars[65] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[5] variable */,20.0);
    tmp183 = LessEq(data->localData[0]->realVars[65] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[5] variable */,873.15);
    if(!(tmp182 && tmp183))
    {
      tmp185 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[65] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[5] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp184),tmp185);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[5] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[5] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp186 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1747
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[6] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[6] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[6] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[6], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1747(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1747};
  modelica_boolean tmp187;
  modelica_boolean tmp188;
  static const MMC_DEFSTRINGLIT(tmp189,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[6] <= 873.15, has value: ");
  modelica_string tmp190;
  static int tmp191 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp191)
  {
    tmp187 = GreaterEq(data->localData[0]->realVars[66] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[6] variable */,20.0);
    tmp188 = LessEq(data->localData[0]->realVars[66] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[6] variable */,873.15);
    if(!(tmp187 && tmp188))
    {
      tmp190 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[66] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[6] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp189),tmp190);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[6] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[6] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp191 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1748
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[7] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[7] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[7] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[7], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1748(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1748};
  modelica_boolean tmp192;
  modelica_boolean tmp193;
  static const MMC_DEFSTRINGLIT(tmp194,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[7] <= 873.15, has value: ");
  modelica_string tmp195;
  static int tmp196 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp196)
  {
    tmp192 = GreaterEq(data->localData[0]->realVars[67] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[7] variable */,20.0);
    tmp193 = LessEq(data->localData[0]->realVars[67] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[7] variable */,873.15);
    if(!(tmp192 && tmp193))
    {
      tmp195 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[67] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[7] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp194),tmp195);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[7] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[7] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp196 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1749
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[8] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[8] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[8] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[8], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1749(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1749};
  modelica_boolean tmp197;
  modelica_boolean tmp198;
  static const MMC_DEFSTRINGLIT(tmp199,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[8] <= 873.15, has value: ");
  modelica_string tmp200;
  static int tmp201 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp201)
  {
    tmp197 = GreaterEq(data->localData[0]->realVars[68] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[8] variable */,20.0);
    tmp198 = LessEq(data->localData[0]->realVars[68] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[8] variable */,873.15);
    if(!(tmp197 && tmp198))
    {
      tmp200 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[68] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[8] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp199),tmp200);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[8] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[8] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp201 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1750
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[9] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[9] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[9] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[9], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1750(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1750};
  modelica_boolean tmp202;
  modelica_boolean tmp203;
  static const MMC_DEFSTRINGLIT(tmp204,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[9] <= 873.15, has value: ");
  modelica_string tmp205;
  static int tmp206 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp206)
  {
    tmp202 = GreaterEq(data->localData[0]->realVars[69] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[9] variable */,20.0);
    tmp203 = LessEq(data->localData[0]->realVars[69] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[9] variable */,873.15);
    if(!(tmp202 && tmp203))
    {
      tmp205 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[69] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[9] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp204),tmp205);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[9] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[9] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp206 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1751
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[10] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[10] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[10] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[10], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1751(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1751};
  modelica_boolean tmp207;
  modelica_boolean tmp208;
  static const MMC_DEFSTRINGLIT(tmp209,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[10] <= 873.15, has value: ");
  modelica_string tmp210;
  static int tmp211 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp211)
  {
    tmp207 = GreaterEq(data->localData[0]->realVars[70] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[10] variable */,20.0);
    tmp208 = LessEq(data->localData[0]->realVars[70] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[10] variable */,873.15);
    if(!(tmp207 && tmp208))
    {
      tmp210 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[70] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[10] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp209),tmp210);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[10] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[10] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp211 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1752
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[11] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[11] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[11] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[11], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1752(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1752};
  modelica_boolean tmp212;
  modelica_boolean tmp213;
  static const MMC_DEFSTRINGLIT(tmp214,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[11] <= 873.15, has value: ");
  modelica_string tmp215;
  static int tmp216 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp216)
  {
    tmp212 = GreaterEq(data->localData[0]->realVars[71] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[11] variable */,20.0);
    tmp213 = LessEq(data->localData[0]->realVars[71] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[11] variable */,873.15);
    if(!(tmp212 && tmp213))
    {
      tmp215 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[71] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[11] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp214),tmp215);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[11] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[11] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp216 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1753
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[12] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[12] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[12] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[12], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1753(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1753};
  modelica_boolean tmp217;
  modelica_boolean tmp218;
  static const MMC_DEFSTRINGLIT(tmp219,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[12] <= 873.15, has value: ");
  modelica_string tmp220;
  static int tmp221 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp221)
  {
    tmp217 = GreaterEq(data->localData[0]->realVars[72] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[12] variable */,20.0);
    tmp218 = LessEq(data->localData[0]->realVars[72] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[12] variable */,873.15);
    if(!(tmp217 && tmp218))
    {
      tmp220 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[72] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[12] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp219),tmp220);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[12] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[12] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp221 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1754
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[13] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[13] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[13] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[13], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1754(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1754};
  modelica_boolean tmp222;
  modelica_boolean tmp223;
  static const MMC_DEFSTRINGLIT(tmp224,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[13] <= 873.15, has value: ");
  modelica_string tmp225;
  static int tmp226 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp226)
  {
    tmp222 = GreaterEq(data->localData[0]->realVars[73] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[13] variable */,20.0);
    tmp223 = LessEq(data->localData[0]->realVars[73] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[13] variable */,873.15);
    if(!(tmp222 && tmp223))
    {
      tmp225 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[73] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[13] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp224),tmp225);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[13] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[13] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp226 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1755
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[14] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[14] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[14] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[14], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1755(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1755};
  modelica_boolean tmp227;
  modelica_boolean tmp228;
  static const MMC_DEFSTRINGLIT(tmp229,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[14] <= 873.15, has value: ");
  modelica_string tmp230;
  static int tmp231 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp231)
  {
    tmp227 = GreaterEq(data->localData[0]->realVars[74] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[14] variable */,20.0);
    tmp228 = LessEq(data->localData[0]->realVars[74] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[14] variable */,873.15);
    if(!(tmp227 && tmp228))
    {
      tmp230 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[74] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[14] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp229),tmp230);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[14] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[14] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp231 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1756
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[15] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[15] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[15] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[15], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1756(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1756};
  modelica_boolean tmp232;
  modelica_boolean tmp233;
  static const MMC_DEFSTRINGLIT(tmp234,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[15] <= 873.15, has value: ");
  modelica_string tmp235;
  static int tmp236 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp236)
  {
    tmp232 = GreaterEq(data->localData[0]->realVars[75] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[15] variable */,20.0);
    tmp233 = LessEq(data->localData[0]->realVars[75] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[15] variable */,873.15);
    if(!(tmp232 && tmp233))
    {
      tmp235 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[75] /* sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[15] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp234),tmp235);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[15] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.T_from_comp[15] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp236 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1757
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[1] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[1] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[1], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1757(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1757};
  modelica_boolean tmp237;
  modelica_boolean tmp238;
  static const MMC_DEFSTRINGLIT(tmp239,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[1] <= 10000000000.0, has value: ");
  modelica_string tmp240;
  static int tmp241 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp241)
  {
    tmp237 = GreaterEq(data->localData[0]->realVars[106] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[1] variable */,-10000000000.0);
    tmp238 = LessEq(data->localData[0]->realVars[106] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[1] variable */,10000000000.0);
    if(!(tmp237 && tmp238))
    {
      tmp240 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[106] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp239),tmp240);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[1] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp241 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1758
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[2] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[2] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[2], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1758(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1758};
  modelica_boolean tmp242;
  modelica_boolean tmp243;
  static const MMC_DEFSTRINGLIT(tmp244,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[2] <= 10000000000.0, has value: ");
  modelica_string tmp245;
  static int tmp246 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp246)
  {
    tmp242 = GreaterEq(data->localData[0]->realVars[107] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[2] variable */,-10000000000.0);
    tmp243 = LessEq(data->localData[0]->realVars[107] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[2] variable */,10000000000.0);
    if(!(tmp242 && tmp243))
    {
      tmp245 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[107] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp244),tmp245);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[2] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp246 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1759
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[3] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[3] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[3] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[3], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1759(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1759};
  modelica_boolean tmp247;
  modelica_boolean tmp248;
  static const MMC_DEFSTRINGLIT(tmp249,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[3] <= 10000000000.0, has value: ");
  modelica_string tmp250;
  static int tmp251 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp251)
  {
    tmp247 = GreaterEq(data->localData[0]->realVars[108] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[3] variable */,-10000000000.0);
    tmp248 = LessEq(data->localData[0]->realVars[108] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[3] variable */,10000000000.0);
    if(!(tmp247 && tmp248))
    {
      tmp250 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[108] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp249),tmp250);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[3] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[3] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp251 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1760
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[4] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[4] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[4] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[4], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1760(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1760};
  modelica_boolean tmp252;
  modelica_boolean tmp253;
  static const MMC_DEFSTRINGLIT(tmp254,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[4] <= 10000000000.0, has value: ");
  modelica_string tmp255;
  static int tmp256 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp256)
  {
    tmp252 = GreaterEq(data->localData[0]->realVars[109] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[4] variable */,-10000000000.0);
    tmp253 = LessEq(data->localData[0]->realVars[109] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[4] variable */,10000000000.0);
    if(!(tmp252 && tmp253))
    {
      tmp255 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[109] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[4] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp254),tmp255);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[4] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[4] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp256 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1761
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[5] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[5] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[5] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[5], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1761(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1761};
  modelica_boolean tmp257;
  modelica_boolean tmp258;
  static const MMC_DEFSTRINGLIT(tmp259,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[5] <= 10000000000.0, has value: ");
  modelica_string tmp260;
  static int tmp261 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp261)
  {
    tmp257 = GreaterEq(data->localData[0]->realVars[110] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[5] variable */,-10000000000.0);
    tmp258 = LessEq(data->localData[0]->realVars[110] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[5] variable */,10000000000.0);
    if(!(tmp257 && tmp258))
    {
      tmp260 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[110] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[5] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp259),tmp260);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[5] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[5] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp261 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1762
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[6] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[6] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[6] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[6], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1762(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1762};
  modelica_boolean tmp262;
  modelica_boolean tmp263;
  static const MMC_DEFSTRINGLIT(tmp264,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[6] <= 10000000000.0, has value: ");
  modelica_string tmp265;
  static int tmp266 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp266)
  {
    tmp262 = GreaterEq(data->localData[0]->realVars[111] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[6] variable */,-10000000000.0);
    tmp263 = LessEq(data->localData[0]->realVars[111] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[6] variable */,10000000000.0);
    if(!(tmp262 && tmp263))
    {
      tmp265 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[111] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[6] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp264),tmp265);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[6] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[6] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp266 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1763
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[7] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[7] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[7] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[7], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1763(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1763};
  modelica_boolean tmp267;
  modelica_boolean tmp268;
  static const MMC_DEFSTRINGLIT(tmp269,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[7] <= 10000000000.0, has value: ");
  modelica_string tmp270;
  static int tmp271 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp271)
  {
    tmp267 = GreaterEq(data->localData[0]->realVars[112] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[7] variable */,-10000000000.0);
    tmp268 = LessEq(data->localData[0]->realVars[112] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[7] variable */,10000000000.0);
    if(!(tmp267 && tmp268))
    {
      tmp270 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[112] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[7] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp269),tmp270);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[7] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[7] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp271 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1764
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[8] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[8] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[8] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[8], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1764(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1764};
  modelica_boolean tmp272;
  modelica_boolean tmp273;
  static const MMC_DEFSTRINGLIT(tmp274,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[8] <= 10000000000.0, has value: ");
  modelica_string tmp275;
  static int tmp276 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp276)
  {
    tmp272 = GreaterEq(data->localData[0]->realVars[113] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[8] variable */,-10000000000.0);
    tmp273 = LessEq(data->localData[0]->realVars[113] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[8] variable */,10000000000.0);
    if(!(tmp272 && tmp273))
    {
      tmp275 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[113] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[8] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp274),tmp275);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[8] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[8] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp276 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1765
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[9] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[9] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[9] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[9], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1765(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1765};
  modelica_boolean tmp277;
  modelica_boolean tmp278;
  static const MMC_DEFSTRINGLIT(tmp279,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[9] <= 10000000000.0, has value: ");
  modelica_string tmp280;
  static int tmp281 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp281)
  {
    tmp277 = GreaterEq(data->localData[0]->realVars[114] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[9] variable */,-10000000000.0);
    tmp278 = LessEq(data->localData[0]->realVars[114] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[9] variable */,10000000000.0);
    if(!(tmp277 && tmp278))
    {
      tmp280 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[114] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[9] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp279),tmp280);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[9] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[9] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp281 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1766
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[10] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[10] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[10] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[10], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1766(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1766};
  modelica_boolean tmp282;
  modelica_boolean tmp283;
  static const MMC_DEFSTRINGLIT(tmp284,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[10] <= 10000000000.0, has value: ");
  modelica_string tmp285;
  static int tmp286 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp286)
  {
    tmp282 = GreaterEq(data->localData[0]->realVars[115] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[10] variable */,-10000000000.0);
    tmp283 = LessEq(data->localData[0]->realVars[115] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[10] variable */,10000000000.0);
    if(!(tmp282 && tmp283))
    {
      tmp285 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[115] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[10] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp284),tmp285);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[10] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[10] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp286 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1767
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[11] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[11] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[11] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[11], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1767(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1767};
  modelica_boolean tmp287;
  modelica_boolean tmp288;
  static const MMC_DEFSTRINGLIT(tmp289,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[11] <= 10000000000.0, has value: ");
  modelica_string tmp290;
  static int tmp291 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp291)
  {
    tmp287 = GreaterEq(data->localData[0]->realVars[116] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[11] variable */,-10000000000.0);
    tmp288 = LessEq(data->localData[0]->realVars[116] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[11] variable */,10000000000.0);
    if(!(tmp287 && tmp288))
    {
      tmp290 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[116] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[11] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp289),tmp290);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[11] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[11] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp291 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1768
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[12] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[12] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[12] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[12], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1768(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1768};
  modelica_boolean tmp292;
  modelica_boolean tmp293;
  static const MMC_DEFSTRINGLIT(tmp294,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[12] <= 10000000000.0, has value: ");
  modelica_string tmp295;
  static int tmp296 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp296)
  {
    tmp292 = GreaterEq(data->localData[0]->realVars[117] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[12] variable */,-10000000000.0);
    tmp293 = LessEq(data->localData[0]->realVars[117] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[12] variable */,10000000000.0);
    if(!(tmp292 && tmp293))
    {
      tmp295 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[117] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[12] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp294),tmp295);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[12] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[12] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp296 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1769
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[13] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[13] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[13] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[13], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1769(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1769};
  modelica_boolean tmp297;
  modelica_boolean tmp298;
  static const MMC_DEFSTRINGLIT(tmp299,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[13] <= 10000000000.0, has value: ");
  modelica_string tmp300;
  static int tmp301 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp301)
  {
    tmp297 = GreaterEq(data->localData[0]->realVars[118] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[13] variable */,-10000000000.0);
    tmp298 = LessEq(data->localData[0]->realVars[118] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[13] variable */,10000000000.0);
    if(!(tmp297 && tmp298))
    {
      tmp300 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[118] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[13] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp299),tmp300);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[13] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[13] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp301 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1770
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[14] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[14] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[14] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[14], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1770(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1770};
  modelica_boolean tmp302;
  modelica_boolean tmp303;
  static const MMC_DEFSTRINGLIT(tmp304,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[14] <= 10000000000.0, has value: ");
  modelica_string tmp305;
  static int tmp306 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp306)
  {
    tmp302 = GreaterEq(data->localData[0]->realVars[119] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[14] variable */,-10000000000.0);
    tmp303 = LessEq(data->localData[0]->realVars[119] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[14] variable */,10000000000.0);
    if(!(tmp302 && tmp303))
    {
      tmp305 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[119] /* sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[14] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp304),tmp305);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[14] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.h_from_comp[14] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp306 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1771
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.HTR.state_from_comp[15].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.state_from_comp[15].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.state_from_comp[15].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.HTR.state_from_comp[15].p, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1771(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1771};
  modelica_boolean tmp307;
  modelica_boolean tmp308;
  static const MMC_DEFSTRINGLIT(tmp309,138,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.HTR.state_from_comp[15].p <= 100000000.0, has value: ");
  modelica_string tmp310;
  static int tmp311 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp311)
  {
    tmp307 = GreaterEq(data->localData[0]->realVars[134] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_from_comp[15].p variable */,0.0);
    tmp308 = LessEq(data->localData[0]->realVars[134] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_from_comp[15].p variable */,100000000.0);
    if(!(tmp307 && tmp308))
    {
      tmp310 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[134] /* sCO2PBDesignPointCalculator.powerBlock.HTR.state_from_comp[15].p variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp309),tmp310);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.HTR.state_from_comp[15].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.HTR.state_from_comp[15].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp311 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1772
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1772(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1772};
  modelica_boolean tmp312;
  modelica_boolean tmp313;
  static const MMC_DEFSTRINGLIT(tmp314,150,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h <= 10000000000.0, has value: ");
  modelica_string tmp315;
  static int tmp316 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp316)
  {
    tmp312 = GreaterEq(data->localData[0]->realVars[284] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h variable */,-10000000000.0);
    tmp313 = LessEq(data->localData[0]->realVars[284] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h variable */,10000000000.0);
    if(!(tmp312 && tmp313))
    {
      tmp315 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[284] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp314),tmp315);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",90,7,90,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_a.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp316 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1773
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen.h >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen.h <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen.h, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1773(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1773};
  modelica_boolean tmp317;
  modelica_boolean tmp318;
  static const MMC_DEFSTRINGLIT(tmp319,153,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen.h <= 10000000000.0, has value: ");
  modelica_string tmp320;
  static int tmp321 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp321)
  {
    tmp317 = GreaterEq(data->localData[0]->realVars[285] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen.h variable */,-10000000000.0);
    tmp318 = LessEq(data->localData[0]->realVars[285] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen.h variable */,10000000000.0);
    if(!(tmp317 && tmp318))
    {
      tmp320 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[285] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen.h variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp319),tmp320);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",90,7,90,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen.h >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_isen.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp321 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1774
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.d_entrance >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.d_entrance, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.d_entrance, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1774(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1774};
  modelica_boolean tmp322;
  static const MMC_DEFSTRINGLIT(tmp323,119,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.d_entrance, has value: ");
  modelica_string tmp324;
  static int tmp325 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp325)
  {
    tmp322 = GreaterEq(data->localData[0]->realVars[278] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.d_entrance variable */,0.0);
    if(!tmp322)
    {
      tmp324 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[278] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.d_entrance variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp323),tmp324);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",619,4,619,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.mainCompressor.d_entrance >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp325 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1775
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_comp >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_comp, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_comp, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1775(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1775};
  modelica_boolean tmp326;
  static const MMC_DEFSTRINGLIT(tmp327,117,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_comp, has value: ");
  modelica_string tmp328;
  static int tmp329 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp329)
  {
    tmp326 = GreaterEq(data->localData[0]->realVars[279] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_comp variable */,0.0);
    if(!tmp326)
    {
      tmp328 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[279] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_comp variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp327),tmp328);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",620,4,620,88,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.mainCompressor.eta_comp >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp329 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1776
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1776(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1776};
  modelica_boolean tmp330;
  static const MMC_DEFSTRINGLIT(tmp331,112,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi, has value: ");
  modelica_string tmp332;
  static int tmp333 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp333)
  {
    tmp330 = GreaterEq(data->localData[0]->realVars[280] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi variable */,0.0);
    if(!tmp330)
    {
      tmp332 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[280] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp331),tmp332);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",621,4,621,52,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.mainCompressor.phi >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp333 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1777
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.psi >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.psi, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.mainCompressor.psi, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1777(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1777};
  modelica_boolean tmp334;
  static const MMC_DEFSTRINGLIT(tmp335,112,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.mainCompressor.psi, has value: ");
  modelica_string tmp336;
  static int tmp337 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp337)
  {
    tmp334 = GreaterEq(data->localData[0]->realVars[282] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.psi variable */,0.0);
    if(!tmp334)
    {
      tmp336 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[282] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.psi variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp335),tmp336);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",622,4,622,42,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.mainCompressor.psi >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp337 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1778
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.cooler.port_b.m_flow >= -100000.0 and sCO2PBDesignPointCalculator.powerBlock.cooler.port_b.m_flow <= 100000.0, "Variable violating min/max constraint: -100000.0 <= sCO2PBDesignPointCalculator.powerBlock.cooler.port_b.m_flow <= 100000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.cooler.port_b.m_flow, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1778(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1778};
  modelica_boolean tmp338;
  modelica_boolean tmp339;
  static const MMC_DEFSTRINGLIT(tmp340,136,"Variable violating min/max constraint: -100000.0 <= sCO2PBDesignPointCalculator.powerBlock.cooler.port_b.m_flow <= 100000.0, has value: ");
  modelica_string tmp341;
  static int tmp342 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp342)
  {
    tmp338 = GreaterEq(data->localData[0]->realVars[221] /* sCO2PBDesignPointCalculator.powerBlock.cooler.port_b.m_flow variable */,-100000.0);
    tmp339 = LessEq(data->localData[0]->realVars[221] /* sCO2PBDesignPointCalculator.powerBlock.cooler.port_b.m_flow variable */,100000.0);
    if(!(tmp338 && tmp339))
    {
      tmp341 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[221] /* sCO2PBDesignPointCalculator.powerBlock.cooler.port_b.m_flow variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp340),tmp341);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",13,5,14,68,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.cooler.port_b.m_flow >= -100000.0 and sCO2PBDesignPointCalculator.powerBlock.cooler.port_b.m_flow <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp342 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1779
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.cooler.T_out >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.cooler.T_out, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.cooler.T_out, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1779(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1779};
  modelica_boolean tmp343;
  static const MMC_DEFSTRINGLIT(tmp344,106,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.cooler.T_out, has value: ");
  modelica_string tmp345;
  static int tmp346 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp346)
  {
    tmp343 = GreaterEq(data->localData[0]->realVars[218] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_out variable */,0.0);
    if(!tmp343)
    {
      tmp345 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[218] /* sCO2PBDesignPointCalculator.powerBlock.cooler.T_out variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp344),tmp345);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",412,4,412,24,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.cooler.T_out >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp346 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1780
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.turbine.eta_turb >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.turbine.eta_turb, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.turbine.eta_turb, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1780(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1780};
  modelica_boolean tmp347;
  static const MMC_DEFSTRINGLIT(tmp348,110,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.turbine.eta_turb, has value: ");
  modelica_string tmp349;
  static int tmp350 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp350)
  {
    tmp347 = GreaterEq(data->localData[0]->realVars[301] /* sCO2PBDesignPointCalculator.powerBlock.turbine.eta_turb variable */,0.0);
    if(!tmp347)
    {
      tmp349 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[301] /* sCO2PBDesignPointCalculator.powerBlock.turbine.eta_turb variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp348),tmp349);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",146,4,146,68,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.turbine.eta_turb >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp350 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1781
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.turbine.d_outlet >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.turbine.d_outlet, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.turbine.d_outlet, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1781(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1781};
  modelica_boolean tmp351;
  static const MMC_DEFSTRINGLIT(tmp352,110,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.turbine.d_outlet, has value: ");
  modelica_string tmp353;
  static int tmp354 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp354)
  {
    tmp351 = GreaterEq(data->localData[0]->realVars[300] /* sCO2PBDesignPointCalculator.powerBlock.turbine.d_outlet variable */,0.0);
    if(!tmp351)
    {
      tmp353 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[300] /* sCO2PBDesignPointCalculator.powerBlock.turbine.d_outlet variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp352),tmp353);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",147,4,147,37,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.turbine.d_outlet >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp354 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1782
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.turbine.state_isen.h >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.turbine.state_isen.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.turbine.state_isen.h <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.turbine.state_isen.h, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1782(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1782};
  modelica_boolean tmp355;
  modelica_boolean tmp356;
  static const MMC_DEFSTRINGLIT(tmp357,146,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.turbine.state_isen.h <= 10000000000.0, has value: ");
  modelica_string tmp358;
  static int tmp359 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp359)
  {
    tmp355 = GreaterEq(data->localData[0]->realVars[303] /* sCO2PBDesignPointCalculator.powerBlock.turbine.state_isen.h variable */,-10000000000.0);
    tmp356 = LessEq(data->localData[0]->realVars[303] /* sCO2PBDesignPointCalculator.powerBlock.turbine.state_isen.h variable */,10000000000.0);
    if(!(tmp355 && tmp356))
    {
      tmp358 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[303] /* sCO2PBDesignPointCalculator.powerBlock.turbine.state_isen.h variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp357),tmp358);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",90,7,90,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.turbine.state_isen.h >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.turbine.state_isen.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp359 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1783
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow >= -100000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow <= 100000.0, "Variable violating min/max constraint: -100000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow <= 100000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1783(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1783};
  modelica_boolean tmp360;
  modelica_boolean tmp361;
  static const MMC_DEFSTRINGLIT(tmp362,143,"Variable violating min/max constraint: -100000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow <= 100000.0, has value: ");
  modelica_string tmp363;
  static int tmp364 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp364)
  {
    tmp360 = GreaterEq(data->localData[0]->realVars[225] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow variable */,-100000.0);
    tmp361 = LessEq(data->localData[0]->realVars[225] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow variable */,100000.0);
    if(!(tmp360 && tmp361))
    {
      tmp363 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[225] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp362),tmp363);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",13,5,14,68,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow >= -100000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.CO2_port_b.m_flow <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp364 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1784
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1784(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1784};
  modelica_boolean tmp365;
  modelica_boolean tmp366;
  static const MMC_DEFSTRINGLIT(tmp367,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1] <= 10000000000.0, has value: ");
  modelica_string tmp368;
  static int tmp369 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp369)
  {
    tmp365 = GreaterEq(data->localData[0]->realVars[247] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1] variable */,-10000000000.0);
    tmp366 = LessEq(data->localData[0]->realVars[247] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1] variable */,10000000000.0);
    if(!(tmp365 && tmp366))
    {
      tmp368 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[247] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp367),tmp368);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2309,4,2309,103,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp369 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1785
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[2] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[2] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[2], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1785(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1785};
  modelica_boolean tmp370;
  modelica_boolean tmp371;
  static const MMC_DEFSTRINGLIT(tmp372,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[2] <= 10000000000.0, has value: ");
  modelica_string tmp373;
  static int tmp374 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp374)
  {
    tmp370 = GreaterEq(data->localData[0]->realVars[248] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[2] variable */,-10000000000.0);
    tmp371 = LessEq(data->localData[0]->realVars[248] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[2] variable */,10000000000.0);
    if(!(tmp370 && tmp371))
    {
      tmp373 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[248] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp372),tmp373);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2309,4,2309,103,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[2] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp374 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1786
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[3] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[3] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[3] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[3], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1786(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1786};
  modelica_boolean tmp375;
  modelica_boolean tmp376;
  static const MMC_DEFSTRINGLIT(tmp377,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[3] <= 10000000000.0, has value: ");
  modelica_string tmp378;
  static int tmp379 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp379)
  {
    tmp375 = GreaterEq(data->localData[0]->realVars[249] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[3] variable */,-10000000000.0);
    tmp376 = LessEq(data->localData[0]->realVars[249] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[3] variable */,10000000000.0);
    if(!(tmp375 && tmp376))
    {
      tmp378 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[249] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp377),tmp378);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2309,4,2309,103,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[3] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[3] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp379 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1787
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[4] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[4] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[4] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[4], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1787(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1787};
  modelica_boolean tmp380;
  modelica_boolean tmp381;
  static const MMC_DEFSTRINGLIT(tmp382,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[4] <= 10000000000.0, has value: ");
  modelica_string tmp383;
  static int tmp384 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp384)
  {
    tmp380 = GreaterEq(data->localData[0]->realVars[250] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[4] variable */,-10000000000.0);
    tmp381 = LessEq(data->localData[0]->realVars[250] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[4] variable */,10000000000.0);
    if(!(tmp380 && tmp381))
    {
      tmp383 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[250] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[4] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp382),tmp383);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2309,4,2309,103,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[4] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[4] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp384 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1788
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[5] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[5] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[5] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[5], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1788(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1788};
  modelica_boolean tmp385;
  modelica_boolean tmp386;
  static const MMC_DEFSTRINGLIT(tmp387,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[5] <= 10000000000.0, has value: ");
  modelica_string tmp388;
  static int tmp389 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp389)
  {
    tmp385 = GreaterEq(data->localData[0]->realVars[251] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[5] variable */,-10000000000.0);
    tmp386 = LessEq(data->localData[0]->realVars[251] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[5] variable */,10000000000.0);
    if(!(tmp385 && tmp386))
    {
      tmp388 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[251] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[5] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp387),tmp388);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2309,4,2309,103,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[5] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[5] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp389 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1789
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[6] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[6] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[6] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[6], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1789(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1789};
  modelica_boolean tmp390;
  modelica_boolean tmp391;
  static const MMC_DEFSTRINGLIT(tmp392,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[6] <= 10000000000.0, has value: ");
  modelica_string tmp393;
  static int tmp394 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp394)
  {
    tmp390 = GreaterEq(data->localData[0]->realVars[252] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[6] variable */,-10000000000.0);
    tmp391 = LessEq(data->localData[0]->realVars[252] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[6] variable */,10000000000.0);
    if(!(tmp390 && tmp391))
    {
      tmp393 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[252] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[6] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp392),tmp393);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2309,4,2309,103,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[6] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[6] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp394 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1790
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[7] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[7] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[7] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[7], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1790(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1790};
  modelica_boolean tmp395;
  modelica_boolean tmp396;
  static const MMC_DEFSTRINGLIT(tmp397,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[7] <= 10000000000.0, has value: ");
  modelica_string tmp398;
  static int tmp399 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp399)
  {
    tmp395 = GreaterEq(data->localData[0]->realVars[253] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[7] variable */,-10000000000.0);
    tmp396 = LessEq(data->localData[0]->realVars[253] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[7] variable */,10000000000.0);
    if(!(tmp395 && tmp396))
    {
      tmp398 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[253] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[7] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp397),tmp398);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2309,4,2309,103,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[7] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[7] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp399 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1791
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[8] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[8] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[8] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[8], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1791(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1791};
  modelica_boolean tmp400;
  modelica_boolean tmp401;
  static const MMC_DEFSTRINGLIT(tmp402,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[8] <= 10000000000.0, has value: ");
  modelica_string tmp403;
  static int tmp404 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp404)
  {
    tmp400 = GreaterEq(data->localData[0]->realVars[254] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[8] variable */,-10000000000.0);
    tmp401 = LessEq(data->localData[0]->realVars[254] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[8] variable */,10000000000.0);
    if(!(tmp400 && tmp401))
    {
      tmp403 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[254] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[8] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp402),tmp403);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2309,4,2309,103,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[8] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[8] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp404 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1792
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[9] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[9] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[9] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[9], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1792(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1792};
  modelica_boolean tmp405;
  modelica_boolean tmp406;
  static const MMC_DEFSTRINGLIT(tmp407,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[9] <= 10000000000.0, has value: ");
  modelica_string tmp408;
  static int tmp409 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp409)
  {
    tmp405 = GreaterEq(data->localData[0]->realVars[255] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[9] variable */,-10000000000.0);
    tmp406 = LessEq(data->localData[0]->realVars[255] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[9] variable */,10000000000.0);
    if(!(tmp405 && tmp406))
    {
      tmp408 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[255] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[9] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp407),tmp408);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2309,4,2309,103,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[9] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[9] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp409 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1793
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[10] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[10] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[10] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[10], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1793(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1793};
  modelica_boolean tmp410;
  modelica_boolean tmp411;
  static const MMC_DEFSTRINGLIT(tmp412,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[10] <= 10000000000.0, has value: ");
  modelica_string tmp413;
  static int tmp414 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp414)
  {
    tmp410 = GreaterEq(data->localData[0]->realVars[256] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[10] variable */,-10000000000.0);
    tmp411 = LessEq(data->localData[0]->realVars[256] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[10] variable */,10000000000.0);
    if(!(tmp410 && tmp411))
    {
      tmp413 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[256] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[10] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp412),tmp413);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2309,4,2309,103,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[10] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[10] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp414 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1794
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[11] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[11] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[11] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[11], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1794(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1794};
  modelica_boolean tmp415;
  modelica_boolean tmp416;
  static const MMC_DEFSTRINGLIT(tmp417,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[11] <= 10000000000.0, has value: ");
  modelica_string tmp418;
  static int tmp419 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp419)
  {
    tmp415 = GreaterEq(data->localData[0]->realVars[257] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[11] variable */,-10000000000.0);
    tmp416 = LessEq(data->localData[0]->realVars[257] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[11] variable */,10000000000.0);
    if(!(tmp415 && tmp416))
    {
      tmp418 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[257] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[11] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp417),tmp418);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2309,4,2309,103,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[11] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[11] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp419 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1795
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[12] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[12] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[12] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[12], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1795(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1795};
  modelica_boolean tmp420;
  modelica_boolean tmp421;
  static const MMC_DEFSTRINGLIT(tmp422,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[12] <= 10000000000.0, has value: ");
  modelica_string tmp423;
  static int tmp424 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp424)
  {
    tmp420 = GreaterEq(data->localData[0]->realVars[258] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[12] variable */,-10000000000.0);
    tmp421 = LessEq(data->localData[0]->realVars[258] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[12] variable */,10000000000.0);
    if(!(tmp420 && tmp421))
    {
      tmp423 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[258] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[12] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp422),tmp423);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2309,4,2309,103,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[12] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[12] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp424 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1796
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[13] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[13] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[13] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[13], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1796(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1796};
  modelica_boolean tmp425;
  modelica_boolean tmp426;
  static const MMC_DEFSTRINGLIT(tmp427,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[13] <= 10000000000.0, has value: ");
  modelica_string tmp428;
  static int tmp429 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp429)
  {
    tmp425 = GreaterEq(data->localData[0]->realVars[259] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[13] variable */,-10000000000.0);
    tmp426 = LessEq(data->localData[0]->realVars[259] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[13] variable */,10000000000.0);
    if(!(tmp425 && tmp426))
    {
      tmp428 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[259] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[13] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp427),tmp428);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2309,4,2309,103,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[13] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[13] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp429 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1797
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[14] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[14] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[14] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[14], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1797(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1797};
  modelica_boolean tmp430;
  modelica_boolean tmp431;
  static const MMC_DEFSTRINGLIT(tmp432,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[14] <= 10000000000.0, has value: ");
  modelica_string tmp433;
  static int tmp434 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp434)
  {
    tmp430 = GreaterEq(data->localData[0]->realVars[260] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[14] variable */,-10000000000.0);
    tmp431 = LessEq(data->localData[0]->realVars[260] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[14] variable */,10000000000.0);
    if(!(tmp430 && tmp431))
    {
      tmp433 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[260] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[14] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp432),tmp433);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2309,4,2309,103,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[14] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[14] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp434 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1798
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1798(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1798};
  modelica_boolean tmp435;
  modelica_boolean tmp436;
  static const MMC_DEFSTRINGLIT(tmp437,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] <= 10000000000.0, has value: ");
  modelica_string tmp438;
  static int tmp439 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp439)
  {
    tmp435 = GreaterEq(data->localData[0]->realVars[261] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] variable */,-10000000000.0);
    tmp436 = LessEq(data->localData[0]->realVars[261] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] variable */,10000000000.0);
    if(!(tmp435 && tmp436))
    {
      tmp438 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[261] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp437),tmp438);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2309,4,2309,103,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_CO2[15] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp439 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1799
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[1] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[1] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[1], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1799(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1799};
  modelica_boolean tmp440;
  modelica_boolean tmp441;
  static const MMC_DEFSTRINGLIT(tmp442,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[1] <= 10000000000.0, has value: ");
  modelica_string tmp443;
  static int tmp444 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp444)
  {
    tmp440 = GreaterEq(data->localData[0]->realVars[262] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[1] variable */,-10000000000.0);
    tmp441 = LessEq(data->localData[0]->realVars[262] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[1] variable */,10000000000.0);
    if(!(tmp440 && tmp441))
    {
      tmp443 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[262] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp442),tmp443);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2310,4,2310,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[1] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp444 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1800
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[2] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[2] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[2], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1800(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1800};
  modelica_boolean tmp445;
  modelica_boolean tmp446;
  static const MMC_DEFSTRINGLIT(tmp447,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[2] <= 10000000000.0, has value: ");
  modelica_string tmp448;
  static int tmp449 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp449)
  {
    tmp445 = GreaterEq(data->localData[0]->realVars[263] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[2] variable */,-10000000000.0);
    tmp446 = LessEq(data->localData[0]->realVars[263] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[2] variable */,10000000000.0);
    if(!(tmp445 && tmp446))
    {
      tmp448 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[263] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp447),tmp448);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2310,4,2310,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[2] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp449 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1801
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[3] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[3] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[3] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[3], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1801(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1801};
  modelica_boolean tmp450;
  modelica_boolean tmp451;
  static const MMC_DEFSTRINGLIT(tmp452,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[3] <= 10000000000.0, has value: ");
  modelica_string tmp453;
  static int tmp454 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp454)
  {
    tmp450 = GreaterEq(data->localData[0]->realVars[264] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[3] variable */,-10000000000.0);
    tmp451 = LessEq(data->localData[0]->realVars[264] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[3] variable */,10000000000.0);
    if(!(tmp450 && tmp451))
    {
      tmp453 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[264] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp452),tmp453);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2310,4,2310,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[3] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[3] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp454 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1802
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[4] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[4] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[4] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[4], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1802(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1802};
  modelica_boolean tmp455;
  modelica_boolean tmp456;
  static const MMC_DEFSTRINGLIT(tmp457,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[4] <= 10000000000.0, has value: ");
  modelica_string tmp458;
  static int tmp459 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp459)
  {
    tmp455 = GreaterEq(data->localData[0]->realVars[265] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[4] variable */,-10000000000.0);
    tmp456 = LessEq(data->localData[0]->realVars[265] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[4] variable */,10000000000.0);
    if(!(tmp455 && tmp456))
    {
      tmp458 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[265] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[4] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp457),tmp458);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2310,4,2310,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[4] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[4] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp459 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1803
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[5] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[5] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[5] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[5], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1803(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1803};
  modelica_boolean tmp460;
  modelica_boolean tmp461;
  static const MMC_DEFSTRINGLIT(tmp462,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[5] <= 10000000000.0, has value: ");
  modelica_string tmp463;
  static int tmp464 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp464)
  {
    tmp460 = GreaterEq(data->localData[0]->realVars[266] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[5] variable */,-10000000000.0);
    tmp461 = LessEq(data->localData[0]->realVars[266] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[5] variable */,10000000000.0);
    if(!(tmp460 && tmp461))
    {
      tmp463 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[266] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[5] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp462),tmp463);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2310,4,2310,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[5] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[5] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp464 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1804
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[6] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[6] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[6] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[6], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1804(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1804};
  modelica_boolean tmp465;
  modelica_boolean tmp466;
  static const MMC_DEFSTRINGLIT(tmp467,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[6] <= 10000000000.0, has value: ");
  modelica_string tmp468;
  static int tmp469 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp469)
  {
    tmp465 = GreaterEq(data->localData[0]->realVars[267] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[6] variable */,-10000000000.0);
    tmp466 = LessEq(data->localData[0]->realVars[267] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[6] variable */,10000000000.0);
    if(!(tmp465 && tmp466))
    {
      tmp468 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[267] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[6] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp467),tmp468);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2310,4,2310,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[6] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[6] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp469 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1805
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[7] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[7] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[7] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[7], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1805(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1805};
  modelica_boolean tmp470;
  modelica_boolean tmp471;
  static const MMC_DEFSTRINGLIT(tmp472,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[7] <= 10000000000.0, has value: ");
  modelica_string tmp473;
  static int tmp474 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp474)
  {
    tmp470 = GreaterEq(data->localData[0]->realVars[268] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[7] variable */,-10000000000.0);
    tmp471 = LessEq(data->localData[0]->realVars[268] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[7] variable */,10000000000.0);
    if(!(tmp470 && tmp471))
    {
      tmp473 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[268] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[7] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp472),tmp473);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2310,4,2310,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[7] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[7] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp474 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1806
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[8] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[8] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[8] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[8], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1806(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1806};
  modelica_boolean tmp475;
  modelica_boolean tmp476;
  static const MMC_DEFSTRINGLIT(tmp477,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[8] <= 10000000000.0, has value: ");
  modelica_string tmp478;
  static int tmp479 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp479)
  {
    tmp475 = GreaterEq(data->localData[0]->realVars[269] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[8] variable */,-10000000000.0);
    tmp476 = LessEq(data->localData[0]->realVars[269] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[8] variable */,10000000000.0);
    if(!(tmp475 && tmp476))
    {
      tmp478 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[269] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[8] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp477),tmp478);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2310,4,2310,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[8] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[8] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp479 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1807
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[9] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[9] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[9] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[9], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1807(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1807};
  modelica_boolean tmp480;
  modelica_boolean tmp481;
  static const MMC_DEFSTRINGLIT(tmp482,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[9] <= 10000000000.0, has value: ");
  modelica_string tmp483;
  static int tmp484 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp484)
  {
    tmp480 = GreaterEq(data->localData[0]->realVars[270] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[9] variable */,-10000000000.0);
    tmp481 = LessEq(data->localData[0]->realVars[270] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[9] variable */,10000000000.0);
    if(!(tmp480 && tmp481))
    {
      tmp483 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[270] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[9] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp482),tmp483);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2310,4,2310,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[9] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[9] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp484 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1808
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[10] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[10] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[10] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[10], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1808(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1808};
  modelica_boolean tmp485;
  modelica_boolean tmp486;
  static const MMC_DEFSTRINGLIT(tmp487,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[10] <= 10000000000.0, has value: ");
  modelica_string tmp488;
  static int tmp489 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp489)
  {
    tmp485 = GreaterEq(data->localData[0]->realVars[271] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[10] variable */,-10000000000.0);
    tmp486 = LessEq(data->localData[0]->realVars[271] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[10] variable */,10000000000.0);
    if(!(tmp485 && tmp486))
    {
      tmp488 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[271] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[10] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp487),tmp488);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2310,4,2310,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[10] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[10] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp489 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1809
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[11] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[11] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[11] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[11], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1809(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1809};
  modelica_boolean tmp490;
  modelica_boolean tmp491;
  static const MMC_DEFSTRINGLIT(tmp492,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[11] <= 10000000000.0, has value: ");
  modelica_string tmp493;
  static int tmp494 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp494)
  {
    tmp490 = GreaterEq(data->localData[0]->realVars[272] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[11] variable */,-10000000000.0);
    tmp491 = LessEq(data->localData[0]->realVars[272] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[11] variable */,10000000000.0);
    if(!(tmp490 && tmp491))
    {
      tmp493 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[272] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[11] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp492),tmp493);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2310,4,2310,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[11] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[11] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp494 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1810
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[12] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[12] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[12] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[12], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1810(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1810};
  modelica_boolean tmp495;
  modelica_boolean tmp496;
  static const MMC_DEFSTRINGLIT(tmp497,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[12] <= 10000000000.0, has value: ");
  modelica_string tmp498;
  static int tmp499 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp499)
  {
    tmp495 = GreaterEq(data->localData[0]->realVars[273] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[12] variable */,-10000000000.0);
    tmp496 = LessEq(data->localData[0]->realVars[273] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[12] variable */,10000000000.0);
    if(!(tmp495 && tmp496))
    {
      tmp498 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[273] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[12] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp497),tmp498);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2310,4,2310,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[12] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[12] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp499 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1811
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[13] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[13] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[13] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[13], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1811(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1811};
  modelica_boolean tmp500;
  modelica_boolean tmp501;
  static const MMC_DEFSTRINGLIT(tmp502,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[13] <= 10000000000.0, has value: ");
  modelica_string tmp503;
  static int tmp504 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp504)
  {
    tmp500 = GreaterEq(data->localData[0]->realVars[274] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[13] variable */,-10000000000.0);
    tmp501 = LessEq(data->localData[0]->realVars[274] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[13] variable */,10000000000.0);
    if(!(tmp500 && tmp501))
    {
      tmp503 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[274] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[13] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp502),tmp503);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2310,4,2310,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[13] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[13] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp504 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1812
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[14] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[14] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[14] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[14], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1812(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1812};
  modelica_boolean tmp505;
  modelica_boolean tmp506;
  static const MMC_DEFSTRINGLIT(tmp507,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[14] <= 10000000000.0, has value: ");
  modelica_string tmp508;
  static int tmp509 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp509)
  {
    tmp505 = GreaterEq(data->localData[0]->realVars[275] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[14] variable */,-10000000000.0);
    tmp506 = LessEq(data->localData[0]->realVars[275] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[14] variable */,10000000000.0);
    if(!(tmp505 && tmp506))
    {
      tmp508 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[275] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[14] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp507),tmp508);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2310,4,2310,99,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[14] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.exchanger.h_HTF[14] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp509 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1813
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_out >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_out, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_out, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1813(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1813};
  modelica_boolean tmp510;
  static const MMC_DEFSTRINGLIT(tmp511,113,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_out, has value: ");
  modelica_string tmp512;
  static int tmp513 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp513)
  {
    tmp510 = GreaterEq(data->localData[0]->realVars[228] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_out variable */,0.0);
    if(!tmp510)
    {
      tmp512 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[228] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_out variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp511),tmp512);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2314,4,2314,42,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.T_CO2_out >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp513 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1814
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_out >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_out, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_out, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1814(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1814};
  modelica_boolean tmp514;
  static const MMC_DEFSTRINGLIT(tmp515,113,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_out, has value: ");
  modelica_string tmp516;
  static int tmp517 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp517)
  {
    tmp514 = GreaterEq(data->localData[0]->realVars[230] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_out variable */,0.0);
    if(!tmp514)
    {
      tmp516 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[230] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_out variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp515),tmp516);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2315,4,2315,42,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.exchanger.T_HTF_out >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp517 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1815
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1815(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1815};
  modelica_boolean tmp518;
  modelica_boolean tmp519;
  static const MMC_DEFSTRINGLIT(tmp520,131,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out <= 100000000.0, has value: ");
  modelica_string tmp521;
  static int tmp522 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp522)
  {
    tmp518 = GreaterEq(data->localData[0]->realVars[290] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out variable */,0.0);
    tmp519 = LessEq(data->localData[0]->realVars[290] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out variable */,100000000.0);
    if(!(tmp518 && tmp519))
    {
      tmp521 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[290] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp520),tmp521);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",613,4,613,66,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.reCompressor.p_out <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp522 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1816
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_isen.h >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_isen.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_isen.h <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_isen.h, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1816(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1816};
  modelica_boolean tmp523;
  modelica_boolean tmp524;
  static const MMC_DEFSTRINGLIT(tmp525,151,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_isen.h <= 10000000000.0, has value: ");
  modelica_string tmp526;
  static int tmp527 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp527)
  {
    tmp523 = GreaterEq(data->localData[0]->realVars[296] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_isen.h variable */,-10000000000.0);
    tmp524 = LessEq(data->localData[0]->realVars[296] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_isen.h variable */,10000000000.0);
    if(!(tmp523 && tmp524))
    {
      tmp526 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[296] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_isen.h variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp525),tmp526);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",90,7,90,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.reCompressor.state_isen.h >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_isen.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp527 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1817
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_b.h >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_b.h <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_b.h <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_b.h, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1817(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1817};
  modelica_boolean tmp528;
  modelica_boolean tmp529;
  static const MMC_DEFSTRINGLIT(tmp530,148,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_b.h <= 10000000000.0, has value: ");
  modelica_string tmp531;
  static int tmp532 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp532)
  {
    tmp528 = GreaterEq(data->localData[0]->realVars[295] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_b.h variable */,-10000000000.0);
    tmp529 = LessEq(data->localData[0]->realVars[295] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_b.h variable */,10000000000.0);
    if(!(tmp528 && tmp529))
    {
      tmp531 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[295] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_b.h variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp530),tmp531);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",90,7,90,45,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.reCompressor.state_b.h >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_b.h <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp532 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1818
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.reCompressor.d_entrance >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.d_entrance, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.reCompressor.d_entrance, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1818(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1818};
  modelica_boolean tmp533;
  static const MMC_DEFSTRINGLIT(tmp534,117,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.d_entrance, has value: ");
  modelica_string tmp535;
  static int tmp536 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp536)
  {
    tmp533 = GreaterEq(data->localData[0]->realVars[288] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.d_entrance variable */,0.0);
    if(!tmp533)
    {
      tmp535 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[288] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.d_entrance variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp534),tmp535);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",619,4,619,61,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.reCompressor.d_entrance >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp536 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1819
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_comp >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_comp, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_comp, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1819(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1819};
  modelica_boolean tmp537;
  static const MMC_DEFSTRINGLIT(tmp538,115,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_comp, has value: ");
  modelica_string tmp539;
  static int tmp540 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp540)
  {
    tmp537 = GreaterEq(data->localData[0]->realVars[289] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_comp variable */,0.0);
    if(!tmp537)
    {
      tmp539 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[289] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_comp variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp538),tmp539);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",620,4,620,88,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.reCompressor.eta_comp >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp540 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1820
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.reCompressor.phi >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.phi, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.reCompressor.phi, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1820(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1820};
  modelica_boolean tmp541;
  static const MMC_DEFSTRINGLIT(tmp542,110,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.phi, has value: ");
  modelica_string tmp543;
  static int tmp544 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp544)
  {
    tmp541 = GreaterEq(data->localData[0]->realVars[291] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.phi variable */,0.0);
    if(!tmp541)
    {
      tmp543 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[291] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.phi variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp542),tmp543);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",621,4,621,52,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.reCompressor.phi >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp544 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1821
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.reCompressor.psi >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.psi, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.reCompressor.psi, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1821(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1821};
  modelica_boolean tmp545;
  static const MMC_DEFSTRINGLIT(tmp546,110,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.reCompressor.psi, has value: ");
  modelica_string tmp547;
  static int tmp548 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp548)
  {
    tmp545 = GreaterEq(data->localData[0]->realVars[293] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.psi variable */,0.0);
    if(!tmp545)
    {
      tmp547 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[293] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.psi variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp546),tmp547);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",622,4,622,42,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.reCompressor.psi >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp548 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1822
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1822(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1822};
  modelica_boolean tmp549;
  modelica_boolean tmp550;
  static const MMC_DEFSTRINGLIT(tmp551,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] <= 10000000000.0, has value: ");
  modelica_string tmp552;
  static int tmp553 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp553)
  {
    tmp549 = GreaterEq(data->localData[0]->realVars[196] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] variable */,-10000000000.0);
    tmp550 = LessEq(data->localData[0]->realVars[196] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] variable */,10000000000.0);
    if(!(tmp549 && tmp550))
    {
      tmp552 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[196] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp551),tmp552);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp553 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1823
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[2] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[2] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[2], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1823(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1823};
  modelica_boolean tmp554;
  modelica_boolean tmp555;
  static const MMC_DEFSTRINGLIT(tmp556,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[2] <= 10000000000.0, has value: ");
  modelica_string tmp557;
  static int tmp558 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp558)
  {
    tmp554 = GreaterEq(data->localData[0]->realVars[197] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[2] variable */,-10000000000.0);
    tmp555 = LessEq(data->localData[0]->realVars[197] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[2] variable */,10000000000.0);
    if(!(tmp554 && tmp555))
    {
      tmp557 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[197] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp556),tmp557);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[2] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp558 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1824
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[3] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[3] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[3] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[3], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1824(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1824};
  modelica_boolean tmp559;
  modelica_boolean tmp560;
  static const MMC_DEFSTRINGLIT(tmp561,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[3] <= 10000000000.0, has value: ");
  modelica_string tmp562;
  static int tmp563 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp563)
  {
    tmp559 = GreaterEq(data->localData[0]->realVars[198] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[3] variable */,-10000000000.0);
    tmp560 = LessEq(data->localData[0]->realVars[198] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[3] variable */,10000000000.0);
    if(!(tmp559 && tmp560))
    {
      tmp562 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[198] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp561),tmp562);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[3] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[3] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp563 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1825
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[4] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[4] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[4] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[4], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1825(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1825};
  modelica_boolean tmp564;
  modelica_boolean tmp565;
  static const MMC_DEFSTRINGLIT(tmp566,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[4] <= 10000000000.0, has value: ");
  modelica_string tmp567;
  static int tmp568 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp568)
  {
    tmp564 = GreaterEq(data->localData[0]->realVars[199] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[4] variable */,-10000000000.0);
    tmp565 = LessEq(data->localData[0]->realVars[199] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[4] variable */,10000000000.0);
    if(!(tmp564 && tmp565))
    {
      tmp567 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[199] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[4] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp566),tmp567);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[4] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[4] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp568 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1826
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[5] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[5] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[5] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[5], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1826(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1826};
  modelica_boolean tmp569;
  modelica_boolean tmp570;
  static const MMC_DEFSTRINGLIT(tmp571,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[5] <= 10000000000.0, has value: ");
  modelica_string tmp572;
  static int tmp573 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp573)
  {
    tmp569 = GreaterEq(data->localData[0]->realVars[200] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[5] variable */,-10000000000.0);
    tmp570 = LessEq(data->localData[0]->realVars[200] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[5] variable */,10000000000.0);
    if(!(tmp569 && tmp570))
    {
      tmp572 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[200] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[5] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp571),tmp572);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[5] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[5] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp573 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1827
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[6] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[6] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[6] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[6], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1827(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1827};
  modelica_boolean tmp574;
  modelica_boolean tmp575;
  static const MMC_DEFSTRINGLIT(tmp576,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[6] <= 10000000000.0, has value: ");
  modelica_string tmp577;
  static int tmp578 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp578)
  {
    tmp574 = GreaterEq(data->localData[0]->realVars[201] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[6] variable */,-10000000000.0);
    tmp575 = LessEq(data->localData[0]->realVars[201] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[6] variable */,10000000000.0);
    if(!(tmp574 && tmp575))
    {
      tmp577 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[201] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[6] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp576),tmp577);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[6] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[6] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp578 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1828
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[7] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[7] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[7] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[7], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1828(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1828};
  modelica_boolean tmp579;
  modelica_boolean tmp580;
  static const MMC_DEFSTRINGLIT(tmp581,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[7] <= 10000000000.0, has value: ");
  modelica_string tmp582;
  static int tmp583 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp583)
  {
    tmp579 = GreaterEq(data->localData[0]->realVars[202] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[7] variable */,-10000000000.0);
    tmp580 = LessEq(data->localData[0]->realVars[202] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[7] variable */,10000000000.0);
    if(!(tmp579 && tmp580))
    {
      tmp582 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[202] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[7] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp581),tmp582);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[7] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[7] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp583 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1829
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[8] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[8] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[8] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[8], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1829(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1829};
  modelica_boolean tmp584;
  modelica_boolean tmp585;
  static const MMC_DEFSTRINGLIT(tmp586,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[8] <= 10000000000.0, has value: ");
  modelica_string tmp587;
  static int tmp588 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp588)
  {
    tmp584 = GreaterEq(data->localData[0]->realVars[203] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[8] variable */,-10000000000.0);
    tmp585 = LessEq(data->localData[0]->realVars[203] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[8] variable */,10000000000.0);
    if(!(tmp584 && tmp585))
    {
      tmp587 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[203] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[8] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp586),tmp587);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[8] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[8] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp588 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1830
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[9] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[9] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[9] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[9], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1830(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1830};
  modelica_boolean tmp589;
  modelica_boolean tmp590;
  static const MMC_DEFSTRINGLIT(tmp591,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[9] <= 10000000000.0, has value: ");
  modelica_string tmp592;
  static int tmp593 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp593)
  {
    tmp589 = GreaterEq(data->localData[0]->realVars[204] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[9] variable */,-10000000000.0);
    tmp590 = LessEq(data->localData[0]->realVars[204] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[9] variable */,10000000000.0);
    if(!(tmp589 && tmp590))
    {
      tmp592 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[204] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[9] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp591),tmp592);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[9] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[9] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp593 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1831
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[10] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[10] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[10] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[10], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1831(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1831};
  modelica_boolean tmp594;
  modelica_boolean tmp595;
  static const MMC_DEFSTRINGLIT(tmp596,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[10] <= 10000000000.0, has value: ");
  modelica_string tmp597;
  static int tmp598 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp598)
  {
    tmp594 = GreaterEq(data->localData[0]->realVars[205] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[10] variable */,-10000000000.0);
    tmp595 = LessEq(data->localData[0]->realVars[205] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[10] variable */,10000000000.0);
    if(!(tmp594 && tmp595))
    {
      tmp597 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[205] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[10] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp596),tmp597);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[10] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[10] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp598 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1832
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[11] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[11] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[11] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[11], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1832(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1832};
  modelica_boolean tmp599;
  modelica_boolean tmp600;
  static const MMC_DEFSTRINGLIT(tmp601,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[11] <= 10000000000.0, has value: ");
  modelica_string tmp602;
  static int tmp603 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp603)
  {
    tmp599 = GreaterEq(data->localData[0]->realVars[206] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[11] variable */,-10000000000.0);
    tmp600 = LessEq(data->localData[0]->realVars[206] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[11] variable */,10000000000.0);
    if(!(tmp599 && tmp600))
    {
      tmp602 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[206] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[11] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp601),tmp602);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[11] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[11] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp603 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1833
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[12] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[12] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[12] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[12], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1833(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1833};
  modelica_boolean tmp604;
  modelica_boolean tmp605;
  static const MMC_DEFSTRINGLIT(tmp606,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[12] <= 10000000000.0, has value: ");
  modelica_string tmp607;
  static int tmp608 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp608)
  {
    tmp604 = GreaterEq(data->localData[0]->realVars[207] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[12] variable */,-10000000000.0);
    tmp605 = LessEq(data->localData[0]->realVars[207] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[12] variable */,10000000000.0);
    if(!(tmp604 && tmp605))
    {
      tmp607 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[207] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[12] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp606),tmp607);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[12] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[12] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp608 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1834
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[13] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[13] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[13] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[13], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1834(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1834};
  modelica_boolean tmp609;
  modelica_boolean tmp610;
  static const MMC_DEFSTRINGLIT(tmp611,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[13] <= 10000000000.0, has value: ");
  modelica_string tmp612;
  static int tmp613 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp613)
  {
    tmp609 = GreaterEq(data->localData[0]->realVars[208] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[13] variable */,-10000000000.0);
    tmp610 = LessEq(data->localData[0]->realVars[208] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[13] variable */,10000000000.0);
    if(!(tmp609 && tmp610))
    {
      tmp612 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[208] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[13] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp611),tmp612);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[13] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[13] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp613 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1835
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[14] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[14] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[14] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[14], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1835(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1835};
  modelica_boolean tmp614;
  modelica_boolean tmp615;
  static const MMC_DEFSTRINGLIT(tmp616,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[14] <= 10000000000.0, has value: ");
  modelica_string tmp617;
  static int tmp618 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp618)
  {
    tmp614 = GreaterEq(data->localData[0]->realVars[209] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[14] variable */,-10000000000.0);
    tmp615 = LessEq(data->localData[0]->realVars[209] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[14] variable */,10000000000.0);
    if(!(tmp614 && tmp615))
    {
      tmp617 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[209] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[14] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp616),tmp617);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[14] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[14] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp618 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1836
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1836(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1836};
  modelica_boolean tmp619;
  modelica_boolean tmp620;
  static const MMC_DEFSTRINGLIT(tmp621,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] <= 10000000000.0, has value: ");
  modelica_string tmp622;
  static int tmp623 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp623)
  {
    tmp619 = GreaterEq(data->localData[0]->realVars[210] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] variable */,-10000000000.0);
    tmp620 = LessEq(data->localData[0]->realVars[210] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] variable */,10000000000.0);
    if(!(tmp619 && tmp620))
    {
      tmp622 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[210] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp621),tmp622);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",501,4,501,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_turb[15] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp623 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1837
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[1] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[1] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[1] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[1], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1837(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1837};
  modelica_boolean tmp624;
  modelica_boolean tmp625;
  static const MMC_DEFSTRINGLIT(tmp626,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[1] <= 873.15, has value: ");
  modelica_string tmp627;
  static int tmp628 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp628)
  {
    tmp624 = GreaterEq(data->localData[0]->realVars[151] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[1] variable */,20.0);
    tmp625 = LessEq(data->localData[0]->realVars[151] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[1] variable */,873.15);
    if(!(tmp624 && tmp625))
    {
      tmp627 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[151] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp626),tmp627);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[1] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[1] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp628 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1838
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[2] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[2] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[2] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[2], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1838(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1838};
  modelica_boolean tmp629;
  modelica_boolean tmp630;
  static const MMC_DEFSTRINGLIT(tmp631,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[2] <= 873.15, has value: ");
  modelica_string tmp632;
  static int tmp633 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp633)
  {
    tmp629 = GreaterEq(data->localData[0]->realVars[152] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[2] variable */,20.0);
    tmp630 = LessEq(data->localData[0]->realVars[152] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[2] variable */,873.15);
    if(!(tmp629 && tmp630))
    {
      tmp632 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[152] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp631),tmp632);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[2] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[2] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp633 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1839
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[3] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[3] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[3] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[3], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1839(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1839};
  modelica_boolean tmp634;
  modelica_boolean tmp635;
  static const MMC_DEFSTRINGLIT(tmp636,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[3] <= 873.15, has value: ");
  modelica_string tmp637;
  static int tmp638 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp638)
  {
    tmp634 = GreaterEq(data->localData[0]->realVars[153] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[3] variable */,20.0);
    tmp635 = LessEq(data->localData[0]->realVars[153] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[3] variable */,873.15);
    if(!(tmp634 && tmp635))
    {
      tmp637 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[153] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp636),tmp637);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[3] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[3] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp638 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1840
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[4] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[4] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[4] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[4], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1840(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1840};
  modelica_boolean tmp639;
  modelica_boolean tmp640;
  static const MMC_DEFSTRINGLIT(tmp641,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[4] <= 873.15, has value: ");
  modelica_string tmp642;
  static int tmp643 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp643)
  {
    tmp639 = GreaterEq(data->localData[0]->realVars[154] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[4] variable */,20.0);
    tmp640 = LessEq(data->localData[0]->realVars[154] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[4] variable */,873.15);
    if(!(tmp639 && tmp640))
    {
      tmp642 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[154] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[4] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp641),tmp642);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[4] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[4] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp643 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1841
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[5] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[5] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[5] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[5], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1841(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1841};
  modelica_boolean tmp644;
  modelica_boolean tmp645;
  static const MMC_DEFSTRINGLIT(tmp646,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[5] <= 873.15, has value: ");
  modelica_string tmp647;
  static int tmp648 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp648)
  {
    tmp644 = GreaterEq(data->localData[0]->realVars[155] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[5] variable */,20.0);
    tmp645 = LessEq(data->localData[0]->realVars[155] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[5] variable */,873.15);
    if(!(tmp644 && tmp645))
    {
      tmp647 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[155] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[5] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp646),tmp647);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[5] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[5] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp648 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1842
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[6] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[6] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[6] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[6], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1842(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1842};
  modelica_boolean tmp649;
  modelica_boolean tmp650;
  static const MMC_DEFSTRINGLIT(tmp651,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[6] <= 873.15, has value: ");
  modelica_string tmp652;
  static int tmp653 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp653)
  {
    tmp649 = GreaterEq(data->localData[0]->realVars[156] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[6] variable */,20.0);
    tmp650 = LessEq(data->localData[0]->realVars[156] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[6] variable */,873.15);
    if(!(tmp649 && tmp650))
    {
      tmp652 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[156] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[6] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp651),tmp652);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[6] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[6] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp653 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1843
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[7] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[7] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[7] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[7], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1843(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1843};
  modelica_boolean tmp654;
  modelica_boolean tmp655;
  static const MMC_DEFSTRINGLIT(tmp656,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[7] <= 873.15, has value: ");
  modelica_string tmp657;
  static int tmp658 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp658)
  {
    tmp654 = GreaterEq(data->localData[0]->realVars[157] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[7] variable */,20.0);
    tmp655 = LessEq(data->localData[0]->realVars[157] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[7] variable */,873.15);
    if(!(tmp654 && tmp655))
    {
      tmp657 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[157] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[7] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp656),tmp657);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[7] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[7] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp658 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1844
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[8] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[8] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[8] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[8], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1844(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1844};
  modelica_boolean tmp659;
  modelica_boolean tmp660;
  static const MMC_DEFSTRINGLIT(tmp661,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[8] <= 873.15, has value: ");
  modelica_string tmp662;
  static int tmp663 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp663)
  {
    tmp659 = GreaterEq(data->localData[0]->realVars[158] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[8] variable */,20.0);
    tmp660 = LessEq(data->localData[0]->realVars[158] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[8] variable */,873.15);
    if(!(tmp659 && tmp660))
    {
      tmp662 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[158] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[8] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp661),tmp662);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[8] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[8] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp663 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1845
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[9] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[9] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[9] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[9], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1845(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1845};
  modelica_boolean tmp664;
  modelica_boolean tmp665;
  static const MMC_DEFSTRINGLIT(tmp666,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[9] <= 873.15, has value: ");
  modelica_string tmp667;
  static int tmp668 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp668)
  {
    tmp664 = GreaterEq(data->localData[0]->realVars[159] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[9] variable */,20.0);
    tmp665 = LessEq(data->localData[0]->realVars[159] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[9] variable */,873.15);
    if(!(tmp664 && tmp665))
    {
      tmp667 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[159] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[9] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp666),tmp667);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[9] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[9] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp668 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1846
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[10] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[10] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[10] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[10], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1846(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1846};
  modelica_boolean tmp669;
  modelica_boolean tmp670;
  static const MMC_DEFSTRINGLIT(tmp671,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[10] <= 873.15, has value: ");
  modelica_string tmp672;
  static int tmp673 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp673)
  {
    tmp669 = GreaterEq(data->localData[0]->realVars[160] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[10] variable */,20.0);
    tmp670 = LessEq(data->localData[0]->realVars[160] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[10] variable */,873.15);
    if(!(tmp669 && tmp670))
    {
      tmp672 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[160] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[10] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp671),tmp672);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[10] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[10] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp673 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1847
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[11] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[11] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[11] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[11], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1847(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1847};
  modelica_boolean tmp674;
  modelica_boolean tmp675;
  static const MMC_DEFSTRINGLIT(tmp676,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[11] <= 873.15, has value: ");
  modelica_string tmp677;
  static int tmp678 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp678)
  {
    tmp674 = GreaterEq(data->localData[0]->realVars[161] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[11] variable */,20.0);
    tmp675 = LessEq(data->localData[0]->realVars[161] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[11] variable */,873.15);
    if(!(tmp674 && tmp675))
    {
      tmp677 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[161] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[11] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp676),tmp677);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[11] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[11] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp678 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1848
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[12] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[12] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[12] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[12], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1848(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1848};
  modelica_boolean tmp679;
  modelica_boolean tmp680;
  static const MMC_DEFSTRINGLIT(tmp681,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[12] <= 873.15, has value: ");
  modelica_string tmp682;
  static int tmp683 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp683)
  {
    tmp679 = GreaterEq(data->localData[0]->realVars[162] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[12] variable */,20.0);
    tmp680 = LessEq(data->localData[0]->realVars[162] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[12] variable */,873.15);
    if(!(tmp679 && tmp680))
    {
      tmp682 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[162] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[12] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp681),tmp682);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[12] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[12] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp683 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1849
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[13] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[13] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[13] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[13], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1849(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1849};
  modelica_boolean tmp684;
  modelica_boolean tmp685;
  static const MMC_DEFSTRINGLIT(tmp686,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[13] <= 873.15, has value: ");
  modelica_string tmp687;
  static int tmp688 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp688)
  {
    tmp684 = GreaterEq(data->localData[0]->realVars[163] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[13] variable */,20.0);
    tmp685 = LessEq(data->localData[0]->realVars[163] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[13] variable */,873.15);
    if(!(tmp684 && tmp685))
    {
      tmp687 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[163] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[13] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp686),tmp687);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[13] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[13] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp688 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1850
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[14] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[14] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[14] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[14], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1850(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1850};
  modelica_boolean tmp689;
  modelica_boolean tmp690;
  static const MMC_DEFSTRINGLIT(tmp691,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[14] <= 873.15, has value: ");
  modelica_string tmp692;
  static int tmp693 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp693)
  {
    tmp689 = GreaterEq(data->localData[0]->realVars[164] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[14] variable */,20.0);
    tmp690 = LessEq(data->localData[0]->realVars[164] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[14] variable */,873.15);
    if(!(tmp689 && tmp690))
    {
      tmp692 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[164] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[14] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp691),tmp692);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[14] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[14] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp693 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1851
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[15] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[15] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[15] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[15], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1851(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1851};
  modelica_boolean tmp694;
  modelica_boolean tmp695;
  static const MMC_DEFSTRINGLIT(tmp696,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[15] <= 873.15, has value: ");
  modelica_string tmp697;
  static int tmp698 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp698)
  {
    tmp694 = GreaterEq(data->localData[0]->realVars[165] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[15] variable */,20.0);
    tmp695 = LessEq(data->localData[0]->realVars[165] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[15] variable */,873.15);
    if(!(tmp694 && tmp695))
    {
      tmp697 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[165] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[15] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp696),tmp697);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",503,4,503,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[15] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_turb[15] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp698 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1852
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[1] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[1] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[1] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[1], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1852(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1852};
  modelica_boolean tmp699;
  modelica_boolean tmp700;
  static const MMC_DEFSTRINGLIT(tmp701,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[1] <= 873.15, has value: ");
  modelica_string tmp702;
  static int tmp703 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp703)
  {
    tmp699 = GreaterEq(data->localData[0]->realVars[136] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[1] variable */,20.0);
    tmp700 = LessEq(data->localData[0]->realVars[136] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[1] variable */,873.15);
    if(!(tmp699 && tmp700))
    {
      tmp702 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[136] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp701),tmp702);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[1] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[1] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp703 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1853
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[2] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[2] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[2] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[2], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1853(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1853};
  modelica_boolean tmp704;
  modelica_boolean tmp705;
  static const MMC_DEFSTRINGLIT(tmp706,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[2] <= 873.15, has value: ");
  modelica_string tmp707;
  static int tmp708 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp708)
  {
    tmp704 = GreaterEq(data->localData[0]->realVars[137] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[2] variable */,20.0);
    tmp705 = LessEq(data->localData[0]->realVars[137] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[2] variable */,873.15);
    if(!(tmp704 && tmp705))
    {
      tmp707 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[137] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp706),tmp707);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[2] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[2] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp708 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1854
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[3] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[3] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[3] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[3], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1854(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1854};
  modelica_boolean tmp709;
  modelica_boolean tmp710;
  static const MMC_DEFSTRINGLIT(tmp711,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[3] <= 873.15, has value: ");
  modelica_string tmp712;
  static int tmp713 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp713)
  {
    tmp709 = GreaterEq(data->localData[0]->realVars[138] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[3] variable */,20.0);
    tmp710 = LessEq(data->localData[0]->realVars[138] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[3] variable */,873.15);
    if(!(tmp709 && tmp710))
    {
      tmp712 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[138] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp711),tmp712);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[3] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[3] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp713 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1855
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[4] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[4] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[4] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[4], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1855(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1855};
  modelica_boolean tmp714;
  modelica_boolean tmp715;
  static const MMC_DEFSTRINGLIT(tmp716,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[4] <= 873.15, has value: ");
  modelica_string tmp717;
  static int tmp718 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp718)
  {
    tmp714 = GreaterEq(data->localData[0]->realVars[139] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[4] variable */,20.0);
    tmp715 = LessEq(data->localData[0]->realVars[139] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[4] variable */,873.15);
    if(!(tmp714 && tmp715))
    {
      tmp717 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[139] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[4] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp716),tmp717);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[4] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[4] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp718 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1856
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[5] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[5] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[5] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[5], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1856(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1856};
  modelica_boolean tmp719;
  modelica_boolean tmp720;
  static const MMC_DEFSTRINGLIT(tmp721,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[5] <= 873.15, has value: ");
  modelica_string tmp722;
  static int tmp723 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp723)
  {
    tmp719 = GreaterEq(data->localData[0]->realVars[140] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[5] variable */,20.0);
    tmp720 = LessEq(data->localData[0]->realVars[140] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[5] variable */,873.15);
    if(!(tmp719 && tmp720))
    {
      tmp722 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[140] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[5] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp721),tmp722);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[5] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[5] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp723 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1857
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[6] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[6] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[6] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[6], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1857(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1857};
  modelica_boolean tmp724;
  modelica_boolean tmp725;
  static const MMC_DEFSTRINGLIT(tmp726,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[6] <= 873.15, has value: ");
  modelica_string tmp727;
  static int tmp728 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp728)
  {
    tmp724 = GreaterEq(data->localData[0]->realVars[141] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[6] variable */,20.0);
    tmp725 = LessEq(data->localData[0]->realVars[141] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[6] variable */,873.15);
    if(!(tmp724 && tmp725))
    {
      tmp727 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[141] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[6] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp726),tmp727);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[6] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[6] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp728 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1858
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[7] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[7] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[7] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[7], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1858(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1858};
  modelica_boolean tmp729;
  modelica_boolean tmp730;
  static const MMC_DEFSTRINGLIT(tmp731,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[7] <= 873.15, has value: ");
  modelica_string tmp732;
  static int tmp733 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp733)
  {
    tmp729 = GreaterEq(data->localData[0]->realVars[142] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[7] variable */,20.0);
    tmp730 = LessEq(data->localData[0]->realVars[142] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[7] variable */,873.15);
    if(!(tmp729 && tmp730))
    {
      tmp732 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[142] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[7] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp731),tmp732);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[7] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[7] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp733 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1859
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[8] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[8] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[8] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[8], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1859(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1859};
  modelica_boolean tmp734;
  modelica_boolean tmp735;
  static const MMC_DEFSTRINGLIT(tmp736,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[8] <= 873.15, has value: ");
  modelica_string tmp737;
  static int tmp738 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp738)
  {
    tmp734 = GreaterEq(data->localData[0]->realVars[143] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[8] variable */,20.0);
    tmp735 = LessEq(data->localData[0]->realVars[143] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[8] variable */,873.15);
    if(!(tmp734 && tmp735))
    {
      tmp737 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[143] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[8] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp736),tmp737);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[8] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[8] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp738 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1860
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[9] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[9] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[9] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[9], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1860(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1860};
  modelica_boolean tmp739;
  modelica_boolean tmp740;
  static const MMC_DEFSTRINGLIT(tmp741,127,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[9] <= 873.15, has value: ");
  modelica_string tmp742;
  static int tmp743 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp743)
  {
    tmp739 = GreaterEq(data->localData[0]->realVars[144] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[9] variable */,20.0);
    tmp740 = LessEq(data->localData[0]->realVars[144] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[9] variable */,873.15);
    if(!(tmp739 && tmp740))
    {
      tmp742 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[144] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[9] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp741),tmp742);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[9] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[9] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp743 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1861
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[10] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[10] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[10] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[10], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1861(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1861};
  modelica_boolean tmp744;
  modelica_boolean tmp745;
  static const MMC_DEFSTRINGLIT(tmp746,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[10] <= 873.15, has value: ");
  modelica_string tmp747;
  static int tmp748 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp748)
  {
    tmp744 = GreaterEq(data->localData[0]->realVars[145] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[10] variable */,20.0);
    tmp745 = LessEq(data->localData[0]->realVars[145] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[10] variable */,873.15);
    if(!(tmp744 && tmp745))
    {
      tmp747 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[145] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[10] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp746),tmp747);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[10] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[10] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp748 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1862
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[11] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[11] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[11] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[11], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1862(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1862};
  modelica_boolean tmp749;
  modelica_boolean tmp750;
  static const MMC_DEFSTRINGLIT(tmp751,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[11] <= 873.15, has value: ");
  modelica_string tmp752;
  static int tmp753 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp753)
  {
    tmp749 = GreaterEq(data->localData[0]->realVars[146] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[11] variable */,20.0);
    tmp750 = LessEq(data->localData[0]->realVars[146] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[11] variable */,873.15);
    if(!(tmp749 && tmp750))
    {
      tmp752 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[146] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[11] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp751),tmp752);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[11] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[11] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp753 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1863
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[12] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[12] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[12] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[12], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1863(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1863};
  modelica_boolean tmp754;
  modelica_boolean tmp755;
  static const MMC_DEFSTRINGLIT(tmp756,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[12] <= 873.15, has value: ");
  modelica_string tmp757;
  static int tmp758 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp758)
  {
    tmp754 = GreaterEq(data->localData[0]->realVars[147] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[12] variable */,20.0);
    tmp755 = LessEq(data->localData[0]->realVars[147] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[12] variable */,873.15);
    if(!(tmp754 && tmp755))
    {
      tmp757 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[147] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[12] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp756),tmp757);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[12] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[12] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp758 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1864
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[13] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[13] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[13] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[13], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1864(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1864};
  modelica_boolean tmp759;
  modelica_boolean tmp760;
  static const MMC_DEFSTRINGLIT(tmp761,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[13] <= 873.15, has value: ");
  modelica_string tmp762;
  static int tmp763 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp763)
  {
    tmp759 = GreaterEq(data->localData[0]->realVars[148] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[13] variable */,20.0);
    tmp760 = LessEq(data->localData[0]->realVars[148] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[13] variable */,873.15);
    if(!(tmp759 && tmp760))
    {
      tmp762 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[148] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[13] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp761),tmp762);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[13] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[13] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp763 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1865
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[14] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[14] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[14] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[14], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1865(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1865};
  modelica_boolean tmp764;
  modelica_boolean tmp765;
  static const MMC_DEFSTRINGLIT(tmp766,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[14] <= 873.15, has value: ");
  modelica_string tmp767;
  static int tmp768 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp768)
  {
    tmp764 = GreaterEq(data->localData[0]->realVars[149] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[14] variable */,20.0);
    tmp765 = LessEq(data->localData[0]->realVars[149] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[14] variable */,873.15);
    if(!(tmp764 && tmp765))
    {
      tmp767 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[149] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[14] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp766),tmp767);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[14] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[14] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp768 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1866
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[15] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[15] <= 873.15, "Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[15] <= 873.15, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[15], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1866(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1866};
  modelica_boolean tmp769;
  modelica_boolean tmp770;
  static const MMC_DEFSTRINGLIT(tmp771,128,"Variable violating min/max constraint: 20.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[15] <= 873.15, has value: ");
  modelica_string tmp772;
  static int tmp773 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp773)
  {
    tmp769 = GreaterEq(data->localData[0]->realVars[150] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[15] variable */,20.0);
    tmp770 = LessEq(data->localData[0]->realVars[150] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[15] variable */,873.15);
    if(!(tmp769 && tmp770))
    {
      tmp772 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[150] /* sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[15] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp771),tmp772);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",504,4,504,91,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[15] >= 20.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.T_from_comp[15] <= 873.15", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp773 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1867
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[1] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[1] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[1] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[1], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1867(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1867};
  modelica_boolean tmp774;
  modelica_boolean tmp775;
  static const MMC_DEFSTRINGLIT(tmp776,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[1] <= 10000000000.0, has value: ");
  modelica_string tmp777;
  static int tmp778 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp778)
  {
    tmp774 = GreaterEq(data->localData[0]->realVars[181] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[1] variable */,-10000000000.0);
    tmp775 = LessEq(data->localData[0]->realVars[181] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[1] variable */,10000000000.0);
    if(!(tmp774 && tmp775))
    {
      tmp777 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[181] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[1] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp776),tmp777);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[1] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[1] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp778 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1868
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[2] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[2] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[2] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[2], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1868(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1868};
  modelica_boolean tmp779;
  modelica_boolean tmp780;
  static const MMC_DEFSTRINGLIT(tmp781,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[2] <= 10000000000.0, has value: ");
  modelica_string tmp782;
  static int tmp783 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp783)
  {
    tmp779 = GreaterEq(data->localData[0]->realVars[182] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[2] variable */,-10000000000.0);
    tmp780 = LessEq(data->localData[0]->realVars[182] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[2] variable */,10000000000.0);
    if(!(tmp779 && tmp780))
    {
      tmp782 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[182] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[2] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp781),tmp782);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[2] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[2] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp783 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1869
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[3] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[3] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[3] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[3], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1869(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1869};
  modelica_boolean tmp784;
  modelica_boolean tmp785;
  static const MMC_DEFSTRINGLIT(tmp786,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[3] <= 10000000000.0, has value: ");
  modelica_string tmp787;
  static int tmp788 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp788)
  {
    tmp784 = GreaterEq(data->localData[0]->realVars[183] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[3] variable */,-10000000000.0);
    tmp785 = LessEq(data->localData[0]->realVars[183] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[3] variable */,10000000000.0);
    if(!(tmp784 && tmp785))
    {
      tmp787 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[183] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[3] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp786),tmp787);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[3] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[3] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp788 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1870
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[4] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[4] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[4] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[4], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1870(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1870};
  modelica_boolean tmp789;
  modelica_boolean tmp790;
  static const MMC_DEFSTRINGLIT(tmp791,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[4] <= 10000000000.0, has value: ");
  modelica_string tmp792;
  static int tmp793 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp793)
  {
    tmp789 = GreaterEq(data->localData[0]->realVars[184] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[4] variable */,-10000000000.0);
    tmp790 = LessEq(data->localData[0]->realVars[184] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[4] variable */,10000000000.0);
    if(!(tmp789 && tmp790))
    {
      tmp792 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[184] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[4] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp791),tmp792);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[4] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[4] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp793 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1871
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[5] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[5] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[5] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[5], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1871(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1871};
  modelica_boolean tmp794;
  modelica_boolean tmp795;
  static const MMC_DEFSTRINGLIT(tmp796,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[5] <= 10000000000.0, has value: ");
  modelica_string tmp797;
  static int tmp798 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp798)
  {
    tmp794 = GreaterEq(data->localData[0]->realVars[185] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[5] variable */,-10000000000.0);
    tmp795 = LessEq(data->localData[0]->realVars[185] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[5] variable */,10000000000.0);
    if(!(tmp794 && tmp795))
    {
      tmp797 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[185] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[5] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp796),tmp797);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[5] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[5] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp798 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1872
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[6] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[6] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[6] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[6], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1872(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1872};
  modelica_boolean tmp799;
  modelica_boolean tmp800;
  static const MMC_DEFSTRINGLIT(tmp801,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[6] <= 10000000000.0, has value: ");
  modelica_string tmp802;
  static int tmp803 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp803)
  {
    tmp799 = GreaterEq(data->localData[0]->realVars[186] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[6] variable */,-10000000000.0);
    tmp800 = LessEq(data->localData[0]->realVars[186] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[6] variable */,10000000000.0);
    if(!(tmp799 && tmp800))
    {
      tmp802 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[186] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[6] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp801),tmp802);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[6] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[6] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp803 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1873
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[7] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[7] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[7] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[7], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1873(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1873};
  modelica_boolean tmp804;
  modelica_boolean tmp805;
  static const MMC_DEFSTRINGLIT(tmp806,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[7] <= 10000000000.0, has value: ");
  modelica_string tmp807;
  static int tmp808 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp808)
  {
    tmp804 = GreaterEq(data->localData[0]->realVars[187] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[7] variable */,-10000000000.0);
    tmp805 = LessEq(data->localData[0]->realVars[187] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[7] variable */,10000000000.0);
    if(!(tmp804 && tmp805))
    {
      tmp807 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[187] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[7] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp806),tmp807);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[7] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[7] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp808 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1874
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[8] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[8] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[8] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[8], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1874(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1874};
  modelica_boolean tmp809;
  modelica_boolean tmp810;
  static const MMC_DEFSTRINGLIT(tmp811,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[8] <= 10000000000.0, has value: ");
  modelica_string tmp812;
  static int tmp813 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp813)
  {
    tmp809 = GreaterEq(data->localData[0]->realVars[188] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[8] variable */,-10000000000.0);
    tmp810 = LessEq(data->localData[0]->realVars[188] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[8] variable */,10000000000.0);
    if(!(tmp809 && tmp810))
    {
      tmp812 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[188] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[8] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp811),tmp812);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[8] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[8] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp813 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1875
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[9] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[9] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[9] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[9], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1875(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1875};
  modelica_boolean tmp814;
  modelica_boolean tmp815;
  static const MMC_DEFSTRINGLIT(tmp816,144,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[9] <= 10000000000.0, has value: ");
  modelica_string tmp817;
  static int tmp818 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp818)
  {
    tmp814 = GreaterEq(data->localData[0]->realVars[189] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[9] variable */,-10000000000.0);
    tmp815 = LessEq(data->localData[0]->realVars[189] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[9] variable */,10000000000.0);
    if(!(tmp814 && tmp815))
    {
      tmp817 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[189] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[9] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp816),tmp817);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[9] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[9] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp818 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1876
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[10] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[10] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[10] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[10], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1876(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1876};
  modelica_boolean tmp819;
  modelica_boolean tmp820;
  static const MMC_DEFSTRINGLIT(tmp821,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[10] <= 10000000000.0, has value: ");
  modelica_string tmp822;
  static int tmp823 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp823)
  {
    tmp819 = GreaterEq(data->localData[0]->realVars[190] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[10] variable */,-10000000000.0);
    tmp820 = LessEq(data->localData[0]->realVars[190] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[10] variable */,10000000000.0);
    if(!(tmp819 && tmp820))
    {
      tmp822 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[190] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[10] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp821),tmp822);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[10] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[10] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp823 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1877
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[11] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[11] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[11] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[11], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1877(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1877};
  modelica_boolean tmp824;
  modelica_boolean tmp825;
  static const MMC_DEFSTRINGLIT(tmp826,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[11] <= 10000000000.0, has value: ");
  modelica_string tmp827;
  static int tmp828 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp828)
  {
    tmp824 = GreaterEq(data->localData[0]->realVars[191] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[11] variable */,-10000000000.0);
    tmp825 = LessEq(data->localData[0]->realVars[191] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[11] variable */,10000000000.0);
    if(!(tmp824 && tmp825))
    {
      tmp827 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[191] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[11] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp826),tmp827);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[11] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[11] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp828 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1878
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[12] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[12] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[12] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[12], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1878(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1878};
  modelica_boolean tmp829;
  modelica_boolean tmp830;
  static const MMC_DEFSTRINGLIT(tmp831,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[12] <= 10000000000.0, has value: ");
  modelica_string tmp832;
  static int tmp833 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp833)
  {
    tmp829 = GreaterEq(data->localData[0]->realVars[192] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[12] variable */,-10000000000.0);
    tmp830 = LessEq(data->localData[0]->realVars[192] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[12] variable */,10000000000.0);
    if(!(tmp829 && tmp830))
    {
      tmp832 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[192] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[12] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp831),tmp832);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[12] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[12] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp833 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1879
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[13] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[13] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[13] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[13], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1879(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1879};
  modelica_boolean tmp834;
  modelica_boolean tmp835;
  static const MMC_DEFSTRINGLIT(tmp836,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[13] <= 10000000000.0, has value: ");
  modelica_string tmp837;
  static int tmp838 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp838)
  {
    tmp834 = GreaterEq(data->localData[0]->realVars[193] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[13] variable */,-10000000000.0);
    tmp835 = LessEq(data->localData[0]->realVars[193] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[13] variable */,10000000000.0);
    if(!(tmp834 && tmp835))
    {
      tmp837 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[193] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[13] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp836),tmp837);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[13] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[13] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp838 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1880
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[14] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[14] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[14] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[14], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1880(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1880};
  modelica_boolean tmp839;
  modelica_boolean tmp840;
  static const MMC_DEFSTRINGLIT(tmp841,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[14] <= 10000000000.0, has value: ");
  modelica_string tmp842;
  static int tmp843 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp843)
  {
    tmp839 = GreaterEq(data->localData[0]->realVars[194] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[14] variable */,-10000000000.0);
    tmp840 = LessEq(data->localData[0]->realVars[194] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[14] variable */,10000000000.0);
    if(!(tmp839 && tmp840))
    {
      tmp842 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[194] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[14] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp841),tmp842);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[14] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[14] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp843 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1881
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[15] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[15] <= 10000000000.0, "Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[15] <= 10000000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[15], "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1881(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1881};
  modelica_boolean tmp844;
  modelica_boolean tmp845;
  static const MMC_DEFSTRINGLIT(tmp846,145,"Variable violating min/max constraint: -10000000000.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[15] <= 10000000000.0, has value: ");
  modelica_string tmp847;
  static int tmp848 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp848)
  {
    tmp844 = GreaterEq(data->localData[0]->realVars[195] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[15] variable */,-10000000000.0);
    tmp845 = LessEq(data->localData[0]->realVars[195] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[15] variable */,10000000000.0);
    if(!(tmp844 && tmp845))
    {
      tmp847 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[195] /* sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[15] variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp846),tmp847);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",506,4,506,112,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[15] >= -10000000000.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.h_from_comp[15] <= 10000000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp848 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1882
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1882(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1882};
  modelica_boolean tmp849;
  modelica_boolean tmp850;
  static const MMC_DEFSTRINGLIT(tmp851,138,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p <= 100000000.0, has value: ");
  modelica_string tmp852;
  static int tmp853 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp853)
  {
    tmp849 = GreaterEq(data->localData[0]->realVars[212] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p variable */,0.0);
    tmp850 = LessEq(data->localData[0]->realVars[212] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p variable */,100000000.0);
    if(!(tmp849 && tmp850))
    {
      tmp852 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[212] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp851),tmp852);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_turb[15].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp853 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1883
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_comp[15].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_comp[15].p <= 100000000.0, "Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_comp[15].p <= 100000000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_comp[15].p, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1883(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1883};
  modelica_boolean tmp854;
  modelica_boolean tmp855;
  static const MMC_DEFSTRINGLIT(tmp856,138,"Variable violating min/max constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_comp[15].p <= 100000000.0, has value: ");
  modelica_string tmp857;
  static int tmp858 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp858)
  {
    tmp854 = GreaterEq(data->localData[0]->realVars[211] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_comp[15].p variable */,0.0);
    tmp855 = LessEq(data->localData[0]->realVars[211] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_comp[15].p variable */,100000000.0);
    if(!(tmp854 && tmp855))
    {
      tmp857 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[211] /* sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_comp[15].p variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp856),tmp857);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Media/CO2/CO2_ph.mo",89,7,89,55,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.LTR.state_from_comp[15].p >= 0.0 and sCO2PBDesignPointCalculator.powerBlock.LTR.state_from_comp[15].p <= 100000000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp858 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1884
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.splitter.gamma_port_b.m_flow >= -100000.0 and sCO2PBDesignPointCalculator.powerBlock.splitter.gamma_port_b.m_flow <= 100000.0, "Variable violating min/max constraint: -100000.0 <= sCO2PBDesignPointCalculator.powerBlock.splitter.gamma_port_b.m_flow <= 100000.0, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.splitter.gamma_port_b.m_flow, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1884(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1884};
  modelica_boolean tmp859;
  modelica_boolean tmp860;
  static const MMC_DEFSTRINGLIT(tmp861,144,"Variable violating min/max constraint: -100000.0 <= sCO2PBDesignPointCalculator.powerBlock.splitter.gamma_port_b.m_flow <= 100000.0, has value: ");
  modelica_string tmp862;
  static int tmp863 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp863)
  {
    tmp859 = GreaterEq(data->localData[0]->realVars[297] /* sCO2PBDesignPointCalculator.powerBlock.splitter.gamma_port_b.m_flow variable */,-100000.0);
    tmp860 = LessEq(data->localData[0]->realVars[297] /* sCO2PBDesignPointCalculator.powerBlock.splitter.gamma_port_b.m_flow variable */,100000.0);
    if(!(tmp859 && tmp860))
    {
      tmp862 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[297] /* sCO2PBDesignPointCalculator.powerBlock.splitter.gamma_port_b.m_flow variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp861),tmp862);
      {
        FILE_INFO info = {"/usr/lib/omlibrary/Modelica 3.2.2/Fluid/Interfaces.mo",13,5,14,68,1};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.splitter.gamma_port_b.m_flow >= -100000.0 and sCO2PBDesignPointCalculator.powerBlock.splitter.gamma_port_b.m_flow <= 100000.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp863 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1885
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.eta_cycle >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.eta_cycle, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.eta_cycle, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1885(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1885};
  modelica_boolean tmp864;
  static const MMC_DEFSTRINGLIT(tmp865,103,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.eta_cycle, has value: ");
  modelica_string tmp866;
  static int tmp867 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp867)
  {
    tmp864 = GreaterEq(data->localData[0]->realVars[222] /* sCO2PBDesignPointCalculator.powerBlock.eta_cycle variable */,0.0);
    if(!tmp864)
    {
      tmp866 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[222] /* sCO2PBDesignPointCalculator.powerBlock.eta_cycle variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp865),tmp866);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2080,7,2080,30,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.eta_cycle >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp867 = 1;
    }
  }
  TRACE_POP
}

/*
equation index: 1886
type: ALGORITHM

  assert(sCO2PBDesignPointCalculator.powerBlock.eta_cycle_net >= 0.0, "Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.eta_cycle_net, has value: " + String(sCO2PBDesignPointCalculator.powerBlock.eta_cycle_net, "g"));
*/
void sCO2SurrogatePBRig_eqFunction_1886(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH
  const int equationIndexes[2] = {1,1886};
  modelica_boolean tmp868;
  static const MMC_DEFSTRINGLIT(tmp869,107,"Variable violating min constraint: 0.0 <= sCO2PBDesignPointCalculator.powerBlock.eta_cycle_net, has value: ");
  modelica_string tmp870;
  static int tmp871 = 0;
  modelica_metatype tmpMeta[1] __attribute__((unused)) = {0};
  if(!tmp871)
  {
    tmp868 = GreaterEq(data->localData[0]->realVars[223] /* sCO2PBDesignPointCalculator.powerBlock.eta_cycle_net variable */,0.0);
    if(!tmp868)
    {
      tmp870 = modelica_real_to_modelica_string_format(data->localData[0]->realVars[223] /* sCO2PBDesignPointCalculator.powerBlock.eta_cycle_net variable */, (modelica_string) mmc_strings_len1[103]);
      tmpMeta[0] = stringAppend(MMC_REFSTRINGLIT(tmp869),tmp870);
      {
        FILE_INFO info = {"/home/philgun/.local/lib/omlibrary/SolarTherm/Models/PowerBlocks/sCO2Cycle/DirectDesign.mo",2081,7,2081,34,0};
        omc_assert_warning(info, "The following assertion has been violated %sat time %f\nsCO2PBDesignPointCalculator.powerBlock.eta_cycle_net >= 0.0", initial() ? "during initialization " : "", data->localData[0]->timeValue);
        omc_assert_warning_withEquationIndexes(info, equationIndexes, MMC_STRINGDATA(tmpMeta[0]));
      }
      tmp871 = 1;
    }
  }
  TRACE_POP
}
/* function to check assert after a step is done */
OMC_DISABLE_OPT
int sCO2SurrogatePBRig_checkForAsserts(DATA *data, threadData_t *threadData)
{
  TRACE_PUSH

  sCO2SurrogatePBRig_eqFunction_1887(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1888(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1889(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1890(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1713(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1714(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1715(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1716(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1717(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1718(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1719(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1720(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1721(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1722(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1723(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1724(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1725(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1726(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1727(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1728(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1729(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1730(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1731(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1732(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1733(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1734(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1735(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1736(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1737(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1738(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1739(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1740(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1741(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1742(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1743(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1744(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1745(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1746(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1747(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1748(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1749(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1750(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1751(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1752(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1753(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1754(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1755(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1756(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1757(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1758(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1759(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1760(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1761(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1762(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1763(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1764(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1765(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1766(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1767(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1768(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1769(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1770(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1771(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1772(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1773(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1774(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1775(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1776(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1777(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1778(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1779(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1780(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1781(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1782(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1783(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1784(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1785(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1786(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1787(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1788(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1789(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1790(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1791(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1792(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1793(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1794(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1795(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1796(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1797(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1798(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1799(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1800(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1801(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1802(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1803(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1804(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1805(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1806(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1807(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1808(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1809(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1810(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1811(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1812(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1813(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1814(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1815(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1816(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1817(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1818(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1819(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1820(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1821(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1822(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1823(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1824(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1825(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1826(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1827(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1828(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1829(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1830(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1831(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1832(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1833(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1834(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1835(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1836(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1837(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1838(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1839(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1840(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1841(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1842(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1843(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1844(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1845(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1846(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1847(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1848(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1849(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1850(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1851(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1852(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1853(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1854(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1855(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1856(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1857(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1858(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1859(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1860(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1861(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1862(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1863(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1864(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1865(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1866(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1867(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1868(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1869(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1870(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1871(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1872(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1873(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1874(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1875(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1876(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1877(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1878(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1879(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1880(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1881(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1882(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1883(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1884(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1885(data, threadData);

  sCO2SurrogatePBRig_eqFunction_1886(data, threadData);
  
  TRACE_POP
  return 0;
}

#if defined(__cplusplus)
}
#endif

