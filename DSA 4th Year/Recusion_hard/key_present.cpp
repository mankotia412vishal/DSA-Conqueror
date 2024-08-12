#include <bits/stdc++.h>
using namespace std;

bool check(string &str, char &ch, int i)
{
    // baase case
    if (i >= str.length())
    {
        cout << "Not present\n";
        return false;
    }

    // check
    if (str[i] == ch)
    {
        cout << "Bhai Mil gya haii\n";
        return true;
    }

    return check(str, ch, i + 1);
}
int main()
{

    string str = "Vishal";
    char key = 's';
    int i = 0;
    bool ans = check(str, key, 0);
    if (ans)
    {
        cout << "Mast mjja aa gya  " << endl;
    }
    else
    {
        cout << "Majja nhi aya\n";
    }
}