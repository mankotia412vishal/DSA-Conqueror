n=3
for i in range(1,n+1):
    # spaces print 
    for spaces in range (1,n-i+1):
        print(" ",end="")
    for j in range(1,2*i):
        print("*",end="")

    print()
for i in range(1,n+1):
    # spaces print 
    for spaces in range (1,i):
        print(" ",end="")
    for j in range(0,2*n-(2*i)+1):
        print("*",end="")

    print()