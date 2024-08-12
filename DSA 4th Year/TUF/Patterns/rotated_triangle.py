n=3
for i in range(0,n):
    for j in range(0,i+1):
        print("*",end="")
    print()
# print()
for i in range(1,n+1):
    for j in range(2,n-i+2):
        print("*",end="")
    print()