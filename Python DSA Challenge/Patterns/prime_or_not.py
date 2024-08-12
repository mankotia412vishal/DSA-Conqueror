n=7
flag=True
for i in range(2,n):
    if(n%i==0):
        flag=False
        print(f"{n} is Not a Prime Number bcz {n} is divisible by {i} ")
        break;

if flag==True:
    print(f"{n} is a Prime Number ")
    