import json

with open("tokpedData_kwords_coffee.json") as json_data:
 	data = json.loads(json_data.read())


#for k in ["Kopi B-rong"]:
#		try:
#			print(data[k])	
#		except:
#			pass
#print(len(data))
	#del data[k]

for k in ["Coffee Man","Moer'S Coffee","KOZI COFFEE ROASTER","Blanco Coffee","Ancestors Coffee Roaster","Seniman Coffee","Tanamera Coffee Bali","Burgayo Coffee","Malotong Toraja Coffee","Garasco Coffee","Saiki Coffee & Snacks","Coffee Viture","Sagiro Coffee","7 Speed Coffee","Coffee X Roastery","Bhumi Coffee","ONEFINE COFFEE & TOOLS","Wheels Coffee Roasters"]:
	try:
		del(data[k])
	except:
		pass

	

with open('tokpedData_kwords_coffeep4top5.json', 'w') as data_file:
    data = json.dump(data, data_file)
