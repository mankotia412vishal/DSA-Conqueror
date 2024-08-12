/*
100322. Lexicographically Minimum String After Removing Stars
User Accepted:2003
User Tried:4450
Total Accepted:2171
Total Submissions:7737
Difficulty:Medium
You are given a string s. It may contain any number of '*' characters. Your task is to remove all '*' characters.

While there is a '*', do the following operation:

Delete the leftmost '*' and the smallest non-'*' character to its left. If there are several smallest characters, you can delete any of them.
Return the lexicographically smallest resulting string after removing all '*' characters.

 

Example 1:

Input: s = "aaba*"

Output: "aab"

Explanation:

We should delete one of the 'a' characters with '*'. If we choose s[3], s becomes the lexicographically smallest.

Example 2:

Input: s = "abc"

Output: "abc"

Explanation:

There is no '*' in the string.
 

Constraints:

1 <= s.length <= 105
s consists only of lowercase English letters and '*'.
The input is generated such that it is possible to delete all '*' characters.

*/
#include <bits/stdc++.h>
using namespace std;
string minString(string s){    
   deque<char> dq;
//    While there is a '*', do the following operation:

// Delete the leftmost '*' and the smallest non-'*' character to its left. If there are several smallest characters, you can delete any of them but only the minimum char ;left to the stars.
// Return the lexicographically smallest resulting string after removing all '*' characters.
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '*'){
        //    find the minimum char to the left of the star and delete it
            char min_char = dq.front();
            for(auto x : dq){
                min_char = min(min_char, x);
            }
            dq.pop_front();
            dq.erase(find(dq.begin(), dq.end(), min_char));
        }else{
            dq.push_back(s[i]);
        }
    

    

}
int main(){
    string s = "de*";
    cout << minString(s) << endl;
    return 0;
}
