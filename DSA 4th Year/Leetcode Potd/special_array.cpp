#include <bits/stdc++.h>
using namespace std;
int main(){

    /*4
    100310. Special Array I
User Accepted:11862
User Tried:12438
Total Accepted:12094
Total Submissions:14904
Difficulty:Easy
An array is considered special if every pair of its adjacent elements contains two numbers with different parity.
You are given an array of integers nums. Return true if nums is a special array, otherwise, return false.

 

Example 1:

Input: nums = [1]

Output: true

Explanation:

There is only one element. So the answer is true.

Example 2:

Input: nums = [2,1,4]

Output: true

Explanation:

There is only two pairs: (2,1) and (1,4), and both of them contain numbers with different parity. So the answer is true.

Example 3:

Input: nums = [4,3,1,6]

Output: false

Explanation:

nums[1] and nums[2] are both odd. So the answer is false.
    */
   vector<int> nums={4,3,1,6};
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        if(nums[i]%2==0 && nums[i+1]%2==0){
            cout<<"false";
            break;
        }
        if(nums[i]%2!=0 && nums[i+1]%2!=0){
            cout<<"false";
             break;
        }
    }
    return 0;

}