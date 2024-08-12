#include <bits/stdc++.h>
using namespace std;
int binarySearch(int *arr, int start, int end, int key)
{
    // base case
    if (start > end)
    {
        return -1;
    }

    int mid = (start + end) / 2;
    if (arr[mid] == key)
        return mid;

    return (arr[mid] < key) ? binarySearch(arr, mid + 1, end, key) : binarySearch(arr, start, mid - 1, key);
}
int main()
{
    int n = 5;
    int arr[] = {4, 5, 66, 113, 891};
    int start = 0;
    int end = n - 1;

    cout << binarySearch(arr, start, end, 14);

    return 0;
}