'''
This script contains training job for the model and invocations for the inference after the deployment
'''

def install(package):
    subprocess.check_call([sys.executable, "-m", "pip", "install", package])
    
import argparse
import subprocess
import sys

def install(package):
    subprocess.check_call([sys.executable, "-m", "pip", "install", package])
install('scikit-learn')

try:
    import pickle
except ImportError:
    install('pickle')
    import pickle

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
from sklearn.feature_extraction.text import TfidfVectorizer
from sklearn.svm import LinearSVC
from sklearn.svm import SVC
from nltk import ngrams
from nltk.corpus import stopwords
from nltk.util import everygrams
from collections import Counter

import json
import traceback
import warnings
import logging
from os.path import join
warnings.filterwarnings('ignore')

import boto3
import shutil
import os

try:
    import nltk
    nltk.download('stopwords')
except:
    install('nltk')
    import nltk
    nltk.download('stopwords')

from utils import * 

def recall(y_hat, y_ground_truth):
    TP = 0; TN = 0

#     assert(y_hat.shape[0] == y_ground_truth.shape[0])
    assert(len(y_hat) == len(y_ground_truth))

    for i in range(len(y_hat)):
        ground_truth = y_ground_truth[i]
        prediction = y_hat[i]

        if ground_truth == prediction:
            TP += 1
        elif ground_truth != prediction:
            TN += 1

    recall_val = TP/(TP+TN)
    return recall_val  

logger = logging.getLogger(__name__)
logger.setLevel(logging.DEBUG)
logger.addHandler(logging.StreamHandler(sys.stdout))

if "SAGEMAKER_METRICS_DIRECTORY" in os.environ:
    log_file_handler = logging.FileHandler(
        join(os.environ["SAGEMAKER_METRICS_DIRECTORY"], "metrics.json")
    )
    formatter = logging.Formatter(
        "{'time':'%(asctime)s', 'name': '%(name)s', \
    'level': '%(levelname)s', 'message': '%(message)s'}",
        style="%",
    )
    log_file_handler.setFormatter(formatter)
    logger.addHandler(log_file_handler)

#Ferdi's part
def test(y_hat,y_ground_truth):
    logger.info("Test Recall Value: {:.4f}".format(recall(y_hat,y_ground_truth)))
#End of Ferdi's part
    
def model_fn(model_dir):
    """
    Load the model for inference
    """
    with open('%s/model.pkl'%(model_dir),'rb') as f:
        model = pickle.load(f)
    
    return model


def input_fn(request_body, request_content_type):
    """
    Deserialise and prepare the prediction input
    """
    
    print("RB: ",request_body,"\nType RB: %s"%(type(request_body)))

    if request_content_type == "application/json":
        request = json.loads(request_body)
        print(
            'Deserialised: ',request, "type request: ",type(request)
        )
        
    else:
        raise TypeError(
            'SribuuCategoriser can only receiver JSON input....\n'
        )
    return request


def predict_fn(input_data, model):
    """
    Apply model to the incoming request
    """
    y_hat = []
    
    print(
        'input_data: ',input_data, "type input_data: ", type(input_data)
    )
    
    try:
        isinstance(input_data,dict)
    except TypeError:
        raise TypeError(
            'input data type has to be a dict converted from JSON. Found %s instead'%(type(input_data))
        )
        
    '''
    Example input data, dict:
    {
        1:["Tokopedia,"Indonesia","Tokopedia Indonesia"],
        2:["Ayam","Goreng","Ayam Goreng"]
    }
    
    '''
    
    #predictions using the model
    RES = model.predict(
        input_data
    )
    
    if len(RES) > 2:
        '''
        Model is called by the BE team
        '''
        y_hat, trans_id, cat_dict, uncat_dict = RES
        
        try:
            assert(
                len(y_hat) == len(trans_id)
            )
        except AssertionError:
            raise AssertionError(
                'Length of prediction should be equal to length of transaction id. \
                Instead length of prediction is %s and length of trans id is %s'%(len(trans_id), len(y_hat))
            )
        
        #Append y_hat and transaction_id to cat_dict
        for i, idx in enumerate(trans_id):
            cat_dict[str(idx)] = str(y_hat[i])
        
        #Construct the final dictionary
        '''
        e.g.
        result = {
            'cat' : {1:9, 1203: 19, 120006 : 9,....},
            'uncat':{20000:['dr','geprek','bandung'], 222: ['tokenised','entities']}
        }
        '''
        result = {}
        result['cat'] = cat_dict
        result['uncat'] = uncat_dict
        
    elif len(RES) == 2:
        '''
        Model building process
        '''
        y_hat, trans_id = RES
    
    #Construct json
        try:
            assert(
                len(y_hat) == len(trans_id)
            )
        except AssertionError:
            raise AssertionError(
                'Length of prediction should be equal to length of transaction id.\
                Instead length of prediction is %s and length of trans id is %s'%(len(trans_id), len(y_hat))
            )
        
        result = {}

        for i, idx in enumerate(trans_id):
            result[str(idx)] = str(y_hat[i])
    
    #Convert result to JSON
    result_json = json.dumps(result) 
    
    return result_json

class Training(object):
    '''
    FIXME: Add testing section within 'fit' method
    '''
    def __init__(self, SVC_kernel, time_suffix):
        self.prefix_model = "/opt/ml/model"
        self.kernel = SVC_kernel
        self.time_suffix = time_suffix
        self.train_directory = '/opt/ml/input/data/train' 
        self.test_dicrectory = '/opt/ml/input/data/test'

    def fit(self, cat_id):
        MODEL = {}
        MODEL['cat_id'] = cat_id
        
        #FIXME: add section to download patterns.csv for Tony's string matcher. Assign to dictionary
        
        #Train OTM
        for ID in cat_id:
            model_name = 'otm_%s'%(ID)
            data_x = '%s/X_train_%s_%s.csv'%(self.train_directory, ID, self.time_suffix)
            data_y = '%s/y_train_%s_%s.csv'%(self.train_directory, ID, self.time_suffix)
            
            print('Reading input data.........')
            #read the csv using numpy
            try:
                X = np.genfromtxt(data_x)
                y = np.genfromtxt(data_y)
            except Exception as e:
                raise IOError(str(e))

            svc = SVC(probability=True, kernel=self.kernel)

            svc.fit(X, y)
            print('Training SVC Model.........')

            ##Load PTF using Pickle
            try:
                with open('%s/tf_%s_%s.pkl'%(self.train_directory, ID, self.time_suffix), 'rb') as f:
                    tfidf_scaler = pickle.load(f)
            except Exception as e:
                raise IOError(str(e))
            
            MODEL[model_name] = svc
            MODEL['tf_%s'%(ID)] = tfidf_scaler

        #Train MTM
        data_X_mtm = '%s/X_train_mtm_%s.csv'%(self.train_directory, self.time_suffix)
        data_y_mtm = '%s/y_train_mtm_%s.csv'%(self.train_directory, self.time_suffix)
        try:
            X_mtm = np.genfromtxt(data_X_mtm);y_mtm = np.genfromtxt(data_y_mtm)
        except Exception as e:
            raise IOError(str(e))

        svc_mtm = SVC(probability=True, kernel = self.kernel)
        svc_mtm.fit(X_mtm, y_mtm)
        
        try:
            with open('%s/tf_mtm_%s.pkl'%(self.train_directory, self.time_suffix), 'rb') as f:
                tfidf_scaler_mtm = pickle.load(f)
        except Exception as e:
            raise IOError(str(e))

        MODEL['mtm'] = svc_mtm
        MODEL['tf_mtm'] = tfidf_scaler_mtm       
        
        fname_model = '%s/model.pkl'%(self.prefix_model) #'%s/tf_%s_%s.pkl'%(self.prefix_train, cat_id, self.time_suffix)

        print(
            'Saving MODEL to pickle..............'
        )
        
        #Wrap the model
        M = SribuuCategoriser(MODEL)
        
        #Test the model : input HAS TO BE JSON
        test_data_X = '%s/X_test_%s.csv'%(self.test_dicrectory, self.time_suffix)
        test_data_y = '%s/y_test_%s.csv'%(self.test_dicrectory, self.time_suffix)
        
        X = pd.read_csv(test_data_X)
        y = pd.read_csv(test_data_y)
        
        input_data = pd.concat([X,y], axis=1)
        
        y_hat, y_ground_truth = M.predict(input_data)      
        
        print(
            'the ys:\n',
            y_hat,
            y_ground_truth
        )
        
        #FIXME: Ferdi incorporate testing metric here
        test(y_hat,y_ground_truth)
        
        with open(fname_model,'wb') as f:
            pickle.dump(M,f)

        print(
            'Successfully saved model!'
        )        
               
            
        #Ferdi's part
  
        #logger.info("Test Recall: %s"%(recall(y_hat,y_ground_truth)))

        #End of Ferdi's part
        
        #Copying files to ./code which later will be zipped together with model.pkl to become model.tar.gz
        inference_code_path = self.prefix_model + "/code"
        
        if not os.path.exists(inference_code_path):
            os.makedirs(inference_code_path)
            print(
                'Make directory %s'%(inference_code_path)
            )
        
        fnames = os.listdir('.')
        
        print(
            'fnames: ', fnames
        )
        
        for fn in fnames:
            try:
                shutil.copy(fn,inference_code_path)
            except IsADirectoryError:
                pass

#----------------------------------------------------------------

if __name__ == "__main__":
    print(
        "Start training the data....."
    )
    parser = argparse.ArgumentParser()

    parser.add_argument(
        '--time_suffix', 
        type=str,
        help= "string that indicates the time a data is generated"
    )

    parser.add_argument(
        '--cat_ids', 
        type=str,
        help="category id '2,3,4'"
    )

    parser.add_argument(
        '--SVC_kernel', 
        type=str,
        help= "string that indicates the kernel used by SVC e.g. 'linear', 'RBF' "
    )

    args = parser.parse_args()

    print(
        "Argument read....."
    )

    train = Training(args.SVC_kernel, args.time_suffix)
    
    train.fit(
        args.cat_ids.split(',')
    )
