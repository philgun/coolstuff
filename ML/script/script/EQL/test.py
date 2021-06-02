import os
import tensorflow as tf
from tensorflow.keras import layers
from tensorflow import keras
import numpy as np
tf.config.run_functions_eagerly(True)
tf.get_logger().setLevel(3)

import NNSymReg as nn
import function as f
import sympy

X = tf.constant(
    [1.1, 1.2],shape=(1,2), dtype=tf.float32
)

unary_func = [
    f.func_id(), f.func_square(), f.func_sqrt(), f.func_ln(), f.func_cubic()
]

binary_func = [
    f.func_multiply(), f.func_div(), f.func_power()
]
network_depth = 3

model = nn.NNSymbolicRegressor(
    input_dim=2, 
    output_dim=1, 
    unary_func=unary_func, 
    binary_func=binary_func,
    network_depth=network_depth,
    alpha_l1=0.01
)

print(
    len(model.trainable_variables) == 2 * network_depth
)

x1 = sympy.Symbol("x1")
x2 = sympy.Symbol("x2")

var = [sympy.Symbol("x1"),sympy.Symbol("x2")]
var = sympy.Matrix([var])
expr_= []

equation = nn.print_equation(
    model, ["x1", "x2"], "der_h",unary_func, binary_func
)

for i,layer in enumerate(model.hiddenlayers):
    #Take the only layer input - last hidden layer
    if i == len(model.hiddenlayers) - 1:
        break
    
    #Get the weight
    w = sympy.Matrix(layer.w)

    #Do the linear multiplication. If expr_ is still an empty list, means that we are at hidden layer 1
    if  len(expr_)==0:
        expr = var * w
    #Else take the last layer output
    else:
        expr = expr_[-1] * w
    
    interim_exp = []
    binary_count = 0
    unary_count = 0
    
    #Apply the mathermatical function
    while unary_count < len(unary_func):
        e = expr[0,unary_count]
        f = unary_func[unary_count]
        e_ = f.eq_print(e)
        interim_exp.append(e_)

        unary_count+=1
    
    while unary_count < len(unary_func) + 2 * len(binary_func):
        e = expr[0, unary_count]
        e2 = expr[0, unary_count+1]

        f = binary_func[binary_count]
        
        e_ = f.eq_print(e,e2)
        interim_exp.append(e_)

        unary_count +=2
        binary_count +=1

    interim_exp = sympy.Matrix([interim_exp])
    expr_.append(interim_exp)

print("Function:\n\n", equation)
       
out = model.predict(X)

print(out)

#try save model
model.save("./a")

