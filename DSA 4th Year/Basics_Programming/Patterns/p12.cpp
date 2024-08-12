#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int s = n - i;
        for (int j = 1; j <= s; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            if (k == 1 || k == 2 * i - 1)
            {
                cout << " *";
            }
            else
            {
                if (i == n)
                {
                    for (int ie = 1; ie <= 2 * i - 1; ie++)
                    {
                        cout << " *";
                    }
                    break;
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}