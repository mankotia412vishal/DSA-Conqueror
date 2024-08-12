n=5
i=1
while(i<=n):
    spaces=n-i
    while(spaces!=0):
        print(end=" ")
        spaces-=1
    j=1
    while(j<=2*i-1):
        print("*",end="")
        j+=1
    print()
    i+=1