#include <bits/stdc++.h>
using namespace std;
int c=0;
void printSoln(vector<vector<char>> &board, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
 c++;
    cout << "\nprinted 1 Soln \n\n";
    // cin.get();
}
bool isSafe(int row, int col, vector<vector<char>> &board, int n)
{
    // check karna chahata hu ,kya mein current cell mein [row,col ] pr
    // queen rakh pauga yah nhi
    int i = row, j = col;

    // check row
    while (j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        j--;
    }

    // check upper left diagonal
    i = row, j = col;
    while (i >= 0 && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i--, j--;
    }

    // check bottom left diagonal
    i = row, j = col;
    while (i < n && j >= 0)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
        i++, j--;
    }
    // khi par be queen nhi mili iska matlab yah position safe return true;

    return true;
}
void solve(vector<vector<char>> &board, int col, int n)
{
    // base case
    if (col >= n)
    {
        printSoln(board, n);
        return;
    }

    // 1 case Solve karna haii bakki recursion solve kar lega
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            // rakh do
            board[row][col] = 'Q';
            solve(board, col + 1, n);
            //  0--> empty  cell
            //  1-->Queen at the cell

            //  backtracking
            board[row][col] = '-';
        }
    }
}
int main()
{

    int n = 9;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;
    solve(board, col, n);
    cout<<c<<endl;

    return 0;
}