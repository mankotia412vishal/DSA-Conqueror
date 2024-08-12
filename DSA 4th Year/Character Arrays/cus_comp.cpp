#include <bits/stdc++.h>
using namespace std;

bool cmp(char first, char second){
    cout<<first<<"== "<<second<<endl;
    cin.get();
    return first>second;
}
int main()
{

    string s = "abcd";
    sort(s.begin(), s.end(),cmp);
    // reverse(s.begin(), s.end());
    cout << s << endl;
    return 0;
}