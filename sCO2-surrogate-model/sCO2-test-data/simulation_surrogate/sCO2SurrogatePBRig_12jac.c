/* Jacobians 8 */
#include "sCO2SurrogatePBRig_model.h"
#include "sCO2SurrogatePBRig_12jac.h"
OMC_DISABLE_OPT
int sCO2SurrogatePBRig_initialAnalyticJacobianLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 14;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(14,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int sCO2SurrogatePBRig_initialAnalyticJacobianLSJac32(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 14;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(14,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
OMC_DISABLE_OPT
int sCO2SurrogatePBRig_initialAnalyticJacobianLSJac47(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+1] = {0,1};
  const int rowIndex[1] = {0};
  int i = 0;
  
  jacobian->sizeCols = 1;
  jacobian->sizeRows = 1;
  jacobian->sizeTmpVars = 9;
  jacobian->seedVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(1,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(9,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((1+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 1;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(1*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (1+1)*sizeof(int));
  
  for(i=2;i<1+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 1*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}
int sCO2SurrogatePBRig_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int sCO2SurrogatePBRig_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int sCO2SurrogatePBRig_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int sCO2SurrogatePBRig_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int sCO2SurrogatePBRig_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+4] = {0,0,0,0,0};
  const int rowIndex[0] = {};
  int i = 0;
  
  jacobian->sizeCols = 4;
  jacobian->sizeRows = 4;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(4,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(4,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((4+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(0*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 0;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(4*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (4+1)*sizeof(int));
  
  for(i=2;i<4+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 0*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[3] = 1;
  jacobian->sparsePattern->colorCols[2] = 1;
  jacobian->sparsePattern->colorCols[1] = 1;
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}


/*
equation index: 73
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des._3._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = 2.0 * sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2SurrogatePBRig_eqFunction_73(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,73};
  jacobian->tmpVars[1] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.3.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = (2.0) * (jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 74
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des._4._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.3.h.$pDERLSJac1.dummyVarLSJac1 + sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2SurrogatePBRig_eqFunction_74(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,74};
  jacobian->tmpVars[2] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.4.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[1] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.3.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 75
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des._5._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.4.h.$pDERLSJac1.dummyVarLSJac1 + sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2SurrogatePBRig_eqFunction_75(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,75};
  jacobian->tmpVars[3] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.5.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[2] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.4.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 76
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des._6._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.5.h.$pDERLSJac1.dummyVarLSJac1 + sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2SurrogatePBRig_eqFunction_76(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,76};
  jacobian->tmpVars[4] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.6.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[3] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.5.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 77
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des._7._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.6.h.$pDERLSJac1.dummyVarLSJac1 + sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2SurrogatePBRig_eqFunction_77(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,77};
  jacobian->tmpVars[5] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.7.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[4] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.6.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 78
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des._8._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.7.h.$pDERLSJac1.dummyVarLSJac1 + sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2SurrogatePBRig_eqFunction_78(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,78};
  jacobian->tmpVars[6] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.8.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.7.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 79
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des._9._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.8.h.$pDERLSJac1.dummyVarLSJac1 + sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2SurrogatePBRig_eqFunction_79(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,79};
  jacobian->tmpVars[7] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.9.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[6] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.8.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 80
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des._10._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.9.h.$pDERLSJac1.dummyVarLSJac1 + sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2SurrogatePBRig_eqFunction_80(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,80};
  jacobian->tmpVars[8] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.10.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[7] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.9.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 81
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des._11._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.10.h.$pDERLSJac1.dummyVarLSJac1 + sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2SurrogatePBRig_eqFunction_81(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,81};
  jacobian->tmpVars[9] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.11.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[8] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.10.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 82
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des._12._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.11.h.$pDERLSJac1.dummyVarLSJac1 + sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2SurrogatePBRig_eqFunction_82(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,82};
  jacobian->tmpVars[10] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.12.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.11.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 83
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des._13._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.12.h.$pDERLSJac1.dummyVarLSJac1 + sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2SurrogatePBRig_eqFunction_83(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,83};
  jacobian->tmpVars[11] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.13.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[10] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.12.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 84
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._exchanger._state_HTF_des._14._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.13.h.$pDERLSJac1.dummyVarLSJac1 + sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2SurrogatePBRig_eqFunction_84(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,84};
  jacobian->tmpVars[12] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.14.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[11] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.13.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 85
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = (-sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.14.h.$pDERLSJac1.dummyVarLSJac1) - sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2SurrogatePBRig_eqFunction_85(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,85};
  jacobian->resultVars[0] /* $res1.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_VAR */ = (-jacobian->tmpVars[12] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des.14.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}
int sCO2SurrogatePBRig_functionJacLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2SurrogatePBRig_INDEX_JAC_LSJac1;
  sCO2SurrogatePBRig_eqFunction_73(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_74(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_75(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_76(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_77(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_78(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_79(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_80(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_81(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_82(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_83(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_84(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_85(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 493
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633332._dummyVarLSJac32[3] = 2.0 * sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32
*/
void sCO2SurrogatePBRig_eqFunction_493(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,493};
  jacobian->tmpVars[1] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[3] JACOBIAN_DIFF_VAR */ = (2.0) * (jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 494
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633332._dummyVarLSJac32[4] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[3] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32
*/
void sCO2SurrogatePBRig_eqFunction_494(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,494};
  jacobian->tmpVars[2] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[4] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[1] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[3] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 495
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633332._dummyVarLSJac32[5] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[4] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32
*/
void sCO2SurrogatePBRig_eqFunction_495(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,495};
  jacobian->tmpVars[3] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[5] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[2] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[4] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633332._dummyVarLSJac32[6] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[5] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32
*/
void sCO2SurrogatePBRig_eqFunction_496(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,496};
  jacobian->tmpVars[4] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[6] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[3] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[5] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633332._dummyVarLSJac32[7] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[6] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32
*/
void sCO2SurrogatePBRig_eqFunction_497(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,497};
  jacobian->tmpVars[5] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[7] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[4] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[6] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633332._dummyVarLSJac32[8] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[7] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32
*/
void sCO2SurrogatePBRig_eqFunction_498(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,498};
  jacobian->tmpVars[6] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[8] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[7] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633332._dummyVarLSJac32[9] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[8] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32
*/
void sCO2SurrogatePBRig_eqFunction_499(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,499};
  jacobian->tmpVars[7] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[9] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[6] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[8] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633332._dummyVarLSJac32[10] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[9] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32
*/
void sCO2SurrogatePBRig_eqFunction_500(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,500};
  jacobian->tmpVars[8] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[10] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[7] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[9] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633332._dummyVarLSJac32[11] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[10] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32
*/
void sCO2SurrogatePBRig_eqFunction_501(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,501};
  jacobian->tmpVars[9] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[11] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[8] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[10] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633332._dummyVarLSJac32[12] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[11] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32
*/
void sCO2SurrogatePBRig_eqFunction_502(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,502};
  jacobian->tmpVars[10] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[12] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[11] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633332._dummyVarLSJac32[13] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[12] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32
*/
void sCO2SurrogatePBRig_eqFunction_503(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,503};
  jacobian->tmpVars[11] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[13] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[10] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[12] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633332._dummyVarLSJac32[14] = sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[13] + sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32
*/
void sCO2SurrogatePBRig_eqFunction_504(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,504};
  jacobian->tmpVars[12] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[14] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[11] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[13] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524C534A61633332._dummyVarLSJac32 = (-sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[14]) - sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32
*/
void sCO2SurrogatePBRig_eqFunction_505(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,505};
  jacobian->resultVars[0] /* $res1.$pDERLSJac32.dummyVarLSJac32 JACOBIAN_VAR */ = (-jacobian->tmpVars[12] /* sCO2PBDesignPointCalculator.powerBlock.cooler.h_CO2_des.$pDERLSJac32.dummyVarLSJac32[14] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.cooler.Q_dis_des.SeedLSJac32 SEED_VAR */;
  TRACE_POP
}
int sCO2SurrogatePBRig_functionJacLSJac32_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2SurrogatePBRig_INDEX_JAC_LSJac32;
  sCO2SurrogatePBRig_eqFunction_493(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_494(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_495(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_496(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_497(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_498(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_499(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_500(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_501(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_502(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_503(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_504(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_505(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 573
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._m_des.__omcQuot_24704445524C534A61633437._dummyVarLSJac47 = sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des.SeedLSJac47 * sCO2PBDesignPointCalculator.powerBlock.ratio_m_des
*/
void sCO2SurrogatePBRig_eqFunction_573(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,573};
  jacobian->tmpVars[3] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.m_des.$pDERLSJac47.dummyVarLSJac47 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des.SeedLSJac47 SEED_VAR */) * (data->simulationInfo->realParameter[714] /* sCO2PBDesignPointCalculator.powerBlock.ratio_m_des PARAM */);
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._mainCompressor._W_comp_des.__omcQuot_24704445524C534A61633437._dummyVarLSJac47 = sCO2PBDesignPointCalculator.powerBlock.mainCompressor.m_des.$pDERLSJac47.dummyVarLSJac47 * (sCO2PBDesignPointCalculator.powerBlock.mainCompressor.h_out_des - sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h)
*/
void sCO2SurrogatePBRig_eqFunction_574(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,574};
  jacobian->tmpVars[4] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp_des.$pDERLSJac47.dummyVarLSJac47 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[3] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.m_des.$pDERLSJac47.dummyVarLSJac47 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[691] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[698] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.state_in_des.h PARAM */);
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._m_des.__omcQuot_24704445524C534A61633437._dummyVarLSJac47 = sCO2PBDesignPointCalculator.powerBlock.gamma * sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des.SeedLSJac47
*/
void sCO2SurrogatePBRig_eqFunction_575(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,575};
  jacobian->tmpVars[0] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.m_des.$pDERLSJac47.dummyVarLSJac47 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[681] /* sCO2PBDesignPointCalculator.powerBlock.gamma PARAM */) * (jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des.SeedLSJac47 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._reCompressor._W_comp_des.__omcQuot_24704445524C534A61633437._dummyVarLSJac47 = sCO2PBDesignPointCalculator.powerBlock.reCompressor.m_des.$pDERLSJac47.dummyVarLSJac47 * (sCO2PBDesignPointCalculator.powerBlock.reCompressor.h_out_des - sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_in_des.h)
*/
void sCO2SurrogatePBRig_eqFunction_576(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,576};
  jacobian->tmpVars[1] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp_des.$pDERLSJac47.dummyVarLSJac47 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[0] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.m_des.$pDERLSJac47.dummyVarLSJac47 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[724] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[731] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.state_in_des.h PARAM */);
  TRACE_POP
}

/*
equation index: 577
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._W_turb_des.__omcQuot_24704445524C534A61633437._dummyVarLSJac47 = ((-sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp_des.$pDERLSJac47.dummyVarLSJac47) - sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp_des.$pDERLSJac47.dummyVarLSJac47) * (1.0 - sCO2PBDesignPointCalculator.powerBlock.par_fr) * sCO2PBDesignPointCalculator.powerBlock.eta_motor / (sCO2PBDesignPointCalculator.powerBlock.eta_motor * (1.0 - sCO2PBDesignPointCalculator.powerBlock.par_fr))
*/
void sCO2SurrogatePBRig_eqFunction_577(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,577};
  jacobian->tmpVars[5] /* sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb_des.$pDERLSJac47.dummyVarLSJac47 JACOBIAN_DIFF_VAR */ = DIVISION((((-jacobian->tmpVars[1] /* sCO2PBDesignPointCalculator.powerBlock.reCompressor.W_comp_des.$pDERLSJac47.dummyVarLSJac47 JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[4] /* sCO2PBDesignPointCalculator.powerBlock.mainCompressor.W_comp_des.$pDERLSJac47.dummyVarLSJac47 JACOBIAN_DIFF_VAR */) * (1.0 - data->simulationInfo->realParameter[705] /* sCO2PBDesignPointCalculator.powerBlock.par_fr PARAM */)) * (data->simulationInfo->realParameter[521] /* sCO2PBDesignPointCalculator.powerBlock.eta_motor PARAM */),(data->simulationInfo->realParameter[521] /* sCO2PBDesignPointCalculator.powerBlock.eta_motor PARAM */) * (1.0 - data->simulationInfo->realParameter[705] /* sCO2PBDesignPointCalculator.powerBlock.par_fr PARAM */),"sCO2PBDesignPointCalculator.powerBlock.eta_motor * (1.0 - sCO2PBDesignPointCalculator.powerBlock.par_fr)");
  TRACE_POP
}

/*
equation index: 578
type: SIMPLE_ASSIGN
sCO2PBDesignPointCalculator._powerBlock._turbine._m_des.__omcQuot_24704445524C534A61633437._dummyVarLSJac47 = sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb_des.$pDERLSJac47.dummyVarLSJac47 / (sCO2PBDesignPointCalculator.powerBlock.turbine.h_out_des - sCO2PBDesignPointCalculator.powerBlock.turbine.state_in_des.h)
*/
void sCO2SurrogatePBRig_eqFunction_578(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,578};
  jacobian->tmpVars[6] /* sCO2PBDesignPointCalculator.powerBlock.turbine.m_des.$pDERLSJac47.dummyVarLSJac47 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[5] /* sCO2PBDesignPointCalculator.powerBlock.turbine.W_turb_des.$pDERLSJac47.dummyVarLSJac47 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[749] /* sCO2PBDesignPointCalculator.powerBlock.turbine.h_out_des PARAM */ - data->simulationInfo->realParameter[753] /* sCO2PBDesignPointCalculator.powerBlock.turbine.state_in_des.h PARAM */,"sCO2PBDesignPointCalculator.powerBlock.turbine.h_out_des - sCO2PBDesignPointCalculator.powerBlock.turbine.state_in_des.h");
  TRACE_POP
}

/*
equation index: 579
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524C534A61633437._dummyVarLSJac47 = sCO2PBDesignPointCalculator.powerBlock.turbine.m_des.$pDERLSJac47.dummyVarLSJac47 - sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des.SeedLSJac47
*/
void sCO2SurrogatePBRig_eqFunction_579(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,579};
  jacobian->resultVars[0] /* $res1.$pDERLSJac47.dummyVarLSJac47 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* sCO2PBDesignPointCalculator.powerBlock.turbine.m_des.$pDERLSJac47.dummyVarLSJac47 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[0] /* sCO2PBDesignPointCalculator.powerBlock.LTR.m_turb_des.SeedLSJac47 SEED_VAR */;
  TRACE_POP
}
int sCO2SurrogatePBRig_functionJacLSJac47_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2SurrogatePBRig_INDEX_JAC_LSJac47;
  sCO2SurrogatePBRig_eqFunction_573(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_574(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_575(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_576(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_577(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_578(data, threadData, jacobian, parentJacobian);

  sCO2SurrogatePBRig_eqFunction_579(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int sCO2SurrogatePBRig_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2SurrogatePBRig_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2SurrogatePBRig_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2SurrogatePBRig_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2SurrogatePBRig_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2SurrogatePBRig_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


