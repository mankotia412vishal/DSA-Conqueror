#include <bits/stdc++.h>
using namespace std;
int main(){

    // [4,3,8,4],[9,5,1,9],[2,7,6,2]]
    vector<vector<int>> grid = {{4,3,8,4},{9,5,1,9},{2,7,6,2}};
    int n = grid.size();
    int m = grid[0].size();

    int count = 0;
    /*
    
    A 3 x 3 magic square is a 3 x 3 grid filled with distinct numbers from 1 to 9 such that each row, column, and both diagonals all have the same sum.

Given a row x col grid of integers, how many 3 x 3 contiguous magic square subgrids are there?

Note: while a magic square can only contain numbers from 1 to 9, grid may contain numbers up to 15.
nput
grid =
[[5,5,5],[5,5,5],[5,5,5]]

Use Testcase
Output
1
Expected
0

    */
    for(int i=0;i<n-2;i++){
        for(int j=0;j<m-2;j++){
            if(grid[i+1][j+1] != 5){
                continue;
            }
            if(grid[i][j] + grid[i+2][j+2] != 10){
                continue;
            }
            if(grid[i][j+2] + grid[i+2][j] != 10){
                continue;
            }
            if(grid[i][j] + grid[i][j+1] + grid[i][j+2] != 15){
                continue;
            }
            if(grid[i+1][j] + grid[i+1][j+1] + grid[i+1][j+2] != 15){
                continue;
            }
            if(grid[i+2][j] + grid[i+2][j+1] + grid[i+2][j+2] != 15){
                continue;
            }
            if(grid[i][j] + grid[i+1][j] + grid[i+2][j] != 15){
                continue;
            }
            if(grid[i][j+1] + grid[i+1][j+1] + grid[i+2][j+1] != 15){
                continue;
            }
            if(grid[i][j+2] + grid[i+1][j+2] + grid[i+2][j+2] != 15){
                continue;
            }
            count++;
        }
    }

    
    return 0;

}