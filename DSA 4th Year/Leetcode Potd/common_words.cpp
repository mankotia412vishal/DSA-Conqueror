/*

1002. Find Common Characters
Easy
Topics
Companies
Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.

 

Example 1:

Input: words = ["bella","label","roller"]
Output: ["e","l","l"]
Example 2:

Input: words = ["cool","lock","cook"]
Output: ["c","o"]
 

Constraints:

1 <= words.length <= 100
1 <= words[i].length <= 100
words[i] consists of lowercase English letters.

*/
#include <bits/stdc++.h>
using namespace std;
 vector<string> commonChars(vector<string>& words) {
         vector<string> ans;
         unordered_map<int,unordered_map<char,int>> mp;
            for(int i=0;i<words.size();i++){
                unordered_map<char,int> temp;
                for(int j=0;j<words[i].size();j++){
                    temp[words[i][j]]++;
                }
                mp[i] = temp;
            }
            for(auto x: mp[0]){
                int min_count = INT_MAX;
                for(int i=1;i<words.size();i++){
                    if(mp[i].find(x.first)!=mp[i].end()){
                        min_count = min(min_count,mp[i][x.first]);
                    }else{
                        min_count = 0;
                        break;
                    }
                }
                if(min_count!=0){
                    for(int i=0;i<min_count;i++){
                        string s = "";
                        s+=x.first;
                        ans.push_back(s);
                    }
                }
            }
            return ans;
            
        
        
    }
int main(){
    vector<string> words = {"bella","label","roller"};
    vector<string> ans = commonChars(words);
    for(auto x: ans){
        cout<<x<<" ";
    }


    
    return 0;

}