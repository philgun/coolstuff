within examples;

model sCO2SurrogatePBRig
  import SolarTherm.{Models,Media};
  import Modelica.SIunits.Conversions.from_degC;
  import SI = Modelica.SIunits;
  import nSI = Modelica.SIunits.Conversions.NonSIunits;
  import CN = Modelica.Constants;
  import CV = Modelica.SIunits.Conversions;
  import FI = SolarTherm.Models.Analysis.Finances;
  import Utils = SolarTherm.Media.SolidParticles.CarboHSP_utilities;
  import SolarTherm.Types.Solar_angles;
  import SolarTherm.Types.Currency;
  import Modelica.Math;
  import metadata = SolarTherm.Utilities.Metadata_Optics;
  import Modelica.SIunits.Conversions.*;
  extends SolarTherm.Media.CO2.PropCO2;
  // *********************Simulation setup
  parameter Boolean test_mode = true;
  parameter Boolean external_parasities = true;
  parameter Integer inputsize = 9;
  parameter Integer outputsize = 2;
  parameter String saved_model_dir = "/home/philgun/Documents/codecodecode/codecodecode/ML/script/sCO2_Trained_Model/final-data/surrogate_model_1";
  // *********************Changeable PB Design Param -  For Surrogates
  parameter SI.Power P_net = 150000000.0;
  parameter SI.Temperature T_in_ref_blk = 1126.31;
  parameter SI.AbsolutePressure p_high = 22862602.05 "high pressure of the cycle";
  parameter Real PR = 3.17 "Pressure ratio";
  parameter SI.TemperatureDifference pinch_PHX = 17.13;
  parameter SI.TemperatureDifference dTemp_HTF_PHX = 181.58 "T_in_ref_blk - T_cold_set";
  // ********************* Changeable PB Operation Param -  For Surrogates
  parameter Real load = 1.05;
  parameter SI.Temperature T_HTF_in = 1117.46;
  parameter SI.Temperature T_amb_input = 293.71;
  parameter SI.MassFlowRate m_HTF_des(fixed = false);
  parameter SI.MassFlowRate m_HTF_in = load * m_HTF_des;
  // *********************Changeable PB Design Param
  parameter Real f_fixed_load = 0.0055;
  parameter SI.Efficiency eta_motor = 1 "electrical generator efficiency";
  // *********************Unchangable PB Design Param
  parameter SI.Temperature T_low = from_degC(41) "Cooler outlet temperature at design point";
  parameter SI.Temperature blk_T_amb_des = from_degC(39);
  parameter Real nu_min_blk = 0.5;
  parameter Integer N_exch_parameter = 15;
  parameter Integer N_HTR = 15;
  parameter Integer N_LTR_parameter = 15;
  parameter SI.HeatFlowRate Q_HX_des(fixed = false);
  // *********************PB Specific cost
  parameter Real pinch_recuperator = 15;
  parameter Real par_fr = 0.1;
  parameter Real pri_recuperator = 5.2;
  parameter Real pri_turbine = 9923.7;
  parameter Real pri_compressor = 643.15;
  parameter Real pri_cooler = 76.25;
  parameter Real pri_generator = 108900;
  parameter FI.Money pri_exchanger = 150 "price of the primary exchanger in $/(kW_th). Objective for next-gen CSP with particles  --> value from v.9 EES sandia result c_hx";
  // ********************* Surrogate boundaries
  parameter Real[inputsize] X_max = {1.50000000e+08, 1.42266000e+03, 2.49752636e+07, 4.00000000e+00, 5.92900000e+01, 2.98850000e+02, 1.05000000e+00, 1.42144000e+03, 3.18140000e+02};
  parameter Real[inputsize] X_min = {1.00000000e+07, 1.02443000e+03, 2.00192904e+07, 2.75000000e+00, 1.50700000e+01, 1.01040000e+02, 5.00000000e-01, 1.00696000e+03, 2.63170000e+02};
  parameter Real y_max[outputsize] = {0.73182128, 1.03293017};
  parameter Real y_min[outputsize] = {0.05559933, 0.00012414};
  // ********************* Medium
  replaceable package Medium = SolarTherm.Media.SolidParticles.CarboHSP_ph "Medium props for Carbo HSP 40/70";
  replaceable package MedPB = SolarTherm.Media.CarbonDioxide_ph "Medium props for sCO2";
  // ********************* Components instantiation
  Modelica.Fluid.Sources.FixedBoundary source(nPorts = 1, redeclare package Medium = Medium, T = T_HTF_in, use_T = true, use_p = false, p = 1e5) annotation(
    Placement(visible = true, transformation(origin = {-90, 16}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Fluid.Sources.FixedBoundary sink(redeclare package Medium = Medium, T = 300.0, d = 3300, nPorts = 1, p = 1e5, use_T = true) annotation(
    Placement(visible = true, transformation(origin = {-82, -56}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression T_amb_in(y = T_amb_input) annotation(
    Placement(visible = true, transformation(origin = {-58, 60}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.BooleanExpression always_false(y = false) annotation(
    Placement(visible = true, transformation(origin = {-58, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression parasities_input(y = 0) annotation(
    Placement(visible = true, transformation(origin = {-58, 98}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  SolarTherm.Models.Fluid.Pumps.LiftSimple liftSimple(use_input = true) annotation(
    Placement(visible = true, transformation(origin = {-35, 13}, extent = {{21, -21}, {-21, 21}}, rotation = 0)));
  Modelica.Blocks.Sources.RealExpression m_dot(y = m_HTF_in) annotation(
    Placement(visible = true, transformation(origin = {-98, 44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  SolarTherm.Models.PowerBlocks.SurrogatesCO2PB powerBlock(P_net = P_net, T_in_ref_blk = T_in_ref_blk, p_high = p_high, PR = PR, pinch_PHX = pinch_PHX, dTemp_HTF_PHX = dTemp_HTF_PHX, Q_HX_des = Q_HX_des, f_fixed_load = f_fixed_load, m_HTF_des = m_HTF_des, inputsize = inputsize, outputsize = outputsize, saved_model_dir = saved_model_dir, X_max = X_max, X_min = X_min, out_max = y_max, out_min = y_min) annotation(
    Placement(visible = true, transformation(origin = {39, -5}, extent = {{-55, -55}, {55, 55}}, rotation = 0)));
  SolarTherm.Models.PowerBlocks.sCO2PBCalculator_Using_JPidea sCO2PBDesignPointCalculator(redeclare package Medium = Medium, P_net = P_net, T_in_ref_blk = T_in_ref_blk, p_high = p_high, PR = PR, pinch_PHX = pinch_PHX, dTemp_HTF_PHX = dTemp_HTF_PHX, T_HTF_in = T_in_ref_blk, T_amb_input = T_amb_input, load = 1, f_fixed_load = f_fixed_load, blk_T_amb_des = blk_T_amb_des, T_low = T_low, nu_min_blk = nu_min_blk, N_exch_parameter = N_exch_parameter "PG", N_LTR_parameter = N_LTR_parameter, pri_recuperator = pri_recuperator, pri_turbine = pri_turbine, pri_compressor = pri_compressor, pri_cooler = pri_cooler, pri_generator = pri_generator, pri_exchanger = pri_exchanger, eta_motor = eta_motor, pinch_recuperator = pinch_recuperator, par_fr = par_fr, test_mode = test_mode, external_parasities = external_parasities) annotation(
    Placement(visible = true, transformation(origin = {136, 72}, extent = {{-30, -30}, {30, 30}}, rotation = 0)));
  // ********************* Variables
  SI.Power P_elec;
  SI.Energy E_elec;
  Real eta_gross;
  Real eta_Q;
initial equation
  m_HTF_des = sCO2PBDesignPointCalculator.powerBlock.m_HTF_des;
  Q_HX_des = sCO2PBDesignPointCalculator.powerBlock.Q_HX_des;
equation
  P_elec = powerBlock.W_net;
  der(E_elec) = P_elec;
  eta_gross = powerBlock.eta_gross;
  eta_Q = powerBlock.eta_Q;
/*Assigning the input to the surrogate model*/
  powerBlock.raw_input[1] = powerBlock.P_net;
  powerBlock.raw_input[2] = powerBlock.T_in_ref_blk;
  powerBlock.raw_input[3] = powerBlock.p_high;
  powerBlock.raw_input[4] = powerBlock.PR;
  powerBlock.raw_input[5] = powerBlock.pinch_PHX;
  powerBlock.raw_input[6] = powerBlock.dTemp_HTF_PHX;
  powerBlock.raw_input[7] = powerBlock.load;
  powerBlock.raw_input[8] = SolarTherm.Media.SolidParticles.CarboHSP_utilities.T_h(inStream(powerBlock.fluid_a.h_outflow));
  powerBlock.raw_input[9] = powerBlock.T_amb;
/*Connection*/
  connect(source.ports[1], liftSimple.fluid_a) annotation(
    Line(points = {{-80, 16}, {-42, 16}, {-42, 16}, {-42, 16}}, color = {0, 127, 255}));
  connect(m_dot.y, liftSimple.m_flow) annotation(
    Line(points = {{-86, 44}, {-40, 44}, {-40, 28}, {-38, 28}}, color = {0, 0, 127}));
  connect(liftSimple.fluid_b, powerBlock.fluid_a) annotation(
    Line(points = {{-28, 16}, {14, 16}, {14, 14}, {14, 14}}, color = {0, 127, 255}));
  connect(powerBlock.fluid_b, sink.ports[1]) annotation(
    Line(points = {{8, -30}, {-32, -30}, {-32, -56}, {-72, -56}, {-72, -56}}, color = {0, 127, 255}));
  connect(T_amb_in.y, powerBlock.T_amb) annotation(
    Line(points = {{-46, 60}, {28, 60}, {28, 28}, {28, 28}}, color = {0, 0, 127}));
  connect(always_false.y, powerBlock.ramping) annotation(
    Line(points = {{-46, 80}, {40, 80}, {40, 28}, {40, 28}}, color = {255, 0, 255}));
  connect(parasities_input.y, powerBlock.parasities) annotation(
    Line(points = {{-46, 98}, {50, 98}, {50, 28}, {50, 28}}, color = {0, 0, 127}));
  annotation(
    experiment(StartTime = 0, StopTime = 1, Tolerance = 1e-06, Interval = 0.002));
end sCO2SurrogatePBRig;