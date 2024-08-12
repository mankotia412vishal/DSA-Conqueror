#include <bits/stdc++.h>
using namespace std;

int firstOcc(vector<int> arr){
    int s=0,e=arr.size()-1,index=-1,target=4;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(arr[mid]==target){
            index=mid;
            e=mid-1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return index;
}
int lastOcc(vector<int> arr){
    int s=0,e=arr.size()-1,index=-1,target=4;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(arr[mid]==target){
            index=mid;
            s=mid+1;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return index;
}
int main(){

    
    vector<int> arr{1,2,3,4,4,5,7};
    

    cout<<"The index of first occurnece of target element is "<<firstOcc(arr)<<endl;
    cout<<"The index of last occurnece of target element is "<<lastOcc(arr)<<endl;

    auto ans1=lower_bound(arr.begin(),arr.end(),4);
    cout<<ans1-arr.begin()<<endl;
    auto ans2=upper_bound(arr.begin(),arr.end(),4);
    cout<<ans2-arr.begin()<<endl;
      
    return 0;

}