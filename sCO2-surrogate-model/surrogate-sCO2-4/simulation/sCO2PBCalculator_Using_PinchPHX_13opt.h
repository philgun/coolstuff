#if defined(__cplusplus)
  extern "C" {
#endif
  int sCO2PBCalculator_Using_PinchPHX_mayer(DATA* data, modelica_real** res, short*);
  int sCO2PBCalculator_Using_PinchPHX_lagrange(DATA* data, modelica_real** res, short *, short *);
  int sCO2PBCalculator_Using_PinchPHX_pickUpBoundsForInputsInOptimization(DATA* data, modelica_real* min, modelica_real* max, modelica_real*nominal, modelica_boolean *useNominal, char ** name, modelica_real * start, modelica_real * startTimeOpt);
  int sCO2PBCalculator_Using_PinchPHX_setInputData(DATA *data, const modelica_boolean file);
  int sCO2PBCalculator_Using_PinchPHX_getTimeGrid(DATA *data, modelica_integer * nsi, modelica_real**t);
#if defined(__cplusplus)
}
#endif