from selenium import webdriver
from selenium.webdriver.firefox.options import Options
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from bs4 import BeautifulSoup
import time
import requests
import lxml
import numpy as np
import pprint
import json
import time
user_agent = 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/83.0.4103.116 Safari/537.36'
'''
https://stackoverflow.com/questions/50642308/webdriverexception-unknown-error-devtoolsactiveport-file-doesnt-exist-while-t
'''

kwords = "gula aren"
fjson = "tokpedData_kwords_%s.json"%(kwords)

options = Options()
options.add_argument("--start-maximized")
options.headless = True
options.add_argument("--width=1920")
options.add_argument("--height=1080")
#options.add_argument('--no-sandbox')
#options.headless('headless')
#options.add_argument('--disable-infobars')
#options.add_argument('--disable-extensions')
#options.add_argument('--disable-dev-shm-usage')
#options.add_argument('--remote-debugging-port=9222')

pp = pprint.PrettyPrinter()

class crawler(object):
    def __init__(self,bs):
        self.bs = bs
        self.mainclass = self.bs.find(id="zeus-root")
    
    def getURLShop(self):
        self.shopContainer = self.mainclass.find(class_="css-3lpl5n").find(class_="css-jau1bt").find(class_="css-1c82svt").find(class_="css-rjanld").find(class_="css-w8s582").find(class_="css-dle711")

        self.shopURL = []
        for a in self.shopContainer:
            url = a.find(class_="css-r9pe88").find('a',class_='css-1tuarat',href=True)['href']
            self.shopURL.append(url)
        return self.shopURL

class merchant(object):
    def __init__(self,soup_merchant):
        self.soup_merchant = soup_merchant
        self.main_class = self.soup_merchant.find(id="zeus-root")
        self.data = {}

    def getStoreInfo(self):
        #Method to scrap essential overview data from one merchant
        self.storeInfoContainer = self.main_class.find_all("div",class_="css-1p0pkw3 e1ufc1ph0")

        if len(self.storeInfoContainer) > 0:
            self.storeInfoContainer = self.storeInfoContainer[-1]

            #Scrape the store name and location
            self.storeName = self.storeInfoContainer.find_all("h1", class_="css-1i6886t")[-1].text
            self.location = self.storeInfoContainer.find_all("p", class_="css-dxunmy-unf-heading e1qvo2ff8")[-1].text

            #Scrape the overview sales of a store
            self.storeOverviewSales = self.main_class.find_all("div",class_="css-1pzufdd e1ufc1ph0")[-1]
            self.soldProducts = self.storeOverviewSales.find_all("h2",class_="css-lzwncz-unf-heading e1qvo2ff2")

            if len(self.soldProducts) == 0:
                self.soldProducts = 0.0
            else:
                self.soldProducts = self.soldProducts[-1].text
                #Since the overview sales of a store is stored using string e.g. 113.5K, I clean it
                multiplier = 1
                alphabet = "A"
                for c in self.soldProducts:
                    if c == "K":
                        multiplier=1000
                        alphabet = "K"
                    elif c == "M":
                        multiplier=1000000
                        alphabet="M"
                
                self.soldProducts = self.soldProducts.strip(alphabet)
                self.soldProducts = float(self.soldProducts) * multiplier

            #Scrape the star (rating) of a store
            self.storeStar = self.storeOverviewSales.find_all("h2",class_="css-rfs3ih-unf-heading e1qvo2ff2")
            
            if len(self.storeStar) == 0:
                self.storeStar = 0.0
            else:
                self.storeStar = self.storeStar[-1].text
                self.storeStar = float(self.storeStar)

            #Scrape how many reviews the store has got
            self.review = self.storeOverviewSales.find_all("h6",class_="css-1s96mum-unf-heading e1qvo2ff6")
            
            if len(self.review) == 0:
                self.review = 0
            else:
                self.review = self.review[-1].text
                if self.review == "Belum ada ulasan":
                    self.review = 0.0
                else:
                    self.review = self.review.strip("() Ulasan")
                    self.review = float(self.review)

            #Scrape since when the store has open fo business
            self.etcContainer = self.main_class.find_all("div",class_="css-1gp0czb epavnfa0")
            
            #If since is available
            if len(self.etcContainer)>0:
                for e in self.etcContainer:
                    string = e.text
                    lenstring = len(string)
                    i = 0
                    for i in range(lenstring-10):
                        chars = string[i:i+10]
                        if ''.join(chars) == "Buka Sejak":
                            break
                self.since = string[i+10:]    
            else:
                self.since = "NA"
        else:
            self.storeName = "NA"

    def getProductLinks(self):
        self.productClasses = self.soup_merchant.find_all("div", class_="css-1sn1xa2")
        self.productLinks = []
        for a in self.productClasses:
            a = a.find_all("div",class_="css-1ehqh5q")
            element_of_a = a[-1]
            productURL = element_of_a.find('a')['href']
            self.productLinks.append(productURL)
        return self.productLinks

    def scrapeProductData(self,merchantDict):
        #Start looping through the products
        if len(self.productLinks) > 0:
            for i in range(len(self.productLinks)):
                pl = self.productLinks[i]

                print(pl)

                #Dumpt last product link
                with open("lastProduct.txt","w") as f:
                    f.write(pl)

                #Launch chrome
                browser = webdriver.Firefox(options=options)
                     
                browser.get(pl)

                #Pause Chrome to let it load
                time.sleep(3)

                #scrolldown(Chrome)
                
                #Take the HTML data
                res_product = browser.execute_script('return document.documentElement.outerHTML')
            
                #create BS object
                bs_product = BeautifulSoup(res_product, 'html5lib')

                #Close webdriver
                browser.quit()

                #Start scrapping product data
                self.productMainClass = bs_product.find(id="zeus-root")

                #If id: zeus-root is None try to reload the web page and scrape the product again
                itr = 1
                while self.productMainClass == None or len(self.productMainClass) == 0:
                    print(
                        "id zeus-root main class is None for product with link : %s \n Try to reload the page"%(pl)
                    )
                    browser = webdriver.Firefox(options=options)
                    browser.get(pl)
                    time.sleep(3)
                    res_product = browser.execute_script('return document.documentElement.outerHTML')
                    bs_product = BeautifulSoup(res_product, 'html5lib')
                    self.productMainClass = bs_product.find(id="zeus-root")
                    browser.quit()
                    itr += 1
                    if itr == 5:
                        break
				
				#If page is successfully opened: do stuff, otherwise dont do anything
                if self.productMainClass is not None:
                    if len(self.productMainClass) > 0:	
                        #Do stuff	
                        self.productInfoContainer = self.productMainClass.find_all(
                            "div",attrs={"id":"pdp_comp-product_content"}
                        )

                        print(self.productInfoContainer)

                        #If len productInfoContainer is 0, reload page and re-do everything again
                        itr = 1
                        while len(self.productInfoContainer) == 0:
                            print(
                                "id: pdp_comp-product_content class is zero, try to reload, attempt number %s. Product links: %s"%(itr,pl)
                            )
                            browser = webdriver.Firefox(options=options)
                            browser.get(pl)
                            time.sleep(3)
                            res_product = browser.execute_script('return document.documentElement.outerHTML')
                            bs_product = BeautifulSoup(res_product, 'html5lib')
                            self.productMainClass = bs_product.find(id="zeus-root")
                            try:
                                self.productInfoContainer = self.productMainClass.find_all(
                                    "div",attrs={"id":"pdp_comp-product_content"}
                                )
                            except:
                                "calling productInfoContainer was error"
                            browser.quit()
                            itr+=1
                            if itr==5:
                                break
                        
                        #After 5 attempts to open the web page --> break. If page is opened, do stuff, otherwise don't do anything 
                        if len(self.productInfoContainer) > 0:

                            self.productInfoContainer = self.productInfoContainer[-1]

                            #Product Name
                            productName = self.productInfoContainer.find_all("h1",class_="css-v7vvdw")[-1].text

                            #Qty sold
                            test = self.productInfoContainer.find(text="Terjual")

                            if test is not None:
                                #If the product has been sold
                                soldQty = self.productInfoContainer.find_all("div",attrs={"data-testid" : "lblPDPDetailProductSoldCounter"})[-1].text
                                soldQty = soldQty.replace("Terjual ","")

                                if "rb" in soldQty:
                                    soldQty = soldQty.replace("rb","")
                                    soldQty = soldQty.replace(",",".")
                                    soldQty = float(soldQty) * 1000
                                else:
                                    soldQty = soldQty.replace(".","")
                                    soldQty = float(soldQty)
                            else:
                                #If the product has not sold yet
                                soldQty = 0

                            #Product's rating
                            productStar = self.productInfoContainer.find_all("span",class_="main",attrs={"data-testid":"lblPDPDetailProductRatingNumber"})

                            if len(productStar) > 0:
                                #If product has been rated
                                productStar = float(productStar[-1].text)
                            else:
                                #If product has not been rated
                                productStar = 0.0

                            #Price
                            price = self.productInfoContainer.find_all("div", class_="price",attrs={"data-testid":"lblPDPDetailProductPrice"})[-1].text

                            #Strip Rp.
                            price = price[2:]

                            #Strip .
                            price = price.replace(".","")

                            #Change dtype from string to float
                            price = float(price)

                            #Scrap number of reviews the product has got
                            rev = self.productInfoContainer.find_all("span",attrs={"data-testid":"lblPDPDetailProductRatingCounter"})

                            if len(rev) > 0:
                                #If the product has been reviewed
                                rev = rev[-1].text
                                rev = rev.replace(" ulasan","")
                                rev = rev.replace("(","")
                                rev = rev.replace(")","")

                                if "rb" in rev:
                                    rev = rev.replace("rb","")
                                    rev = rev.replace(",","")
                                    rev = int(int(rev) * 1000)
                                else:
                                    rev = rev.replace(".","")
                                    rev = int(rev)
                            else:
                                #If the product has not been reviewed
                                rev = int(0)

                            #Scrap the weight of the product
                            self.productWeightContainer = self.productMainClass.find_all(attrs={"data-testid":"lblPDPInfoProduk"})[-1].find_all("li")

                            weight = -1234.0
                            for a in self.productWeightContainer:
                                aa = a.find_all("span")
                                for b in aa:
                                    t = b.text
                                    if "Gram" in t:
                                        #If the HTML.text contains "Gram", means it is the right text we want to scrap
                                        t = t.replace(" Gram","")
                                        t = t.replace("Berat: ","")
                                        t = t.replace(".","")
                                        
                                        #Change the dtype from string to float
                                        try:
                                            weight = float(t)
                                        except:
                                            weight = 0.0
                            

                            #Category
                            category = "NA"
                            gg = []
                            for c in self.productWeightContainer:
                                cc = c.find_all("a")
                                for dd in cc:
                                    if dd !=None:
                                        strings = dd.text
                                        gg.append(strings)

                            #gg[0] = product category (universal categorisation in Tokopedia)
                            #gg[1] = product shelf (not interested in this one since it is store-specific)
                            cat = gg[0]

                            #If the category of the product is cofee beans, then substract the weight of the container. In Tokopedia most of the merchants use 100 gram container
                            #if cat == "Biji Kopi":
                            #weight = weight - 100.0           

                            #Create a dictionary inside store name products to store data related to 1 product
                            merchantDict[self.storeName]["Products"][productName] = {
                                "Product total sold":soldQty,
                                "Product stars": productStar,
                                "Product price": price,
                                "Product reviews": rev,
                                "Product URL":pl,
                                "Product net weight" : weight,
                                "Product category": cat
                            }
        
                        #Test print
                        #pp.pprint(merchantDict)

                #Dump the data
                with open(fjson,"w") as f:
                    json.dump(merchantDict, f)
        
#Function to scroll down the web
def scrolldown(driver):
    lastHeight = driver.execute_script("return document.body.scrollHeight")

    while True:
        length = 0
        driver.execute_script("window.scrollTo(0, document.body.scrollHeight);")

        #Give chrome time to load!
        time.sleep(1)
        
        new_height = driver.execute_script("return document.body.scrollHeight")
        if new_height == lastHeight:
            break
        lastHeight = new_height
           
if __name__=='__main__':
    baseURL = 'https://www.tokopedia.com/'

    PAGES = np.arange(1,8,1)

    #Dictionary to store everything
    masterdata = {}

    for page in PAGES:        
        URL = baseURL+"search?page=%s&q=%s&st=shop"%(int(page),kwords)
       
        #Launch chrome
        browser = webdriver.Firefox(options=options)
        browser.get(URL)
        scrolldown(browser)
        time.sleep(3)
        res = browser.execute_script('return document.documentElement.outerHTML')
        browser.quit()
                
        bs = BeautifulSoup(res, 'html5lib')
        spider = crawler(bs)
        shopURL = spider.getURLShop()
        
        #Start looping from the retrieved shop URL
        for i in range(len(shopURL)):
            #Dump last store link
            with open("lastStore_kwords_%s.txt"%(kwords),"w") as f:
                f.write(shopURL[i])

            #Write what page and store is being scrapped for checkpoint
            with open("scrappingPage_kwords_%s.txt"%(kwords),"w") as g:
                g.write("%s,%s"%(str(page),str(i)))

            browser = webdriver.Firefox(options=options)
            browser.get(shopURL[i])
            scrolldown(browser)
            res_merchant = browser.execute_script('return document.documentElement.outerHTML')
            browser.quit()
            
            #create BS object
            bs_merchant = BeautifulSoup(res_merchant, 'html5lib')

            shop = merchant(bs_merchant)
            shop.getStoreInfo()

            #Create a dictionary inside a dictionary for each store
            if shop.storeName is not "NA":
                masterdata[shop.storeName] = {}

                #Populate the dictionary
                masterdata[shop.storeName] = {
                    "Location":shop.location,
                    "Since": shop.since,
                    "Number of sales": shop.soldProducts,
                    "Stars":shop.storeStar,
                    "Reviews":shop.review
                }

                #Into the merchant dict, insert another dict for storing products data
                masterdata[shop.storeName]["Products"] = {}

                print(shopURL[i])

                print("\n\n\n\n\n")
                
                #Get product links
                shop.getProductLinks()

                #Scrap product data
                shop.scrapeProductData(masterdata)   

                print("\n\n\n\n\n")

            



            
            
