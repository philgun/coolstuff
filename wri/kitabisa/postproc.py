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
base2 = 23040000
base3 = 48040000

for i in range(len(df)):
    #Define the limit
    limit0 = base0 + math.floor(sumsum/base3) * base3
    limit1 = base1 + math.floor(sumsum/base3) * base3
    limit2 = base2 + math.floor(sumsum/base3) * base3
    limit3 = base3 + math.floor(sumsum/base3) * base3
    
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
            nextmilestone = base2 + math.floor(sumsum/base3) * base3
        elif nextmilestone == limit2:
            nextmilestone = base3 + math.floor(sumsum/base3) * base3
        elif nextmilestone == limit3:
            nextmilestone = base1 + math.floor(sumsum/base3) * base3
        
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

#Fill up the partner column
for i in range(len(df)):
    sumsum = df['DonationCleanCumulative'].iat[i]

    #Define the limit
    limit0 = base0 + math.floor(sumsum/base3) * base3
    limit1 = base1 + math.floor(sumsum/base3) * base3
    limit2 = base2 + math.floor(sumsum/base3) * base3
    limit3 = base3 + math.floor(sumsum/base3) * base3

    if sumsum>=limit0 and sumsum<=limit1:
        partner.append('CE')
    elif sumsum>limit1 and sumsum<=limit2:
        partner.append('FKL')
    elif sumsum>limit2 and sumsum<=limit3:
        partner.append('MA')

df['Partner'] = partner

#For the treeeeeeee!
base1	=	0
base2	=	5000000
base3	=	5992200
base4	=	6984400
base5	=	7976600
base6	=	8968800
base7	=	9961000
base8	=	10953200
base9	=	11945400
base10	=	12937600
base11	=	13929800
base12	=	14922000
base13	=	15914200
base14	=	16635800
base15	=	17357400
base16	=	18079000
base17	=	18800600
base18	=	19522200
base19	=	20243800
base20	=	20965400
base21	=	21687000
base22	=	22363500
base23	=	23040000
base24	=	33040000
base25	=	43040000
base26	=	45540000
base27	=	48040000

#Dictionary for price per tree
price_per_tree = {"Mangrove":10000,
"Petai (Parkia speciose)":45100,
"Durian (Durio zibethinus)":45100,
"Jengkol (Archidendron pauciflorum)":45100,
"Duku (Lansium domesticum)":45100,
"Langsat (Lansium domesticum)":45100,
"Manggis (Garcinia mangostana)":45100,
"Nangka (Artocarpus heterophyllus)":45100,
"Cempedak (Artocarpus integer)":45100,
"Asam Gelugus (Garcinia atroviridis)":45100,
"Matoa (Pometia pinnata)":45100,
"Arean (Arenga pinnata)":45100,
"Bayur (Pterospermum javanicum)":45100,
"Merbo (Intsia sp)":45100,
"Meranti (Shorea sp)":45100,
"Keruing (Dipterocarpus sp)":45100,
"Cengal (Neobalanocarpus heimii)":45100,
"Gaharu (Aquilaria malaccensis)":45100,
"Terambesi (Samanea saman)":45100,
"Tualang (Koompassia excelsa)":45100,
"Damar (Agathis dammara)":45100,
"Bambu-bambuan (Famili : Paochea)":45100,
"Surian":50000,
"Kulit Manis":50000,
"Cengkeh":50000,
"Kemiri":50000}

tree = []
ownership = []

for i in range(len(df)):
    sumsum = df.DonationCleanCumulative.iat[i]
    donclean = df.DonationClean.iat[i]

    #Limit for each tree
    limit1	=	base1	+	math.floor(sumsum/base27) * base27
    limit2	=	base2	+	math.floor(sumsum/base27) * base27
    limit3	=	base3	+	math.floor(sumsum/base27) * base27
    limit4	=	base4	+	math.floor(sumsum/base27) * base27
    limit5	=	base5	+	math.floor(sumsum/base27) * base27
    limit6	=	base6	+	math.floor(sumsum/base27) * base27
    limit7	=	base7	+	math.floor(sumsum/base27) * base27
    limit8	=	base8	+	math.floor(sumsum/base27) * base27
    limit9	=	base9	+	math.floor(sumsum/base27) * base27
    limit10	=	base10	+	math.floor(sumsum/base27) * base27
    limit11	=	base11	+	math.floor(sumsum/base27) * base27
    limit12	=	base12	+	math.floor(sumsum/base27) * base27
    limit13	=	base13	+	math.floor(sumsum/base27) * base27
    limit14	=	base14	+	math.floor(sumsum/base27) * base27
    limit15	=	base15	+	math.floor(sumsum/base27) * base27
    limit16	=	base16	+	math.floor(sumsum/base27) * base27
    limit17	=	base17	+	math.floor(sumsum/base27) * base27
    limit18	=	base18	+	math.floor(sumsum/base27) * base27
    limit19	=	base19	+	math.floor(sumsum/base27) * base27
    limit20	=	base20	+	math.floor(sumsum/base27) * base27
    limit21	=	base21	+	math.floor(sumsum/base27) * base27
    limit22	=	base22	+	math.floor(sumsum/base27) * base27
    limit23	=	base23	+	math.floor(sumsum/base27) * base27
    limit24	=	base24	+	math.floor(sumsum/base27) * base27
    limit25	=	base25	+	math.floor(sumsum/base27) * base27
    limit26	=	base26	+	math.floor(sumsum/base27) * base27
    limit27	=	base27	+	math.floor(sumsum/base27) * base27
    
    #Which tree?
    if	sumsum	>=	limit1	and 	sumsum	<=	limit2:
        tree.append('Mangrove')
    elif	sumsum	>	limit2	and 	sumsum	<=	limit3:
        tree.append("Petai (Parkia speciose)")
    elif	sumsum	>	limit3	and 	sumsum	<=	limit4:
        tree.append("Durian (Durio zibethinus)")
    elif	sumsum	>	limit4	and 	sumsum	<=	limit5:
        tree.append("Jengkol (Archidendron pauciflorum)")
    elif	sumsum	>	limit5	and 	sumsum	<=	limit6:
        tree.append("Duku (Lansium domesticum)")
    elif	sumsum	>	limit6	and 	sumsum	<=	limit7:
        tree.append("Langsat (Lansium domesticum)")
    elif	sumsum	>	limit7	and 	sumsum	<=	limit8:
        tree.append("Manggis (Garcinia mangostana)")
    elif	sumsum	>	limit8	and 	sumsum	<=	limit9:
        tree.append("Nangka (Artocarpus heterophyllus)")
    elif	sumsum	>	limit9	and 	sumsum	<=	limit10:
        tree.append("Cempedak (Artocarpus integer)")
    elif	sumsum	>	limit10	and 	sumsum	<=	limit11:
        tree.append("Asam Gelugus (Garcinia atroviridis)")
    elif	sumsum	>	limit11	and 	sumsum	<=	limit12:
        tree.append("Matoa (Pometia pinnata)")
    elif	sumsum	>	limit12	and 	sumsum	<=	limit13:
        tree.append("Arean (Arenga pinnata)")
    elif	sumsum	>	limit13	and 	sumsum	<=	limit14:
        tree.append("Bayur (Pterospermum javanicum)")
    elif	sumsum	>	limit14	and 	sumsum	<=	limit15:
        tree.append("Merbo (Intsia sp)")
    elif	sumsum	>	limit15	and 	sumsum	<=	limit16:
        tree.append("Meranti (Shorea sp)")
    elif	sumsum	>	limit16	and 	sumsum	<=	limit17:
        tree.append("Keruing (Dipterocarpus sp)")
    elif	sumsum	>	limit17	and 	sumsum	<=	limit18:
        tree.append("Cengal (Neobalanocarpus heimii)")
    elif	sumsum	>	limit18	and 	sumsum	<=	limit19:
        tree.append("Gaharu (Aquilaria malaccensis)")
    elif	sumsum	>	limit19	and 	sumsum	<=	limit20:
        tree.append("Terambesi (Samanea saman)")
    elif	sumsum	>	limit20	and 	sumsum	<=	limit21:
        tree.append("Tualang (Koompassia excelsa)")
    elif	sumsum	>	limit21	and 	sumsum	<=	limit22:
        tree.append("Damar (Agathis dammara)")
    elif	sumsum	>	limit22	and 	sumsum	<=	limit23:
        tree.append("Bambu-bambuan (Famili : Paochea)")
    elif	sumsum	>	limit23	and 	sumsum	<=	limit24:
        tree.append("Surian")
    elif	sumsum	>	limit24	and 	sumsum	<=	limit25:
        tree.append("Kulit Manis")
    elif	sumsum	>	limit25	and 	sumsum	<=	limit26:
        tree.append("Cengkeh")
    elif	sumsum	>	limit26	and 	sumsum	<=	limit27:
        tree.append("Kemiri")
    
    #Ownership
    per_tree = price_per_tree[tree[-1]]
    ownership.append(round(donclean/per_tree,1))

df['Tree'] = tree
df['Ownership'] = ownership





#Save the file to CSV and excel
df.to_csv("Processed.csv",index=False)
df.to_excel("output.xlsx",index=False)

