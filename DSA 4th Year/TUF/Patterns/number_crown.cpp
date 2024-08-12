#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n = 13;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                cout << j<<" ";
            }
            else
            {
                cout << "  ";
            }
        }
        // print the spaces
        int spaces = n - i;
        while (spaces != 0)
        {
            cout << "  ";
            spaces--;
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k<<" ";
        }

        cout << endl;
    }

    return 0;
}