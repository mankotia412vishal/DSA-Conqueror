n=5
for i in range(1,n+1):
    for j in range(1,n+1):
        if(j<=n-i+1):
            print("*",end="")
        else:
            print("",end=" ")
    spaces=i-1
    for k in range(0,spaces):
        print(end=" ")
    for l in range(1,n-i+2):
        print("*",end="")
    print()
for i in range(1,n+1):
    for j in range(1,n+1):
        if(j<=i):
            print("*",end="")
        else:
            print("",end=" ")
    spaces=n-i
    for k in range(0,spaces):
        print(end=" ")
    for l in range(1,i+1):
        print("*",end="")
    print()

