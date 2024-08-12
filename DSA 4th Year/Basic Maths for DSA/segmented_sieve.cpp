#include <bits/stdc++.h>
using namespace std;

vector<bool>Sieve(int n){
    vector<bool>prime(n,true);
    prime[0]=prime[1]=false;
    for (int  i = 2; i*i <= n; i++)
    {
        if(prime[i]){
            int j=i*i;
            while (j<=n)
            {
               prime[j]=false;
               j+=i;
            }
            
        }
    }
    for (int i=2;i<=n;i++)
    {
        if(prime[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return prime;
}
vector<bool> segSieve(int L, int R)
{

    vector<bool> sieve=Sieve(sqrt(R));

    vector<int> basePrimes;
    for (int i = 0; i <= sieve.size(); i++)
    {
        if (sieve[i])
        {
            basePrimes.push_back(i);
        }
    }

    vector<bool> segSieve(R - L + 1, true);
    if (L == 1 || L == 0)
    {
        segSieve[0] = false;
    }

    for (auto prime : basePrimes)
    {
        int first_multiple = (L / prime) * prime;

        if (first_multiple < L)
        {
            first_multiple += prime;
        }
        int j = max(first_multiple, prime * prime);
        while (j <= R)
        {
            segSieve[j - L] = false;
            j += prime;
        }
    }
    return segSieve;
}
int main()
{
    // int l = 1, r = 10;
    int l = 110, r = 130;
    vector<bool> ss = segSieve(l, r);
    for (int i = 0; i < ss.size(); i++)
    {
        if (ss[i])
        {
            cout << i + l << " ";
        }
    }

    return 0;
}