#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int s, int e)
{
    // step 1 pivot choose karo
    int pivot = arr[s];
    int pivotIndex = s;

    // step2 find the right position of the pivot element
    int x = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivot)
        {
            x++;
        }
    }
    int rightpos = s + x;
    // swap()
    swap(arr[pivotIndex], arr[rightpos]);
    pivotIndex = rightpos;
    int i = s, j = e;
    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i], arr[j]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    // find karo pivot element index
    int pivotIndex = partition(arr, s, e);
    // left
    quickSort(arr, s, pivotIndex - 1);
    // right
    quickSort(arr, pivotIndex + 1, e);
}
int main()
{

    int arr[3] = {10, 1, 9};
    int n = 3, s = 0, e = n - 1;
    quickSort(arr, s, e);
    for (auto x : arr)
        cout << x << ' ';
    return 0;
}