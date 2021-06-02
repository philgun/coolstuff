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
    def __init__(self,num_input,num_output):
        super().__init__()
        
        #Predict the gradient of the temperature of the fluid (T₀,T₁,T₂.....)
        self.neuralNet = nn.Sequential(
            nn.Linear(3,50),
            nn.Tanh(),
            nn.Linear(50,50),
            nn.Tanh(),
            nn.Linear(50,3),
        )

        for m in self.neuralNet.modules():
            if isinstance(m,nn.Linear):
                nn.init.normal_(m.weight,mean=0,std=0.1)
                nn.init.constant_(m.bias,val=1)

    #Compute gradient 
    def forward(self,t,y):
        dŷdt = self.neuralNet(y)
        return dŷdt

def plot3DInitial(t,T):
    #Discretisation of x
    x = np.arange(1,31,1)

    #Discretisation of time
    t = t.detach().cpu().numpy()
    t = t / 3600

    X,Y = np.meshgrid(x,t)

    print(X.shape,Y.shape,T.shape)

    #Plotting
    fig = plt.figure()
    ax = plt.axes(projection='3d')
    ax.set_xlim(1,30)

    ax.plot_surface(
        X,Y,T,
        cmap="viridis"
    )
    ax.set_xlabel("Elements of discretisation")
    ax.set_ylabel("Time [h]")
    ax.set_zlabel("Temperature ℃")
    ax.set_title("Temperature evolution over time inside the packed bed storage\nSolution from Modelica")
    plt.show()

def getBatch(y_true, t, y0_true, batch_size=50, batch_t = 25, device = torch.device("cpu")):
    if len(y_true.size()) < 3:
        raise ValueError("The ground truth dimension has to be 3 dimensional with the 2nd dimension to be a singleton (1)")
    
    len_y_true = y_true.size()[0]

    #Generate sampling index
    #Get data index where the temperature is > T0. Try batch size ~> 80% is the data where temperature > T_0, 20% when temperature is static
    batch_dynamic_size = int(batch_size * 0.8)
    indexDynamic = []
    indexStatic = []
    
    #Identify which data index is static and dynamic
    #for i in range(y_true.size()[0]-batch_t):
    #    val = y_true[i,0,0]
    #    if val - y0_true[0,0] > 0.025:
    #        indexDynamic.append(i)
    #    else:
    #        indexStatic.append(i)

    #Sample through dynamic data
    #ridx_dynamic = np.random.choice(
    #    indexDynamic, batch_dynamic_size,replace=False
    #)

    #Sample thriugh static data
    #ridx_static = np.random.choice(
    #    indexStatic, int(batch_size-batch_dynamic_size),replace=False
    #)

    #Cat together
    #sample_idx_dynamic = torch.from_numpy(ridx_dynamic)
    #sample_idx_static = torch.from_numpy(ridx_static)
    #sample_idx = torch.cat(
    #    (sample_idx_dynamic,sample_idx_static),dim=0
    #)
    
    #Old sampling
    idx = np.arange(len_y_true - batch_t,dtype=np.int64)
    r = np.random.choice(idx,batch_size,replace=False)
    sample_idx = torch.from_numpy(r)

    #Start forming batch data    
    y0_batch = y_true[sample_idx]
    t_batch = t[0:batch_t] #Integral from t_batch[0] until t_batch[batch_t]
    
    y_batch = torch.stack(
        [y_true[sample_idx+i] for i in range(batch_t)],
        dim=0
    )

    return y_batch.to(device), y0_batch.to(device), t_batch.to(device),sample_idx

def training(func,epochs,opt,t,T_true, T0_true, batch_size,batch_t):

    fig,ax = plt.subplots(1,3,figsize=(20,20))
    
    T_plot = T_true.squeeze().detach().cpu().numpy()

    lossfunc = torch.nn.MSELoss()

    MSE= []
    ep = []

    #Start training
    for i in range(epochs):
        print(
            "Epoch %s:\n"%(i)
        )

        #Set pytorch to only use 4 cores
        torch.set_num_threads(4)

        opt.zero_grad()

        T_true_batch, T0_batch, t_batch, sampleidx = getBatch(
            T_true,
            t,
            T0_true,
            batch_size=batch_size,
            batch_t=batch_t
        )

        ax[0].clear()
        #ax[0].plot(t,T_plot[:,0],label="$T_\mathrm{9}$",c="k")
        ax[0].plot(t,T_plot[:,1],label="$T_\mathrm{10}$",c="red")
        #ax[0].plot(t,T_plot[:,2],label="$T_\mathrm{11}$",c="blue")
        #ax[0].scatter(t[sampleidx],T0_batch[:,0,0],marker="o",c="k",label="Sample")
        ax[0].scatter(t[sampleidx],T0_batch[:,0,1],marker="o",c="red",label="Sample")
        #ax[0].scatter(t[sampleidx],T0_batch[:,0,2],marker="o",c="blue",label="Sample")
        ax[0].set_xlabel("Time scaled")
        ax[0].set_ylabel("Temperature °C")
        ax[0].set_title("Solution from Modelica (ZK Model)")
        ax[0].legend()

        print(
            T_true_batch.size(),T0_batch.size(),t_batch.size()
        )

        #Integrate the neural network using odeint from torchdiffeq
        print("Calculate prediction using the current weight matrices")

        T_predicted = odeint(
            func, T0_batch, t_batch
        ).to(device)
        
        print("Done...................................")
        
        
        #Back-propagate the loss
        print("Calculate the MSE loss between the prediction and ground truth")

        loss = lossfunc(T_true_batch[:,:,0,1],T_predicted[:,:,0,1])

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

        print("the number of cpu threads for 1 epoch: {}".format(torch.get_num_threads()))
        print("MSE loss: %s"%(round(loss.item(),7)))

        MSE.append(round(loss.item(),6))
        ep.append(i+1)     

        #Animate the results
        if i%1 == 0:
            with torch.no_grad():

                T_pred = odeint(
                    func, T0_true, t
                ).to(device).detach().cpu()
            
            #Plot
            ax[2].plot(ep,MSE)
            ax[2].set_xlabel("Epoch")
            ax[2].set_ylabel("Mean Squared Error (MSE)")

            #ax[1].plot(t,T_pred[:,0,0],label="$T_\mathrm{9}$",c="k",ls="--")
            ax[1].plot(t,T_pred[:,0,1],label="$T_\mathrm{10}$",c="r",ls="--")
            #ax[1].plot(t,T_pred[:,0,2],label="$T_\mathrm{11}$",c="b",ls="--")
            ax[1].set_xlabel("Time scaled")
            ax[1].set_ylabel("Temperature °C")
            ax[1].set_title("Neural ODE, Epoch: %s, MSE: %s"%(i,round(loss.item(),10)))
            ax[1].legend()
            plt.pause(0.5)

            if i%10 ==0:
                plt.savefig(
                    "./fig3/%s.png"%(int(i/10))
                )

            ax[1].cla()
            ax[2].cla()
        
if __name__ == '__main__':
    device = torch.device("cpu")
    df = pd.read_csv("ZebTank.csv")
    print(df.head(5))

    #- Due to super slow training, for proof of concept, I reduce the problem to only track 3 locations - T_1,T_10,T_30
    df = df[df.columns[
        [0,9,10,11]
    ]]

    #df["zeros"] = np.zeros((len(df)))

    df = df[0:1000]

    dfT_raw = df[df.columns[1:]]

    #Scaled the temperature and time
    mm = MinMaxScaler().fit(dfT_raw)
    dfT = mm.transform(dfT_raw)
    col = ["T_9","T_10","T_11"]
    dfT = pd.DataFrame(dfT, columns=col)

    dftime = MinMaxScaler().fit_transform(df.t.to_numpy(dtype=np.float32).reshape(-1,1))
    t = np.array(dftime,dtype=np.float32).reshape(-1)
    t = torch.from_numpy(t).to(device)
    print(t.size()) #[8635]

    #Capture the intial condition of the system 
    T0_true = dfT.iloc[0].to_numpy(dtype=np.float32).reshape(1,-1)
    T0_true = torch.from_numpy(
        T0_true
        ).to(device)

    print(T0_true.size()) #[1×3]
    print(T0_true)

    #Capture the ground truth solution (from Modelica)
    T_true = torch.from_numpy(dfT.to_numpy(dtype=np.float32)).to(device)
    T_true = torch.unsqueeze(T_true,1)
    
    print(T_true.size())
    print(T_true.dtype,T0_true.dtype, t.dtype)

    #Plot the raw vs scaled initial data
    T_plot = T_true.squeeze().detach().cpu().numpy()
    fig,ax = plt.subplots(1,2)
    ax[0].plot(df.t/3600,dfT_raw['T_10'],label="$T_\mathrm{10}$",c="red")
    ax[0].plot(df.t/3600,dfT_raw['T_9'],label="$T_\mathrm{9}$",c="red")
    ax[0].plot(df.t/3600,dfT_raw['T_11'],label="$T_\mathrm{11}$",c="red")
    ax[0].set_xlabel("Time [h]")
    ax[0].set_ylabel("Temperature °C")
    ax[0].set_title("Solution from Modelica (ZK Model)")
    ax[0].legend()

    ax[1].plot(t,T_plot[:,1],label="$T_\mathrm{10}$",c="k",marker="o")
    ax[1].plot(t,T_plot[:,0],label="$T_\mathrm{9}$",c="k",marker="o")
    ax[1].plot(t,T_plot[:,2],label="$T_\mathrm{11}$",c="k",marker="o")
    ax[1].set_xlabel("Time [h]")
    ax[1].set_ylabel("Temperature °C")
    ax[1].set_title("Solution from Modelica Scaled (ZK Model)")
    ax[1].legend()
    plt.show()

    #Start parametrising the gradient
    func = NeuralODE(
        num_input=1,
        num_output=1,
    ).to(device)
    
    epochs = 40000
    
    #Declare loss function and optimiser
    opt = torch.optim.Adam(
        func.parameters(),
        lr=1e-3
    )

    #Start training
    training(
        func,epochs,opt,t,T_true,T0_true,50,200
    )

    '''
    fig = plt.figure(figsize=(15,15))
    ax0 = fig.add_subplot(1, 2, 1, projection='3d')
    ax1 = fig.add_subplot(1, 2, 2, projection='3d')

    #Set x limit for both axes
    ax0.set_xlim(1,30)
    ax1.set_xlim(1,30)
    
    #Plot the ground truth
    #Discretisation of x
    x = np.arange(1,31,1)

    #Create mesh
    X,Y = np.meshgrid(
        x,
        t.detach().cpu().numpy()/3600
    )

    #Plotting
    ax0.plot_surface(
        X,Y,T_true.squeeze().detach().cpu().numpy(),
        cmap="viridis"
    )
    ax0.set_xlabel("Elements of discretisation")
    ax0.set_ylabel("Time [h]")
    ax0.set_zlabel("Temperature ℃")
    ax0.set_title("Temperature evolution over time inside the packed bed storage\nSolution from Modelica")


    ax1.set_xlabel("Elements of discretisation")
    ax1.set_ylabel("Time [h]")
    ax1.set_zlabel("Temperature ℃")
    '''


    
