from DyMat import DyMatFile as D
import scipy
import numpy as np
import matplotlib.pyplot as plt

fmat = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/Lecture/DATA/DATA/FLUIDS/CYLINDER_ALL.mat"
data = scipy.io.loadmat(fmat)
VORTALL = data["VORTALL"]

X = VORTALL[:,0:-1]
X2 = VORTALL[:,1:]

U,s,V = np.linalg.svd(X, full_matrices=False)

plt.semilogy(s)
plt.show()


r = 21 #Truncate at 21 modes
U = U[:,:r]
s = s[:r]
V = V[:,:r]

S = np.zeros((r,r))
np.fill_diagonal(S,s)

#Compute atilde
Atilde = U.T.dot(X2).dot(V).dot(np.linalg.inv(S))

eigs, W = np.linalg.eig(Atilde)

#DMD
phi = X2.dot(V).dot(np.linalg.inv(S)).dot(W)
print(phi.shape)

fig,ax = plt.subplots()
theta = np.arange(0,101,1)*2 * 3.14 / 100
ax.plot(
    np.cos(theta), np.sin(theta)
)
ax.scatter(
    np.diag(eigs).real, np.diag(eigs).imag
)
plt.show()