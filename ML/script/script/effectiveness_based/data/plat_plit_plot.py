import pandas as pd
import numpy as np
from DyMat import DyMatFile as D
import matplotlib.pyplot as plt

def plot1():
	data = D("11days_with_Regression.mat")

	der_a = data.data("der_a")
	der_b = data.data("der_b")
	der_c = data.data("der_c")
	der_d = data.data("der_d")

	a = data.data("params_a")
	b = data.data("params_b")
	c = data.data("params_c")
	d = data.data("params_d")

	time = data.abscissa("params_a",valuesOnly=True)

	plt.scatter(
		time,der_c,label="der_c",s=1
	)
	plt.scatter(
		time,c,label="a",s=1
	)
	plt.legend()
	plt.show()


def plot2():
	df = pd.read_csv("/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/data_equilibrium.csv")

	#Separate charging from discharging
	df_ch = df[df.mdot<0]
	df_dis = df[df.mdot>0]

	#Shuffle data and save
	df_ch = df_ch.drop(columns=["time","T_p_rep"]).sample(frac=1).reset_index(drop=True)
	df_dis = df_dis.drop(columns=["time","T_p_rep"]).sample(frac=1).reset_index(drop=True)

	#Seperate training and test set + save the csv
	df_ch_train = df_ch[0:int(0.3*df_ch.shape[0])]
	df_ch_train.to_csv("training_data_charging_equilibrium.csv",index=False)

	df_ch_test = df_ch[int(0.3*df_ch.shape[0]):]
	df_ch_test.to_csv("test_data_charging_equilibrium.csv",index=False)

	df_dis_train = df_dis[0:int(0.3*df_dis.shape[0])]
	df_dis_train.to_csv("training_data_discharging_equilibrium.csv",index=False)
	
	df_dis_test = df_dis[int(0.3*df_dis.shape[0]):]
	df_dis_test.to_csv("test_data_discharging_equilibrium.csv",index=False)


def plot3():
	data = D("test_data_half_annual_system_simulation.mat")
	T_top = data.data("Tank.T_top_measured")
	T_bot = data.data("Tank.T_bot_measured")
	SOC = data.data("tank_level")
	time = data.abscissa("tank_level",valuesOnly=True)
	mdot = data.data("Tank.Tank_A.m_flow")

	df = pd.DataFrame(
		zip(time,T_top, T_bot,SOC,mdot),
		columns=["time","T_top","T_bot","SOC","mdot"]
	)
	
	titlenames = ["All days","Day 2 - End","Day 3 - End", "Day 4 - End", "Day 5 - End", "Day 6 - End"]
	limit_time = [i * 24 * 3600 for i in range(6)]
	
	for j in range(2):
		fig,axes = plt.subplots(3,2)
		fig.tight_layout(pad=2)

		for i,ax in enumerate(axes.flat):
			limit = limit_time[i]
			title = titlenames[i]
			df_ = df[
				(df.time>=limit) &
				(abs(df.mdot)>=0)
			]

			df_charge = df_[df_.mdot<0]
			df_discharge = df_[df_.mdot>0]

			print(df_charge.SOC.max())
			print(df_charge.SOC.min())


			print(df_discharge.SOC.max())
			print(df_discharge.SOC.min())

			if j == 0:
				ax.scatter(
					df_charge.SOC, df_charge.T_top, c="black",s=5,label="charging"
				)
				ax.scatter(
					df_discharge.SOC, df_discharge.T_top, c="green",s=5,label="discharging"
				)
				ax.legend()
				ax.set_title(title)
				ax.set_xlabel("State of charge")
				ax.set_ylabel("T$_{top}$ [K]")
				ax.set_xlim(0,1)

			elif j == 1:
				ax.scatter(
					df_charge.SOC, df_charge.T_bot, c="black",s=5,label="charging"
				)
				ax.scatter(
					df_discharge.SOC, df_discharge.T_bot, c="green",s=5,label="discharging"
				)
				ax.legend()
				ax.set_title(title)
				ax.set_xlabel("State of charge")
				ax.set_ylabel("T$_{bot}$ [K]")
				ax.set_xlim(0,1)
			
		if j==0:
			fig.suptitle("T$_{top}$ vs. SOC")
		elif j==1:
			fig.suptitle("T$_{bot}$ vs. SOC")

		plt.show()
		fig.savefig("Fig_%s.png"%(j))






if __name__ == '__main__':
	plot3()
