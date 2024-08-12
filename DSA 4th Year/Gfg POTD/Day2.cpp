#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
    // step 1 
    int pivot=arr[s];
    int pivotIndex=s;

    // step 2
    int c=0;
    for (int i = s+1; i <= e; i++)
    {
        if(arr[i]<=pivot){
            c++;
        }
    }
    int rightIndex=s+c;
    swap(arr[rightIndex],arr[pivotIndex]);
    pivotIndex=rightIndex;
    int i=s,j=e;
    while (i<pivotIndex &&j>pivotIndex)
    {
        while (arr[i]<pivot)
        {
           i++;
        }
        while (arr[j]>pivot)
        {
           j--;
        }
        if(i<pivotIndex &&j<pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
    return pivotIndex;
    
}
void QuickSort(int arr[],int s,int e){


    // base case 
    if(s>=e){
        return;
    }

    // partition
    int p=partition(arr,s,e);

    // left
    QuickSort(arr,s,p-1);

    // right
    QuickSort(arr,p+1,e);

}
int main(){

    int n;
    cout<<"Enter the Size of the Array \n";
    cin>>n;
    int arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int s=0,e=n-1;
    QuickSort(arr,s,e);
    for (int  i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;

}