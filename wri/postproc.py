import numpy as np 
import pandas as pd 
import math
import random

#Read data
df = pd.read_csv('test.csv')

#Sort from the latest to oldest
df = df.sort_values(by='TimeStamp',ascending=False)
df.reset_index(drop=True)

lenID = len(df)

#Create Cumulative Money
df['CumulativeDonationClean'] = df['DonationClean'].cumsum(skipna=True)

#Generate New DataFrame 
Name =[]
DonationRaw =[]
DonationClean = []
ID_transaction = []
TimeStamp=[]
Day=[]
Month=[]
Year=[]

partner = []
IDbank = []

sumsum = 0
base0 = 0
base1 = 5e6
base2 = 23e6
base3 = 48e6

for i in range(len(df)):
    #Define the limit
    limit0 = base0 + math.floor(sumsum/48e6) * 48e6
    limit1 = base1 + math.floor(sumsum/48e6) * 48e6
    limit2 = base2 + math.floor(sumsum/48e6) * 48e6
    limit3 = base3 + math.floor(sumsum/48e6) * 48e6
    
    #Define next milestone
    if sumsum >= limit0 and sumsum <= limit1:
        nextmilestone = limit1
    elif sumsum > limit1 and sumsum <= limit2:
        nextmilestone = limit2
    elif sumsum > limit2 and sumsum <= limit3:
        nextmilestone = limit3
    
    #Calculate initial delta with initial nextmilestone
    delta = nextmilestone - sumsum
    donclean = df.DonationClean.iat[i]
    
    #If ID is already taken by other donator
    ID = random.randint(1,lenID)
    while ID in IDbank: #generate new ID
        ID = random.randint(1,lenID)

    #Append ID
    IDbank.append(ID)

    a=0

    while delta < donclean: #When the donation clean is greater than delta, break donation clean into several pieces

        #Append delta and donation raw
        DonationClean.append(delta)
        DonationRaw.append(delta/0.95)

        #Append name
        if df.Name.iat[i] == ".":
            Name.append("Anonim")
        else:
            Name.append(df.Name.iat[i])

        #Update remaining donclean
        donclean = donclean - delta

        #Repeat append ID
        ID_transaction.append(ID)

        #Append time
        TimeStamp.append(df['TimeStamp'].iat[i])
        Day.append(df['Day'].iat[i])
        Month.append(df['Month'].iat[i])
        Year.append(df['Year'].iat[i])

        #Update sumsum
        sumsum += delta

        #Update next milestone
        if nextmilestone == limit1:
            nextmilestone = base2 + math.floor(sumsum/48e6) * 48e6
        elif nextmilestone == limit2:
            nextmilestone = base3 + math.floor(sumsum/48e6) * 48e6
        elif nextmilestone == limit3:
            nextmilestone = base1 + math.floor(sumsum/48e6) * 48e6
        
        #Update delta
        delta = nextmilestone - sumsum

    #When the donation clean is smaller than sumsum no need to break donation

    #Append name
    if df.Name.iat[i] == ".":
        Name.append("Anonim")
    else:
        Name.append(df.Name.iat[i])

    #Append donclean, donraw and sumsum
    DonationClean.append(donclean)
    DonationRaw.append(donclean/0.95)
    sumsum += donclean

    #Append time
    TimeStamp.append(df['TimeStamp'].iat[i])
    Day.append(df['Day'].iat[i])
    Month.append(df['Month'].iat[i])
    Year.append(df['Year'].iat[i])
        
    #Append ID
    ID_transaction.append(ID)
    
df = pd.DataFrame(zip(Name,DonationRaw,DonationClean,ID_transaction,TimeStamp,Day,Month,Year),
columns=['Name','DonationRaw','DonationClean','IDTransaction','TimeStamp','Day','Month','Year'])


df['DonationCleanCumulative'] = df['DonationClean'].cumsum(skipna=True)
df.to_csv("Processed.csv",index=False)
df.to_excel("output.xlsx",index=False)


# When 0 < cum < 5e6 ~> CE
# when 5e6< cum < 23e6 ~> FKL
# when 23e6 < cum < 48e6 ~> MA
# Cycle back to CE

# Milestones ~> whenever the next milestone is < than the next donation, break the don into 2 and fill up the bottle
# Transaction ID ~> if the donation is split, make sure the ID is the same

