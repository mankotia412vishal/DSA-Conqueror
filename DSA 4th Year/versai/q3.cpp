#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s1 = "My Name   is Vishal";
    int s = 0, e = s1.length() - 1;
    int maxlen = 0, wordLen = 0;
    string w = " ";
    while (s <= e)
    {
        if (s1[s] == ' ')
        {
            if (maxlen < wordLen)
            {
                maxlen = wordLen;
                wordLen = 0;
                // cout << "Vishal " << maxlen << endl;
            }
        }
        else
        {
            wordLen++;
        }
        s++;
    }
    cout << maxlen << endl;
    return 0;
}