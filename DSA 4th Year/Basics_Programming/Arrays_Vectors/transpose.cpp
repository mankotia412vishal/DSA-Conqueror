#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> arr{{1,2,3},{4,5,6},{7,8,9}};
    cout<<arr.size()<<endl;
    for (int  i = 0; i < arr.size(); i++)
    {
        for (int  j = 0; j < arr.size(); j++)
        {
          swap(arr[i][j],arr[j][i]);
        }
        
    }
    for (int  i = 0; i < arr.size(); i++)
    {
        for (int  j = 0; j < arr.size(); j++)
        {
         cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
  
    return 0;

}