n=5
for i in range(1,n):
    for space in range(0,n-i):
        print(end=" ")
    for j in range(1,2*i):
        if(j==1):
            print(j,end="")
        elif(j==2*i-1):
            print(i,end="")
        elif(i==n):
            print(j,end="")
        else:
            print(" ",end="")

    print()

for i in range(1,n+1):
    print(i,end=" ")

