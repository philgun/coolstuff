from torchdyn.models import *
from torchdyn import *
from torchdyn.datasets import *
import torch
import torch.nn as nn
import pytorch_lightning as pl
import torch.utils.data as data
import matplotlib.pyplot as plt
import torchdiffeq

def get_cmap(n,name="hsv"):
    return plt.cm.get_cmap(name,n)

class HNN(nn.Module):
    def __init__(self, Hamiltonian:nn.Module, dim=1):
        super().__init__()
        self.H = Hamiltonian
        self.n = dim
    def forward(self, x):
        with torch.set_grad_enabled(True):
            x = x.requires_grad_(True)
            
            #Forward Pass to compute x and ẋ
            Hamilton_energy_like = self.H(x)

            #Compute gradient 
            # w.r.t. input ([x,ẋ])
            gradH = torch.autograd.grad(Hamilton_energy_like.sum(), x, allow_unused=False, create_graph=True)[0]

        #Return gradients 
        # (1). dx/dt = dH(x,ẋ)/dẋ 
        # (2). dẋ/dt = - dH(x,ẋ)/dx
        return torch.cat([gradH[:,self.n:], -gradH[:,:self.n]], 1).to(x)


if __name__ == '__main__':
    #Hamilton function output is "energy-like" unit, as such it takes 2 inputs (x and ẋ) and output Hamilton energy
    #The idea is, the model is trained to predict the gradient of x and ẋ, as such the trajectory of system's state can be
    #solved by using numerical solver
    #(x,ẋ) = (x0,ẋ0) + intergral of (HNN) from t0 to t

    device = torch.device("cpu")

    #Generate the trajectory of the system
    t = torch.linspace(0,1, 100).reshape(-1,1)
    x = torch.sin(2*np.pi*t).to(device)
    ẋ = torch.cos(2*np.pi*t)

    X = torch.cat([x,ẋ],dim=1)

    #generate the  derivative of the trajectory
    y = torch.cat([
        torch.cos(2*np.pi*t),
        -torch.sin(2*np.pi*t)
        ],1).to(device)
    
    fig,ax = plt.subplots(1)
    ax.plot(t,x,label="x")
    ax.plot(t,ẋ,label="ẋ")
    ax.set_xlabel("Time")
    ax.set_ylabel("Value")
    ax.legend()
    plt.show()
    

    train = data.TensorDataset(X, y)
    trainloader = data.DataLoader(
            train, 
            batch_size=len(X), 
            shuffle=False
    )

    #Inheriting LightningModule for training and bookkeeping
    class Learner(pl.LightningModule):
        def __init__(self, model:nn.Module):
            #Initialise the pl.LightningModule as such Learner class can access all of its attributes
            super().__init__() 
            self.model = model
            self.c = 0
            self.trainloader = trainloader

        def forward(self, x):
            return self.model.defunc(0,x)

        def loss(self, y, y_hat):
            return ((y-y_hat)**2).sum()

        def training_step(self, batch, batch_idx):
            x, y = batch
            y_hat = self.model.defunc(0,x)
            loss1 = self.loss(y_hat[0:50,:], y[0:50,:])
            loss2 = self.loss(y_hat[50:,:], y[50:,:])
            logs = {'train_loss': loss1+loss2}
            return {'loss': loss1+loss2, 'log': logs}

        def configure_optimizers(self):
            return torch.optim.Adam(self.model.parameters(), lr=0.01)

        def train_dataloader(self):
            return trainloader


    HamFunc = HNN(
        nn.Sequential(
            nn.Linear(2,64),
            nn.Tanh(),
            nn.Linear(64,1)
        )
    ).to(device)

    print(HamFunc)
    
    model = NeuralDE(HamFunc).to(device)
    print(model.defunc)

    learn = Learner(model)

    trainer = pl.Trainer(min_epochs=500, max_epochs=1000)
    trainer.fit(learn)


    #Try using different initial
    #X_t = torch.Tensor(
    #    np.array([0.0,1]).reshape(1,2)
    #).to(device)
    
    X_t = torch.Tensor(
        np.array([0.0,1.0]).reshape(1,2),
    ).to(device)

    X_t.requires_grad_(True)
    

    # Evaluate the HNN trajectories for 1s
    s_span = torch.linspace(0, 1, 200)

    #traj = model.trajectory(X_t, s_span).detach().cpu()
    traj = torchdiffeq.odeint_adjoint(
        model.defunc,X_t,s_span
    ).detach().cpu()
    print(traj)
    
    fig,ax = plt.subplots(1)
    ax.plot(s_span.reshape(-1,1),traj[:,0,0],c="black",label="Test")
    ax.plot(t,x,label="Training",ls="--",c="red")
    ax.set_xlabel("Time")
    ax.set_ylabel("X")
    ax.legend()


    fig,ax = plt.subplots(1)
    ax.plot(traj[:,0,0],traj[:,0,1],c="black")
    ax.set_xlabel("x")
    ax.set_ylabel("ẋ")

    s_span = torch.linspace(0, 1, 100)
    X_t = torch.randn(1000, 2).to(device)
    traj = model.trajectory(X_t, s_span).detach().cpu()

    # Plot the HHN's trajectories with random ICs
    fig = plt.figure(figsize=(3,3))
    ax = fig.add_subplot(111)
    color = ['orange', 'blue']
    for i in range(len(X_t)):
        ax.plot(traj[:,i,0], traj[:,i,1], color='blue', alpha=0.1);
    ax.plot(X[:,0].cpu(),X[:,1].cpu(), color='red')
    ax.set_xlim([-2,2])
    ax.set_ylim([-2,2])
    ax.set_xlabel(r"$q$")
    ax.set_ylabel(r"$p$")
    ax.set_title("HHN's trajectories & training data")
    plt.show()


    

    

    
