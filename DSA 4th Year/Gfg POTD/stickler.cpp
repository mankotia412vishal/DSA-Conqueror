#include <bits/stdc++.h>
using namespace std;
int FindMaxSum(int arr[], int n, int &sum){

    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    if(n==2){
        return max(arr[0],arr[1]);
    }
    int dp[n];
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    for(int i=2;i<n;i++){
        dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
    }
    sum=dp[n-1];
    return dp[n-1];
    
    
}
     
 

int main(){

    int arr[]={6,5,5,7,4};
    int n=5;
    int sum=0;
    int i=0;
    cout<<FindMaxSum(arr,n,sum);
    // cout<<sum<<endl;
    return 0;

}