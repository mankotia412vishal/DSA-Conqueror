#include <bits/stdc++.h>
using namespace std;
int main(){

    // int a=5;
    // int b=5;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<b<<endl;
    // cout<<&b<<endl;


    int a=5;
    int *ptr=&a;
    int *qtr=ptr;


    // access the value of the ptr pointing to
    cout<<*ptr<<endl;
    cout<<&a<<endl;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*qtr<<endl;
    cout<<qtr<<endl;

    return 0;

}