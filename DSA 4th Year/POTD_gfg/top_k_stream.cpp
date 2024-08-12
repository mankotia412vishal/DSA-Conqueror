#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> kTop(vector<int> &arr, int N, int K)
{
    vector<vector<int>> ans;
    map<int, int> mp;
    vector<int> t;
    int index=0;
    queue<int> q;

    for (auto i : arr)
    {
        if (mp.find(i) != mp.end())
        {
            // the element that is already present in the map swap it and insert it the front of the map 
            


            
        }
        else{
            mp[arr[i]]++;
            for(auto j:mp){
                t.push_back(j.first);
            }
            q.push(i);
        }
        ans.push_back(t);
        index++;

        
    }
    for (auto i : mp)
    {
        cout << i.first << " -> " << i.second << endl;
    }
    return ans;
}

int main()
{

    int n = 5, k = 4;

    vector<int> ans{5, 2, 1, 3, 2};
    vector<vector<int>> sol = kTop(ans, n, k);

    return 0;
}