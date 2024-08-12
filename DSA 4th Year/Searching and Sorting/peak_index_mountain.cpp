#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> arr{0,1,0};
     int e=arr.size()-1;
        int s=0;
        int mid=s+(e-s)/2;
        while(s<e){
            if(arr[mid]<arr[mid+1]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        cout<<s<<endl;
    return 0;

}