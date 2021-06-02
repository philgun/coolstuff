from matplotlib import pyplot as plt
import matplotlib as mpl
import pandas as pd
import numpy as np
'''
convert -delay 0.1 'fig_%d.png[0-1747]' output.mp4
'''

#Read data
df = pd.read_csv("df_final.csv")

#Instantiate colourmap from mpl
cm = plt.cm.get_cmap('RdYlBu_r',50)

cname = ["T_s_%s"%index for index in range(1,101)]
minima, maxima = df.epsilon.min(), df.epsilon.max()
name_index = 0

for i in range(0,df.shape[0],5):
    T_s_s = df[cname].iloc[i]
    eps = df.epsilon.iloc[i]
    
    fig = plt.figure()
    
    #Axis for the plot
    ax = fig.add_axes(
        [0.15, 0.1, 0.55, 0.8]
    )
    
    #Axis for the colourbar
    ax2 =fig.add_axes(
        [0.75, 0.1, 0.05, 0.8]
    )

    ax.set_xlabel(
        "Dimensionless position [x/L$_{tank}$]"
    )
    ax.set_ylabel(
        "Filler temperature [K]"
    )
    ax.set_xlim(0,101)
    ax.set_ylim(510+273.15, 730+273.15)

    if df.mdot.iloc[i] >0:
        opmode = "Discharging"
    elif df.mdot.iloc[i] <0:
        opmode="Charging"
    else:
        opmode = "Stand-by"

    ax.text(
        5, 680 + 273.15, "SOC: %.4f\nEpsilon: %.4f\nOperation mode: %s"%(
            df.lv.iloc[i],eps,opmode
        )
    )

    #Instantiate the colourbar
    norm = mpl.colors.Normalize(vmin=minima, vmax=maxima)
    cb = plt.colorbar(
        mpl.cm.ScalarMappable(cmap=cm,norm=norm),cax=ax2,orientation="vertical",format="%.4f"
    )
    cb.set_label(label='Epsilon')

    ax.plot(
        np.arange(1,101,1,dtype=np.int32), T_s_s, c = cm((eps-minima) / (maxima-minima)), marker ="^", linewidth=2
    )

    fig.canvas.draw()
    labels = [item.get_text() for item in ax.get_xticklabels()]
    labels[0] = "bottom"
    labels[-2] = "top"
    ax.set_xticklabels(labels)
    fig.suptitle("Time %.3f h"%(df.time.iloc[i]/3600))
    fig.savefig("./fig/time/fig_%s.png"%(name_index))
    name_index+=1
    plt.close()


df_dis = df[df.mdot>0]
df_ch = df[df.mdot<0]

fig,ax = plt.subplots()
ax.scatter(
    df_dis.lv, df_dis.epsilon, label="discharging"
)
ax.scatter(
    df_ch.lv, df_ch.epsilon, label="charging"
)
ax.set_xlabel("SOC")
ax.set_ylabel("Epsilon")
ax.set_xlim(0,1)
plt.show()

#Start plotting
df_ = df[df.mdot>0]

#Start only from the second day
df_ = df_[df_.time>5*24*3600]

N, lim, bar = plt.hist(df_.lv, bins=200)
cname = ["T_s_%s"%index for index in range(1,101)]

for i,n in enumerate(N):
    #Slash the data frame based on epsilon
    ub = lim[i+1]
    lb = lim[i]
    df_tmp = df_[
        (df_.lv>=lb) &
        (df_.lv<ub)
    ]

    if len(df_tmp):
        #Instantiate the figure object
        fig = plt.figure()

        #Axis for the plot
        ax = fig.add_axes(
            [0.15, 0.1, 0.55, 0.8]
        )
        
        #Axis for the colourbar
        ax2 =fig.add_axes(
            [0.75, 0.1, 0.05, 0.8]
        )

        ax.set_xlabel(
            "Dimensionless position [x/L$_{tank}$]"
        )
        ax.set_ylabel(
            "Filler temperature [K]"
        )
        ax.set_xlim(0,101)
        ax.set_ylim(510+273.15, 730+273.15)
        
        #Get the minima and maxima epsilon for colouring purpose
        minima,maxima = df_tmp.epsilon.min(), df_tmp.epsilon.max()
        #minima,maxima = 0,1
       
        #Instantiate the colourbar
        norm = mpl.colors.Normalize(vmin=minima, vmax=maxima)
        cb = plt.colorbar(
            mpl.cm.ScalarMappable(cmap=cm,norm=norm),cax=ax2,orientation="vertical",format="%.4f"
        )
        cb.set_label(label='Epsilon')

        for j in range(df_tmp.shape[0]):
            T_s_s = df_tmp[
                cname
            ].iloc[j]

            eps = df_tmp.epsilon.iloc[j]
            colour = cm(
                (eps-minima)/(maxima-minima)
            )

            ax.plot(
                np.arange(1,101,1,dtype=np.int32), T_s_s, c = colour
            )

        fig.canvas.draw()
        labels = [item.get_text() for item in ax.get_xticklabels()]
        labels[0] = "bottom"
        labels[-2] = "top"
        print(labels)
        ax.set_xticklabels(labels)

        fig.suptitle(
            "Temperature distribution for SOC %.5f -- %.5f"%(lb,ub)
        )

        fig.savefig(
            "./fig/discharging/fig_%s.png"%(i)
        )


        



        


    


