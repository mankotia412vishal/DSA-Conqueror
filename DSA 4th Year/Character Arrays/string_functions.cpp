#include <bits/stdc++.h>
using namespace std;

bool compareString(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }
    else
    {
        int j = 0;
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] != b[j++])
            {
                return false;
            }
        }
    }
    return true;
}
int main()
{

    string str = "Vishal";
    string a = "mankotia";
    string b = "Vishal";
    // cin>>str;
    cout << str.length() << endl;
    cout << str.size() << endl;
    cout << str.empty() << endl;
    str.push_back('a');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;
    cout << str.substr(0, 3) << endl;
    if (a.compare(b) == 0)
    {
        cout << "a and b are  exactly same strings " << endl;
    }
    else
    {
        cout << "a and b are not equal\n ";
    }
    cout << compareString(a, b) << endl;

    string sample="Hello Vishal Singh is here";
    string target="isk ";
    cout<<sample.find(target)<<endl;

    return 0;
}