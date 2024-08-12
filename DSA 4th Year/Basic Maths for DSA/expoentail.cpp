#include <bits/stdc++.h>
using namespace std;
int TWO_DIGIT_EXPONENT(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans *= a;
    }
    return ans;

} // slow exponential code

// fast expoentail power

int fastExpo(int a, int b)
{

    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            // odd
            ans = ans * a;
        }
         a = a * a;
            b>>=1;
            // b /= 2;
        
    }

    return ans;
}
int main()
{

    // cout << TWO_DIGIT_EXPONENT(5, 4) << endl;
    cout << fastExpo(5, 4) << endl;
    return 0;
}