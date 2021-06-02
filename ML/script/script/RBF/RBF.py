import joblib
import numpy as np
from scipy.spatial.distance import cdist
import time

def calculate(inputs):
    t1 = time.time()
    X = np.array(inputs["X"])
    X_train = joblib.load("X_train.pickle")
    W = joblib.load("weight_thinplate.pickle")
    print(
        "Loading all the necessary bins files took : %s seconds"%(time.time() - t1)
    )

    t2 = time.time()
    print(X.shape[0] , X_train.shape[0])

    r = cdist(X,X_train)
    print(
        "Calculating %s eucledian distance takes : %s seconds"%(
            X.shape[0] * X_train.shape[0], time.time() - t2
        )
    )

    t3 = time.time()
    r_func = r**2 * np.log(r)
    
    print(
        "Applying %s times radial function : %s seconds"%(
            r_func.shape[0], time.time() - t3
        )
    )

    t4 = time.time()

    val = np.dot(
        r_func, W
    )
    print(
        "Calculating RBF for %s unknown data points took : %s seconds"%(
            val.shape[0] , time.time() - t4
        )
    )

    return val

if __name__ == '__main__':
    X_test = joblib.load("X_test.pickle")
    calculate(
        {"X":X_test}
    )