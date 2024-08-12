#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<int>result;
    for (int i = 0; i < arr.size(); i++)
    {
        int row=0,col=i;
        while (row< arr.size() && col>=0)
        {
            result.push_back(arr[row++][col--]);
        }
        
    }
    for (int i = 1; i < arr.size(); i++)
    {
        int row=i,col=arr.size()-1;
        while (row< arr.size() && col>=0)
        {
            result.push_back(arr[row++][col--]);
        }
        
    }
    for(auto i:result){
        cout<<i<<endl;
    }

    return 0;
}