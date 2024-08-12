#include <bits/stdc++.h>
using namespace std;

// Time complexity --> O(N log(log N))

 

vector<bool> Sieve(long long n){
    cout<<n<<endl;
    cin.get();
        
        vector<bool> arr(n+1,true);
        arr[0] = arr[1] = false;
        
        for(long long i=2;i*i<=n;i++){
            if(arr[i] == true){
                long long j = i*i;
                while(j<=n){
                    arr[j] = false;
                    j+=i;
                }
            }
        }
        
        return arr;
        
    }
    long long primeProduct(long long L, long long R){
        // code here
        long long M = pow(10,9)+7;
        
        vector<bool> sieve = Sieve(sqrt(R));
        vector<long long> basePrimes;
        
        for(long long i=0;i<sieve.size();i++){
            if(sieve[i]){
                basePrimes.push_back(i);
            }
        }
        
        vector<long long> segSieve(R-L+1,true);
        if(L == 1){
            segSieve[0] = false;
        }
        else if(L == 0){
            segSieve[0] = segSieve[1] = false;
        }
        
        for(auto prime:basePrimes){
            long long firstmult = (L/prime)*prime;
            if(firstmult < L){
                firstmult += prime;
            }
            long long j = max(firstmult,prime*prime);
            while(j<=R){
                segSieve[j-L] = false;
                j += prime;
            }
            
        }
        // for (int  i = 0; i < count; i++)
        // {
        //     /* code */
        // }
        
        long long ans =  1;
        for(long long i=0;i<segSieve.size();i++){
            if(segSieve[i]){
                ans = (ans * (i+L))%M;
                // cout<<i+L<<" ";
            }
        }
        
        return ans%M;
    }

int main(){
    long long L,R;
    cin>>L>>R;
    cout<<primeProduct(L,R)<<endl;
    return 0;
}
