/*
100185. Find Longest Special Substring That Occurs Thrice I
User Accepted:402
User Tried:812
Total Accepted:404
Total Submissions:1055
Difficulty:Medium
You are given a string s that consists of lowercase English letters.

A string is called special if it is made up of only a single character. For example, the string "abc" is not special, whereas the strings "ddd", "zz", and "f" are special.

Return the length of the longest special substring of s which occurs at least thrice, or -1 if no special substring occurs at least thrice.

A substring is a contiguous non-empty sequence of characters within a string.



Example 1:

Input: s = "aaaa"
Output: 2
Explanation: The longest special substring which occurs thrice is "aa": substrings "aaaa", "aaaa", and "aaaa".
It can be shown that the maximum length achievable is 2.
Example 2:

Input: s = "abcdef"
Output: -1
Explanation: There exists no special substring which occurs at least thrice. Hence return -1.
Example 3:

Input: s = "abcaba"
Output: 1
Explanation: The longest special substring which occurs thrice is "a": substrings "abcaba", "abcaba", and "abcaba".
It can be shown that the maximum length achievable is 1.


Constraints:

3 <= s.length <= 50
s consists of only lowercase English letters.
*/

#include <string>
#include <unordered_map>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int maximumLength(string s)
{

    vector<string> v;

    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            v.push_back(s.substr(i, j));
        }
    }
    //  now check if the substring is repeating thrice find their length and return the max length
    int max_length = 0;
    for (int i = 0; i < v.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] == v[j])
            {
                count++;
            }
        }
        if (count == 3)
        {
            max_length = max(max_length, (int)v[i].length());
        }
    }

    if (max_length == 0)
    {
        return -1;
    }
    return max_length;
}

int main()
{

    cout << maximumLength("aaaa") << endl;   // Output: 2
    cout << maximumLength("abcdef") << endl; // Output: -1
    cout << maximumLength("abcaba") << endl; // Output: 1

    return 0;
}
