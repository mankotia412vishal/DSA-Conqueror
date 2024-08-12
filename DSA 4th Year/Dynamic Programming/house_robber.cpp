#include <bits/stdc++.h>
using namespace std;
int solveUsingRecursion(int arr[],int n){
    // base cases
    if(n<0) return 0;
    if(n==0) {
         
        return  arr[0];
    }
//    cout<<"Vishal\n";
    // include case
    int include=solveUsingRecursion(arr,n-2)+arr[n];

    // exclude case 
    int exclude=solveUsingRecursion(arr,n-1)+0;

    return max(include,exclude);


}
int solveUsingMem(int arr[],int n,vector<int>&dp){
     if(n<0){
            return 0;
        }
        if(n==0) return arr[0];
        // step 3
        if(dp[n]!=INT_MIN) return dp[n];

        // include
        // step 2 save answer in dp array
        int include=solveUsingMem(arr,n-2,dp)+arr[n];
        // exclude
          int exclude=solveUsingMem(arr,n-1,dp)+0;
            dp[n]=max(include,exclude);
          return dp[n];
}
int main(){

    int nums[4]={1,2,3,1};
    int n=4,i=0;
    vector<int>dp(n+2,INT_MIN);
    cout<<solveUsingMem(nums,n-1,dp)<<endl;
    cout<<solveUsingRecursion(nums,n-1)<<endl;

    return 0;

}