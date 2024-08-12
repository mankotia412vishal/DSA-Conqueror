#include <bits/stdc++.h>
using namespace std;
int BinarySearch(vector<int>arr,int s,int e,int key){
    // base case 
    if(s>e) return -1;

    int mid=(s+e)/2;

    if(arr[mid]==key) return mid;
        return arr[mid]>key?BinarySearch(arr,s,mid-1,key):BinarySearch(arr,mid+1,e,key);

    // if(arr[mid]>key) {
    //   return   BinarySearch(arr,s,mid-1,key);
    // }
    // else return BinarySearch(arr,mid+1,e,key);

}
int main(){

    vector<int> arr{1,2,3,4,5};
    int s=0,e=arr.size()-1;
    int key=4;
    int ans=BinarySearch(arr,s,e,key);
     cout<<"Answer is "<<arr[ans]<<endl;

    return 0;

}