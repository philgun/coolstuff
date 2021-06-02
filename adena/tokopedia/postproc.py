import json
import glob
import pandas as pd
import numpy as np
import random
from datetime import datetime,timedelta
from matplotlib import pyplot as plt
import seaborn as sns
import pickle
import os
import time
import matplotlib as mpl

def print_stuff(df_kopsus,df_espresso,df_specialty_arabica,df_robusta,df_robusta_arabica_blend):
    df_kopsus_espresso = pd.concat(
            [df_kopsus,df_espresso],axis=0
    ).drop_duplicates().reset_index(drop=True)

    tonnage_kopsus_espresso = sum(df_kopsus_espresso["ProductTotalSold"] * df_kopsus_espresso["ProductWeight"]) #kg
    tonnage_arabica_specialty = sum(df_specialty_arabica["ProductTotalSold"] * df_specialty_arabica["ProductWeight"]) #kg
    tonnage_robusta = sum(df_robusta["ProductTotalSold"] * df_robusta["ProductWeight"]) #kg
    tonnage_robusta_arabica_blend = sum(df_robusta_arabica_blend["ProductTotalSold"] * df_robusta_arabica_blend["ProductWeight"]) #kg

    valuation_kopsus_espresso = sum(df_kopsus_espresso["ProductTotalSold"] * df_kopsus_espresso["ProductPrice"]/1e9) #kg
    valuation_arabica_specialty = sum(df_specialty_arabica["ProductTotalSold"] * df_specialty_arabica["ProductPrice"]/1e9) #kg
    valuation_robusta = sum(df_robusta["ProductTotalSold"] * df_robusta["ProductPrice"]/1e9) #kg
    valuation_robusta_arabica_blend = sum(df_robusta_arabica_blend["ProductTotalSold"] * df_robusta_arabica_blend["ProductPrice"]/1e9) #kg

    print(
        "total tonnage coffee market: %s ton, tonnage kopsus espresso %s ton, tonnage arabica specialty %s ton, tonnage robusta %s ton, tonnage arabica robusta %s ton"%(data.total_volumes_market/1e3, tonnage_kopsus_espresso/1e3, tonnage_arabica_specialty/1e3, tonnage_robusta/1e3, tonnage_robusta_arabica_blend/1e3)
    )

    print(
        "total market valuation: %s B, total valuation kopsus espresso %s B, total valuation arabica specialty %s B, total valuation robusta %s B, total valuation arabica robusta %s B"%(data.total_valuation_market/1e9, valuation_kopsus_espresso, valuation_arabica_specialty, valuation_robusta, valuation_robusta_arabica_blend)
    )

class DataPool(object):
    def __init__(self,datadir):
        self.pooldata = []
        if not os.path.exists("./data_raw_ready/df_stores.bin"):
            for f in glob.glob("./%s/*.json"%(datadir)):
                print(
                    "reading file: %s"%(f)
                )
                with open(f,"rb") as jsonfile:
                    self.pooldata.append(json.load(jsonfile))

    def genStoreDataPool(self):
        if not os.path.exists("./data_raw_ready/df_stores.bin"):
            #Function to delete entries that are duplicated based on store names
            self.storeNames = []
            self.storeID = []
            self.storeStar = []
            self.storeSince = []
            self.storeSoldProducts = []
            self.storeLocation = []
            self.storeReviews = []

            month_dict = {
                "January":"1",
                "February":"2",
                "March":"3",
                "April":"4",
                "May":"5",
                "June":"6",
                "July":"7",
                "August":"8",
                "September":"9",
                "October":"10",
                "November":"11",
                "December":"12",
            }

            self.checker = 0

            for d in self.pooldata:
                if isinstance(d,dict):
                    names = list(d.keys())
                    for n in names:
                        if n not in self.storeNames:
                            #Do stuff
                            self.storeNames.append(n)
                            id_candidate = random.randint(1,1000000)

                            while id_candidate in self.storeID:
                                id_candidate = random.randint(1,1000000)
                            
                            self.storeID.append(id_candidate)

                            #Store stars
                            self.storeStar.append(
                                d[n]["Stars"]
                            )

                            #Since
                            s = d[n]["Since"]
                            if s != "NA":
                                a = s.split(" ")
                                month = month_dict[a[0]]
                                datestring = "%s-%s-11"%(a[-1],month)
                                dt = datetime.strptime(datestring, '%Y-%m-%d')
                            else:
                                datestring = "1900-12-12"
                                dt = datetime.strptime(datestring, '%Y-%m-%d')
                            self.storeSince.append(dt)

                            #Number of sales
                            soldProducts = d[n]["Number of sales"]
                            self.storeSoldProducts.append(soldProducts)

                            #Store location
                            loc = d[n]["Location"]
                            self.storeLocation.append(loc)

                            #Reviews
                            rev = d[n]["Reviews"]
                            self.storeReviews.append(rev)
                        else:
                            del d[n]

                    self.checker += len(d.keys())    

                else:
                    for l in d:
                        names = list(l.keys())
                        for n in names:
                            if n not in self.storeNames:
                                #Do stuff
                                self.storeNames.append(n)
                                id_candidate = random.randint(1,1000000)

                                while id_candidate in self.storeID:
                                    id_candidate = random.randint(1,1000000)
                                
                                self.storeID.append(id_candidate)

                                #Store stars
                                self.storeStar.append(
                                    l[n]["Stars"]
                                )

                                #Since
                                s = l[n]["Since"]
                                if s != "NA":
                                    a = s.split(" ")
                                    month = month_dict[a[0]]
                                    datestring = "%s-%s-11"%(a[-1],month)
                                    dt = datetime.strptime(datestring, '%Y-%m-%d')
                                else:
                                    datestring = "1900-12-12"
                                    dt = datetime.strptime(datestring, '%Y-%m-%d')
                                self.storeSince.append(dt)

                                #Number of sales
                                soldProducts = l[n]["Number of sales"]
                                self.storeSoldProducts.append(soldProducts)

                                #Store location
                                loc = l[n]["Location"]
                                self.storeLocation.append(loc)

                                #Reviews
                                rev = l[n]["Reviews"]
                                self.storeReviews.append(rev)
                            else:
                                del l[n]
                        self.checker+= len(l.keys())

            self.df_stores = pd.DataFrame(
                    zip(
                        self.storeNames,
                        self.storeID,
                        self.storeStar,
                        self.storeSince,
                        self.storeSoldProducts,
                        self.storeLocation,
                        self.storeReviews
                    ),
                    columns= [
                        "StoreName","ID","StoreStars","StoreSince","StoreTotalSold","StoreLocation","StoreReviews"
                    ]
            )

            self.df_stores.to_csv(
                "./data_raw_ready/StoreDataPool.csv",index=False
            )

            #Assert of uniqueness
            assert(
                len(pd.unique(
                    self.df_stores["ID"]
                )) == 
                len(self.df_stores)
            )
            
            assert(
                len(pd.unique(
                    self.df_stores["StoreName"]
                )) == 
                len(self.df_stores)
            )

            assert(
                len(self.df_stores) == self.checker
            )

            self.df_stores.to_pickle("./data_raw_ready/df_stores.bin")

            print("Assertion success")
        else:
            self.df_stores = pd.read_pickle("./data_raw_ready/df_stores.bin")

    def genProductDataPool(self):
        if not os.path.exists("./data_raw_ready/df_products.bin"):
            self.storeNamesAlienKeys = []
            self.storeIDAlienKeys = []
            self.productID = []
            self.productNames = []
            self.productTotalSold = []
            self.productPrice = []
            self.productStars = []
            self.productReviews = []
            self.productWeight = []
            self.productCategory = []
            
            c = 0
            for d in self.pooldata:
                if isinstance(d,dict):
                    names = d.keys()
                    c+=len(names)
                else:
                    for l in d:
                        names = l.keys()
                        c+=len(names)
            try:
                assert(self.checker==c)      
            except :
                raise ValueError("Not the same %s=%s"%(self.checker,c))   
            
            print("Assertion success!")

            for d in self.pooldata:
                if isinstance(d,dict):
                    names = list(d.keys())
                    for n in names:
                        #Get Store ID
                        storeID = self.df_stores[
                            self.df_stores["StoreName"]==n
                        ]["ID"].iloc[0]

                        #Access the products data
                        product_names = d[n]["Products"].keys()
                        for pName in product_names:
                            #Append product name
                            self.productNames.append(pName)

                            #Append product ID
                            id_candidate = random.randint(1,1000000)
                            while id_candidate in self.productID:
                                id_candidate = random.randint(1,1000000)
                            self.productID.append(id_candidate)

                            #Append Store ID
                            self.storeIDAlienKeys.append(storeID)
                        
                            #Append store name
                            self.storeNamesAlienKeys.append(n)
                            
                            #Append total sold
                            self.productTotalSold.append(d[n]["Products"][pName]["Product total sold"])

                            #Append price
                            self.productPrice.append(d[n]["Products"][pName]["Product price"])

                            #Append stars
                            self.productStars.append(d[n]["Products"][pName]["Product stars"])

                            #Append reviews
                            self.productReviews.append(d[n]["Products"][pName]["Product reviews"])

                            #Append weight
                            self.productWeight.append(d[n]["Products"][pName]["Product net weight"])

                            #Append category
                            self.productCategory.append(d[n]["Products"][pName]["Product category"])
                        
                        #print(numstores)
                else:
                    for l in d:
                        names = list(l.keys())
                        for n in names:
                            #Get Store ID
                            storeID = self.df_stores[
                                self.df_stores["StoreName"]==n
                            ]["ID"].iloc[0]

                            #Access the products data
                            product_names = l[n]["Products"].keys()
                            for pName in product_names:
                                #Append product name
                                self.productNames.append(pName)

                                #Append product ID
                                id_candidate = random.randint(1,1000000)
                                while id_candidate in self.productID:
                                    id_candidate = random.randint(1,1000000)
                                self.productID.append(id_candidate)

                                #Append Store ID
                                self.storeIDAlienKeys.append(storeID)
                            
                                #Append store name
                                self.storeNamesAlienKeys.append(n)
                                
                                #Append total sold
                                self.productTotalSold.append(l[n]["Products"][pName]["Product total sold"])

                                #Append price
                                self.productPrice.append(l[n]["Products"][pName]["Product price"])

                                #Append stars
                                self.productStars.append(l[n]["Products"][pName]["Product stars"])

                                #Append reviews
                                self.productReviews.append(l[n]["Products"][pName]["Product reviews"])

                                #Append weight
                                self.productWeight.append(l[n]["Products"][pName]["Product net weight"])

                                #Append category
                                self.productCategory.append(l[n]["Products"][pName]["Product category"])

                self.df_product = pd.DataFrame(
                    zip(
                        self.productNames, self.productID,
                        self.storeIDAlienKeys,self.storeNamesAlienKeys,
                        self.productTotalSold,self.productPrice,
                        self.productStars,self.productReviews,
                        self.productWeight,self.productCategory
                    ),
                    columns=[
                        "ProductName","ID",
                        "StoreID","StoreName",
                        "ProductTotalSold","ProductPrice",
                        "ProductStars","ProductReviews",
                        "ProductWeight","ProductCategory"
                    ]
                )

                print(self.df_product.head(10))
                print(self.df_product.describe())
                print(self.df_product.columns)

                self.df_product.to_csv(
                "./data_raw_ready/ProductDataPool.csv",index=False
                )

                print("Done saving")

                #Assert uniqueness
                assert(
                    len(pd.unique(self.df_product["ID"])) == len(self.df_product)
                )  
                
                print("Assertion success!")

                self.df_product.to_pickle("./data_raw_ready/df_products.bin")
        else:
            self.df_product = pd.read_pickle("./data_raw_ready/df_products.bin")
            self.df_product.loc[
                self.df_product["ProductName"] == "Kopi Puntang Ayi Sutedja Kopi Juara SCAA 2016 / Honey Process 150gr - BIJI","ProductWeight"
            ] = 0.15

    def cleanProductData(self):
        #Method to separate products into three: Espresso , Kopsus and Specialty coffee beans
        self.category = ["Biji Kopi","Kopi Kemasan", "Kopi Bubuk"] #filter based on category
        self.df_product_relevant = self.df_product[
            self.df_product["ProductCategory"].str.contains("|".join(self.category), case=False)
        ]

        #Product filter by names - excluded
        self.word_filters = [
            "green bean", "green beans","greenbean","greenbeans","kopi mentah","kopi beras","drip","pouch","kemasan kopi","kemasan","1l","2l","liter","1 liter", "ml","1liter","250ml","500ml","750ml","1000ml","1500ml","2000ml","gelas","tukucur","tuku", "gelas", "oz", "12oz", "renceng","sachet","saset", "coffee bag", "koffie tarik","box", "bag", "twin pack","10x20gr","20x20gr","10x25gr","less sugar","jasa","grinder","dalgona","sanger", "1 L", "bundle", "lusin", "lt", "1 lt","juice", "kosangsu" , "kold brown","kristalisasi","nescafe","torabika","kapal api","kapalapi","tora bika", "luwak white coffee","3 in 1","coffee beer","kopi hijau","coffee tarik", "tarik", "kopi oplet", "3in1", "goodday"," good day","kapsul kopi","white coffee","rok","coffee maker","capsules","capsule"
        ]

        self.df_product_relevant = self.df_product_relevant[
            ~self.df_product_relevant["ProductName"].str.contains("|".join(self.word_filters),case=False)
        ]

        self.df_product_relevant = self.df_product_relevant[
            self.df_product_relevant["ProductWeight"] > 0
        ]

        self.df_product_relevant = self.df_product_relevant[
            self.df_product_relevant["ProductPrice"] < 2.200000e+07
        ]
        #Convert product weight into kg
        self.df_product_relevant["ProductWeight"] = self.df_product_relevant["ProductWeight"]/1000

        self.df_product_relevant.to_csv("./data_raw_ready/CoffeeMarketNonSachet.csv",index=False)

    def overallMarketSizeAnalysis(self):        
        #Meaningful metrics : total stars (avg stars) * total reviews
        self.TotalStars = self.df_stores['StoreReviews'] * self.df_stores['StoreStars']
        self.ActiveDays = []
        self.NumProducts = []
        self.TotalCoffeeSold = []
        self.TotalCoffeeSoldNormalised = []
        self.TotalValuation = []
        self.TotalValuationNormalised = []

        nownow = datetime(2021,3,20)

        days = 0
        s = 0
        for i in range(self.df_stores.shape[0]):
            if self.df_stores["StoreSince"].iloc[i].year == 1900:
                pass
            else:
                days += (nownow - self.df_stores["StoreSince"].iloc[i]).total_seconds()/(24*3600)
                s+=1
        
        avgdays = days/s

        for i in range(self.df_stores.shape[0]):
            if self.df_stores["StoreSince"].iloc[i].year == 1900:
                #If the year of store EST is 1900
                self.ActiveDays.append(
                    avgdays
                )
            else:
                self.ActiveDays.append(
                    (nownow - self.df_stores["StoreSince"].iloc[i]).total_seconds()/(24*3600)
                )

            #Calculate the number of products
            n = self.df_stores["ID"].iloc[i] #Left join on df_stores.ID
            self.NumProducts.append(
                self.df_product_relevant[
                    self.df_product_relevant["StoreID"] == n
                ].shape[0]
            )

            df = self.df_product_relevant[
                self.df_product_relevant["StoreID"] == n
            ]

            #Multiply weight with total sold, and sum to get scalar kg value
            tonnage = sum(
                df["ProductWeight"] * df["ProductTotalSold"]
            )        

            self.TotalCoffeeSold.append(tonnage) #Append

            #Valuation per store
            val = sum(
                df["ProductTotalSold"] * df["ProductPrice"]
            )

            self.TotalValuation.append(val)

            #Calculate the normalised coffee sold
            if self.ActiveDays[-1] / 365 > 1:
                year =  self.ActiveDays[-1] / 365
                self.TotalCoffeeSoldNormalised.append(tonnage/year)
                self.TotalValuationNormalised.append(val/year)
            else:
                self.TotalCoffeeSoldNormalised.append(tonnage)
                self.TotalValuationNormalised.append(val)

        self.validRoastCoffeeSeller = np.count_nonzero(np.array(self.TotalCoffeeSold))
        self.total_volumes_market = sum(self.TotalCoffeeSold)
        self.total_valuation_market = sum(self.TotalValuation)
        try:
            assert( abs(self.total_volumes_market - sum(
                self.df_product_relevant.ProductTotalSold * self.df_product_relevant.ProductWeight)) < 5 
            )
            print("Assertion Success")
        except:
            raise ValueError("Product weight not balance")

    def marketInsightAnalysis(self):
        #most populated key words
        self.kwords_market = []
        for n in self.df_product_relevant["ProductName"]:
            string = n.lower().split()
            prev_string = "aaa"
            for j in range(len(string)):
                curr_string = string[j]
                if prev_string == "kopi" and curr_string == "susu":
                    self.kwords_market.append("kopi susu")
                elif prev_string == "espresso" and curr_string == "blend":
                    self.kwords_market.append("'spro blend")
                elif prev_string in ["full", "fully"] and curr_string in ["washed", "wash"]:
                    self.kwords_market.append("%s %s"%(prev_string,curr_string))
                elif prev_string == "robusta" and curr_string == "temanggung":
                    self.kwords_market.append("robusta temanggung")
                else:
                    self.kwords_market.append(curr_string)
                prev_string = curr_string
        
        self.kwords_market = pd.Series(self.kwords_market)
        self.keys = self.kwords_market.value_counts(dropna=True).keys().tolist()
        self.vals = self.kwords_market.value_counts(dropna=True).tolist()

        fig,ax = plt.subplots(1)
        barwidth = 0.5
        words = []
        h = []
        w = []
        for a in np.arange(0,1000,1,dtype=np.int32):
            w.append("%sgr"%(a))
            w.append("%sg"%(a))
            w.append("%skg"%(a))


        for i in range(1000):
            word = self.keys[i]
            if word not in ["-","/","|","(",")","gunung","gr","kg","gram","dan","&","kopi","coffee","biji"] and word not in str(np.arange(0,1000,1,dtype=np.int32)) and word not in w:
                words.append(word)
                h.append(self.vals[i])

            if len(h) == 50:
                break

        ax.bar(words,h,width=barwidth,color="black")
        ax.set_ylabel("#Products")
        ax.set_title("50 most used words in roasted coffee product")
        
        ax.yaxis.set_ticks(np.arange(0,max(h)+500,500))

        for tick in ax.get_xticklabels():
            tick.set_rotation(90)
        plt.show()
            
        #Generate colormaps
        cmap = plt.cm.get_cmap("hsv",len(h))
        colors = []
        for i in range(len(h)):
            colors.append(cmap(i))
        
        #Most bought key words - 80% of the total volume
        df_target = self.df_product_relevant
        df_target["TotalVolume"] = df_target.ProductTotalSold * df_target.ProductWeight
        df_target = df_target.sort_values(by="TotalVolume",ascending=False).reset_index()
        accummulated_vol = 0

        for i in range(df_target.shape[0]):
            accummulated_vol+=df_target["TotalVolume"].iloc[i]
            if accummulated_vol > 0.8 * self.total_volumes_market:
                break
        df_target = df_target[0:i+1]

        self.kwords_market = []
        for n in df_target["ProductName"]:
            string = n.lower().split()
            prev_string = "aaa"
            for j in range(len(string)):
                curr_string = string[j]
                if prev_string == "kopi" and curr_string == "susu":
                    self.kwords_market.append("kopi susu")
                elif prev_string == "espresso" and curr_string == "blend":
                    self.kwords_market.append("espresso blend")
                elif prev_string in ["full", "fully"] and curr_string in ["washed", "wash"]:
                    self.kwords_market.append("%s %s"%(prev_string,curr_string))
                elif prev_string == "robusta" and curr_string == "temanggung":
                    self.kwords_market.append("robusta temanggung")
                elif prev_string == "house" and curr_string == "blend":
                    self.kwords_market.append("house blend")
                else:
                    self.kwords_market.append(curr_string)
                prev_string = curr_string
        
        self.kwords_market = pd.Series(self.kwords_market)
        self.keys = self.kwords_market.value_counts(dropna=True).keys().tolist()
        self.vals = self.kwords_market.value_counts(dropna=True).tolist()

        fig,ax = plt.subplots(1)
        barwidth = 0.5
        words = []
        h = []
        
        for i in range(1000):
            word = self.keys[i]
            if word not in ["-","/","|","(",")","gunung","gr","kg","gram","dan","&","es","kopi","coffee","biji"] and word not in str(np.arange(0,1000,1,dtype=np.int32)) and word not in w:
                words.append(word)
                vals = 0

                #Check if word is in the product name, if yes add the vals
                for i in range(df_target.shape[0]):
                    n = df_target["ProductName"].iloc[i]
                    v = df_target["TotalVolume"].iloc[i]
                    if len(word.split()) == 1:
                        if word in n.lower().split():
                            vals +=v
                    else:
                        #if word == "kopi susu" or word == "espresso blend":
                            #print(word.split())
                            #print(n.lower().split())
                            #print(all(item in word.split() for item in n.lower().split()))
                        if all(item in n.lower().split() for item in word.split()):
                            vals += v

                h.append(vals/1000) #convert vals into ton
            
            #Break after 50 words
            if len(h) == 50:
                break
        
        words = [w.replace("espresso blend","'spro blend") for w in words]
        
        intermediate_df = pd.DataFrame(
            zip(words,h),columns=["Words","TotalVolume"]
        )
        intermediate_df = intermediate_df.sort_values(by="TotalVolume",ascending=False).reset_index()

        ax.bar(intermediate_df.Words,intermediate_df.TotalVolume,width=barwidth,color="red")
        ax.set_ylabel("Total tonnage [ton]")
        ax.set_title("50 most bought words in roasted coffee product")
    
        for tick in ax.get_xticklabels():
            tick.set_rotation(90)
        plt.show()    

    def categoriseProduct(self):
        includedID = []

        df_pool = self.df_product_relevant

        #Separate kopi susu product from the rest
        self.name_filters = [
            "kopi susu"
        ]

        #1st fitler based on product name
        self.df_kopi_susu_blend = df_pool[
            df_pool["ProductName"].str.contains(self.name_filters[0],case=False)
        ]

        #Appending id to includedID
        for id in self.df_kopi_susu_blend["ID"]:
            includedID.append(id)
        
        #Drop data that has been included in df kopsus
        df_pool = df_pool[
            ~df_pool["ID"].isin(includedID)
        ]

        #Separate espressor from the rest of the data
        self.name_filters = [
            "espresso","espresso blend","blend espresso"
        ]

        self.df_espresso_blend = df_pool[
            df_pool["ProductName"].str.contains("|".join(self.name_filters),case=False)
        ]

        for id in self.df_espresso_blend["ID"]:
            if id not in includedID:
                includedID.append(id)

        #Drop data that has been included in df kopsus and espresso
        df_pool = df_pool[
            ~df_pool["ID"].isin(includedID)
        ]

        #Separate robusta-arabica blend from df pool
        listword = ["arabica robusta", "robusta arabica", "arabika robusta","robusta arabika","blend","robusta + arabika", "rasta","robusta and arabica","campuran", "moka arabika","aroma"]

        #separate arabica robusta blend
        self.df_arabica_robusta_blend = df_pool[
            df_pool["ProductName"].str.contains("|".join(listword),case=False)
        ]

        for id in self.df_arabica_robusta_blend["ID"]:
            if id not in includedID:
                includedID.append(id)

        #Drop data that has been included in df kopsus and espresso and robusta-arabica blend
        df_pool = df_pool[
            ~df_pool["ID"].isin(includedID)
        ]

        #separate robusta
        listword = ["robusta","robust","bukan arabica","bukan arabika","not arabica"]

        self.df_robusta = df_pool[
            df_pool["ProductName"].str.contains("|".join(listword),case=False)&
            (~df_pool["ProductName"].str.contains("|".join(["arabica","arabika","blend"]),case=False))
        ]

        for id in self.df_robusta["ID"]:
            if id not in includedID:
                includedID.append(id)

        #Drop data that has been included in df kopsus and espresso and robusta-arabica blend and robusta
        df_pool = df_pool[
            ~df_pool["ID"].isin(includedID)
        ]

        #separate arabica
        self.df_arabica = df_pool[
            ~df_pool["ProductName"].str.contains("|".join(["robusta","blend"]),case=False)
        ]

        self.df_kopi_susu_blend.to_csv("./data_raw_ready/KopiSusuBlendData.csv",index=False)

        self.df_espresso_blend.to_csv("./data_raw_ready/EspressoBlendData.csv",index=False)

        self.df_arabica.to_csv("./data_raw_ready/CoffeeDataArabica.csv",index=False)

        self.df_robusta.to_csv("./data_raw_ready/CoffeeDataRobusta.csv",index=False)

        self.df_arabica_robusta_blend.to_csv("./data_raw_ready/ArabicaRobustaBlendData.csv",index=False)
        
        return self.df_kopi_susu_blend,self.df_espresso_blend,self.df_arabica,self.df_robusta,self.df_arabica_robusta_blend
    
    def pareto_analysis_overall_market(self):
        # Find how many sorted indexes needed to get 80% volumes, Bayu idea
        temp_list = sorted(self.TotalCoffeeSold,reverse=True)
        temp_w = 0
        for i in range(len(temp_list)):
            if temp_w > 0.8 * self.total_volumes_market:
                break
            temp_w += temp_list[i]
        
        #Obtain the top i 
        idxTop_volume = np.argsort(
            np.array(self.TotalCoffeeSold)
        )[::-1]
        idxTop_volume = idxTop_volume[0:i]

        # Find how many sorted indexes needed to get 80% market valuation, Bayu idea
        temp_list = sorted(self.TotalValuation,reverse=True)
        temp_w = 0
        for i in range(len(temp_list)):
            if temp_w > 0.8 * self.total_valuation_market:
                break
            temp_w += temp_list[i]
        
        #Obtain the top i 
        idxTop_valuation = np.argsort(
            np.array(self.TotalValuation)
        )[::-1]
        idxTop_valuation = idxTop_valuation[0:i]

        #Create a table to store pareto store - total valuation and total volumes per store
        paretoStore_volume = []
        paretoTotalVolume = []

        paretoStore_valuation = []
        paretoTotalValuation = []

        for idx in idxTop_volume:
            paretoStore_volume.append(
                self.df_stores["StoreName"].iloc[idx]
            )
            
            paretoTotalVolume.append(
                self.TotalCoffeeSold[idx]
            )
        
        for idx in idxTop_valuation:
            paretoStore_valuation.append(
                self.df_stores["StoreName"].iloc[idx]
            )
            
            paretoTotalValuation.append(
                self.TotalValuation[idx]
            )

        df_pareto_volume = pd.DataFrame(
            zip(paretoStore_volume,paretoTotalVolume),
            columns=["Store name","Tonnage kg"]
        )
        df_pareto_volume.to_csv("./data_raw_ready/ParetoStoreVolume.csv",index=False)

        df_pareto_valuation = pd.DataFrame(
            zip(paretoStore_valuation,paretoTotalValuation),
            columns=["Store name","Valuation IDR"]
        )
        df_pareto_valuation.to_csv("./data_raw_ready/ParetoStoreValuation.csv",index=False)
            
        Xs = [
            self.TotalStars/1000,self.NumProducts,self.TotalStars/1000,self.NumProducts
        ]

        ys = [
            [x/1000 for x in self.TotalCoffeeSold],[x/1000 for x in self.TotalCoffeeSold],[x/1e9 for x in self.TotalValuation],[x/1e9 for x in self.TotalValuation]
        ]

        labels = [
            ["Total stars [k]","Coffee sold [tons]"],
            ["Num. products","Coffee sold [tons]"],
            ["Total stars [k]","Valuation [Bill. IDR]"],
            ["Num. products","Valuation [Bill. IDR]"]
        ]

        if i > 10:
            colorsTop = plt.cm.get_cmap("hsv",10)
        else:   
            colorsTop = plt.cm.get_cmap("hsv",i+1)

        #store ID that belongs to the pareto group
        self.pareto_storeID = []

        fig,axes = plt.subplots(2,2)    
        med = 15
        for i,ax in enumerate(axes.flat):    
            ax.scatter(
                Xs[i],ys[i],s=1,color="black"
            )
            
            #Plot the top stores
            z = 0

            if i < 2:
                for idx in idxTop_volume:
                    x = Xs[i]
                    y = ys[i]

                    if self.df_stores["ID"].iloc[idx] not in self.pareto_storeID:
                        self.pareto_storeID.append(
                            self.df_stores["ID"].iloc[idx]
                        )

                    if not isinstance(x,list):
                        x = x.to_list()

                    ax.scatter(
                        x[idx], 
                        y[idx],
                        label = self.df_stores['StoreName'].iloc[idx], 
                        c=colorsTop(z),s=10
                    )
                    z+=1
                    if z == 10:
                        break
            
            else:
                for idx in idxTop_valuation:
                    x = Xs[i]
                    y = ys[i]

                    if self.df_stores["ID"].iloc[idx] not in self.pareto_storeID:
                        self.pareto_storeID.append(
                            self.df_stores["ID"].iloc[idx]
                        )

                    if not isinstance(x,list):
                        x = x.to_list()

                    ax.scatter(
                        x[idx], 
                        y[idx],
                        label = self.df_stores['StoreName'].iloc[idx], 
                        c=colorsTop(z),s=10
                    )
                    z+=1
                    if z == 10:
                        break

            ax.legend(ncol=2,labelspacing=0.25,handletextpad=0.1)

            ax.set_xlabel(labels[i][0],fontsize=med)
            ax.set_ylabel(labels[i][1],fontsize=med)
            ax.tick_params(axis="both",labelsize=med-2.5)

        self.df_kopsus_espresso = pd.concat([self.df_kopi_susu_blend,self.df_espresso_blend],axis=0).drop_duplicates().reset_index(drop=True)

        self.tonnage_kopsus_espresso = sum(self.df_kopsus_espresso["ProductTotalSold"] * self.df_kopsus_espresso["ProductWeight"]) #kg
        self.tonnage_arabica_specialty = sum(self.df_arabica["ProductTotalSold"] * self.df_arabica["ProductWeight"]) #kg
        self.tonnage_robusta = sum(self.df_robusta["ProductTotalSold"] * self.df_robusta["ProductWeight"]) #kg
        self.tonnage_robusta_arabica_blend = sum(self.df_arabica_robusta_blend["ProductTotalSold"] * self.df_arabica_robusta_blend["ProductWeight"]) #kg

        self.valuation_kopsus_espresso = sum(self.df_kopsus_espresso["ProductTotalSold"] * self.df_kopsus_espresso["ProductPrice"]/1e9) #kg
        self.valuation_arabica_specialty = sum(self.df_arabica["ProductTotalSold"] * self.df_arabica["ProductPrice"]/1e9) #kg
        self.valuation_robusta = sum(self.df_robusta["ProductTotalSold"] * self.df_robusta["ProductPrice"]/1e9) #kg
        self.valuation_robusta_arabica_blend = sum(self.df_arabica_robusta_blend["ProductTotalSold"] * self.df_arabica_robusta_blend["ProductPrice"]/1e9) #kg
        
        self.market_share_volume = [self.tonnage_kopsus_espresso,self.tonnage_arabica_specialty,self.tonnage_robusta,self.tonnage_robusta_arabica_blend]

        self.market_share_valuation = [self.valuation_kopsus_espresso, self.valuation_arabica_specialty, self.valuation_robusta, self.valuation_robusta_arabica_blend]

        self.labels = ["Espresso & kopi susu blend", "arabica", "robusta", "arabica-robusta blend"]

        #Pie chart market
        fig,ax = plt.subplots(1)

        ax.pie(
            self.market_share_volume,labels=self.labels, autopct='%1.1f%%',shadow=True,startangle=90,textprops={'fontsize': med-2.5}
        )
        ax.axis('equal')
        ax.set_title("Market share based on volume.\nTotal volume: %s ton"%(round(self.total_volumes_market/1e3,2)),fontsize=med)

        #Pie chart market
        fig,ax = plt.subplots(1)

        ax.pie(
            self.market_share_valuation,labels=self.labels, autopct='%1.1f%%',shadow=True,startangle=90,textprops={'fontsize': med-2.5}
        )
        ax.axis('equal')
        ax.set_title("Market share based on valuation.\nTotal valuation: %s bill. IDR"%(round(self.total_valuation_market/1e9,2)), fontsize=med)

        plt.show()     
    
    def insightEspressoKopsus(self):
        self.df_kopsus_espresso = pd.concat(
            [self.df_kopi_susu_blend,self.df_espresso_blend],axis=0
        ).drop_duplicates().reset_index(drop=True)

        #Thousand price per kg
        self.df_kopsus_espresso["SpecificPrice"] =(
            self.df_kopsus_espresso["ProductPrice"]/1000 / (self.df_kopsus_espresso["ProductWeight"])
        )

        #Total volume
        self.df_kopsus_espresso["TotalVolume"] = self.df_kopsus_espresso["ProductTotalSold"] * self.df_kopsus_espresso["ProductWeight"]

        #Total valuation
        self.df_kopsus_espresso["TotalValuation"] = self.df_kopsus_espresso["ProductTotalSold"] * self.df_kopsus_espresso["ProductPrice"]        

        self.mean_price_KE = self.df_kopsus_espresso["SpecificPrice"].mean()
        self.std_price_KE = self.df_kopsus_espresso["SpecificPrice"].std()

        #Discard the outliers
        self.df_kopsus_espresso = self.df_kopsus_espresso[
            (self.df_kopsus_espresso["SpecificPrice"] >  self.mean_price_KE - 2 * self.std_price_KE) & 
            (self.df_kopsus_espresso["SpecificPrice"] <  self.mean_price_KE + 2 * self.std_price_KE)
        ]

        print(
            len(pd.unique(self.df_kopsus_espresso["StoreID"]))
        )

        fig = plt.figure()
        ax = fig.add_axes([0.05, 0.2, 0.9, 0.7])
        ax2 = fig.add_axes([0.05, 0.05, 0.9, 0.05])
        
        #plot mean and +/- 2std deviation
        ax.axvline(x=self.mean_price_KE,color="red",label="mean",ls="--")

        heights, bins, patches = ax.hist(self.df_kopsus_espresso["SpecificPrice"], bins=250)
       
        #Get the total sold values in kg
        totalsold = []

        for i in range(len(bins)-1):
            lb = bins[i]
            ub = bins[i+1]
            df = self.df_kopsus_espresso[
                (self.df_kopsus_espresso["SpecificPrice"] >= lb)&
                (self.df_kopsus_espresso["SpecificPrice"] < ub)
            ]
            totalsold.append(
                sum(df["ProductTotalSold"] * df["ProductWeight"])
            )

        assert(len(totalsold) == len(patches))

        cm = plt.cm.get_cmap('RdYlBu_r',50)
        
        normalised_tot = []
        cols = []
        minima, maxima = min(totalsold), max(totalsold)

        for tot in totalsold:
            normalised_tot.append(
                (tot-minima)/(maxima-minima)
            )
            cols.append(
                cm((tot-minima)/(maxima-minima))
            )

        for i in range(len(patches)):
            patches[i].set_fc(cols[i])

        norm = mpl.colors.Normalize(vmin=minima, vmax=maxima)

        #Colorbar properties
        cb = plt.colorbar(mpl.cm.ScalarMappable(norm=norm, cmap=cm),
             cax=ax2, orientation='horizontal'
        )
        cb.set_label(label='Total sold [kg]', size=12.5, weight='bold')
        cb.ax.tick_params(labelsize=12.5) 

        #Finished plotting
        ax.set_xlabel("Coffee beans specific price [thousand IDR / kg]",fontsize=15)
        ax.set_ylabel("#Products",fontsize=15)
        ax.tick_params(axis='both',labelsize=15)
        ax.set_xlim(
            0,(self.mean_price_KE + 2*self.std_price_KE) #Set lim
        )
        ax.legend(fontsize=12.5)
        
        plt.show()

        #Get the the stores that contributes to 80% of the volume
        total_KE_vol = []
        total_KE_val = []
        storeIDs = []
        storeNames = []
        for storeID in pd.unique(self.df_kopsus_espresso["StoreID"]):
            storeIDs.append(storeID)

            #Append store names from df_stores.ID == storeID (left join)
            storeNames.append(
                self.df_stores[
                    self.df_stores["ID"]==storeID
                ]["StoreName"].iloc[0]
            )

            #Take the product data that has the storeID == "storeID"
            df = self.df_kopsus_espresso[
                    self.df_kopsus_espresso["StoreID"] == storeID
            ]

            #Append total volume and total valuation
            total_KE_vol.append(
                sum(
                    df["ProductTotalSold"] * df["ProductWeight"] #kg
                )
            )
            total_KE_val.append(
                sum(
                    df["ProductTotalSold"] * df["ProductPrice"] #IDR
                )
            )

        #Construct the dataframe of pareto store 80% of KE market
        df_pareto_KE = pd.DataFrame(
            zip(storeNames,storeIDs,total_KE_vol,total_KE_val),
            columns=["StoreName","ID","TotalVolume","TotalValuation"]
        )

        # df_target sort descending
        df_pareto_KE = df_pareto_KE.sort_values(by="TotalVolume",ascending=False).reset_index(drop=True)
        try:
            assert(
                df_pareto_KE.shape[0] == len(pd.unique(df_pareto_KE["ID"]))
            )
            print("Assertion success!")
        except:
            raise ValueError(
                "df_pareto_KE.shape[0] = %s is not the same as the length of unique df_target.StoreID = %s"%(
                    df_pareto_KE.shape[0], len(pd.unique(df_pareto_KE["StoreID"]))
                )
            )

        #Take only the stores that contributes to 80% of the total volume
        val = 0
        for i in range(df_pareto_KE.shape[0]):
            val+=df_pareto_KE["TotalVolume"].iloc[i]
            if val > 0.8 * self.tonnage_kopsus_espresso:
                break
        
        df_pareto_KE = df_pareto_KE[:i+1]
        df_pareto_KE.to_csv("./data_raw_ready/ParetoKopsusEspresso.csv",index=False)
        self.df_pareto_KE = df_pareto_KE

        #Get the important values - for normalisation of scatter size and colours float
        maxima_valuation = self.df_kopsus_espresso["TotalValuation"].max()/1e6 #Million idr
        minima_valuation = self.df_kopsus_espresso["TotalValuation"].min()/1e6 #Million idr
        
        #Start analysis - 
        #   plot X store name,
        #   y products price, 
        #   size of the scatter = total volume sold, 
        #   colors = valuation per product
        arr = np.arange(1,df_pareto_KE.shape[0]+1,1,dtype=np.int32)

        med=15

        #Colourmap object
        cmap = plt.cm.get_cmap('viridis',100)

        #Add figure object
        fig = plt.figure()

        #Add axes to host the plot
        x0 = 0.05
        y0 = 0.2
        barwidth = 0.05
        ax = fig.add_axes([x0, y0, 0.9 , 0.95 - y0 - barwidth-0.1]) #X0 Y0 Width Height

        #Add axis to host the colourbar
        ax2 = fig.add_axes([x0, 0.95 - barwidth, 0.9, barwidth])

        ticks = []
        poss = []
        ys = []
        colours = []
        sizes = []

        #Loop the store ID from the df_pareto_KE
        for i in range(df_pareto_KE.shape[0]):
            #Get all the Kopsus and Espresso Blend product from the store - only specific price < (mean price + 2 std)
            storeID = df_pareto_KE["ID"].iloc[i]
            df_target_products = self.df_kopsus_espresso[
                (self.df_kopsus_espresso["StoreID"]==storeID)&
                (self.df_kopsus_espresso["SpecificPrice"] < self.mean_price_KE + 2 * self.std_price_KE)
            ].reset_index(drop=True)

            #Append store names
            storename = self.df_stores[self.df_stores["ID"]==storeID]["StoreName"].iloc[0]
            strings = storename.split()
            if len(strings) == 1:
                ticks.append(storename)
            else:
                join1 = strings[0:2]
                name = " ".join(join1)

                if len(strings) == 2:
                    ticks.append(name)
                else:
                    join2 = strings[2:]
                    name2 = " ".join(join2)
                    name_final = "%s\n%s"%(name,name2)
                    ticks.append(name_final)


            #Position of scatter - since 1 store may have more than 1 espresso/kopsus blend
            pos = arr[i]

            for j in range(df_target_products.shape[0]):
                size = df_target_products["TotalVolume"].iloc[j]/10
                normalised_valuation = (df_target_products["TotalValuation"].iloc[j]/1e6 - minima_valuation) / (maxima_valuation - minima_valuation) 

                #Append
                poss.append(pos)
                ys.append(
                    df_target_products["SpecificPrice"].iloc[j]
                )
                color = cmap(normalised_valuation)
                colours.append(color)
                sizes.append(size)

                '''
                ax.scatter(
                    pos,
                    df_target_products["SpecificPrice"].iloc[j], #thousand idr /kg
                    s = normalised_size, #0-50 float
                    color=color #0-1 float
                )
                '''
        scatter = ax.scatter(
            poss,ys, c = colours, s = sizes
        )
        
        #Colorbar properties
        norm = mpl.colors.Normalize(vmin=minima_valuation, vmax=maxima_valuation)
        cb = plt.colorbar(mpl.cm.ScalarMappable(norm=norm, cmap=cmap),
             cax=ax2, orientation='horizontal'
        )
        cb.set_label(label='Total Valuation [M·IDR]',weight="bold",loc="center", size=med-2.5)
        cb.ax.tick_params(labelsize=med-2.5) 

        #Finished plotting
        ax.xaxis.set_ticks(arr)
        ax.set_xticklabels(ticks)
        ax.set_ylabel("Specific price [thousand IDR / kg]",fontsize=med)
        ax.tick_params(
            axis="y",labelsize=med-2.5
        )
        ax.tick_params(
            axis="x",labelsize=med-5
        )

        ax.axhline(y=self.mean_price_KE,ls="--",color="red")

        #produce a legend with a cross section of sizes from the scatter
        handles, labels = scatter.legend_elements(prop="sizes", alpha=0.25, num=5)
        legend2 = ax.legend(handles, labels, loc="upper left", title="Volume sold [× 10 kg]")
       
        for tick in ax.get_xticklabels():
            tick.set_rotation(90)
        
        #Most bought keywords in espresso blend / kopsus blend
        df_target = self.df_kopsus_espresso.sort_values(by="TotalVolume",ascending=False).reset_index(drop=True)
        val = 0
        for i,total_volume in enumerate(df_target["TotalVolume"]):
            val+=total_volume
            if val > self.tonnage_kopsus_espresso:
                break
        df_target = df_target[:i+1]
      

        self.kwords_KE = []
        for n in df_target["ProductName"]:
            string = n.lower().split()
            prev_string = "aaa"
            for j in range(len(string)):
                curr_string = string[j]
                if prev_string == "kopi" and curr_string == "susu":
                    self.kwords_KE.append("kopi susu")
                elif prev_string == "espresso" and curr_string == "blend":
                    self.kwords_KE.append("espresso blend")
                elif prev_string in ["full", "fully"] and curr_string in ["washed", "wash"]:
                    self.kwords_KE.append("%s %s"%(prev_string,curr_string))
                elif prev_string == "robusta" and curr_string == "temanggung":
                    self.kwords_KE.append("robusta temanggung")
                elif prev_string == "house" and curr_string == "blend":
                    self.kwords_KE.append("house blend")
                else:
                    self.kwords_KE.append(curr_string)
                prev_string = curr_string
        
        self.kwords_KE = pd.Series(self.kwords_KE)
        self.keys = self.kwords_KE.value_counts(dropna=True).keys().tolist()
        self.vals = self.kwords_KE.value_counts(dropna=True).tolist()

        fig = plt.figure()
        ax = fig.add_axes([0.05,0.2,0.9,0.75])
        barwidth = 0.5
        words = []
        h = []
        w = []
        for a in np.arange(0,2000,1,dtype=np.int32):
            w.append("%sgr"%(a))
            w.append("%s"%(a))
            w.append("%sg"%(a))
            w.append("%skg"%(a))

        for i in range(1000):
            word = self.keys[i]
            if word not in ["-","/","|","(",")","gunung",":","for","gr","kg","gram","dan","&","es","kopi","coffee","biji"] and word not in str(np.arange(0,2000,1,dtype=np.int32)) and word not in w:
                words.append(word)
                vals = 0

                #Check if word is in the product name, if yes add the vals
                for i in range(df_target.shape[0]):
                    n = df_target["ProductName"].iloc[i]
                    v = df_target["TotalVolume"].iloc[i]
                    if len(word.split()) == 1:
                        if word in n.lower().split():
                            vals +=v
                    else:
                        if all(item in n.lower().split() for item in word.split()):
                            vals += v

                h.append(vals/1000) #convert vals into ton
            
            #Break after 50 words
            if len(h) == 50:
                break
        
        words = [w.replace("espresso blend","'spro blend") for w in words]
        
        intermediate_df = pd.DataFrame(
            zip(words,h),columns=["Words","TotalVolume"]
        )
        intermediate_df = intermediate_df.sort_values(by="TotalVolume",ascending=False).reset_index(drop=True)

        cmap = plt.cm.get_cmap("inferno_r",intermediate_df.shape[0])
        cols = []
        for i in range(intermediate_df.shape[0]):
            cols.append(cmap(i))

        ax.bar(intermediate_df.Words,intermediate_df.TotalVolume,width=barwidth,color=cols)
        ax.set_ylabel("Total tonnage [ton]",fontsize=med)
        ax.set_title("50 most bought words in kopi susu-espresso blend products",fontsize=med)
    
        for tick in ax.get_xticklabels():
            tick.set_rotation(90)
        
        ax.tick_params(axis="y",labelsize=med)
        ax.tick_params(axis="x",labelsize=med-2.5)

        #Packaging vs sales analysis
        df_target = self.df_kopsus_espresso
        df_target["ProductWeight"] = df_target["ProductWeight"] * 1000 #convert back to gram
        df_target = df_target[
            df_target["ProductWeight"]>90
        ]

        bins =      [100, 200, 500, 1000, 1200, 1500, 2000, 2500, 3000, 5000, 100000, 150000]
        bins_name = [   150, 250, 500, 1000, 1250, 1500, 2000, 2500, 3000, 5000,   10000]
        valcounts = []
        totalsold = []
        for i in range(len(bins)-1):
            lb = bins[i]
            ub = bins[i+1]

            #Filter the df
            df = df_target[
                (df_target["ProductWeight"]>=lb)&
                (df_target["ProductWeight"]<ub)
            ]

            valcounts.append(df.shape[0])

            totalsold.append(
                sum(
                  df['ProductTotalSold']
                )
            )

        assert(
            len(bins_name) == len(totalsold)
        )
        assert(
            len(bins_name) == len(valcounts)
        )

        fig,ax = plt.subplots(1,2)
        fig.tight_layout(pad=1.5)
        
        #start plotting, 
        # ax[0] plt bar, y frequency x packaging size
        # ax[1] joint plot, y total sold x packaging size
        bn = []
        for vv in bins_name:
            bn.append(str(vv))
        
        ax[0].bar(
            np.arange(len(valcounts)),
            valcounts,
            color = "black"
        )
        ax[0].set_xticks(np.arange(len(valcounts)))
        ax[0].set_xticklabels(bn)
        ax[0].set_ylabel("#Frequency in the market",fontsize=med)
        ax[0].tick_params(axis="both",labelsize=med-2.5)
        ax[0].set_xlabel("Packaging [gr]",fontsize=med)

        ax[1].bar(
            np.arange(len(totalsold)),
            totalsold,
            color = "blue"
        )
        ax[1].set_xticks(np.arange(len(valcounts)))
        ax[1].set_xticklabels(bn)
        ax[1].set_xlabel("Packaging [gr]",fontsize=med)
        ax[1].set_ylabel("Total product sold [#items]",fontsize=med)
        ax[1].tick_params(axis="both",labelsize=med-2.5)

        plt.show()

        #Create correlation matrix
        words = [w.replace("'spro blend","espresso blend") for w in words]
        print(self.df_pareto_KE.columns)

        specific_price_avg_pareto_KE = []
        stars = []
        reviews = []
        

        for storeID in self.df_pareto_KE["ID"]:
            df = self.df_kopsus_espresso[
                    self.df_kopsus_espresso["StoreID"] == storeID
                ]
            spec_price_avg = sum(df["ProductPrice"]/df["ProductWeight"])/df.shape[0] #IDR/kg avg

            specific_price_avg_pareto_KE.append(
                spec_price_avg
            )

            stars.append(
                self.df_stores[
                    self.df_stores["ID"]==storeID
                ]["StoreStars"].iloc[0]
            )
            
            reviews.append(
                self.df_stores[
                    self.df_stores["ID"]==storeID
                ]["StoreReviews"].iloc[0]
            )
        
        self.df_pareto_KE["SpecPriceAvg"] = specific_price_avg_pareto_KE
        self.df_pareto_KE["StoreStars"] = stars
        self.df_pareto_KE["StoreReviews"] = reviews

        #Look for words. if any then + 1 else 0
        words_existance = np.zeros((self.df_pareto_KE.shape[0],len(words)))
        for i in range(self.df_pareto_KE.shape[0]):
            #Get the store ID from self.df_pareto_KE
            storeID = self.df_pareto_KE["ID"].iloc[i]
            
            #Take all the products that belongs to a specific storeID
            df = self.df_kopsus_espresso[
                self.df_kopsus_espresso["StoreID"]==storeID
            ]

            for j,w in enumerate(words):
                print(i,j)
                #Check if words is in the product of a store
                productnames = df["ProductName"]
                check = 0

                for pName in productnames:
                    if w in pName.lower():
                        check+=1
                
                #Populate the matrix
                words_existance[i,j] = check

        d = pd.DataFrame(
            words_existance,columns= words
        )

        self.df_pareto_KE = pd.concat(
            [self.df_pareto_KE,d],axis=1
        )

        self.df_pareto_KE.to_csv(
            "./data_raw_ready/corr.csv",index=False
        )

        fig = plt.figure()
        ax = fig.add_axes([0.075,0.15,1,0.80])
        dfcorr = self.df_pareto_KE.drop(["ID","StoreName","TotalValuation"],axis=1)
        corr = dfcorr.corr()
        sns.heatmap(
            corr[["TotalVolume"]],
            cmap="inferno", 
            ax=ax,
            xticklabels=["TotalVolume"],
            yticklabels=corr.columns
        )
        plt.show()

    def insightArabica(self):
        #Overall market arabica 
        self.arabicaTotalVolume = sum(self.df_arabica["ProductTotalSold"] * self.df_arabica["ProductWeight"])
        
        #1st lets map how many origins are there
        kwds = []
        for productName in self.df_arabica["ProductName"]:
            #Delete all the punctuation and symbols
            productName.replace(")","")
            productName.replace("(","")
            productName.replace("!","")
            productName.replace("!!","")
            productName.replace("|","")
            productName.replace("*","")
            productName.replace("/"," ")
            productName.replace("\\"," ")
            productName.replace("-"," ")
            string = productName.lower().split()
            for s in string:
                if s=="aceh":
                    kwds.append("gayo")
                elif s=="sapan":
                    kwds.append("toraja")
                elif s =="gunung":
                    pass
                else:
                    kwds.append(s)
        
        kwordsArabica = pd.Series(kwds)
        keys = kwordsArabica.value_counts(dropna=True).keys().tolist()
        vals = kwordsArabica.value_counts(dropna=True).tolist()

        #Let's make a filter of words that's not related to origin
        filters = ["-","/","|","\\","kopi","gr","gram", "kg","biji","bubuk","arabica","arabika","single","origin","process","(",")","asli","&","biji/bubuk","dan","whole","giling","kasar","halus","by","coffee","manual", "dark", "brew" ,"sangrai","premium","liar","(biji/bubuk)","latte","paket","proses","bean","beans","roasted","(biji","100%","red","cold","lanang","super","+","round","black","medium","roast","peaberry"]

        filter_process = ["semi","washed","semi-washed", "wash", "full","washed","fully","full-washed","fully-washed","natural","honey","wine","fullwash"]

        for i in range(1,5001):
            filters.append(str(i))
            filters.append("%sg"%(i))
            filters.append("%skg"%(i))
            filters.append("%sgr"%(i))
            filters.append("%sgram"%(i))

        #Lets take only the most populated 20 origins 
        topOrigins = []
        h = []
        for i,k in enumerate(keys):
            if k not in filters and k not in filter_process:
                topOrigins.append(k)
                h.append(vals[i])
                
                if len(topOrigins)==20:
                    break
       
        #lets see how much this top 20 origins contribute to the arabica market total volumetotalVolume = 
        vols = []
        for i , origin in enumerate(topOrigins):
            if origin == "gayo":
                f = ["gayo","aceh"]
            elif origin == "toraja":
                f = ["toraja","sapan"]
            else:
                f = [origin]

            #Start slashing DF
            df = self.df_arabica.copy()
            logic = []
            for productName in df["ProductName"]:
                string = productName.lower().split()
                l = any(x in string for x in f)
                logic.append(l)

            df["logic"] = logic

            df = df[df.logic==1] 
            df["TotalVolume"] = df["ProductTotalSold"] * df["ProductWeight"]
            df = df.sort_values(by=["TotalVolume"], ascending=False)

            df.to_csv("./data_raw_ready/arabica/top20origins/%s_%s.csv"%(i,f[0]), index=False)
            
            #Sum the total volume of the origin
            vols.append(
                sum(df["TotalVolume"])
            )
        
        cmap = plt.cm.get_cmap("inferno",50)
        cols = []
        for v in vols:
            cols.append(
                cmap(
                    (v-min(vols))/(max(vols)-min(vols))
                )
            )

        med=15
        fig = plt.figure()
        ax = fig.add_axes([0.1, 0.2, 0.8, 0.55])
        ax2 = fig.add_axes([0.1, 0.9, 0.8, 0.05])

        #Colorbar properties
        norm = mpl.colors.Normalize(vmin=min(vols), vmax=max(vols))
        cb = plt.colorbar(mpl.cm.ScalarMappable(norm=norm, cmap=cmap),
             cax=ax2, orientation='horizontal'
        )
        cb.set_label(label='Total sold [kg]', size=12.5, weight='bold')
        cb.ax.tick_params(labelsize=12.5) 

        barlist = ax.bar(topOrigins,h,color="black")

        for i,bar in enumerate(barlist):
            bar.set_color(cols[i])

        ax.set_ylabel("#Products",fontsize=med)
        ax.tick_params(axis="both", labelsize=med)
        
        for tick in ax.get_xticklabels():
            tick.set_rotation(90)

        #Analyse sidikalang
        df_sidikalang = pd.read_csv("./data_raw_ready/arabica/top20origins/18_sidikalang.csv")
        avg_price = sum(df_sidikalang.ProductPrice/df_sidikalang.ProductWeight)/df_sidikalang.shape[0]
        
        fig = plt.figure()
        med = 15
        ax = fig.add_axes([0.1, 0.25, 0.6, 0.6])
        totVol = df_sidikalang.TotalVolume.iloc[:5]
        x = np.arange(0,5,dtype=np.int32)
        names = df_sidikalang.StoreName.iloc[:5]
        sizes = []

        ax.axhline(avg_price, color="red", linestyle="--", linewidth=1)
        ax.xaxis.set_ticks(x)
        ax.set_xticklabels(names)
        ax.set_ylabel("Specific price [thousand IDR/kg]",fontsize=med)
        ax.tick_params(axis="both", labelsize=med-2.5)

        for tick in ax.get_xticklabels():
            tick.set_rotation(90)
        ax.set_title("Top 10 Sidikalang Sellers")

        for i in range(len(names)):
            sizes.append(totVol[i]/10)
        
        specprice = df_sidikalang.ProductPrice.iloc[:5]/df_sidikalang.ProductWeight.iloc[:5]/1000
        scatter = ax.scatter(
            x,specprice,s=sizes
        )
        ax.set_ylim(50,200)

        #produce a legend with a cross section of sizes from the scatter
        handles, labels = scatter.legend_elements(prop="sizes", alpha=0.25, num=5)
        legend2 = ax.legend(handles, labels, loc="lower right", title="Volume sold [× 10 kg]")

        
        #Divide the dataframe into each post-process
                    
        #Categorise products into abovementioned processes
        WH = ["wethull","wet-hulled","wethulled","gilingbasah","gilbas","semiwash","semi-wash","semi-washed","semiwashed","semi","wet"]
        FW = ["fullwash","fullywashed","fullwashed","fullywash","gilbas","full","fully"]
        HN = ["honey","madu","puracepahoney"]
        NT = ["natural","banana"]
        CM = ["carbonic","maceration","carbonicmaceration","cm","avatara"]
        WN = ["wine"]
        LWK = ["luwak","kopiluwak"]
        EXP = ["experimental","extended","yeast","anaerob","yeast","telege","void","time","space","matter"]

        category = []
        for i, name in enumerate(self.df_arabica["ProductName"]):
            strings = name.lower()
            strings = strings.replace("(","")
            strings = strings.replace(")","")
            strings = strings.replace("/"," ")
            strings = strings.replace('"',"")
            strings = strings.replace("-"," ")
            strings = strings.replace(","," ")
            strings = strings.split()

            #Clean the words
            string = []
            for s in strings:
                s = s.replace("(","")
                s = s.replace(")","")
                s = s.replace("/","")
                s = s.replace('"',"")
                s = s.replace("-","")
                string.append(s)

            if any(x in string for x in WH) and not any(x in string for x in CM):
                category.append("WH")
            elif any(x in string for x in FW):
                category.append("FW")
            elif any(x in string for x in HN):
                category.append("HN")
            elif any(x in string for x in NT):
                category.append("NT")
            elif any(x in string for x in CM):
                category.append("CM")
            elif any(x in string for x in WN):
                category.append("WN")
            elif any(x in string for x in LWK):
                category.append("LWK")
            elif any(x in string for x in EXP):
                category.append("EXP")
            else:
                if any(x in string for x in ["pulu","kenawat","sidikalang","mandheling","lintong","mocca","musara","sumatran","kalaciri","sapan","mandailing","aceh","ciwidey","solok","kerinci","lues","gayo","toba","italian","tapian","washmelo","gayo","sumatera","sanggul","tiwus","lampung","enrekang","bengkulu","tolu","kabanjahe","simalungun","batak"]):
                    category.append("WH")      

                elif any(x in string for x in [
                    "bunisora","bajawa","preanger","kalosi","kintamani","wamena","manggarai","flores","papandayan","manglayang","wanoja","washed","ulian","aro","jackfruit","cocoa","peaberry","longberry","malabar","puntang","kolasi","kalosi","timur","mamasa","banyuwangi","wonosobo","temanggung","batur","toeman","temanggung","java","cikuray","irian","papua","biak","risi","puntang","ijen","pango","toraja","palintang","pangalengan","toraja","huta",
                    "shortbread","cotton","tirta","agung","far","sindoro","kaligua","arjuno","semeru","argapura","cipeuteuy","lestari","sukatani","lemar","cisurupan","kamojang","pitaloka","buntu","latimojong","karnataka","sumbawa","juria","foge","yuzu","cimenyan","wash"
                ]):
                    category.append("FW")  

                elif any(x in string for x in ["ethiopia","geisha","finca","kintamanis","brazil","kilimanjaro","impor","wendelboe","kenya","panama","guatemala","colombia","columbia","esmeralda","honduras","finca","kintamanis","halu","nicaragua","arumanis","argopuro","uganda","oranje","surprise","etiophia","kayo","gesha","costarica","colombian","tanzania","congo","salvador","elsalvador","diversa","guji","masaguara","seketip"]):
                    category.append("NT")
                
                elif any(x in string for x in ["cibereum","sirsak","luwu"]):
                    category.append("HN")

                elif any(x in string for x in ["gedong","strawberry","pineapple","kamala","melon","yunan"]):
                    category.append("EXP")  

                else:
                    if " ".join(string) == "sisola luwu special lot":
                        category.append("EXP")
                    else:
                        category.append("UC")

        self.df_arabica["Process"] = category
        
        for c in self.df_arabica.Process.unique():
            self.df_arabica[
                self.df_arabica["Process"]==c
            ].to_csv(
                "./data_raw_ready/arabica/byprocess/%s.csv"%(c),
                index=False
            )

        self.df_arabica_WH = self.df_arabica[
                self.df_arabica["Process"]=="WH"
        ]
        self.df_arabica_FW = self.df_arabica[
                self.df_arabica["Process"]=="FW"
        ]
        self.df_arabica_HN = self.df_arabica[
                self.df_arabica["Process"]=="HN"
        ]
        self.df_arabica_NT = self.df_arabica[
                self.df_arabica["Process"]=="NT"
        ]
        self.df_arabica_CM = self.df_arabica[
                self.df_arabica["Process"]=="CM"
        ]
        self.df_arabica_WN = self.df_arabica[
                self.df_arabica["Process"]=="WN"
        ]
        self.df_arabica_LWK = self.df_arabica[
                self.df_arabica["Process"]=="LWK"
        ]
        self.df_arabica_EXP = self.df_arabica[
                self.df_arabica["Process"]=="EXP"
        ]

        #Clean the uncategorised data from gusset
        self.df_arabica_UC = self.df_arabica[
                self.df_arabica["Process"]=="UC"
        ]
        self.df_arabica_UC = self.df_arabica_UC[
            ~self.df_arabica_UC["ProductName"].str.contains("|".join(
                [
                    "gusset","latte","affogato","camel","cappucino", "drink","es","float","iced","buttermilk","mocha","latte","ice","sugar","abc","koboy","hazelnut","gresik","vinacafe","cappucino","latte","gula","excelso","abc","white","rhum","kopsu","wayahe","cold","jamu", "vietnam", "berondong", "lelet", "good", "ginseng", "jantan", "bks", "stamina"
                ]
            ), case=False)
        ]
        self.df_arabica_UC.to_csv(
                "./data_raw_ready/arabica/byprocess/%s.csv"%("UC"),
                index=False
        )

        #Pie Chart (total products) vs pie chart (total volume) vs pie chart (valuation)
        #Pie chart 
        process = self.df_arabica.Process.unique()
        totalProducts = []
        totalVolume = []
        totalValuation = []
        i = 0
        j = 0
        for k,c in enumerate(process):
            df = self.df_arabica[
                self.df_arabica["Process"]==c
            ]

            #Append
            totalProducts.append(df.shape[0])
            totalVolume.append(
                sum(df.ProductTotalSold * df.ProductWeight)
            )
            totalValuation.append(
                sum(df.ProductTotalSold * df.ProductPrice)
            )

        i = np.where(process=="CM")[0][0]
        j = np.where(process=="EXP")[0][0]

        process_labels = process.tolist()

        totalValuation[i] = totalValuation[i]+totalValuation[j]
        totalVolume[i] = totalVolume[i]+totalVolume[j]
        totalProducts[i] = totalProducts[i]+totalProducts[j]
        process_labels[i] = "CM + EXP"

        process_labels.pop(j)
        totalValuation.pop(j)
        totalVolume.pop(j)
        totalProducts.pop(j)

        xplodeIDX = []
        for p in process_labels:
            if p=="CM + EXP":
                xplodeIDX.append(0.1)
            else:
                xplodeIDX.append(0)
        
        #Total products
        fig,ax = plt.subplots(1,3)
        ax[0].pie(
            totalProducts,labels=process_labels,explode = xplodeIDX, autopct='%1.1f%%',shadow=True,startangle=90,textprops={'fontsize': med-2.5}
        )
        ax[0].axis('equal')
        ax[0].set_title("Total products: %s "%(
               int(sum(totalProducts))
            ),fontsize=med
        )

        ax[1].pie(
            totalVolume,labels=process_labels, explode = xplodeIDX, autopct='%1.1f%%',shadow=True,startangle=90,textprops={'fontsize': med-2.5}
        )
        ax[1].axis('equal')
        ax[1].set_title("Market share based on volume.\nTotal volume: %s ton"%(round(sum(totalVolume)/1e3,2)),fontsize=med)


        ax[2].pie(
            totalValuation,labels=process_labels, explode = xplodeIDX, autopct='%1.1f%%',shadow=True,startangle=90,textprops={'fontsize': med-2.5}
        )
        ax[2].axis('equal')
        ax[2].set_title("Market share based on volume.\nTotal valuation: %s B·IDR"%(round(sum(totalValuation)/1e9,2)),fontsize=med)

        #Price point for each process #FIXME
        dfs = [self.df_arabica_WH, self.df_arabica_FW, self.df_arabica_HN, self.df_arabica_NT, self.df_arabica_CM, self.df_arabica_WN, self.df_arabica_LWK, self.df_arabica_EXP, self.df_arabica_UC]

        for j, df_ in enumerate(dfs):
            fig = plt.figure()

            ax = fig.add_axes([0.1, 0.3, 0.8, 0.6])   #plot 
            ax2 = fig.add_axes([0.05, 0.1, 0.9, 0.05]) #colorbar

            df_["SpecificPrice"] = df_.ProductPrice/df_.ProductWeight/1000
            df_ = df_[
                df_.StoreID != 930445
            ]

            meanprice = df_.SpecificPrice.mean()
            stdprice = df_.SpecificPrice.std()

            if j == 2:
                df_ = df_[
                    df_.SpecificPrice<1000
                ]
                heights, bins, patches = ax.hist(df_["SpecificPrice"],bins=250)
            else:
                heights, bins, patches = ax.hist(df_["SpecificPrice"], bins=250)

            if j == 2:
                print(heights, bins)
       
            #Get the total sold values in kg
            totalsold = []

            for i in range(len(bins)-1):
                lb = bins[i]
                ub = bins[i+1]
                df = df_[
                    (df_["SpecificPrice"] >= lb)&
                    (df_["SpecificPrice"] < ub)
                ]
                totalsold.append(
                    sum(df["ProductTotalSold"] * df["ProductWeight"])
                )

            try:
                assert(len(totalsold) == len(patches))
            except AssertionError:
                print(
                    "len total sold = %s , len patches = %s"%(len(totalsold), len(patches))
                )

            cm = plt.cm.get_cmap('RdYlBu_r',50)
            
            normalised_tot = []
            cols = []
            minima, maxima = min(totalsold), max(totalsold)

            for tot in totalsold:
                normalised_tot.append(
                    (tot-minima)/(maxima-minima)
                )
                cols.append(
                    cm((tot-minima)/(maxima-minima))
                )

            for i in range(len(patches)):
                patches[i].set_fc(cols[i])

            norm = mpl.colors.Normalize(vmin=minima, vmax=maxima)

            #Colorbar properties
            cb = plt.colorbar(mpl.cm.ScalarMappable(norm=norm, cmap=cm),
                cax=ax2, orientation='horizontal'
            )
            cb.set_label(label='Total sold [kg]', size=12.5, weight='bold')
            cb.ax.tick_params(labelsize=12.5) 

            #Finished plotting
            ax.set_xlabel("Coffee beans specific price [thousand IDR / kg]",fontsize=15)
            ax.set_ylabel("#Products",fontsize=15)
            ax.tick_params(axis='both',labelsize=15)
            if j == 2:
                ax.set_xlim(150,500)
            else:
                ax.set_xlim(0,meanprice+2*stdprice)
            ax.legend(fontsize=12.5)
            
                
            plt.show()

        #1st lets map how many origins are there
        for df_ in dfs:
            kwds = []
            
            for productName in df_["ProductName"]:
                #Delete all the punctuation and symbols
                productName.replace(")","")
                productName.replace("(","")
                productName.replace("!","")
                productName.replace("!!","")
                productName.replace("|","")
                productName.replace("*","")
                productName.replace("/"," ")
                productName.replace("\\"," ")
                productName.replace("-"," ")
                productName.strip("(")
                string = productName.lower().split()
                for s in string:
                    if s =="gunung":
                        pass
                    else:
                        kwds.append(s)
            
            kwordsArabica = pd.Series(kwds)
            keys = kwordsArabica.value_counts(dropna=True).keys().tolist()
            vals = kwordsArabica.value_counts(dropna=True).tolist()

            #Let's make a filter of words that's not related to origin
            filters = ["-","/","|","\\","kopi","gr","gram", "kg","biji","(",")","dan","bean","beans"]

            filter_process = []

            for i in range(1,5001):
                filters.append(str(i))
                filters.append("%sg"%(i))
                filters.append("%skg"%(i))
                filters.append("%sgr"%(i))
                filters.append("%sgram"%(i))

            #Lets take only the most populated 20 origins 
            topWords = []
            h = []
            for i,k in enumerate(keys):
                if k not in filters and k not in filter_process:
                    topWords.append(k)
                    h.append(vals[i])
                    
                    if len(topWords)==50:
                        break
        
            #lets see how much this top 50 words contribute to the arabica market total volumetotalVolume = 
            vols = []
            for i , word in enumerate(topWords):
                f = [word]

                #Start slashing DF
                df = df_.copy()
                logic = []
                for productName in df["ProductName"]:
                    string = productName.lower().split()
                    l = any(x in string for x in f)
                    logic.append(l)

                df["logic"] = logic

                df = df[df.logic==1] 
                df["TotalVolume"] = df["ProductTotalSold"] * df["ProductWeight"]
                df = df.sort_values(by=["TotalVolume"], ascending=False)

                #df.to_csv("./data_raw_ready/arabica/top20origins/%s_%s.csv"%(i,f[0]), index=False)
                
                #Sum the total volume of the origin
                vols.append(
                    sum(df["TotalVolume"])
                )
            
            cmap = plt.cm.get_cmap("inferno",50)
            cols = []
            for v in vols:
                cols.append(
                    cmap(
                        (v-min(vols))/(max(vols)-min(vols))
                    )
                )

            med=15
            fig = plt.figure()
            ax = fig.add_axes([0.1, 0.2, 0.8, 0.55])
            ax2 = fig.add_axes([0.1, 0.9, 0.8, 0.05])

            #Colorbar properties
            norm = mpl.colors.Normalize(vmin=min(vols), vmax=max(vols))
            cb = plt.colorbar(mpl.cm.ScalarMappable(norm=norm, cmap=cmap),
                cax=ax2, orientation='horizontal'
            )
            cb.set_label(label='Total sold [kg]', size=12.5, weight='bold')
            cb.ax.tick_params(labelsize=12.5) 

            barlist = ax.bar(topWords,h,color="black")

            for i,bar in enumerate(barlist):
                bar.set_color(cols[i])

            ax.set_ylabel("#Products",fontsize=med)
            ax.tick_params(axis="both", labelsize=med)
            
            for tick in ax.get_xticklabels():
                tick.set_rotation(90)

            plt.show()


    

if __name__ == '__main__':
    datadir = "./data_raw_ready"

    #Generate the data pool - save based on (1) Store and (2) CSV
    data = DataPool(datadir)
    data.genStoreDataPool()
    data.genProductDataPool() 

    #Start post processing
    data.cleanProductData()
    data.overallMarketSizeAnalysis()

    df_kopsus,df_espresso,df_specialty_arabica,df_robusta,df_robusta_arabica_blend = data.categoriseProduct()
    data.insightArabica()

    #data.pareto_analysis_overall_market()
    #data.marketInsightAnalysis()

    #print_stuff(df_kopsus,df_espresso,df_specialty_arabica,df_robusta,df_robusta_arabica_blend)

    #Analysing the market
    #data.pareto_analysis_overall_market()

    #1 overall market
    #data.marketInsightAnalysis()

    #2 kopsus espresso
    #data.insightEspressoKopsus()

    #3 arabica

    '''
    #Analyse stuff
    df_kopsus_espresso = pd.concat([df_kopsus,df_espresso],axis=0).drop_duplicates().reset_index(drop=True)

    #check data balance
    
    df_relevant = data.df_product_relevant
    includedID = []
    for df in [df_kopsus_espresso,df_specialty_arabica,df_robusta,df_robusta_arabica_blend]:
        for id in df["ID"]:
            includedID.append(id)
    
    df_omit = df_relevant[
        ~df_relevant["ID"].isin(includedID)
    ]

    df_omit.to_csv("./data_raw_ready/omitted.csv",index=False)
    '''


    



    
    


