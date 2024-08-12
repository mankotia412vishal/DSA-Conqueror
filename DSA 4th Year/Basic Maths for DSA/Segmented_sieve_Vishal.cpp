#include <bits/stdc++.h>
using namespace std;
vector<bool> Eratos(int n)
    {
        vector<bool>prime(n+1,true);
        prime[0]=prime[1]=false;
        for (int i = 2; i <= n; i++)
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
        // for(int i=0;i<prime.size();i++){
        //     if(prime[i]){
        //         cout<<i<<" ";
        //     }
        // }

        return prime;
    }
void SegementedSieve(int L,int R){

    vector<bool>sieve=Eratos(sqrt(R));
    vector<int>basePrimes;
    for(int i=0;i<sieve.size();i++){
        if(sieve[i]){
            basePrimes.push_back(i);
        }
    }
    vector<bool>segSieve(R-L+1,true);
    if(L==1 || L==0){
        segSieve[0]=false;
    }
    for(auto prime:basePrimes){
        int first_multiple=(L/prime)*prime;
        if(first_multiple<L){
            first_multiple+=prime;
        }
        int j=max(first_multiple,prime*prime);
        while(j<=R){
            segSieve[j-L]=false;
            j+=prime;
        }
    }
    long long ans=1;
    long long mod=1e9+7;
    for(int i=0;i<segSieve.size();i++){
        if(segSieve[i]){
            // cout<<i+L<<" ";
            ans=(ans*(i+L))%mod;
        }
    }
    cout<<ans<<endl;
    cout<<endl;
}
int main(){

    int L=1,R=10;
    SegementedSieve(L,R);

    return 0;

}