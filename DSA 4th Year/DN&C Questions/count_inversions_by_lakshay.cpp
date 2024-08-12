#include <bits/stdc++.h>
using namespace std;
 long  merge(vector<int> &arr,vector<int>&temp,int mid, int s,int e){
    long  i=s,j=mid+1,k=s,c=0;
    while(i<=mid && j<=e){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            c+=mid-i+1;
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }
    while (s<=e)
    {
        arr[s]=temp[s];
        s++;
    }
     for (int  i = 0; i <= e; i++)
     {
       cout<<arr[i]<<" ";
     }
     cout<<endl;
    return c;
}
long   MergeSort(vector<int> &arr,vector<int>&temp, int s,int e){
    // base case
     long long int c=0;
    if(s>=e) return 0;

    // mid find kar liya
    long long int mid=s+(e-s)/2;
    // left
    c+=MergeSort(arr,temp,s,mid);
    // right
    c+=MergeSort(arr,temp,mid+1,e);

    c+=merge(arr,temp,mid,s,e);

    // 

    return c;
}
int main()
{

    // int n = 4;
    vector<int> arr{4, 8, 2, 1};
    vector<int> temp(arr.size());
    int s = 0, e = arr.size() - 1;
      cout<< MergeSort(arr,temp,s,e);
    return 0;
}
