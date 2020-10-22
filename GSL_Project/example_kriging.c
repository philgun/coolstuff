#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_linalg.h>
#include <gsl/gsl_cblas.h>
#include <gsl/gsl_blas.h>

#include "./lib.c"

/*How to invert a matrix http://www.macapp.net/MyWikiThings/invertmatrix.c*/
/*Example is based on: https://github.com/GeostatsGuy/ExcelNumericalDemos/blob/master/Simple_Kriging_Demo.xlsx*/

int main()
{
    /*Kriging Parameters*/
    double Nugget = 0;
    double Spherical = 1;
    double Range = 1200;

    char* filepath = "./test2.csv";
    
    /*Input for Kriging*/
    //double load = 0.66;
    //double T_HTF_in = 1180;
    //double T_amb = 273.15;

    double x = 50;
    double y = 50;

    int inputsize = 2;
    int outputsize = 1;
    double* inputs = malloc(sizeof(double*)*inputsize);
    inputs[0] = x; inputs[1] = y; 
    
    int rows = getNumOfData(filepath);

    /*Creating memory space to store the training data as a 2D matrix*/
    double** training_data = create2Darray(rows,inputsize+outputsize);
    getTrainingDataPoints(filepath, rows, training_data);

    /*Find the mean value of the eta_gross*/
    double sum_eff = 0;
    for (size_t i=0;i<rows;i++)
    {
        sum_eff = sum_eff + training_data[i][inputsize];
    }

    double avg_eff = sum_eff / rows;

    printf("AVERAGE Z = %lf\n",avg_eff);

    /*Substract the mean from the value*/
    double* RESIDUAL_VAL = malloc(sizeof(double*)*rows);

    printf("RESIDUAL:\n");

    for (size_t i=0;i<rows;i++)
    {
        RESIDUAL_VAL[i] = training_data[i][inputsize] - avg_eff;
    }


    /*Instantiate matrix to contains distance*/
    gsl_matrix* DISTANCE = gsl_matrix_alloc(rows,rows+1);

    /*Calculate the distance between unknown value to the known values*/
    eucledianDistance(training_data,inputs,rows,inputsize,DISTANCE);

    /*Calculates the distance between known values to each other*/
    eucledianDistance_2(training_data,rows,inputsize,DISTANCE);

    printf("DISTANCE!:\n");
    for (size_t i=0;i<rows;i++)
    {
        for (size_t j=0;j<rows+1;j++)
            printf("rows %zu, cols %zu, val = %lf\n",i,j,gsl_matrix_get(DISTANCE,i,j));
    }

    /*Build variogram matrix*/
    gsl_matrix* VARIOGRAM = gsl_matrix_alloc(rows,rows+1);
    getVariogramMatrix(VARIOGRAM,DISTANCE,Nugget,Spherical,Range,rows);

    printf("VARIOGRAM!:\n");
    for (size_t i=0;i<rows;i++)
    {
        for (size_t j=0;j<rows+1;j++)
            printf("rows %zu, cols %zu, val = %lf\n",i,j,gsl_matrix_get(VARIOGRAM,i,j));
    }


    /*Build Covariance Matrix*/
    gsl_matrix* COVARIANCE = gsl_matrix_alloc(rows,rows+1);
    getCoVarianceMatrix(VARIOGRAM,COVARIANCE,Nugget,Spherical,rows);

    printf("COVARIANCE!:\n");
    for (size_t i=0;i<rows;i++)
    {
        for (size_t j=0;j<rows+1;j++)
            printf("rows %zu, cols %zu, val = %lf\n",i,j,gsl_matrix_get(COVARIANCE,i,j));
    }

    /*Left Side Matrix --> Populate*/
    gsl_matrix* LSM = gsl_matrix_alloc(rows,rows); 
    gsl_matrix* INVERSE_LSM = gsl_matrix_alloc(rows,rows);

    for(size_t i=0;i<rows;i++)
    {
        for(size_t j=0;j<rows;j++)
        {
            gsl_matrix_set(LSM,i,j, gsl_matrix_get(COVARIANCE,i,j));
        }
    }

    /*Inverse the LSM*/
    gsl_permutation* perm = gsl_permutation_alloc(rows);
    int s;
    gsl_linalg_LU_decomp (LSM, perm, &s);    
    gsl_linalg_LU_invert (LSM, perm, INVERSE_LSM);

    printf("INVERSE LSM!:\n");
    for (size_t i=0;i<rows;i++)
    {
        for (size_t j=0;j<rows;j++)
            printf("rows %zu, cols %zu, val = %lf\n",i,j,gsl_matrix_get(INVERSE_LSM,i,j));
    }

    /*Find the weights*/
    gsl_matrix* WEIGHT = gsl_matrix_alloc(rows,1);
    getWeight(INVERSE_LSM,COVARIANCE,WEIGHT,rows);

    printf("WEIGHT LSM!:\n");
    for (size_t i=0;i<rows;i++)
    {
        printf("rows %zu, val = %lf\n",i,gsl_matrix_get(WEIGHT,i,0));
    }

    /*Find the sum of weight*/
    double sum_weight = 0;
    double residual_weight = 0;

    for(size_t i=0;i<rows;i++)
    {
        sum_weight = sum_weight + gsl_matrix_get(WEIGHT,i,0);
    }

    residual_weight = 1 - sum_weight;

    printf("%lf,%lf\n",sum_weight,residual_weight);

    /*Calculate Kriging Estimate*/

    double estimate = 0;

    for(size_t i=0;i<rows;i++)
    {
        estimate = estimate + RESIDUAL_VAL[i] * gsl_matrix_get(WEIGHT,i,0);
    }

    estimate = estimate + avg_eff;

    /*Find kriging variance (uncertainty)??*/
    double vars = 0;
    for(size_t i = 0; i<rows;i++)
    {
        vars = vars + (gsl_matrix_get(COVARIANCE,i,rows)*gsl_matrix_get(WEIGHT,i,0));
    }

    vars = Nugget+Spherical - vars;

    printf("KRIGING ESTIMATE OF ETA PB: %lf\nKRIGING VARIANCE: %lf\n",estimate,vars);


    /*Free resources*/
    free(training_data);
    free(RESIDUAL_VAL);

    /*Free GSL object*/
    gsl_matrix_free(LSM);
    gsl_matrix_free(INVERSE_LSM);
    gsl_matrix_free(DISTANCE);
    gsl_matrix_free(VARIOGRAM);
    gsl_matrix_free(COVARIANCE);
    gsl_matrix_free(WEIGHT);
    return 0;

    
}
