#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a1;
    char a[1024] = {"abcd"};
    char *ptr = a;
    cout << sizeof(a) << endl;
    cout << sizeof(*ptr) << endl;
    cout << a << endl;
    a1.push_back(33);
    a1.emplace_back(34);
    for (int  i = 0; i < a1.size(); i++)
    {
         cout<<a1[i]<<" ";
    }
    

    return 0;
}