#include <bits/stdc++.h>
using namespace std;
int main(){

    int r,c,i=1;
    cin>>r>>c;
    while (i<=r)
    {
        int j=1;
        while (j<=i)
        {
           cout<<"* ";
           j++;
        }
        cout<<"\n";
        i++;
    }
    
    return 0;

}