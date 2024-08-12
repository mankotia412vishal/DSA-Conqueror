#include <bits/stdc++.h>
using namespace std;
void ReverseArray(int arr[],int n,int i){
    // base case 
    if(i>=n) return;

    // RR
    ReverseArray(arr,n,i+1);
    cout<<arr[i]<<" ";
}
int main(){

    int arr[]={1,2,3,4,5};
    int n=5;
    int i=0;
    ReverseArray(arr,n,i);
    return 0;

}