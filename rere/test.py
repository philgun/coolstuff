import pandas as pd
import numpy as np

def process(fn_raw, fn_target):
    df = pd.read_csv(fn_raw)

    O_NEW = []
    RN_NEW = []
    DT_NEW = []
    T_NEW = []
    C_NEW = []
    I_NEW = []
    V_NEW = []
    GS_NEW = []
    Q_NEW = []

    print(df.columns)

    df["Receipt Number"] = df["Receipt Number"].fillna("BLANK")
    df["Items"] = df["Items"].fillna("BLANK")
    rn_unique = df["Receipt Number"].unique()

    for r in rn_unique:
        df_r = df[
            df["Receipt Number"] == r
        ]

        items_unique = df_r["Items"].unique()

        for it in items_unique:
            df_temporary = df_r[
                df_r["Items"] == it
            ]

            #DO STUFF and APPEND TILL DIE
            O_NEW.append(
                df_temporary["Outlet"].iloc[0]
            )

            RN_NEW.append(r)

            DT_NEW.append(
                df_temporary["Date"].iloc[0]
            )

            T_NEW.append(
                df_temporary["Time"].iloc[0]
            )

            C_NEW.append(
                df_temporary["Category"].iloc[0]
            )

            I_NEW.append(
                df_temporary["Items"].iloc[0]
            )

            V_NEW.append(
                df_temporary["Variant"].iloc[0]
            )

            GS_NEW.append(
                df_temporary["Gross Sales"].iloc[0]
            )

            Q_NEW.append(
                df_temporary.shape[0] / 100
            )
    
    df_new = pd.DataFrame(zip(O_NEW, RN_NEW, DT_NEW, T_NEW, C_NEW, I_NEW, V_NEW, GS_NEW, Q_NEW), columns=['Outlet','Receipt Number', 'Date', 'Time', 'Category', 'Items', 'Variant', 'Gross Sales', 'Quantity'])
    df_new.to_csv(fn_target,index=False)

if __name__ == '__main__':
    f_raw = "./data/moka_april.csv"
    f_target = "./clean_data/april.csv"
    process(
        f_raw, f_target
    )