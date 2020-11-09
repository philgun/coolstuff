from pyDOE import *
import numpy as np
from matplotlib import pyplot as plt
import seaborn as sns
import pandas as pd

class Waste(object):
    def __init__(self, location,  which, mass):
        self.location = location
        self.which = which
        self.numdata = 1000
        self.mass = mass
    
    def generate_LHS(self, UB,LB,num_inputs,numdata):
        LHS = lhs(num_inputs,samples=numdata,criterion='maximin')
        for i in range(LHS.shape[0]):
            for j in range(LHS.shape[1]):
                val = LHS[i,j]
                ub = UB[j]
                lb = LB[j]
                real_val = val * (ub - lb) + lb
                LHS[i,j] = real_val
        return LHS

    def sensitivity(self):
        if self.location == "Urban":
            if self.which == "Organic":
                #LHS Composed
                self.UB1 = [0.02 * 1.2]
                self.LB1 = [0.02 * 0.8]
                self.LHS_1 = self.generate_LHS(
                    self.UB1,
                    self.LB1,
                    len(self.LB1),
                    self.numdata
                    )
    
            elif self.which == "Inorganic":
                #LHS Recyclables Recovered
                self.UB1 = [0.06 * 1.2]
                self.LB1 = [0.06 * 0.8]
                self.LHS_1 = self.generate_LHS(
                    self.UB1,
                    self.LB1,
                    len(self.LB1),
                    self.numdata
                    )   

            else:
                raise ValueError("Choose between Organic or Inorganic")
            
            #LHS for Rest Waste
            self.LHS_rest_waste = np.zeros((self.numdata,1))
            for i in range(self.numdata):
                self.LHS_rest_waste[i,0] = 1 - self.LHS_1[i,0]
                assert(
                    abs(self.LHS_rest_waste[i,0] + self.LHS_1[i,0] - 1) < 1e-3
                )

            #LHS for part of the waste into open burning, controlled landfill and landfilled
            #         [     OB      ,     CL       ,  LF       ]
            self.UB = [0.059 * 1.2, 1.2 * 5.43e-3, 0.489 * 1.2]
            self.LB = [0.059 * 0.8, 0.8 * 5.43e-3, 0.489 * 0.8]

            self.LHS_OB_CL_LF = self.generate_LHS(
                self.UB, self.LB, len(self.UB), self.numdata
            )
            
            self.LHS_RD = np.zeros((self.numdata,1))
            for i in range(self.numdata):
                self.LHS_RD[i,0] = 1 - self.LHS_OB_CL_LF[i,0] - self.LHS_OB_CL_LF[i,1] - self.LHS_OB_CL_LF[i,2]
                assert(
                    abs(self.LHS_RD[i,0] + self.LHS_OB_CL_LF[i,0] + self.LHS_OB_CL_LF[i,1] + self.LHS_OB_CL_LF[i,2] - 1) < 1e-3
                )

            #Generate 
            self.CH4 = []
            self.N2O = []
            self.CO2 = []

            for i in range(self.numdata):
                if self.which == "Organic":
                    self.mass_composed = self.LHS_1[i,0] * self.mass
                    self.mass_recyclables = 0
                else:
                    self.mass_recyclables = self.LHS_1[i,0] * self.mass
                    self.mass_composed = 0
                
                #Get rest of the mass that is not recycled or composed
                self.mass_rest_waste = self.LHS_rest_waste[i,0] * self.mass

                assert(
                    abs(self.mass_rest_waste + self.mass_composed + self.mass_recyclables-1) < 1e-3
                )

                #Get the mass of the waste that are processed using open burning, controlled landfill and landfilled method
                self.mass_open_burning = self.LHS_OB_CL_LF[i,0] * self.mass_rest_waste
                self.mass_controlled_landfill = self.LHS_OB_CL_LF[i,1] * self.mass_rest_waste
                self.mass_landfill = self.LHS_OB_CL_LF[i,2] * self.mass_rest_waste
                
                self.mass_random_dumping = self.LHS_RD[i,0] * self.mass_rest_waste
                
                assert(
                    abs(self.mass_random_dumping + self.mass_open_burning+self.mass_controlled_landfill+self.mass_landfill-self.mass_rest_waste)< 1e-3
                )

                #Calculate the emission #===> converting from kg gas per ton MSW to kg MSW
                composed_CH4 = self.mass_composed * 100 / 1000 
                composed_N2O = self.mass_composed * 71.52 / 1000

                landfilled_CO2 = self.mass_landfill * 210 / 1000
                landiflled_CH4 = self.mass_landfill * 75 / 1000

                openburning_CO2 = self.mass_open_burning * 801.2 / 1000
                openburning_N2O = self.mass_open_burning * 44.7/1000
                openburning_CH4 = self.mass_open_burning * 162.5/1000

                controlled_landfill_CH4 = self.mass_controlled_landfill * 300 / 1000

                recyclables_CO2 = self.mass_recyclables * (-801.2)/1000
                recyclables_N2O = self.mass_recyclables * (-44.7) / 1000
                recyclables_CH4 = self.mass_recyclables * (-162.5) / 1000

                random_dumping_CO2 = self.mass_random_dumping * 750 / 1000

                #Sum the emission
                CH4_total = composed_CH4 + landiflled_CH4 + openburning_CH4 + controlled_landfill_CH4 + recyclables_CH4
                N2O_total = composed_N2O + openburning_N2O + recyclables_N2O
                CO2_total = landfilled_CO2 + openburning_CO2 + recyclables_CO2 + random_dumping_CO2
                
                self.CH4.append(CH4_total)
                self.N2O.append(N2O_total)
                self.CO2.append(CO2_total)
        
        elif self.location == "Rural":
            if self.which == "Organic":
                #LHS Composed
                self.UB1 = [0.455 * 1.2]
                self.LB1 = [0.455 * 0.8]
                self.LHS_1 = self.generate_LHS(
                    self.UB1,
                    self.LB1,
                    len(self.LB1),
                    self.numdata
                    )
        
            elif self.which == "Inorganic":
                #LHS Recyclables Recovered
                self.UB1 = [0.055 * 1.2]
                self.LB1 = [0.055 * 0.8]
                self.LHS_1 = self.generate_LHS(
                    self.UB1,
                    self.LB1,
                    len(self.LB1),
                    self.numdata
                    )   

            else:
                raise ValueError("Choose between Organic or Inorganic")

            
            #LHS for Rest Waste
            self.LHS_rest_waste = np.zeros((self.numdata,1))
            for i in range(self.numdata):
                self.LHS_rest_waste[i,0] = 1 - self.LHS_1[i,0]
                assert(
                    abs(self.LHS_rest_waste[i,0] + self.LHS_1[i,0] - 1) < 1e-3
                )

            #LHS for part of the waste into open burning, controlled landfill and landfilled
            #         [     OB      ,     CL       ,  LF       ]
            self.UB = [0.612 * 1.2, 1.2 * 1e-8, 0.0816 * 1.2]
            self.LB = [0.612 * 0.8, 0.8 * 1e-8, 0.0816 * 0.8]

            self.LHS_OB_CL_LF = self.generate_LHS(
                self.UB, self.LB, len(self.UB), self.numdata
            )
            
            self.LHS_RD = np.zeros((self.numdata,1))
            for i in range(self.numdata):
                self.LHS_RD[i,0] = 1 - self.LHS_OB_CL_LF[i,0] - self.LHS_OB_CL_LF[i,1] - self.LHS_OB_CL_LF[i,2]
                assert(
                    abs(self.LHS_RD[i,0] + self.LHS_OB_CL_LF[i,0] + self.LHS_OB_CL_LF[i,1] + self.LHS_OB_CL_LF[i,2] - 1) < 1e-3
                )

            #Generate 
            self.CH4 = []
            self.N2O = []
            self.CO2 = []

            for i in range(self.numdata):
                if self.which == "Organic":
                    self.mass_composed = self.LHS_1[i,0] * self.mass
                    self.mass_recyclables = 0
                else:
                    self.mass_recyclables = self.LHS_1[i,0] * self.mass
                    self.mass_composed = 0
                
                #Get rest of the mass that is not recycled or composed
                self.mass_rest_waste = self.LHS_rest_waste[i,0] * self.mass

                assert(
                    abs(self.mass_rest_waste + self.mass_composed + self.mass_recyclables-1) < 1e-3
                )

                #Get the mass of the waste that are processed using open burning, controlled landfill and landfilled method
                self.mass_open_burning = self.LHS_OB_CL_LF[i,0] * self.mass_rest_waste
                self.mass_controlled_landfill = self.LHS_OB_CL_LF[i,1] * self.mass_rest_waste
                self.mass_landfill = self.LHS_OB_CL_LF[i,2] * self.mass_rest_waste
                
                self.mass_random_dumping = self.LHS_RD[i,0] * self.mass_rest_waste
                
                assert(
                    abs(self.mass_random_dumping + self.mass_open_burning+self.mass_controlled_landfill+self.mass_landfill-self.mass_rest_waste)< 1e-3
                )

                #Calculate the emission #===> converting from kg gas per ton MSW to kg MSW
                composed_CH4 = self.mass_composed * 100 / 1000 
                composed_N2O = self.mass_composed * 71.52 / 1000

                landfilled_CO2 = self.mass_landfill * 210 / 1000
                landiflled_CH4 = self.mass_landfill * 75 / 1000

                openburning_CO2 = self.mass_open_burning * 801.2 / 1000
                openburning_N2O = self.mass_open_burning * 44.7/1000
                openburning_CH4 = self.mass_open_burning * 162.5/1000

                controlled_landfill_CH4 = self.mass_controlled_landfill * 300 / 1000

                recyclables_CO2 = self.mass_recyclables * (-801.2)/1000
                recyclables_N2O = self.mass_recyclables * (-44.7) / 1000
                recyclables_CH4 = self.mass_recyclables * (-162.5) / 1000

                random_dumping_CO2 = self.mass_random_dumping * 750 / 1000

                #Sum the emission
                CH4_total = composed_CH4 + landiflled_CH4 + openburning_CH4 + controlled_landfill_CH4 + recyclables_CH4
                N2O_total = composed_N2O + openburning_N2O + recyclables_N2O
                CO2_total = landfilled_CO2 + openburning_CO2 + recyclables_CO2 + random_dumping_CO2
                
                self.CH4.append(CH4_total)
                self.N2O.append(N2O_total)
                self.CO2.append(CO2_total)

        else:
            raise ValueError("Location is wrong. Please choose between Urban or Rural")
    
    def write_CSV(self):
        self.df = pd.DataFrame(
            zip(self.CH4,self.N2O,self.CO2),
            columns = ["CH4","N2O","CO2"]
        )
        self.df.to_csv("./%s_%s.csv"%(self.location,self.which),index=False)       

    def plot(self):        
        sns.set_style('darkgrid',{'axes.grid' : False})
        kwargs = {'cumulative':True,'color':'r'}
        fig,axes = plt.subplots(1,3)
        fig.tight_layout(pad=2)

        med = 12

        colnames = self.df.columns

        for i,ax in enumerate(axes.flat):
            sns.distplot(
                self.df[colnames[i]],hist_kws=kwargs,kde_kws=kwargs, ax=ax
            )
            if i==0:
                ax.set_title("CDF for CH$_4$",fontsize = med)
            elif i==1:
                ax.set_title("CDF for N$_2$O",fontsize = med)
            else:
                ax.set_title("CDF for CO$_2$",fontsize = med)
            
            

            ax.set_xlabel("Emission per kg waste",fontsize = med)
            ax.set_ylabel("CDF", fontsize = med)
            ax.tick_params(axis='both',labelsize=med)


            if self.which == "Inorganic" and self.location=="Urban" and i==1:
                ax.ticklabel_format(axis='x',style='sci',scilimits=(-3,4))

            ax.yaxis.set_ticks(np.arange(0,1.1,0.1))
        
        fig.suptitle("CDF plots for %s %s waste"%(self.location,self.which), fontsize=14)

        plt.show()



if __name__ == "__main__":
    a = Waste("Rural","Organic",mass = 1)
    a.sensitivity()
    a.write_CSV()
    a.plot()
    a = Waste("Rural","Inorganic",mass = 1)
    a.sensitivity()
    a.write_CSV()
    a.plot()