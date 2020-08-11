import numpy as np
import pandas as pd

fn = "/home/philgun/solartherm-particle/SolarTherm/Data/Prices/aemo_vic_2014.motab"
f = open(fn,'r')
next(f)
next(f)

T = []
P = []

for line in f:
	time,price = line.split(',')
	P.append(float(price))
	T.append(float(time))

hour = []
iterator = 0
for i in range(len(T)):
	d = T[i]/3600 - iterator * 24
	hour.append(d)
	if i%48 == 0 and i is not 0:
		iterator += 1

for i in range(len(hour)):
	h = hour[i]
	if h >=18:
		P[i] = P[i] * 2

motab = []
motab.append("#")
motab.append("double prices(17520,2)")
for i in range(len(T)):
	motab.append("%s,%s"%(int(T[i]),P[i]))

np.savetxt("manipulated.motab",motab,fmt="%s")
		

