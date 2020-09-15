import numpy as np
import utils
from mpl_toolkits import mplot3d
from matplotlib import pyplot as plt
from matplotlib.mlab import griddata

UB = 10
LB = 0

xval = LB
yval = LB

X= []
Y= []

while xval <= UB:
    yval = LB
    while yval <= UB:
        Y.append(yval)
        X.append(xval)

        yval += 0.1
    xval += 0.1

X = np.array(X).reshape(-1,1)
Y = np.array(Y).reshape(-1,1)

data = np.concatenate((X,Y),axis=1)
print(data.shape)
Z = []
for i in range(data.shape[0]):
    z = utils.expensive_model(data[i])
    Z.append(z)

Z = np.array(Z).reshape(-1,1)
print(Z.shape)

s = int((X.shape[0])**0.5)

x = np.reshape(X,(s,s))
y = np.reshape(Y,(s,s))
z = np.reshape(Z,(s,s))

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

ax.plot_surface(x, y, z)

ax.set_xlabel('X Label')
ax.set_ylabel('Y Label')
ax.set_zlabel('Z Label')

plt.show()