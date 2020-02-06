import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
from scipy.optimize import curve_fit
from sklearn.metrics import r2_score

# import data

x = pd.read_csv('5-m-s.csv')
print('Data')
print(x.head())

#extract vectors

area = x['Heliostat_area(m2)'].values
spec_cost = x['HeliostatCost(USD/m2)'].values

#define a function

def costf(area,c0,c1,c2,c3,c4,c5,c6,c7):
	return c0*area**7 + c1*area**6 - c2 * area**5 + c3 * area**4 - c4 * area**3 + c5 * area**2 - c6 * area + c7

#find optimal parameters
p0 = [-6.1, 4.7, -1.5, 0.0002, -0.022, 1.13, -25.771, 464.03]	#initial guess
c,cov = curve_fit(costf,area,spec_cost,p0)	#curve_fit(function_name,x,y,initial_guess)

#print optimal parameters
print('Optimal Parameters')
print(c)

#print prediction
spec_cost_p =costf(area,c[0],c[1],c[2],c[3],c[4],c[5],c[6],c[7]) 

#calcualre r^2
print('R^2: ' + str(r2_score(spec_cost,spec_cost_p)))

#plot data and prediction
plt.figure()
plt.title('Specific cost (USD/m2) vs Area for wind speed 5m/s')
plt.plot(area,spec_cost,'r--')
plt.plot(area,spec_cost_p,'b--')
plt.xlabel('Area (m2)')
plt.ylabel('Specific Cost(USD/m2)')
plt.show
