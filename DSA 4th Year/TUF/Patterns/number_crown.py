n = 3
for i in range(1, n+1):
    for j in range(1, n+1):
        if j <= i:
            print(j, end=" ")
        else:
            print(" ", end=" ")
    spaces = n-i
    while (spaces != 0):
        print(" ", end=" ")
        spaces -= 1
    for k in range(i, 0, -1):
        print(k, end=" ")

    print()
