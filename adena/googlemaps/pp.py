import numpy as np 
import pandas as pd 

df = pd.read_csv("NASGORDKI.csv")
print(df.head())

df["X"] = df.Rating * df.NumberOfUser

df = df.sort_values(by="X",ascending=False)
df = df.reset_index(drop=True)

df.to_csv("NASGORCLEAN.csv",index=False)