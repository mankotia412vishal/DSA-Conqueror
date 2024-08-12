#include <bits/stdc++.h>
using namespace std;
int partition(int *arr,int s,int e){
    int pivot=arr[s];
    int pi=s;

    int k=0;
    for (int  i =s+1; i <= e; i++)
    {
        if(arr[i]<=pivot) k++;
    }
    int ri=k+s;
    swap(arr[ri],arr[pi]);
    pi=ri;

    int i=s,j=e;
    while(i<pi && j>pi){
        while (arr[i]<=pivot) //edge case
        {
            i++;
        }
         while (arr[j]>pivot)
        {
           j--;
        }
        if(i<pi && j>pi){
            swap(arr[i],arr[j]);
        }
    }

    return pi;
}
void QuickSort(int *arr,int s,int e){
    if(s>=e) return;
    int p=partition(arr,s,e);
    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);

}
int main(){

    int n=7;
    int arr[]={8,1,3,4,20,50,3};
    int s=0,e=n-1;
    QuickSort(arr,s,e);
     for(auto num:arr){
        cout<<num<<" ";
    }
    return 0;

}