#include <bits/stdc++.h>
using namespace std;
 

bool isSafe(int x, int y, int row, int col, int arr[2][2], vector<vector<bool>> &visited)
{
    if (((x >= 0 && x < row) && (y >= 0 && y < col)) && (arr[x][y] == 1) && visited[x][y] == false)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void SolveMaze(int arr[2][2], int row, int col, int i, int j, vector<vector<bool>> &visited, vector<string> &path, string output)
{

    // base case
    if (i == row - 1 && j == col - 1)
    {
        // ans found
        path.push_back(output);
        return;
    }

    // ek case solve karna means direction handle karni haii
    
    

    // Down --> i+1,j
    if (isSafe(i + 1, j, row, col, arr, visited))
    {
        visited[i + 1][j] = true;
        SolveMaze(arr, row, col, i + 1, j, visited, path, output + 'D');

        // Backtrack
        visited[i + 1][j] = false;
    }

    // left -> i,j-1

    if (isSafe(i, j - 1, row, col, arr, visited))
    {
        visited[i][j - 1] = true;
        SolveMaze(arr, row, col, i, j - 1, visited, path, output + 'L');

        // Backtrack
        visited[i][j - 1] = false;
    }

    // right-->i,j+1
    if (isSafe(i, j + 1, row, col, arr, visited))
    {
        visited[i][j + 1] = true;
        SolveMaze(arr, row, col, i, j + 1, visited, path, output + 'R');

        // Backtrack
        visited[i][j + 1] = false;
    }

    // UP --> i-1,j;
    if (isSafe(i - 1, j, row, col, arr, visited))
    {
        visited[i - 1][j] = true;
        SolveMaze(arr, row, col, i - 1, j, visited, path, output + 'U');

        // Backtrack
        visited[i - 1][j] = false;
    }
}
int main()
{

    // int maze[3][3] = {{1, 0, 0}, {1, 1, 0}, {1, 1,0}};
    // int maze[4][4] = {{1, 0, 0, 0},
    //                   {1, 1, 0, 1},
    //                   {1, 1, 0, 0},
    //                   {0, 1, 1, 1}};
    int maze[2][2] = {{1, 1},{1, 1}};

    int row = 2;
    int col = 2;
    vector<vector<bool>> visited(row, vector<bool>(col, false));
    // scr is value ko true mark kar dete haii
    if (maze[0][0] == 0)
    {
        cout << "No Path exits\n";
        return 0;
    }
    visited[0][0] = true;
    vector<string> path;
    string output = ""; 

    SolveMaze(maze, row, col, 0, 0, visited, path, output);
    cout << "Printing the results \n";
    for (auto i : path)
    {
        cout << i << " ";
    }
    if (path.size() == 0)
    {
        cout << "No Path Exits\n";
        return 0;
    }

    return 0;
}