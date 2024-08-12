/*

Given an array of strings strs, group the anagrams together and return all the groups which have the highest count An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Input:

First line contains number of Strings Second Line contains array of String literals in lowercase

Output:

Returns the group of string literals which has max count (in separate lines if the max count is same in any order)

Constraints:

1<= strs.length <= 100

<<= strs[i].length <= 100

strs[i] consists of lowercase English letters.
[7:21 pm, 11/4/2024] Vishal Singh: Sample Case:

Input

3

"debitcard"

"creditcard"

"badcredit"

Output

"debitcard" "badcredit"

Input

3

"astronomer"

"moonstarrer"

"moonstalker"

Output

"astronomer" "moonstarrer"

*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
  vector<vector<string>> ans;
    unordered_map<string, vector<string>> mp;

    // Hash function to compute character frequency
    auto hashStr = [](const string& s) {
        string hashKey(26, '0');
        for (char c : s) {
            hashKey[c - 'a']++;
        }
        return hashKey;
    };

    string firstStrHash = hashStr(strs[0]);

    // Group anagrams based on character frequency hash
    for (const string& str : strs) {
        string hashKey = hashStr(str);
        if (hashKey == firstStrHash) {
            mp[hashKey].push_back(str);
        }
    }

    // Find the maximum count of anagrams
    int maxCount = 0;
    for (const auto& pair : mp) {
        maxCount = max(maxCount, static_cast<int>(pair.second.size()));
    }

    // Collect groups with the highest count
    for (const auto& pair : mp) {
        if (pair.second.size() == maxCount) {
            ans.push_back(pair.second);
        }
    }

    return ans;
}
int main()
{
    vector<string> strs = {
        "astronomer",
        "moonstarrer",
        "moonstalker"};
    // vector<string> strs = {
    //         "debitcard",
    //         "creditcard",
    //         "badcredit"
    //     };
    vector<vector<string>> groups = groupAnagrams(strs);

    // Output the group(s) with the highest count
    for (const auto &group : groups)
    {
        for (const string &str : group)
        {
            cout << "\"" << str << "\" ";
        }
        cout << endl;
    }

    return 0;
 
}
