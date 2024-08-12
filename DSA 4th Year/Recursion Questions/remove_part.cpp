#include <bits/stdc++.h>
using namespace std;
void RemoveOcc(string &str, string part)
{

    // base case

    int pos = str.find(part);
    if (pos != string::npos)
    {
        str.erase(pos, part.length());
    }
    if (pos == string::npos)
    {
        return;
    }
    RemoveOcc(str, part);
}
int main()
{

    string str = "daabcbaabcbc";
    string part = "abc";
    RemoveOcc(str, part);
    cout << str << endl;
    return 0;
}