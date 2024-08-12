#include <bits/stdc++.h>
using namespace std;
int main()
{

    // vector<int> arr{1, 1, 2, 5, 5};
    // vector<int> arr{-4,-4,-4,-4,-4,0,0,0,0,1,0};
    vector<int> arr{-4,-4, 9,9,9,1,5,9,5,5};
    int n = 10;
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {

        mp[arr[i]]++;
    }
    vector<int> t;

    for (auto i : mp)
    {
        t.push_back(i.second);
        cout << i.second << " ";
    }
    cout << endl;
    for (int i=0;i<t.size();i++)
    {
        cout << t[i] << " ";
    }
    cin.get();

     sort(t.begin(),t.end());

    for (int i = 2; i < t.size(); i++)
    {
        if (t[i] != t[i - 1])
        {
            cout << "1";
             
        }
    }

    return -1;
}