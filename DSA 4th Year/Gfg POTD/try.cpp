#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v1(5,0);
    for(auto x:v1){
        cout<<x<<" ";
    }

    cout<<endl;
    v1[3]=12;
    for(auto x:v1){
        cout<<x<<" ";
    }
    return 0;

}