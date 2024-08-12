#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, o;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int s = n - i;
        for (int l = 1; l <= s; l++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1)
            {
                cout << j;
                o = i;
            }
            else if (j == 2 * i - 1)
            {
                cout << o;
            }
            else
            {

                cout << " ";
            }
            if(i==n){
                cout<<" ";
                for (int v = 2; v <=n  ; v++)
                {
                    cout<<v<<" ";
                }
                break;
            }
        }

        cout << "\n";
    }

    return 0;
}
//      1
//    1   2
//   1     3
// 1