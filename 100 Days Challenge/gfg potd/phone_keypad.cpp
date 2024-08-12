#include <bits/stdc++.h>
using namespace std;
bool static compare(pair<char, int> a, pair<char, int> b){
    return a.second > b.second;
}
int main(){

    string word = "aabbccddeeffgghhiiiiii";
    unordered_map<char, int> mp;
    for(int i=0; i<word.size(); i++){
        mp[word[i]]++;
    }
    // sort this map interms of the values in decreasing order
    vector<pair<char, int>> v;
    for(auto x: mp){
        v.push_back({x.first, x.second});
    }
    sort(v.begin(), v.end(),compare);
    for(auto x: v){
        cout<<x.first<<" "<<x.second<<endl;
    }
    int ans=0;
   for(int i=0;i<v.size();i++){
       ans+=(i/8+1)*v[i].second;
   }
   cout<<ans<<endl;
    return 0;

}