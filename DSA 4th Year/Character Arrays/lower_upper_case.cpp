#include <bits/stdc++.h>
using namespace std;
int main(){

    char arr[10]="vishal";
    for (int  i = 0; i < strlen(arr); i++)
    {
        arr[i]=arr[i]-'a'+'A';
    }
    
    char ch[100]="VIsHAL";
    for (int  i = 0; i < strlen(arr); i++)
    {
        if(ch[i]>='a' && ch[i]<='z'){
            continue;
        }
        else{
    ch[i]=ch[i]-'A'+'a';
        }
       
    }
    cout<<arr<<endl;
    cout<<ch<<endl;
    

    return 0;

}