import pandas as pd

df1={
    "Name":["Vishal","singh","mankotia"],"Roll":[11,12,13]
}
df=pd.DataFrame(df1)
print(df)
df['New']=df['Roll'].apply(lambda x :x*2)
print(df)