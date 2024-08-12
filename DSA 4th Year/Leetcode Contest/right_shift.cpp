/*

8039. Minimum Right Shifts to Sort the Array
User Accepted:11309
User Tried:13119
Total Accepted:11664
Total Submissions:21368
Difficulty:Easy
You are given a 0-indexed array nums of length n containing distinct positive integers. Return the minimum number of right shifts required to sort nums and -1 if this is not possible.

A right shift is defined as shifting the element at index i to index (i + 1) % n, for all indices.

 

Example 1:

Input: nums = [3,4,5,1,2]
Output: 2
Explanation: 
After the first right shift, nums = [2,3,4,5,1].
After the second right shift, nums = [1,2,3,4,5].
Now nums is sorted; therefore the answer is 2.
Example 2:

Input: nums = [1,3,5]
Output: 0
Explanation: nums is already sorted therefore, the answer is 0.
Example 3:

Input: nums = [2,1,4]
Output: -1
Explanation: It's impossible to sort the array using right shifts.

*/

#include <bits/stdc++.h>
using namespace std;

int minShifts(vector<int> &nums)
{
    int n = nums.size();
    vector<int> sorted = nums;
    sort(sorted.begin(), sorted.end());
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums == sorted)
            return ans;
        int temp = nums[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            nums[j] = nums[j - 1];
        }
        nums[0] = temp;
        ans++;
    }
    return -1;
}

int main()
{
    vector<int> nums = {1,2,4};
    cout << minShifts(nums) << endl;
    return 0;
}