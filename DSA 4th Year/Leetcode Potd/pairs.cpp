/*

100321. Find the Number of Good Pairs II
Attempted
Medium
You are given 2 integer arrays nums1 and nums2 of lengths n and m respectively. You are also given a positive integer k.

A pair (i, j) is called good if nums1[i] is divisible by nums2[j] * k (0 <= i <= n - 1, 0 <= j <= m - 1).

Return the total number of good pairs.

 

Example 1:

Input: nums1 = [1,3,4], nums2 = [1,3,4], k = 1

Output: 5

Explanation:

The 5 good pairs are (0, 0), (1, 0), (1, 1), (2, 0), and (2, 2).
Example 2:

Input: nums1 = [1,2,4,12], nums2 = [2,4], k = 3

Output: 2

Explanation:

The 2 good pairs are (3, 0) and (3, 1).

 

Constraints:

1 <= n, m <= 105
1 <= nums1[i], nums2[j] <= 106
1 <= k <= 103
This is thr code logic i have written
 long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
         int c=0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]%(nums2[j]*k)==0 ) c++;
            }
        }
        return c;
    }
    Optimise it to O(n+m) time complexity
    
*/
#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> nums1 = {1,3,4};
    vector<int> nums2 = {1,3,4};
    int k = 1;
    // use has map
    unordered_map<int,int> mp;
    for(int i=0;i<nums2.size();i++){
        mp[nums2[i]]++;
    }
    long long c = 0;
    for(auto x:nums1){
        // A pair (i, j) is called good if nums1[i] is divisible by nums2[j] * k (0 <= i <= n - 1, 0 <= j <= m - 1).
        // nums1[i] is divisible by nums2[j] * k
        // nums1[i] is divisible by nums2[j] * k
        if()
    }

    return 0;

}