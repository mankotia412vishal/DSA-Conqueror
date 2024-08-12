#include <iostream>
using namespace std;
int main()
{
    int r, c, i = 1, j = 1;
    cin >> r >> c;
    while (i <= r)
    {
        j=1;
        while (j <= c)
        {
            cout << "* ";
            j++;
        }

        
        cout << "\n";
        i++;
    }
}