#include <bits/stdc++.h>
using namespace std;
int solveUsingRecursion(int n,int k){
    // base case
    if(n==1) return k;

    if(n==2){
           return k+(k*(k-1));

    }
    int ans=(solveUsingRecursion(n-2,k)+solveUsingRecursion(n-1,k))*(k-1);
    return ans;
}
int solveUsingMem(int n,int k,vector<int>&dp){

 // base case
    if(n==1) return k;

    if(n==2){
           return k+(k*(k-1));

    }
    if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=(solveUsingRecursion(n-2,k)+solveUsingRecursion(n-1,k))*(k-1);
    return dp[n];

}
int main()
{
    // step 1 create a dp array

    

    int n = 4;
    vector<int>dp(n+1,-1);
    int k = 3;

    // int ans = solveUsingRecursion(n, k,dp);
    int ans=solveUsingMem(n,k,dp);
    cout << "Ans : " << ans << endl;
    return 0;
}