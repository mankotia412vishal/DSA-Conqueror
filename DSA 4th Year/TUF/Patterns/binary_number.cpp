#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=5;
    for (int  i = 1; i <=n; i++)
    {
        for(int j=1;j<=i;j++){
            if(i&1){
                if(j&1){
                    cout<<"1";
                }
                else{
                    cout<<"0";
                }
            }
            else{
                 if(j&1){
                    cout<<"0";
                }
                else{
                    cout<<"1";
                }

            }
        }
        cout<<"\n";
    }
    
    return 0;

}