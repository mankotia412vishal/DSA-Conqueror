#include <bits/stdc++.h>
using namespace std;
int main(){

    string str="abcd";
    int n=str.length();
    for(int i=0;i<n;i++){
        for(int j=1;i+j<=n;j++){
           cout<<str.substr(i,j)<<" ";
        }
        cout<<"\n";
    }
    return 0;

}