#include <bits/stdc++.h>
using namespace std;
int main()
{
    int strat = 1;
    int arr[] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            for (int k = i; k <= j; k++)
            {
                if (k < arr[k])
                {
                    strat++;
                    cout << arr[k];
                }
            }
            cout << "\n";
        }
    }
    cout << strat << endl;
    return 0;
}