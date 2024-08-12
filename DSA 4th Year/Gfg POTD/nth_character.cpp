#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "1100";
    int r = 2, n = 3;
    for (int loop = 0; loop < r; loop++)
    {
        
    string temp="";

        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='0'){
                temp.push_back('0');
                temp.push_back('1');
            }
            else{
                temp.push_back('1');
                temp.push_back('0');


            }


        }
        s=temp;
    }
    cout<<s[s.length()-3];
}