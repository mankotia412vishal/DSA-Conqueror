#include <bits/stdc++.h>
using namespace std;
int main(){

    string vishal="101010101010101";
    cout<<"\nPrinting the length of the string "<<vishal.length();
    int len=vishal.length();
    for (int i = 0; i < len; i++)
    {
        if(vishal[i]!='0' &&  vishal[i]!='1') {
             
            cout<<"anss is 0 ";
            return 1;
        } 
    

    }
    cout<<" Print the string has 0 and 1 only \n";
    return 0;

}