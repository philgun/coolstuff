import torch
import torch.nn.functional as F

#LinReg using PyTorch
x = torch.rand(200,1)
y = x.pow(4) + 0.05 * torch.randn(x.size())

epoch = 5000
lr = 0.01

class Net(torch.nn.Module):
    #This __init__ method here is to instantiate the architecture
    def __init__(self,n_features,n_units,n_output):
        super(Net,self).__init__()

        #Instantiate a hidden layer that receives input with dimension (n_features,) and the hidden layer has n_hidden units. The hidden layer has a linear transformation 
        self.hidden = torch.nn.Linear(n_features, n_units)

        #Instantiate an output layer that receives input with dimension (n_units,), linearly transform it to n_output dimension
        self.output = torch.nn.Linear(n_units, n_output)

    def forward(self,input_data): 
        #Calculate forward prop
        
        #activate the hidden layer with "input_data" input
        hidden_linearly_transformed = self.hidden(input_data) #W_1' * X_in + bias
        hidden_output =  F.relu(hidden_linearly_transformed) # reLu(W' * X_in + bias)

        #linearly transforms
        output = self.output(hidden_output) # W_2' * hidden_output
        return output

#Network with:
#       an input layer with dimension of (1,), 
#       a hidden layer with 15 units
#       output layer with dimension (1,)
net = Net(1,15,1) 

#Using nn.Sequential wrapper to build our NN architecture
seq_net = torch.nn.Sequential(
    # Instantiate the 1st hidden layer that receivers 1 feature, and has 15 n_units. It has linear transformation
    torch.nn.Linear(1,15), 

    #Activation of the hidden layer
    torch.nn.ReLU(),

    #Output layer with 1 output dim and 15 input dim 
    torch.nn.Linear(15,1) 
)

print((seq_net))

lossFunc = torch.nn.MSELoss()

optimiser = torch.optim.SGD(
    #Tell optimiser to which parameter that it will be applied
    seq_net.parameters(),

    #Other params
    lr=lr,
    momentum=0.09
)

for i in range(epoch):
    #Feed the data into x, and calculate ŷ
    ŷ = net.forward(x)
    
    #Calculate the MSE loss
    mse = lossFunc(ŷ,y) 

    #Zeroing the gradient that previously calculated by the loss optimiser
    net.zero_grad()

    #Calculate the backpropagation - using Autograd
    mse.backward()

    #Update the weight manually using grad descent
    for f in net.parameters(): #Inherited attribute from torch.nn.Module
        #Access the value of each weight
        f_value = f.data

        #Access the gradient
        grad = f.grad.data

        #Substract a value of f_value
        f_value = f_value.sub_(lr * grad)

        #Loss is a tensor, as such it is squeezed into 1-D matrix
        print("%sth loss: %s"%(i,mse.squeeze()))


for i in range(epoch):
    #Feed the data into x, and calculate ŷ
    ŷ = seq_net.forward(x)
    
    #Calculate the MSE loss
    mse = lossFunc(ŷ,y) 

    #Zeroing the gradient that previously calculated by the loss optimiser
    optimiser.zero_grad()

    #Calculate the backpropagation - using Autograd
    mse.backward()

    #Update the params
    optimiser.step()

    if (i+1)%4 == 0:
        print("%sth loss = %s"%(i, mse.squeeze()))

 




