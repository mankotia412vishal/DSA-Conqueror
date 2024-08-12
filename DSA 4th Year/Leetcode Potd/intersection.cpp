#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> v1{4, 9, 5};
    vector<int> v2{9, 4, 9, 8, 4};

    int n1 = v1.size();
    int n2 = v2.size();
    // vector<int> flagg;
    vector<int> b1(n1, 0);
    vector<int> b2(n2, 0);

    vector<int> ans;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (b1[i] == 0 && b2[j] == 0 && v2[j] == v1[i])
            {
                ans.push_back(v1[i]);
                b1[i] = 1;
                b2[j] = 1;
            }
        }
    }
    unordered_set<int> s;

    cout << "Printing the set ";

    for (auto i : ans)
    {
        s.insert(i);
    }
    ans.clear();
    for (auto i : s)
    {
        ans.push_back(i);
    }

    for (auto i : ans)
    {
        cout << i << " ";
    }
}