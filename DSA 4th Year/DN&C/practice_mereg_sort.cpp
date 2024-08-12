#include <bits/stdc++.h>
using namespace std;
void Merge(int *arr,int s,int e){
    int  mid=s+(e-s)/2;
    int l1=mid-s+1;
    int l2=e-mid;
    int *left=new int[l1];
    int *right=new int[l2];
    int k=s;
    for (int  i = 0; i < l1; i++)
    {
         left[i]=arr[k++];
    }
     k=mid+1;
    for (int  i = 0; i < l2; i++)
    {
         right[i]=arr[k++];
    }
    
    int LI=0,RI=0,MAI=s;
    while (LI<l1 && RI<l2)
    {
        if(left[LI]<right[RI]){
            arr[MAI++]=left[LI++];
        }
        else{
            arr[MAI++]=right[RI++];
        }
    }
    while (LI<l1)
    {
            arr[MAI++]=left[LI++];     
    }
    while (RI<l2)
    {
             arr[MAI++]=right[RI++];  
    }
    
}
void MergeSort(int *arr,int start,int end){
    // base case
    if(start>=end) return;

    int mid=start+(end-start)/2;

    // left
    MergeSort(arr,start,mid);

    // right
     MergeSort(arr,mid+1,end);

    //  merge
    Merge(arr,start,end);
}
int main(){
    // int n=6;
    // int arr[]={7,2,3,6,1,5};

//     29
// 1422 1682 8753 7555 639 4966 7376 2730 3906 5743 10037 2224 122 5537 10337 4917 2082 527 5340 4833 8713 4639 7256 302 9930 2776 2306 9271 11185
int n=29;
int arr[]={1422, 1682, 8753, 7555, 639, 4966, 7376, 2730, 3906, 5743, 10037, 2224, 122, 5537, 10337, 4917, 2082, 527, 5340, 4833, 8713, 4639, 7256, 302, 9930, 2776, 2306, 9271, 11185};
    int start=0,end=n-1;
    MergeSort(arr,start,end);
    for(auto num:arr){
        cout<<num<<" ";
    }
    return 0;

}