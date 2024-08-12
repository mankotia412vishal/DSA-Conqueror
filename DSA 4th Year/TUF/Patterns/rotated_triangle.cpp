#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";

        }
        cout<<"\n";
    }
    for(int i=2;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";

        }
        cout<<"\n";
    }
    return 0;

}