/*

Given a matrix of order nxm, composed of only 0's and 1's, find the number of 1's in the matrix that are surrounded by an even number (>0) of 0's. The surrounding of a cell in the matrix is defined as the elements above, below, on left, on right as well as the 4 diagonal elements around the cell of the matrix. Hence, the surrounding of any matrix elements is composed of 8 elements. Find the number of such 1's.

Example 1:

Input: 
matrix = {{1, 0, 0}, 
          {1, 1, 0}, 
          {0, 1, 0}}
Output: 
1
Explanation: 
1 that occurs in the 1st row and 1st column, has 3 surrounding elements 0,1 and 1. The occurrence of zero is odd. 
1 that occurs in 2nd row and 1st column has 5 surrounding elements 1,0,1,1 and 0. The occurrence of zero is even. 
1 that occurs in 2nd row and 2nd column has 8 surrounding elements. The occurrence of 0 is odd. 
Similarly, for the 1 that occurs in 3rd row and 2nd column, the occurrence of zero in it's 5 surrounding elements is odd. 
Hence, the output is 1.

*/

#include <bits/stdc++.h>
using namespace std;

int Count(vector<vector<int> >& matrix) {
    int count = 0;
    int n = matrix.size();
    
    int m = matrix[0].size();
    /*
Given a matrix of order nxm, composed of only 0's and 1's, find the number of 1's in the matrix that are surrounded by an even number (>0) of 0's. The surrounding of a cell in the matrix is defined as the elements above, below, on left, on right as well as the 4 diagonal elements around the cell of the matrix. Hence, the surrounding of any matrix elements is composed of 8 elements. Find the number of such 1's.
    
    */
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
            if(matrix[i][j]==1){
                int count_zero=0;
                if(i-1>=0 && j-1>=0 && matrix[i-1][j-1]==0) count_zero++;
                if(i-1>=0 && matrix[i-1][j]==0) count_zero++;
                if(i-1>=0 && j+1<m && matrix[i-1][j+1]==0) count_zero++;
                if(j-1>=0 && matrix[i][j-1]==0) count_zero++;
                if(j+1<m && matrix[i][j+1]==0) count_zero++;
                if(i+1<n && j-1>=0 && matrix[i+1][j-1]==0) count_zero++;
                if(i+1<n && matrix[i+1][j]==0) count_zero++;
                if(i+1<n && j+1<m && matrix[i+1][j+1]==0) count_zero++;
                if(count_zero%2==0) count++;
            }
        }

    





    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<vector<int> > matrix(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++){
                cin >> matrix[i][j];
            }
        }

        cout << Count(matrix) << "\n";
    }
    return 0;
}
