from torchdyn.models import *
from torchdyn.datasets import *
from torchdyn import *
import torchdyn
from matplotlib import pyplot as plt

import torch
import torch.utils.data as data

import torch.nn as nn
import pytorch_lightning as pl

def plotData(X):
    colors = ['red','black']
    fig,ax = plt.subplots(1)
    for i in range(len(X)):
        ax.scatter(X[i,0],X[i,1],s=1,color=colors[yn[i].int()])
    plt.show()
    
def myfunc(abc: str):
    print(type(abc))
    return

class Learner(pl.LightningModule):
        def __init__(self,model:nn.Module,trainloader): #":" in function just gives annotation, as such PyTorch understand what data type model will be
            super().__init__() #super() means that class Learner can access the inhertied pl.Lightning module attributes
            self.model = model
            self.trainloader = trainloader

        def forward(self,x):
            #Calculate forward propagation, in PyTorch the forward prop is calculated by passing the input data to the model
            return self.model(x)

        def training_step(self, batch, batch_idx):
            x, y = batch
            ŷ = self.model(x)
            
            #Instantiate the loss metric
            metric = nn.CrossEntropyLoss()
            loss = metric(ŷ,y)
            logs = {'train_loss':loss}
            
            #Return a dictionary
            return {'loss': loss, 'log': logs}

        def configure_optimizers(self):
            self.optimiser = torch.optim.Adam(
                #Specify to which parameter the optimiser will be applied
                self.model.parameters(),

                #Other optimiser parameter
                lr=1e-2
            )
            return self.optimiser
        
        def train_dataloader(self):
            #Embedding the training data
            return self.trainloader

    
if __name__ == '__main__':
    d = ToyDataset()
    X, yn = d.generate(n_samples=512, noise=1e-1, dataset_type="moons")

    #Visualising dataset
    #plotData(X)

    #Define the "device" using which our N-ODE will be trained
    device = torch.device("cpu")

    #Load the data into the "Tensor" and transform it into compatible device type: Don't forget to specify the data type
    X_train = torch.Tensor(X).to(device)

    yn = yn.to(torch.long) #Make sure that the data type is long (int 64 bit)
    y_train = torch.LongTensor(yn).to(device)

    #Load the data into TensorDataset wrapper for easier readability by the machine
    train = data.TensorDataset(X_train,y_train)

    #Load the data into "DataLoader" class
    trainloader = data.DataLoader(
        train, 
        batch_size=len(X),
        shuffle=True
    )
   

    #Construct your model! nn.Sequential is a wrapper / container class
    f = nn.Sequential(
        #Instantiate a hidden layer that receives input of 2 dim features and has linear transformation and 16 units
        nn.Linear(2,16), 

        #Activate the output of the hidden layer
        nn.Tanh(),

        #Output layer, receives 16 dimension input features from the hidden layer, and output 2 dim
        nn.Linear(16,2) 
    )

    #Print the architecture
    print(f)

    #Define the Neural-ODE
    neuralODE = torchdyn.NeuralODE(
        f,
        sensitivity = "adjoint",
        solver = "dopri5"
    )

    #Make sure that the neural-ODE model is compatible with the device and device data type
    neuralODE = neuralODE.to(device)

    #Instantiate trainer class
    trainer = pl.Trainer(
        min_epochs=200,
        max_epochs = 300
    )

    #Train
    learn = Learner(neuralODE,trainloader)
    trainer.fit(learn)

    t_span = torch.linspace(0,1,100)
    trajectory = neuralODE.trajectory(X_train,t_span).detach().cpu()

    color=['red', 'black']

    fig = plt.figure(figsize=(10,2))
    ax0 = fig.add_subplot(121)
    ax1 = fig.add_subplot(122)
    for i in range(500):
        ax0.plot(t_span, trajectory[:,i,0], color=color[int(yn[i])], alpha=.1);
        ax1.plot(t_span, trajectory[:,i,1], color=color[int(yn[i])], alpha=.1);
    ax0.set_xlabel(r"$t$ [Depth]") ; ax0.set_ylabel(r"$h_0(s)$")
    ax1.set_xlabel(r"$t$ [Depth]") ; ax1.set_ylabel(r"$z_1(s)$")
    ax0.set_title("Dimension 0") ; ax1.set_title("Dimension 1")
    plt.show()

    n_pts = 50
    x = torch.linspace(trajectory[:,:,0].min(), trajectory[:,:,0].max(), n_pts)
    y = torch.linspace(trajectory[:,:,1].min(), trajectory[:,:,1].max(), n_pts)
    X, Y = torch.meshgrid(x, y) ; z = torch.cat([X.reshape(-1,1), Y.reshape(-1,1)], 1)
    f = neuralODE.defunc(0,z.to(device)).cpu().detach()
    fx, fy = f[:,0], f[:,1] ; fx, fy = fx.reshape(n_pts , n_pts), fy.reshape(n_pts, n_pts)
    # plot vector field and its intensity
    fig = plt.figure(figsize=(4, 4)) ; ax = fig.add_subplot(111)
    ax.streamplot(X.numpy().T, Y.numpy().T, fx.numpy().T, fy.numpy().T, color='black')
    ax.contourf(X.T, Y.T, torch.sqrt(fx.T**2+fy.T**2), cmap='RdYlBu')
    plt.show()

