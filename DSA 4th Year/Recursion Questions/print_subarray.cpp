#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "abc";

    /*
     Method 1

    for (int  i = 0; i < str.size(); i++)
    {
     for (int  j = i; j < str.size(); j++)
     {
          cout<<str.substr(i,j-i+1)<<" ";
     }
     cout<<"\n";

    }

     */
    /*


     //    Method 2
    for (int  i = 0; i < str.size(); i++)
    {
     for (int  j = 1; i+j <= str.size(); j++)
     {
          cout<<str.substr(i,j)<<" ";
     }
     cout<<"\n";

    }

 */
    vector<int> arr{1, 2, 3};
    int n = arr.size();
    
    for (int i = 0; i < n; i++)
    {
        for (int  j = i; j < n; j++)
        {
           for (int  k = i; k <=j; k++)
           {
            cout<<arr[k]<<" ";
           }
           cout<<"\n";
        }
        
    }

    return 0;
}