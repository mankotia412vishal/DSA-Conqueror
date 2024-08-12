#include <bits/stdc++.h>
using namespace std;
int SolveUsingRecursion(int n,int k){
    if(n==1){
        return 3;
    }
    if(n==2) return k+(k*(k-1));

    int ans=(SolveUsingRecursion(n-2,k)+SolveUsingRecursion(n-1,k))*(k-1);
    return ans;
}

int SolveUsingMem(int n,int k,vector<int>&dp){
    // base case
    if(n==1){
        return 3;
    }
    if(n==2) return k+(k*(k-1));
    if(dp[n]!=-1){
        return dp[n];
    }

    dp[n] =(SolveUsingMem(n-2,k,dp)+SolveUsingMem(n-1,k,dp))*(k-1);
    return dp[n];

}

int solveUsingTab(int n,int k){
    // step 1 create a dp array
    vector<int>dp(n+1,-1);

    // check Mem base cases
    dp[1]=3;
    dp[2]=(k+(k*(k-1)));

    for (int  i = 3; i <=n; i++)
    {
       dp[i]=(dp[i-2]+dp[i-1])*(k-1);
    }
    return dp[n];
    
}
int main(){
    int n=4,k=3;
    vector<int>dp(n+1,-1);
    // int ans=SolveUsingMem(n,k,dp);
    int ans=solveUsingTab(n,k);


    // int ans=SolveUsingRecursion(n,k);
    cout<<"ans "<<ans<<endl;



    
    return 0;

}