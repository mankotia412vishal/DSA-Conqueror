#include <bits/stdc++.h>
using namespace std;
int main(){

    string str="abc";
    for (int i = 0; i < str.size(); i++)
    {
        for (int  j = 1; j <=str.size()-i; j++)
        {
             cout<<str.substr(i,j)<<" ";
        }
        cout<<endl;
    }
    
    return 0;

}









