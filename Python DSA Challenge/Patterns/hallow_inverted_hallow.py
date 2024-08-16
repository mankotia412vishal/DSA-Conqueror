n=6
for i in range(1,n+1):
    for j in range(1,n-i+2):
        if(i==1):
            print("*",end="")
        elif(j==1 or j==n-i+1):
            print("*",end="")
        else:
            print(end=" ")
    print()