import pandas as pd
import smogn

housing = pd.read_csv(

    ## http://jse.amstat.org/v19n3/decock.pdf
    'https://raw.githubusercontent.com/nickkunz/smogn/master/data/housing.csv'
)


housing_smogn = smogn.smoter(
    
    data = housing,  ## pandas dataframe
    y = 'SalePrice'  ## string ('header name')
)

import seaborn
import matplotlib.pyplot as plt
seaborn.kdeplot(housing['SalePrice'], label = "Original")
seaborn.kdeplot(housing_smogn['SalePrice'], label = "Modified")
plt.legend()
plt.show()