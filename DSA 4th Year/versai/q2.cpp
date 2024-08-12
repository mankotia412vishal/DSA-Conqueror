#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr{1,2,1,2,1,3,3,3,3,5};
    unordered_map<int,int>mp;
    for (int  i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }
    for (auto i : mp)
    {
     
     for (int  j =0; j<i.second ;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;

}