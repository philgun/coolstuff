import numpy as np
from scipy.integrate import solve_ivp
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D

x_vals = []
beta = np.arange(0,4.001,0.001)

for b in beta:
    xold = 0.5
    #Removing transient
    for _ in range(5000):
        xnew = (xold - xold**2) * b
        xold = xnew
    
    xss = xnew
    for _ in range(10000):
        xnew = (xold - xold**2) * b
        xold = xnew
        x_vals.append(
            [b,xnew]
        )

        if abs(xnew - xss) < 1e-3:
            break

x_vals = np.array(x_vals)
fig,ax = plt.subplots()
ax.scatter(
    x_vals[:,1],4-x_vals[:,0], c="red", s= 0.01
)
ax.set_xlabel("X")
ax.set_ylabel("Beta")
ax.set_xticks(np.arange(0,1.1,0.1))
ax.set_xlim(0,1)

ax.set_yticks([0,1,2,3,4])
ax.set_yticklabels(["4","3","2","1","0"])
ax.set_ylim(0,1)
plt.show()