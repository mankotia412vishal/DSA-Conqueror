#include <bits/stdc++.h>
using namespace std;
void Maximum(int *arr,int n,int i,int &mini){
    // base case
    if(i>=n) return;

    // 1. case solve kar lunga baki recursion solve kar lega
    if(arr[i]<mini){
        mini=arr[i];
    }
    Maximum(arr,n,i+1,mini);
}
int main(){

     int arr[]={10,20,30,40,50,56,12};
    int n=7;
    int i=0;
    int mini=INT_MAX;
    Maximum(arr,n,i,mini);
    cout<<mini<<endl;
    return 0;

}