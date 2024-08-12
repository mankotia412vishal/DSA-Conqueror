#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s = "ABCDEFI";

    int r = 3;
    if (r == 1){
         cout << s << endl;
    exit(1);
    }
       
    vector<string> zig(r);
    int i = 0, row = 0;
    bool d = 1;
    while (1)
    {

        if (d)
        {
            while (row < r && i < s.size())
            {

                zig[row++].push_back(s[i++]);
            }
            row = row - 2;
        }

        else
        {
            while (row >= 0 && i < s.size())
            {
                zig[row--].push_back(s[i++]);
            }

            row = 1;
        }
        if (i >= s.size())
            break;
        d = !d;
    }
    string ans = "";
    for (int i = 0; i < zig.size(); i++)
    {
        ans += zig[i];
    }

    cout << ans << " ";
    return 0;
}