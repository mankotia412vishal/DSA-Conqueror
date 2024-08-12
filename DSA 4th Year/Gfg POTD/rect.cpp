/*
Given a matrix mat[][] of size N x M. The task is to find the largest rectangular sub-matrix by area whose sum is 0.

If there are multiple solutions return the rectangle which starts from minimum column index. If you still have multiple solutions return the one starting from minimum row index. If you still have multiple solutions return the one having greatest row number. If no such matrix is present return a zero (0) size matrix.

Example 1:

Input: N = 3, M = 3
mat[][] =  1, 2, 3
          -3,-2,-1
           1, 7, 5

Output:  1, 2, 3
        -3,-2,-1

Explanation: This is the largest sub-matrix,
whose sum is 0.
Example 2:

Input: N = 4, M = 4
mat[][] = 9, 7, 16, 5
          1,-6,-7, 3
          1, 8, 7, 9
          7, -2, 0, 10

 Output: -6,-7
          8, 7
         -2, 0 
Your Task:
You don't need to read input or print anything. You just have to complete the function sumZeroMatrix() which takes a 2D matrix mat[][], its dimensions N and M as inputs and returns a largest sub-matrix, whose sum is 0.

Expected Time Complexity: O(N*M*M).
Expected Auxiliary Space: O(N*M).


Constraints:
1 <= N, M <= 100
-1000 <= mat[][] <= 1000
*/

#include <bits/stdc++.h>
using namespace std;

 vector<vector<int>> sumZeroMatrix(vector<vector<int>> a){
        // code here
        int n = a.size();
        int m = a[0].size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            vector<int> temp(m);
            for(int j=i;j<n;j++){
                for(int k=0;k<m;k++){
                    temp[k] += a[j][k];
                }
                if(accumulate(temp.begin(),temp.end(),0)==0){
                    if(ans.size()==0){
                        ans.push_back(temp);
                    }
                    else{
                        if(ans[0].size()<temp.size()){
                            ans[0] = temp;
                        }
                        else if(ans[0].size()==temp.size()){
                            if(ans[0][0]>temp[0]){
                                ans[0] = temp;
                            }
                            else if(ans[0][0]==temp[0]){
                                if(ans[0][ans[0].size()-1]<temp[temp.size()-1]){
                                    ans[0] = temp;
                                }
                            }
                        }
                    }
                }
            }
        }
        return ans;
  }

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    vector<vector<int>> ans = sumZeroMatrix(a);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

    
}