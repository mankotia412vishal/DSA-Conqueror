#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=3;
    for (int  i = 1; i <= n; i++)
    {
        int spaces=n-i;
        for(int s=1;s<=n-i;s++){
            cout<<" ";
        }
        for (int  j = 1; j <= 2*i-1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }

    for (int  i = 1; i <= n; i++)
    {
        int spaces=i-1;
        while(spaces!=0){
            cout<<" ";
            spaces--;
        }
        for (int  j = 1; j <= (2*n)-(2*i)+1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
    return 0;

}