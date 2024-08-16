n=5
start=0
for i in range(1,n+1):
    for j in range(1,2*i):
        start=i
        if(j%2==0):
            print(end="*")
        else:
            print(i,end="")
    print()
for i in range(1,n+1):
    for j in range(1,2*(n-i)+2):
        if(j%2==0):
            print(end="*")
        else:
            print(start,end="")
    print()
    start-=1
