import pandas as pd

def moka(fn_raw, fn_target):
    print(
        "Start processing: %s. Target file name: %s"%(fn_raw,fn_target)
    )

    #Reading raw data
    df = pd.read_csv(fn_raw)

    #Filling all NaN values in receipt number columns
    df["Receipt Number"] = df['Receipt Number'].fillna("BLANK")

    #Get the unique Receipt Number
    rn_unique = df['Receipt Number'].unique()

    #Loop over the unique receipt number
    for r in rn_unique:
        #Slash the dataframe with respect to the unique receipt number
        df_temporary = df[df['Receipt Number'] == r]
        #Take the unique values of the Items from the slashed df
        it_unique = df_temporary["Items"].unique()

        #Loop over the unique Items
        for p in it_unique:

            df_t = df_temporary[df_temporary["Items"]==p]
           
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

    print(df_new)

if __name__ == "__main__":
    fn_raw = "moka_april.csv"; fn_target = "moka_april_processed.csv"
moka(fn_raw, fn_target)