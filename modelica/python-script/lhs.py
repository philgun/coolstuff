import numpy as np
import matplotlib.pyplot as plt
from itertools import combinations

from smt.sampling_methods import LHS

def ismember(a, B):
    ret = np.sum(a == B)
    return ret

                       #x1      #x2       #x3
xlimits = np.array([[20, 30], [1, 10], [100,200]])
sampling = LHS(xlimits=xlimits,criterion='c')

num = 50
x = sampling(num)

combi = list(combinations(np.arange(0,num),2))

print(x.shape)

dist_unique = []
dist_raw = []
for a in combi:
    p1 = x[a[0]]
    p2 = x[a[1]]
    d = 0
    for i in range(len(p1)):
        dsq = (p1[i]-p2[i])**2
        d = d + dsq

    if (d)**0.5 not in dist_unique:
        dist_unique.append((d)**0.5)

    dist_raw.append((d)**0.5)


print(len(dist_raw),len(dist_unique))
J=[]
for i in range(len(dist_unique)):
    J.append(ismember(dist_unique[i],dist_raw))
