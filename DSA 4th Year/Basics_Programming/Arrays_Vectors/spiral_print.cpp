#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int> ans;
    int startRow = 0;
    int endCol = arr[0].size() - 1;
    int endRow = arr.size() - 1;
    int startCol = 0;

    int total_elements = arr[0].size() * arr.size();
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
    for (auto i : ans)
    {
        cout << i << " ";
    }

    return 0;
}