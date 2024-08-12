#include <bits/stdc++.h>
using namespace std;
int  fib(int n)
{
    // base case4
    if (n == 0 )
    {
        // cout << n << " ";
        return n;
    }
    if (n == 1 )
    {
        // cout << n << " ";
        return n;
    }
    int ans=fib(n - 1) + fib(n - 2);
    return ans;

    
}
int main()
{

    int n = 3;
   cout<< fib(n);
    return 0;
}