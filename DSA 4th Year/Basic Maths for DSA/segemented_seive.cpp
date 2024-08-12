#include <bits/stdc++.h>
using namespace std;
vector<bool> segSieve(int l,int r){

    // get me prime array , i will use to mark segmented siecve
    int khatak=sqrt(r);
    cout<<khatak<<endl;
    cin.get();
    vector<bool>sieve(khatak,true);
    vector<int> basePrime;
    sieve[0]=sieve[1]=false;
    for (int  i = 2; i*i <= khatak; i++)
    {
        if(sieve[i]){
            int j=i*i;
            while (j<=khatak)
            {
                sieve[j]=false;
                j+=i;
            }
            
        }
    }
    
    return sieve;
}
int main(){

    
    int l=110;
    int r=130;
    vector<bool> ans=segSieve(l,r);
    cout<<"segmented prime\n";
    for (int  i = 0; i < ans.size(); i++)
    {
        if(ans[i]==true){
            cout<<i<<" ";
        }
    }

    return 0;

}