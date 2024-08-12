#include <bits/stdc++.h>
using namespace std;
void colname(int n, string &ans)
{
     while (n)
     {
         n--;
         char ch='A'+n%26;
         ans+=ch;
         n/=26;
     }
     reverse(ans.begin(),ans.end());
}
int main()
{

    int n = 128;
    // int n = 13;
    string ans = "";
    colname(n, ans);
    cout << ans << endl;
    return 0;
}