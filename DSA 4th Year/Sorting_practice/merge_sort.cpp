#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int s, int e){
    int mid = (s + e) / 2;

    // abhi jhape length find kar lunga dono arrays ki
    int l1 = mid - s + 1;

    int l2 = e - mid;

    int *left = new int[l1];
    int *right = new int[l2];

    // elements copy karne haii
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

    // main logic
    int leftIndex = 0, rightIndex = 0, mainArrayIndex = s;
    while (leftIndex < l1 && rightIndex < l2)
    {
        if (left[leftIndex] < right[rightIndex])
        {
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else
        {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }
    while (leftIndex < l1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    while (rightIndex < l2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }
}
void mergeSort(int arr[], int s, int e)
{
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

    int arr[6] = {10, 1, 10, 10, 4, 6};
    int s = 0, e = sizeof(arr) / sizeof(4) - 1;
    mergeSort(arr, s, e);
    for(auto x:arr){
        cout<<x<<" ";
    }
    return 0;
}