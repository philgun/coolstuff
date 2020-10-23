/* Jacobians 8 */
#include "sCO2PBCalculator_Using_JPidea_model.h"
#include "sCO2PBCalculator_Using_JPidea_12jac.h"
OMC_DISABLE_OPT
int sCO2PBCalculator_Using_JPidea_initialAnalyticJacobianLSJac1(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int sCO2PBCalculator_Using_JPidea_initialAnalyticJacobianLSJac33(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int sCO2PBCalculator_Using_JPidea_initialAnalyticJacobianLSJac48(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int sCO2PBCalculator_Using_JPidea_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int sCO2PBCalculator_Using_JPidea_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int sCO2PBCalculator_Using_JPidea_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int sCO2PBCalculator_Using_JPidea_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int sCO2PBCalculator_Using_JPidea_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
equation index: 51
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._13._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = 2.0 * powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_51(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,51};
  jacobian->tmpVars[1] /* powerBlock.exchanger.state_HTF_des.13.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = (2.0) * (jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 52
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._12._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.13.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_52(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,52};
  jacobian->tmpVars[2] /* powerBlock.exchanger.state_HTF_des.12.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[1] /* powerBlock.exchanger.state_HTF_des.13.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 53
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._11._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.12.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_53(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,53};
  jacobian->tmpVars[3] /* powerBlock.exchanger.state_HTF_des.11.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[2] /* powerBlock.exchanger.state_HTF_des.12.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 54
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._10._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.11.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_54(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,54};
  jacobian->tmpVars[4] /* powerBlock.exchanger.state_HTF_des.10.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[3] /* powerBlock.exchanger.state_HTF_des.11.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 55
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._9._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.10.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_55(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,55};
  jacobian->tmpVars[5] /* powerBlock.exchanger.state_HTF_des.9.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[4] /* powerBlock.exchanger.state_HTF_des.10.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 56
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._8._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.9.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_56(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,56};
  jacobian->tmpVars[6] /* powerBlock.exchanger.state_HTF_des.8.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* powerBlock.exchanger.state_HTF_des.9.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 57
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._7._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.8.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_57(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,57};
  jacobian->tmpVars[7] /* powerBlock.exchanger.state_HTF_des.7.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[6] /* powerBlock.exchanger.state_HTF_des.8.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 58
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._6._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.7.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_58(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,58};
  jacobian->tmpVars[8] /* powerBlock.exchanger.state_HTF_des.6.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[7] /* powerBlock.exchanger.state_HTF_des.7.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 59
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._5._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.6.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_59(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,59};
  jacobian->tmpVars[9] /* powerBlock.exchanger.state_HTF_des.5.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[8] /* powerBlock.exchanger.state_HTF_des.6.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 60
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._4._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.5.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_60(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,60};
  jacobian->tmpVars[10] /* powerBlock.exchanger.state_HTF_des.4.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* powerBlock.exchanger.state_HTF_des.5.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 61
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._3._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.4.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_61(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,61};
  jacobian->tmpVars[11] /* powerBlock.exchanger.state_HTF_des.3.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[10] /* powerBlock.exchanger.state_HTF_des.4.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 62
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._2._h.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.3.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_62(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,62};
  jacobian->tmpVars[12] /* powerBlock.exchanger.state_HTF_des.2.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[11] /* powerBlock.exchanger.state_HTF_des.3.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 63
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524C534A616331._dummyVarLSJac1 = powerBlock.exchanger.state_HTF_des.2.h.$pDERLSJac1.dummyVarLSJac1 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_63(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,63};
  jacobian->resultVars[0] /* $res1.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_VAR */ = jacobian->tmpVars[12] /* powerBlock.exchanger.state_HTF_des.2.h.$pDERLSJac1.dummyVarLSJac1 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac1 SEED_VAR */;
  TRACE_POP
}
int sCO2PBCalculator_Using_JPidea_functionJacLSJac1_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBCalculator_Using_JPidea_INDEX_JAC_LSJac1;
  sCO2PBCalculator_Using_JPidea_eqFunction_51(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_52(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_53(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_54(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_55(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_56(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_57(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_58(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_59(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_60(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_61(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_62(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_63(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 473
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633333._dummyVarLSJac33[3] = 2.0 * powerBlock.cooler.Q_dis_des.SeedLSJac33
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_473(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,473};
  jacobian->tmpVars[1] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[3] JACOBIAN_DIFF_VAR */ = (2.0) * (jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac33 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 474
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633333._dummyVarLSJac33[4] = powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[3] + powerBlock.cooler.Q_dis_des.SeedLSJac33
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_474(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,474};
  jacobian->tmpVars[2] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[4] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[1] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[3] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 475
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633333._dummyVarLSJac33[5] = powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[4] + powerBlock.cooler.Q_dis_des.SeedLSJac33
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_475(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,475};
  jacobian->tmpVars[3] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[5] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[2] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[4] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 476
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633333._dummyVarLSJac33[6] = powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[5] + powerBlock.cooler.Q_dis_des.SeedLSJac33
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_476(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,476};
  jacobian->tmpVars[4] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[6] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[3] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[5] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 477
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633333._dummyVarLSJac33[7] = powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[6] + powerBlock.cooler.Q_dis_des.SeedLSJac33
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_477(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,477};
  jacobian->tmpVars[5] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[7] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[4] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[6] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 478
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633333._dummyVarLSJac33[8] = powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[7] + powerBlock.cooler.Q_dis_des.SeedLSJac33
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_478(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,478};
  jacobian->tmpVars[6] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[8] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[7] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 479
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633333._dummyVarLSJac33[9] = powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[8] + powerBlock.cooler.Q_dis_des.SeedLSJac33
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_479(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,479};
  jacobian->tmpVars[7] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[9] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[6] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[8] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 480
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633333._dummyVarLSJac33[10] = powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[9] + powerBlock.cooler.Q_dis_des.SeedLSJac33
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_480(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,480};
  jacobian->tmpVars[8] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[10] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[7] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[9] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 481
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633333._dummyVarLSJac33[11] = powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[10] + powerBlock.cooler.Q_dis_des.SeedLSJac33
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_481(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,481};
  jacobian->tmpVars[9] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[11] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[8] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[10] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 482
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633333._dummyVarLSJac33[12] = powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[11] + powerBlock.cooler.Q_dis_des.SeedLSJac33
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_482(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,482};
  jacobian->tmpVars[10] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[12] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[11] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 483
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633333._dummyVarLSJac33[13] = powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[12] + powerBlock.cooler.Q_dis_des.SeedLSJac33
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_483(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,483};
  jacobian->tmpVars[11] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[13] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[10] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[12] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 484
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A61633333._dummyVarLSJac33[14] = powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[13] + powerBlock.cooler.Q_dis_des.SeedLSJac33
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_484(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,484};
  jacobian->tmpVars[12] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[14] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[11] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[13] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac33 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 485
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524C534A61633333._dummyVarLSJac33 = (-powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[14]) - powerBlock.cooler.Q_dis_des.SeedLSJac33
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_485(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,485};
  jacobian->resultVars[0] /* $res1.$pDERLSJac33.dummyVarLSJac33 JACOBIAN_VAR */ = (-jacobian->tmpVars[12] /* powerBlock.cooler.h_CO2_des.$pDERLSJac33.dummyVarLSJac33[14] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac33 SEED_VAR */;
  TRACE_POP
}
int sCO2PBCalculator_Using_JPidea_functionJacLSJac33_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBCalculator_Using_JPidea_INDEX_JAC_LSJac33;
  sCO2PBCalculator_Using_JPidea_eqFunction_473(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_474(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_475(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_476(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_477(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_478(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_479(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_480(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_481(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_482(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_483(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_484(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_485(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 553
type: SIMPLE_ASSIGN
powerBlock._reCompressor._m_des.__omcQuot_24704445524C534A61633438._dummyVarLSJac48 = powerBlock.gamma * powerBlock.LTR.m_turb_des.SeedLSJac48
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_553(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,553};
  jacobian->tmpVars[1] /* powerBlock.reCompressor.m_des.$pDERLSJac48.dummyVarLSJac48 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[587] /* powerBlock.gamma PARAM */) * (jacobian->seedVars[0] /* powerBlock.LTR.m_turb_des.SeedLSJac48 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 554
type: SIMPLE_ASSIGN
powerBlock._reCompressor._W_comp_des.__omcQuot_24704445524C534A61633438._dummyVarLSJac48 = powerBlock.reCompressor.m_des.$pDERLSJac48.dummyVarLSJac48 * (powerBlock.reCompressor.h_out_des - powerBlock.reCompressor.state_in_des.h)
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_554(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,554};
  jacobian->tmpVars[2] /* powerBlock.reCompressor.W_comp_des.$pDERLSJac48.dummyVarLSJac48 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[1] /* powerBlock.reCompressor.m_des.$pDERLSJac48.dummyVarLSJac48 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[630] /* powerBlock.reCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[637] /* powerBlock.reCompressor.state_in_des.h PARAM */);
  TRACE_POP
}

/*
equation index: 555
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._m_des.__omcQuot_24704445524C534A61633438._dummyVarLSJac48 = powerBlock.LTR.m_turb_des.SeedLSJac48 * powerBlock.ratio_m_des
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_555(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,555};
  jacobian->tmpVars[3] /* powerBlock.mainCompressor.m_des.$pDERLSJac48.dummyVarLSJac48 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[0] /* powerBlock.LTR.m_turb_des.SeedLSJac48 SEED_VAR */) * (data->simulationInfo->realParameter[620] /* powerBlock.ratio_m_des PARAM */);
  TRACE_POP
}

/*
equation index: 556
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._W_comp_des.__omcQuot_24704445524C534A61633438._dummyVarLSJac48 = powerBlock.mainCompressor.m_des.$pDERLSJac48.dummyVarLSJac48 * (powerBlock.mainCompressor.h_out_des - powerBlock.mainCompressor.state_in_des.h)
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_556(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,556};
  jacobian->tmpVars[4] /* powerBlock.mainCompressor.W_comp_des.$pDERLSJac48.dummyVarLSJac48 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[3] /* powerBlock.mainCompressor.m_des.$pDERLSJac48.dummyVarLSJac48 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[597] /* powerBlock.mainCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[604] /* powerBlock.mainCompressor.state_in_des.h PARAM */);
  TRACE_POP
}

/*
equation index: 557
type: SIMPLE_ASSIGN
powerBlock._turbine._W_turb_des.__omcQuot_24704445524C534A61633438._dummyVarLSJac48 = ((-powerBlock.reCompressor.W_comp_des.$pDERLSJac48.dummyVarLSJac48) - powerBlock.mainCompressor.W_comp_des.$pDERLSJac48.dummyVarLSJac48) * (1.0 - powerBlock.par_fr) * powerBlock.eta_motor / (powerBlock.eta_motor * (1.0 - powerBlock.par_fr))
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_557(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,557};
  jacobian->tmpVars[5] /* powerBlock.turbine.W_turb_des.$pDERLSJac48.dummyVarLSJac48 JACOBIAN_DIFF_VAR */ = DIVISION((((-jacobian->tmpVars[2] /* powerBlock.reCompressor.W_comp_des.$pDERLSJac48.dummyVarLSJac48 JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[4] /* powerBlock.mainCompressor.W_comp_des.$pDERLSJac48.dummyVarLSJac48 JACOBIAN_DIFF_VAR */) * (1.0 - data->simulationInfo->realParameter[611] /* powerBlock.par_fr PARAM */)) * (data->simulationInfo->realParameter[427] /* powerBlock.eta_motor PARAM */),(data->simulationInfo->realParameter[427] /* powerBlock.eta_motor PARAM */) * (1.0 - data->simulationInfo->realParameter[611] /* powerBlock.par_fr PARAM */),"powerBlock.eta_motor * (1.0 - powerBlock.par_fr)");
  TRACE_POP
}

/*
equation index: 558
type: SIMPLE_ASSIGN
powerBlock._turbine._m_des.__omcQuot_24704445524C534A61633438._dummyVarLSJac48 = powerBlock.turbine.W_turb_des.$pDERLSJac48.dummyVarLSJac48 / (powerBlock.turbine.h_out_des - powerBlock.turbine.state_in_des.h)
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_558(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,558};
  jacobian->tmpVars[6] /* powerBlock.turbine.m_des.$pDERLSJac48.dummyVarLSJac48 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[5] /* powerBlock.turbine.W_turb_des.$pDERLSJac48.dummyVarLSJac48 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[655] /* powerBlock.turbine.h_out_des PARAM */ - data->simulationInfo->realParameter[659] /* powerBlock.turbine.state_in_des.h PARAM */,"powerBlock.turbine.h_out_des - powerBlock.turbine.state_in_des.h");
  TRACE_POP
}

/*
equation index: 559
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524C534A61633438._dummyVarLSJac48 = powerBlock.turbine.m_des.$pDERLSJac48.dummyVarLSJac48 - powerBlock.LTR.m_turb_des.SeedLSJac48
*/
void sCO2PBCalculator_Using_JPidea_eqFunction_559(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,559};
  jacobian->resultVars[0] /* $res1.$pDERLSJac48.dummyVarLSJac48 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* powerBlock.turbine.m_des.$pDERLSJac48.dummyVarLSJac48 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[0] /* powerBlock.LTR.m_turb_des.SeedLSJac48 SEED_VAR */;
  TRACE_POP
}
int sCO2PBCalculator_Using_JPidea_functionJacLSJac48_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBCalculator_Using_JPidea_INDEX_JAC_LSJac48;
  sCO2PBCalculator_Using_JPidea_eqFunction_553(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_554(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_555(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_556(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_557(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_558(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_JPidea_eqFunction_559(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_Using_JPidea_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_Using_JPidea_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_Using_JPidea_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_Using_JPidea_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_Using_JPidea_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBCalculator_Using_JPidea_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


