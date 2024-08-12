#include <bits/stdc++.h>
using namespace std;

int maximumSumSubsequence(vector<int>& nums, vector<vector<int>>& queries) {
    int n = nums.size();
    int m = queries.size();
    const long long mod = 1e9+7;
    
    // Function to calculate the maximum sum of a subsequence with non-adjacent elements
    auto calculateMaxSum = [](const vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0LL;
        // deduced return type "int" conflicts with previously deduced type "long long"C/C++(2546

        if (n == 1) return max(0, arr[0])LL;
        vector<long long> dp(n, 0);
        dp[0] = max(0, arr[0]);
        dp[1] = max(dp[0], (long long)arr[1]);
        for (int i = 2; i < n; ++i) {
            dp[i] = max(dp[i - 1], dp[i - 2] + arr[i]);
        }
        return dp[n - 1];
    };
    
    // Initial calculation of the maximum sum
    long long currentMaxSum = calculateMaxSum(nums);
    long long ans = 0;
    
    for (const auto& query : queries) {
        int posi = query[0];
        int xi = query[1];
        nums[posi] = xi;
        currentMaxSum = calculateMaxSum(nums);
        ans = (ans + currentMaxSum) % mod;
    }
    
    return ans;
}

int main() {
    vector<int> nums = {3, 5, 9};
    vector<vector<int>> queries = {{1, -2}, {0, -3}};
    cout << maximumSumSubsequence(nums, queries) << endl;
    return 0;
}
