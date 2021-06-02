import numpy as np
import torch
import torch.nn as nn
import numpy as np
from matplotlib import pyplot as plt
import pytorch_lightning as pl
from torchdiffeq import odeint_adjoint as odeint
import os
from DyMat import DyMatFile as D
import pandas as pd
from mpl_toolkits import mplot3d
from sklearn.preprocessing import MinMaxScaler

class NeuralODE(nn.Module):
    def __init__(self,num_input,num_output,y_true,y_neighbouring,t,batch_size=500, batch_t = 250, device = torch.device("cpu")):
        super().__init__()
        
        self.neuralNet = nn.Sequential(
            nn.Linear(num_input,100),
            nn.Tanh(),
            nn.Linear(100,100),
            nn.Tanh(),
            nn.Linear(100,100),
            nn.Tanh(),
            nn.Linear(100,100),
            nn.Tanh(),
            nn.Linear(100,num_output),
        )

        for m in self.neuralNet.modules():
            if isinstance(m,nn.Linear):
                nn.init.normal_(m.weight,mean=0,std=0.1)
                nn.init.constant_(m.bias,val=1)

        self.y_true = y_true
        self.y_neighbouring = y_neighbouring
        self.t = t
        self.batch_size = batch_size
        self.batch_t = batch_t
        self.device = device
        self.reset_sampleidx = False

    def getBatch(self):
        if len(self.y_true.size()) < 3:
            raise ValueError("The ground truth dimension has to be 3 dimensional with the 2nd dimension to be a singleton (1)")
        
        if self.reset_sampleidx == True:
            self.reset_sampleidx = False
        
        self.len_y_true = self.y_true.size()[0]

        #Generate random index
        self.idx = np.arange(
            self.len_y_true - self.batch_t,
            dtype=np.int64
        )

        self.ridx = np.random.choice(
            self.idx, self.batch_size,replace=False
        )

        self.sampleidx = torch.from_numpy(self.ridx)

        #Start forming batch data for the input neighbouring. 
        self.y0_batch = self.y_neighbouring[self.sampleidx].to(self.device)
        self.y0_batch = self.y0_batch[:,1].reshape(-1,1)
        self.y0_batch = torch.unsqueeze(self.y0_batch,2)
        
        
        #Time batch
        self.t_batch = self.t[: self.batch_t].to(self.device) #Integral from t_batch[0] until t_batch[batch_t]

        #True solution batch
        self.y_batch = torch.stack(
            [self.y_true[self.sampleidx+i] for i in range(self.batch_t)],
            dim=0
        ).to(self.device)

        print(
            self.y_batch.size(),self.y0_batch.size(),self.t_batch.size()
        )

    def reset_sampleidx(self):
        self.reset_sampleidx = True

    #Compute gradient forward pass. Since the solution of the integral only has 1 dimension, then the neighbouring data has to be correlated to produce one column tensor. Physics tells us that:
        #1. Gradient of T_2 is affected by:
        #       ΔT₁ = T_2 - T_1
        #       ΔT₂ = T_2 - T_1
        #   And heat flows depending on how gradient flows, as such the gradient of dT_2/dt can be expressed by the ratio of ΔT₁/ΔT₂
        #2. As such, we can take the ratio as the input to our Neural ODE
    def forward(self,t,y):
        self.ratio = self.y_neighbouring[:,-1].reshape(-1,1)
        self.ratio = torch.unsqueeze(self.ratio,2)
        
        if self.reset_sampleidx == False:
            self.ratio = self.ratio[self.sampleidx]
        else:
            self.ratio = self.ratio[:]
        dŷdt = self.neuralNet(self.ratio)
        return dŷdt

def checkAlwaysAscending(t):
    lent = t.size()[0]
    
    for i in range(1,lent):
        delta = t[i] - t[i-1]
        if delta < 0:
            print(i)
       
def training(func,epochs,opt,t,T_true, T_neighbouring, T0_true):
    fig,ax = plt.subplots(
        1,2,figsize=(15,15)
    )
    
    T_plot = T_true.squeeze().detach().cpu().numpy()

    ax[0].plot(t,T_plot[:],label="$T_\mathrm{2}$",c="k")
    ax[0].set_xlabel("Time scaled")
    ax[0].set_ylabel("Temperature scaled")
    ax[0].set_title("Solution from Modelica (ZK Model)")
    ax[0].legend()

    lossfunc = torch.nn.MSELoss()

    #Start training
    for i in range(epochs):
        print(
            "Epoch %s:\n"%(i)
        )

        opt.zero_grad()
        func.getBatch()

        checkAlwaysAscending(t)

        #Integrate the neural network using odeint from torchdiffeq
        print("Calculate prediction using the current weight matrices")

        T_predicted = odeint(
            func, func.y0_batch, func.t_batch
        ).to(device)
        
        print("Done...................................")
                
        
        #Back-propagate the loss
        print("Calculate the MSE loss between the prediction and ground truth")

        loss = lossfunc(func.y_batch,T_predicted)

        #print(T_true_batch)

        #print("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n")

        #print(T_predicted)
        
        print("Done...................................")

        print("Back propagate through the loss")

        loss.backward()

        print("Done...................................")

        #Update the parameter of NN based on the loss
        print("Update the parameter")

        opt.step()

        print("Done...................................")

        if i%1 == 0:
            with torch.no_grad():
                T_pred = odeint(
                    func, T0_true, t
                ).to(device).detach().cpu()
            
            #Plot
            ax[1].plot(t,T_pred,label="$T_\mathrm{1}$",c="k",ls="--")
            ax[1].set_xlabel("Time scaled")
            ax[1].set_ylabel("Temperature °C")
            ax[1].set_title("Neural ODE, Epoch: %s, MSE: %s"%(i,round(loss.item(),10)))
            ax[1].legend()
            plt.pause(0.5)
            ax[1].cla()

if __name__ == '__main__':
    device = torch.device("cpu")
    df = pd.read_csv("ZebTank.csv")
    print(df.head(5))

    #Due to super slow training, for proof of concept, I reduce the problem to only track 3 locations - T_1,T_2,T_3
    #Imbue a bit of physics into the training method as such the temperature gradient dT_2 /dt is a function of T_1,T_2,T_3
    df = df[df.columns[
        [0,1,2,3]
    ]]

    #Get the temperatures
    dfT_raw = df[df.columns[1:]]
    dfT_raw["ratiodelta"] =  (dfT_raw.T_2-dfT_raw.T_1)/(dfT_raw.T_2-dfT_raw.T_3)
    dfT_raw["ratiodelta"] = dfT_raw.replace(np.nan,0)
    dfT_raw["ratiodelta"] = dfT_raw.replace(np.inf,0)
    dfT_raw["ratiodelta"] = dfT_raw.replace(-np.inf,0)

    #Scale the time
    mm = MinMaxScaler().fit(dfT_raw)
    dfT = mm.transform(dfT_raw)
    dfT = pd.DataFrame(dfT, columns=['T_1', 'T_2', 'T_3',"ratiodelta"])

    #Take t
    dftime = MinMaxScaler().fit_transform(df.t.to_numpy(dtype=np.float32).reshape(-1,1))
    t = np.array(dftime.reshape(-1),dtype=np.float32)
    t = torch.from_numpy(t).to(device)
    print(t.size()) #[8635]

    #Capture the intial condition of the T_2 
    T0_true = dfT['T_2']
    T0_true = np.array(T0_true.iloc[0],dtype=np.float32).reshape(-1,1)
    T0_true = torch.from_numpy(
        T0_true
        ).to(device)

    print(T0_true.size()) #[1×1]

    #Capture the input temperature (T_i-1, T_i,T_i+1)
    T_neighbouring = dfT[:].to_numpy(dtype=np.float32)
    T_neighbouring = torch.from_numpy(
        T_neighbouring
    ).to(device)
    T_neighbouring = torch.squeeze(T_neighbouring,1)

    print(T_neighbouring.size()) #[8635x1x4] ---> T_1,T_2,T_3,ratiodeltaT

    #Capture the ground truth solution (from Modelica)
    T_true = torch.from_numpy(dfT["T_2"].to_numpy(dtype=np.float32).reshape(-1,1)).to(device)
    T_true = torch.unsqueeze(T_true,1)
    
    print(T_true.size())

    print(T_true.dtype,T0_true.dtype, t.dtype,T_neighbouring.dtype)

    fig,ax = plt.subplots(1,2)
    ax[0].plot(df["t"]/3600,dfT_raw['T_2'],label="$T_\mathrm{2}$",c="red")
    ax[0].set_xlabel("Time [h]")
    ax[0].set_ylabel("Temperature °C")
    ax[0].set_title("Solution from Modelica (ZK Model)")
    ax[0].legend()

    ax[1].plot(t,dfT["T_2"],label="$T_\mathrm{2}$",c="red")
    ax[1].set_xlabel("Scaled time ")
    ax[1].set_ylabel("Scaled temperature")
    ax[1].set_title("Solution from Modelica Scaled (ZK Model)")
    ax[1].legend()
    plt.show()

    #Start parametrising the gradient
    func = NeuralODE(1,1,T_true,T_neighbouring,t).to(device)
    epochs = 10000
    
    #Declare loss function and optimiser
    opt = torch.optim.Adam(
        func.parameters(),
        lr=1e-3
    )

    #Start training
    training(
        func,epochs,opt,t,T_true,T_neighbouring,T0_true
    )

    