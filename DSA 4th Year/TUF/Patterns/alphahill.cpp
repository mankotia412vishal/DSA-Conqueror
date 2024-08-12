#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        // spaces take care
        int spaces = n - i;
        while (spaces != 0)
        {
            cout << " ";
            spaces--;
        }
        char start = 'A';
        int k = 1;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j <= i)
            {
                cout << char(start);
                ++start;
                if (j == i)
                {
                    --start;
                    --start;
                }
            }

            else
            {
                
                 

                    cout << char(start);
                    --start;
                
            }
        }

        cout << "\n";
    }

    return 0;
}