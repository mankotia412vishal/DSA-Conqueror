n=5
for i in range(1,n+1):
    for space in range(0,n-i):
        print(end=" ")
    for j in range(1,i+1):
        if(j==1 or j==i):
            print("*",end=" ")
        else:
            print(end="  ")
    print()

for i in range(1,n+1):
    for space in range(0,i-1):
        print(end=" ")
    for j in range(1,n-i+2):
        if(j==1 or j==n-i+1):
                print("*",end=" ")
        else:
            print(end="  ")
    print()
