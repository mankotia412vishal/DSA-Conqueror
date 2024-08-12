#include <bits/stdc++.h>
using namespace std;
void Merge(int arr[],int s,int e){
    int mid=(s+e)/2;
    int l1=(mid-s)+1;
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
    int li=0 ,ri=0;
    int mAI=s;
    while(li<l1 && ri<l2){
        if(left[li]<right[ri]){
            arr[mAI++]=left[li++];
        }
        else{
            arr[mAI++]=right[ri++];
        }
    }
    while(li<l1){
        
            arr[mAI++]=left[li++];
        
       
    }
    while(ri<l2){
            arr[mAI++]=right[ri++];         
    }
    

}
void MergeSort(int arr[],int s,int e){
    // BC
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    MergeSort(arr,s,mid);
    MergeSort(arr,mid+1,e);
    cout<<arr[s]<<" ---> "<<arr[e]<<endl;

    Merge(arr,s,e);
}
int main(){

    int arr[6]={38,27,43,3,9,20};
    int n=6;
    int s=0,e=n-1;
    MergeSort(arr,s,e);

    for (auto  i :arr)
    {
      cout<<i<<" ";
    }
    
    return 0;

}