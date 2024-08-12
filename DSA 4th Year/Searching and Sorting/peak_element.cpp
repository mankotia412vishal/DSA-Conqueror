#include <bits/stdc++.h>
using namespace std;
int pivot(vector<int> arr)
{
    int s = 0, e = arr.size() - 1;

    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] > arr[mid + 1])
        {
            return mid;
        }

        if (arr[mid] < arr[mid - 1])
        {
            return mid - 1;
        }

        if (arr[s] >= arr[mid])
        {
            e = mid - 1;
        }

        else
            s = mid + 1;
        ;

        mid = s + (e - s) / 2;
    }
}
int main()
{

    vector<int> arr{3, 4, 5, 6, 7, 1, 2};

    int a = pivot(arr);
    cout << arr[a] << endl;

    return -1;
}