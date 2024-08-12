#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[6] = {10, 1, 9, 2, 4, 6};
    int n = 6;
    for (int round = 0; round < n - 1; round++)
    {
        for (int i = 1; i < n - round; i++)
        {
            if (arr[i]<  arr[i-1])
            {
                swap(arr[i], arr[i-1]);
            }
        }
    }
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}