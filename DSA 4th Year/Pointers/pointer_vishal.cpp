#include <bits/stdc++.h>
using namespace std;
void sq(int *p){
    int a=10;
    p=&a;
    *p=*p*(*p);
    // cout<<p<<" "<<*p<<endl;
}
int main(){

    // int a[]={1,2,3};
    // int *p=a+1;
    // char c[]={"cgu"};
    // cout<<*c<<endl;
    int a=10;
    sq(&a);
    cout<<a<<endl;

    return 0;

}