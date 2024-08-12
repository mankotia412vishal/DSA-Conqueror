/*

8048. Maximum Odd Binary Number
User Accepted:0
User Tried:0
Total Accepted:0
Total Submissions:0
Difficulty:Easy
You are given a binary string s that contains at least one '1'.

You have to rearrange the bits in such a way that the resulting binary number is the maximum odd binary number that can be created from this combination.

Return a string representing the maximum odd binary number that can be created from the given combination.

Note that the resulting string can have leading zeros.

 

Example 1:

Input: s = "010"
Output: "001"
Explanation: Because there is just one '1', it must be in the last position. So the answer is "001".
Example 2:

Input: s = "0101"
Output: "1001"
Explanation: One of the '1's must be in the last position. The maximum number that can be made with the remaining digits is "100". So the answer is "1001"
*/


#include <bits/stdc++.h>
using namespace std;
string MaxStr(string &str,int n){
    string ans=str;
    int c=0;
    for(int i=0;i<n;i++){
        if(str[i]=='1'){
            c++;
        }
    }

    if(c==1){
        for(int i=0;i<n;i++){
            if(str[i]=='1'){
                swap(ans[i],ans[n-1]);
                break;
            }
        }
    }
    else{
        for(int i=n;i>=0;i--){
            if(str[i]=='1'){
                swap(ans[i],ans[n-1]);
                break;
            }
        }
    }
    // move all the remaining ones to the starting of the string 
    int j=0;
    for(int i=0;i<n-1;i++){
        if(ans[i]=='1'){
            swap(ans[i],ans[j]);
            j++;
        }
    }
    
     return ans;   
}
int main(){

    // string str="010";
    string str="0101";
    int n=str.length();
    string ans=MaxStr(str,n);
    cout<<ans<<endl;

    
    return 0;

}