from urllib.parse import urlencode
from urllib.parse import urlparse, parse_qsl
import requests
import apikey
import time
import pprint
import math
import numpy as np
import pandas as pd

#Finding coordinates,placeID and territory boundaries from a given address
def extract_lat_long(address_or_postalcode,dtype="json"):
    dtype = "json"
    endpoint = "https://maps.googleapis.com/maps/api/geocode/%s"%(dtype)
    params = {'address':address_or_postalcode,'key':apikey.apikey}
    url_params = urlencode(params)
    url = "%s?%s"%(endpoint,url_params)
    r = requests.get(url)
    if r.status_code not in range(200,299):
        return {}
    try:
        lat,long = r.json()['results'][0]['geometry']['location']['lat'],r.json()['results'][0]['geometry']['location']['lng']
        placeID = r.json()['results'][0]['place_id']
        boundSW = r.json()['results'][0]['geometry']['bounds']['southwest']
        boundNE =  r.json()['results'][0]['geometry']['bounds']['northeast']
    except: 
        pass
    return lat,long,placeID,boundSW,boundNE

#Nearby search
def nearbysearch(lat,long,radius,keyword='Coffee Shop',api_key=apikey.apikey):
    json_master = []
    places_endpoint_2 = "https://maps.googleapis.com/maps/api/place/nearbysearch/json"
    params_places_2 = { 'key' : api_key,
                        'location': "%s,%s"%(lat,long),
                        'radius': radius,
                        'keyword': keyword}

    params_places_2_encoded = urlencode(params_places_2)
    url = "%s?%s"%(places_endpoint_2,params_places_2_encoded)
    r2 = requests.get(url)
    json_master.append(r2.json())
    keys = r2.json().keys()
    print(keys)
    while 'next_page_token' in keys:
        token = r2.json()['next_page_token']
        url ="%s?pagetoken=%s&key=%s"%(places_endpoint_2,token,api_key)
        time.sleep(5)
        r2 = requests.get(url)
        json_master.append(r2.json())
        keys = r2.json().keys() 
        print("next token:",keys)      
    return json_master

#Convert from delta latitude longitude to meter
def collection_lat_long(north,east,south,west,radius):
    deltaDeg = radius / 111320 #https://en.wikipedia.org/wiki/Decimal_degrees
    lat_series = []
    lon_series = []
    latlist = np.arange(north-deltaDeg,south-deltaDeg,-2*deltaDeg)
    lonlist = np.arange(east-deltaDeg,west-deltaDeg,-2*deltaDeg)
    for lat in latlist:
        for lon in lonlist:
            lat_series.append(lat)
            lon_series.append(lon)
    return lat_series,lon_series

lat,long,placeID,boundSW,boundNE = extract_lat_long("Jakarta Selatan")
keywords = "Starbucks"
fnres = "Starbucks.csv"
radius = 500

north = boundNE['lat']
east = boundNE['lng']
south = boundSW['lat']
west = boundSW['lng']

#Obtain the coordinates inside boundary in respect of the search radius
lat_series,lon_series = collection_lat_long(north,east,south,west,radius)

print(len(lat_series))
#Search nearby coffee shop in lat_series,lon_series coordinates with respect of radius of search
iter = 0
json_master = []

for i in range(len(lat_series)):
    lati = lat_series[i]
    longi = lon_series[i]
    res = nearbysearch(lati,longi,radius,keywords)
    json_master.append(res)
    print(len(json_master))
    iter += 1
    print("json num:",iter)


#Post processing data
name = []
lat = []
lon = []
rating = []
numberofuser = []
vicinity = []
for i in range(len(json_master)):
    for j in range(len(json_master[i])):
        for k in range(len(json_master[i][j]['results'])):
            data = json_master[i][j]['results'][k]

            n = data['name']
            vic = data['vicinity']

            similar = 0
            for l in range(len(name)):
                if n == name[l] and vic == vicinity[l]:
                    similar += 1
            
            if similar == 0:
                name.append(n)

                rate = data['rating']
                rating.append(rate)

                numrate=data['user_ratings_total']
                numberofuser.append(numrate)

                latitude,longitude = data['geometry']['location']['lat'],data['geometry']['location']['lng']
                lat.append(latitude)
                lon.append(longitude)

                vic = data['vicinity']
                vicinity.append(vic)

df = pd.DataFrame(zip(name,rating,numberofuser,vicinity,lat,lon),columns=['Name','Rating','NumberOfUser','Address','lat','lon'])

df.to_csv(fnres,index=False)

#base endpoint:
#https://maps.googleapis.com/maps/api/place/nearbysearch/json?pagetoken=%@&key=MY_API_KEY",nextPageToken
