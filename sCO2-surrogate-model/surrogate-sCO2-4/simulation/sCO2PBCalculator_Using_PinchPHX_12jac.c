/* Jacobians 9 */
#include "sCO2PBCalculator_Using_PinchPHX_model.h"
#include "sCO2PBCalculator_Using_PinchPHX_12jac.h"
OMC_DISABLE_OPT
int sCO2PBCalculator_Using_PinchPHX_initialAnalyticJacobianLSJac6(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int sCO2PBCalculator_Using_PinchPHX_initialAnalyticJacobianLSJac20(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int sCO2PBCalculator_Using_PinchPHX_initialAnalyticJacobianLSJac22(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
int sCO2PBCalculator_Using_PinchPHX_initialAnalyticJacobianNLSJac36(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  DATA* data = ((DATA*)inData);
  const int colPtrIndex[1+14] = {0,2,2,2,2,2,2,2,2,2,2,2,14,2,2};
  const int rowIndex[40] = {0,1,1,2,2,3,3,4,4,5,5,6,6,7,7,8,8,9,9,10,10,11,0,1,2,3,4,5,6,7,8,9,10,11,12,13,12,13,11,13};
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
  jacobian->sparsePattern->colorCols[11] = 1;
  jacobian->sparsePattern->colorCols[1] = 2;
  jacobian->sparsePattern->colorCols[3] = 2;
  jacobian->sparsePattern->colorCols[5] = 2;
  jacobian->sparsePattern->colorCols[7] = 2;
  jacobian->sparsePattern->colorCols[9] = 2;
  jacobian->sparsePattern->colorCols[13] = 2;
  jacobian->sparsePattern->colorCols[0] = 3;
  jacobian->sparsePattern->colorCols[2] = 3;
  jacobian->sparsePattern->colorCols[4] = 3;
  jacobian->sparsePattern->colorCols[6] = 3;
  jacobian->sparsePattern->colorCols[8] = 3;
  jacobian->sparsePattern->colorCols[10] = 3;
  jacobian->sparsePattern->colorCols[12] = 3;
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_Using_PinchPHX_initialAnalyticJacobianF(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int sCO2PBCalculator_Using_PinchPHX_initialAnalyticJacobianD(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int sCO2PBCalculator_Using_PinchPHX_initialAnalyticJacobianC(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
int sCO2PBCalculator_Using_PinchPHX_initialAnalyticJacobianB(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 1;
}
OMC_DISABLE_OPT
int sCO2PBCalculator_Using_PinchPHX_initialAnalyticJacobianA(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian)
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
equation index: 362
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A616336._dummyVarLSJac6[3] = 2.0 * powerBlock.cooler.Q_dis_des.SeedLSJac6
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_362(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,362};
  jacobian->tmpVars[1] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[3] JACOBIAN_DIFF_VAR */ = (2.0) * (jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac6 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 363
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A616336._dummyVarLSJac6[4] = powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[3] + powerBlock.cooler.Q_dis_des.SeedLSJac6
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_363(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,363};
  jacobian->tmpVars[2] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[4] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[1] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[3] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac6 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 364
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A616336._dummyVarLSJac6[5] = powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[4] + powerBlock.cooler.Q_dis_des.SeedLSJac6
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_364(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,364};
  jacobian->tmpVars[3] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[5] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[2] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[4] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac6 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 365
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A616336._dummyVarLSJac6[6] = powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[5] + powerBlock.cooler.Q_dis_des.SeedLSJac6
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_365(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,365};
  jacobian->tmpVars[4] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[6] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[3] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[5] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac6 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 366
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A616336._dummyVarLSJac6[7] = powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[6] + powerBlock.cooler.Q_dis_des.SeedLSJac6
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_366(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,366};
  jacobian->tmpVars[5] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[7] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[4] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[6] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac6 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 367
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A616336._dummyVarLSJac6[8] = powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[7] + powerBlock.cooler.Q_dis_des.SeedLSJac6
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_367(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,367};
  jacobian->tmpVars[6] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[8] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[7] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac6 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 368
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A616336._dummyVarLSJac6[9] = powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[8] + powerBlock.cooler.Q_dis_des.SeedLSJac6
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_368(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,368};
  jacobian->tmpVars[7] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[9] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[6] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[8] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac6 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 369
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A616336._dummyVarLSJac6[10] = powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[9] + powerBlock.cooler.Q_dis_des.SeedLSJac6
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_369(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,369};
  jacobian->tmpVars[8] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[10] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[7] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[9] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac6 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 370
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A616336._dummyVarLSJac6[11] = powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[10] + powerBlock.cooler.Q_dis_des.SeedLSJac6
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_370(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,370};
  jacobian->tmpVars[9] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[11] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[8] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[10] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac6 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 371
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A616336._dummyVarLSJac6[12] = powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[11] + powerBlock.cooler.Q_dis_des.SeedLSJac6
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_371(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,371};
  jacobian->tmpVars[10] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[12] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[11] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac6 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 372
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A616336._dummyVarLSJac6[13] = powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[12] + powerBlock.cooler.Q_dis_des.SeedLSJac6
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_372(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,372};
  jacobian->tmpVars[11] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[13] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[10] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[12] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac6 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 373
type: SIMPLE_ASSIGN
powerBlock._cooler._h_CO2_des.__omcQuot_24704445524C534A616336._dummyVarLSJac6[14] = powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[13] + powerBlock.cooler.Q_dis_des.SeedLSJac6
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_373(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,373};
  jacobian->tmpVars[12] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[14] JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[11] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[13] JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac6 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 374
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524C534A616336._dummyVarLSJac6 = (-powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[14]) - powerBlock.cooler.Q_dis_des.SeedLSJac6
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_374(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,374};
  jacobian->resultVars[0] /* $res1.$pDERLSJac6.dummyVarLSJac6 JACOBIAN_VAR */ = (-jacobian->tmpVars[12] /* powerBlock.cooler.h_CO2_des.$pDERLSJac6.dummyVarLSJac6[14] JACOBIAN_DIFF_VAR */) - jacobian->seedVars[0] /* powerBlock.cooler.Q_dis_des.SeedLSJac6 SEED_VAR */;
  TRACE_POP
}
int sCO2PBCalculator_Using_PinchPHX_functionJacLSJac6_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBCalculator_Using_PinchPHX_INDEX_JAC_LSJac6;
  sCO2PBCalculator_Using_PinchPHX_eqFunction_362(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_363(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_364(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_365(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_366(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_367(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_368(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_369(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_370(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_371(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_372(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_373(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_374(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 437
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._m_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20 = powerBlock.LTR.m_turb_des.SeedLSJac20 * powerBlock.ratio_m_des
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_437(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,437};
  jacobian->tmpVars[3] /* powerBlock.mainCompressor.m_des.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_DIFF_VAR */ = (jacobian->seedVars[0] /* powerBlock.LTR.m_turb_des.SeedLSJac20 SEED_VAR */) * (data->simulationInfo->realParameter[619] /* powerBlock.ratio_m_des PARAM */);
  TRACE_POP
}

/*
equation index: 438
type: SIMPLE_ASSIGN
powerBlock._mainCompressor._W_comp_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20 = powerBlock.mainCompressor.m_des.$pDERLSJac20.dummyVarLSJac20 * (powerBlock.mainCompressor.h_out_des - powerBlock.mainCompressor.state_in_des.h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_438(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,438};
  jacobian->tmpVars[4] /* powerBlock.mainCompressor.W_comp_des.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[3] /* powerBlock.mainCompressor.m_des.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[596] /* powerBlock.mainCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[603] /* powerBlock.mainCompressor.state_in_des.h PARAM */);
  TRACE_POP
}

/*
equation index: 439
type: SIMPLE_ASSIGN
powerBlock._reCompressor._m_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20 = powerBlock.gamma * powerBlock.LTR.m_turb_des.SeedLSJac20
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_439(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,439};
  jacobian->tmpVars[0] /* powerBlock.reCompressor.m_des.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_DIFF_VAR */ = (data->simulationInfo->realParameter[586] /* powerBlock.gamma PARAM */) * (jacobian->seedVars[0] /* powerBlock.LTR.m_turb_des.SeedLSJac20 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 440
type: SIMPLE_ASSIGN
powerBlock._reCompressor._W_comp_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20 = powerBlock.reCompressor.m_des.$pDERLSJac20.dummyVarLSJac20 * (powerBlock.reCompressor.h_out_des - powerBlock.reCompressor.state_in_des.h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_440(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,440};
  jacobian->tmpVars[1] /* powerBlock.reCompressor.W_comp_des.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_DIFF_VAR */ = (jacobian->tmpVars[0] /* powerBlock.reCompressor.m_des.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_DIFF_VAR */) * (data->simulationInfo->realParameter[629] /* powerBlock.reCompressor.h_out_des PARAM */ - data->simulationInfo->realParameter[636] /* powerBlock.reCompressor.state_in_des.h PARAM */);
  TRACE_POP
}

/*
equation index: 441
type: SIMPLE_ASSIGN
powerBlock._turbine._W_turb_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20 = ((-powerBlock.reCompressor.W_comp_des.$pDERLSJac20.dummyVarLSJac20) - powerBlock.mainCompressor.W_comp_des.$pDERLSJac20.dummyVarLSJac20) * (1.0 - powerBlock.par_fr) * powerBlock.eta_motor / (powerBlock.eta_motor * (1.0 - powerBlock.par_fr))
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_441(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,441};
  jacobian->tmpVars[5] /* powerBlock.turbine.W_turb_des.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_DIFF_VAR */ = DIVISION((((-jacobian->tmpVars[1] /* powerBlock.reCompressor.W_comp_des.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_DIFF_VAR */) - jacobian->tmpVars[4] /* powerBlock.mainCompressor.W_comp_des.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_DIFF_VAR */) * (1.0 - data->simulationInfo->realParameter[610] /* powerBlock.par_fr PARAM */)) * (data->simulationInfo->realParameter[427] /* powerBlock.eta_motor PARAM */),(data->simulationInfo->realParameter[427] /* powerBlock.eta_motor PARAM */) * (1.0 - data->simulationInfo->realParameter[610] /* powerBlock.par_fr PARAM */),"powerBlock.eta_motor * (1.0 - powerBlock.par_fr)");
  TRACE_POP
}

/*
equation index: 442
type: SIMPLE_ASSIGN
powerBlock._turbine._m_des.__omcQuot_24704445524C534A61633230._dummyVarLSJac20 = powerBlock.turbine.W_turb_des.$pDERLSJac20.dummyVarLSJac20 / (powerBlock.turbine.h_out_des - powerBlock.turbine.state_in_des.h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_442(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,442};
  jacobian->tmpVars[6] /* powerBlock.turbine.m_des.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_DIFF_VAR */ = DIVISION(jacobian->tmpVars[5] /* powerBlock.turbine.W_turb_des.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_DIFF_VAR */,data->simulationInfo->realParameter[654] /* powerBlock.turbine.h_out_des PARAM */ - data->simulationInfo->realParameter[658] /* powerBlock.turbine.state_in_des.h PARAM */,"powerBlock.turbine.h_out_des - powerBlock.turbine.state_in_des.h");
  TRACE_POP
}

/*
equation index: 443
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524C534A61633230._dummyVarLSJac20 = powerBlock.turbine.m_des.$pDERLSJac20.dummyVarLSJac20 - powerBlock.LTR.m_turb_des.SeedLSJac20
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_443(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,443};
  jacobian->resultVars[0] /* $res1.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_VAR */ = jacobian->tmpVars[6] /* powerBlock.turbine.m_des.$pDERLSJac20.dummyVarLSJac20 JACOBIAN_DIFF_VAR */ - jacobian->seedVars[0] /* powerBlock.LTR.m_turb_des.SeedLSJac20 SEED_VAR */;
  TRACE_POP
}
int sCO2PBCalculator_Using_PinchPHX_functionJacLSJac20_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBCalculator_Using_PinchPHX_INDEX_JAC_LSJac20;
  sCO2PBCalculator_Using_PinchPHX_eqFunction_437(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_438(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_439(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_440(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_441(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_442(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_443(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 534
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._13._h.__omcQuot_24704445524C534A61633232._dummyVarLSJac22 = 2.0 * powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_534(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,534};
  jacobian->tmpVars[1] /* powerBlock.exchanger.state_HTF_des.13.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ = (2.0) * (jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22 SEED_VAR */);
  TRACE_POP
}

/*
equation index: 535
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._12._h.__omcQuot_24704445524C534A61633232._dummyVarLSJac22 = powerBlock.exchanger.state_HTF_des.13.h.$pDERLSJac22.dummyVarLSJac22 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_535(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,535};
  jacobian->tmpVars[2] /* powerBlock.exchanger.state_HTF_des.12.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[1] /* powerBlock.exchanger.state_HTF_des.13.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 536
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._11._h.__omcQuot_24704445524C534A61633232._dummyVarLSJac22 = powerBlock.exchanger.state_HTF_des.12.h.$pDERLSJac22.dummyVarLSJac22 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_536(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,536};
  jacobian->tmpVars[3] /* powerBlock.exchanger.state_HTF_des.11.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[2] /* powerBlock.exchanger.state_HTF_des.12.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 537
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._10._h.__omcQuot_24704445524C534A61633232._dummyVarLSJac22 = powerBlock.exchanger.state_HTF_des.11.h.$pDERLSJac22.dummyVarLSJac22 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_537(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,537};
  jacobian->tmpVars[4] /* powerBlock.exchanger.state_HTF_des.10.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[3] /* powerBlock.exchanger.state_HTF_des.11.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 538
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._9._h.__omcQuot_24704445524C534A61633232._dummyVarLSJac22 = powerBlock.exchanger.state_HTF_des.10.h.$pDERLSJac22.dummyVarLSJac22 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_538(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,538};
  jacobian->tmpVars[5] /* powerBlock.exchanger.state_HTF_des.9.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[4] /* powerBlock.exchanger.state_HTF_des.10.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 539
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._8._h.__omcQuot_24704445524C534A61633232._dummyVarLSJac22 = powerBlock.exchanger.state_HTF_des.9.h.$pDERLSJac22.dummyVarLSJac22 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_539(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,539};
  jacobian->tmpVars[6] /* powerBlock.exchanger.state_HTF_des.8.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[5] /* powerBlock.exchanger.state_HTF_des.9.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 540
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._7._h.__omcQuot_24704445524C534A61633232._dummyVarLSJac22 = powerBlock.exchanger.state_HTF_des.8.h.$pDERLSJac22.dummyVarLSJac22 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_540(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,540};
  jacobian->tmpVars[7] /* powerBlock.exchanger.state_HTF_des.7.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[6] /* powerBlock.exchanger.state_HTF_des.8.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 541
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._6._h.__omcQuot_24704445524C534A61633232._dummyVarLSJac22 = powerBlock.exchanger.state_HTF_des.7.h.$pDERLSJac22.dummyVarLSJac22 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_541(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,541};
  jacobian->tmpVars[8] /* powerBlock.exchanger.state_HTF_des.6.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[7] /* powerBlock.exchanger.state_HTF_des.7.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 542
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._5._h.__omcQuot_24704445524C534A61633232._dummyVarLSJac22 = powerBlock.exchanger.state_HTF_des.6.h.$pDERLSJac22.dummyVarLSJac22 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_542(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,542};
  jacobian->tmpVars[9] /* powerBlock.exchanger.state_HTF_des.5.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[8] /* powerBlock.exchanger.state_HTF_des.6.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 543
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._4._h.__omcQuot_24704445524C534A61633232._dummyVarLSJac22 = powerBlock.exchanger.state_HTF_des.5.h.$pDERLSJac22.dummyVarLSJac22 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_543(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,543};
  jacobian->tmpVars[10] /* powerBlock.exchanger.state_HTF_des.4.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[9] /* powerBlock.exchanger.state_HTF_des.5.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 544
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._3._h.__omcQuot_24704445524C534A61633232._dummyVarLSJac22 = powerBlock.exchanger.state_HTF_des.4.h.$pDERLSJac22.dummyVarLSJac22 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_544(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,544};
  jacobian->tmpVars[11] /* powerBlock.exchanger.state_HTF_des.3.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[10] /* powerBlock.exchanger.state_HTF_des.4.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 545
type: SIMPLE_ASSIGN
powerBlock._exchanger._state_HTF_des._2._h.__omcQuot_24704445524C534A61633232._dummyVarLSJac22 = powerBlock.exchanger.state_HTF_des.3.h.$pDERLSJac22.dummyVarLSJac22 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_545(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,545};
  jacobian->tmpVars[12] /* powerBlock.exchanger.state_HTF_des.2.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ = jacobian->tmpVars[11] /* powerBlock.exchanger.state_HTF_des.3.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22 SEED_VAR */;
  TRACE_POP
}

/*
equation index: 546
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524C534A61633232._dummyVarLSJac22 = powerBlock.exchanger.state_HTF_des.2.h.$pDERLSJac22.dummyVarLSJac22 + powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_546(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,546};
  jacobian->resultVars[0] /* $res1.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_VAR */ = jacobian->tmpVars[12] /* powerBlock.exchanger.state_HTF_des.2.h.$pDERLSJac22.dummyVarLSJac22 JACOBIAN_DIFF_VAR */ + jacobian->seedVars[0] /* powerBlock.exchanger.state_HTF_des[14].h.SeedLSJac22 SEED_VAR */;
  TRACE_POP
}
int sCO2PBCalculator_Using_PinchPHX_functionJacLSJac22_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBCalculator_Using_PinchPHX_INDEX_JAC_LSJac22;
  sCO2PBCalculator_Using_PinchPHX_eqFunction_534(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_535(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_536(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_537(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_538(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_539(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_540(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_541(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_542(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_543(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_544(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_545(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_546(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}

/*
equation index: 591
type: SIMPLE_ASSIGN
_omcQuot_2472657331.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * powerBlock.exchanger.state_CO2_des[2].h.SeedNLSJac36 + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[2].h - powerBlock.exchanger.state_CO2_des[1].h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_591(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,591};
  jacobian->resultVars[0] /* $res1.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[0] /* powerBlock.exchanger.state_CO2_des[2].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[11] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[509] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */ - data->simulationInfo->realParameter[508] /* powerBlock.exchanger.state_CO2_des[1].h PARAM */);
  TRACE_POP
}

/*
equation index: 592
type: SIMPLE_ASSIGN
_omcQuot_2472657332.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[3].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[2].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[3].h - powerBlock.exchanger.state_CO2_des[2].h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_592(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,592};
  jacobian->resultVars[1] /* $res2.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[1] /* powerBlock.exchanger.state_CO2_des[3].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[0] /* powerBlock.exchanger.state_CO2_des[2].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[11] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */ - data->simulationInfo->realParameter[509] /* powerBlock.exchanger.state_CO2_des[2].h PARAM */);
  TRACE_POP
}

/*
equation index: 593
type: SIMPLE_ASSIGN
_omcQuot_2472657333.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[4].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[3].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[4].h - powerBlock.exchanger.state_CO2_des[3].h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_593(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,593};
  jacobian->resultVars[2] /* $res3.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[2] /* powerBlock.exchanger.state_CO2_des[4].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[1] /* powerBlock.exchanger.state_CO2_des[3].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[11] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */ - data->simulationInfo->realParameter[510] /* powerBlock.exchanger.state_CO2_des[3].h PARAM */);
  TRACE_POP
}

/*
equation index: 594
type: SIMPLE_ASSIGN
_omcQuot_2472657334.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[5].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[4].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[5].h - powerBlock.exchanger.state_CO2_des[4].h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_594(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,594};
  jacobian->resultVars[3] /* $res4.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[3] /* powerBlock.exchanger.state_CO2_des[5].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[2] /* powerBlock.exchanger.state_CO2_des[4].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[11] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */ - data->simulationInfo->realParameter[511] /* powerBlock.exchanger.state_CO2_des[4].h PARAM */);
  TRACE_POP
}

/*
equation index: 595
type: SIMPLE_ASSIGN
_omcQuot_2472657335.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[6].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[5].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[6].h - powerBlock.exchanger.state_CO2_des[5].h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_595(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,595};
  jacobian->resultVars[4] /* $res5.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[4] /* powerBlock.exchanger.state_CO2_des[6].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[3] /* powerBlock.exchanger.state_CO2_des[5].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[11] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */ - data->simulationInfo->realParameter[512] /* powerBlock.exchanger.state_CO2_des[5].h PARAM */);
  TRACE_POP
}

/*
equation index: 596
type: SIMPLE_ASSIGN
_omcQuot_2472657336.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[7].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[6].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[7].h - powerBlock.exchanger.state_CO2_des[6].h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_596(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,596};
  jacobian->resultVars[5] /* $res6.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[5] /* powerBlock.exchanger.state_CO2_des[7].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[4] /* powerBlock.exchanger.state_CO2_des[6].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[11] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */ - data->simulationInfo->realParameter[513] /* powerBlock.exchanger.state_CO2_des[6].h PARAM */);
  TRACE_POP
}

/*
equation index: 597
type: SIMPLE_ASSIGN
_omcQuot_2472657337.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[8].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[7].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[8].h - powerBlock.exchanger.state_CO2_des[7].h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_597(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,597};
  jacobian->resultVars[6] /* $res7.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[6] /* powerBlock.exchanger.state_CO2_des[8].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[5] /* powerBlock.exchanger.state_CO2_des[7].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[11] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */ - data->simulationInfo->realParameter[514] /* powerBlock.exchanger.state_CO2_des[7].h PARAM */);
  TRACE_POP
}

/*
equation index: 598
type: SIMPLE_ASSIGN
_omcQuot_2472657338.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[9].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[8].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[9].h - powerBlock.exchanger.state_CO2_des[8].h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_598(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,598};
  jacobian->resultVars[7] /* $res8.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[7] /* powerBlock.exchanger.state_CO2_des[9].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[6] /* powerBlock.exchanger.state_CO2_des[8].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[11] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */ - data->simulationInfo->realParameter[515] /* powerBlock.exchanger.state_CO2_des[8].h PARAM */);
  TRACE_POP
}

/*
equation index: 599
type: SIMPLE_ASSIGN
_omcQuot_2472657339.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[10].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[9].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[10].h - powerBlock.exchanger.state_CO2_des[9].h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_599(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,599};
  jacobian->resultVars[8] /* $res9.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[8] /* powerBlock.exchanger.state_CO2_des[10].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[7] /* powerBlock.exchanger.state_CO2_des[9].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[11] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */ - data->simulationInfo->realParameter[516] /* powerBlock.exchanger.state_CO2_des[9].h PARAM */);
  TRACE_POP
}

/*
equation index: 600
type: SIMPLE_ASSIGN
_omcQuot_247265733130.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[11].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[10].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[11].h - powerBlock.exchanger.state_CO2_des[10].h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_600(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,600};
  jacobian->resultVars[9] /* $res10.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[9] /* powerBlock.exchanger.state_CO2_des[11].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[8] /* powerBlock.exchanger.state_CO2_des[10].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[11] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */ - data->simulationInfo->realParameter[517] /* powerBlock.exchanger.state_CO2_des[10].h PARAM */);
  TRACE_POP
}

/*
equation index: 601
type: SIMPLE_ASSIGN
_omcQuot_247265733131.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[12].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[11].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[12].h - powerBlock.exchanger.state_CO2_des[11].h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_601(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,601};
  jacobian->resultVars[10] /* $res11.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[10] /* powerBlock.exchanger.state_CO2_des[12].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[9] /* powerBlock.exchanger.state_CO2_des[11].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[11] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */ - data->simulationInfo->realParameter[518] /* powerBlock.exchanger.state_CO2_des[11].h PARAM */);
  TRACE_POP
}

/*
equation index: 602
type: SIMPLE_ASSIGN
_omcQuot_247265733132.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[13].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[12].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[13].h - powerBlock.exchanger.state_CO2_des[12].h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_602(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,602};
  jacobian->resultVars[11] /* $res12.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[13] /* powerBlock.exchanger.state_CO2_des[13].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[10] /* powerBlock.exchanger.state_CO2_des[12].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[11] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */ - data->simulationInfo->realParameter[519] /* powerBlock.exchanger.state_CO2_des[12].h PARAM */);
  TRACE_POP
}

/*
equation index: 603
type: SIMPLE_ASSIGN
_omcQuot_247265733133.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[15].h - powerBlock.exchanger.state_CO2_des[14].h) - powerBlock.exchanger.ratio_m_des * powerBlock.exchanger.state_CO2_des[14].h.SeedNLSJac36
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_603(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,603};
  jacobian->resultVars[12] /* $res13.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (jacobian->seedVars[11] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[522] /* powerBlock.exchanger.state_CO2_des[15].h PARAM */ - data->simulationInfo->realParameter[521] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */) - ((data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[12] /* powerBlock.exchanger.state_CO2_des[14].h.SeedNLSJac36 SEED_VAR */));
  TRACE_POP
}

/*
equation index: 604
type: SIMPLE_ASSIGN
_omcQuot_247265733134.__omcQuot_24704445524E4C534A61633336._dummyVarNLSJac36 = powerBlock.exchanger.ratio_m_des * (powerBlock.exchanger.state_CO2_des[14].h.SeedNLSJac36 - powerBlock.exchanger.state_CO2_des[13].h.SeedNLSJac36) + powerBlock.exchanger.ratio_m_des.SeedNLSJac36 * (powerBlock.exchanger.state_CO2_des[14].h - powerBlock.exchanger.state_CO2_des[13].h)
*/
void sCO2PBCalculator_Using_PinchPHX_eqFunction_604(DATA *data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  const int clockIndex = 0;
  const int equationIndexes[2] = {1,604};
  jacobian->resultVars[13] /* $res14.$pDERNLSJac36.dummyVarNLSJac36 JACOBIAN_VAR */ = (data->simulationInfo->realParameter[507] /* powerBlock.exchanger.ratio_m_des PARAM */) * (jacobian->seedVars[12] /* powerBlock.exchanger.state_CO2_des[14].h.SeedNLSJac36 SEED_VAR */ - jacobian->seedVars[13] /* powerBlock.exchanger.state_CO2_des[13].h.SeedNLSJac36 SEED_VAR */) + (jacobian->seedVars[11] /* powerBlock.exchanger.ratio_m_des.SeedNLSJac36 SEED_VAR */) * (data->simulationInfo->realParameter[521] /* powerBlock.exchanger.state_CO2_des[14].h PARAM */ - data->simulationInfo->realParameter[520] /* powerBlock.exchanger.state_CO2_des[13].h PARAM */);
  TRACE_POP
}
int sCO2PBCalculator_Using_PinchPHX_functionJacNLSJac36_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBCalculator_Using_PinchPHX_INDEX_JAC_NLSJac36;
  sCO2PBCalculator_Using_PinchPHX_eqFunction_591(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_592(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_593(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_594(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_595(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_596(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_597(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_598(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_599(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_600(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_601(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_602(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_603(data, threadData, jacobian, parentJacobian);

  sCO2PBCalculator_Using_PinchPHX_eqFunction_604(data, threadData, jacobian, parentJacobian);
  
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_Using_PinchPHX_functionJacF_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_Using_PinchPHX_functionJacD_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_Using_PinchPHX_functionJacC_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_Using_PinchPHX_functionJacB_column(void* data, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH
  TRACE_POP
  return 0;
}
int sCO2PBCalculator_Using_PinchPHX_functionJacA_column(void* inData, threadData_t *threadData, ANALYTIC_JACOBIAN *jacobian, ANALYTIC_JACOBIAN *parentJacobian)
{
  TRACE_PUSH

  DATA* data = ((DATA*)inData);
  int index = sCO2PBCalculator_Using_PinchPHX_INDEX_JAC_A;
  
  TRACE_POP
  return 0;
}


