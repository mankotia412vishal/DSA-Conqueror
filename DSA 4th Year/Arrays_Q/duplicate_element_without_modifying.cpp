#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int>a{1,2,4,3,2};

    while (a[0]!=a[a[0]])
    {
        swap(a[0],a[a[0]]);
    }
    cout<<a[0]<<endl;
    
    return 0;

}