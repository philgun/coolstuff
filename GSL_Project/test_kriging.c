#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <dirent.h>
#include <unistd.h>
#include <limits.h>
#include "./lib/ontheflysurrogate.c"

/*How to invert a matrix http://www.macapp.net/MyWikiThings/invertmatrix.c*/
//gcc test_kriging.c -lm -lgsl -lgslcblas -lpython2.7 -o kriging.out

int main()
{   
    /*This is modelica program*/    
    double P_net = 2e7;
	double T_in_ref_blk = 1243.27;
	double p_high = 22707266.48;
	double PR = 2.98;
	double pinch_PHX = 23.67;
	double dTemp_HTF_PHX = 238.45;
    double load_base = 1;
    double T_amb_base = 39 + 273.15;
    int user_choice = 2; //-----------------------> 1 is kriging, 2 is ANN
    char* base_path = "/home/philgun/Documents/codecodecode/codecodecode/GSL_Project";
    /*
      integer folder_index(fixed=false);
      Real eta_gross_base(fixed=false);
      Real eta_Q_base(fixed=false);
      STSurrogateOnTheFly surrogatePB = constructSurrogate(
          P_net,T_in_ref_blk,p_high,PR,pinch_PHX,dTemp_HTF_PHX,load_base,
          T_amb_base,eta_gross_base,eta_Q_base,user_choice,base_path
          ) ==> call C program, return:
            1) pointer to struct that contains Kriging training data if use Kriging 
            2) NN session if use ANN

      SolarTherm.Models.PowerBlocks.ExpensiveModel sCO2SimonPB(P_net=P_net,T_in_ref,........)
    */

    //initial equation
    /*eta_gross_base = sCO2SimonPB.eta_gross_design*/
    double eta_gross_base = 0.49991927091306; 
    /*eta_Q_base = sCO2SimonPB.eta_Q_design*/
    double eta_Q_base = 0.9998537337387947;

    /*
    equation
    eta_Q = surrogate_on_the_fly(load,T_HTF_in,T_amb,method)
    eta_gross = surrogate_on_the_fly(load,T_HTF_in,T_amb,method)
    */
    /*End of Modelica Program*/

    Kriging_training_struct* Kriging_training_point = constructSurrogate(P_net,T_in_ref_blk,p_high,PR,pinch_PHX,dTemp_HTF_PHX,load_base,T_amb_base,eta_gross_base,eta_Q_base,user_choice,base_path);
    

    return 0;
}


