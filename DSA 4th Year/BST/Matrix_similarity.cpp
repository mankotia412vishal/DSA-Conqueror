/*
100139. Matrix Similarity After Cyclic Shifts
User Accepted:28
User Tried:48
Total Accepted:28
Total Submissions:50
Difficulty:Easy
You are given a 0-indexed m x n integer matrix mat and an integer k. You have to cyclically right shift odd indexed rows k times and cyclically left shift even indexed rows k times.

Return true if the initial and final matrix are exactly the same and false otherwise.

 

Example 1:

Input: mat = [[1,2,1,2],[5,5,5,5],[6,3,6,3]], k = 2
Output: true
Explanation:


Initially, the matrix looks like the first figure. 
Second figure represents the state of the matrix after one right and left cyclic shifts to even and odd indexed rows.
Third figure is the final state of the matrix after two cyclic shifts which is similar to the initial matrix.
Therefore, return true.
Example 2:

Input: mat = [[2,2],[2,2]], k = 3
Output: true
Explanation: As all the values are equal in the matrix, even after performing cyclic shifts the matrix will remain the same. Therefeore, we return true.
Example 3:

Input: mat = [[1,2]], k = 1
Output: false
Explanation: After one cyclic shift, mat = [[2,1]] which is not equal to the initial matrix. Therefore we return false.
 

Constraints:

1 <= mat.length <= 25
1 <= mat[i].length <= 25
1 <= mat[i][j] <= 25
1 <= k <= 50

*/
#include <bits/stdc++.h>
using namespace std;
int main(){
//  Input: mat = [[1,2,1,2],[5,5,5,5],[6,3,6,3]], k = 2
// Output: true
    

    int m=3,n=4,k=2;
    int mat[m][n]={{1,2,1,2},{5,5,5,5},{6,3,6,3}};

    
    int temp[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            temp[i][j]=mat[i][j];
        }
    }

    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<k;j++){
                int t=temp[i][n-1];
                for(int l=n-1;l>0;l--){
                    temp[i][l]=temp[i][l-1];
                }
                temp[i][0]=t;
            }
        }
        else{
            for(int j=0;j<k;j++){
                int t=temp[i][0];
                for(int l=0;l<n-1;l++){
                    temp[i][l]=temp[i][l+1];
                }
                temp[i][n-1]=t;
            }
        }
    }
    int flag=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(mat[i][j]!=temp[i][j]){
                flag=1;
                break;
            }
        }
    }
    if(flag==0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }



    return 0;

}