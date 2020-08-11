from selenium import webdriver
from bs4 import BeautifulSoup
import time
import requests
from pprint import pprint

def getMerchantName(resSoup):
    mainclass = resSoup.find(id='zeus-root')
    mainclass = mainclass.find('div',class_='css-3lpl5n')
    mainclass = mainclass.find('div',class_='css-1jdotmr')
    mainclass = mainclass.find('div',class_='css-1jk3zjc')
    mainclass = mainclass.find('div',class_='css-tebd5e')
    mainclass = mainclass.find('div',class_='css-1adbhz8 e1ufc1ph1')
    mainclass = mainclass.find('div',class_='css-u00746 e1ufc1ph0')
    mainclass = mainclass.find('div',class_='css-drikti e1ufc1ph1')
    shopName = mainclass.find('a',class_='css-xmjuvc').text
    return shopName

def getMerchantLink(resSoup):
    mainclass = resSoup.find(id='zeus-root')
    mainclass = mainclass.find('div',class_='css-3lpl5n')
    mainclass = mainclass.find('div',class_='css-1jdotmr')
    mainclass = mainclass.find('div',class_='css-1jk3zjc')
    mainclass = mainclass.find('div',class_='css-tebd5e')
    mainclass = mainclass.find('div',class_='css-1adbhz8 e1ufc1ph1')
    mainclass = mainclass.find('div',class_='css-u00746 e1ufc1ph0')
    mainclass = mainclass.find('div',class_='css-drikti e1ufc1ph1')
    linkShop = mainclass.find('a',class_='css-xmjuvc',href=True)
    linkShop = linkShop['href']
    return linkShop

def getProductWrapper(soup):
    mainbody = soup.find(id='zeus-root')
    upperclass = mainbody.find('div',class_='css-3lpl5n')
    middleclass = upperclass.find('div',class_ = 'css-jau1bt')
    lowclass = middleclass.find('div',class_ ='css-rjanld')
    productwrapper = lowclass.find('div',class_ = 'css-jza1fo')
    return productwrapper

def getInfoClass(element_in_productwrapper):
    infoclass_ = element_in_productwrapper.find('div',class_='css-oynulx').find('div',class_='css-o1ozdj').find('div',class_='css-wlcnlb').find('div',class_='unf-card css-rs4sgo-unf-card eue3g1e0').find('div',class_='pcv3__container css-1bd8ct').find('div',class_='css-7fmtuv')
    return infoclass_

def getFollowers(soup):
    soup = soup.find(id='zeus-root')
    soup = soup.find('div',class_='css-3lpl5n')
    soup = soup.find(class_='css-1geyxdk')
    soup = soup.find(class_='css-1gwt8mt')
    soup = soup.find(class_='css-zh3s3g egtln8t0')
    soup = soup.find(class_='css-drikti e1ufc1ph1')
    soup = soup.find(class_='css-3jbqnj e1ufc1ph0')
    soup = soup.find(class_='css-drikti e1ufc1ph1')
    soup = soup.find(class_='css-1p0pkw3 e1ufc1ph0')
    soup = soup.find('ul',class_='css-1k56vr7')
    i = 0
    for a in soup:
        i+=1
        if i==3:
            followers = a.find('h6',class_='css-jsut4p-unf-heading e1qvo2ff6').text
    
    if 'K' in followers:
        multiplier = 1000
        s = followers.split('K')

    elif 'M' in followers:
        multiplier = 1000000
        s = followers.split('M')
    else:
        multiplier = 1
        s = followers.split(' ')
        
    num = s[0]
    f = float(num) * multiplier

    return f
    