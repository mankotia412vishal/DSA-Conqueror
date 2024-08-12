#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> a{1, 3, 1, 2, 3, 4, 4};
    // int ans = 0;
    // for (int i = 0; i < a.size(); i++)
    // {
    //     ans ^= a[i];
    // }
    // cout << "Answer is " << ans << endl;

    unordered_map<int, int> freq;
    for (int i = 0; i < a.size(); i++)
    {
        int a1 = a[i];
        freq[a1]++;
    }

    for (auto i : freq)
    {
        if (i.second == 1)
        {
            cout << i.first << endl;
        }
    }
}