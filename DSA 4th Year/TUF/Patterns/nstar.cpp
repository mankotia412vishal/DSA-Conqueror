#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int spaces = i - 1;
        while (spaces != 0)
        {
            cout << " ";
            spaces--;
        }
        for (int j = 1; j <= 2 * n - (2 * i )+ 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}