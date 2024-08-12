#include <bits/stdc++.h>
using namespace std;

int board[9][9] = {
    {4, 5, 0, 0, 0, 0, 0, 0, 0},
    {0, 0, 2, 0, 7, 0, 6, 3, 0},
    {0, 0, 0, 0, 0, 0, 0, 2, 8},
    {0, 0, 0, 9, 5, 0, 0, 0, 0},
    {0, 8, 6, 0, 0, 0, 2, 0, 0},
    {0, 2, 0, 6, 0, 0, 7, 5, 0},
    {0, 0, 0, 0, 0, 0, 4, 7, 6},
    {0, 7, 0, 0, 4, 5, 0, 0, 0},
    {0, 0, 8, 0, 0, 9, 0, 0, 0}
};

bool isSafe(int value, int i, int j)
{
    // rows check
    for (int col = 0; col < 9; col++)
    {
        if (board[i][col] == value)
            return false;
    }

    // column check
    for (int row = 0; row < 9; row++)
    {
        if (board[row][j] == value)
            return false;
    }

    // 3*3 board check
    for (int check = 0; check < 9; check++)
    {
        if (board[3 * (i / 3) + (check / 3)][3 * (j / 3) + (check % 3)] == value)
        {
            return false;
        }
    }
    return true;
}

bool solve( )
{
    // int n=9;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            // cout << "Vishal\n";
            // check for empty cell

            if (board[i][j] == 0)
            {
                for (int value = 1; value <= 9; value++)
                {
                    // check for safety
                    if (isSafe(value, i, j))
                    {
                        // insert
                        board[i][j] = value;
                        // baaki recursion sambal lega
                        bool aggekaSoln = solve();
                        if (aggekaSoln == true)
                            return true;

                        // backtraack
                        board[i][j] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int n=9;
    if (solve())
    {
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "No solution exists." << endl;
    }

    return 0;
}
