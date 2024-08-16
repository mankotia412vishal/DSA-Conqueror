n=5
for i in range(1,n+1):
    for space in range(0,n-i):
        print(end=" ")
    for j in range(1,i+1):
        print("*",end=" ")
    print()

for i in range(1,n+1):
    for space in range(0,i-1):
        print(end=" ")
    for j in range(1,n-i+2):
        print("*",end=" ")
    print()


