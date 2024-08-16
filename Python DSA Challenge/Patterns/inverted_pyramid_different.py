n=5
for i in range(1,n+1):
    # print spaces
    for space in range(0,i-1):
        print(end=" ")
    # print the star
    for j in range(0,2*(n-i)+1):
        print("*",end="")
    print()