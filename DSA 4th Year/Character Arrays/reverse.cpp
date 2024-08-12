#include <bits/stdc++.h>
using namespace std;
int main(){

    char name[10]="vishal";
    int s=0,e=strlen(name)-1;
    while (s<=e)
    {
        char temp=name[s];
        name[s]=name[e];
        name[e]=temp;
        s++,e--;
    //    swap(name[s++],name[e--]);
    }
    cout<<name<<endl;

    return 0;

}