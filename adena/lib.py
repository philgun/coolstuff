import pandas as pd 
import numpy as np
from datetime import datetime

def cleaningData(fn):
    #Import data
    df_raw = pd.read_csv(fn)

    # START PROCESSING AND CLEANING THE RAW DATA

    #Change date to date time objext
    for i in range(len(df_raw)):
        datetime_str = df_raw.at[i,'Date']
        datetime_str = datetime_str[0:10]
        datetime_object = datetime.strptime(datetime_str, '%d/%m/%Y')
        df_raw.at[i,'Date'] = datetime_object

    #Get today
    today = datetime.today()

    #Data cleaning
    name = []
    clientDuration = [] #how many day has been our clients
    total2019 = [] #sum order in M.IDR
    total2020 = [] #sum order in M.IDR
    totalTransaction = []
    X = [] #dimensionless variables
    freq2019=[]
    freq2020=[]
    freqTotal=[]
    lastOrderDate = []
    lagDays = []

    customerList =  df_raw.Customer.unique()
    for customer in customerList:
        #Get data for only 1 customer name
        df = df_raw[df_raw.Customer == customer]
        name.append(df['Customer'].iat[0])

        #Retrieve total sales order 2019 and 2020 per customer
        sum2019 = df[(df.Date >= datetime(2019,1,1)) & (df.Date < datetime(2020,1,1))].TotalTransaction.sum()/1e6
        sum2020 = df[(df.Date >= datetime(2020,1,1)) & (df.Date < datetime(2021,1,1))].TotalTransaction.sum()/1e6
        total2019.append(round(sum2019,2))
        total2020.append(round(sum2020,2))
        totalTransaction.append(sum2019+sum2020)

        #Retrieve client duration
        deltaTimeObject = today - df['Date'].iat[-1]
        clientDays = int(deltaTimeObject.total_seconds()/3600/24)
        clientDuration.append(clientDays)

        #Retrieve freq 2019 and 2020
        df2019 = df[(df['Date'] >= datetime(2019,1,1)) & (df['Date'] < datetime(2020,1,1))]
        unique2019 = df2019['Date'].unique()
        f2019 = len(unique2019)
        df2020 = df[(df['Date'] >= datetime(2020,1,1)) & (df['Date'] < datetime(2021,1,1))]
        unique2020 = df2020['Date'].unique()
        f2020 = len(unique2020)
        fTotal = f2019+f2020
        freq2019.append(f2019)
        freq2020.append(f2020)
        freqTotal.append(fTotal)

        #Retrieve last order day
        lastOrderDate.append(df['Date'].iat[0])

        #lag days
        delta = today - df['Date'].iat[0]
        days = int(delta.total_seconds()/3600/24)
        lagDays.append(days)

        #Retrieve the X ~ dimensionless number
        X.append(round(clientDays/30/fTotal,2))

    assert(len(total2020) == len(customerList))
    assert(len(total2019) == len(customerList))

    newdata = zip(name,total2019,total2020,totalTransaction,freq2019,freq2020,freqTotal,clientDuration,X,lastOrderDate,lagDays)
    newheader = ['Customer','Total2019_MIDR','Total2020_MIDR',
                'TotalTransaction_MIDR','Freq2019','Freq2020','FreqTotal','ClientDuration_days',
                'X','LastOrderDate','Lag_Days']

    # Save the df_summary without Tuku and Beragam
    df_summary = pd.DataFrame(newdata,columns=newheader)
    df_summary = df_summary[(df_summary['Customer'] != "Tuku") & (df_summary['Customer'] != 'Beragam Coffee Business Solution')]
    df_summary.to_csv("data-clean.csv",index=False)

    print(df_summary[df_summary['FreqTotal'] > 5].sort_values(by="X"))
