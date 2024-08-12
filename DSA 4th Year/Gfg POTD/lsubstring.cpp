/*
Given a string you need to print the size of the longest possible substring that has exactly K unique characters. If there is no possible substring then print -1.

Example 1:

Input:
S = "aabacbebebe", K = 3
Output: 
7
Explanation: 
"cbebebe" is the longest substring with 3 distinct characters.
Example 2:

Input: 
S = "aaaa", K = 2
Output: -1
Explanation: 
There's no substring with 2 distinct characters.

*/
#include <bits/stdc++.h>
using namespace std;
int solve(string s, int k)
{
    int n = s.length();
    int i = 0, j = 0;
    int ans = -1;
    unordered_map<char, int> mp;
    while (j < n)
    {
        mp[s[j]]++;
        if (mp.size() < k)
            j++;
        else if (mp.size() == k)
        {
            ans = max(ans, j - i + 1);
            j++;
        }
        else if (mp.size() > k)
        {
            while (mp.size() > k)
            {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                    mp.erase(s[i]);
                i++;
            }
            j++;
        }
    }
    return ans;
}
int main(){

    // string str="aabacbebebe";
    string str="aaaa";
    int k=2;

    // int k=3;
    int n=str.length();
    cout<<solve(str,k);


    return 0;

}