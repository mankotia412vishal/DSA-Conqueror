#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int s, int e, int key)
{
     
    int mid=s+(e-s)/2;
    while (s<=e)
    {
      if(arr[mid]==key) return mid;
      else if(arr[mid] <key) s=mid+1;
      else e=mid-1;
      mid=s+(e-s)/2;
    }
    return -1;
}
int findPivot(vector<int> arr, int target)
{
    int s = 0, e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (mid + 1 < arr.size() - 1 && arr[mid] > arr[mid + 1])
            return mid;
        if (mid - 1 >= 0 && arr[mid] < arr[mid - 1])
            return mid - 1;
        if (arr[s] <= arr[mid])
            s = mid + 1;
        else
            e = mid - 1;
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{

    // vector<int> nums{4, 5, 6, 7, 0, 1, 2};
    vector<int> nums{4};
    int target = 3;
    int ans = findPivot(nums, target);
    if (target >= nums[0] && target <= nums[ans])
        cout << binarySearch(nums, 0, ans, target);
    else
        cout << binarySearch(nums, ans + 1, nums.size() - 1, target);
    return 0;
}