def nStarTriangle(n: int) -> None:
    for i in range(1,n+1):
        spaces=i-1
        while(spaces!=0):
            print(" ",end="")
            spaces-=1

        for j in range(1,(2*n)-i-1):
            print("*",end="")

        print("\n")



nStarTriangle(10)a

    