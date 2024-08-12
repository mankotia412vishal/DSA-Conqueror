#include <bits/stdc++.h>
using namespace std;
int minimum(int arr[][j],int r,int c){

}
int main()
{

    int n = 5;
    int arr[n][n] = {{1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 2, 1, 1}, {1, 1, 1, 1, 1}, {1, 1, 1, 1, 1}};
    vector<vector<int>> newArray(n,vector<int>(n,-1));
    for (int  i = 0; i < n; i++)
    {
       for (int  j = 0; j < n; j++)
       {
         for (int k  = i; k < 3; k++)
         {
            minimum(arr,)
         }
         
       }
       
    }
    
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < n - 2; j++)
        {
            cout << newArray[i][j]<<" ";
        }
        cout<<" \n";
    }

    return 0;
}