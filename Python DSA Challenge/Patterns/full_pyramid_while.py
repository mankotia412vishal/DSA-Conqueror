n=5
i=1
while(i<=n):
    space=n-i
    while(space!=0):
        print(" ",end="")
        space-=1
    j=1
    while(j<=i):
        print("*",end=" ")
        j+=1
    print()
    i+=1