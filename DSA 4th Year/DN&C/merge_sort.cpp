#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int s, int e)
{

    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int *left = new int[len1];
    int *right = new int[len2];

    // copy values
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        left[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        right[i] = arr[k++];
    }

    // merge
    int leftIndex = 0, rightIndex = 0, mainArrayIndex = s;
    while (leftIndex < len1 && rightIndex < len2)
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
    // copy logic for ist array
    while (leftIndex < len1)
    {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    while (rightIndex < len2)
    {
        arr[mainArrayIndex++] = right[rightIndex++];
    }
    delete []left;
    delete[] right;
}
void MergeSort(vector<int> &arr, int s, int e)
{

    // base casee
    if (s >= e)
    {
        return;
    }
    // mid find kar liya
    int mid = s + (e - s) / 2;

    // left part ke liye call mar di
    MergeSort(arr, s, mid);

    // right part ke liye call mar di
    MergeSort(arr, mid + 1, e);

    // Merge two sorted arrays
    cout<<"Start is "<<s<<"    "<<"End is "<<e<<endl;
    merge(arr, s, e);
}
int main()
{

    vector<int> arr{38, 27, 43, 3, 9, 20};
    int s = 0, e = arr.size() - 1;
    MergeSort(arr, s, e);
    for(auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}