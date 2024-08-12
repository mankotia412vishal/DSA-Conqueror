#include <bits/stdc++.h>
using namespace std;
int main(){

    unordered_map<int ,int> mp;
    vector<int> fre{1,2,4,2,1,3,6,5,5,6,4};
    for (int i = 0; i < fre.size(); i++)
    {
        int a=fre[i];
        mp[a]++;
    }
    for (auto i:mp)
    {
        if(i.second==1){
            cout<<i.first<<" \n";
        }
    }
    
    
    return 0;

}