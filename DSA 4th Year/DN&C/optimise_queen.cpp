#include <bits/stdc++.h>
using namespace std;
int c = 0;
unordered_map<int, bool> rowCheck;
unordered_map<int, bool> UpperleftDaigonalCheck;
unordered_map<int, bool> BottomLeftDiagnolCheck;
void printSoln(vector<vector<char>> &board, int n, vector<vector<int>> &ans)
{
    vector<int> temp;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            // cout << board[i][j] << " ";
            temp.push_back(board[i][j]);
        }
        cout << "\n";
    }
    ans.push_back(temp);
    c++;
    cout << "\nprinted 1 Soln \n\n";
    // cin.get();
}
bool isSafe(int row, int col, vector<vector<char>> &board, int n)
{

    //    rowCheck
    if (rowCheck[row] == true || UpperleftDaigonalCheck[n - 1 + col - row] == true || BottomLeftDiagnolCheck[row + col] == true)
    {
        return false;
    }

    return true;
}
void solve(vector<vector<char>> &board, int col, int n, vector<vector<int>> &ans)
{
    // base case
    if (col >= n)
    {
        printSoln(board, n, ans);
        return;
    }

    // 1 case Solve karna haii bakki recursion solve kar lega
    for (int row = 0; row < n; row++)
    {
        if (isSafe(row, col, board, n))
        {
            // rakh do
            board[row][col] = 'Q';

            rowCheck[row] = true;
            UpperleftDaigonalCheck[n - 1 + col - row] = true;
            BottomLeftDiagnolCheck[row + col] = true;

            solve(board, col + 1, n, ans);
            //  0--> empty  cell
            //  1-->Queen at the cell

            //  backtracking
            board[row][col] = '-';

            rowCheck[row] = false;
            UpperleftDaigonalCheck[n - 1 + col - row] = false;
            BottomLeftDiagnolCheck[row + col] = false;
        }
    }
}
int main()
{

    int n = 9;
    vector<vector<char>> board(n, vector<char>(n, '-'));
    int col = 0;
    vector<vector<int>> ans;
    solve(board, col, n, ans);
    cout << c << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans.size(); j++)
        {
            cout << ans[i][j] << " ";
        }
    }

    return 0;
}