#include <bits/stdc++.h>
using namespace std;
 void booleanMatrix(vector<vector<int> > &matrix)
    {
         vector<vector<int>>arr(matrix.size(),vector<int>(matrix[0].size(),0));
            for(int i=0;i<matrix.size();i++)
            {
                for(int j=0;j<matrix[0].size();j++)
                {
                    if(matrix[i][j]==1)
                    {
                    //     make the entrie row and col 1 in arr array
                        for(int k=0;k<matrix[0].size();k++)
                        {
                            arr[i][k]=1;
                        }
                        for(int k=0;k<matrix.size();k++)
                        {
                            arr[k][j]=1;
                        }
                       
                    }
                }
            }
            copy(arr.begin(),arr.end(),matrix.begin());

    }
int main()
{

    // vector<vector<int>> arr{{1, 0},
    //                         {0, 0}};
// R = 4, C = 3
// matrix[][] = {{ 1, 0, 0},
//               { 1, 0, 0},
//               { 1, 0, 0},
//               { 0, 0, 0}}
    vector<vector<int>> arr{{1, 0, 0},
                            {1, 0, 0},
                            {1, 0, 0},
                            {0, 0, 0}};
    int row = arr.size();
    int col = arr[0].size();
    booleanMatrix(arr);
    for (int  i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}