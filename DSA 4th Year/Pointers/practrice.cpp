#include <bits/stdc++.h>
using namespace std;
int main(){

//     float f=10.5;
//     float p=2.5;
//     float *pt=&f;
//    ( *pt)++;
//    cout<<*pt<<endl;
//   *pt=p;
//   cout<<(*pt)<<" "<<f<<" "<<p<<endl;
//     return 0;


int a=100,b=200;
int *p=&a;
int *q=&b;
cout<<p<<" "<<q<<endl;
p=q;

cout<<p<<" "<<q<<endl;
cout<<*p<<" "<<*q<<endl;
cout<<a<<" "<<b<<endl;
}