import numpy as np 
import pandas as pd
from pymongo import MongoClient
import lib
import os
import datetime

now = datetime.datetime.now()
dirname = 'data_emisi_%s%s%s'%(now.strftime('%d'),now.strftime('%m'),now.strftime('%y'))

if os.path.exists(dirname): 
    os.system('rm -rf %s'%dirname)
    os.makedirs(dirname)
else:
    os.makedirs(dirname)

cluster = lib.MongoDB()
database = cluster.load_database("emission")
collection_names = cluster.load_collection_names()

writer = pd.ExcelWriter("%s/raw.xlsx"%(dirname),engine='xlsxwriter')

for name in collection_names:
    collection = cluster.load_collection(name)
    cursor = cluster.load_cursor()
    df = cluster.gen_dataframe()
    df.to_excel(writer,sheet_name=name,index=False)

writer.save()