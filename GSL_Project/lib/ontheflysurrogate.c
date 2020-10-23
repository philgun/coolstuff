#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "ontheflysurrogate.h"

#define limitSize 1000000

void* constructSurrogate(double P_net, double T_in_ref_blk, double p_high, double PR, double pinch_PHX, double dTemp_HTF_PHX, double load_base, double T_amb_base, double eta_gross_base, double eta_Q_base, int user_choice, char* base_path)
{   
    char line[limitSize];

    /*Check if the design configuration of the PB model exists or not in the data bank*/

    /*
    status = 1 ~> gather new data since no design parameter match with params parsed by Modelica 
    status = 0 ~> need not to gather new data

    index = index to which trianing folder the surrogate model should look into, if status == 1 then C program will generate
    new training data and save it under a folder which is indexed with index
    */
   
    int* index_and_status = malloc(sizeof(int*)*2); 

    /*Check the configurations database whether the requested configuration exists or not*/
    checkConfig(P_net, T_in_ref_blk, p_high, PR, pinch_PHX, dTemp_HTF_PHX,index_and_status);

    int match_index = index_and_status[0];
    int status = index_and_status[1];
    char* filepath;
    
    if(status == 1)
    {
        if(user_choice == 1)
        {
            filepath = constructKriging(P_net, T_in_ref_blk, p_high, PR, pinch_PHX, dTemp_HTF_PHX, load_base, T_amb_base, eta_gross_base, eta_Q_base, base_path, match_index);   
        }
        else if(user_choice == 2)
        {
            filepath = constructANN(P_net, T_in_ref_blk, p_high, PR, pinch_PHX, dTemp_HTF_PHX, load_base, T_amb_base, eta_gross_base, eta_Q_base, base_path, match_index);
        }
        else
        {
            printf("Surrogate method doesn't exist. Your choice = %d. Available choice is 1 for Kriging, 2 for ANN\n",user_choice);
            exit(-1);
        }

    }

    int rows = getNumOfData(filepath);

    //if kriging
    Kriging_training_struct* Kriging_training_point = load_Kriging_training_data(filepath);
        
    return Kriging_training_point;
}

void getWeight(gsl_matrix* INVERSE_LSM, gsl_matrix* COVARIANCE, gsl_matrix* WEIGHTS, int rows)
{
    double val;
    double InverseVal;
    double CovarianceVal;
    for(size_t i=0;i<rows;i++)
    {
        val = 0;
        for(size_t j=0;j<rows;j++)
        {
            InverseVal = gsl_matrix_get(INVERSE_LSM,i,j);
            CovarianceVal = gsl_matrix_get(COVARIANCE,j,rows);
            val = val + (InverseVal*CovarianceVal);
        }
        gsl_matrix_set(WEIGHTS,i,0,val);
    }
}

void getCoVarianceMatrix(gsl_matrix* VARIOGRAM, gsl_matrix* COVARIANCE, double Nugget, double Spherical, int rows)
{
    double sum = Nugget + Spherical;
    
    for(size_t i=0;i<rows;i++)
    {
        for(size_t j=0;j<rows+1;j++)
        {
            gsl_matrix_set(COVARIANCE,i,j,sum - gsl_matrix_get(VARIOGRAM,i,j));
        }
    }
    
}

void getVariogramMatrix(gsl_matrix* VARIOGRAM, gsl_matrix* DISTANCE, double Nugget, double Spherical, double Range, int rows, char* type)
{
    double var;
    double dist;
    double multiplier;

    for(size_t i=0;i<rows;i++)
    {
        for(size_t j=0;j<rows+1;j++)
        {
            if(i==j)
            {
                gsl_matrix_set(VARIOGRAM,i,j,0.0);
            }
            else
            {
                dist = gsl_matrix_get(DISTANCE,i,j);

                if (strcmp(type,"spherical")==0)
                {
                    if(dist>Range)
                    {
                        multiplier = 1;
                    }
                    else
                    {
                        multiplier = 1.5 * (dist/Range) - 0.5 * pow(dist/Range,3);
                    }
                }
                else if (strcmp(type,"gaussian")==0)
                {
                    multiplier = 1 - exp(-(pow(dist,2)/pow(Range,2)));
                }

                else if (strcmp(type,"exponential")==0)
                {
                    multiplier = 1 - 0.5 * (-dist/Range);
                }

                else if (strcmp(type,"nugget")==0)
                {
                    if(dist==0)
                    {
                        multiplier = 0;
                    }
                    else
                    {
                        multiplier = 1;
                    }
                }

                else
                {
                    printf("Variogram model is not valid\n");
                    return;
                }
                                

                gsl_matrix_set(VARIOGRAM,i,j, Nugget + Spherical * multiplier);
            }
            
        }
    }
}

void eucledianDistance(double** training_data, double* inputs, int rows, int inputsize, gsl_matrix* DISTANCE)
{
    double square_difference;
    double delta;
    double dist;

    for(size_t i=0;i<rows;i++)
    {
        square_difference = 0;

        for(size_t j=0;j<inputsize;j++)
        {
            delta = training_data[i][j]- inputs[j];
            square_difference = square_difference + (delta*delta);
        }

        dist = pow(square_difference,0.5);
        gsl_matrix_set(DISTANCE,i,rows,dist);

    }
}

void eucledianDistance_2(double** training_data, int rows, int inputsize, gsl_matrix* DISTANCE)
{
    double square_difference;
    double delta;
    double dist;

    for(size_t i=0;i<rows;i++)
    {
        for(size_t j=0;j<rows;j++)
        {
            square_difference = 0;

            if(i==j) //Diagonal Matrix --> 0
            {
                gsl_matrix_set(DISTANCE,i,j,0.0);
            }

            else
            {
                for(size_t l=0;l<inputsize;l++) 
                {
                    delta = training_data[i][l] - training_data[j][l];
                    //printf("%lf - %lf = %lf\n",training_data[i][l],training_data[j][l],delta);
                    square_difference = square_difference + (delta*delta);
                }
                dist = pow(square_difference,0.5);
                //printf("SQUARE DIFFERENCE = %lf\n",square_difference);
                //printf("DISTANCE = %lf\n",dist);
                //printf("SET DISTANCE[%zu][%zu] = %lf\n",i,j,dist);
                gsl_matrix_set(DISTANCE,i,j,dist);
            }
        }
    }
}

double** create2Darray(int row, int col)
{
    int i;
    double** arr;
    arr = malloc(sizeof(double*)*row);
    for(i=0;i<row;i++)
    {
        arr[i] = malloc(sizeof(double*)*col);
    }
    return arr;
}

void getTrainingDataPoints(char* filepath, int rows, double** training_data, Kriging_training_struct* Kriging_training_data)
{
    /*Declare a variable to store the string from CSV*/
    char line[limitSize];
    
    for(size_t i=0;i<rows;i++)
    {
        training_data[i][0] = Kriging_training_data[i].scaled_deviation_load;
        training_data[i][1] = Kriging_training_data[i].scaled_deviation_T_HTF_in;
        training_data[i][2] = Kriging_training_data[i].scaled_deviation_T_amb_input;
        training_data[i][3] = Kriging_training_data[i].scaled_deviation_eta_gross;
        training_data[i][4] = Kriging_training_data[i].scaled_deviation_eta_Q;
    }
}

int getNumOfData(char* filepath)
{   
    /*Declare a variable to store the string from CSV*/
    char line[limitSize];
    int i = 0;

    /*Open the file*/
    FILE* training_file = fopen(filepath,"r");
    if (training_file==NULL)
    {
        printf("Your file doesn't exist mate! Check your address %s!\n",filepath);
        return -1;
    }

    /*Let's skip the header, shall we?!*/
    fgets(line,limitSize,training_file);

    /*Read the data!*/
    fgets(line,limitSize,training_file);
    while(!feof(training_file))
    {
        i++;
        fgets(line,limitSize,training_file);
    }
    fclose(training_file);

    return i;
}

double kriging(char* filepath, double Nugget, double Spherical, double Range, double* inputs, int inputsize, int outputsize, int index_var_in_training_data, char* variogram_model, Kriging_training_struct* Kriging_training_data)
{   
    int rows = getNumOfData(filepath);

    /*Creating memory space to store the training data as a 2D matrix*/
    double** training_data = malloc(sizeof(double*)*rows);
    for(size_t i=0;i<rows;i++)
    {
        training_data[i] = malloc(sizeof(double*)*(inputsize+outputsize)); /*for each element in the memory address, create number of r of integer*/
    }

    getTrainingDataPoints(filepath, rows, training_data, Kriging_training_data);

    /*Find the mean value of the value we want to Krig*/
    double sum_eff = 0;
    for (size_t i=0;i<rows;i++)
    {
        sum_eff = sum_eff + training_data[i][index_var_in_training_data];
    }

    double avg_eff = sum_eff / rows;

    /*Substract the mean from the value*/
    double* RESIDUAL_VAL = malloc(sizeof(double*)*rows);
    for (size_t i=0;i<rows;i++)
    {
        RESIDUAL_VAL[i] = training_data[i][index_var_in_training_data] - avg_eff;
    }

    /*Instantiate matrix to contains distance*/
    gsl_matrix* DISTANCE = gsl_matrix_alloc(rows,rows+1);

    /*Calculate the distance between unknown value to the known values*/
    eucledianDistance(training_data, inputs, rows, inputsize, DISTANCE);
    
    /*Calculates the distance between known values to each other*/
    eucledianDistance_2(training_data,  rows,  inputsize,  DISTANCE);

    /*Build variogram matrix*/
    gsl_matrix* VARIOGRAM = gsl_matrix_alloc(rows,rows+1);
    getVariogramMatrix(VARIOGRAM, DISTANCE, Nugget, Spherical, Range, rows, variogram_model);

    /*Build Covariance Matrix*/
    gsl_matrix* COVARIANCE = gsl_matrix_alloc(rows,rows+1);
    getCoVarianceMatrix(VARIOGRAM, COVARIANCE, Nugget, Spherical, rows);

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
    clock_t begin = clock();
    gsl_linalg_LU_decomp (LSM, perm, &s);    
    gsl_linalg_LU_invert (LSM, perm, INVERSE_LSM);

    /*Find the weights*/
    gsl_matrix* WEIGHT = gsl_matrix_alloc(rows,1);
    getWeight(INVERSE_LSM, COVARIANCE, WEIGHT, rows);

    /*Find the sum of weight*/
    double sum_weight = 0;
    double residual_weight = 0;

    for(size_t i=0;i<rows;i++)
    {
        sum_weight = sum_weight + gsl_matrix_get(WEIGHT,i,0);
    }

    residual_weight = 1 - sum_weight;

    /*Calculate Kriging Estimate*/
    double estimate = 0;

    for(size_t i=0;i<rows;i++)
    {
        estimate = estimate + RESIDUAL_VAL[i] * gsl_matrix_get(WEIGHT,i,0);
    }


    /*Find kriging variance (uncertainty)??*/
    double vars = 0;
    for(size_t i = 0; i<rows;i++)
    {
        vars = vars + (gsl_matrix_get(COVARIANCE,i,rows)*gsl_matrix_get(WEIGHT,i,0));
    }

    vars = Nugget+Spherical - vars;
    estimate = estimate + avg_eff;
    clock_t end = clock();
    double time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
    //printf("%lf s\n",time_spent);

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

    return estimate;
}

void checkConfig(double P_net, double T_in_ref_blk, double p_high, double PR, double pinch_PHX, double dTemp_HTF_PHX, int* index_and_status)
{
    char line[limitSize];
    int matching_index = -1000;
    int status = -1000;

    /*Check if the design param is already existing*/
    char* configdir = "./configurations-dummy/";
    char* configbase = "config";    
    char* file_extension = ".txt";
    int file_index = 0;
    int l = snprintf(NULL,0,"%d",file_index); // calculate the amount of memory to be allocated for index
    char* index_string = malloc(sizeof(char*)*l);    
    
    sprintf(index_string,"%d",file_index); //convert integer into string  

    //Unify index_string with configname
    l = strlen(configbase) + strlen(index_string) + strlen(file_extension) + 1;
    char* configname = malloc(sizeof(char*)*l);
    strcpy(configname,configbase); //copy the "config" into configname
    strcat(configname,index_string); //concatenate configname with indexstring e.g. result config0
    strcat(configname,file_extension); //concatenate file extension e.g. config0.txt
    
    l = strlen(configname) + strlen(configdir) + 1;
    char* config_file_path = malloc(sizeof(char*)*l);
    strcpy(config_file_path,configdir); //copy the configdir into config_file_path
    strcat(config_file_path,configname);

    FILE* configfile = fopen(config_file_path,"r");

    //*******************start reading
    while(configfile != NULL)
    {
        //**************** get the 1st line
        fgets(line,limitSize,configfile);

        //**************** get the 2nd line where the information is
        fgets(line,limitSize,configfile);

        //**************** start scanning the information
        double P_net_exisiting, T_in_ref_blk_existing, p_high_existing, PR_existing, pinch_PHX_existing, dTemp_HTF_PHX_existing;
        sscanf
        (
            line,"%lf,%lf,%lf,%lf,%lf,%lf",
            &P_net_exisiting,
            &T_in_ref_blk_existing,
            &p_high_existing,
            &PR_existing,
            &pinch_PHX_existing,
            &dTemp_HTF_PHX_existing
        );

        double deviation_P_net = P_net_exisiting - P_net;
        double deviation_T_in_ref_blk = T_in_ref_blk_existing - T_in_ref_blk;
        double deviation_p_high = p_high_existing - p_high;
        double deviation_PR = PR_existing - PR;
        double deviation_pinch_PHX = pinch_PHX_existing - pinch_PHX;
        double deviation_dTemp_HTF_PHX = dTemp_HTF_PHX_existing - dTemp_HTF_PHX;
        
        if(abs(deviation_P_net + deviation_T_in_ref_blk + deviation_p_high + deviation_PR + deviation_pinch_PHX + deviation_dTemp_HTF_PHX) < 1e-3)
        {
            matching_index = file_index;
            status = 0; //******changing status to 0 from -1000 s.t. we dont need to gather the data
            printf("\nMatch: %s\n",config_file_path);
        }
        else
        { 
            printf("No match: %s\n",config_file_path);
        }
        
        
        file_index++; //**********increasing the file index
        
        //*********** Try opening the next file
        l = snprintf(NULL,0,"%d",file_index);
        index_string = malloc(sizeof(char*)*l); 

        sprintf(index_string,"%d",file_index); //convert integer into string  

        //Unify index_string with configname
        l = strlen(configbase) + strlen(index_string) + strlen(file_extension) + 1;
        configname = malloc(sizeof(char*)*l);
        strcpy(configname,configbase); //copy the "config" into configname
        strcat(configname,index_string); //concatenate configname with indexstring e.g. result config0
        strcat(configname,file_extension); //concatenate file extension e.g. config0.txt

        l = strlen(configname) + strlen(configdir) + 1;
        config_file_path = malloc(sizeof(char*)*l);
        strcpy(config_file_path,configdir); //copy the configdir into config_file_path
        strcat(config_file_path,configname);
        configfile = fopen(config_file_path,"r");
    }

    //************** If no file is matching --> matching index is -1000, 
    //************** force the value of matching index = file_index for foldering purpose of the new training data
    if(matching_index == -1000)
    {
        printf("No match in the data base!\n");
        matching_index = file_index;
        status = 1;
    }

    /*If status == 1, then we have to gather the training data, if status-*/
    index_and_status[0] = matching_index; 
    index_and_status[1] = status;
    return;
}

void generateTrainingData(double P_net, double T_in_ref_blk, double p_high, double PR, double pinch_PHX, double dTemp_HTF_PHX, int match_index, int numdata, char* basepath)
{
    char* training_dir_name = "/training_data-dummy/";
    int l = strlen(basepath) + strlen(training_dir_name) + 1;
    char* training_dir = malloc(sizeof(char*)*l);
    strcpy(training_dir,basepath);
    strcat(training_dir,training_dir_name);

    char* configbase = "config";

    /*Convert matching_index from integer to string*/
    l = snprintf(NULL,0,"%d",match_index);
    char* index_string = malloc(sizeof(char*)*l); 
    sprintf(index_string,"%d",match_index); //convert integer into string  

    l = strlen(training_dir) + strlen(configbase) + strlen(index_string) + 1;
    char* dirname = malloc(sizeof(char*)*l);
    strcpy(dirname,training_dir); //copy training_dir and insert it in dirname memory space
    strcat(dirname,configbase); //concatenate configbase with dirname e.g. result /training_data-dummy/config
    strcat(dirname,index_string); //concatenate index e.g. result /training_data-dummy/config0

    printf("%s\n",dirname);

    /*Call python function here to gather data*/
    // ppath: path of the Python script
    // pname: name of the Python script
    // pfunc: name of the Python function
    // psave: directory of saving the results from mcrt

    PyObject *pName, *pModule, *pFunc;
    PyObject *pArgs, *inputs;

    char* ppath = ".";
    char* pname = "gatherdata"; //gatherdata.py
    char* pfunc = "gather_data"; //def gather_data(inputs)

    Py_Initialize(); /*  Initialize Interpreter  */

    //Obtain the python path, append it with the ppath
    PyObject *sys_path = PySys_GetObject("path");
    PyList_Append(sys_path, PyString_FromString((char *) ppath));
  
    //Convert the pname into Python String
    pName = PyString_FromString(pname);

    //Import the script into C environment using PyImport_Import
    pModule = PyImport_Import(pName);
    Py_DECREF(pName);
    
    /*Check python script: exist or not!*/
    if (pModule != NULL) 
    {
        /*Obtain the function from the imported python script*/
        pFunc = PyObject_GetAttrString(pModule, pfunc);

        pArgs = PyTuple_New(1);

        /*if the function is callable*/
        if (pFunc && PyCallable_Check(pFunc)) 
        {
            /*Instantiate a python dictionary and assign it to inputs (pointer type)*/
            inputs = PyDict_New();

            /*Populate the python dictionary*/
            PyDict_SetItemString(inputs, "P_net", PyFloat_FromDouble(P_net));
            PyDict_SetItemString(inputs, "T_in_ref_blk", PyFloat_FromDouble(T_in_ref_blk));
            PyDict_SetItemString(inputs, "p_high", PyFloat_FromDouble(p_high));
            PyDict_SetItemString(inputs, "PR", PyFloat_FromDouble(PR));
            PyDict_SetItemString(inputs, "pinch_PHX", PyFloat_FromDouble(pinch_PHX));
            PyDict_SetItemString(inputs, "dTemp_HTF_PHX", PyFloat_FromDouble(dTemp_HTF_PHX));
            PyDict_SetItemString(inputs, "numdata", PyInt_FromLong(numdata));
            PyDict_SetItemString(inputs, "dirres", PyString_FromString((char *)dirname));
            
            PyTuple_SetItem(pArgs, 0, inputs);

            PyObject_CallObject(pFunc, pArgs);
            Py_DECREF(inputs);
            Py_DECREF(pArgs);
        }
        else 
        {
            if (PyErr_Occurred())
            {

                PyErr_Print();
            }
            fprintf(stderr, "Cannot find function \"%s\"\n", pfunc);
        }
        Py_XDECREF(pFunc);
        Py_DECREF(pModule);
    }

    /*if python script does not exist*/
    else 
    {
        PyErr_Print();
        fprintf(stderr, "Failed to load \"%s\"\n", pname);
    }


    //Py_DECREF(ppath);
    //Py_DECREF(pname);
    //Py_DECREF(pfunc);
    //Py_DECREF(sys_path);
    //Py_Finalize();

    return;
}

void* load_Kriging_training_data(char* filepathtraining)
{
    int rows = getNumOfData(filepathtraining);
    char line[limitSize];

    Kriging_training_struct* Kriging_training_point = malloc(sizeof(Kriging_training_struct)*rows);

    /*Open the file*/
    FILE* training_file = fopen(filepathtraining,"r");
    if (training_file==NULL)
    {
        printf("Your file doesn't exist mate! Check your address %s!\n",filepathtraining);
    }

    /*Let's skip the header, shall we?!*/
    fgets(line,limitSize,training_file);

    /*Read the data!*/
    fgets(line,limitSize,training_file);
    size_t i = 0;
    while(!feof(training_file))
    {
        sscanf
        (
            line,"%lf,%lf,%lf,%lf,%lf",
            &Kriging_training_point[i].scaled_deviation_load,
            &Kriging_training_point[i].scaled_deviation_T_HTF_in, 
            &Kriging_training_point[i].scaled_deviation_T_amb_input, 
            &Kriging_training_point[i].scaled_deviation_eta_gross, 
            &Kriging_training_point[i].scaled_deviation_eta_Q
        );
        i++;
        fgets(line,limitSize,training_file);
    }
    fclose(training_file);

    for(size_t i=0;i<rows;i++)
    {
        printf("%lf,%lf,%lf,%lf,%lf\n",
        Kriging_training_point[i].scaled_deviation_load,
        Kriging_training_point[i].scaled_deviation_T_HTF_in,
        Kriging_training_point[i].scaled_deviation_T_amb_input,
        Kriging_training_point[i].scaled_deviation_eta_gross,
        Kriging_training_point[i].scaled_deviation_eta_Q);
    }
    return Kriging_training_point;
}

char* constructKriging(double P_net, double T_in_ref_blk,double p_high, double PR, double pinch_PHX, double dTemp_HTF_PHX,double load_base, double T_amb_base, double eta_gross_base, double eta_Q_base, char* base_path, int match_index)
{
    char line[limitSize];

    char* traindir_base = "/training_data-dummy/";
    char* config_base = "config";
    int l = snprintf(NULL,0,"%d",match_index); 
    char* index_string = malloc(sizeof(char*)*l);    
    
    sprintf(index_string,"%d",match_index); //convert integer into string  

    /*Build the file name for training, validation, min, max, kriging params*/           
    l = strlen(base_path) + strlen(traindir_base) + strlen(config_base) + strlen(index_string) + 1;
    char* trainingdir = malloc(sizeof(char*)*l);
    strcpy(trainingdir,base_path); //copy the basepath into traindir_base
    strcat(trainingdir,traindir_base); //concatenate traindir base with basepath e.g. result /home/philgun/Documents/codecodecode/codecodecode/GSL_Project/training_data-dummy/
    strcat(trainingdir,config_base); //concatenate trainingdir with config_base e.g. result /home/philgun/Documents/codecodecode/codecodecode/GSL_Project/training_data-dummy/config
    strcat(trainingdir,index_string); //concatenate match_index e.g. ./training_data-dummy/config4
    
    char* name_prediction_validation_dump = "/validation_prediction.csv";
    char* name_R_squared = "/R_Squared.txt";
    char* name_training = "/scaled_Kriging_training_data_deviation.csv";
    char* name_validation = "/validation_data.csv";
    char* name_min = "/min.txt";
    char* name_max = "/max.txt";
    char* name_krig_param_eta_PB = "/Kriging_Param_eta_PB.txt";
    char* name_krig_param_eta_Q = "/Kriging_Param_eta_Q.txt";

    //Start building file name
    l = strlen(trainingdir) + strlen(name_prediction_validation_dump) + 1;
    char* filepathpredictionvalidation = malloc(sizeof(char*)*l);
    strcpy(filepathpredictionvalidation,trainingdir);
    strcat(filepathpredictionvalidation,name_prediction_validation_dump);// result e.g. ./training_data-dummy/config4/validation_prediction.csv

    l = strlen(trainingdir) + strlen(name_R_squared) + 1;
    char* filepathRsquared = malloc(sizeof(char*)*l);
    strcpy(filepathRsquared,trainingdir);
    strcat(filepathRsquared,name_R_squared);// result e.g. ./training_data-dummy/config4/R_squared.txt

    l = strlen(trainingdir) + strlen(name_training) + 1;
    char* filepathtraining = malloc(sizeof(char*)*l);
    strcpy(filepathtraining,trainingdir);
    strcat(filepathtraining,name_training);// result e.g. ./training_data-dummy/config4/training_data.csv

    l = strlen(trainingdir) + strlen(name_validation) + 1;
    char* filepathvalidation = malloc(sizeof(char*)*l);
    strcpy(filepathvalidation,trainingdir);
    strcat(filepathvalidation,name_validation); // result e.g. ./training_data-dummy/config4/vailidation_data.csv

    l = strlen(trainingdir) + strlen(name_min) + 1;
    char* filepathmin = malloc(sizeof(char*)*l);
    strcpy(filepathmin,trainingdir);
    strcat(filepathmin,name_min); // result e.g. ./training_data-dummy/config4/min.txt

    l = strlen(trainingdir) + strlen(name_max) + 1; 
    char* filepathmax = malloc(sizeof(char*)*l);
    strcpy(filepathmax,trainingdir);
    strcat(filepathmax,name_max); // result e.g. ./training_data-dummy/config4/max.txt

    l = strlen(trainingdir) + strlen(name_krig_param_eta_PB) + 1;
    char* filepath_kriging_param_eta_PB = malloc(sizeof(char*)*l);
    strcpy(filepath_kriging_param_eta_PB,trainingdir);
    strcat(filepath_kriging_param_eta_PB,name_krig_param_eta_PB);

    l = strlen(trainingdir) + strlen(name_krig_param_eta_Q) + 1;
    char* filepath_kriging_param_eta_Q = malloc(sizeof(char*)*l);
    strcpy(filepath_kriging_param_eta_Q,trainingdir);
    strcat(filepath_kriging_param_eta_Q,name_krig_param_eta_Q);
    /*End building the file name*/

    int stop = 0;

    //*************** initial number of training data
    int numdata = 25;

    while(stop == 0)
    {
        printf("Start gathering %d off-design data points\n",numdata);
        clock_t begin = clock();
        generateTrainingData(
            P_net, T_in_ref_blk, p_high, PR, pinch_PHX, dTemp_HTF_PHX, match_index, numdata, base_path
            );
        
        clock_t end = clock();
        double time_spent = (double)(end-begin) / CLOCKS_PER_SEC;

        printf("Finish gathering %d points off-design data: it took %lf s\n",numdata,time_spent);
    
        /*Scaler - Read from txt file UB and LB*/
        FILE *fnmax = fopen(filepathmax,"r"); //instantiate pointer to the filepathmax
        if(fnmax==NULL)
        {
            printf("File path max data doesn't exist! Check your path %s\n",filepathmax);
        }

        double* UB = malloc(sizeof(double*)*5);
        size_t i = 0;
        fgets(line,limitSize,fnmax); //get the first line of fnmax, and store it in variable line
        while(!feof(fnmax))
        {
            sscanf(line,"%lf",&UB[i]);
            i++;
            fgets(line,limitSize,fnmax); //get the next line
        }

        fclose(fnmax);


        FILE *fnmin = fopen(filepathmin,"r"); //instantiate pointer to the filepathmin

        if(fnmin==NULL)
        {
            printf("File path min data doesn't exist! Check your path %s\n",filepathmin);
        }

        double* LB = malloc(sizeof(double*)*5);
        i = 0;
        fgets(line,limitSize,fnmin);
        while(!feof(fnmin))
        {
            sscanf(line,"%lf",&LB[i]);
            i++;
            fgets(line,limitSize,fnmin);
        }
        
        fclose(fnmin);
        
        double deviation_load_max = UB[0];    
        double deviation_T_in_max = UB[1];    
        double deviation_T_amb_max = UB[2];   
        double deviation_eta_gross_max = UB[3];   
        double deviation_eta_Q_max = UB[4];   
        
        double deviation_load_min = LB[0];    
        double deviation_T_in_min = LB[1];   
        double deviation_T_amb_min = LB[2];   
        double deviation_eta_gross_min = LB[3];
        double deviation_eta_Q_min = LB[4];
        /*End scaler*/
        
        /*Reading Kriging Parameters*/
        //***********************PB
        FILE* fnkrigparam = fopen(filepath_kriging_param_eta_PB,"r");
        if(fnkrigparam==NULL)
        {
            printf("File path Kriging Param for PB doesn't exist! Check your path %s\n",filepath_kriging_param_eta_PB);
        }
        double* krig_param_PB = malloc(sizeof(double*)*3);
        fgets(line,limitSize,fnkrigparam);
        sscanf(line,"%lf,%lf,%lf",&krig_param_PB[0],&krig_param_PB[1],&krig_param_PB[2]);
        fclose(fnkrigparam);

        double sill_PB = krig_param_PB[0];
        double Nugget_PB = krig_param_PB[1];
        double Spherical_PB = 1-sill_PB;
        double Range_PB = krig_param_PB[2];

        //***********************HX
        fnkrigparam = fopen(filepath_kriging_param_eta_Q,"r");
        if(fnkrigparam==NULL)
        {
            printf("File path Kriging Param for HX doesn't exist! Check your path %s\n",filepath_kriging_param_eta_Q);
        }
        double* krig_param_HX = malloc(sizeof(double*)*3);
        fgets(line,limitSize,fnkrigparam);
        sscanf(line,"%lf,%lf,%lf",&krig_param_HX[0],&krig_param_HX[1],&krig_param_HX[2]);
        fclose(fnkrigparam);

        double sill_HX = krig_param_HX[0];
        double Nugget_HX = krig_param_HX[1];
        double Spherical_HX = 1-sill_HX;
        double Range_HX = krig_param_HX[2];
        /*End reading Kriging Parameters*/

        /*Start reading the training data and validation data*/
        int rows = getNumOfData(filepathvalidation);
        
        struct PB_validation_data_point test_data[rows];  
        int inputsize = 3;
        int outputsize = 2;
        double* inputs = malloc(sizeof(double*)*inputsize);

        /*Loop through all the test file*/
        FILE* testfile = fopen(filepathvalidation,"r");
        fgets(line,limitSize,testfile); //====> skip the first line
        fgets(line,limitSize,testfile);
        i = 0;

        double squared_error_eta_PB = 0;
        double squared_error_eta_HX = 0;

        double absolute_error_eta_PB = 0;
        double absolute_error_eta_Q = 0;

        printf("SIL PB: %lf, NUGGET PB: %lf, RANGE PB: %lf\n",sill_PB,Nugget_PB,Range_PB);
        printf("SIL HX: %lf, NUGGET HX: %lf, RANGE HX: %lf\n",sill_HX,Nugget_HX,Range_HX);      

        printf("MAX : %lf,%lf,%lf,%lf,%lf\n",deviation_load_max,deviation_T_in_max,deviation_T_amb_max,deviation_eta_gross_max,deviation_eta_Q_max);      
        
        printf("MIN : %lf,%lf,%lf,%lf,%lf\n",deviation_load_min,deviation_T_in_min,deviation_T_amb_min,deviation_eta_gross_min,deviation_eta_Q_min);

        FILE* dump = fopen(filepathpredictionvalidation,"a");
        fprintf(dump,"eta_gross_prediction,eta_Q_prediction\n");


        /*reading kriging training data*/
        Kriging_training_struct* Kriging_training_point = load_Kriging_training_data(filepathtraining);

        while(!feof(testfile))
        {
            sscanf
            (
                line,"%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf",
                &test_data[i].P_net,
                &test_data[i].T_in_ref_blk,
                &test_data[i].p_high,
                &test_data[i].PR,
                &test_data[i].pinch_PHX,
                &test_data[i].dTemp_HTF_PHX,
                &test_data[i].load,
                &test_data[i].T_HTF_in,
                &test_data[i].T_amb_input,
                &test_data[i].eta_gross,
                &test_data[i].eta_Q
            );

            /*Calculate the deviation from the on design parameter*/
            double deviation_load = load_base - test_data[i].load;
            double deviation_T_in = T_in_ref_blk - test_data[i].T_HTF_in;
            double deviation_T_amb = T_amb_base - test_data[i].T_amb_input;

            /*Scale the input*/
            double scaled_load = (deviation_load - deviation_load_min) / (deviation_load_max - deviation_load_min);
            double scaled_T_HTF_in = (deviation_T_in - deviation_T_in_min) / (deviation_T_in_max - deviation_T_in_min);
            double scaled_T_amb_input = (deviation_T_amb - deviation_T_amb_min) / (deviation_T_amb_max - deviation_T_amb_min);

            inputs[0] = scaled_load; 
            inputs[1] = scaled_T_HTF_in; 
            inputs[2] = scaled_T_amb_input;

            /*ESTIMATE PB EFFICIENCY*/
            int index_eta_gross_in_training_data = 3; 
            double deviation_estimate_eta_gross_scaled = kriging(
                filepathtraining,Nugget_PB,Spherical_PB,Range_PB,inputs,inputsize,outputsize,index_eta_gross_in_training_data,"spherical",Kriging_training_point
                );

            double deviation_estimate_eta_gross = deviation_estimate_eta_gross_scaled * (deviation_eta_gross_max-deviation_eta_gross_min) + deviation_eta_gross_min;
            double estimate_eta_gross = eta_gross_base - deviation_estimate_eta_gross;

            /*ESTIMATE HX EFFICIENCY*/   
            int index_eta_Q_in_training_data = 4;
            double deviation_estimate_eta_Q_scaled = kriging(
                filepathtraining,Nugget_HX,Spherical_HX,Range_HX,inputs,inputsize,outputsize,index_eta_Q_in_training_data,"spherical",Kriging_training_point
                );
            
            double deviation_estimate_eta_Q = deviation_estimate_eta_Q_scaled * (deviation_eta_Q_max-deviation_eta_Q_min) + deviation_eta_Q_min;
            double estimate_eta_Q = eta_Q_base - deviation_estimate_eta_Q;  

            fprintf(dump,"%lf,%lf\n",estimate_eta_gross,estimate_eta_Q);

            //Error calculation - Sum of mean square
            double delta_eta_PB = estimate_eta_gross - test_data[i].eta_gross;
            double delta_eta_HX = estimate_eta_Q - test_data[i].eta_Q;
            squared_error_eta_PB += (delta_eta_PB*delta_eta_PB);
            squared_error_eta_HX += (delta_eta_HX*delta_eta_HX);

            absolute_error_eta_PB += fabs(delta_eta_PB);
            absolute_error_eta_Q += fabs(delta_eta_HX);

            printf("%lf - %lf = %lf\n",estimate_eta_gross,test_data[i].eta_gross,delta_eta_PB);
            printf("%lf - %lf = %lf\n",estimate_eta_Q,test_data[i].eta_Q,delta_eta_HX);
            
            /*Read next line*/
            fgets(line,limitSize,testfile);
            i++;
        }

        //Coefficient of determination (R squared)
        double sum_real_eta_PB = 0;
        double sum_real_eta_HX = 0;

        for(size_t i=0;i<rows;i++)
        {
            sum_real_eta_PB += test_data[i].eta_gross;
            sum_real_eta_HX += test_data[i].eta_Q;
        }

        double mean_real_eta_PB = sum_real_eta_PB / rows;
        double mean_real_eta_HX = sum_real_eta_HX/ rows;

        double variance_eta_PB;
        double variance_eta_HX;

        for(size_t i=0;i<rows;i++)
        {
            variance_eta_PB += (test_data[i].eta_gross - mean_real_eta_PB) * (test_data[i].eta_gross - mean_real_eta_PB);
            variance_eta_HX += (test_data[i].eta_Q - mean_real_eta_HX) * (test_data[i].eta_Q - mean_real_eta_HX);
        }

        double R_squared_eta_PB = 1 - (squared_error_eta_PB / variance_eta_PB);
        double R_squared_eta_HX = 1 - (squared_error_eta_HX / variance_eta_HX);
        double R_combination = (R_squared_eta_HX+R_squared_eta_PB)/2;

        double MAE_eta_PB = absolute_error_eta_PB/rows;
        double MAE_eta_HX = absolute_error_eta_Q/rows;
        double MAE_combination = (MAE_eta_HX + MAE_eta_PB)/2;

        printf("\n------------------------------------------------\n");
        printf("------------------------------------------------\n");
        printf("--------SURROGATE VALIDATION RESULT-------------\n");
        printf("------------------------------------------------\n");
        printf("------------------------------------------------\n\n");

        printf("Sum of square error PB eff: %lf, R squared PB eff: %lf, MAE eta PB eff: %lf\n",squared_error_eta_PB,R_squared_eta_PB, MAE_eta_PB);
        printf("Sum of square error HX eff: %lf, R squared HX eff: %lf, MAE eta HX eff: %lf\n",squared_error_eta_HX,R_squared_eta_HX, MAE_eta_HX);
        printf("R squared: %lf\n",R_combination);

        /*Stop criterion*/
        if(MAE_combination < 1)
        {
            printf("Model OK!\n");
            stop = 1;
        }
        else
        {
            printf("Model is still not OK! Need more data!\n");
            numdata = 25;
        }

        /*Dump evaluation result to a file*/
        FILE* fnRsquared = fopen(filepathRsquared,"a");
        fprintf(fnRsquared,"%lf,%lf\n",MAE_combination,R_combination);
        fclose(fnRsquared);

        printf("\n------------------------------------------------\n");
        printf("------------------------------------------------\n");
        printf("------------------------------------------------\n");
        printf("------------------------------------------------\n");
        printf("------------------------------------------------\n\n");

        fclose(testfile); 
        fclose(dump);
        free(UB);
        free(LB);
    }
        
    free(filepathpredictionvalidation);
    free(filepathRsquared);
    free(filepathvalidation);
    free(filepathmax);
    free(filepathmin);
    free(filepath_kriging_param_eta_PB);
    free(filepath_kriging_param_eta_Q);
    return filepathtraining;
}

char* constructANN(double P_net, double T_in_ref_blk,double p_high, double PR, double pinch_PHX, double dTemp_HTF_PHX,double load_base, double T_amb_base, double eta_gross_base, double eta_Q_base, char* base_path, int match_index)
{
    printf("User choice of surrogate = ANN\n");
    char line[limitSize];

    char* traindir_base = "/training_data-dummy/";
    char* config_base = "config";
    int l = snprintf(NULL,0,"%d",match_index); 
    char* index_string = malloc(sizeof(char*)*l);    
    
    sprintf(index_string,"%d",match_index); //convert integer into string  

    /*Build the file name for training, validation, min, max, kriging params*/           
    l = strlen(base_path) + strlen(traindir_base) + strlen(config_base) + strlen(index_string) + 1;
    char* trainingdir = malloc(sizeof(char*)*l);
    strcpy(trainingdir,base_path); //copy the basepath into traindir_base
    strcat(trainingdir,traindir_base); //concatenate traindir base with basepath e.g. result /home/philgun/Documents/codecodecode/codecodecode/GSL_Project/training_data-dummy/
    strcat(trainingdir,config_base); //concatenate trainingdir with config_base e.g. result /home/philgun/Documents/codecodecode/codecodecode/GSL_Project/training_data-dummy/config
    strcat(trainingdir,index_string); //concatenate match_index e.g. /home/philgun/Documents/codecodecode/codecodecode/GSL_Project/training_data-dummy/config4

    l = strlen(trainingdir) + strlen("/") + 1;
    char* prefixres = malloc(sizeof(char*)* l);
    strcpy(prefixres,trainingdir);
    strcat(prefixres,"/"); // /home/philgun/Documents/codecodecode/codecodecode/GSL_Project/training_data-dummy/config4/
    
    char* name_prediction_validation_dump = "/validation_prediction.csv";
    char* name_quality = "/quality.txt";
    char* name_training_eta_PB = "/deviation_eta_gross.csv";
    char* name_training_eta_Q = "/deviation_eta_Q.csv";
    char* name_validation = "/validation_data.csv";
    char* name_min = "/min.txt";
    char* name_max = "/max.txt";

    //Start building file name
    l = strlen(trainingdir) + strlen(name_prediction_validation_dump) + 1;
    char* filepathpredictionvalidation = malloc(sizeof(char*)*l);
    strcpy(filepathpredictionvalidation,trainingdir);
    strcat(filepathpredictionvalidation,name_prediction_validation_dump);// result e.g. ./training_data-dummy/config4/validation_prediction.csv

    l = strlen(trainingdir) + strlen(name_quality) + 1;
    char* filepathRsquared = malloc(sizeof(char*)*l);
    strcpy(filepathRsquared,trainingdir);
    strcat(filepathRsquared,name_quality);// result e.g. ./training_data-dummy/config4/quality.txt

    l = strlen(trainingdir) + strlen(name_training_eta_PB) + 1;
    char* filepathtraining_eta_PB = malloc(sizeof(char*)*l);
    strcpy(filepathtraining_eta_PB,trainingdir);
    strcat(filepathtraining_eta_PB,name_training_eta_PB);// result e.g. ./training_data-dummy/config4/deviation_eta_gross.csv

    l = strlen(trainingdir) + strlen(name_training_eta_Q) + 1;
    char* filepathtraining_eta_Q = malloc(sizeof(char*)*l);
    strcpy(filepathtraining_eta_Q,trainingdir);
    strcat(filepathtraining_eta_Q,name_training_eta_Q);// result e.g. ./training_data-dummy/config4/deviation_eta_Q.csv

    l = strlen(trainingdir) + strlen(name_validation) + 1;
    char* filepathvalidation = malloc(sizeof(char*)*l);
    strcpy(filepathvalidation,trainingdir);
    strcat(filepathvalidation,name_validation); // result e.g. ./training_data-dummy/config4/vailidation_data.csv

    l = strlen(trainingdir) + strlen(name_min) + 1;
    char* filepathmin = malloc(sizeof(char*)*l);
    strcpy(filepathmin,trainingdir);
    strcat(filepathmin,name_min); // result e.g. ./training_data-dummy/config4/min.txt

    l = strlen(trainingdir) + strlen(name_max) + 1; 
    char* filepathmax = malloc(sizeof(char*)*l);
    strcpy(filepathmax,trainingdir);
    strcat(filepathmax,name_max); // result e.g. ./training_data-dummy/config4/max.txt
    /*End building the file name*/

    int stop = 0;

    //*************** initial number of training data
    int numdata = 11;

    while(stop == 0)
    {
        printf("Start gathering %d off-design data points\n",numdata);
        clock_t begin = clock();

        generateTrainingData(
            P_net, T_in_ref_blk, p_high, PR, pinch_PHX, dTemp_HTF_PHX, match_index, numdata, base_path
            );
            
        clock_t end = clock();
        double time_spent = (double)(end-begin) / CLOCKS_PER_SEC;

        printf("Finish gathering %d points off-design data: it took %lf s\n",numdata,time_spent);

        /*Training ANN for predicting eta_PB.*/
        int count = 0; //==> indexing the ANN model, 0 is for PB model, while 1 is for HX model
        char* path_ANN_eta_PB = trainingANN(filepathtraining_eta_PB,prefixres,count);

        count = 1;
        char* path_ANN_eta_HX = trainingANN(filepathtraining_eta_Q,prefixres,count);
    }
    
}

char* trainingANN(char* fn_data, char* prefixres, int count)
{
    /*Call python function here to train ANN data*/
    // ppath: path of the Python script
    // pname: name of the Python script
    // pfunc: name of the Python function
    // psave: directory of saving the results from mcrt

    char* ANN_model_path;

    PyObject *pName, *pModule, *pFunc;
    PyObject *pArgs, *inputs, *retValue;

    char* ppath = ".";
    char* pname = "ANN"; //ANN.py
    char* pfunc = "trainANN"; //def train_ANN(inputs)

    Py_Initialize(); /*  Initialize Interpreter  */

    //Obtain the python path, append it with the ppath
    PyObject *sys_path = PySys_GetObject("path");
    PyList_Append(sys_path, PyString_FromString((char *) ppath));
  
    //Convert the pname into Python String
    pName = PyString_FromString(pname);

    //Import the script into C environment using PyImport_Import
    pModule = PyImport_Import(pName);
    Py_DECREF(pName);
    
    /*Check python script: exist or not!*/
    if (pModule != NULL) 
    {
        /*Obtain the function from the imported python script*/
        pFunc = PyObject_GetAttrString(pModule, pfunc);

        pArgs = PyTuple_New(1);

        /*if the function is callable*/
        if (pFunc && PyCallable_Check(pFunc)) 
        {
            /*Instantiate a python dictionary and assign it to inputs (pointer type)*/
            inputs = PyDict_New();

            /*Populate the python dictionary*/
            PyDict_SetItemString(inputs, "fn_data", PyString_FromString(fn_data));
            PyDict_SetItemString(inputs, "prefixres", PyString_FromString(prefixres));
            PyDict_SetItemString(inputs, "count", PyInt_FromLong(count));
            
            PyTuple_SetItem(pArgs, 0, inputs);

            retValue = PyObject_CallObject(pFunc, pArgs);
            ANN_model_path = PyString_AsString(retValue);

            Py_DECREF(inputs);
            Py_DECREF(pArgs);
            Py_DECREF(retValue);
        }
        else 
        {
            if (PyErr_Occurred())
            {

                PyErr_Print();
            }
            fprintf(stderr, "Cannot find function \"%s\"\n", pfunc);
        }
        Py_XDECREF(pFunc);
        Py_DECREF(pModule);
    }

    /*if python script does not exist*/
    else 
    {
        PyErr_Print();
        fprintf(stderr, "Failed to load \"%s\"\n", pname);
    }


    //Py_DECREF(ppath);
    //Py_DECREF(pname);
    //Py_DECREF(pfunc);
    //Py_DECREF(sys_path);
    //Py_Finalize();
    return ANN_model_path;
}

/*
int test_program(char* filepath_test_algorithm)
{
    int inputsize_test_algorithm = 2;
    int outputsize_test_algorithm = 1;
    double* inputs_test_algorithm = malloc(sizeof(double*)*inputsize_test_algorithm);

    inputs_test_algorithm[0]=30; inputs_test_algorithm[1] = 25;
    int index = 2;

    double estimate_test_algorithm = kriging(
        filepath_test_algorithm,
        0.0,
        1.0,
        300.0,
        inputs_test_algorithm,
        inputsize_test_algorithm,
        outputsize_test_algorithm,
        index,
        "spherical"
        );
    
    
    if(abs(estimate_test_algorithm-0.145824)>1e-4)
    {
        return -1;
    }
    return 1;
}
*/

/*
void test_kriging(double X1, double X2)
{
    double* x1 = malloc(sizeof(double*)*21);
    double* x2 = malloc(sizeof(double*)*21);

    double step = (1-0.2) / 20;

    double val = 0;

    for(size_t i=0;i<21;i++)
    {
        x1[i] = val;
        x2[i] = val;
        val = val + step;
    }

    double** brainin_data_train = malloc(sizeof(double*)*421);
    for(size_t i=0;i<21;i++)
    {
         malloc(sizeof(double*)*3);
    }

    genBraninData(x1,x2,brainin_data_train);
}

double Branin(double x1_raw,double x2_raw)
{
    double x1 = scaler_x1(x1_raw);
    double x2 = scaler_x2(x2_raw);

    double tmp1 = pow(
        (x2 - 5.1/(4 * pow(M_PI,2) *x2) + (5/M_PI * x1) - 6),
        2);

    double tmp2 = 10 * ((1-1/(8*M_PI)) * cos(x1) + 1) + 5 * x1;

    double y = tmp1 + tmp2;
    
    return y;
}

void genBraninData(double* x1, double* x2, double** brainin_data_train)
{
    for(size_t i=0;i<21;i++)
    {
        for(size_t j=0;j<21;j++)
        {
            brainin_data_train[i][0] = x1[i];
            brainin_data_train[i][1] = x2[i];

            double y = Branin(x1[i],x2[i]); 
            brainin_data_train[i][2] = y;
        }
    }
}

double scaler_x1(double x1)
{
    double x1_UB = 10;
    double x1_LB = -5;

    double x1_real = x1_LB + x1 * (x1_UB-x1_LB);
    return x1_real;
}

double scaler_x2(double x2)
{
    double x2_UB = 15;
    double x2_LB = 0;

    double x2_real = x2_LB + x2 * (x2_UB-x2_LB);
    return x2_real;
}
*/
