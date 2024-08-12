#include <bits/stdc++.h>
using namespace std;
bool isSorted(int *arr,int i,int n){
    // base case
    if(i==n-1) return true;

    if(arr[i+1]<arr[i]) return false;
     return isSorted(arr,i+1,n);


}
int main(){

    int arr[5]={1,2,3,4,5};
    int n=5,  i=0;

    cout<<isSorted(arr,i,n);
    return 0;

}