#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[3]={5,1,6};
    int n=3;
    // I want to print all the subsets of the array and sdo its xor of each and every sibset
    // and return its sum
    int sum=0;
    for(int i=0;i<(1<<n);i++){
        int temp=0;
        for(int j=0;j<n;j++){
            if(i&(1<<j)){
                // cout<<arr[j]<<" ";
                temp^=arr[j];
            }
        }
        // cout<<endl;
        sum+=temp;
    }
    cout<<sum<<endl;

    
     
    
    return 0;

}