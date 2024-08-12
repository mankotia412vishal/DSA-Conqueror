#include <bits/stdc++.h>
using namespace std;

int findOdd(vector<int> arr)
{
    int s = 0, e = arr.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }
        //   cases 2  agar mera mid even pe haii else mid odd pe haii
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                // ans Right mein phada haii
                s = mid + 2;
            }
            else
                e = mid;
        }
        else
        {
            if (arr[mid] == arr[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 1, 2, 2, 3, 4, 4, 3, 3, 600, 600, 4, 4};

    int ans = findOdd(arr);
    if (ans)
    {
        cout << ans << endl;
    }
    else
    {
        cout << "-1";
    }
}
