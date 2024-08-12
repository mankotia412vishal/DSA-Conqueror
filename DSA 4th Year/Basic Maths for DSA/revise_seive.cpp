#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=25;
    vector<bool> prime(n,true);

    prime[0]=false;
    prime[1]=false;

    for (int  i = 2; i*i <= n; i++)
    {
        if(prime[i]){
        // int j=2*i;
        int j=i*i;
         while(j<=n){
            prime[j]=false;
            j+=i;

         }  }
    }
    
    for (int  i = 0; i < n; i++)
    {
        if(prime[i]==true){
            cout<<i<<" ";
        }
    }
    
    return 0;

}