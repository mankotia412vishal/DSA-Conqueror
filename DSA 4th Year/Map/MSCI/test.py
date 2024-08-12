# # Program to Swap Two Elements in a List 
# print("enter number ")
# li=[]
# # a=input()
# for 1 in 5:
#     li[i]=i


# print("enter number ")
# b=input()
# temp=a;
# a=b;
# b=temp;
# print("The value of a "+a)
# print("The value of b "+b)


# strings, json1 and json2, find the list of keys for which the values are different.


import json

json1 ={"hello":"Vishal1","Vit":"VIIt1"}
json1 ={"hello":"Vishal","Vit":"VIIt"}


dict1=json.loads(json1)
dict2=json.loads(json2)
common_key=set(dict1.keys()) && set(dict2.keys())

diff_k=[]
for key in common_key:
    if(dict1[key]!=dict2[key]):
        diff_k.append(dict1[key])
    
diff_k.sort()

for key in diff_k:
    print(key)
