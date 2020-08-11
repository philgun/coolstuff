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

#Data selection
# 0 -> 1.6xlsx
# 1 -> 1.7xlsx
# 2 -> 1.8.xlsx
# Example given:
# For importing all data :
#	whichdata = [0,1,2]
# 1.6 only :
#	whichdata = [0]
whichdata = [0,1,2]

#Simulation boundaries:
#1. How many (%) of combination that want to be considered e.g. 0.1,0.2,0.5 etc.
#2. How many data points inside the confidence interval will be considered e.g. 2,3,4,5 etc.
pctcombi = 0.1
maxcandidates = 5

cwd = os.getcwd()

if os.path.exists('./result'):
    os.system('rm -rf result')

os.makedirs("result")



#Generate test point coordinates
test_coordinate = lib.generateTest()

#Generate training point coordinates
training_coordinate = lib.generateRef()
num_training = len(training_coordinate)

#Generate combinations
combi = list(combinations(np.arange(0,num_training,1),3))
lencombi = len(combi)
limitcombi = int(pctcombi*lencombi)
print("Total combination: ",lencombi)
print("Maximum combination considered: ",limitcombi)

#Import data
fn0 = "%s/data/1.6.xlsx"%(cwd)
fn1 = "%s/data/1.7.xlsx"%(cwd)
fn2 = "%s/data/1.8.xlsx"%(cwd)
fns = [fn0,fn1,fn2]
dataAll = []
for i in whichdata:
    dataAll.append(lib.importData(fns[i]))

#For loop tes coordinate start here
for index_test in range(dataAll[0][0].shape[0]):
    print("Titik test ",index_test)
    #File res
    fnres = "result/res_titik_%s.csv"%(index_test)
    f = open(fnres,'w')
    f.write("xtrue,ytrue,xpred,ypred,x1,y1,r1,x2,y2,r2,x3,y3,r3\n")
    f.close()

    iterc = 0
    while iterc < limitcombi:
        #Pick randomly which combinations
        c = combi[random.randint(0,lencombi-1)]

        #Get training point coordinate
        x1,y1 = training_coordinate[c[0]]
        x2,y2 = training_coordinate[c[1]]
        x3,y3 = training_coordinate[c[2]]

        #Check mathematical validity 
        A = 2*x2 - 2*x1
        B = 2*y2 - 2*y1
        D = 2*x3 - 2*x2
        E = 2*y3 - 2*y2
        EA_BD = E*A - B*D

        if EA_BD != 0: #If mathematically valid, proceed!
            #Increment iterc
            iterc += 1
            if(iterc % 1000 == 0):
                print(iterc)

            #Get the data for ref 1,2,3 from 24 beacons
            candidate_radius_1 = []
            candidate_radius_2 = []
            candidate_radius_3 = []
            for i in range(len(dataAll)):           #depends on how many excels are imported
                for j in range(len(dataAll[i])):    #24 ~ num beacons
                    r1 = dataAll[i][j][index_test,c[0]]
                    r2 = dataAll[i][j][index_test,c[1]]
                    r3 = dataAll[i][j][index_test,c[2]]

                    candidate_radius_1.append(r1)
                    candidate_radius_2.append(r2)
                    candidate_radius_3.append(r3)
            
            #Find confidence interval for each candidate_radius 95%
            ci_rad1 = lib.getConfidenceInterval(0.95,candidate_radius_1)
            ci_rad2 = lib.getConfidenceInterval(0.95,candidate_radius_2)
            ci_rad3 = lib.getConfidenceInterval(0.95,candidate_radius_3)

            #Get estimated radius within the CI
            r1=[]
            r2=[]
            r3=[]
            for i in range(len(candidate_radius_1)):
                a = candidate_radius_1[i]
                b = candidate_radius_2[i]
                c = candidate_radius_3[i]

                if a >= ci_rad1[0] and a <= ci_rad1[1]:
                    r1.append(a)
                if b >= ci_rad2[0] and b <= ci_rad2[1]:
                    r2.append(b)           
                if c >= ci_rad3[0] and c <= ci_rad3[1]:
                    r3.append(c)
                
                #Break from the loop if data length bigger than allowable length
                if len(r1) > maxcandidates and len(r2) > maxcandidates and len(r3) > maxcandidates:
                    break

            lim = min(len(r1),len(r2),len(r3))
            r1,r2,r3 = r1[0:lim],r2[0:lim],r3[0:lim]

            #Triangulation
            for i in range(len(r1)):
                for j in range(len(r2)):
                    for k in range(len(r3)):
                        r1data = r1[i]
                        r2data = r2[j]
                        r3data = r3[k]
                        xpred,ypred = lib.triangulation(x1,y1,r1data,x2,y2,r2data,x3,y3,r3data)
                        xtrue,ytrue = test_coordinate[index_test]
                        f = open(fnres,"a")
                        f.write("%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f\n"%(xtrue,ytrue,xpred,ypred,x1,y1,r1data,x2,y2,r2data,x3,y3,r3data))
                        f.close()

            






        


    '''
    #Import data
    fn = "/home/philgun/Desktop/python-project/job/data/data-master-2.xlsx"
    dataAll = lib.importData(fn)

    #

    numBeacon = 3

    for index_test in range(rsiDataAll.shape[0]):
        #TEST for test point 1 index= 0

        #Back to cwd
        os.chdir(cwd)

        #Create the result directory if not exist and go into the result directory
        resdir = "%s/result/titik_%d"%(cwd,index_test)
        if not os.path.exists(resdir):
            os.makedirs(resdir)
        os.chdir(resdir)

        #Create a csv inisde resdir to dump the result
        resname = "result.csv"
        f = open(resname,'w')
        f.write("xpred,ypred,xtrue,ytrue,x1,y1,r1,x2,y2,r2,x3,y3,r3\n")
        f.close()

        #Beacon selection
        rsiData = rsiDataAll[index_test,:]
        indexAll = np.argsort(rsiData)
        index = indexAll[len(indexAll)-numBeacon:]
        
        #Check mathematical validity 
        x1,y1 = beacon_coordinate[index[0]]
        x2,y2 = beacon_coordinate[index[1]]
        x3,y3 = beacon_coordinate[index[2]]
        A = 2*x2 - 2*x1
        B = 2*y2 - 2*y1
        D = 2*x3 - 2*x2
        E = 2*y3 - 2*y2
        EA_BD = E*A - B*D
        aaaa = 0
        while EA_BD == 0: #If mathematically not valid, update the index
            x1,y1 = beacon_coordinate[index[0]]
            x2,y2 = beacon_coordinate[index[1]]
            x3,y3 = beacon_coordinate[index[2]]
            A = 2*x2 - 2*x1
            B = 2*y2 - 2*y1
            D = 2*x3 - 2*x2
            E = 2*y3 - 2*y2
            EA_BD = E*A - B*D
            index = indexAll[len(indexAll)-numBeacon-aaaa:len(indexAll)-aaaa]
            aaaa += 1


        #Distance data for each beacon
        distance_data = []
        for i in index:
            distance_data.append(dataAll[i][index_test,:])

        #Interval
        interval = []
        for i in range(len(distance_data)):
            data = distance_data[i]
            cl =0.95
            x = np.array(data)
            dof = x.shape[0]-1
            x_mean = np.mean(x)
            x_standard_error = scipy.stats.sem(x)
            confidence_interval_x = scipy.stats.t.interval(cl, dof, x_mean, x_standard_error)
            interval.append(confidence_interval_x)

        #Get the data that is in the interval
        distances = []
        for i in range(len(interval)):
            group = []
            a = distance_data[i]
            for b in a:
                if b >= interval[i][0] and b <= interval[i][1]:
                    group.append(b)
            distances.append(group)

        #Triangulation with 1000 iterations
        iterator = 0
        print("TITIK TEST: %d\n",index_test)
        while iterator < 1000:
            x1,y1 = beacon_coordinate[index[0]]
            x2,y2 = beacon_coordinate[index[1]]
            x3,y3 = beacon_coordinate[index[2]]
            r1 = distances[0][random.randint(0,len(distances[0])-1)] 
            r2 = distances[1][random.randint(0,len(distances[1])-1)] 
            r3 = distances[2][random.randint(0,len(distances[2])-1)] 
            xres,yres = lib.triangulation(x1,y1,r1,x2,y2,r2,x3,y3,r3)
            xtrue,ytrue = test_coordinate[index_test]
            result = "%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f\n"%(xres,yres,xtrue,ytrue,x1,y1,r1,x2,y2,r2,x3,y3,r3)
            f = open(resname,'a')
            f.write(result)
            f.close()
            iterator += 1

        df = pd.read_csv(resname)

        #Save MAE calculations as TXT
        MAEX = sum(abs(df.xpred-df.xtrue))/len(df.xpred)
        MAEY = sum(abs(df.ypred-df.ytrue))/len(df.ypred)

        f = open("MAEX.txt",'w')
        f.write("%f"%(MAEX))
        f.close()

        f = open("MAEY.txt",'w')
        f.write("%f"%(MAEY))
        f.close()

        print("MAE x = ",MAEX)
        print("MAE y = ",MAEY)

        fontsize =15
        #Plot and save the scatter plot
        plt.figure()
        figname = "plot_titik_test_%d.png"%(index_test)
        titlename = "Titik Test (%f,%f)"%(test_coordinate[index_test][0],test_coordinate[index_test][1])
        plt.title(titlename,fontsize=fontsize)
        plt.scatter(df.xpred,df.ypred,color='red',label="Prediction")
        plt.scatter(df.xtrue,df.ytrue,color='blue',label="True value")
        plt.xlabel("X [cm]",fontsize = fontsize)
        plt.xlabel("y [cm]",fontsize = fontsize)
        plt.legend(fontsize=fontsize)
        plt.savefig(figname,bbox_inches='tight')
        plt.close()

        #Plot and save PDF X
        a = sns.distplot(df['xpred'],hist=True,bins=10,hist_kws=dict(edgecolor="k", linewidth=2))
        figname = "PDF_x_titik_test_%d.png"%(index_test)
        titlename = "PDF X untuk Titik Test (%f,%f)"%(test_coordinate[index_test][0],test_coordinate[index_test][1])
        plt.title(titlename,fontsize=fontsize)
        plt.xlabel("X [cm]",fontsize = fontsize)
        plt.ylabel("PDF",fontsize = fontsize)
        plt.savefig(figname,bbox_inches='tight')
        plt.close()

        #Plot and save PDF X
        a = sns.distplot(df['ypred'],hist=True,bins=10,hist_kws=dict(edgecolor="k", linewidth=2))
        figname = "PDF_y_titik_test_%d.png"%(index_test)
        titlename = "PDF Y untuk Titik Test (%f,%f)"%(test_coordinate[index_test][0],test_coordinate[index_test][1])
        plt.title(titlename,fontsize=fontsize)
        plt.xlabel("Y [cm]",fontsize = fontsize)
        plt.ylabel("PDF",fontsize = fontsize)
        plt.savefig(figname,bbox_inches='tight')
        plt.close()
    '''
    '''
    # Calculate the distance between reference points and test points
    distanceData = lib.genDistanceData(test_coordinate,training_coordinate)

    #Generate combination of numRef number of reference points for triangulation
    subset = lib.genCombi(numRef)

    #Generate cartesian product for choosing which data in the subset that is gonna be used
    ID = lib.genCartesian(numData)

    #TEST FOR TEST POINT (50,15) ~ INDEX 0 ~ Later will be looped!
    for index in range(distanceData.shape[0]):
        #Back to cwd
        os.chdir(cwd)

        #get the index of the reference point which has the smallest distance from the test point
        index_smallest = lib.genClosestIndex(index,distanceData,training_coordinate,numRef)
        print("index smallest: ",index_smallest)

        #get the numData distance data to testPoint[index] for training point[index_smallest] from dataAll 
        dataReady = lib.genDistanceReady(index_smallest,dataAll,index,numData)
        print("data estimated distance based on index smallest: ",dataReady)

        #Create the result directory if not exist and go into the result directory
        resdir = "%s/result/titik_%d"%(cwd,index)
        if not os.path.exists(resdir):
            os.makedirs(resdir)
        os.chdir(resdir)

        #Create a csv inisde resdir to dump the result
        resname = "result.csv"
        f = open(resname,'w')
        f.write("xpred,ypred,xtrue,ytrue,x1,y1,r1,x2,y2,r2,x3,y3,r3\n")
        f.close()

        # TRIANGULATION 
        for i in range(len(subset)):
            for j in range(len(ID)):
                index_coordinate1 = index_smallest[subset[i][0]]
                index_coordinate2 = index_smallest[subset[i][1]]
                index_coordinate3 = index_smallest[subset[i][2]]

                x1,y1 = training_coordinate[index_coordinate1]
                x2,y2 = training_coordinate[index_coordinate2]
                x3,y3 = training_coordinate[index_coordinate3]

                index_group_r1 = subset[i][0]
                index_group_r2 = subset[i][1]
                index_group_r3 = subset[i][2]

                index_data_r1 = ID[j][0]
                index_data_r2 = ID[j][1]
                index_data_r3 = ID[j][2]

                r1 = dataReady[index_group_r1][index_data_r1]
                r2 = dataReady[index_group_r2][index_data_r2]
                r3 = dataReady[index_group_r3][index_data_r3]

                xres,yres = lib.triangulation(x1,y1,r1,x2,y2,r2,x3,y3,r3)
                xtrue,ytrue = test_coordinate[index]
                result = "%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f,%f\n"%(xres,yres,xtrue,ytrue,x1,y1,r1,x2,y2,r2,x3,y3,r3)

                f = open(resname,'a')
                f.write(result)
                f.close()

        df = pd.read_csv(resname)

        #Save MAE calculations as TXT
        MAEX = sum(abs(df.xpred-df.xtrue))/len(df.xpred)
        MAEY = sum(abs(df.ypred-df.ytrue))/len(df.ypred)

        f = open("MAEX.txt",'w')
        f.write("%f"%(MAEX))
        f.close()

        f = open("MAEY.txt",'w')
        f.write("%f"%(MAEY))
        f.close()

        print("MAE x = ",MAEX)
        print("MAE y = ",MAEY)

        fontsize =15
        #Plot and save the scatter plot
        plt.figure()
        figname = "plot_titik_test_%d.png"%(index)
        titlename = "Titik Test (%f,%f)"%(test_coordinate[index][0],test_coordinate[index][1])
        plt.title(titlename,fontsize=fontsize)
        plt.scatter(df.xpred,df.ypred,color='red',label="Prediction")
        plt.scatter(df.xtrue,df.ytrue,color='blue',label="True value")
        plt.xlabel("X [cm]",fontsize = fontsize)
        plt.xlabel("y [cm]",fontsize = fontsize)
        plt.legend(fontsize=fontsize)
        plt.savefig(figname,bbox_inches='tight')
        plt.close()

        #Plot and save PDF X
        a = sns.distplot(df['xpred'],hist=True,bins=10,hist_kws=dict(edgecolor="k", linewidth=2))
        figname = "PDF_x_titik_test_%d.png"%(index)
        titlename = "PDF X untuk Titik Test (%f,%f)"%(test_coordinate[index][0],test_coordinate[index][1])
        plt.title(titlename,fontsize=fontsize)
        plt.xlabel("X [cm]",fontsize = fontsize)
        plt.ylabel("Probability",fontsize = fontsize)
        plt.savefig(figname,bbox_inches='tight')
        plt.close()

        #Plot and save PDF X
        a = sns.distplot(df['ypred'],hist=True,bins=10,hist_kws=dict(edgecolor="k", linewidth=2))
        figname = "PDF_y_titik_test_%d.png"%(index)
        titlename = "PDF Y untuk Titik Test (%f,%f)"%(test_coordinate[index][0],test_coordinate[index][1])
        plt.title(titlename,fontsize=fontsize)
        plt.xlabel("Y [cm]",fontsize = fontsize)
        plt.ylabel("Probability",fontsize = fontsize)
        plt.savefig(figname,bbox_inches='tight')
        plt.close()

        #Writing confidence interval ~ interval within which our data will be located
        cl =0.95
        x,y = np.array(df.xpred),np.array(df.ypred)
        dof = x.shape[0]-1

        x_mean = np.mean(x)
        y_mean = np.mean(y)

        x_standard_error = scipy.stats.sem(x)
        y_standard_error = scipy.stats.sem(y)

        confidence_interval_x = scipy.stats.t.interval(cl, dof, x_mean, x_standard_error)
        confidence_interval_y = scipy.stats.t.interval(cl, dof, y_mean, y_standard_error)

        f = open("con_interval_x.csv",'w')
        f.write("%f,%f"%(confidence_interval_x[0],confidence_interval_x[1]))
        f.close()

        f = open("con_interval_y.txt",'w')
        f.write("%f,%f"%(confidence_interval_y[0],confidence_interval_y[1]))
        f.close()

        print("95 percent confident x will be located between: ",confidence_interval_x)
        print("95 percent confident y will be located between: ",confidence_interval_y)

    '''







