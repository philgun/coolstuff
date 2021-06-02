from sklearn.metrics import r2_score, mean_squared_error, mean_absolute_error

import pandas as pd

df = pd.read_csv('prediction_vs_test.csv')

print(r2_score(df.Prediction,df.Test))
print(mean_absolute_error(df.Prediction,df.Test))
