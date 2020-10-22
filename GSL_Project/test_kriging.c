#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_linalg.h>
#include <gsl/gsl_cblas.h>
#include <gsl/gsl_blas.h>
#include <dirent.h>
#include <python2.7/Python.h>
#include <unistd.h>
#include <limits.h>

#include "./lib/kriging.c"

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
    double eta_gross_base = 0.49991927091306; 
    double eta_Q_base = 0.9998537337387947;
    int user_choice = 1; //-----------------------> 1 is kriging, 2 is ANN

    //initial equation
    int folder_index = initSurrogate(P_net,T_in_ref_blk,p_high,PR,pinch_PHX,dTemp_HTF_PHX,load_base,T_amb_base,eta_gross_base,eta_Q_base,user_choice);
    
    /*End of Modelica Program*/  

    return 1;
}

