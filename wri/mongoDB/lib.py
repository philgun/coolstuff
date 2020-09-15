import numpy as np 
import pandas as pd
from connectionstring import connectionstring as cs
from pymongo import MongoClient

class MongoDB(object):
    def __init__(self):
        self.cluster = MongoClient(cs)
        
    def load_database(self,name="emission"):
        self.database = self.cluster[name]
        return self.database

    def load_collection(self,namecollection):
        self.namecollection = namecollection
        self.collection = self.database[namecollection]
        return self.collection

    def load_cursor(self):
        self.cursor = self.collection.find({})
        return self.cursor

    def load_databasename(self):
        self.dbnames = self.cluster.list_database_names()
        return self.dbnames
        
    def load_collection_names(self):
        self.collection_names = self.database.list_collection_names()
        return self.collection_names  

    def gen_dataframe(self):
        length = 0
        keys = []
        list_of_documents = []
        #Get the most complete keys!
        for document in self.cursor:
            list_of_documents.append(document)
            if len(document.keys()) > length:
                #Updating the length and keys
                length = len(document.keys())
                keys = document.keys()        
        #generate empty dataframe with column names = keys
        self.df = pd.DataFrame(columns=keys)
        for document in list_of_documents:
            #Generate empy dictionary with keys = keys
            d = dict.fromkeys(keys)
            for key in keys:
                docukeys = document.keys()
                if key in docukeys:
                    #Get the value
                    val = document[key]
                    #Insert the value to dictionary
                    d[key] = val
            self.df=self.df.append(d,ignore_index=True)
        return self.df
          

if __name__ == '__main__':

    cluster = MongoDB()
    database = cluster.load_database("emission")
    #loop starts here for each collection name
    collection_names = cluster.load_collection_names()

    for name in collection_names:
        collection = cluster.load_collection(name)
        cursor = cluster.load_cursor()
        df = cluster.gen_dataframe()
        
        df.to_csv("%s.csv"%(name),index=False)
    
    
    

    

    
    
