#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=100,fact=1;
    for (int  i = 2; i <=n; i++)
    {
        fact*=i;
    }
    cout<<fact<<endl;
    return 0;

}