#include <bits/stdc++.h>
using namespace std;
int main(){

    // vector<int> arr{1,3,4,2,2};
    vector<int> arr{3,1,3,4,2};
    unordered_map<int,int> ans;

    for (int  i = 0; i < arr.size(); i++)
    {
        ans[arr[i]]++;
    }
    for (auto i : ans)
    {
        if(i.second>1){
            cout<<i.first;
        }
    }
    
    
    return 0;

}