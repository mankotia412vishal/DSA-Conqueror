#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=3;
    for (int  i = 1; i <=n; i++)
    {
        for (int  j = 1; j <=i; j++)
        {
            cout<<char('A'+j-1)<<" ";
        }
        cout<<"\n";
        
    }
    
    return 0;

}