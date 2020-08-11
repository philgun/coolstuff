import lib
import numpy as np
import pandas as pd 
import matplotlib.pyplot as plt 
import math
import itertools
from itertools import combinations, permutations
import os
import seaborn as sns
import scipy
import random

cwd = os.getcwd()

if os.path.exists('./result'):
    os.system('rm -rf result')

os.makedirs("result")

#How many beacons and best reference points?
howmanybestreferencepoints = 5
howmanybeacons = 2

#Generate test point coordinates
test_coordinate = lib.generateTest()

#Generate training point coordinates
training_coordinate = lib.generateRef()

#Import data distance estimation
fn = "%s/data/data-master-1.7-validation.xlsx"%(cwd)
dataAll = lib.importData(fn)

#Import RSI data test points
fnRSITest = "%s/data/AverageTesting.csv"%(cwd)
rsiDataTest = lib.genRSIData(fnRSITest)

#Import RSI data training points
fnRSITrain = "%s/data/AverageTraining.csv"%(cwd)
rsiDataTrain = lib.genRSIData(fnRSITrain)

for index_test in range(dataAll[0].shape[0]): #
    #Change directory to result
    os.chdir(cwd)
    os.chdir("./result")
        
    #Make new directory for each test point
    dirpoint = "titik_test_%s"%(index_test)
    os.makedirs(dirpoint)
    os.chdir(dirpoint)

    #Beacon selection
    rsiTest = rsiDataTest[index_test,:]
    indexAllTest = np.argsort(rsiTest)

    #Check if the distance estimations are more than 3 real values
    lenindexallTest = len(indexAllTest)
    fix_beacon_index = []
    for i in range(lenindexallTest-1,-1,-1):
        checker = 0
        best_beacon_candidate = indexAllTest[i]
        candidate_data = dataAll[best_beacon_candidate][index_test,:]
        for d in candidate_data:
            if d !=0:
                checker +=1
            if checker >= 3:
                fix_beacon_index.append(best_beacon_candidate)
                break
        if len(fix_beacon_index) == howmanybeacons: #if len of beacon == user's preference -> break
            break
    print(fix_beacon_index)

    #Choose the best X reference training points for each beacon
    for idx in fix_beacon_index:
        change = "%s/result/%s"%(cwd,dirpoint)
        os.chdir(change)

        #Make new directory for each beacon
        dirbeacon = "beacon_%s"%(idx+1)
        os.makedirs(dirbeacon)

        #Change dir to dir beacon
        os.chdir(dirbeacon)
        
        #Create a file res in dirbeacon
        fnres = "res.csv"
        f = open(fnres,'w')
        f.write("xtrue,ytrue,xpred,ypred,AbsoluteError_x,AbsoluteError_y,x1,y1,r1,x2,y2,r2,x3,y3,r3\n")
        f.close()

        rsiTrain = rsiDataTrain[:,idx]
        
        indexAllTrain = np.argsort(rsiTrain)
        lenindexallTrain = len(indexAllTrain)

        #Get the training points which have distance estimate != 0
        training_point_fix = []
        iter = 0
        data_distance_estimate = dataAll[idx][index_test,:]
        for i in range(lenindexallTrain-1,-1,-1):
            best_trainingindex_candidate = indexAllTrain[i]
            c = data_distance_estimate[best_trainingindex_candidate]
            if c!=0:
                training_point_fix.append(best_trainingindex_candidate)
                iter+=1
            if iter == howmanybestreferencepoints: #if len of training point fix == user's preference -> break
                break

        for t in training_point_fix:
            x1,y1 = training_coordinate[t]

        combi = list(combinations(training_point_fix,3))

        #Trilateration
        for i in range(len(combi)):
            x1,y1 = training_coordinate[combi[i][0]]
            x2,y2 = training_coordinate[combi[i][1]]
            x3,y3 = training_coordinate[combi[i][2]]

            #Check mathematical validity 
            A = 2*x2 - 2*x1
            B = 2*y2 - 2*y1
            D = 2*x3 - 2*x2
            E = 2*y3 - 2*y2
            EA_BD = E*A - B*D

            if EA_BD != 0: #If mathematically valid, proceed!
                r1 = data_distance_estimate[combi[i][0]]
                r2 = data_distance_estimate[combi[i][1]]
                r3 = data_distance_estimate[combi[i][2]]

                xpred,ypred = lib.triangulation(x1,y1,r1,x2,y2,r2,x3,y3,r3)
                xtrue,ytrue = test_coordinate[index_test]
                            
                #Write the result
                f = open(fnres,"a")
                f.write("%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f\n"%(xtrue,ytrue,xpred,ypred,abs(xpred-xtrue),abs(ypred-ytrue)
                ,x1,y1,r1,x2,y2,r2,x3,y3,r3))
                f.close()
        



