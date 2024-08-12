#include <bits/stdc++.h>
using namespace std;
bool Solve(string str, int s, int e)
{
    // base case
    if (s >= e)
    {
        cout << "Pallindrome\n";
        return true;
    }
    
    // ek case solve kar lungs
    if (str[s] != str[e]){
    cout << "Not a Pallindrome\n";
    return false;
    }
       
    return Solve(str, s + 1, e - 1);
}
int main()
{

    string str = "aaaaw";
    int s = 0, e = str.length() - 1;
    bool ans = Solve(str, s, e);
    cout << "Answer is " << ans << endl;
    return 0;
}