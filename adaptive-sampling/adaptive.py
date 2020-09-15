import math
import os
from sklearn.utils import shuffle
import numpy as np
from NN import NNModelSequential,PostProcess
from sklearn.preprocessing import MinMaxScaler
import time
import utils
from sklearn.model_selection import KFold
from sklearn.metrics import mean_squared_error
from sklearn.model_selection import train_test_split
import tensorflow as tf

constant = 42
tf.random.set_seed(constant)
np.random.seed(constant)

cwd = os.getcwd()
os.system('rm -rf SubsetsData TrainingData SavedModel RandomData CVE Alpha Data BestModel')
os.makedirs('TrainingData')
os.makedirs('SavedModel')
os.makedirs("CVE")
os.makedirs("Alpha")
os.makedirs("Data")

#Generate initial data set
num_initial_data= 80
UB = [10,10]
LB = [0,0]
numinputs = len(UB)
numoutputs = 1
X = utils.generate_LHS(UB,LB,numinputs,num_initial_data)
y = []
for i in range(X.shape[0]):
    y.append(utils.expensive_model(X[i]))
y = np.array(y).reshape([-1,1])
data = np.concatenate((X,y),axis=1)

#Save initial trianing data to dir TrainingData and dir Data
fn_data_training = './%s/data_training.csv'%('TrainingData')
np.savetxt(fn_data_training,data,delimiter=',',fmt='%f')

fn_iter_0 = './%s/data_training.csv'%('Data')
np.savetxt(fn_iter_0,data,delimiter=',',fmt='%f')

#Cross validation - instantiate splitter
K_subsets = 5
cv = KFold(n_splits=K_subsets,shuffle=True,random_state=constant)

#ANN Hyper parameter
#Number of neurons in each hidden layer 
network_layout = [12]
initializer = 'he_uniform'
activation = 'relu'
batch_size = 32
learning_rate = 0.001
epochs = 5000
prefix_res = './SavedModel/'
verbose = 1

#Stop criterion
cve_mean_master_list = []
slope = []
alpha = 1000
threshold = 0.03
newrandompoints = 2000
SF = 0.3
adaptive_fraction = 0.5

iteration = 0
#while alpha > threshold:
while iteration < 10:
    start_time = time.time()
    os.system('rm -rf SavedModel')
    MMX,MMY,models = [],[],[]
    
    print("\n\n================================================================================== Iteration %s ==================================================================================\n\n"%(iteration))
    
    #Reload the data
    data = np.genfromtxt(fn_data_training,delimiter=',')
    X = data[:,0:numinputs]
    y = np.array(data[:,-1]).reshape(-1,1)
    SSCVE = 0
    #Model - Cross Validation
    for train_index,valid_index in cv.split(X):
        #Subsetting the data - X train and X validation
        X_train , X_valid = X[train_index], X[valid_index]

        #Subsetting the data - y train and y validation
        y_train, y_valid = y[train_index], y[valid_index]

        #Scaller - Scaller is fit to TRAINING DATA ONLY to prevent data leakage
        mmx = MinMaxScaler().fit(X_train)
        mmy = MinMaxScaler().fit(y_train)
        MMX.append(mmx)
        MMY.append(mmy)
        
        #Scalling down the data
        X_train_scaled = mmx.transform(X_train)
        y_train_scaled = mmy.transform(y_train)

        X_valid_scaled = mmx.transform(X_valid)
        y_valid_scaled = mmy.transform(y_valid)

        #session initalization
        session = NNModelSequential()

        #Inserting X train and y train to session - no need to reinitialize here to save memory
        session.Xtrain = X_train_scaled
        session.ytrain = y_train_scaled
        session.Xtest = X_valid_scaled
        session.ytest = y_valid_scaled

        #Model train - train using X and y train
        model = session.training_NN(
                prefix_res=prefix_res,
                input_dim=numinputs,
                output_dim=numoutputs,
                network_layout=network_layout,
                learning_rate=learning_rate,
                epochs=epochs,
                batch_size=batch_size,
                count=len(MMX),
                activation=activation,
                initializer=initializer,
                ES=True,
                max_epochs=2000,
                verbose=verbose,
                with_validation=True
        )

        models.append(model)

        #Model validation (predict X_valid_scaled, to get y_predict_scaled)
        #Predict the y with X_valid_scaled as the input
        y_pred_valid_scaled = model.predict(X_valid_scaled)

        #Inverse transform the y_pred_valid using the y training scaler 
        y_pred_valid = mmy.inverse_transform(y_pred_valid_scaled)

        score = mean_squared_error(y_pred_valid,y_valid)
       
        #Calculate the metric - Cross Validation Error (CVE) DOI: 10.1021/acs.iecr.9b02758
        SSCVE += score
        for l in range(y_pred_valid.shape[0]):
            print(y_pred_valid_scaled[l,0],y_valid_scaled[l,0])
            print(y_pred_valid[l,0],y_valid[l,0])
        print("SCORE: ",score)

    
    print("SSCVE = ",SSCVE)
    meanSSCVE = SSCVE/K_subsets
    print("MEAN SSCVE = ", meanSSCVE)

    #Appending mean  of cve_iteration over K_subsets
    cve_mean_master_list.append(meanSSCVE)

    #Update alpha
    if len(cve_mean_master_list)>1:
        slope.append(cve_mean_master_list[-2] - cve_mean_master_list[-1])
        alpha = abs(slope[-1]/max(slope))

    #Dump cve_iteration/K_subsets to out.txt
    f = open("./CVE/out_%s.txt"%(iteration),'w')
    f.write('%s'%(meanSSCVE))
    f.close()

    #Dump alpha to out.txt
    f = open("./Alpha/out_%s.txt"%(len(cve_mean_master_list)-1),'w')
    f.write('%s'%(alpha))
    f.close() 

    #Training the model that use all data
    #Split trian test split
    Xtrain,Xvalid,ytrain,yvalid = train_test_split(X,y,test_size=0.20,random_state=42)

    #Instantiate the scaler for all model
    mmx = MinMaxScaler().fit(Xtrain)
    mmy = MinMaxScaler().fit(ytrain)

    MMX.append(mmx)
    MMY.append(mmy)

    X_train_scaled = mmx.transform(Xtrain)
    y_train_scaled = mmy.transform(ytrain)

    X_valid_scaled = mmx.transform(Xvalid)
    y_valid_scaled = mmy.transform(yvalid)

    #Assign attribute to session
    session.Xtrain = X_train_scaled
    session.ytrain = y_train_scaled
    session.Xtest = X_valid_scaled
    session.ytest = y_valid_scaled

    model = session.training_NN(
            prefix_res=prefix_res,
            input_dim=numinputs,
            output_dim=numoutputs,
            network_layout=network_layout,
            learning_rate=learning_rate,
            epochs=epochs,
            batch_size=batch_size,
            count=K_subsets+1,
            activation=activation,
            initializer=initializer,
            ES=True,
            max_epochs=2000,
            verbose=verbose,
            with_validation=True
        )

    models.append(model)

    assert(len(models) == len(MMX))
    assert(len(models) == len(MMY))

    #Postprocess
    #Instantiate the postprocess object

    print("START POST-PROCESSING.......................................")
    pp = PostProcess(newrandompoints,UB,LB,'RandomData',fn_data_training)
        
    #Random data points within the UB LB boundary using LHS
    pp.generate_data_frame_random_points()

    #Postprocess the data according to J. Eason, S. Cremaschi / Computers and Chemical Engineering 68 (2014) 220–232
    #Each ANN model will use its own respective scaler to prevent data leakage
    pp.post_process(K_subsets,MMX,MMY,prefix_res,models)
        
    #Choose the data point to be added into the fn_training_data
    newpoint = pp.choose_point(SF,adaptive_fraction=adaptive_fraction) #type = list of list

    #Appending new points to the existing training data
    for row in newpoint:
        #New line to be written appending to the existing data
        newline = ''

        #Calculate the value of z at the new point
        new_z = utils.expensive_model(row)
            
        #loop all the input
        for res in row:
            newline += '%s,'%(res)
        newline += '%s\n'%(new_z)

        f = open(fn_data_training,'a')
        f.write(newline)
        f.close()
    
    dat = np.genfromtxt(fn_data_training,delimiter=',')
    fn_save_data = "./Data/data_iteration_%s.csv"%(iteration+1)
    np.savetxt(fn_save_data,dat,delimiter=',',fmt='%f')
    
    print("----------finish iteration %s for %s seconds ------------"%(iteration+1, time.time() - start_time))
    iteration += 1

    print("CROSS VALIDATION ERROR: ", cve_mean_master_list[-1])
    print('SLOPE: ',slope)
    print('ALPHA: ',alpha)

    if iteration > 500:
        break

#Training the model that use all data
raw = np.genfromtxt(fn_data_training,delimiter=',')
X = raw[:,0:numinputs]
y = np.array(raw[:,-1]).reshape(-1,1)

#Split trian test split
Xtrain,Xvalid,ytrain,yvalid = train_test_split(X,y,test_size=0.20,random_state=42)

mmxfinal = MinMaxScaler().fit(Xtrain)
mmyfinal = MinMaxScaler().fit(ytrain)

X_train_scaled = mmxfinal.transform(Xtrain)
y_train_scaled = mmyfinal.transform(ytrain)

X_valid_scaled = mmxfinal.transform(Xvalid)
y_valid_scaled = mmyfinal.transform(yvalid)

#Model training with X all and y all
session = NNModelSequential()

#Assign attribute to session
session.Xtrain = X_train_scaled
session.ytrain = y_train_scaled
session.Xtest = X_valid_scaled
session.ytest = y_valid_scaled

modelfinal = session.training_NN(
    prefix_res=prefix_res,
    input_dim=numinputs,
    output_dim=numoutputs,
    network_layout=network_layout,
    learning_rate=learning_rate,
    epochs=5000,
    batch_size=batch_size,
    count=K_subsets+1,
    activation=activation,
    initializer=initializer,
    ES=True,
    max_epochs=2000,
    verbose=verbose,
    with_validation=True
    )

#Pick the best model - Using new data (that want to be plotted)
#Generate new data
UB = 10
LB = 0

xval = LB
yval = LB

X= []
Y= []

while xval <= UB:
    yval = LB
    while yval <= UB:
        Y.append(yval)
        X.append(xval)

        yval += 0.1
    xval += 0.1

X = np.array(X).reshape(-1,1)
Y = np.array(Y).reshape(-1,1)
data = np.concatenate((X,Y),axis=1)
dim = int((X.shape[0])**0.5)

#Evaluate Z at each X,y shekel function
Z = []
for i in range(data.shape[0]):
    z = utils.expensive_model(data[i])
    Z.append(z)
Z = np.array(Z).reshape(-1,1)

from mpl_toolkits import mplot3d
from matplotlib import pyplot as plt
from matplotlib.mlab import griddata

#Scaled input
data_scaled = mmxfinal.transform(data)

#Predict and inverse transform
Z = modelfinal.predict(data_scaled)
Z = mmyfinal.inverse_transform(Z)

#Reshape for 3D surface plot
x = np.reshape(X,(dim,dim))
y = np.reshape(Y,(dim,dim))
z = np.reshape(Z,(dim,dim))

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

ax.plot_surface(x, y, z)

ax.set_xlabel('X Label')
ax.set_ylabel('Y Label')
ax.set_zlabel('Z Label')
ax.set_title("NN Best Shekel Function")
plt.savefig("NNBestShekelFunction.png")
plt.show()
    

'''
#Concatenate X and y
X_input = np.concatenate((X,Y),axis=1)
s = []

for j in range(len(models)):
    print(j)
    #Choose model
    mod = models[j]

    #Choose scaler
    mmx = MMX[j]
    mmy = MMY[j]

    #Transform the input
    X_scaled = mmx.fit_transform(X_input)

    #Predict z and transfrom to real value
    z_predict_scaled = mod.predict(X_scaled)
    z_predict = mmy.inverse_transform(z_predict_scaled)

    #Compute score
    score = mean_squared_error(Z,z_predict)
    print("Score for model %s %s"%(j,score))
    s.append(score)
best_index = np.argsort(s)[0]
'''


