/*
Smallest window containing 0, 1 and 2
EasyAccuracy: 49.73%Submissions: 15K+Points: 2
90% Refund available on all premium courses 
Discover How  

banner
Given a string S consisting of the characters 0, 1 and 2. Your task is to find the length of the smallest substring of string S that contains all the three characters 0, 1 and 2. If no such substring exists, then return -1.

Example 1:

Input:
S = 01212
Output:
3
Explanation:
The substring 012 is the smallest substring
that contains the characters 0, 1 and 2.
Example 2:

Input: 
S = 12121
Output:
-1
Explanation: 
As the character 0 is not present in the
string S, therefor no substring containing
all the three characters 0, 1 and 2
exists. Hence, the answer is -1 in this case.
Your Task:
Complete the function smallestSubstring() which takes the string S as input, and returns the length of the smallest substring of string S that contains all the three characters 0, 1 and 2.

Expected Time Complexity: O( length( S ) )
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ length( S ) ≤ 105
All the characters of String S lies in the set {'0', '1', '2'}
*/

#include <bits/stdc++.h>
using namespace std;
int smallestSubstring(string S) {
    int c1=-1,c2=-1,c3=-1,result=INT_MAX;
    for(int i=0;i<S.length();i++){
        if(S[i]=='0'){
            c1=i;
        }
        else if(S[i]=='1'){
            c2=i;
        }
        else{
            c3=i;
        }
        if(c1!=-1 && c2!=-1 && c3!=-1){
            result=min(result,max(c1,max(c2,c3))-min(c1,min(c2,c3))+1);
        }
    }
    if(result==INT_MAX){
        return -1;
    }
    return result;
    


}
int main(){

    
    return 0;

}