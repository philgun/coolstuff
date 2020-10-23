import os
from DyMat import DyMatFile as D

os.system('rm -rf *.o *.c *.h *.log sCO2PBCalculator')

data = D('sCO2PBCalculator_res_0.mat')

print(
    data.data('P_net'),
    data.data('T_in_ref_blk'),
    data.data('p_high'),
    data.data('PR'),
    data.data('T_cold_set'),
    data.data('delta'),
    data.data('load'),
    data.data('T_HTF_in'),
    data.data('T_amb_input')

)

#st_simulate --np=0 --stop 1 --step 0.002 --integOrder 5 --tolerance 1e-06 --solver dassl --nls homotopy 
#sCO2PBCalculator.mo P_net=67690794.6 T_in_ref_blk=1098.81 p_high=24315878.42 PR=2.9 T_cold_set=828.61 delta=77.53 load=0.71 T_HTF_in=1006.91 T_amb_input=311.84

#Not converging
#(array([67690794.6, 67690794.6]), 
# array([1098.81, 1098.81]), 
# array([24315878.42, 24315878.42]), 
# array([2.9, 2.9]), 
# array([828.61, 828.61]), 
# array([77.53, 77.53]), 
# array([0.71, 0.71]), 
# array([1006.91, 1006.91]), 
# array([311.84, 311.84]))

#Converging - Hack Everything
#(array([67690794.6, 67690794.6]), 
# array([1098.81, 1098.81]), 
# array([24315878.42, 24315878.42]), 
# array([2.9, 2.9]), 
# array([828.61, 828.61]), 
# array([77.53, 77.53]), 
# array([0.71, 0.71]), 
# array([1006.91, 1006.91]), 
# array([311.84, 311.84]))

#Converging - From OMEdit
#(array([67690794.6, 67690794.6]), 
# array([1098.81, 1098.81]), 
# array([24315878.42, 24315878.42]), 
# array([2.9, 2.9]), 
# array([828.61, 828.61]), 
# array([77.53, 77.53]), 
# array([0.71, 0.71]), 
# array([1006.91, 1006.91]), 
# array([311.84, 311.84]))





