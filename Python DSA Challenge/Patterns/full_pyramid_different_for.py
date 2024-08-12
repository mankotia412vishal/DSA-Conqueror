n=5
for i in range(1,n+1):
    spaces=n-i
    for k in range(0,spaces):
        print(end=" ")
    for j in range(1,2*i):
        print("*",end="")
    print()