#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s1 = "welcome", s2 = "nice", ans = " ";
    int s11 = 0, e11 = s1.length() - 1, s12 = 0, e12 = s2.length() - 1;
    while (s11 <= e11 && s12 <= e12)
    {
        
        ans = ans + s1[s11] + s2[s12];
        // cout<<ans<<endl;
        s11++,s12++;
    }
    cout<<"1 "<<ans<<endl;;
    while (s11 <= e11)
    {
         ans = ans + s1[s11];
         s11++;
    }
    while (s12 <= e12)
    {
         ans = ans + s2[s12];
         s12++;
    }
    cout << ans << endl;
    return 0;
}