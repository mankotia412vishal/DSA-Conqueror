#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=6;
    // bottom up approach
    // step 1 create a dp array
    vector<int>dp(n+1,-1);

    // step 2 check base cases for top to down 

    dp[0]=0;
    dp[1]=1;
    // step 3 2->n tak loop
    for (int i = 2; i <= n; i++)
    {
       dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n]<<endl;
    


    return 0;

}