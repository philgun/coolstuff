from scipy.integrate import odeint
import numpy as np
from matplotlib import pyplot as plt
from functools import partial
import tensorflow as tf
import tensorflow_probability as tfp
tf.enable_eager_execution()

# Notes
'''
Following the starter code of Neural ODE in: https://github.com/mandubian/neural-ode/blob/master/tf-neural-ode-v1.0.ipynb
Start with:
    1. Defining Lotke-Volterra function
    2. Solve LV eq. with Scipy ODE int (called from TF environment) and TF Probability solver
    3. Augmented NN to model some part of the differential equation in the model

http://implicit-layers-tutorial.org/neural_odes/
'''      

def LKV_TF(z,ts,args):
    x,y = z[0],z[1]
    α, β, δ, γ = args[0], args[1], args[2], args[3]
    dx_dt = α * x - β *x *y
    dy_dt = -δ * y + γ * x *y

    #Z is tensor that contains the population of x and y (rabbit and fox)
    Z = tf.stack(
        [dx_dt,dy_dt],
        axis=0 #Stack row-wise
    )
    return Z

def LKV_TF2(ts,z,args):
    x,y = z[0],z[1]
    α, β, δ, γ = args[0], args[1], args[2], args[3]
    dx_dt = α * x - β *x *y
    dy_dt = -δ * y + γ * x *y

    #Z is tensor that contains the population of x and y (rabbit and fox)
    Z = tf.stack(
        [dx_dt,dy_dt],
        axis=0 #Stack row-wise
    )
    return Z

def ode_scipy(f, z0, ts, args):
    if args is not None: #args is supplied 
        #Create a function namely opt which takes z0,ts,args as inputs and returns
        #a function that has scipy.integrate.odeint method embedded into it
        opt = lambda z0,ts,args: odeint(f,z0,ts,args=(args,)) 
        res = tf.py_function(
            opt,
            [z0, ts, args], z0.dtype)
    else:
        #Create a function namely opt which takes z0 and ts as inputs and returns
        #a function that has scipy.integrate.odeint method embedded into it with no args (constant to function f)
        opt = lambda z0,ts: odeint(f,z0,ts,args=(None,))
        res = tf.py_function(
            opt,
            [z0, ts], z0.dtype)
    return res

def ode_tf(f,ts,z0,args):
    solver = tfp.math.ode.BDF()
    
    #Return opt as an initialisation of f(z0,ts,args) within which args has been embedded, with input of z0,ts
    opt = lambda ts,z0: f(ts,z0,args)
    res = solver.solve(
        opt,        
        initial_time=0.0,
        initial_state=z0,
        solution_times=ts
    )
    return res

if __name__ == '__main__':
    #Experimenting with TF
    D = 2
    N = 200

    #Built constant tensor (for time stepping)
    t = np.linspace(0.0,10.0,N)
    ts = tf.constant(t)

    #Constant for Lotka-Volterra function - In Tensor form
    #FIXME: we can get around with only tf.constant, why they use tf.Variable?
    args = tf.Variable(
        tf.constant(
            [1.5,1.0,3.0,1.0],
            shape = (4,),
            dtype = ts.dtype)
    )
    
    #Initial condition for the Lotka-Volterra function - In Tensor form
    #FIXME: we can get around with only tf.constant, why they use tf.Variable?
    z0 = tf.Variable(
        tf.constant(
            [1.0,1.0],
            shape=(2,),
            dtype=ts.dtype
        )
    )

    #Compute the solution of Lotka-Volterra equation using: 
    #       (1). Scipy ODE integration called from TensorFlow using py_function method
    #       (2). TensorFlow Probability ODE solver
    #FIXME: TF Probability takes a looooong time to solve, not sure why(?)
    sol = ode_scipy(LKV_TF,z0,ts,args)
    sol2 = ode_tf(LKV_TF2,ts,z0,args)
    sol2 = sol2.states.numpy()

    #Plot - compare the result from both methods
    fig,ax = plt.subplots(1)
    ax.plot(ts.numpy(),sol[:,0],label="Rabbit scipy odeint",c="r")
    ax.plot(ts.numpy(),sol[:,1],label="Foxes scipy odeint",c="k")

    sol2_rabbit = sol2[:,0]
    sol2_foxes = sol2[:,1]

    ax.plot(ts.numpy(),sol2_rabbit,ls="--",c="green",label="Rabbit TFP ode solver")
    ax.plot(ts.numpy(),sol2_foxes,ls="--",c="green", label="Rabbit TFP ode solver")

    ax.legend()
    plt.show()
