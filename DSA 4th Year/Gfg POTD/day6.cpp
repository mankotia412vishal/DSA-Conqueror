#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<vector<int>> ans{{1, 1, 1, 1}, {2, 2, 2, 2}, {3, 3, 3, 3}, {4, 4, 4, 4}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << ans[j][i] << " ";
        }
        cout << "\n";
    }

    return 0;
}