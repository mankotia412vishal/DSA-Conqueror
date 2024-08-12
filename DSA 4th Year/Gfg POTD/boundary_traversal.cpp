#include <bits/stdc++.h>
using namespace std;
int main()
{

    // int m[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int m[3][4] = {{12,11,10,9}, {8,7,6,5}, {4,3,2,1}};
    int row = 3;
    int col = 4;
    vector<int> arr;
    int startRow = 0;
    int endRow = row- 1;
    int startCol = 0;
    int endCol = col - 1;
    for (int i = startRow; i < col; i++)
    {
        arr.push_back(m[startRow][i]);
    }

    startRow++;
      for (auto i : arr)
    {
        cout << i << " ";
    }
    cout<<"\n";
    for (int i = startRow; i < row; i++)
    {
        arr.push_back(m[i][endCol]);
    }
    endCol--;
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout<<"\n";

    for (int i = endCol; i >= startCol; i--)
    {
        arr.push_back(m[endRow][i]);
    }
    endRow--;
     for (auto i : arr)
    {
        cout << i << " ";
    }
    cout<<"\n";
    for (int i = endRow; i >= startRow; i--)
    {
        arr.push_back(m[i][startCol]);
    }
    startCol--;
  for (auto i : arr)
    {
        cout << i << " ";
    }
    cout<<"\n";

    for (auto i : arr)
    {
        cout << i << " ";
    }

    return 0;
}