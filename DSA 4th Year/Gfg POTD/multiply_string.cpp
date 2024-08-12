#include <bits/stdc++.h>
using namespace std;
string multiplyStrings(string s1, string s2) {
    int n1 = s1.length();
    int n2 = s2.length();
    int ans1 = 0, ans2 = 0;

    for (int i = 0; i < n1; i++) {
        int ld = s1[i] -'0';
        cout<<ld<<endl;
        ans1 = ans1 * 10 + ld;
    }

    for (int j = 0; j < n2; j++) {
        int ld = s2[j] - '0';
        ans2 = ans2 * 10 + ld;
    }

    int ans = ans1 * ans2;
    return to_string(ans);

        
       }
int main(){

    string s1="0033";
    string s2="002";
    cout<<multiplyStrings(s1,s2)<<endl;
    return 0;

}