import pandas as pd
import numpy as np


data={"Name":["Vishal","Shubham","VishalG","Rahul"],"RollNo":[11,23,12,14]}
df=pd.DataFrame(data)
# print(df)
filterd_r=df[df["RollNo"]>=14]
# print(filterd_r)
df["States"]=pd.DataFrame(["Maharastra","UP","Panjab","kbkjasbbjabflkannljadlkask"])
# print(df)
statemaxiLen=0
stateName=""
for state in df["States"]:
    if(len(stateName)<len(state)):
        # print(state)
        stateName=state
        statemaxiLen=len(state)

    

print(statemaxiLen)
print(stateName)