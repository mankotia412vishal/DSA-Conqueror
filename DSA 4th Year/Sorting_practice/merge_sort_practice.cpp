#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int s, int e)
{
    int mid = (s + e) / 2;

    int l1 = mid - s + 1;
    int l2 = e - mid;

    int *left = new int[l1];
    int *right = new int[l2];

    int k = s;
    for (int i = 0; i < l1; i++)
    {
        left[i] = arr[k++];
    }

    k = mid + 1;
    for (int i = 0; i < l2; i++)
    {
        right[i] = arr[k++];
    }
    int leftArrayIndex = 0, rightArrayIndex = 0, mainArrayIndex = s;
    while (leftArrayIndex < l1 && rightArrayIndex < l2)
    {
        if (left[leftArrayIndex] < right[rightArrayIndex])
        {
            arr[mainArrayIndex++] = left[leftArrayIndex++];
        }
        else
        {
            arr[mainArrayIndex++] = right[rightArrayIndex++];
        }
    }
    while (leftArrayIndex < l1)
    {
        arr[mainArrayIndex++] = left[leftArrayIndex++];
    }
    while (rightArrayIndex < l2)
    {

        arr[mainArrayIndex++] = right[rightArrayIndex++];
    }
}
void mergeSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    // left
    mergeSort(arr, s, mid);
    // right
    mergeSort(arr, mid + 1, e);

    // merge
    merge(arr, s, e);
}
int main()
{

    int arr[10] = {10, 9, 8, 1, 7, 6, 5, 2, 3, 4};
    int n = 10;
    int s = 0, e = n - 1;
    mergeSort(arr, s, e);
    
    for(auto x:arr) cout<<x<<" ";

    return 0;
}