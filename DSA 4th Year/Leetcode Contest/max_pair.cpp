#include <bits/stdc++.h>
using namespace std;
int maxSum(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans = nums;

    for (int i = 1; i < n; i++)
    {
        int no1 = nums[i - 1];

        int no2 = nums[i];
        cout << no2 << endl;
        vector<int> a1;
        vector<int> a2;
        while (no1 != 0)
        {

            int ld = no1 % 10;

            a1.push_back(ld);
            no1 /= 10;
        }
        while (no2 != 0)
        {
            int ld = no2 % 10;

            a2.push_back(ld);
            no2 /= 10;
        }
        int max1 = *max_element(a1.begin(), a1.end());
        // int max2 = *max_element(a2.begin(), a2.end());
        for (auto ik: a2)
        {
             if(max1==ik){
                 ans[i]=nums[i]+nums[i-1];
             }
        }

        // for (auto i1 :a1)
        // {
        //     for (auto i2:a2)
        //     {

        //     if(i1==i2){
        //         cout<<i1<<" "<<i2<<endl;

        //          ans[i]=nums[i]+nums[i-1];

        // }
        // }
        //     }

        // return *max_element(ans.begin(), ans.end());
    }




    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    // cin.get();
    int a = *max_element(ans.begin(), ans.end());
    return a;
}


int maxSum1(vector<int>& nums) {
        int ans = -1;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                int x = nums[i], y = nums[j];
                cout<<x<<" ---  "<<y<<endl;
                cin.get();
                int a = 0, b = 0;
                while (x) {
                    a = max(a, x % 10);
                    x /= 10;
                }
                while (y) {
                    b = max(b, y % 10);
                    y /= 10;
                }
                if (a == b) ans = max(ans, nums[i] + nums[j]);
                cout<<"Answer is "<<ans<<endl;
            }
        }
        return ans;
    }
int main()
{

    vector<int> nums = {31, 25, 72, 79, 74};
    // vector<int> nums = {51, 71, 17, 24, 42};
    cout << maxSum1(nums) << endl;

    return 0;
}