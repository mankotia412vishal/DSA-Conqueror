#include <bits/stdc++.h>
using namespace std;



vector<vector<string>> groupAnagrams(vector<string>& strs) {
   unordered_map<string, vector<string>> mp;
    
    for (const string& str : strs) {
        string sortedStr = str;
        sort(sortedStr.begin(), sortedStr.end());
        mp[sortedStr].push_back(str);
    }
    
    int maxCount = 0;
    for (const auto& pair : mp) {
        maxCount = max(maxCount, static_cast<int>(pair.second.size()));
    }
    
    vector<vector<string>> ans;
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