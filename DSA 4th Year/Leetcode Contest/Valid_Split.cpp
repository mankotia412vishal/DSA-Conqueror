#include <bits/stdc++.h>
using namespace std;
int validArr(vector<int> &arr, int s, int e)
{
    unordered_map<int, int> mp;
    int ans;
    for (int i = s; i < e; i++)
    {
        mp[arr[i]]++;
    }
    for (auto i : mp)
    {
        cout << i.first << "--> " << i.second << endl;
    }
    cout << "Khatam\n";
    for (int i = s; i < e; i++)
    {
        if (mp[arr[i]] > 1)
        {
            ans = mp[arr[i]];
            cout << ans << "--> " << mp[arr[i]] << endl;
        }
    }
    mp.clear();
    return ans;
}
int minimumIndex(vector<int> &nums)
{
    int s = nums.size(), m;

    if (s % 2 == 0)
    {
        int st = 0, e = s - 1;
        m = s / 2;
        cout << m << "--> mid \n";
        for (int i = st; i <=m; i++)
        {
            cout << nums[i] << "  ";
        }
        cout << endl;
        int ans1 = validArr(nums, 0, m);
        int arr1size = (m - st) + 1;
        int ans2 = validArr(nums, m + 1, e);
        int arr2size = e - m;
        if (ans1 * 2 > arr1size && ans2 * 2 > arr2size)
            return m;
    }

    return -1;
}
int main()
{

    // vector<int> arr{2,1,3,1,1,1,7,1,2,1};
    vector<int> arr{1, 2, 2, 2};
    cout << minimumIndex(arr) << endl;

    return 0;
}