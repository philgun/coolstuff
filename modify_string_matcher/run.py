from string_matcher import *
from data import *
import pickle
import pandas as pd
from import_db import *

# Please use the import_db if you want to generate new dataset
# ts = get_tables(['transactions_staging'])['transactions_staging']
with open('./bc.pkl','rb') as f:
	bc = pickle.load(f)
with open('./ts.pkl','rb') as f:
    	ts = pickle.load(f)

print(len(ts))

#Test function
model = Preprocess(
    	ts[:20]
)
model.transform()
cat,uncat,other_dict, cat_ents = model.run()
print('cat_ents:\n\n',cat_ents)


print(
	"Categorised by regex:\n",cat,"\nUncategorised by regex:\n",uncat,"\nOther dict:\n\n\n\n\n\n", other_dict
)

#Real run
model = Preprocess(
    	ts
)

print("Transform method......")
model.transform()

print("Run method.......")
cat,uncat,other_dict, cat_ents = model.run()

'''
	cat_ents --> {trans_id: catched_entities}
	uncat --> {trans_id: tokenised_uncatched_entity}
'''
print('done run method')


#FIXME: instead of looping, use pandas functionality to generate dataframe from dictionary
ents = []
index = []

idx = 1
for key,val in cat_ents.items():
	if idx % 10000 == 0:
		print("Appending data %s from %s data"%(idx, len(ts)))
	ents.append(val)
	index.append(str(key))
	idx +=1
	pd.DataFrame(zip(index, ents),columns=['transaction_id','ent']).to_csv('./CategorisedByRegex.csv',index=False)

