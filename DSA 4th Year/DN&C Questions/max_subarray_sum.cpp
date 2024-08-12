#include <bits/stdc++.h>
using namespace std;
int maxSumArrayHelper(vector<int>& nums,int start ,int end){
    // base case
    if(start>=end) return nums[start];
    int maxLeftBorderSum=INT_MIN,maxRightBorderSum=INT_MIN;
   
    int mid=start+(end-start)/2;

    // left()
   int  maxLeftSum=  maxSumArrayHelper(nums,start,mid);
    // right 
    int macRightSum=maxSumArrayHelper(nums,mid+1,end);

    // cros border
    int  leftBorderSum=0,rightborderSum=0;
    for(int i=mid;i>=start;i--){
        leftBorderSum+=nums[i];
        if(leftBorderSum>maxLeftBorderSum){
            maxLeftBorderSum=leftBorderSum;
        }
    }
     for(int i=mid+1;i<=end;i++){
        rightborderSum+=nums[i];
        if(rightborderSum>maxRightBorderSum){
            maxRightBorderSum=rightborderSum;
        }
    }
    int crossBorderSum=maxRightBorderSum+maxLeftBorderSum;
    cout<<maxLeftSum<<" "<<macRightSum<<" "<<crossBorderSum<<endl;
    return max(crossBorderSum,max(maxLeftSum,macRightSum));
}
int main(){

    //     Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
    // Output: 6
    // Explanation: The subarray [4,-1,2,1] has the largest sum 6.
    vector<int>nums{-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSumArrayHelper(nums,0,nums.size()-1);



    return 0;

}