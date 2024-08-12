#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=24;
    int maxi=INT_MIN;
    for (int  i = 2; i <= 10000001265455; i++)
    {
        bool p=true;
     for (int  j = 2;j < i; j++)
     {
        if(i%j==0){
                p=false;
                break;

        }
     }
     if(p){
        if(n%i==0){
            maxi=max(maxi,i);
            
        }
        else{
            break;
        }
     }
     
    }
    cout<<maxi<<endl;
    return 0;

}