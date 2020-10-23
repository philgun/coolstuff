from DyMat import DyMatFile as D

fn_working = './xml_work_from_OMEdit/sCO2PBCalculator_res_0.mat'
fn_finally_working = './xml_finally_working/sCO2PBCalculator_res_0.mat'
fn_not_working = './xml_not_working/sCO2PBCalculator_res_0.mat'

datawork = D(fn_working)
datafinal = D(fn_finally_working)
datanotwork = D(fn_not_working)

h1 = datawork.data("powerBlock.state_HTF_in_des.h")[-1]
h2 = datanotwork.data("powerBlock.state_HTF_in_des.h")[-1]
hf = datafinal.data("powerBlock.state_HTF_in_des.h")[-1]

t1 = datawork.data('powerBlock.T_HTF_in_des')[-1]
t2 =datanotwork.data('powerBlock.T_HTF_in_des')[-1]
tf =datafinal.data('powerBlock.T_HTF_in_des')[-1]


p1 = datawork.data("powerBlock.state_HTF_in_des.p")[-1]
p2 = datanotwork.data("powerBlock.state_HTF_in_des.p")[-1]
pf = datafinal.data("powerBlock.state_HTF_in_des.p")[-1]

print(p1,t1,h1)
print(p2,t2,h2)
print(pf,tf,hf)
