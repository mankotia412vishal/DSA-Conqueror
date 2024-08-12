n=6
for i in range(1,n+1):
    # print the spaces 
    spaces=n-i;
    while(spaces!=0):
        print(end=" ")
        spaces-=1
    for j in range(1,i+1):
        print("*",end=" ");
    print()
