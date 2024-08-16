n=5
i=1
while(i<=n):
    spaces=n-i
    while(spaces!=0):
        print(end=" ")
        spaces-=1
    j=1
    row_num=i
    count=1
    flag=True
    while(j<2*i):
        if(flag==True and count<=i):
            print(row_num,end="")
            row_num+=1
            count+=1
        else:
            if(flag):
                flag=False
                row_num-=1
            row_num-=1
            print(row_num,end="")
        j+=1
    print()
    i+=1
        
