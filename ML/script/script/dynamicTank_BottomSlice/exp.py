import pandas as pd
from matplotlib import pyplot as plt
import seaborn as sns
import numpy as np
from sklearn.metrics import mean_squared_error

df = pd.read_csv("./oldres/0/prediction_vs_test.csv")
mse = mean_squared_error(
    df.Prediction,df.Test
)

print(df.describe())

fig,ax = plt.subplots(1)
ax.scatter(
    df.Prediction,df.Test,c="red",s=0.5
)
ax.set_xlabel("Prediction"); ax.set_ylabel("Test")
plt.show()

sns.distplot(
    df.Test
)
plt.show()