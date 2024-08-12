#include <bits/stdc++.h>
using namespace std;
int main()
{

    char name[100] = "My name is Vishal ";

    for (int i = 0; i < strlen(name); i++)
    {

        if (strlen(name)-1 == i)
        {
            break;
        }
        if (name[i] == ' ')
        {
            name[i] = '@';
        }

        //  else continue;
    }
    cout << name << endl;
    return 0;
}