#include <bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e){
    
    
    
    int total_elements=e-s+1;
    int gap= (total_elements/2)+(total_elements%2);
    
    while (gap>0)
    {
       
       int i=0,j=gap;
       while (j<=e)
       {
        
        if(arr[i]>arr[j]){
            swap(arr[i],arr[j]);
        }
        i++,j++;
       }
      gap=(gap<=1)?0:(gap/2)+(gap%2);
       
    }
    for (auto i =0;i<=e;i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    

}
void MergeSort(int *arr,int s,int e){
    // base case
    if(s>=e) return;

    int m=s+(e-s)/2;

    // left
    MergeSort(arr,s,m);


    // right
     MergeSort(arr,m+1,e);
     cout<<"start "<<s<<" end "<<e<<endl;
     cin.get();

     merge(arr,s,e);

}
int main(){

    int n=10;
    int arr[10]={1,2,8,9,12,13,3,4,7,10};

    MergeSort(arr,0,n-1);
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;

}