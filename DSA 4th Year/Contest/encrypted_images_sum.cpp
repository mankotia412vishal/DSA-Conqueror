#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int> nums{10, 21, 31};
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int digit = nums[i];
        string d = to_string(digit);
        int maxi = INT_MIN;
        for (int j = 0; j < d.length(); j++)
        {
            int no = d[j] - '0';
            if (maxi < no)
            {
                maxi = no;
            }
        }
        string ans = "";
        for (int l = 0; l < d.length(); l++)
        {
            ans += to_string(maxi);
        }
        sum = sum + stoi(ans);
        // cin.get();
    }
    cout << sum << endl;

    return 0;
}