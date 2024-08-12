#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    for (int  i = 1; i <=n; i++)
    {
        int s=n-i;
        for (int  j = 1; j <= s; j++)
        {
            cout<<"  ";
        }
        int c=i;
         
        for (int  k = 1; k <=i; k++)
        {
             cout<<c++<<" ";
        }
        int aa=c-2;
        if(i>1 && i<=n){
            for (int  l = aa;l >= i; l--)
            {
              cout<<l<<" ";
            }
            
        }
        cout<<"\n";
        
    }
    
    return 0;

}