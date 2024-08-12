#include <bits/stdc++.h>
using namespace std;
int countInversions(int arr[], int n)
{
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if(arr[i]>arr[j]) c++;
        }
    }
    return c;
}
int main()
{

    int arr[4] = {8, 4, 2, 1};
    int n = 4;
    cout << countInversions(arr, n);
    return 0;
}