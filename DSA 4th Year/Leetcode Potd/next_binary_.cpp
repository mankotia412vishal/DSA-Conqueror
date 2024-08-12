/*
A-5: Given a string ‘s’ consisting only of characters 'a', 'b', and 'c'. You are asked to apply the following algorithm on the string any number of times:
1. Pick a non-empty prefix from the string ‘s’ where all the characters in the prefix are the same.
2. Pick a non-empty suffix from the string ‘s’ where all the characters in this suffix are the same.
3. The prefix and the suffix should not intersect at any index.
4. The characters from the prefix and suffix must be the same.
5. Delete both the prefix and the suffix.
6. Return the minimum length of ‘s’ after performing the above operation any number of times (possibly zero times).

Examples:

1. Input: s = "ca"
Output: 2
Explanation: You can't remove any characters, so the string stays as is.

2. Input: s = "aabccabba"
Output: 3
Explanation: An optimal sequence of operations is:
- Take prefix = "aa" and suffix = "a" and remove them, s = "bccabb".
- Take prefix = "b" and suffix = "bb" and remove them, s = "cca".
*/

#include <bits/stdc++.h>
using namespace std;

int min_length(string s) {
    int n = s.size();
    int i = 0, j = n - 1;
    while (i < j && s[i] == s[j]) {
        while (i < j && s[i] == s[i + 1]) i++;
        while (i < j && s[j] == s[j - 1]) j--;
        i++, j--;
    }
    return j - i + 1;
}

int main() {
    string s = "ca";
    cout << min_length(s) << endl;
    return 0;
}
