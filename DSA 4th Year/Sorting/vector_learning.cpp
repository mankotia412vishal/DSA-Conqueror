#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &nums)
{

    set<vector<int>> st;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                if (nums[i] + nums[j] + nums[k] == 0)
                {
                    cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<"\n";
                    cin.get();

                    vector<int> temp{nums[i], nums[j], nums[k]};

                    sort(temp.begin(), temp.end());
                    for (auto kk : temp)
                    {
                        cout << kk << " ";
                    }
                    st.insert(temp);
                }
            }
            cout << "\n";
        }
    }
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{

    // vector<int> arr{1,2,4,5};
    // for (auto i: arr)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<"\n";
    // vector<int> arr1={1,2,4,5};
    // for (auto i: arr1)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<"\n";

    // nums = [-1,0,1,2,-1,-4]

    vector<int> arr{-1, 0, 1, 2, -1, -4};
    vector<vector<int>> ans = threeSum(arr);
    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
}