#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[6]={1,2,3,2,1,4};
    unordered_map<int,int>mp;
    for (int  i = 0; i < 6; i++)
    {
        mp[arr[i]]++;
    }
    vector<int>ans;
    for(auto no:mp){
        // cout<<no.first<<" --> "<<no.second<<endl;
        if(no.second==1){
            // cout<<no.first<<"-->"<<no.second<<endl;
            ans.push_back(no.first);
        }
    }
    sort(ans.begin(),ans.end());
    for (auto i: ans)
    {
         cout<<i<<" ";
    }
    
    return 0;

}