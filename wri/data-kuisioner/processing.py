import pandas as pd
import numpy as np
from matplotlib import pyplot as plt
import seaborn as sns


#P_value = 0.05

df = pd.read_csv('data_survey.csv')

df = df[df.columns[2:9]]

df.columns = ["1","2","3","4","5","6","7"]

corrMatrix = df.corr(method='pearson')
print(corrMatrix)
