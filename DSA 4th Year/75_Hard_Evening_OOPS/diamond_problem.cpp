#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    int d;

};
class B{
    public:
    int d;

};
class C:public A,public B{
    public:
    int d;

};
class D:public C{
    public:
    int d=100;

};
int main(){
//   D *o=new D;
//     cout<<o->B::d; 

    
    return 0;

}