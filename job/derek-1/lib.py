from scipy.optimize import minimize
import numpy as np
import pandas as pd
import os
import math
import itertools
from itertools import combinations, permutations
import matplotlib.pyplot as plt 
import seaborn as sns

def gps_solve(distances_to_station, stations_coordinates):
	def error(x, c, r):
		return sum([(np.linalg.norm(x - c[i]) - r[i]) ** 2 for i in range(len(c))])

	l = len(stations_coordinates)
	S = sum(distances_to_station)
	# compute weight vector for initial guess
	W = [((l - 1) * S) / (S - w) for w in distances_to_station]
	# get initial guess of point location
	x0 = [sum(W[i] * stations_coordinates[i] for i in range(l))]
	# optimize distance from signal origin to border of spheres
	res = minimize(error, x0, args=(stations_coordinates, distances_to_station), method='Nelder-Mead',tol=1e-6)
	return res.x

def generateRef():
	latitude = np.arange(0,1300,200)
	longitude = np.arange(100,1300,200)
	ref = []
	for lat in latitude:
		for lon in longitude:
			a = [lat,lon]
			ref.append(a)
	latitude = np.arange(1400,1900,200)
	longitude = np.arange(500,1300,200)
	for lat in latitude:
		for lon in longitude:
			a = [lat,lon]
			ref.append(a)	
	ref = list(np.array(ref))
	return ref

def generateTest():
	test = np.arange(50,1250,100)
	test2 = np.arange(150,1150,100)

	ref = []
	for i in test:
		for j in test2:
			ref.append([i,j])

	test = np.arange(1250,1850,100)
	test2 = np.arange(550,1150,100)

	for i in test:
		for j in test2:
			ref.append([i,j])
	return ref

def importData(fn):
	beacon=[]
	for i in range(1,25):
		a = 'Beacon'+ str(i)
		beacon.append(a)
	df = pd.read_excel(fn,sheet_name=beacon[0])
	rows = len(df)-1
	cols = len(df.columns)-2
	data_all = []
	iterator=0
	for name in beacon:
		df = pd.read_excel(fn,sheet_name=name)
		raw = df.to_numpy()
		n = np.zeros((rows,cols))
		for i in range (rows):
			for j in range (cols):
				n[i,j] = raw[i+1,j+2]

		data_all.append(n)
		iterator +=1
		print("Beacon%d done!"%(iterator))
	return data_all

def triangulation(x1,y1,r1,x2,y2,r2,x3,y3,r3):
  A = 2*x2 - 2*x1
  B = 2*y2 - 2*y1
  C = r1**2 - r2**2 - x1**2 + x2**2 - y1**2 + y2**2
  D = 2*x3 - 2*x2
  E = 2*y3 - 2*y2
  F = r2**2 - r3**2 - x2**2 + x3**2 - y2**2 + y3**2
  print("A:",A)
  print("B:",B)
  print("C:",C)
  print("D:",D)
  print("E:",E)
  print("F:",F)

  x = (C*E - F*B) / (E*A - B*D)
  y = (C*D - A*F) / (B*D - A*E)
  return x,y

def genClosestIndex(index,distanceData,training_coordinate,numRef):
	distance = []
	index2 = []
	for i in range(len(training_coordinate)):
		distance.append(distanceData[index,i])
		index2.append(i)

	d = pd.DataFrame(zip(index2,distance),columns=["index","distance"])
	d = d.sort_values("distance") #sort reference point from closest to farthest from the test point

	index_smallest = []
	for i in range(numRef): #get a list of index of the numRef closest reference point to the test point 
		index_smallest.append(d["index"].iat[i])
	
	assert(index_smallest[0]==d["index"].iat[0])
	return index_smallest

def genDistanceData(test_coordinate,training_coordinate):
	distanceData = np.zeros((len(test_coordinate),len(training_coordinate)))
	for i in range(len(test_coordinate)):
		for j in range(len(training_coordinate)):
			xTrain,yTrain = training_coordinate[j]
			xTest,yTest = test_coordinate[i]
			delta_x = abs(xTrain - xTest)
			delta_y = abs(yTrain - yTest)
			r = math.sqrt(delta_x**2 + delta_y**2)
			distanceData[i,j] = r
	assert(len(test_coordinate) * len(training_coordinate) == distanceData.shape[0]*distanceData.shape[1])
	return distanceData

def genDistanceReady(index_smallest,dataAll,indexTestPoint,numData):
	refAll = np.zeros((24,len(index_smallest)))
	for i in range(24): # ==> index of Beacon number
			for k in range(len(index_smallest)): #==> index of smallest_index
				refAll[i,k] = dataAll[i][indexTestPoint,index_smallest[k]]

	a=[]
	for i in range(refAll.shape[1]):
		raw = refAll[:,i] #==> take each column inside refAll and make it a list to be sorted
		raw_sorted = sorted(raw)
		a.append(raw_sorted[0:numData])
	return a

def genCombi(numRef):
	l = [i for i in range(numRef)]
	subset = list(combinations(l,3)) #==> since using triangulation, we use 3 elements in each combination
	return subset

def genCartesian(numData):
	l = [i for i in range(numData)] 
	ID = [p for p in itertools.product(l,repeat=numData)]
	return ID

def genPosition(fn):
	f = open(fn,'r')
	next(f)
	beacon_coordinate = []
	for line in f:
		x,y = line.split(',')
		beacon_coordinate.append([float(x),float(y)])
	return beacon_coordinate

def genRSIData(fn):
	RSI = np.genfromtxt(fn,delimiter=',')
	return RSI

def test():
	print('Test script start!')
	stations = [[1,1], [0,1], [1,0], [0,0]]
	stations = np.array(stations)
	stations = list(stations)
	distances_to_station = [0.1, 0.5, 0.5, 1.3]
	assert(len(distances_to_station) == len(stations))
	a = gps_solve(distances_to_station, stations)
	assert(a[0] > 0.8 and a[0] < 0.805)
	print('All Good!')

if __name__ == "__main__":
	MAEX = []
	MAEY = []
	cwd = os.getcwd()
	os.chdir(cwd)
	for i in range(156):
		fn = "./result/titik_%d/MAEX.txt"%(i)
		x = np.loadtxt(fn,dtype=float)
		MAEX.append(x)
		fn = "./result/titik_%d/MAEY.txt"%(i)
		y = np.loadtxt(fn,dtype=float)
		MAEY.append(y)

	fontsize=15
	plt.figure()
	a = sns.distplot(MAEX,hist=True,bins=10,hist_kws=dict(edgecolor="k", linewidth=2))
	figname = "PDF_MAEX.png"
	titlename = "PDF MAEX Total"
	plt.title(titlename,fontsize=fontsize)
	plt.xlabel("MAE x [cm]",fontsize = fontsize)
	plt.ylabel("PDF",fontsize = fontsize)
	plt.savefig(figname,bbox_inches='tight')
	plt.show()

	plt.figure()
	a = sns.distplot(MAEY,hist=True,bins=10,hist_kws=dict(edgecolor="k", linewidth=2))
	figname = "PDF_MAEY.png"
	titlename = "PDF MAE y Total"
	plt.title(titlename,fontsize=fontsize)
	plt.xlabel("MAE y [cm]",fontsize = fontsize)
	plt.ylabel("PDF",fontsize = fontsize)
	plt.savefig(figname,bbox_inches='tight')
	plt.show()