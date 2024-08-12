/*

Input: nums = [5,3,2,10,15], x = 1
Output: 1
Explanation: We can select nums[1] = 3 and nums[2] = 2.
They are at least 1 index apart, and their absolute difference is the minimum, 1.
It can be shown that 1 is the optimal answer.

*/
#include <bits/stdc++.h>
using namespace std;

 
int main(){

    //  nums = [5,3,2,10,15], x = 1
    int n=5;
    vector<int> nums={5,3,2,10,15};
    int x=1;
    int ans=INT_MAX;
    for (int  i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(i-j>=x){
            
               ans=min(ans,abs(nums[i]-nums[j]));
           }
        }
        
    }
    cout<<ans<<endl;


    return 0;

}