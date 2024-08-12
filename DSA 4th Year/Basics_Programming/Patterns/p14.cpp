#include <bits/stdc++.h>
using namespace std;
int main(){

     
   int n;
    cin>>n;
    for (int  i =1; i <=n; i++)
    {
       int sp=n-i;
       for (int k =1; k <= sp; k++)
       {
        cout<<" ";
       }
       for (int  j= 1; j <=i; j++)
       {
         cout<<"* ";
       }
       cout<<"\n";
       
    }
    for (int  i =1; i <=n; i++)
    {
       int sp=i-1;
       for (int k =1; k <= sp; k++)
       {
        cout<<" ";
       }
       for (int  j= 1; j <=n-i+1; j++)
       {
        if(j==1 || j==n-i+1){
             cout<<"* ";
        }
        else{
            cout<<"  ";
        }
        
       }
       cout<<"\n";
       
    }
    return 0;

}