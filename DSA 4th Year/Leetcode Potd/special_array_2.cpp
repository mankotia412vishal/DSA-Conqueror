#include <bits/stdc++.h>
using namespace std;
int main()
{

    /*
    100308. Special Array II
User Accepted:3002
User Tried:6756
Total Accepted:3061
Total Submissions:11179
Difficulty:Medium
An array is considered special if every pair of its adjacent elements contains two numbers with different parity.

You are given an array of integer nums and a 2D integer matrix queries, where for queries[i] = [fromi, toi] your task is to check that subarray nums[fromi..toi] is special or not.

Return an array of booleans answer such that answer[i] is true if nums[fromi..toi] is special.


Example 1:

Input: nums = [3,4,1,2,6], queries = [[0,4]]

Output: [false]

Explanation:

The subarray is [3,4,1,2,6]. 2 and 6 are both even.

Example 2:

Input: nums = [4,3,1,6], queries = [[0,2],[2,3]]

Output: [false,true]

Explanation:

The subarray is [4,3,1]. 3 and 1 are both odd. So the answer to this query is false.
The subarray is [1,6]. There is only one pair: (1,6) and it contains numbers with different parity. So the answer to this query is true.


Constraints:

1 <= nums.length <= 105
1 <= nums[i] <= 105
1 <= queries.length <= 105
queries[i].length == 2
0 <= queries[i][0] <= queries[i][1] <= nums.length - 1

    */
    vector<bool> ans;
    vector<int> nums = {3, 4, 1, 2, 6};
    vector<vector<int>> queries = {{0, 4}};
    int rows = queries.size();
    for (int i = 0; i < rows; i++)
    {
        int from = queries[i][0];
        int to = queries[i][1];
        int n = to - from + 1;
        bool flag = true;
        for (int j = from; j < to; j++)
        {
        if(nums[i]%2==0 && nums[i+1]%2==0){
            flag=false;
            break;
        }
        if(nums[i]%2!=0 && nums[i+1]%2!=0){
            flag=false;
             break;
        }
        }
        ans.push_back(flag);
    }

        return 0;
    }