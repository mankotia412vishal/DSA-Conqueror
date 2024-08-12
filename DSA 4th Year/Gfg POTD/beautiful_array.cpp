#include <bits/stdc++.h>
using namespace std;
int findMinOpeartion(vector<vector<int>> matrix, int n)
{
    // code here
    int sum = -1;
    for (int i = 0; i < n; i++)
    {
        int row_sum = 0;
        for (int j = 0; j < n; j++)
            row_sum += matrix[i][j];
            
            // cout<<row_sum<<endl;

        sum = max(sum, row_sum);
        // cout<<sum<<endl;
        // cin.get();
    }

    for (int i = 0; i < n; i++)
    {
        int col_sum = 0;
        for (int j = 0; j < n; j++)
            col_sum += matrix[j][i];
             

        sum = max(sum, col_sum);
    }
     
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int row_sum = 0;
        for (int j = 0; j < n; j++)
            row_sum += matrix[i][j];

        res += (sum - row_sum);
    }

    return res;
}
int main()
{
    /*

    N = 2
matrix[][] = {{1, 2},
              {3, 4}}

              N = 3
matrix[][] = {{1, 2, 3},
              {4, 2, 3},
              {3, 2, 1}}
    */

    // int n = 2;
    // vector<vector<int>> matrix{{1, 2}, {3, 4}};

    int n=3;
    vector<vector<int>> matrix{{1, 2, 3},
              {4, 2, 3},
              {3, 2, 1}};
    cout << findMinOpeartion(matrix, n);


    return 0;
}