'''
This script contains the Categoriser model definition and utils method
'''
    
import argparse
import subprocess
import sys
import json


def install(package):
    subprocess.check_call([sys.executable, "-m", "pip", "install", package])
    
install('scikit-learn')
install('tfidf_matcher')
#install('pickle')


################ String matcher libraries

import pickle
import tfidf_matcher as tm
# import tf-idf
import numpy as np
import pandas as pd
import sklearn
from sklearn.svm import SVC
from sklearn.svm import LinearSVC
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.base import BaseEstimator

install('regex')
import regex as re
try:
    import nltk
    nltk.download('stopwords')
except:
    install('nltk')
    import nltk
    nltk.download('stopwords')

import requests
import datetime as dt
from random import sample
#from nltk import ngrams
from nltk.corpus import stopwords
from nltk.util import everygrams
from collections import Counter
from nltk.util import ngrams

from data import *
from import_db import *

import json
import traceback
import warnings 
warnings.filterwarnings('ignore')

import boto3
from string_matcher import *

try:
    import nltk
    nltk.download('stopwords')
except:
    install('nltk')
    import nltk
    nltk.download('stopwords')
    

######################################### Utilities
def remove_punctuation(words):
    new_words = []
    for word in words:
        new_word = re.sub(r'[^\w\s\-]','', (word))
        if new_word != '':
            new_words.append(new_word)
        
    new_words = ''.join(new_words)
    new_words = new_words.replace('-', ' ')
    new_words = new_words.replace('\n', ' ')
    return new_words

def remove_digits(s):
    result = ''.join([ i for i in s if not i.isdigit()])
    return result

def random_fuzz(notes, sam, n_comp, n_iter): 
    result = {}
    for note in notes: 
        samples = [sam.sample(n_comp).values for i in range(n_iter)]
        matches = [process.extract(note, sample, limit=1)[0][0] for sample in samples]
        result[note] = matches
    return pd.DataFrame(result).T

def extract_patterns(df, threshold = .5): 
    result = {}
    for idx, row in df.iterrows(): 
        note = idx.split()
        samples = [row.iloc[x].split() for x in range(row.shape[0]) if row.iloc[x] != idx]
        count = Counter([item for sublist in samples for item in sublist])
        pattern =[x if count[x] > row.shape[0] * threshold else "ENTITY" for x in note]
        pattern = [each_pair[0] for each_pair in zip(pattern, pattern[1:]) if each_pair[0] != each_pair[1]] + [pattern[-1]]
        result[' '.join(note)] =' '.join(pattern)        
    return result

def extract_entity(patt_dict): 
    entities = {}
    for note in patt_dict: 
        patt = patt_dict[note].split()
        ent = [x for x in note.split() if x not in patt]
        entities[note] = ent
    return entities


def request_kg(keywords, limit, api_key, types = None):
    result_dict = {}
    params = {
        'query': '',
        'limit': limit,
        'indent': True,
        'key': api_key,
        'languages': 'en',
        'types': 'Thing' if types is None else types,
    }
    
    url_base = 'https://kgsearch.googleapis.com/v1/entities:search'
    for idx in range(len(keywords)): 
        params['query'] = keywords[idx]
        try: 
            response = requests.get(url_base,params)
            response = response.json()
            result_dict[keywords[idx]] = response['itemListElement']
            q = params['query']
            print(
                'done requesting for %s'%(q)
            )
        except Exception as e: 
            print('ERROR:', str(e))
            q = params['query']
            print(f'error requesting for {q}')
            continue
    return result_dict


def stemmer(text):
    ps = nltk.porter.PorterStemmer()
    text = ' '.join([ps.stem(word) for word in text.split()])
    return text

def process_desc(desc): 
    desc = desc.replace('\n','').lower()
    desc = re.sub(r'[^\w\s\-]','', (desc))
    words = desc.split(' ')
    filtered_desc = [word for word in words if not word in set(stopwords.words('english'))]
    stemmed_desc = stemmer(' '.join(filtered_desc))
    return stemmed_desc

def get_desc(results): 
    entity_desc = {}
    for entity in results.keys(): 
        res = results[entity]
        for i in range(len(res)): 
            entity_result = res[i]['result']
            try: 
                detailed_description = entity_result['detailedDescription']
 
                entity_desc[entity] = process_desc(
                    detailed_description['articleBody']
                )
                
                break
            except Exception as e:
                print(
                    'EXCEPTION:',str(e)
                )
                pass     
    return entity_desc

def process_categorization(ts, bl, n_grams):
    ts_ents = recurring_bca(ts, bl)
    ents = [x[0].split() for x in ts_ents]
    indices = [x[2] for x in ts_ents]
    grams_dict = {}
    for ent in ents:
        key = ' '.join(ent)
        grams_dict[key] = {}
        ent_gram = []
        for idx in range(1, n_grams+1): 
            curr_gram = ngrams(ent, idx)
            curr_gram = [' '.join(gram) for gram in curr_gram]
            ent_gram += curr_gram
        grams_dict[key]['ngrams']  = ent_gram
        grams_dict[key]['id'] = indices 
    return  grams_dict

def build_categorization_features(corpuses): 
    features = np.array([corpuses[corpus].build_features() for corpus in corpuses])
    y = [feature[0] for feature in features]
    x = [feature[1] for feature in features]
    return np.concatenate(y), np.concatenate(x)

###########################################################################

    
################################################### Model Description
class SribuuCategoriser(sklearn.base.BaseEstimator):
    '''
    Class to wrap the final dictionary as an SKLearn object. Need not to create 'fit' method since it is not used
    '''
    def __init__(self,MODEL:dict):
        #Automatically instantiate the attributes
        self.model = MODEL
        self.requested_categories = self.model['cat_id']
        self.api_key = 'AIzaSyCRPIEk2JVHQBQBmD8q3nemjykmoLzqR5E'
        
    def grab_desc(self,ents, num_search = 2, TYPE = None):
        '''
            Function to request description from KG, clean the data 
        '''
        print('Requesting KG for ents:', ents)
        if not isinstance(ents,list):
            raise TypeError("Entities has to be a list, %s is found instead"%(type(ents)))
        return get_desc(
            request_kg(
                ents, num_search, self.api_key, types = TYPE
            )
        )
    
    def predict(self, input_data, threshold=0.75):
        '''
        Function to predict input_data
        params:
            input_data, JSON (str), input_data which will be deserialised. If after deserialisation, the type is a dictionary then
            we are building the model (training phase), if the data type is a list then the model has been deployed and is being 
            called by the BE team. If the model is being used by the BE team, then StringMatcher algo will be called first to
            separate uncategorised dict and categorised dict
            
            threshold, float, threshold above which MTM has to be ran
        '''
        #Placeholder
        testing = None
        building = None
        
        if isinstance(input_data, pd.DataFrame):
            '''
            We are testing the model
            '''
            testing = True
            entities = input_data.ents.to_list()
            ground_truth = input_data.cat.to_list()
            
            input_data = {}
            for i in range(len(entities)):
                input_data[i] = {}
                input_data[i]["ents"] = entities[i]
                input_data[i]["gt"] = int(ground_truth[i])
                
        #Deserialised the input_data using JSON
        if testing == None:
            try:
                input_data = json.loads(input_data)
            except:
                raise TypeError(
                    'input_data has to be string (JSON). Found %s instead'%(type(input_data))
                )
        
        #Check whether the data type is a list or dict. If list then it is not building phase, if dict then it is a building phase
        if isinstance(input_data,list):
            building = False
        elif isinstance(input_data,dict):
            building = True
        else:
            raise TypeError(
                'input_data has to be either a dictionary or list. Found %s instead'%(type(input_data))
            )
        
        #Real deployment, transaction notes is the data here s.t. StringMatcher has to be ran
        if building == False:
            sm = Preprocess(input_data)
            sm.transform()
            
            #Run the string matching algo
            cat_dict, uncat_dict = sm.run()
            X = uncat_dict
            print(
                "uncat dict:\n", X
            )
            
        #Building phase   
        else:
            X = input_data
        
        try:
            isinstance(X,dict)
        except:
            raise TypeError(
                'X should be a dictionary, found %s instead'%(type(X))
            )
        
        #List to get contain the prediciton and transaction id
        transaction_id = []
        y_hat = []
        y_ground_truth = []
        
        #Loop over the dictionary X items
        for key, ents in X.items():
            #Append the transaction id
            transaction_id.append(
                str(key)
            )
            
            #Testing the model
            if testing == True:
                tmp = X[key]
                ents = [tmp["ents"]]
                gt = tmp["gt"]
                
                #append ground truth
                y_ground_truth.append(gt)
                
            if not isinstance(ents,list):
                ents = [ents]
                
            print('entity for KG search: ',ents)
            
            #Grab KG sescription for each entity in ents
            KG_dict = self.grab_desc(
                ents = ents, 
                num_search=1, 
                TYPE="Thing"
            )
            
            #Build corpus list -- dtype np.array from list of string
            corpus_list = np.array(
                [KG_dict[key] for key in KG_dict]
            )
            
            
            #For each description run thru the OTM SVCs            
            model_id = []; proba = []
            
            #OTM evaluation - Loop corpus_list over all OTM SVCs
            for cat in self.requested_categories:  
                #Append model id
                model_id.append(int(cat))      
                
                #Call the scaler
                tfidf_scaler = self.model['tf_%s'%(cat)]
                
                #Call the OTM SVC
                model = self.model['otm_%s'%(cat)]
                
                print(
                    "model classes: ", model.classes_
                )
                
                #Loop the available KG_dict to the SVC OTM model
                proba_tmp = []
                for desc in corpus_list:
                    #Grab the X_test --> description
                    X_test = desc
                    
                    print(X_test, type(X_test), len(X_test))
                                                        
                    try:
                        #If X_test is not None
                        if not isinstance(X_test,list):
                            X_test = list(X_test)
                                    
                        #Vectorised the X
                        X_vectorised = tfidf_scaler.transform(
                            X_test
                        ).toarray()           
                
                        #Predict
                        probs = model.predict_proba(X_vectorised)
                        
                        #Assign proba
                        val = probs[0][1]
                
                        assert(
                            isinstance(val,float)
                        )
                
                        proba_tmp.append(val)
                    
                    except Exception as e:
                        print(str(e))
                        proba_tmp.append(0.0)
                
                #Append the maximum value of proba_tmp to proba
                try:
                    proba.append(
                        max(proba_tmp)
                    )
                except Exception as e:
                    print(str(e))
                    proba.append(
                        0.0
                    )
                            
            df_res = pd.DataFrame(
                zip(model_id, proba),columns=['model_id','probs']
            )
            
            print(
                'df_res:\n', df_res
            )
            
            #Grab the prediction of final category
            
            #if not OTM SVC can categorise the entity then
            if df_res[df_res.probs>=threshold].shape[0] < 1:
                #Our model can't really predict
                final_cat = 9
                        
            #Only 1 SVC OTM predicts X_vectorised belongs in its cat
            elif df_res[df_res.probs>=threshold].shape[0] == 1:
                final_cat = df_res.sort_values(by='probs',ascending=False)['model_id'].iloc[0]
                
                #Make sure final_cat is integer
                try:
                    final_cat = int(final_cat)
                except Exception as e:
                    raise TypeError(
                        str(e),"\nCan't convert final_cat to integer"
                    )
            
            #There are several SVCs that predict X_vectorised belong in their groups with high probability
            elif df_res[df_res.probs>=threshold].shape[0] > 1:
                #Do MTM prediction
                model = self.model['mtm']
                
                tfidf_scaler = self.model['tf_mtm']
                
                cat_pred = []
                proba_pred = []
                
                #For each desc in corpus list - do MTM prediction
                for desc in corpus_list:
                    X_test = desc  
                
                    if not isinstance(X_test, list):
                        X_test = list(X_test)

                    X_vectorised = tfidf_scaler.transform(X_test).toarray()

                    #Predict - the result of MTM prediction is a series of probabilities s.t. 
                    #we have to know which position is for which class
                    probs = model.predict_proba(X_vectorised)[0]

                    #Get classes
                    classes = model.classes_

                    #Grab the category that has max probs
                    max_index = np.where(
                        probs == np.amax(probs)
                    )

                    mtm_cat = classes[max_index][0]
                    
                    if not isinstance(mtm_cat,int):
                        mtm_cat = int(mtm_cat)
                    
                    #Append to list
                    cat_pred.append(mtm_cat)
                    proba_pred.append(
                        max(probs)
                    )
                
                #Grab the max index
                max_index = proba_pred.index(
                    max(proba_pred)
                )
                
                final_cat = cat_pred[max_index]
                
                #Make sure final_cat is integer
                try:
                    final_cat = int(final_cat)
                except Exception as e:
                    raise TypeError(
                        str(e),"\nCan't convert final_cat to integer"
                    )
                    
            y_hat.append(final_cat)
        
        if testing == True:
            return (y_hat, y_ground_truth)
        else:
            if building == True:
                return (y_hat, transaction_id)
            elif building == False:
                return (y_hat, transaction_id, cat_dict, uncat_dict)