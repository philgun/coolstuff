import numpy as np
import torch
import torch.nn as nn
import numpy as np
from matplotlib import pyplot as plt
import pytorch_lightning as pl
from torchdiffeq import odeint_adjoint as odeint
import os

class NeuralODE(nn.Module):
    '''
    Class to store the neural network that represents our ODE:
        (*) Inherits nn.Module
        (*) It predicts the gradient of the state over time
    '''
    def __init__(self):
        super().__init__()
        self.net = nn.Sequential(
            nn.Linear(2,50),
            nn.Tanh(),
            nn.Linear(50,50),
            nn.Tanh(),
            nn.Linear(50,2),
        )

        for m in self.net.modules():
            if isinstance(m,nn.Linear):
                nn.init.normal_(m.weight,mean=0,std=0.1)
                nn.init.constant_(m.bias,val=1)
    
    def forward(self,t,y):
        #Forward pass the y (our gradient f depends on the coordinate f(y₁,y₂))
        #This neural network will be integrated using the ode solver as such:
        #y = y + ∫f(y₁,y₂) dt
        dŷdt = self.net(y**1)
        return dŷdt

def getBatch(y_true,t,batch_size=20,batch_t=10,device=torch.device("cpu")):
    '''
    This function is to sample the training data from the data pool (y_true).
    The Neural ODE will be integrated over batch_time discrete times, for batch_size number of y₀, and loss is computed against
    a batch of true system state value (y_true batch) of size batch_size × 2 × batch_time

    Then:
        1. Sample the time --> Size matrix (1 × batch_time). dtype= Tensor.float
        2. Sample y₀ as well (y₀) --> Size matrix (batch_size × 2). dtype = Tensor.float
        3. Sample y_true_batch --> Size matrix(batch_size × 2 × batch_time). dtype = Tensor.float
    '''
    ar = np.arange(
                1000-10,dtype=np.int64
            )
    r = np.random.choice(ar,batch_size,replace=False)
    sampleIndex = torch.from_numpy(r)

    y0_batch = y_true[sampleIndex]
    t_batch = t[:batch_t]
    y_batch = torch.stack(
        [y_true[sampleIndex+i] for i in range(batch_t)],
        dim=0
    )

    return y_batch.to(device), y0_batch.to(device), t_batch.to(device), sampleIndex

if __name__ == '__main__':
    device = torch.device("cpu")

    t = torch.linspace(0.0,1.0,1000).to(device)
    y0_true = torch.tensor([[2., 0.]]).to(device)
    A_true = torch.tensor([[-0.1, 2.0], [-2.0, -0.1]]).to(device)

    #True gradient
    class trueGrad(nn.Module):    
        def forward(self, t, y):
            gradTrue = torch.mm(y**3, A_true)
            return gradTrue

    #Compute the real system trajectory
    with torch.no_grad():
        y_true = odeint(
            trueGrad(), 
            y0_true, 
            t, 
            method='dopri5'
        ).detach().cpu()
    
    print(y_true.size())
    #Plot the true system state
    fig,ax = plt.subplots(1)
    ax.plot(t,y_true[:,0,0],label="True $y_\mathrm{1}$")
    ax.plot(t,y_true[:,0,1],label="True $y_\mathrm{2}$")
    ax.scatter(0,y0_true[0,0],label="$y_\mathrm{1}^{\mathrm{t=0}}$")
    ax.scatter(0,y0_true[0,1],label="$y_\mathrm{2}^{\mathrm{t=0}}$")
    ax.legend()
    ax.set_xlabel("Time")
    ax.set_ylabel("$System state value$")
    plt.show()

    #Start parametrise the trueGrad with neural network
    func = NeuralODE().to(device)
    epochs = 600
    lossfunc = torch.nn.MSELoss()
    opt = torch.optim.Adam(
        func.parameters(), 
        lr=1e-3
    )

    fig,ax = plt.subplots(1,2,figsize=(15,15))
    
    for i in range(epochs):
        opt.zero_grad()
        y_true_batch, y0_batch, t_batch, sampleIndex = getBatch(y_true,t)
        
        print(
            y_true_batch.size(),y0_batch.size(),t_batch.size()
        )

        ax[0].clear()
        ax[0].plot(t,y_true[:,0,0],label="True $y_\mathrm{1}$",c="k")
        ax[0].plot(t,y_true[:,0,1],label="True $y_\mathrm{2}$",c="red")

        ax[0].scatter(t[sampleIndex],y0_batch[:,0,0],marker="^",c="k",label="sample")
        ax[0].scatter(t[sampleIndex],y0_batch[:,0,1],marker="o",c="red",label="sample")
        
        ax[0].set_xlabel("Time")
        ax[0].set_ylabel("System state value (y₁ and y₂ over time)")
        ax[0].legend()

        ŷ_batch = odeint(
                func,y0_batch,t_batch
            ).to(device)
        
        print(ŷ_batch.size())

        #Compute mean squared error between the integrated ŷ and y_true
        loss = lossfunc(ŷ_batch,y_true_batch)

        #Back propagte thorugh the Solver -- crazy RTQCHEN
        loss.backward()
        
        #Update the parameter θ of the neural network
        opt.step()

        if i%10==0:
            ŷ = odeint(func,y0_true,t).to(device).detach().cpu()
            ax[1].plot(t,ŷ[:,0,0],label="$ŷ_\mathrm{1}$",c="k",ls="--")
            ax[1].plot(t,ŷ[:,0,1],label="$ŷ_\mathrm{2}$",c="red",ls="--")
            ax[1].set_xlabel("Time")
            ax[1].set_ylabel("System state value (ŷ₁ and ŷ₂ over time)")
            ax[1].legend()
            ax[1].set_title(
                "Epoch: %s, MSE: %s"%(i,round(loss.item(),7))
            )
            plt.pause(0.05)
            plt.savefig(
                "./fig/%s.png"%(int(i/10))
            )
            ax[1].cla()
        
    
    
    #Plot the predicted vs. true data
    fig,ax = plt.subplots(1,figsize=(5,5))
    ŷ = odeint(
        func,y0_true,t
    ).to(device).detach().cpu()    

    ax.set_title("System state value (ŷ vs y)")
    ax.plot(t,y_true[:,0,0],label="True $y_\mathrm{1}$",c="k")
    ax.plot(t,y_true[:,0,1],label="True $y_\mathrm{2}$",c="red")
    ax.plot(t,ŷ[:,0,0],label="$ŷ_\mathrm{1}$",c="k",ls="--")
    ax.plot(t,ŷ[:,0,1],label="$ŷ_\mathrm{2}$",c="red",ls="--")
    ax.set_xlabel("Time")
    ax.set_ylabel("System state value")
    ax.legend()
    plt.show()


                
   