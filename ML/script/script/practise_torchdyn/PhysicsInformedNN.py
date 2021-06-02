import torch
import torch.utils.data as data

import torch.nn as nn
import pytorch_lightning as pl
import numpy as np

from pyDOE import *
import torch.utils.data as utilsdata

#Try Berger Equation
# u_t + uu_x − ( 0.01 / π ) uxx = 0 , x ∈ [− 1 , 1 ], t ∈ [ 0 , 1 ]

def generate_lhs(UB,LB,num_inputs,numdata):
    LHS = lhs(num_inputs,samples=numdata,criterion='maximin')  
    ub = UB[0]
    lb = LB[0]
    real_val = LHS * (ub - lb) + lb
    LHS = real_val
    print("\n\n")
    print(LHS)
    return LHS


class Data(object):
    def __init__(self,x_lb,x_ub,t_lb,t_ub):
        self.x_lb,self.x_ub = x_lb, x_ub
        self.t_lb,self.t_ub = t_lb,t_ub

    def generate(self,num_initial=1000,num_boundary=1000,num_collocation=15000):
        #PINN is unsupervised learning, which learns to minimise the cost
        self.x_initial = []
        self.t_initial = []

        self.x_bound = []
        self.t_bound = []

        self.x_colocation = []
        self.t_colocation = []

        #Initial condition data
        #For berger, at t=0 u(0,x) = -sin(pi *x)
        x0 = generate_lhs(
            [self.x_ub],[self.x_lb],
            1,num_initial
        )

        t0 = np.zeros((num_initial))

        #Appending data to the list
        for i in range(num_initial):
            self.x_initial.append(x0[i][0]);self.t_initial.append(t0[i])

        
        #Boundary condition data
        tboundary = generate_lhs([self.t_ub],[self.t_lb],1,num_boundary)
        for i in range(num_boundary):
            self.t_bound.append(tboundary[i][0])
            if i>(num_boundary/2-1):
                self.x_bound.append(self.x_ub)
            else:
                self.x_bound.append(self.x_lb)
        
        #Collocation point
        xcl = x0 = generate_lhs(
            [self.x_ub],[self.x_lb],
            1,num_collocation
        )

        tcl = x0 = generate_lhs(
            [self.t_ub],[self.t_lb],
            1,num_collocation
        )

        for i in range(num_collocation):
            self.x_colocation.append(xcl[i][0])
            self.t_colocation.append(tcl[i][0])
        
        self.x = [self.x_initial,self.x_bound,self.x_colocation]
        self.t = [self.t_initial,self.t_bound,self.t_colocation]

        return self.x, self.t


class Net(nn.Module):
    def __init__(self,numLayer,numUnit,inputSize, outputSize):
        super(Net,self).__init__()
        self.inputSize = inputSize
        self.outputSize = outputSize
        self.numLayer = numLayer
        self.numUnit = numUnit

    def generateModel(self):
        self.linears = nn.ModuleList(
            [nn.Linear(self.inputSize,self.numUnit)]
        )
        for i in range(self.numLayer):
            self.linears.extend(
                [nn.Tanh(), nn.Linear(self.numUnit,self.numUnit)]
            )
        self.linears.extend(
            [nn.Tanh(),nn.Linear(self.numUnit,self.outputSize)]
        )

        self.model = nn.Sequential(*self.linears)

        return self.model 

class Learner(object):
    def __init__(self,model,x,t):
        self.model = model
        self.x = x #List of lists
        self.t = t #List of lists

    def shuffle_data(self,x,t):
        input_matrix = np.column_stack([x,t])
        np.random.shuffle(input_matrix)
        X = torch.from_numpy(input_matrix)
        X = X.requires_grad_(True)
        return X

    def Calculate_loss(self):
        self.loss_func = torch.nn.MSELoss()

        #Loss at initial condition
        #u ( 0 , x ) = − sin ( π x ),
        self.N_initial = len(self.x[0])
        self.X_train_initial = self.shuffle_data(self.x[0], self.t[0]).to(torch.float32)
        self.ŷ_initial = self.model.forward(self.X_train_initial)
        dim = list(self.ŷ_initial.size())

        #Reshape to s.t. both tensors have the same size
        self.y_initial_truth =  -1 * torch.sin(3.14 * self.X_train_initial[:,0]).reshape((dim[0],dim[1]))
        self.loss_initial = self.loss_func(self.ŷ_initial,self.y_initial_truth)

        #Loss at boundary condition
        #u ( t , − 1 ) = u ( t , 1 ) = 0 .
        self.N_boundary = len(self.x[1])
        self.X_train_boundary = self.shuffle_data(self.x[1], self.t[1]).to(torch.float32)
        self.ŷ_boundary = self.model.forward(self.X_train_boundary)
        dim = list(self.ŷ_boundary.size())

        #Reshape to s.t. both tensors have the same size
        self.y_boundary_truth =  torch.zeros((dim[0],dim[1]))
        self.loss_boundary = self.loss_func(self.y_boundary_truth,self.ŷ_boundary)
        
        #Loss at colocations
        #1st partial derivative: col 1 is dŷ/dx col2 dŷ/dt. dtype=tensor
        self.N_colocation = len(self.x[-1])
        self.X_train_colocation = self.shuffle_data(self.x[-1],self.t[-1]).to(torch.float32)
        self.ŷ_colocation = self.model.forward(self.X_train_colocation) 
        self.grad = torch.autograd.grad(self.ŷ_colocation.sum(),self.X_train_colocation,create_graph=True,retain_graph=True)[0]
        self.ŷ_x = self.grad[0][0]
        self.ŷ_t = self.grad[0][1]

        #2nd partial derivative: col1 is ŷ_xx col2 is ŷ_tt. dtype= tensor
        self.grad_2 = torch.autograd.grad(self.grad.sum(),self.X_train_colocation,create_graph=True,retain_graph=True)
        self.ŷ_xx = self.grad_2[0][0]
        self.ŷ_tt = self.grad_2[0][1]

        #Construct the loss for berger equation
        #Physics: u_t + uu_x − ( 0.01 / π ) uxx = 0
        f = self.ŷ_t + self.ŷ_colocation * self.ŷ_x - (0.01 / 3.14) * self.ŷ_xx
        dim = list(f.size())
        self.loss_colocation = self.loss_func(f,torch.zeros((dim[0],dim[1])))

        self.loss_total = self.loss_initial + self.loss_boundary + self.loss_colocation
        return self.loss_total

    def configureOptimiser(self):
        self.optimiser = torch.optim.Adam(
            self.model.parameters(),
            lr=1e-4 #FIXME: Hardcoded, change later!
        )
    
    def training(self,epochs): #Training with fix epochs
        self.optimiser.zero_grad()

        print("Start training.....")
        for i in range(epochs):
            self.MSE  = self.Calculate_loss()
            self.MSE.backward()

            self.optimiser.step()
            if (i+1)%10 == 0:
                print("%sth loss = %s"%(i, self.MSE.squeeze()))
        
        print("End training.....")


if __name__ == '__main__':
    device = torch.device("cpu")

    #Generate the data
    data = Data(-1,1,0,1)
    d = data.generate(100,100,20000)

    #Generate the model
    net = Net(10,100,2,1)
    model = net.generateModel()    
    model.to(device)
    print(model)

    learner = Learner(
        model,d[0],d[1]
    )

    learner.configureOptimiser()
    learner.training(50000)
    