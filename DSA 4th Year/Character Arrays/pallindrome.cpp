#include <bits/stdc++.h>
using namespace std;
int main()
{

    char ch[100];
    cin.getline(ch, 100);
    bool pp = true;

    int s = 0, e = strlen(ch) - 1;
    while (s <= e)
    {
        if (ch[s] != ch[e])
        {
            pp = false;
            cout << "Not a pallindrome\n";
            break;
        }
        else
        {
            s++, e--;
        }
    }
    if (pp)
    {
        cout << "Pallindrome ";
    }

    return 0;
}