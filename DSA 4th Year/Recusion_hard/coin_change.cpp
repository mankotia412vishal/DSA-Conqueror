#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int target)
{
    // Base cases
    if (target == 0)
        return 0;
    if (target < 0)
        return INT_MAX;

    int mini = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        int ans = solve(arr, target - arr[i]);
        if (ans != INT_MAX)
        {

            mini = min(mini, ans + 1);
        }
    }

    return mini;
}
int main()
{

    int arr[] = {1, 2, 3};
    int taget = 5;
    cout << solve(arr, taget);
    return 0;
}