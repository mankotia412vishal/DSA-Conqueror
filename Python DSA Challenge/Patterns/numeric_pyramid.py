n=5
for i in range(1,n+1):
    spaces=n-i
    for space in range(0,spaces):
        print(end=" ")
    
    row_start=i
    c=1;
    flag=True
    for j in range(1,2*i):
        if(c<=i and flag==True):
            print(row_start,end="")
            row_start+=1
            c+=1
        else:
            if(flag==True):     
                flag=False
                # print("__",end="")
                row_start-=2
            print(row_start,end="")
            row_start-=1

           
    print()
