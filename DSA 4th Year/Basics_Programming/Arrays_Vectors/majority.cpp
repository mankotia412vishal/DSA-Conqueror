#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> ans{3,1,1,3,1};
    unordered_map<int,int>mp;
    for (int  i = 0; i < ans.size(); i++)
    {
       
       mp[ans[i]]++;
    }
    int max=INT_MIN,a;
    for (auto i: mp)
    {
       if(i.second>=max){
        max=i.second;
        a=i.first;
       }
    }
    cout<<"Max is "<<a<<" -> "<<max<<endl;
    
    
    return 0;

}