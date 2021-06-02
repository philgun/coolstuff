constant=42
import tensorflow as tf
from tensorflow import keras
import pandas as pd
from sklearn.preprocessing import MinMaxScaler
from sklearn.model_selection import train_test_split
import matplotlib.pyplot as plt
from sklearn.metrics import r2_score, mean_absolute_error

fmodel = "GP_Model_charging"
model = keras.models.load_model(fmodel)

#Load Data
fn_train = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/training_data_discharging_equilibrium.csv"

fn_test = "/home/philgun/Documents/coolstuff/coolstuff/ML/script/script/effectiveness_based/data/test_data_discharging_equilibrium.csv"

df = pd.read_csv(fn_train)

df_test = pd.read_csv(fn_test)    

#Get the X and y from the data set
X = df[df.columns[0:-1]].to_numpy()
y = df[df.columns[-1]].to_numpy().reshape(-1,1)

#Split into train validation set
X_train, X_valid, y_train, y_valid = train_test_split(X,y,test_size=0.3,random_state=constant)

#Instantiate scalers
mmx = MinMaxScaler().fit(X_train)
mmy = MinMaxScaler().fit(y_train)

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

#Normalise the data
X_train = mmx.transform(X_train)
y_train = mmy.transform(y_train)

X_valid = mmx.transform(X_valid)
y_valid = mmy.transform(y_valid)

#Normalise the test data
X_test = df_test[df_test.columns[0:-1]].to_numpy()
y_test = df_test[df_test.columns[-1]].to_numpy().reshape(-1,1)
X_test = mmx.transform(X_test)

y_pred = mmy.inverse_transform(model.predict(X_test))

R2 = r2_score(y_pred, y_test)
MAE = mean_absolute_error(y_pred,y_test)

fig,ax = plt.subplots()
ax.scatter(
    y_test,y_pred,c="black",s=5
)
ax.set_xlabel(
    "Epsilon test data"
)
ax.set_ylabel(
    "Epsilon prediction result"
)
ax.set_title(
    "Test vs. prediction. R$^2$: %.5f, MAE: %.5f"%(R2,MAE)
)

ax.set_xlim(y_test.min(), y_test.max())
ax.set_ylim(y_test.min(), y_test.max())
ax.grid(
    b=True,which="both",axis="both"
)
plt.show()
