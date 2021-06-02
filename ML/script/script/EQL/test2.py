import numpy as np


X = np.array(
    [[1.1, 1.2, 1.3]]
)

W1 = np.array(
    [[-0.04998927,  0.0881746 , -0.02529388,  0.00394148],
    [ 0.0033707 ,  0.00717134,  0.00715086,  0.00043982],
    [-0.02936684, -0.04217422, -0.022343  ,  0.08020046]],   
)

W2 = np.array(
    [[-0.03619037],
    [ 0.0852584],
    [ 0.1301998]]
)

y1 = np.matmul(X , W1)
print("y1:          ", y1)

out_inter = np.zeros(
    (1,3)
)

out_inter[0,0] = np.sin(y1[0,0])
out_inter[0,1] = np.cos(y1[0,1])
out_inter[0,2] = y1[0,2] * y1[0,3]

print("after activation:            ",out_inter)

y_final = np.matmul(out_inter,W2)

print(y_final)
