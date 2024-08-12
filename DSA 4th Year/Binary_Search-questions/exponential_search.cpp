#include <bits/stdc++.h>
using namespace std;
int binary_search(vector<int> arr,int s,int e,int x){

    while (s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==x) return mid;
        else if(arr[mid]>x) e=mid-1;
        else s=mid+1;

    }
    return -1;
    
}
int expSearch(vector<int> arr,int n,int x){

    if(arr[0]==x) return 0;
    int i=1;
    while (i<n && arr[i]<=x)
    {
        i*=2;
    }
    return binary_search(arr,i/2,min(i,n-1),x);
    // binary_search
    
}
int main(){

    vector<int> arr{3,4,5,6,11,13,14,15,56,78};
    int n=arr.size();
    int x=56;
    int ans=expSearch(arr,n,x);
    cout<<arr[ans]<<endl;
    return 0;

}