#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    for (int  i = 1; i <=n; i++)
    {
      int s=i-1;
      for (int  j = 1; j <=s; j++)
      {
        cout<<" ";
      }
      for (int  k = 1; k<=n-i+1;k++)
      {
       cout<<"* ";
      }
      cout<<"\n";
    }
    
    return 0;

}