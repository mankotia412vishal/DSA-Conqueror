/*
00331. Find the Maximum Length of a Good Subsequence I
User Accepted:2105
User Tried:4680
Total Accepted:2389
Total Submissions:9774
Difficulty:Medium
You are given an integer array nums and a non-negative integer k. A sequence of integers seq is called good if there are at most k indices i in the range [0, seq.length - 2] such that seq[i] != seq[i + 1].

Return the maximum possible length of a good subsequence of nums.



Example 1:

Input: nums = [1,2,1,1,3], k = 2

Output: 4

Explanation:

The maximum length subsequence is [1,2,1,1,3].

Example 2:

Input: nums = [1,2,3,4,5,1], k = 0

Output: 2

Explanation:

The maximum length subsequence is [1,2,3,4,5,1].



Constraints:

1 <= nums.length <= 500
1 <= nums[i] <= 109
0 <= k <= min(nums.length, 25)

*/
#include <bits/stdc++.h>
using namespace std;
int maximumLength(vector<int> &nums, int k)
{
    /*
    Line 6: Char 28: runtime error: shift exponent 100 is too large for 32-bit type 'int' (solution.cpp)
SUMMARY: UndefinedBehaviorSanitizer: undefined-behavior solution.cpp:6:28
Last executed input:
Hidden for this testcase during contest.
    */
    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int cnt = 0;
            int last = -1;
            for (int l = i; l <= j; l++)
            {
                if (nums[l] != last)
                {
                    cnt++;
                    last = nums[l];
                }
            }
            if (cnt <= k)
            {
                ans = max(ans, j - i + 1);
            }
        }
    }
    return ans;
    
     
}
int main()
{
    // vector<int> nums = {1, 2, 1, 1, 3};
    
    int k = 2;
    cout << maximumLength(nums, k);

    return 0;
}