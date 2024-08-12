#include <bits/stdc++.h>
using namespace std;
void digits(int n)
{
    // base case
    if (n == 0)
        return;

    digits(n / 10);
    cout << n % 10 << endl;
}
int main()
{

    int n = 123;
    digits(n);
    return 0;
}