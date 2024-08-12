rows=3
col=5
i=1
while(i<=rows):
    j=1
    while(j<=col):
        if(i==1 or j==1 or j==col or i==rows ):
            print("*",end=" ")
        else:
            print(" ",end=" ")
        j+=1
    print()
    i+=1