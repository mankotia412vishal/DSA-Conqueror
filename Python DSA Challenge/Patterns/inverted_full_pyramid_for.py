n=5
for i in range(1,n+1):
    space=i-1
    while(space!=0):
        print("",end=" ")
        space-=1
    for j in range(1,n-i+2):
        print("*",end=" ")
    print()
