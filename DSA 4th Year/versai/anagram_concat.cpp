#include <bits/stdc++.h>
using namespace std;
int main(){

    string str="abba";
    map<char,int>mp;

    for(auto c:str){
        mp[c]++;

    }
    int ans=INT_MAX;
    for(auto c:mp){
       if(c.second<=ans){
        ans=c.second;
       }
    }
    bool flag=true;
    for(auto c:mp){
        if(c.second%ans!=0){
            flag==false;
        }
    }
    cout<<ans<<endl;
    return 0;

}
int solve(int n,unordered_map<char,int>mp)
    {
        int ans=0;
        for(auto it:mp)
         {
            if(it.second%n!=0)return INT_MAX;
            ans+=(it.second/n);
        }
        return ans;
    }
    int minAnagramLength(string s) {
        unordered_map<char,int>mp;
        int mini=INT_MAX;
        for(auto it:s){
            mp[it]++;
            
        }
        for(auto it:mp)
        {
            mini=min(mini,it.second);
        }
        int ans=INT_MAX;
        for(int i=1;i<=mini;i++)
        {
            if(mini%i==0)
            {
                ans=min(ans,solve(i,mp));
            }
        }
        if(ans==INT_MAX)return s.length();
        return ans;
        
    }
};