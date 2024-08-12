#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=3;
    for (int  i = 1; i <=n; i++)
    {
       int spaces=n-i;
       while(spaces!=0){
        cout<<" ";
        spaces--;

       }
       char start='A';
       for (int  j = 1; j <= 2*i-1; j++)
       {
        //   if (j==1)
        // {
        //     cout<<start;
        // }
        if(j<=i){
            cout<<char(start++);
        }
       
        
        else{
            cout<<char(start--);
        }
        
       }
       cout<<"\n";
       
        
    }
    
    return 0;

}