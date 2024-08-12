#include <bits/stdc++.h>
using namespace std;

bool isSafe(int arr[][3], int row, int col, vector<vector<bool>> &vis, int i, int j)
{
    if (((i >= 0 && i < row) && (j >= 0 && j < col)) && (arr[i][j] == 1) && (vis[i][j] == false))
    {
        return true;
    }
    return false;
}
void solveGrid(int arr[][3], int row, int col, int i, int j, string path, vector<string> &output, vector<vector<bool>> &vis)
{
    // BC
    if (i == row - 1 && j == col - 1)
    {
        output.push_back(path);
        return;
    }

    // Right i,j+1
    if (isSafe(arr, row, col, vis, i, j + 1))
    {
        vis[i][j + 1] = true;
        solveGrid(arr, row, col, i, j + 1, path + 'R', output, vis);
        // Backtrack
        vis[i][j + 1] = false;
    }

    // down i+1,j
    if (isSafe(arr, row, col, vis, i + 1, j))
    {
        vis[i + 1][j] = true;
        solveGrid(arr, row, col, i + 1, j, path + 'D', output, vis);
        // Backtrack
        vis[i + 1][j] = false;
    }
}
int main()
{
    int arr[3][3] = {{1, 1, 1}, {1, 1, 1}, {1, 1, 1}};
    int row = 3, col = 3;

    vector<vector<bool>> visited(row, vector<bool>(col, false));

    visited[0][0] = true;
    int srcX = 0;
    int desY = 0;
    vector<string> output;
    string path = "";
    solveGrid(arr, row, col, srcX, desY, path, output, visited);

    for (auto i : output)
    {
         cout<<i<<" "<<endl;
    }
    

    return 0;
}