#include <bits/stdc++.h>
using namespace std;
void  Maximum(int *arr,int n,int i,int &maxi){
    // base case 
    if(i>=n) return;
    

    // 1 case solve kar diya 
    if(arr[i]>maxi){
        maxi=arr[i];
    }
    return Maximum(arr,n,i+1,maxi);

}
int main(){

    int arr[]={10,20,30,40,50,56,12};
    int n=7;
    int i=0;
    int maxi=INT_MIN;
    Maximum(arr,n,i,maxi);
    cout<<maxi<<endl;

    return 0;

}