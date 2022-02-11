'''
This script contains Data class that encapsulates data cleaning and pre-processing before being analysed
'''
#/usr/local/bin/env python3
import datetime
import pandas as pd
import numpy as np
import calendar

import logging
logger = logging.getLogger()
logger.setLevel(logging.DEBUG)

class Data(object):
    '''
    Class to hold the data. 
    @param:
        ts, type: list, transaction data in form of list of tuples.
        bc, type: list, categories data in form of list of tuples
    '''
    def __init__(self, ts:list, bc:list):
        #Initialisation of the data
        self.ts = ts
        self.bc = bc

        #Check the data type
        try:
            assert(isinstance(self.ts, list) == True)
        except Exception as e:
            logger.error(e)
            raise TypeError("ts variable's type has to be list. Current ts type is %s"%(type(ts)))

        try:
            assert(isinstance(self.bc, list) == True)
        except Exception as e:
            logger.error(e)
            raise TypeError("bc variable's type has to be list. Current bc type is %s"%(type(bc)))

    def get_categories(self):
        '''
        Extract categories ID and name for income, outcome and all categories. 
        Return budget_categories and categories_name for income, spending and all.
        '''
        #Turn bc list into a dataframe
        self.df_bc = pd.DataFrame(self.bc)

        #All available categories
        self.cats = ["all","i","o"]
        
        #Temporary
        tmp_id = []; tmp_name = []

        for cat in self.cats:
            if cat != 'all':
                tmp = self.df_bc[
                    self.df_bc[3]==cat
                ]
            else:
                tmp = self.df_bc

            #Appending budget categories id and budget categories name to tmps
            tmp_id.append(
                list(tmp[0])
            )

            tmp_name.append(
                list(tmp[1])
            )

        #Assertion
        try:
            assert(len(tmp_id) ==  3)
            assert(len(tmp_name) == 3)
        except Exception as e:
            logger.error(e)
            raise ValueError(
                "Length should be == 3, your tmp_id and tmp_name length are %s and %s respectively"%(len(tmp_id), len(tmp_name))
            )

        #Cast the values
        self.budget_categories, self.categories_name = tmp_id[0], tmp_name[0]
        self.budget_categories_in, self.categories_name_in = tmp_id[1], tmp_name[1]
        self.budget_categories_out, self.categories_name_out = tmp_id[2], tmp_name[2]

        del tmp_name
        
    def process_ts(self):
        '''
        Processing and cleaning the transaction data ts. Logic:
            1. Convert ts from list of tuple to dataframe df_ts
            2. Convert unix timestep to datetime object
            3. Expand the budget id columnwise
            4. Return a dataframe of df_ts 
        '''
        #Dataframe column names
        ts_columns = [
            "id",
            "user_id",
            "budget_category_id",
            "value",
            "time",
            "notes",
            "type",
            "tags",
        ]

        #Take only the first eight columns
        self.df_ts = pd.DataFrame(self.ts).iloc[:,0:8]

        #Rename the columns
        self.df_ts.columns = ts_columns

        #Set the index of df_ts to transaction id named 'id'
        self.df_ts.set_index("id", inplace=True)

        #Convert unix time object to datetime object
        #FIXME still causes problems from the BE for 'transactions' table
        try: 
            self.df_ts["time"] = pd.to_datetime(
                self.df_ts.loc[:, "time"], unit="s"
            )
        except: 
            self.df_ts["time"] = pd.to_datetime(
                self.df_ts.loc[:, "time"].astype(int), unit="s"
            )
        
        self.df_ts_before_transformation = self.df_ts.copy()

        #Expand the budget categories columnwise
        #Take the df where budget category is not NaN
        tmp_df = self.df_ts[
            ~self.df_ts['budget_category_id'].isna()
        ]

        try:
            #There's a chance where the budget category is NaN for all transaction rows i.e. importing saving data
            assert(
                len(tmp_df) > 0
            )

            #Group by budget_category_id for each transaction day and sum the transacation value. df is transformed to expand column wise
            self.df_ts  = tmp_df.groupby(
                    ['budget_category_id',pd.Grouper(freq='D',key='time')]
                )['value'].sum().unstack(fill_value=0
            ).T

            #Sort df by time
            self.df_ts.sort_values(
                'time',inplace=True
            )

            #Reindex df
            idx = pd.date_range(
                self.df_ts.index[0], 
                self.df_ts.index[-1]
            )

            self.df_ts = self.df_ts.reindex(
                idx, fill_value=0
            )

            del tmp_df
        except Exception as e:
            #df_ts -1 when tmp_df has zero length
            self.df_ts = -1
            

if __name__ == '__main__':
    import import_db
    tables = import_db.get_tables(["transactions_staging","budget_categories"])
    ts , bc = tables["transactions_staging"], tables["budget_categories"]
    data = Data(ts,bc)
    data.get_categories()
    data.process_ts()
