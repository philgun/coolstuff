import pandas as pd
import tensorflow as tf
from sklearn.preprocessing import MinMaxScaler, StandardScaler
from joblib import dump,load
from matplotlib import pyplot as plt
from sklearn.metrics import mean_squared_error, r2_score

#Load test data
df_test = pd.read_csv("/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/test.csv")
wd = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/dynamicTank_BottomSlice"
mmx = load("%s/mmx.bin"%(wd))
mmy = load("%s/mmy.bin"%(wd))

print(
    mmx.data_max_
)

print(
    mmx.data_min_
)

print(
    mmy.data_max_
)

print(
    mmy.data_min_
)

#Reshape and scalled the test data
X_test_raw = df_test[
    df_test.columns[0:17]
].to_numpy()

y_test_raw = df_test[
    df_test.columns[-1]
].to_numpy().reshape(-1,1)

X_test = mmx.transform(X_test_raw)

print(X_test)

#Load pre-trained model - Need not to compile since we are not training the model anymore
model = tf.keras.models.load_model(
    "%s/surrogate_model"%(wd),compile=False
)

#Predict test data and unscalled
ŷ_scaled = model.predict(X_test)
ŷ = mmy.inverse_transform(ŷ_scaled)

#Calculate MSE
MSE = mean_squared_error(ŷ,y_test_raw)
r2 = r2_score(ŷ,y_test_raw)

#45° Plot
fig,ax = plt.subplots(1)
ax.scatter(
    y_test_raw,ŷ,c='red',s=1
)

ax.set_xlabel("$y_\mathrm{true}$")
ax.set_ylabel("$ŷ$")
ax.set_title("MSE = %s, R$^2$ = %s"%(MSE,r2))
plt.show()