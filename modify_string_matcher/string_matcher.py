'''
    This script contains StringMatcher algorithm created by Tony which serves as pre-processing for the Categoriser model
'''
import argparse
import subprocess
import sys
import json

def install(package):
    subprocess.check_call([sys.executable, "-m", "pip", "install", package])

import warnings
import sys
import os
import re

import pandas as pd
import numpy as np
import tfidf_matcher as tm

import fuzzymatcher
from fuzzymatcher import *
from import_db import *
from data import *
from nltk.util import ngrams
import boto3
import pickle

############################################################ String matcher script
'''
check = Preprocess(ts[1000:2000])
check.transform()
cat, uncat = check.run()
'''

class Preprocess(object): 
    def __init__(self, ts:list):
        try:
            assert(isinstance(ts,list) == True)
        except:
            raise TypeError(
                "Expection ts to be a list, found %s instead"%(type(ts))
            )
        
        '''
        Download all the CSVs needed from S3 bucket data to local folder ./data. This step is necessary so the model can
        have all the necessary data to run
        '''
        '''
        if not os.path.exists('./data'):
            os.makedirs('./data')
        
            bucket_name = 'sagemaker-ap-southeast-1-532691370171'

            conn = boto3.client('s3')
            s3 = boto3.resource('s3')
            contents = conn.list_objects(Bucket=bucket_name,Prefix='data')['Contents']
            for f in contents: 
                fname = f['Key']
                print(fname)
                s3.Bucket(bucket_name).download_file(fname, fname)
        '''
        

        #Load Budget Categories
        try:
            with open('./bc.pkl','rb') as f:
                bc = pickle.load(f)
        except Exception as e:
            print(str(e))
            raise Error("Error")
        
        #Load Regex and clean it up
        self.regex = pd.read_csv('./regex.csv')
        self.regex.drop_duplicates('keyword', inplace=True)
        self.regex.set_index('keyword', inplace=True)
        self.regex = self.regex['Category_id']
        
        #Process the ts --> using new alialytic module v1.1.0
        self.len_ts = len(ts)
        data = Data(ts, bc)
        data.get_categories(), data.process_ts()
        self.ts = data.df_ts_before_transformation
        
    def transform(self):
        self.ts.notes
    
    def transform(self): 
        self.ts.notes = self.ts.notes.apply(lambda x: self.remove_punctuation(self.remove_digits(x.lower())))
        self.notes_id_dict = self.split_notes_id() 
        self.notes_dict = {}
        self.ordered_dict  = dict()
        for tag in self.notes_id_dict: 
            self.notes_dict[tag] = {}
            for typ in self.notes_id_dict[tag]: 
                curr_id = self.notes_id_dict[tag][typ]
                
                try:
                    curr_patt = pd.read_csv(f'./{tag}_{typ}_patterns.csv')
                    curr_patt.rename({'0': 'patterns'}, axis=1, inplace=True)
                except: 
                    continue
                    
                self.notes_dict[tag][typ] = self.ts.notes[curr_id].to_frame()
                self.notes_dict[tag][typ]
                try: 
                    fm = fuzzymatcher.fuzzy_left_join(
                        self.notes_dict[tag][typ], curr_patt, left_on = 'notes', right_on = 'patterns'
                    )[['notes','patterns']]
                except: 
                    continue
                fm.index = curr_id
                fm.dropna(inplace=True)
                #display(fm)
                fm = fm.applymap(lambda x: x.split(' '))
                fm['entities'] = self.extract_entities(fm, 'notes', 'patterns')
                self.notes_dict[tag][typ] =  fm['entities'].apply(lambda x: [' '.join(x) for x in self.get_upto_ngrams(x, 2)])
                self.ordered_dict.update(self.notes_dict[tag][typ])
        return self.ordered_dict
    
    def run(self): 
        dic = self.ordered_dict
        regex = list(self.regex.index)
        categorized_id, uncategorized_id, other_dicts, cat_ents = {}, {}, {}, {}
        
        JJ = 1
        for key in dic: 
            print(JJ)
            if JJ % 100 == 0:
            	print("Processing data %s from %s data"%(JJ, self.len_ts))
            	
            curr_ents = dic[key]
            
            other_dicts[str(key)] = {}
            
            other_dicts[str(key)]["notes"] = self.ts.notes[key]
            other_dicts[str(key)]["entities"] = None
            
            try: 
                match_df = self.tfidf_match(curr_ents, regex)
                if match_df.shape[0] == 0: 
                    uncategorized_id[str(key)] = curr_ents
                    other_dicts[str(key)]["entities"] = [c for c in curr_ents if len(c.split()) == 1]
                    continue
            except: 
                uncategorized_id[str(key)] = curr_ents
                
            matches = list(match_df['Lookup 1'])
           
            if other_dicts[str(key)]["entities"] == None:
                other_dicts[str(key)]["entities"] = matches
                cat_ents[str(key)] = matches

            matches = [self.regex[x] for x in matches]
            
            if len(matches) == 0:
                categorized_id[str(key)] = str(9)
            elif len(matches) > 0:
                categorized_id[str(key)] = str(matches[0])
            else:
                raise TypeError("length of variable 'matches' has to be >= 0. Found type %s instead"%(type(matches)))
            JJ += 1
            
	
        return categorized_id, uncategorized_id, other_dicts, cat_ents
        
    
    def tfidf_match(self,words, reg, thres = .85): 
        match_df = tm.matcher(words, reg, 1)
        match_df = match_df[match_df['Match Confidence'] > thres]
        return match_df
    
    def get_upto_ngrams(self,s, n): 
        grams = []
        for i in range(1, n+1): 
            grams += list(ngrams(s, i))
        return grams
        
    def extract_entities(self, fm, notes_col = 'notes',patterns_col = 'patterns'): 
        entities = []
        for idx,row in fm.iterrows(): 
            note = row[notes_col]
            pattern = row[patterns_col]
            ent = [x for x in note if x not in pattern and len(x) > 1]
            #ent = ' '.join(ent).strip().split(' ')
            entities.append(ent)
        return entities        
    
    def split_notes_id(self):
        notes_id = {}
        for tag in self.ts.tags.unique(): 
            notes_id[tag] = {}
            for typ in self.ts.type.unique(): 
                notes_id[tag][typ] = list(self.ts[(self.ts.tags == tag) & (self.ts.type == typ)].index)
        return notes_id
                
    def remove_punctuation(self, words):
        new_words = []
        for word in words:
            new_word = re.sub(r'[^\w\s\-]','', (word))
            if new_word != '':
                new_words.append(new_word)

        new_words = ''.join(new_words)
        new_words = new_words.replace('-', ' ')
        new_words = new_words.replace('\n', ' ')
        return new_words
    
    def remove_digits(self, s):
        result = ''.join([ i for i in s if not i.isdigit()])
        return result
