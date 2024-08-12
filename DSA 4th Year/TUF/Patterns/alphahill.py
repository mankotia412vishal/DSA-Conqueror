n=3

for i in range(1,n+1):
    # spaces I am printing
    spaces=n-i
    for s in range(1,spaces+1):
        print(" ",end=" ")
    s='A'
    for j in range(1,2*i):
        if(j<=i):

            print(s,end=" ")
            s=chr(ord(s)+1)
            if(j==i):
                s=chr(ord(s)-1)
                s=chr(ord(s)-1)
                # s=ord(s)-1
        else:
            print(s,end=" ")
            s=chr((ord(s)-1))
    print()