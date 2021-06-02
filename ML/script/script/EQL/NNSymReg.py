import os
import tensorflow as tf
tf.config.run_functions_eagerly(True)
tf.get_logger().setLevel(3)

import sympy as sp

from tensorflow.keras import layers
from tensorflow import keras
import numpy as np

def print_equation(model, vars, target, unary_func, binary_func, threshold = 0.001, save_equation=True):
    if not isinstance(vars[0],str) and not(isinstance(target, str)):
        raise TypeError("Features and target names have to be string type. Found type of %s and %s"%(type(var[0]), type(target)))
    
    #Instantiate empty list to contain mathematical expression of each layer
    expr_ = []

    #Transform string into sp.Matrix object
    varnames = []

    for v in vars:
        varnames.append(
            sp.Symbol(v)
        )

    var = sp.Matrix([varnames])

    for i,layer in enumerate(model.hiddenlayers):
        #Take the only layer input - last hidden layer
        if i == len(model.hiddenlayers) - 1:
            break
        
        #Get the weight and bias from the evaluated layer
        if threshold is not None:
            w = layer.w.numpy()

            w[np.abs(w)<threshold] = 0
        else:
            w = layer.w.numpy()
        
        #Replace all the weight that < threshold to 0
        w = sp.Matrix(w)
        b = sp.Matrix(layer.b)

        #Do the linear multiplication.
        if len(expr_)==0:
            #If expr_ is still an empty list, means that we are at hidden layer 1
            expr = var * w + b.T
        else:
            #Else take the last expr_ output
            expr = expr_[-1] * w + b.T #1 X units matrix
        
        interim_exp = []
        binary_count = 0
        unary_count = 0
        
        #Apply the mathermatical function
        while unary_count < len(unary_func):
            #For each neuron in the hidden layer, assign a unique unary function
            e = expr[0,unary_count]
            f = unary_func[unary_count]

            #Apply function
            e_ = f.eq_print(e)

            #Append to interim_exp
            interim_exp.append(e_)

            unary_count+=1
        
        while unary_count < len(unary_func) + 2 * len(binary_func):
            #For each next two neurons, apply binary function
            e1 = expr[0, unary_count]
            e2 = expr[0, unary_count+1]

            f = binary_func[binary_count]
            
            e_ = f.eq_print(e1,e2)
            interim_exp.append(e_)

            #Since binary func takes two inputs, then the increment of unary_count = 2
            unary_count +=2

            #Increment binary count by 1
            binary_count +=1

        #Convert interim_exp intp sympy
        interim_exp = sp.Matrix([interim_exp])

        #Append to expr_
        expr_.append(interim_exp)

    #Take the output layer
    output_layer = model.hiddenlayers[-1]
    if threshold is not None:
        w_output = output_layer.w.numpy()
        w_output[np.abs(w_output)<threshold] = 0
    else:
        w_output = output_layer.w.numpy()
    
    w_output = sp.Matrix(w_output)
    b_output = sp.Matrix(output_layer.b)

    #Multiply weight and add bias with the last expression obtained from the last hidden layer
    final_expr = expr_[-1] * w_output + b_output.T

    #Save the equation if prompted    
    if save_equation == True:
        with open("./eq/final_equation.txt","w") as f:
            for i,t in enumerate(target):
                text = "%s = %s\n"%(t, str(final_expr[i]))
                f.write(
                    text
                )

    return final_expr

class LearnerLayer(layers.Layer):
    '''
    Custom layer using keras. The layer is to do matrix multiplication
    '''
    def __init__(self, input_dim, units):
        super().__init__()

        initval_w = tf.random_normal_initializer()
        initval_b = tf.random_normal_initializer()
        
        #Add weight and bias
        self.w = tf.Variable(
            initial_value = initval_w(
                shape=(input_dim, units)
            ),
            trainable=True
        )

        self.b = tf.Variable(
            initial_value = initval_b(
                shape=(units,)
            ),
            trainable=True
        )

    #Linear Operator
    def call(self,inputs):       
        out = tf.matmul(inputs, self.w) + self.b
        return out

class NNSymbolicRegressor(keras.Model):
    def __init__(self, input_dim, output_dim, unary_func, binary_func, network_depth = 2, alpha_l1 = 0.01, reg = True):
        super().__init__()
        self.input_dim = input_dim
        self.output_dim = output_dim
        self.network_depth = network_depth
        self.alpha_l1 = alpha_l1 #regularisation constant
        self.reg = reg
        
        #Unary func and binary func --> functions that take 1 and 2 inputs respectively
        self.unary_func = unary_func
        self.binary_func = binary_func

        self.in_dim_hl = len(self.unary_func) + len(self.binary_func)
        self.out_dim_hl = len(self.unary_func) + 2 * len(self.binary_func)

        #Put layers here
        self.hiddenlayers = []
        for i in range(self.network_depth):
            if i == 0:
                #Input layer
                self.hiddenlayers.append(
                    LearnerLayer(
                        self.input_dim, 
                        self.out_dim_hl
                    )
                )
            elif i == self.network_depth-1:
                #Output layer
                self.hiddenlayers.append(
                    LearnerLayer(
                        self.in_dim_hl,
                        self.output_dim
                    )
                )
            else:
                #Hidden layers
                self.hiddenlayers.append(
                    LearnerLayer(
                        self.in_dim_hl,
                        self.out_dim_hl
                    )
                )

    def call(self, X):        
        for i in range(len(self.hiddenlayers)-1):
            #Get the layer
            layer = self.hiddenlayers[i]
            #print(
            #    "W = \n\n\n%s"%(layer.w)
            #)
            #print(
            #   "X = \n\n\n%s"%(X.numpy())
            #)
            #print(
            #    "b = \n\n\n%s"%(layer.b)
            #)
            
            #Forward pass : W x inputs
            X = layer(X)
            #print(
            #    "W *x + b = \n\n\n%s"%(X.numpy())
            #)
                        
            #Apply function
            X = self.apply_function(X)

        #Last layer (output) does not use any function - forward pass only
        #print(
        #    "func(out) = \n\n\n%s"%(X.numpy())
        #)
        X = self.hiddenlayers[-1](X)
                      
        return X

    def model(self):
        '''
        This method is the workaround to show the outputshape of each layer. If not using this, since we are implementing keras subclassing, the output for each layer is always showed as "multiple"
        '''
        x = keras.Input(shape=(self.input_dim))
        return keras.Model(inputs=[x], outputs=self.call(x))

    def compile(self, optimizer, loss, metrics):
        super().compile()

        #Assign the opt and loss func
        self.optimizer = optimizer
        self.loss = loss
        self.met = metrics

    def apply_function(self,y):
        #Instantiate an empty list to contains the output after applying the mathematical function
        self.out = []

        #Index for keeping track at which neuron and which respective function (unary or binary)
        unary_count = 0
        binary_count = 0 

        while unary_count < len(self.unary_func):
            f = self.unary_func[unary_count]

            #Apply the unary functions
            v = f.apply(y[:,unary_count])

            self.out.append(
                v
            )
            
            #Add the index
            unary_count+=1

        while unary_count < self.out_dim_hl:
            f = self.binary_func[binary_count]

            #Apply binary functions
            v = f.apply(
                    y[:,unary_count], 
                    y[:,unary_count+1]
                )
            
            self.out.append(v)

            #Add the indexes
            unary_count += 2
            binary_count +=1
        
        #Stack the output column-wise, convert list into tensor!
        self.out = tf.stack(
            self.out,axis=1
        )
        
        return self.out

    def train_step(self,data):
        X, y = data

        #Forward pass under the tape will be recorded for back-prop
        with tf.GradientTape() as tape:
            #Forward pass
            y_pred = self(X)

            #Compute L2 loss
            L2_loss = self.loss(y,y_pred)

            #Compute L1 Regularisation
            if self.reg == True:
                L1_regularisation = 0
                for layer in self.hiddenlayers:
                    w = layer.w
                    reg = self.alpha_l1 * tf.math.reduce_sum(
                        tf.math.abs(w)
                    )
                    L1_regularisation += reg
            
            #Compute total loss
            if self.reg == True:
                loss =  L2_loss + L1_regularisation
            else:
                loss = L2_loss

        training_vars = self.trainable_variables

        #Get the gradient - d(loss) / d(training_vars)
        grad = tape.gradient(loss, training_vars)

        #Apply the gradient descent
        self.optimizer.apply_gradients(
            zip(grad, training_vars)
        )

        #Update metrics
        self.met.update_state(y, y_pred)

        return {"loss" : loss, "metric" : self.met.result()}

    def test_step(self,data):
        X,y = data

        #Forward pass
        y_pred = self(X)

        #Compute L2 loss
        L2_loss = self.loss(y,y_pred)

        '''
        #Compute L1 Regularisation
        L1_regularisation = 0
        for layer in self.hiddenlayers:
            w = layer.w
            reg = self.alpha_l1 * tf.math.reduce_sum(
                tf.math.abs(w)
            )
            L1_regularisation += reg
        '''
        
        #Compute total loss
        loss =  L2_loss #+ L1_regularisation #MSE + regularisation

        #Update the metric
        self.met.update_state(y, y_pred)
        
        return {"loss" : loss, "metric": self.met.result() }

if __name__ == '__main__':
    x1 = sp.Symbol("x1")
    x2 = sp.Symbol("x2")
    x3 = sp.Symbol("x3")
    vars = [x1,x2,x3]
    M1 = sp.Matrix([vars])
    print(M1.shape)

    M2 = sp.Matrix(
        np.random.rand(
            3,3
        )
    )
        
    M3 = M1 * M2
    M4 = sp.matrix_multiply_elementwise(M1,M1)
    M4 = sp.matrix_multiply_elementwise(M4,M1)

    expr = [
        sp.sin(M) for M in M3
    ]        

    print(expr)
    print(M4)

    m1 = tf.constant(
        [[1.1,1.2,1.3,1.5]],shape=(2,2)
    )

    m1 = sp.Matrix(m1)
    vars = [x1,x2]
    M1 = sp.Matrix([vars])

    M1_m1 = M1 * m1


    print(
        M1_m1[0],M1_m1
    )

    print(
        sp.sin(m1)
    )

    print(
        sp.sin(sp.sin(M1_m1))
    )
