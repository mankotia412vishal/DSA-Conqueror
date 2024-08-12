#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr{0, 1, 1, 0, 1, 0, 0, 1, 0, 0};
    int s = 0, e = arr.size() - 1;
    while (s < e)
    {
        if (arr[s] == 0)
        {
            s++;
        }
        if (arr[e] == 1)
        {
            e--;
        }
        else
        {
            swap(arr[s], arr[e]);
            e--;
        }
    }
    for (auto i:arr)
    {
       cout<<i<<" ";
    }
    
}