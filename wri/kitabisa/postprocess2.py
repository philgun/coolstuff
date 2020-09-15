import numpy as np 
import pandas as pd 
import math
import random

#Read data and reverse
df = pd.read_csv('test.csv')

#Check time stamp
ts = df['TimeStamp'].iat[-1]
ts = ts.split(' ')

if len(ts) == 3:
    df = df[0:len(df)-1]
elif len(ts) == 4:
    print(ts[1])
    if ts[1] == 'bulan':
        df = df[0:len(df)]
print(len(df))
df = df.iloc[::-1]
print(len(df))
#Sort from the latest to oldest

lenID = len(df)

#Generate New DataFrame 
Name =[]
DonationRaw =[]
DonationClean = []
ID_transaction = []
TimeStamp=[]
Tree = []

partner = []
IDbank = []
sumsum = 0

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

print("Break the donation")
for i in range(len(df)):
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
        nextmilestone = limit2
    elif	sumsum	>	limit2	and 	sumsum	<=	limit3:
        nextmilestone = limit3
    elif	sumsum	>	limit3	and 	sumsum	<=	limit4:
        nextmilestone = limit4
    elif	sumsum	>	limit4	and 	sumsum	<=	limit5:
        nextmilestone = limit5
    elif	sumsum	>	limit5	and 	sumsum	<=	limit6:
        nextmilestone = limit6
    elif	sumsum	>	limit6	and 	sumsum	<=	limit7:
        nextmilestone = limit7
    elif	sumsum	>	limit7	and 	sumsum	<=	limit8:
        nextmilestone = limit8
    elif	sumsum	>	limit8	and 	sumsum	<=	limit9:
        nextmilestone = limit9
    elif	sumsum	>	limit9	and 	sumsum	<=	limit10:
        nextmilestone = limit10
    elif	sumsum	>	limit10	and 	sumsum	<=	limit11:
        nextmilestone = limit11
    elif	sumsum	>	limit11	and 	sumsum	<=	limit12:
        nextmilestone = limit12
    elif	sumsum	>	limit12	and 	sumsum	<=	limit13:
        nextmilestone = limit13
    elif	sumsum	>	limit13	and 	sumsum	<=	limit14:
        nextmilestone = limit14
    elif	sumsum	>	limit14	and 	sumsum	<=	limit15:
        nextmilestone = limit15
    elif	sumsum	>	limit15	and 	sumsum	<=	limit16:
        nextmilestone = limit16
    elif	sumsum	>	limit16	and 	sumsum	<=	limit17:
        nextmilestone = limit17
    elif	sumsum	>	limit17	and 	sumsum	<=	limit18:
        nextmilestone = limit18
    elif	sumsum	>	limit18	and 	sumsum	<=	limit19:
        nextmilestone = limit19
    elif	sumsum	>	limit19	and 	sumsum	<=	limit20:
        nextmilestone = limit20
    elif	sumsum	>	limit20	and 	sumsum	<=	limit21:
        nextmilestone = limit21
    elif	sumsum	>	limit21	and 	sumsum	<=	limit22:
        nextmilestone = limit22
    elif	sumsum	>	limit22	and 	sumsum	<=	limit23:
        nextmilestone = limit23
    elif	sumsum	>	limit23	and 	sumsum	<=	limit24:
        nextmilestone = limit24
    elif	sumsum	>	limit24	and 	sumsum	<=	limit25:
        nextmilestone = limit25
    elif	sumsum	>	limit25	and 	sumsum	<=	limit26:
        nextmilestone = limit26
    elif	sumsum	>	limit26	and 	sumsum	<=	limit27:
        nextmilestone = limit27
    
    #Calculate initial delta with initial nextmilestone
    delta = nextmilestone - sumsum
    donclean = df.DonationRaw.iat[i]
    
    #If ID is already taken by other donator
    ID = random.randint(1,lenID)
    while ID in IDbank: #generate new ID
        ID = random.randint(1,lenID)

    #Append ID
    IDbank.append(ID)

    a=0

    while delta < donclean: #When the donation clean is greater than delta, break donation clean into several pieces
        #Append delta and donation raw
        #DonationClean.append(delta)
        #DonationRaw.append(delta/0.95)
        DonationRaw.append(delta)
        DonationClean.append(delta*0.95)

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

        #Update sumsum
        sumsum += delta

        #Update next milestone
        if nextmilestone == limit1:
            nextmilestone = base2 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit2:
            nextmilestone = base3 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit3:
            nextmilestone = base4 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit4:
            nextmilestone = base5 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit5:
            nextmilestone = base6 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit6:
            nextmilestone = base7 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit7:
            nextmilestone = base8 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit8:
            nextmilestone = base9 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit9:
            nextmilestone = base10 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit10:
            nextmilestone = base11 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit11:
            nextmilestone = base12 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit12:
            nextmilestone = base13 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit13:
            nextmilestone = base14 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit14:
            nextmilestone = base15 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit15:
            nextmilestone = base16 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit16:
            nextmilestone = base17 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit17:
            nextmilestone = base18 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit18:
            nextmilestone = base19 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit19:
            nextmilestone = base20 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit20:
            nextmilestone = base21 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit21:
            nextmilestone = base22 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit22:
            nextmilestone = base23 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit23:
            nextmilestone = base24 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit24:
            nextmilestone = base25 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit25:
            nextmilestone = base26 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit26:
            nextmilestone = base27 + math.floor(sumsum/base27) * base27
        elif nextmilestone == limit27:
            nextmilestone = base2 + math.floor(sumsum/base27) * base27
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
        
        #Update delta
        delta = nextmilestone - sumsum

    #When the donation clean is smaller than sumsum no need to break donation
    #Append name
    if df.Name.iat[i] == ".":
        Name.append("Anonim")
    else:
        Name.append(df.Name.iat[i])

    #Append donclean, donraw and sumsum
    #DonationClean.append(donclean)
    #DonationRaw.append(donclean/0.95)
    DonationClean.append(donclean*0.95)
    DonationRaw.append(donclean)
    sumsum += donclean

    #Append time
    TimeStamp.append(df['TimeStamp'].iat[i])

    #Append ID
    ID_transaction.append(ID)
    
df = pd.DataFrame(zip(Name,DonationRaw,DonationClean,ID_transaction,TimeStamp),
columns=['Name','DonationRaw','DonationClean','IDTransaction','TimeStamp'])
df['DonationRawCumulative'] = df['DonationRaw'].cumsum(skipna=True)

tree = []
ownership = []

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

for i in range(len(df)):
    #sumsum = df.DonationCleanCumulative.iat[i]
    #donclean = df.DonationClean.iat[i]
    sumsum = df.DonationRawCumulative.iat[i]
    donclean = df.DonationRaw.iat[i]

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
    ownership.append(donclean/per_tree)

df['Tree'] = tree
df['Ownership'] = ownership

#Dictionary partner
dictpartner = {"Mangrove":"CE",
"Petai (Parkia speciose)":"FKL",
"Durian (Durio zibethinus)":"FKL",
"Jengkol (Archidendron pauciflorum)":"FKL",
"Duku (Lansium domesticum)":"FKL",
"Langsat (Lansium domesticum)":"FKL",
"Manggis (Garcinia mangostana)":"FKL",
"Nangka (Artocarpus heterophyllus)":"FKL",
"Cempedak (Artocarpus integer)":"FKL",
"Asam Gelugus (Garcinia atroviridis)":"FKL",
"Matoa (Pometia pinnata)":"FKL",
"Arean (Arenga pinnata)":"FKL",
"Bayur (Pterospermum javanicum)":"FKL",
"Merbo (Intsia sp)":"FKL",
"Meranti (Shorea sp)":"FKL",
"Keruing (Dipterocarpus sp)":"FKL",
"Cengal (Neobalanocarpus heimii)":"FKL",
"Gaharu (Aquilaria malaccensis)":"FKL",
"Terambesi (Samanea saman)":"FKL",
"Tualang (Koompassia excelsa)":"FKL",
"Damar (Agathis dammara)":"FKL",
"Bambu-bambuan (Famili : Paochea)":"FKL",
"Surian":"MA",
"Kulit Manis":"MA",
"Cengkeh":"MA",
"Kemiri":"MA"}

#Fill up the partner column
for i in range(len(df)):
    treename = df['Tree'].iat[i]
    p = dictpartner[treename]
    partner.append(p)

df['Partner'] = partner

#Dictionary for sequestration
sequestration = {"Mangrove":56,
"Petai (Parkia speciose)":74.95,
"Durian (Durio zibethinus)":87.16,
"Jengkol (Archidendron pauciflorum)":83.29,
"Duku (Lansium domesticum)":90.2,
"Langsat (Lansium domesticum)":90.2,
"Manggis (Garcinia mangostana)":152.85,
"Nangka (Artocarpus heterophyllus)":83.32,
"Cempedak (Artocarpus integer)":100.14,
"Asam Gelugus (Garcinia atroviridis)":135.95,
"Matoa (Pometia pinnata)":109.26,
"Arean (Arenga pinnata)":144.45,
"Bayur (Pterospermum javanicum)":71.63,
"Merbo (Intsia sp)":132.2,
"Meranti (Shorea sp)":93.49,
"Keruing (Dipterocarpus sp)":111.07,
"Cengal (Neobalanocarpus heimii)":135.83,
"Gaharu (Aquilaria malaccensis)":52.43,
"Terambesi (Samanea saman)":81.49,
"Tualang (Koompassia excelsa)":152.85,
"Damar (Agathis dammara)":75.16,
"Bambu-bambuan (Famili : Paochea)":40.8,
"Surian":59.82,
"Kulit Manis":82.37,
"Cengkeh":108.14,
"Kemiri":58.52}

seques = []
for i in range(len(df)):
    ownership = df['Ownership'].iat[i]
    name = df['Tree'].iat[i]
    sq = sequestration[name] * ownership
    seques.append(sq)
df['sequestration'] = seques

#Save the file to CSV and excel
df.to_csv("Processed.csv",index=False)
df.to_excel("output.xlsx",index=False)

