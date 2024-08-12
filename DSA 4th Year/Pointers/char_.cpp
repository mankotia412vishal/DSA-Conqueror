#include <bits/stdc++.h>
using namespace std;
int main(){

    char ch[10]="Vishal";
    char *c=ch;
    cout<<*c<<endl;
    cout<<c<<endl;
    cout<<ch<<endl;
    cout<<&ch<<endl;
   
    cout<<&ch[0]<<endl;

    char ccc[10]={"babbat"};
    char ccc1[10]="babbat";
    cout<<ccc<<endl;
    cout<<ccc1<<endl;

    return 0;

}