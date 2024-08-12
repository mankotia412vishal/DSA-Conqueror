#include <bits/stdc++.h>
using namespace std;

int minMaxKSize(int arr[], int k, int n)
{
    // queue bnao

    deque<int> dq1, dq2;

    int ans = 0;

    // step 1 process first k size window
    for (int i = 0; i < k; i++)
    {
        while (!dq1.empty() && arr[i] >= arr[dq1.back()])
        {
            dq1.pop_back();
        }
        while (!dq2.empty() && arr[i] <= arr[dq2.back()])
        {
            dq2.pop_back();
        }
        dq1.push_back(i);
        dq2.push_back(i);
    }
    cout << "Q ka front q1 ka " << dq1.front() << "    q2 ka front  " << dq2.front() << endl;
    ans += arr[dq1.front()] + arr[dq2.front()];
    cout << ans << endl;
    cin.get();

    for (int i = k; i < n; i++)
    {
        // out of the window kar do
        while (!dq1.empty() && i - dq1.front() >= k)
        {
            dq1.pop_back();
        }
        while (!dq2.empty() && i - dq2.front() >= k)
        {
            dq2.pop_back();
        }
        while (!dq1.empty() && arr[i] >= arr[dq1.back()])
        {
            dq1.pop_back();
        }
        while (!dq2.empty() && arr[i] <= arr[dq2.back()])
        {
            dq2.pop_back();
        }
        dq1.push_back(i);
        dq2.push_back(i);

        ans += arr[dq1.front()] + arr[dq2.front()];
    }
    return ans;
}
int main()
{

    int arr[] = {2, 5, -1, 7, -3, -1, -2};
    int K = 4, n = 7;
    cout << minMaxKSize(arr, K, n) << endl;
    return 0;
}