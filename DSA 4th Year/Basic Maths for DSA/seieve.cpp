#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=21;
    vector<bool>prime(n,true);
    prime[0]=prime[1]=false;
    for (int  i = 0; i < n; i++)
    {
         if(prime[i]){
            int j=2*i;
            while (j<n)
            {
               prime[j]=false;
               j+=i;
            }
            
         }
    }
    for (int  i = 2; i < n ; i++)
    {
        if(prime[i]==true)
         cout<<i<<endl;
    }
    
    
    return 0;

}