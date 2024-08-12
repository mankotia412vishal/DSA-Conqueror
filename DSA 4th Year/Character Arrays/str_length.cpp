#include <bits/stdc++.h>
using namespace std;
int getLength(char name[]){
    int i=0,length=0;
    while (name[i]!='\0')
    {
        length++;
        i++;
    }
    return length;
    
}
int main(){

    char name[100];
    cin>>name;
    cout<<"Char entered "<<name<<endl;
    cout<<"Size of string "<<getLength(name)<<endl;
    cout<<"Size of string "<<strlen(name)<<endl;
    cout<<"Size of name "<<sizeof(name)<<endl;
    return 0;

}