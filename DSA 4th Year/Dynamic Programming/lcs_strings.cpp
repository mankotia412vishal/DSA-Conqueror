/*
LCS of three strings
MediumAccuracy: 48.52%Submissions: 44K+Points: 4
Got your Geekbits? Now Get 90% Of Your Course Fee Refund! 

banner
Given 3 strings A, B and C, the task is to find the length of the longest sub-sequence that is common in all the three given strings.

Example 1:

Input:
A = "geeks"
B = "geeksfor", 
C = "geeksforgeeks"
Output: 5
Explanation: 
"geeks"is the longest common
subsequence with length 5.
Example 2:

Input: 
A = "abcd"
B = "efgh"
C = "ijkl"
Output: 0
Explanation: 
There's no subsequence common
in all the three strings.
Your Task:
You don't need to read input or print anything. Your task is to complete the function LCSof3() which takes the strings A, B, C and their lengths n1, n2, n3 as input and returns the length of the longest common subsequence in all the 3 strings.

Expected Time Complexity: O(n1*n2*n3).
Expected Auxiliary Space: O(n1*n2*n3).

Constraints:
1 <= n1, n2, n3 <= 20
Elements of the strings consitutes only of the lower case english alphabets.
*/
#include <bits/stdc++.h>
using namespace std;
int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
        {
            int c=0;
            if(n1==0||n2==0||n3==0) return 0;
            for(int i=0;i<n1;i++){
                for(int j=0;j<n2;j++){
                    for(int k=0;k<n3;k++){
                        if(A[i]==B[j]&&B[j]==C[k]){
                            c++;
                        }
                    }
                }
            }
          
        }
int main(){
    string A="geeks";
    string B="geeksfor";
    string C="geeksforgeeks";
    int n1=A.size();
    int n2=B.size();
    int n3=C.size();
    cout<<LCSof3(A,B,C,n1,n2,n3)<<endl;


    
    return 0;

}