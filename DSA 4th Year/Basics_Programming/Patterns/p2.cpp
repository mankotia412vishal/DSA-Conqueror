#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c,i=1;
    cin>>r>>c;
    while (i<=r)
    {
        int j=1;
        while (j<=c)
        {
           if(i==1 || i==r){
            cout<<"*";
           }
           else{
            if(j==1|| j==c){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
           }
           j++;
        }
        i++;
        cout<<"\n";
    }
    
}