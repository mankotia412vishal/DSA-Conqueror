#include <bits/stdc++.h>
using namespace std;

bool canPair(vector<int> nums, int k)
{
    int n = nums.size();
    if (n % 2 != 0)
        return false;

    int remCount[k] = {0};

    for (int i = 0; i < n; i++)
    {
        int rem = nums[i] % k;

        if (remCount[rem] > 0)
        {
            remCount[rem]--;
        }
        else
        {
            int complement = (k - rem) % k;
            remCount[complement]++;
        }
    }

    for (int i = 0; i < k; i++)
    {
        if (remCount[i] != 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    vector<int> nums = {9, 5, 7, 3};
    int k = 6;

    if (canPair(nums, k))
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }

    return 0;
}
