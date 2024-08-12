#include <bits/stdc++.h>
using namespace std;
/*
Given an integer array nums of unique elements, return all possible
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.



Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]


Constraints:

1 <= nums.length <= 10
-10 <= nums[i] <= 10
All the numbers of nums are unique.
*/
void solve(vector<int> &nums, int index, vector<vector<int>> &ans, vector<int> temp)
{
    if (index == nums.size())
    {
        ans.push_back(temp);
        return;
    }
    solve(nums, index + 1, ans, temp);
    temp.push_back(nums[index]);
    solve(nums, index + 1, ans, temp);
}
int main()
{
    vector<vector<int>> ans;
    vector<int> nums = {1, 2, 3};
    solve(nums, 0, ans, {});
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}