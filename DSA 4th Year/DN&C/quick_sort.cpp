#include <bits/stdc++.h>
using namespace std;
int partition(int *arr, int s, int e)
{
    // step1 choose pivot element

    int pivot = arr[s];
    int pivotIndex = s;

    // step 2 find the right position for pivot elment and place it there
    // edge case
    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            count++;
        }
    }

    // jab mein loop se bhar aya toh mere pass pivot ki right position ready haii
    int rightIndex = s + count;
    swap(arr[pivotIndex], arr[rightIndex]);
    pivotIndex = rightIndex;
     

    // step 3 left mein chote aur right mein bhade
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        // edge case
        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] >= pivot)
        {
            j--;
        }
        //  element mil gye swap ke liye
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}
void QuickSort(int *arr, int s, int e)
{
    // base case
    if (s >= e)
        return;

    int p = partition(arr, s, e);

    // left
    QuickSort(arr, s, p - 1);
    // right
    QuickSort(arr, p + 1, e);
}
int main()
{

    int arr[] = {8, 1, 3, 4, 20, 50, 30};
    int n = 7;
    int s = 0;
    int e = n - 1;

    QuickSort(arr, s, e);
    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}