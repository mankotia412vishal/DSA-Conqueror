#include <bits/stdc++.h>
using namespace std;
int main(){

//     N = 13
// arr[] = {12, 16, 22, 30, 35, 39, 42, 
//          45, 48, 50, 53, 55, 56}
// K = 4, X = 35


// int n=13;
// int arr[]={12, 16, 22, 30, 35, 39, 42, 
//          45, 48, 50, 53, 55, 56};
// int k=4;
// int x=35;

int n = 5;
    vector<int> arr{1, 2, 3, 6, 10};
    // vector<int> arr{12, 16, 22, 30, 35, 39, 42,
    //                 45, 48, 50, 53, 55, 56};
    int k = 3, x = 4;
    int l=lower_bound(arr.begin(),arr.end(),x)-arr.begin();

 
cout<<l<<endl;
    return 0;

}