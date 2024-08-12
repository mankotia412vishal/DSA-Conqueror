import pandas as pd


def inPutData(age, height, df):

    data_filtered = df[(df["Age"] > age) & (df["Height"] > height)]

    return data_filtered.Name


def maxLength(state_name):
    maxi = 0
    for i in state_name:

        if (len(i) >= maxi):

            l = len(i)
            name = i
            maxi = l

    print("the name of the state is " + name)
    print(l)


data = {'Name': ['Alice', 'Bob', 'Charlie', 'David', 'Emma'],     'Age': [
    25, 30, 22, 35, 28],     'Height': [160, 175, 155, 180, 165]}
df = pd.DataFrame(data)
inPutData(20, 163, df)


input_data = ["Jammu ", "Maharastra", "MP",
              "Gujarat", "UTTAR pradesh", "Uttar pradesh"]

print(maxLength(input_data))
