n=10
ans=0
i=0
while(n!=0):
    bit=n%2
    print(type(bit))
    power_=pow(10,i)
    print((type(power_)))
    bit_=bit*power_
    print(type(bit_))
    ans=ans+bit_
    print(type(ans))
    print("\n\n")
    i+=1
    n//=2
    # input("halt")
print(ans)