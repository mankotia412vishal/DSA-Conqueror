#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n = 15;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n + 1 - i)
            {
                cout << "*"
                     << "";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= n; j++)
        {
            //    spaces
            if (j<=i-1)
            {
                cout << " ";
            }
            else
            {

                cout << "*";
            }
        }

        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                cout << "*"
                     << "";
            }
            else
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= n; j++)
        {
            //    spaces
            if (j<=n-i)
            {
                cout << " ";
            }
            else
            {

                cout << "*";
            }
        }

        cout << endl;
    }

    return 0;
}