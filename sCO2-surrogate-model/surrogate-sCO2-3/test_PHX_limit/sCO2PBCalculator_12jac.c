/* Jacobians 9 */
#include "sCO2PBCalculator_model.h"
#include "sCO2PBCalculator_12jac.h"
OMC_DISABLE_OPT
int sCO2PBCalculator_initialAnalyticJacobianLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int sCO2PBCalculator_initialAnalyticJacobianLSJac20(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int sCO2PBCalculator_initialAnalyticJacobianLSJac34(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
OMC_DISABLE_OPT
int sCO2PBCalculator_initialAnalyticJacobianNLSJac36(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+14] = {0,14,2,2,2,2,2,2,2,2,2,2,2,2,2};
  const int rowIndex[40] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,11,12,12,13,0,13};
  int i = 0;
  
  jacobian->sizeCols = 14;
  jacobian->sizeRows = 14;
  jacobian->sizeTmpVars = 14;
  jacobian->seedVars = (modelica_real*) calloc(14,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(14,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(14,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((14+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(40*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 40;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(14*sizeof(int));
  jacobian->sparsePattern->maxColors = 3;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (14+1)*sizeof(int));
  
  for(i=2;i<14+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 40*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[2] = 1;
  jacobian->sparsePattern->colorCols[4] = 1;
  jacobian->sparsePattern->colorCols[6] = 1;
  jacobian->sparsePattern->colorCols[8] = 1;
  jacobian->sparsePattern->colorCols[10] = 1;
  jacobian->sparsePattern->colorCols[12] = 1;
  jacobian->sparsePattern->colorCols[1] = 2;
  jacobian->sparsePattern->colorCols[3] = 2;
  jacobian->sparsePattern->colorCols[5] = 2;
  jacobian->sparsePattern->colorCols[7] = 2;
  jacobian->sparsePattern->colorCols[9] = 2;
  jacobian->sparsePattern->colorCols[11] = 2;
  jacobian->sparsePattern->colorCols[13] = 2;
  jacobian->sparsePattern->colorCols[0] = 3;
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int sCO2PBCalculator_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int sCO2PBCalculator_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int sCO2PBCalculator_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int sCO2PBCalculator_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+2] = {0,0,0};
  const int rowIndex[0] = {};
  int i = 0;
  
  jacobian->sizeCols = 2;
  jacobian->sizeRows = 2;
  jacobian->sizeTmpVars = 0;
  jacobian->seedVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->resultVars = (modelica_real*) calloc(2,sizeof(modelica_real));
  jacobian->tmpVars = (modelica_real*) calloc(0,sizeof(modelica_real));
  jacobian->sparsePattern = (SPARSE_PATTERN*) malloc(sizeof(SPARSE_PATTERN));
  jacobian->sparsePattern->leadindex = (unsigned int*) malloc((2+1)*sizeof(int));
  jacobian->sparsePattern->index = (unsigned int*) malloc(0*sizeof(int));
  jacobian->sparsePattern->numberOfNoneZeros = 0;
  jacobian->sparsePattern->colorCols = (unsigned int*) malloc(2*sizeof(int));
  jacobian->sparsePattern->maxColors = 1;
  
  /* write lead index of compressed sparse column */
  memcpy(jacobian->sparsePattern->leadindex, colPtrIndex, (2+1)*sizeof(int));
  
  for(i=2;i<2+1;++i)
    jacobian->sparsePattern->leadindex[i] += jacobian->sparsePattern->leadindex[i-1];
  
  /* call sparse index */
  memcpy(jacobian->sparsePattern->index, rowIndex, 0*sizeof(int));
  
  /* write color array */
  jacobian->sparsePattern->colorCols[1] = 1;
  jacobian->sparsePattern->colorCols[0] = 1;
  TRACE_POP
  return 0;
}


/*
equation index: 52
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._3._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = 2.0 * powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2PBCalculator_eqFunction_52(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,52};
  jacobian->tmpVars[1] /* powerBlock.exchanger.state_HTF_des.3.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = (2.0) * (jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._4._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.3.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2PBCalculator_eqFunction_53(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,53};
  jacobian->tmpVars[2] /* powerBlock.exchanger.state_HTF_des.4.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[1] /* powerBlock.exchanger.state_HTF_des.3.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._5._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.4.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2PBCalculator_eqFunction_54(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,54};
  jacobian->tmpVars[3] /* powerBlock.exchanger.state_HTF_des.5.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[2] /* powerBlock.exchanger.state_HTF_des.4.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._6._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.5.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2PBCalculator_eqFunction_55(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,55};
  jacobian->tmpVars[4] /* powerBlock.exchanger.state_HTF_des.6.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[3] /* powerBlock.exchanger.state_HTF_des.5.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._7._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.6.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2PBCalculator_eqFunction_56(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,56};
  jacobian->tmpVars[5] /* powerBlock.exchanger.state_HTF_des.7.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[4] /* powerBlock.exchanger.state_HTF_des.6.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._8._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.7.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2PBCalculator_eqFunction_57(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,57};
  jacobian->tmpVars[6] /* powerBlock.exchanger.state_HTF_des.8.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* powerBlock.exchanger.state_HTF_des.7.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._9._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.8.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2PBCalculator_eqFunction_58(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,58};
  jacobian->tmpVars[7] /* powerBlock.exchanger.state_HTF_des.9.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[6] /* powerBlock.exchanger.state_HTF_des.8.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._10._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.9.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2PBCalculator_eqFunction_59(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,59};
  jacobian->tmpVars[8] /* powerBlock.exchanger.state_HTF_des.10.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[7] /* powerBlock.exchanger.state_HTF_des.9.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._11._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.10.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2PBCalculator_eqFunction_60(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,60};
  jacobian->tmpVars[9] /* powerBlock.exchanger.state_HTF_des.11.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[8] /* powerBlock.exchanger.state_HTF_des.10.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._12._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.11.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2PBCalculator_eqFunction_61(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,61};
  jacobian->tmpVars[10] /* powerBlock.exchanger.state_HTF_des.12.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* powerBlock.exchanger.state_HTF_des.11.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._13._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.12.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2PBCalculator_eqFunction_62(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,62};
  jacobian->tmpVars[11] /* powerBlock.exchanger.state_HTF_des.13.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[10] /* powerBlock.exchanger.state_HTF_des.12.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._14._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.13.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2PBCalculator_eqFunction_63(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,63};
  jacobian->tmpVars[12] /* powerBlock.exchanger.state_HTF_des.14.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[11] /* powerBlock.exchanger.state_HTF_des.13.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 64
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = (-powerBlock.exchanger.state_HTF_des.14.h.$pDERLSJac1.dummyVarLSJac1) - powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1
*/
void sCO2PBCalculator_eqFunction_64(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,64};
  jacobian->resultVars[0] /* $res1.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_VAR */ = (-jacobian->tmpVars[12] /* powerBlock.exchanger.state_HTF_des.14.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}
int sCO2PBCalculator_functionJacLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBCalculator_INDEX_JAC_LSJac1;
  sCO2PBCalculator_eqFunction_52(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_53(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_54(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_55(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_56(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_57(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_58(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_59(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_60(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_61(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_62(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_63(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_64(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 420
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20[3] = 2.0 * powerBlock.cooler.Q_dis_des.SeedLSJac20
*/
void sCO2PBCalculator_eqFunction_420(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,420};
  jacobian->tmpVars[1] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[3] JACOBIAN_DIFF_VAR */ = (2.0) * (jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac20 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20[4] = powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[3] + powerBlock.cooler.Q_dis_des.SeedLSJac20
*/
void sCO2PBCalculator_eqFunction_421(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,421};
  jacobian->tmpVars[2] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[4] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[1] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[3] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac20 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20[5] = powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[4] + powerBlock.cooler.Q_dis_des.SeedLSJac20
*/
void sCO2PBCalculator_eqFunction_422(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,422};
  jacobian->tmpVars[3] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[5] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[2] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[4] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac20 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20[6] = powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[5] + powerBlock.cooler.Q_dis_des.SeedLSJac20
*/
void sCO2PBCalculator_eqFunction_423(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,423};
  jacobian->tmpVars[4] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[6] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[3] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[5] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac20 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20[7] = powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[6] + powerBlock.cooler.Q_dis_des.SeedLSJac20
*/
void sCO2PBCalculator_eqFunction_424(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,424};
  jacobian->tmpVars[5] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[7] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[4] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[6] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac20 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20[8] = powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[7] + powerBlock.cooler.Q_dis_des.SeedLSJac20
*/
void sCO2PBCalculator_eqFunction_425(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,425};
  jacobian->tmpVars[6] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[8] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[7] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac20 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20[9] = powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[8] + powerBlock.cooler.Q_dis_des.SeedLSJac20
*/
void sCO2PBCalculator_eqFunction_426(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,426};
  jacobian->tmpVars[7] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[9] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[6] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[8] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac20 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20[10] = powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[9] + powerBlock.cooler.Q_dis_des.SeedLSJac20
*/
void sCO2PBCalculator_eqFunction_427(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,427};
  jacobian->tmpVars[8] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[10] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[7] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[9] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac20 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20[11] = powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[10] + powerBlock.cooler.Q_dis_des.SeedLSJac20
*/
void sCO2PBCalculator_eqFunction_428(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,428};
  jacobian->tmpVars[9] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[11] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[8] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[10] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac20 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20[12] = powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[11] + powerBlock.cooler.Q_dis_des.SeedLSJac20
*/
void sCO2PBCalculator_eqFunction_429(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,429};
  jacobian->tmpVars[10] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[12] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[11] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac20 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20[13] = powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[12] + powerBlock.cooler.Q_dis_des.SeedLSJac20
*/
void sCO2PBCalculator_eqFunction_430(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,430};
  jacobian->tmpVars[11] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[13] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[10] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[12] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac20 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20[14] = powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[13] + powerBlock.cooler.Q_dis_des.SeedLSJac20
*/
void sCO2PBCalculator_eqFunction_431(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,431};
  jacobian->tmpVars[12] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[14] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[11] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[13] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac20 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524C534A61633230._dummyVarLSJac20 = (-powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[14]) - powerBlock.cooler.Q_dis_des.SeedLSJac20
*/
void sCO2PBCalculator_eqFunction_432(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,432};
  jacobian->resultVars[0] /* $res1.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_VAR */ = (-jacobian->tmpVars[12] /* powerBlock.cooler.h_CO2_des.$pDERLSJac20.dummyVarLSJac20[14] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac20 SEED_VAR */;
  TRACE_POP
}
int sCO2PBCalculator_functionJacLSJac20_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBCalculator_INDEX_JAC_LSJac20;
  sCO2PBCalculator_eqFunction_420(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_421(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_422(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_423(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_424(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_425(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_426(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_427(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_428(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_429(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_430(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_431(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_432(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 495
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._m_des.__omcQuot_24704445524C534A61633334._dummyVarLSJac34 = powerBlock.LTR.m_turb_des.SeedLSJac34 * powerBlock.ratio_m_des
*/
void sCO2PBCalculator_eqFunction_495(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,495};
  jacobian->tmpVars[3] /* powerBlock.mainCompressor.m_des.$pDERLSJac34.dummyVarLSJac34 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[0] /* powerBlock.LTR.m_turb_des.SeedLSJac34 SEED_VAR */) * (data->simulationInfo->realParameter[620] /* powerBlock.ratio_m_des PARAM */);
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._W_comp_des.__omcQuot_24704445524C534A61633334._dummyVarLSJac34 = powerBlock.mainCompressor.m_des.$pDERLSJac34.dummyVarLSJac34 * (powerBlock.mainCompressor.h_out_des - powerBlock.mainCompressor.state_in_des.h)
*/
void sCO2PBCalculator_eqFunction_496(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,496};
  jacobian->tmpVars[4] /* powerBlock.mainCompressor.W_comp_des.$pDERLSJac34.dummyVarLSJac34 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[3] /* powerBlock.mainCompressor.m_des.$pDERLSJac34.dummyVarLSJac34 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[598] /* powerBlock.mainCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[605] /* powerBlock.mainCompressor.state_in_des.h PARAM */);
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
powerBlock._reCompressor._m_des.__omcQuot_24704445524C534A61633334._dummyVarLSJac34 = powerBlock.gamma * powerBlock.LTR.m_turb_des.SeedLSJac34
*/
void sCO2PBCalculator_eqFunction_497(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,497};
  jacobian->tmpVars[0] /* powerBlock.reCompressor.m_des.$pDERLSJac34.dummyVarLSJac34 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[588] /* powerBlock.gamma PARAM */) * (jacobian->seedVars[0] /* powerBlock.LTR.m_turb_des.SeedLSJac34 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
powerBlock._reCompressor._W_comp_des.__omcQuot_24704445524C534A61633334._dummyVarLSJac34 = powerBlock.reCompressor.m_des.$pDERLSJac34.dummyVarLSJac34 * (powerBlock.reCompressor.h_out_des - powerBlock.reCompressor.state_in_des.h)
*/
void sCO2PBCalculator_eqFunction_498(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,498};
  jacobian->tmpVars[1] /* powerBlock.reCompressor.W_comp_des.$pDERLSJac34.dummyVarLSJac34 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[0] /* powerBlock.reCompressor.m_des.$pDERLSJac34.dummyVarLSJac34 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[630] /* powerBlock.reCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[637] /* powerBlock.reCompressor.state_in_des.h PARAM */);
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
powerBlock._turbine._W_turb_des.__omcQuot_24704445524C534A61633334._dummyVarLSJac34 = ((-powerBlock.reCompressor.W_comp_des.$pDERLSJac34.dummyVarLSJac34) - powerBlock.mainCompressor.W_comp_des.$pDERLSJac34.dummyVarLSJac34) * (1.0 - powerBlock.par_fr) * powerBlock.eta_motor / (powerBlock.eta_motor * (1.0 - powerBlock.par_fr))
*/
void sCO2PBCalculator_eqFunction_499(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,499};
  jacobian->tmpVars[5] /* powerBlock.turbine.W_turb_des.$pDERLSJac34.dummyVarLSJac34 JACOBIAN_DIFF_VAR */ = DIVISION((((-jacobian->tmpVars[1] /* powerBlock.reCompressor.W_comp_des.$pDERLSJac34.dummyVarLSJac34 JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[4] /* powerBlock.mainCompressor.W_comp_des.$pDERLSJac34.dummyVarLSJac34 JACOBIAN_DIFF_VAR */) * (1.0 - data->simulationInfo->realParameter[612] /* powerBlock.par_fr PARAM */)) * (data->simulationInfo->realParameter[429] /* powerBlock.eta_motor PARAM */),(data->simulationInfo->realParameter[429] /* powerBlock.eta_motor PARAM */) * (1.0 - data->simulationInfo->realParameter[612] /* powerBlock.par_fr PARAM */),"powerBlock.eta_motor * (1.0 - powerBlock.par_fr)");
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
powerBlock._turbine._m_des.__omcQuot_24704445524C534A61633334._dummyVarLSJac34 = powerBlock.turbine.W_turb_des.$pDERLSJac34.dummyVarLSJac34 / (powerBlock.turbine.h_out_des - powerBlock.turbine.state_in_des.h)
*/
void sCO2PBCalculator_eqFunction_500(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,500};
  jacobian->tmpVars[6] /* powerBlock.turbine.m_des.$pDERLSJac34.dummyVarLSJac34 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[5] /* powerBlock.turbine.W_turb_des.$pDERLSJac34.dummyVarLSJac34 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[655] /* powerBlock.turbine.h_out_des PARAM */ - data->simulationInfo->realParameter[659] /* powerBlock.turbine.state_in_des.h PARAM */,"powerBlock.turbine.h_out_des - powerBlock.turbine.state_in_des.h");
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524C534A61633334._dummyVarLSJac34 = powerBlock.turbine.m_des.$pDERLSJac34.dummyVarLSJac34 - powerBlock.LTR.m_turb_des.SeedLSJac34
*/
void sCO2PBCalculator_eqFunction_501(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,501};
  jacobian->resultVars[0] /* $res1.$pDERLSJac34.dummyVarLSJac34 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* powerBlock.turbine.m_des.$pDERLSJac34.dummyVarLSJac34 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[0] /* powerBlock.LTR.m_turb_des.SeedLSJac34 SEED_VAR */;
  TRACE_POP
}
int sCO2PBCalculator_functionJacLSJac34_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBCalculator_INDEX_JAC_LSJac34;
  sCO2PBCalculator_eqFunction_495(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_496(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_497(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_498(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_499(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_500(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_501(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 591
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * powerBlock.exchanger.state_CO2_des[2].h.SeedNLSJac36 + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[2].h - powerBlock.exchanger.state_CO2_des[1].h)
*/
void sCO2PBCalculator_eqFunction_591(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,591};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[13] /* powerBlock.exchanger.state_CO2_des[2].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */ - data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[1].h PARAM */);
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
_omcQuot_2472657332.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[15].h - powerBlock.exchanger.state_CO2_des[14].h) - powerBlock.exchanger.ratio_m_des * powerBlock.exchanger.state_CO2_des[14].h.SeedNLSJac36
*/
void sCO2PBCalculator_eqFunction_592(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,592};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[524] /* powerBlock.exchanger.state_CO2_des[15].h PARAM */ - data->simulationInfo->realParameter[523] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */) - ((data->simulationInfo->realParameter[509] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[1] /* powerBlock.exchanger.state_CO2_des[14].h.SeedNLSJac36 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
_omcQuot_2472657333.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[14].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[13].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[14].h - powerBlock.exchanger.state_CO2_des[13].h)
*/
void sCO2PBCalculator_eqFunction_593(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,593};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[1] /* powerBlock.exchanger.state_CO2_des[14].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[2] /* powerBlock.exchanger.state_CO2_des[13].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[523] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */ - data->simulationInfo->realParameter[522] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */);
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
_omcQuot_2472657334.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[13].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[12].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[13].h - powerBlock.exchanger.state_CO2_des[12].h)
*/
void sCO2PBCalculator_eqFunction_594(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,594};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[2] /* powerBlock.exchanger.state_CO2_des[13].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[3] /* powerBlock.exchanger.state_CO2_des[12].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[522] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */ - data->simulationInfo->realParameter[521] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */);
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
_omcQuot_2472657335.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[12].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[11].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[12].h - powerBlock.exchanger.state_CO2_des[11].h)
*/
void sCO2PBCalculator_eqFunction_595(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,595};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[3] /* powerBlock.exchanger.state_CO2_des[12].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[4] /* powerBlock.exchanger.state_CO2_des[11].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[521] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */ - data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */);
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
_omcQuot_2472657336.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[11].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[10].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[11].h - powerBlock.exchanger.state_CO2_des[10].h)
*/
void sCO2PBCalculator_eqFunction_596(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,596};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[4] /* powerBlock.exchanger.state_CO2_des[11].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[5] /* powerBlock.exchanger.state_CO2_des[10].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */ - data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */);
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
_omcQuot_2472657337.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[10].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[9].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[10].h - powerBlock.exchanger.state_CO2_des[9].h)
*/
void sCO2PBCalculator_eqFunction_597(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,597};
  jacobian->resultVars[6] /* $res7.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[5] /* powerBlock.exchanger.state_CO2_des[10].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[6] /* powerBlock.exchanger.state_CO2_des[9].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */ - data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */);
  TRACE_POP
}

/*
equation index: 598
type: SIMPLE_ASSIGN
_omcQuot_2472657338.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[9].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[8].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[9].h - powerBlock.exchanger.state_CO2_des[8].h)
*/
void sCO2PBCalculator_eqFunction_598(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,598};
  jacobian->resultVars[7] /* $res8.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[6] /* powerBlock.exchanger.state_CO2_des[9].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[7] /* powerBlock.exchanger.state_CO2_des[8].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */ - data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */);
  TRACE_POP
}

/*
equation index: 599
type: SIMPLE_ASSIGN
_omcQuot_2472657339.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[8].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[7].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[8].h - powerBlock.exchanger.state_CO2_des[7].h)
*/
void sCO2PBCalculator_eqFunction_599(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,599};
  jacobian->resultVars[8] /* $res9.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[7] /* powerBlock.exchanger.state_CO2_des[8].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[8] /* powerBlock.exchanger.state_CO2_des[7].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */ - data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */);
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
_omcQuot_247265733130.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[7].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[6].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[7].h - powerBlock.exchanger.state_CO2_des[6].h)
*/
void sCO2PBCalculator_eqFunction_600(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,600};
  jacobian->resultVars[9] /* $res10.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[8] /* powerBlock.exchanger.state_CO2_des[7].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[9] /* powerBlock.exchanger.state_CO2_des[6].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */ - data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */);
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
_omcQuot_247265733131.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[6].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[5].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[6].h - powerBlock.exchanger.state_CO2_des[5].h)
*/
void sCO2PBCalculator_eqFunction_601(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,601};
  jacobian->resultVars[10] /* $res11.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[9] /* powerBlock.exchanger.state_CO2_des[6].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[10] /* powerBlock.exchanger.state_CO2_des[5].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */ - data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */);
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
_omcQuot_247265733132.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[5].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[4].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[5].h - powerBlock.exchanger.state_CO2_des[4].h)
*/
void sCO2PBCalculator_eqFunction_602(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,602};
  jacobian->resultVars[11] /* $res12.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[10] /* powerBlock.exchanger.state_CO2_des[5].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[11] /* powerBlock.exchanger.state_CO2_des[4].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */ - data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */);
  TRACE_POP
}

/*
equation index: 603
type: SIMPLE_ASSIGN
_omcQuot_247265733133.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[4].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[3].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[4].h - powerBlock.exchanger.state_CO2_des[3].h)
*/
void sCO2PBCalculator_eqFunction_603(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,603};
  jacobian->resultVars[12] /* $res13.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[11] /* powerBlock.exchanger.state_CO2_des[4].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[12] /* powerBlock.exchanger.state_CO2_des[3].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */ - data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */);
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
_omcQuot_247265733134.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[3].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[2].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[3].h - powerBlock.exchanger.state_CO2_des[2].h)
*/
void sCO2PBCalculator_eqFunction_604(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,604};
  jacobian->resultVars[13] /* $res14.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[12] /* powerBlock.exchanger.state_CO2_des[3].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[13] /* powerBlock.exchanger.state_CO2_des[2].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */ - data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */);
  TRACE_POP
}
int sCO2PBCalculator_functionJacNLSJac36_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBCalculator_INDEX_JAC_NLSJac36;
  sCO2PBCalculator_eqFunction_591(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_592(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_593(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_594(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_595(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_596(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_597(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_598(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_599(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_600(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_601(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_602(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_603(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_eqFunction_604(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBCalculator_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


