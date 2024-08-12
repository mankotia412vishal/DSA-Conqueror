n=3

for j in range(n+1):
    spaces=n-j
    for i in range(spaces,0,-1):
        print(end=" ")
    for k in range(2*j-1):
        print("*",end="")
    print()
        