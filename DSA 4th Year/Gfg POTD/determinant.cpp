/*

Given a square matrix of size n*n. The task is to find the determinant of this matrix.

Example 1:

Input:
n = 4
matrix[][] = {{1, 0, 2, -1},
              {3, 0, 0, 5},
              {2, 1, 4, -3},
              {1, 0, 5, 0}}
Output: 30
Explanation:
Determinant of the given matrix is 30.
Example 2:

Input:
n = 3
matrix[][] = {{1, 2, 3},
              {4, 5, 6},
              {7, 10, 9}}
Output: 12
Explanation:
Determinant of the given matrix is 12.
Your Task:
You don't need to read input or print anything. Complete the function determinantOfMatrix() that takes matrix and its size n as input parameters and returns the determinant of the matrix.

Expected Time Complexity: O(N4)
Expected Auxiliary Space: O(N2)

Constraints:
1 <= N <= 10
-10 <= mat[i][j] <= 10

*/

#include <bits/stdc++.h>
using namespace std;

int determinantOfMatrix(vector<vector<int>> matrix, int n)
{
    // code here
    int det = 0;
    if (n == 1)
        return matrix[0][0];
    else if (n == 2)
        return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
    else
    {
        for (int i = 0; i < n; i++)
        {
            vector<vector<int>> temp(n - 1, vector<int>(n - 1));
            for (int j = 1; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (k < i)
                        temp[j - 1][k] = matrix[j][k];
                    else if (k > i)
                        temp[j - 1][k - 1] = matrix[j][k];
                }
            }
            det += pow(-1, i) * matrix[0][i] * determinantOfMatrix(temp, n - 1);
        }
    }
    return det;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)

            cin >> matrix[i][j];
    cout << determinantOfMatrix(matrix, n) << endl;
}
