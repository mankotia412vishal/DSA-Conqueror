#include <bits/stdc++.h>
using namespace std;
void printSubsequences(string str, string output, int i,vector<string>&ans)
{
    // base case
    if (i >= str.length())
    {
        // cout << output << endl;
        ans.push_back(output);
        return;
    }

    // exclude
    printSubsequences(str, output, i + 1,ans);
    // include

    // output.push_back(str[i]);
    output+=str[i];
    printSubsequences(str, output, i + 1,ans);
}
int main()
{

    string str = "abc";
    string output = "";
    int i = 0;
    vector<string>ans;
    printSubsequences(str, output, i,ans);
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;
}