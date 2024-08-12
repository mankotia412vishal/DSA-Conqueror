#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> arr{1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int s = 0, e = arr.size() - 1;
    int d = e + 1 - k;
    int t = d - 1;
    while (s <= t)
    {
        swap(arr[s++], arr[t--]);
    }
    while (d <= e)
    {
        swap(arr[d++], arr[e--]);
    }

    s = 0, e = arr.size() - 1;
    while (s <= e)
    {
        swap(arr[s++], arr[e--]);
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}

 