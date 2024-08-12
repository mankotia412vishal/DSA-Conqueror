/*

Sum-string
HardAccuracy: 51.15%Submissions: 10K+Points: 8
Job-A-Thon Hiring Challenge: Now Revamped for Professionals. Fast-track your Resumes to Job Openings today

banner
Given a string of digits, the task is to check if it is a ‘sum-string’. A string S is called a sum-string when it is broken down into more than one substring and the rightmost substring can be written as a sum of two substrings before it and the same is recursively true for substrings before it.

Example 1:

Input:
S = "12243660"
Output:
1
Explanation:
"12243660" can be broken down as {"12", "24", "36", "60"}.
We can get 60 from 24 and 36 as 24 + 36 = 60. Similarly 36 can be written as 12 + 24.
Example 2:

Input:
1111112223
Output:
1
Explanation:
"1111112223" can be broken down as {"1", "111", "112", "223"}.
We can get 223 from 111 and 1112 as 111 + 112 = 223. Similarly 112 can be written as 1 + 111.
Your Task:

You don't need to read input or print anything. Your task is to complete the function isSumString() which takes the string S and returns 1 is S is a sum-string otherwise returns 0.

Expected Time Complexity: O(|S|3)
Expected Auxiliary Space: O(|S|)

Constraints:
1 <= |S| <= 500
String consists of characters from '0' to '9'.
*/
#include <bits/stdc++.h>
using namespace std;
bool isSumString(string s)
{
    int n = s.length();
    if (n < 3)
    {
        return false;
    }

    for (int i = 1; i < n - 1; i++)
    {
        string left = s.substr(0, i);
        string right = s.substr(i);

        int leftSum = stoi(left);
        int rightSum = stoi(right);

        if (leftSum + rightSum == stoi(s))
        {
            if (isSumString(left) || isSumString(right))
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{

    string s1 = "12243660";
    // write code
    cout<<isSumString(s1);
    return 0;
}

