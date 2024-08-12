#include <bits/stdc++.h>
using namespace std;
int main(){

    string s="noon";
     for (int  i = 0; i < s.length(); i++)
     { 
        int j =  i;
        for (; j < s.length(); j++)
        {
            cout<<s.substr(i,j+1)<<" ";
        }
        cout<<"\n";
     }
     
    return 0;

}