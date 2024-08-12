#include <bits/stdc++.h>
using namespace std;
void solve(string &str, int i, string ans)
{
    // base case
    if (i > str.length() - 1)
    {
        cout << ans << endl;
        return;
    }
    solve(str, i + 1, ans);
    solve(str, i + 1, ans + str[i]);
}
int main()
{

    string str = "abc";
    string ans = "";
    int i=0;
    solve(str, i, ans);

    return 0;
}