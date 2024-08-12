#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr{12, 9, 10, 13, 1, 8, 11};

    int k = 7;
    set<pair<int, int>> st;
    sort(arr.begin(), arr.end());
    int i = 0, j = 1;
    int diff = arr[j] - arr[i];
    // int diff = arr[i] - arr[j];
    
    while (j < arr.size())
    {

        if (diff == k)
        {

            // cout << "(" << arr[i] << "," << arr[j] << ")\n";
            st.insert({arr[i], arr[j]});
            i++;
            j++;
        }
        else if (diff > k)
        {

            i++;
        }
        else
        {

            j++;
        }
        diff = arr[j] - arr[i];
    }
    for (auto i : st)
    {
        cout << "(" << i.first << ", "
             << i.second << ")"
             << " ";
    }

    return 0;
}