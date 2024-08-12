#include <bits/stdc++.h>
using namespace std;
int solveUsingRecursion(int coins[], int n, int amount, int dp[]) {
    // base case
    if (amount == 0) {
        return 0;
    }
    if (amount < 0) {
        return INT_MIN;
    }

    if (dp[amount] != -1) {
        return dp[amount];
    }

    int mini = INT_MAX;
    for (int i = 0; i < n; i++) {
        int ans = solveUsingRecursion(coins, n, amount - coins[i], dp);
        if (ans != INT_MIN) {
            mini = min(1 + ans, mini);
        }
    }

    dp[amount] = mini;
    return mini;
}

int main() {
    int amount = 10;
    int n = 3;
    int coins[] = {1, 2, 5};

    int dp[amount + 1];
    memset(dp, -1, sizeof(dp));

    cout << solveUsingRecursion(coins, n, amount, dp);

    return 0;
}
