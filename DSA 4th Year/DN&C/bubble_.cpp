#include <bits/stdc++.h>
using namespace std;
int main()
{

    int arr[] = {5, 4, 3, 2, 1, 6};
    int n = 6;
    for (int r = 1; r < n ; r++)
    {
        for (int i = 0; i < n - r; i++)
        {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        cout<<"pass "<<r<<endl;
        for (auto num : arr)
        {
            cout << num << " ";
        }
        cin.get();
    }

    return 0;
}