#include <bits/stdc++.h>
using namespace std;
int main(){

    string str="zhh";
    int k=1;

    unordered_map<string,int>mp;
    for (int i = 0; i < str.length(); i+=k)
    {
        string s=str.substr(i,k);
        

        mp[s]++;
        
    }
    for (auto i: mp){
        cout<<i.first<<" "<<i.second<<endl;
    }
    
    
    int maxi=INT_MIN,ans=INT_MIN;

    for(auto ch:mp){
        if(ch.second>=ans){
        ans=ch.second;
        }
    }
    cout<<ans<<endl;
    cout<<" len "<<(str.length()/k)<<endl;
    cout<<(str.length()/k)-ans;
    
    return 0;

}