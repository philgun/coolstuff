/* Jacobians 9 */
#include "sCO2PBRig_model.h"
#include "sCO2PBRig_12jac.h"
OMC_DISABLE_OPT
int sCO2PBRig_initialAnalyticJacobianLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int sCO2PBRig_initialAnalyticJacobianNLSJac20(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
OMC_DISABLE_OPT
int sCO2PBRig_initialAnalyticJacobianLSJac35(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int sCO2PBRig_initialAnalyticJacobianLSJac49(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int sCO2PBRig_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int sCO2PBRig_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int sCO2PBRig_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int sCO2PBRig_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int sCO2PBRig_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
void sCO2PBRig_eqFunction_52(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
void sCO2PBRig_eqFunction_53(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
void sCO2PBRig_eqFunction_54(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
void sCO2PBRig_eqFunction_55(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
void sCO2PBRig_eqFunction_56(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
void sCO2PBRig_eqFunction_57(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
void sCO2PBRig_eqFunction_58(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
void sCO2PBRig_eqFunction_59(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
void sCO2PBRig_eqFunction_60(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
void sCO2PBRig_eqFunction_61(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
void sCO2PBRig_eqFunction_62(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
void sCO2PBRig_eqFunction_63(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
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
void sCO2PBRig_eqFunction_64(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,64};
  jacobian->resultVars[0] /* $res1.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_VAR */ = (-jacobian->tmpVars[12] /* powerBlock.exchanger.state_HTF_des.14.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[2].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}
int sCO2PBRig_functionJacLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBRig_INDEX_JAC_LSJac1;
  sCO2PBRig_eqFunction_52(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_53(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_54(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_55(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_56(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_57(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_58(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_59(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_60(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_61(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_62(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_63(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_64(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 420
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524E4C534A61633230._dummyVarNLSJac20 = powerBlock.exchanger.ratio_m_des * powerBlock.exchanger.state_CO2_des[2].h.SeedNLSJac20 + powerBlock.exchanger.ratio_m_des.SeedNLSJac20 * (powerBlock.exchanger.state_CO2_des[2].h - powerBlock.exchanger.state_CO2_des[1].h)
*/
void sCO2PBRig_eqFunction_420(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,420};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac20.dummyVarNLSJac20 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[13] /* powerBlock.exchanger.state_CO2_des[2].h.SeedNLSJac20 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac20 SEED_VAR */) * (data->simulationInfo->realParameter[508] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */ - data->simulationInfo->realParameter[507] /* powerBlock.exchanger.state_CO2_des[1].h PARAM */);
  TRACE_POP
}

/*
equation index: 421
type: SIMPLE_ASSIGN
_omcQuot_2472657332.__omcQuot_24704445524E4C534A61633230._dummyVarNLSJac20 = powerBlock.exchanger.ratio_m_des.SeedNLSJac20 * (powerBlock.exchanger.state_CO2_des[15].h - powerBlock.exchanger.state_CO2_des[14].h) - powerBlock.exchanger.ratio_m_des * powerBlock.exchanger.state_CO2_des[14].h.SeedNLSJac20
*/
void sCO2PBRig_eqFunction_421(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,421};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac20.dummyVarNLSJac20 JACOBIAN_VAR */ = (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac20 SEED_VAR */) * (data->simulationInfo->realParameter[521] /* powerBlock.exchanger.state_CO2_des[15].h PARAM */ - data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */) - ((data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[1] /* powerBlock.exchanger.state_CO2_des[14].h.SeedNLSJac20 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 422
type: SIMPLE_ASSIGN
_omcQuot_2472657333.__omcQuot_24704445524E4C534A61633230._dummyVarNLSJac20 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[14].h.SeedNLSJac20 - powerBlock.exchanger.state_CO2_des[13].h.SeedNLSJac20) + powerBlock.exchanger.ratio_m_des.SeedNLSJac20 * (powerBlock.exchanger.state_CO2_des[14].h - powerBlock.exchanger.state_CO2_des[13].h)
*/
void sCO2PBRig_eqFunction_422(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,422};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac20.dummyVarNLSJac20 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[1] /* powerBlock.exchanger.state_CO2_des[14].h.SeedNLSJac20 SEED_VAR */ - jacobian->seedVars[2] /* powerBlock.exchanger.state_CO2_des[13].h.SeedNLSJac20 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac20 SEED_VAR */) * (data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */ - data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */);
  TRACE_POP
}

/*
equation index: 423
type: SIMPLE_ASSIGN
_omcQuot_2472657334.__omcQuot_24704445524E4C534A61633230._dummyVarNLSJac20 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[13].h.SeedNLSJac20 - powerBlock.exchanger.state_CO2_des[12].h.SeedNLSJac20) + powerBlock.exchanger.ratio_m_des.SeedNLSJac20 * (powerBlock.exchanger.state_CO2_des[13].h - powerBlock.exchanger.state_CO2_des[12].h)
*/
void sCO2PBRig_eqFunction_423(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,423};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac20.dummyVarNLSJac20 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[2] /* powerBlock.exchanger.state_CO2_des[13].h.SeedNLSJac20 SEED_VAR */ - jacobian->seedVars[3] /* powerBlock.exchanger.state_CO2_des[12].h.SeedNLSJac20 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac20 SEED_VAR */) * (data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */ - data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */);
  TRACE_POP
}

/*
equation index: 424
type: SIMPLE_ASSIGN
_omcQuot_2472657335.__omcQuot_24704445524E4C534A61633230._dummyVarNLSJac20 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[12].h.SeedNLSJac20 - powerBlock.exchanger.state_CO2_des[11].h.SeedNLSJac20) + powerBlock.exchanger.ratio_m_des.SeedNLSJac20 * (powerBlock.exchanger.state_CO2_des[12].h - powerBlock.exchanger.state_CO2_des[11].h)
*/
void sCO2PBRig_eqFunction_424(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,424};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac20.dummyVarNLSJac20 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[3] /* powerBlock.exchanger.state_CO2_des[12].h.SeedNLSJac20 SEED_VAR */ - jacobian->seedVars[4] /* powerBlock.exchanger.state_CO2_des[11].h.SeedNLSJac20 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac20 SEED_VAR */) * (data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */ - data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */);
  TRACE_POP
}

/*
equation index: 425
type: SIMPLE_ASSIGN
_omcQuot_2472657336.__omcQuot_24704445524E4C534A61633230._dummyVarNLSJac20 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[11].h.SeedNLSJac20 - powerBlock.exchanger.state_CO2_des[10].h.SeedNLSJac20) + powerBlock.exchanger.ratio_m_des.SeedNLSJac20 * (powerBlock.exchanger.state_CO2_des[11].h - powerBlock.exchanger.state_CO2_des[10].h)
*/
void sCO2PBRig_eqFunction_425(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,425};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac20.dummyVarNLSJac20 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[4] /* powerBlock.exchanger.state_CO2_des[11].h.SeedNLSJac20 SEED_VAR */ - jacobian->seedVars[5] /* powerBlock.exchanger.state_CO2_des[10].h.SeedNLSJac20 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac20 SEED_VAR */) * (data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */ - data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */);
  TRACE_POP
}

/*
equation index: 426
type: SIMPLE_ASSIGN
_omcQuot_2472657337.__omcQuot_24704445524E4C534A61633230._dummyVarNLSJac20 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[10].h.SeedNLSJac20 - powerBlock.exchanger.state_CO2_des[9].h.SeedNLSJac20) + powerBlock.exchanger.ratio_m_des.SeedNLSJac20 * (powerBlock.exchanger.state_CO2_des[10].h - powerBlock.exchanger.state_CO2_des[9].h)
*/
void sCO2PBRig_eqFunction_426(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,426};
  jacobian->resultVars[6] /* $res7.$pDERNLSJac20.dummyVarNLSJac20 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[5] /* powerBlock.exchanger.state_CO2_des[10].h.SeedNLSJac20 SEED_VAR */ - jacobian->seedVars[6] /* powerBlock.exchanger.state_CO2_des[9].h.SeedNLSJac20 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac20 SEED_VAR */) * (data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */ - data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */);
  TRACE_POP
}

/*
equation index: 427
type: SIMPLE_ASSIGN
_omcQuot_2472657338.__omcQuot_24704445524E4C534A61633230._dummyVarNLSJac20 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[9].h.SeedNLSJac20 - powerBlock.exchanger.state_CO2_des[8].h.SeedNLSJac20) + powerBlock.exchanger.ratio_m_des.SeedNLSJac20 * (powerBlock.exchanger.state_CO2_des[9].h - powerBlock.exchanger.state_CO2_des[8].h)
*/
void sCO2PBRig_eqFunction_427(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,427};
  jacobian->resultVars[7] /* $res8.$pDERNLSJac20.dummyVarNLSJac20 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[6] /* powerBlock.exchanger.state_CO2_des[9].h.SeedNLSJac20 SEED_VAR */ - jacobian->seedVars[7] /* powerBlock.exchanger.state_CO2_des[8].h.SeedNLSJac20 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac20 SEED_VAR */) * (data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */ - data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */);
  TRACE_POP
}

/*
equation index: 428
type: SIMPLE_ASSIGN
_omcQuot_2472657339.__omcQuot_24704445524E4C534A61633230._dummyVarNLSJac20 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[8].h.SeedNLSJac20 - powerBlock.exchanger.state_CO2_des[7].h.SeedNLSJac20) + powerBlock.exchanger.ratio_m_des.SeedNLSJac20 * (powerBlock.exchanger.state_CO2_des[8].h - powerBlock.exchanger.state_CO2_des[7].h)
*/
void sCO2PBRig_eqFunction_428(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,428};
  jacobian->resultVars[8] /* $res9.$pDERNLSJac20.dummyVarNLSJac20 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[7] /* powerBlock.exchanger.state_CO2_des[8].h.SeedNLSJac20 SEED_VAR */ - jacobian->seedVars[8] /* powerBlock.exchanger.state_CO2_des[7].h.SeedNLSJac20 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac20 SEED_VAR */) * (data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */ - data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */);
  TRACE_POP
}

/*
equation index: 429
type: SIMPLE_ASSIGN
_omcQuot_247265733130.__omcQuot_24704445524E4C534A61633230._dummyVarNLSJac20 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[7].h.SeedNLSJac20 - powerBlock.exchanger.state_CO2_des[6].h.SeedNLSJac20) + powerBlock.exchanger.ratio_m_des.SeedNLSJac20 * (powerBlock.exchanger.state_CO2_des[7].h - powerBlock.exchanger.state_CO2_des[6].h)
*/
void sCO2PBRig_eqFunction_429(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,429};
  jacobian->resultVars[9] /* $res10.$pDERNLSJac20.dummyVarNLSJac20 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[8] /* powerBlock.exchanger.state_CO2_des[7].h.SeedNLSJac20 SEED_VAR */ - jacobian->seedVars[9] /* powerBlock.exchanger.state_CO2_des[6].h.SeedNLSJac20 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac20 SEED_VAR */) * (data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */ - data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */);
  TRACE_POP
}

/*
equation index: 430
type: SIMPLE_ASSIGN
_omcQuot_247265733131.__omcQuot_24704445524E4C534A61633230._dummyVarNLSJac20 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[6].h.SeedNLSJac20 - powerBlock.exchanger.state_CO2_des[5].h.SeedNLSJac20) + powerBlock.exchanger.ratio_m_des.SeedNLSJac20 * (powerBlock.exchanger.state_CO2_des[6].h - powerBlock.exchanger.state_CO2_des[5].h)
*/
void sCO2PBRig_eqFunction_430(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,430};
  jacobian->resultVars[10] /* $res11.$pDERNLSJac20.dummyVarNLSJac20 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[9] /* powerBlock.exchanger.state_CO2_des[6].h.SeedNLSJac20 SEED_VAR */ - jacobian->seedVars[10] /* powerBlock.exchanger.state_CO2_des[5].h.SeedNLSJac20 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac20 SEED_VAR */) * (data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */ - data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */);
  TRACE_POP
}

/*
equation index: 431
type: SIMPLE_ASSIGN
_omcQuot_247265733132.__omcQuot_24704445524E4C534A61633230._dummyVarNLSJac20 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[5].h.SeedNLSJac20 - powerBlock.exchanger.state_CO2_des[4].h.SeedNLSJac20) + powerBlock.exchanger.ratio_m_des.SeedNLSJac20 * (powerBlock.exchanger.state_CO2_des[5].h - powerBlock.exchanger.state_CO2_des[4].h)
*/
void sCO2PBRig_eqFunction_431(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,431};
  jacobian->resultVars[11] /* $res12.$pDERNLSJac20.dummyVarNLSJac20 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[10] /* powerBlock.exchanger.state_CO2_des[5].h.SeedNLSJac20 SEED_VAR */ - jacobian->seedVars[11] /* powerBlock.exchanger.state_CO2_des[4].h.SeedNLSJac20 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac20 SEED_VAR */) * (data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */ - data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */);
  TRACE_POP
}

/*
equation index: 432
type: SIMPLE_ASSIGN
_omcQuot_247265733133.__omcQuot_24704445524E4C534A61633230._dummyVarNLSJac20 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[4].h.SeedNLSJac20 - powerBlock.exchanger.state_CO2_des[3].h.SeedNLSJac20) + powerBlock.exchanger.ratio_m_des.SeedNLSJac20 * (powerBlock.exchanger.state_CO2_des[4].h - powerBlock.exchanger.state_CO2_des[3].h)
*/
void sCO2PBRig_eqFunction_432(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,432};
  jacobian->resultVars[12] /* $res13.$pDERNLSJac20.dummyVarNLSJac20 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[11] /* powerBlock.exchanger.state_CO2_des[4].h.SeedNLSJac20 SEED_VAR */ - jacobian->seedVars[12] /* powerBlock.exchanger.state_CO2_des[3].h.SeedNLSJac20 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac20 SEED_VAR */) * (data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */ - data->simulationInfo->realParameter[509] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */);
  TRACE_POP
}

/*
equation index: 433
type: SIMPLE_ASSIGN
_omcQuot_247265733134.__omcQuot_24704445524E4C534A61633230._dummyVarNLSJac20 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[3].h.SeedNLSJac20 - powerBlock.exchanger.state_CO2_des[2].h.SeedNLSJac20) + powerBlock.exchanger.ratio_m_des.SeedNLSJac20 * (powerBlock.exchanger.state_CO2_des[3].h - powerBlock.exchanger.state_CO2_des[2].h)
*/
void sCO2PBRig_eqFunction_433(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,433};
  jacobian->resultVars[13] /* $res14.$pDERNLSJac20.dummyVarNLSJac20 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[506] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[12] /* powerBlock.exchanger.state_CO2_des[3].h.SeedNLSJac20 SEED_VAR */ - jacobian->seedVars[13] /* powerBlock.exchanger.state_CO2_des[2].h.SeedNLSJac20 SEED_VAR */) + (jacobian->seedVars[0] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac20 SEED_VAR */) * (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */ - data->simulationInfo->realParameter[508] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */);
  TRACE_POP
}
int sCO2PBRig_functionJacNLSJac20_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBRig_INDEX_JAC_NLSJac20;
  sCO2PBRig_eqFunction_420(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_421(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_422(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_423(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_424(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_425(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_426(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_427(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_428(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_429(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_430(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_431(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_432(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_433(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 495
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633335._dummyVarLSJac35[3] = 2.0 * powerBlock.cooler.Q_dis_des.SeedLSJac35
*/
void sCO2PBRig_eqFunction_495(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,495};
  jacobian->tmpVars[1] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[3] JACOBIAN_DIFF_VAR */ = (2.0) * (jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac35 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 496
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633335._dummyVarLSJac35[4] = powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[3] + powerBlock.cooler.Q_dis_des.SeedLSJac35
*/
void sCO2PBRig_eqFunction_496(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,496};
  jacobian->tmpVars[2] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[4] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[1] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[3] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 497
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633335._dummyVarLSJac35[5] = powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[4] + powerBlock.cooler.Q_dis_des.SeedLSJac35
*/
void sCO2PBRig_eqFunction_497(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,497};
  jacobian->tmpVars[3] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[5] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[2] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[4] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 498
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633335._dummyVarLSJac35[6] = powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[5] + powerBlock.cooler.Q_dis_des.SeedLSJac35
*/
void sCO2PBRig_eqFunction_498(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,498};
  jacobian->tmpVars[4] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[6] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[3] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[5] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 499
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633335._dummyVarLSJac35[7] = powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[6] + powerBlock.cooler.Q_dis_des.SeedLSJac35
*/
void sCO2PBRig_eqFunction_499(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,499};
  jacobian->tmpVars[5] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[7] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[4] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[6] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 500
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633335._dummyVarLSJac35[8] = powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[7] + powerBlock.cooler.Q_dis_des.SeedLSJac35
*/
void sCO2PBRig_eqFunction_500(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,500};
  jacobian->tmpVars[6] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[8] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[7] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 501
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633335._dummyVarLSJac35[9] = powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[8] + powerBlock.cooler.Q_dis_des.SeedLSJac35
*/
void sCO2PBRig_eqFunction_501(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,501};
  jacobian->tmpVars[7] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[9] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[6] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[8] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 502
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633335._dummyVarLSJac35[10] = powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[9] + powerBlock.cooler.Q_dis_des.SeedLSJac35
*/
void sCO2PBRig_eqFunction_502(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,502};
  jacobian->tmpVars[8] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[10] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[7] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[9] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 503
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633335._dummyVarLSJac35[11] = powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[10] + powerBlock.cooler.Q_dis_des.SeedLSJac35
*/
void sCO2PBRig_eqFunction_503(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,503};
  jacobian->tmpVars[9] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[11] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[8] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[10] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 504
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633335._dummyVarLSJac35[12] = powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[11] + powerBlock.cooler.Q_dis_des.SeedLSJac35
*/
void sCO2PBRig_eqFunction_504(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,504};
  jacobian->tmpVars[10] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[12] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[11] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 505
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633335._dummyVarLSJac35[13] = powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[12] + powerBlock.cooler.Q_dis_des.SeedLSJac35
*/
void sCO2PBRig_eqFunction_505(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,505};
  jacobian->tmpVars[11] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[13] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[10] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[12] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 506
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633335._dummyVarLSJac35[14] = powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[13] + powerBlock.cooler.Q_dis_des.SeedLSJac35
*/
void sCO2PBRig_eqFunction_506(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,506};
  jacobian->tmpVars[12] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[14] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[11] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[13] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac35 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 507
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524C534A61633335._dummyVarLSJac35 = (-powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[14]) - powerBlock.cooler.Q_dis_des.SeedLSJac35
*/
void sCO2PBRig_eqFunction_507(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,507};
  jacobian->resultVars[0] /* $res1.$pDERLSJac35.dummyVarLSJac35 JACOBIAN_VAR */ = (-jacobian->tmpVars[12] /* powerBlock.cooler.h_CO2_des.$pDERLSJac35.dummyVarLSJac35[14] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac35 SEED_VAR */;
  TRACE_POP
}
int sCO2PBRig_functionJacLSJac35_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBRig_INDEX_JAC_LSJac35;
  sCO2PBRig_eqFunction_495(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_496(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_497(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_498(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_499(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_500(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_501(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_502(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_503(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_504(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_505(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_506(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_507(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 570
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._m_des.__omcQuot_24704445524C534A61633439._dummyVarLSJac49 = powerBlock.LTR.m_turb_des.SeedLSJac49 * powerBlock.ratio_m_des
*/
void sCO2PBRig_eqFunction_570(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,570};
  jacobian->tmpVars[3] /* powerBlock.mainCompressor.m_des.$pDERLSJac49.dummyVarLSJac49 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[0] /* powerBlock.LTR.m_turb_des.SeedLSJac49 SEED_VAR */) * (data->simulationInfo->realParameter[617] /* powerBlock.ratio_m_des PARAM */);
  TRACE_POP
}

/*
equation index: 571
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._W_comp_des.__omcQuot_24704445524C534A61633439._dummyVarLSJac49 = powerBlock.mainCompressor.m_des.$pDERLSJac49.dummyVarLSJac49 * (powerBlock.mainCompressor.h_out_des - powerBlock.mainCompressor.state_in_des.h)
*/
void sCO2PBRig_eqFunction_571(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,571};
  jacobian->tmpVars[4] /* powerBlock.mainCompressor.W_comp_des.$pDERLSJac49.dummyVarLSJac49 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[3] /* powerBlock.mainCompressor.m_des.$pDERLSJac49.dummyVarLSJac49 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[595] /* powerBlock.mainCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[602] /* powerBlock.mainCompressor.state_in_des.h PARAM */);
  TRACE_POP
}

/*
equation index: 572
type: SIMPLE_ASSIGN
powerBlock._reCompressor._m_des.__omcQuot_24704445524C534A61633439._dummyVarLSJac49 = powerBlock.gamma * powerBlock.LTR.m_turb_des.SeedLSJac49
*/
void sCO2PBRig_eqFunction_572(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,572};
  jacobian->tmpVars[0] /* powerBlock.reCompressor.m_des.$pDERLSJac49.dummyVarLSJac49 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[585] /* powerBlock.gamma PARAM */) * (jacobian->seedVars[0] /* powerBlock.LTR.m_turb_des.SeedLSJac49 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 573
type: SIMPLE_ASSIGN
powerBlock._reCompressor._W_comp_des.__omcQuot_24704445524C534A61633439._dummyVarLSJac49 = powerBlock.reCompressor.m_des.$pDERLSJac49.dummyVarLSJac49 * (powerBlock.reCompressor.h_out_des - powerBlock.reCompressor.state_in_des.h)
*/
void sCO2PBRig_eqFunction_573(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,573};
  jacobian->tmpVars[1] /* powerBlock.reCompressor.W_comp_des.$pDERLSJac49.dummyVarLSJac49 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[0] /* powerBlock.reCompressor.m_des.$pDERLSJac49.dummyVarLSJac49 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[627] /* powerBlock.reCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[634] /* powerBlock.reCompressor.state_in_des.h PARAM */);
  TRACE_POP
}

/*
equation index: 574
type: SIMPLE_ASSIGN
powerBlock._turbine._W_turb_des.__omcQuot_24704445524C534A61633439._dummyVarLSJac49 = ((-powerBlock.reCompressor.W_comp_des.$pDERLSJac49.dummyVarLSJac49) - powerBlock.mainCompressor.W_comp_des.$pDERLSJac49.dummyVarLSJac49) * (1.0 - powerBlock.par_fr) * powerBlock.eta_motor / (powerBlock.eta_motor * (1.0 - powerBlock.par_fr))
*/
void sCO2PBRig_eqFunction_574(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,574};
  jacobian->tmpVars[5] /* powerBlock.turbine.W_turb_des.$pDERLSJac49.dummyVarLSJac49 JACOBIAN_DIFF_VAR */ = DIVISION((((-jacobian->tmpVars[1] /* powerBlock.reCompressor.W_comp_des.$pDERLSJac49.dummyVarLSJac49 JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[4] /* powerBlock.mainCompressor.W_comp_des.$pDERLSJac49.dummyVarLSJac49 JACOBIAN_DIFF_VAR */) * (1.0 - data->simulationInfo->realParameter[609] /* powerBlock.par_fr PARAM */)) * (data->simulationInfo->realParameter[427] /* powerBlock.eta_motor PARAM */),(data->simulationInfo->realParameter[427] /* powerBlock.eta_motor PARAM */) * (1.0 - data->simulationInfo->realParameter[609] /* powerBlock.par_fr PARAM */),"powerBlock.eta_motor * (1.0 - powerBlock.par_fr)");
  TRACE_POP
}

/*
equation index: 575
type: SIMPLE_ASSIGN
powerBlock._turbine._m_des.__omcQuot_24704445524C534A61633439._dummyVarLSJac49 = powerBlock.turbine.W_turb_des.$pDERLSJac49.dummyVarLSJac49 / (powerBlock.turbine.h_out_des - powerBlock.turbine.state_in_des.h)
*/
void sCO2PBRig_eqFunction_575(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,575};
  jacobian->tmpVars[6] /* powerBlock.turbine.m_des.$pDERLSJac49.dummyVarLSJac49 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[5] /* powerBlock.turbine.W_turb_des.$pDERLSJac49.dummyVarLSJac49 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[652] /* powerBlock.turbine.h_out_des PARAM */ - data->simulationInfo->realParameter[656] /* powerBlock.turbine.state_in_des.h PARAM */,"powerBlock.turbine.h_out_des - powerBlock.turbine.state_in_des.h");
  TRACE_POP
}

/*
equation index: 576
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524C534A61633439._dummyVarLSJac49 = powerBlock.turbine.m_des.$pDERLSJac49.dummyVarLSJac49 - powerBlock.LTR.m_turb_des.SeedLSJac49
*/
void sCO2PBRig_eqFunction_576(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,576};
  jacobian->resultVars[0] /* $res1.$pDERLSJac49.dummyVarLSJac49 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* powerBlock.turbine.m_des.$pDERLSJac49.dummyVarLSJac49 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[0] /* powerBlock.LTR.m_turb_des.SeedLSJac49 SEED_VAR */;
  TRACE_POP
}
int sCO2PBRig_functionJacLSJac49_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBRig_INDEX_JAC_LSJac49;
  sCO2PBRig_eqFunction_570(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_571(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_572(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_573(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_574(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_575(data, threadData, jacobian, parentJacobian);

  sCO2PBRig_eqFunction_576(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int sCO2PBRig_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBRig_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBRig_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBRig_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBRig_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBRig_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


