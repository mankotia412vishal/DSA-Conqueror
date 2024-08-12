#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 10;
    int s = 0, e = n;
    int ans;
    int m = s + (e - s) / 2;
    while (s <= e)
    {
        if (m * m == n)
        {
            ans = m;
            break;
        }
        if (m * m > n)
        {
            e = m - 1;
        }
        else
        {
            ans = m;
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }
    cout << ans << endl;
    double answer = ans;
    int precison = 2;
    // cin>>n;

    double step = 0.1;
    for (int i = 0; i < precison; i++)
    {
        for (double j = answer; j * j <= n; j += step)
        {
            answer = j;
        }
        step = step / 10;
    }
    cout << answer << endl;
}