#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

 
    int findK(int arr[ ][4], int n, int m, int k)
    {
        // Your code goes here.

        vector<int> ans;
        int startRow = 0;
        int endCol = m - 1;
       
        int endRow = n - 1;
        int startCol = 0;

        int total_elements = n * m;
        int cnt = 0;
        while (cnt < total_elements)
        {
            // printing first Row
            for (int i = startCol; i <= endCol && cnt < total_elements; i++)
            {
                ans.push_back(arr[startRow][i]);
                cnt++;
            }
            startRow++;
            // printing endColumn
            for (int i = startRow; i <= endRow && cnt < total_elements; i++)
            {
                ans.push_back(arr[i][endCol]);
                cnt++;
            }
            endCol--;
            // printing last row;
            for (int i = endCol; i >= startCol && cnt < total_elements; i--)
            {
                ans.push_back(arr[endRow][i]);
                cnt++;
            }
            endRow--;
            // printng first column;
            for (int i = endRow; i >= startRow && cnt < total_elements; i--)
            {
                ans.push_back(arr[i][startCol]);
                cnt++;
            }
            startCol++;
        }

        // for (auto i : ans)
        // {
        //     cout << i << " ";
        // }
        // cout<<ans[10]<<endl;
        return ans[k-1];
    }
 

//{ Driver Code Starts.
int main()
{
     
        int n=4, m=4;
        int k = 10;
        // cin>>k;
        // cin >> n >> m >> k;
        int a[4][4] = {{1, 2, 3, 4},
                           {5, 6, 7, 8},
                           {9, 10, 11, 12},
                           {13, 14, 15, 16}};
    cout<<"Printing the Array\n";
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cout<<a[i][j]<<" ";
            }

            cout<<"\n";
        }
     
        cout <<  findK(a, n, m, k) << endl;
    
}