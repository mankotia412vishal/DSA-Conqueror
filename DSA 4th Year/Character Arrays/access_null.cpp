#include <bits/stdc++.h>
using namespace std;
int main(){

    char ch[10];
    ch[0]='a';
    ch[1]='\0';
    ch[2]='a';
    ch[3]='\0';

    string str="Vi\0hal Singh";
    int n=strlen(ch);
    cout<<n<<endl;
    for (int  i = 0; i < strlen(ch); i++)
    {
      cout<<ch[i]<<endl;
    }
    for (int  i = 0; i < str.length(); i++)
    {
      cout<<str[i]<<endl;
    }
    

    return 0;

}