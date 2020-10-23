#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_linalg.h>
#include <gsl/gsl_cblas.h>
#include <gsl/gsl_blas.h>
#include <python2.7/Python.h>

#define limitSize 1000000

typedef struct PB_validation_data_point
{
    double P_net;
    double T_in_ref_blk;
    double p_high;
    double PR;
    double pinch_PHX;
    double dTemp_HTF_PHX;
    double load;
    double T_HTF_in;
    double T_amb_input;
    double eta_gross;
    double eta_Q;

}PB_validation_data_point;

typedef struct
{
    double scaled_deviation_load;
    double scaled_deviation_T_HTF_in;
    double scaled_deviation_T_amb_input;
    double scaled_deviation_eta_gross;
    double scaled_deviation_eta_Q;

}Kriging_training_struct;

void* constructSurrogate(double , double , double , double , double , double , double , double , double , double , int, char* );
void checkConfig(double , double , double , double , double , double, int* );
double kriging (char* , double , double , double , double* , int , int ,int, char*, Kriging_training_struct*);
void getWeight(gsl_matrix*, gsl_matrix* , gsl_matrix* , int );
void getCoVarianceMatrix(gsl_matrix* , gsl_matrix* , double , double , int );
void eucledianDistance_2(double** , int , int , gsl_matrix*);
void eucledianDistance(double** , double* , int , int , gsl_matrix*);
void getVariogramMatrix(gsl_matrix* , gsl_matrix* , double , double , double , int , char*);
double** create2Darray(int , int);
void getTrainingDataPoints(char* , int , double**, Kriging_training_struct* );
int getNumOfData(char* );
void generateTrainingData(double , double , double , double , double , double , int , int, char* );
void* load_Kriging_training_data(char*);
char* constructKriging(double , double ,double , double , double , double ,double , double , double , double , char* , int );
char* constructANN(double , double ,double , double , double , double ,double , double , double , double , char* , int );
char* trainingANN(char* , char* , int );

/*
void test_kriging(double, double);
double Branin(double x1_raw, double x2_raw);
void genBraninData(double* , double* , double** );
double scaler_x1(double );
double scaler_x2(double );
//int test_program(char* );
*/