#include <bits/stdc++.h>
using namespace std;
bool check(string ans, string t)
{
    bool sol = false;
    for (int i = 0; i < t.length(); i++)
    {

        if (t[i] == ans[0])
        {
            sol = true;
            break;
        }
    }
    cout<<ans<<" "<<sol<<endl;
    return sol;
}
void subsequences(string str, int i, string ans, string t, bool &solution)
{
    // base case
    if (i >= str.length())
    {
        if (ans.length())
        {
            if (check(ans, t))
            {
                solution = true;
            }
            else{
                return;
            }
        }

        return;
    }

    // exclude
    subsequences(str, i + 1, ans, t,solution);

    // inlcude
    ans += str[i];
    subsequences(str, i + 1, ans, t,solution);
}
int main()
{

    string str = "axc";
    string ans = "";
    string t = "ahbgdc";
    bool ans1 = false;
    subsequences(str, 0, ans, t, ans1);
    if (ans1)
        cout << "True\n";
    else
    {
        cout << "False\n";
    }
    return 0;
}

/*

c
b
bc
a
ac
ab
abc

*/