/*
Given an array of words containing n strings of the same lengths.

In one move, you can choose any position in any one string and change the letter at that position to the previous or next letter in alphabetical order. For example:

'c' can be changed to 'd' or 'b'.
'a' can only be changed to 'b'.
'z' can only be changed to 'y'.
Find the minimum difference over all the possible pairs of the n strings.

The difference between the two strings is the minimum number of moves required to make them equal. 

 

Example 1:

Input:
n = 5
words[] = { "cdd", "zba","dgf","xyz","mnp"}
Output: 6
Explanation:
Among all the pairs, the minimum difference 
is between the pairs ["cdd", "dgf"].
Convert 'c' to 'd' in one move.
Convert 'd' to 'g' in three moves.
Convert 'd' to 'f' in two moves.
Example 2:

Input:
n = 3
words[] = {"ab","ab","ab"}
Output: 0
*/
 
#include <bits/stdc++.h>
using namespace std;

int minabsolute(string s1, string s2) {
    int ans = 0;
    for (int i = 0; i < s1.length(); i++) {
        int diff = abs(s1[i] - s2[i]);
        ans += min(diff, 26 - diff); // Choose minimum of current and opposite direction
    }
    
    return ans;
}

int main() {
    int n =6;
    // vector<string> s = {"cdd", "zba", "dgf", "xyz", "mnp"};
    // abb  zba bef cdu ooo zzz
    vector<string> s = {"abb", "zba", "bef", "cdu", "ooo", "zzz"};
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            ans = min(ans, minabsolute(s[i], s[j]));
        }
    }
    cout << ans << endl;
    return 0;
}


/*
For Input: 
6
abb
zba
bef
cdu
ooo
zzz
Your Code's output is: 
2
It's Correct output is: 
8
Output D
*/