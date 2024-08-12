#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> &a, pair<int, int> &b)
{
    cout << "comparing " << a.second << " and " << b.second << endl;
    return a.second < b.second;
}
int main()
{
    vector<pair<int, int>> ans{
        {1, 2},
        {3, 4},
        {0, 6},
        {5, 7},
        {8, 9},
        {5, 9},
    };
    sort(ans.begin(), ans.end(), comp);

    for (auto x : ans)
    {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}