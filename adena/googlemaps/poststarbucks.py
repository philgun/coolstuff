import numpy as np
import pandas as pd

df = pd.read_csv("starbucks.csv")
newname = 'PopularitasXKepuasan'
val = df.Rating * df.NumberOfUser
df.insert(loc=3,column=newname,value=val)
df = df.sort_values(by='PopularitasXKepuasan',ascending=False)
df = df.reset_index(drop=True)
df.to_csv("STARBUCKSCLEAN.csv",index=False)	
