#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=3;
    for (int  i = 0; i < n; i++)
    {
        char s='A';
       for (int  j = 0; j <= i; j++)
       {
        cout<<char(s+n-1-j);
        
       }
       cout<<"\n";
       
    }
    
    return 0;

}