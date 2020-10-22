#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define limitSize 1000000

typedef struct PB_data_point
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

}PB_data_point;

int initSurrogate(double , double , double , double , double , double , double , double , double , double , int );
void checkConfig(double , double , double , double , double , double, int* );
double kriging (char* , double , double , double , double* , int , int ,int, char*);
void getWeight(gsl_matrix*, gsl_matrix* , gsl_matrix* , int );
void getCoVarianceMatrix(gsl_matrix* , gsl_matrix* , double , double , int );
void eucledianDistance_2(double** , int , int , gsl_matrix*);
void eucledianDistance(double** , double* , int , int , gsl_matrix*);
void getVariogramMatrix(gsl_matrix* , gsl_matrix* , double , double , double , int , char*);
double** create2Darray(int , int);
void getTrainingDataPoints(char* , int , double** );
int getNumOfData(char* );
int test_program(char* );
void generateTrainingData(double , double , double , double , double , double , int , int );

/*
void test_kriging(double, double);
double Branin(double x1_raw, double x2_raw);
void genBraninData(double* , double* , double** );
double scaler_x1(double );
double scaler_x2(double );
*/