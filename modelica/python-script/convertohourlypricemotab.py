import numpy as np

fn = "/home/philgun/solartherm-particle/SolarTherm/Data/Prices/aemo_vic_2014.motab"
f = open(fn,'r')
next(f)
next(f)

T = []
P = []

iters = 0
for line in f:
	if iters%2 == 0:
		time,price = line.split(',')
		P.append(float(price))
		T.append(float(time))
	iters+=1

hour = []
iterator = 0
for i in range(len(T)):
	d = T[i]/3600 - iterator * 24
	hour.append(d)
	if i%24 == 0 and i is not 0:
		iterator += 1

for i in range(len(hour)):
	h = hour[i]
	if h >=18:
		P[i] = P[i] * 2

motab = []
motab.append("#1")
motab.append("double prices(8760,2)")
for i in range(len(T)):
	motab.append("%s,%s"%(int(T[i]),P[i]))

np.savetxt("manipulatedhourly.motab",motab,fmt="%s")
