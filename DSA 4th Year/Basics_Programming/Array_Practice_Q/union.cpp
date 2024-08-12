#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> a1{2, 2, 3, 4, 5};
    vector<int> a2{1, 1, 2, 3, 4};

    unordered_map<int, int> mp;
    for (int  i = 0; i < a1.size(); i++)
    {
         int a=a1[i];
         mp[a]++;
    }
    for (int  i = 0; i < a2.size(); i++)
    {
         int a11=a2[i];
         mp[a11]++;
    }
    for (auto i: mp)
    {
        
            cout<<i.first<<" ";
         
    }
    
    
}