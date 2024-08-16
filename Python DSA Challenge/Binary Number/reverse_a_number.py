n=1234000
ans=0
while(n!=0):
    ld=n%10
    ans=ans*10+ld
    n//=10
print(ans)
