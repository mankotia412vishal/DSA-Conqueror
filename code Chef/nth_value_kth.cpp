/*
100305. Find the N-th Value After K Seconds
User Accepted:18278
User Tried:19502
Total Accepted:18851
Total Submissions:32744
Difficulty:Medium
You are given two integers n and k.

Initially, you start with an array a of n integers where a[i] = 1 for all 0 <= i <= n - 1. After each second, you simultaneously update each element to be the sum of all its preceding elements plus the element itself. For example, after one second, a[0] remains the same, a[1] becomes a[0] + a[1], a[2] becomes a[0] + a[1] + a[2], and so on.

Return the value of a[n - 1] after k seconds.

Since the answer may be very large, return it modulo 109 + 7.

 

Example 1:

Input: n = 4, k = 5

Output: 56

Explanation:

Second	State After
0	[1,1,1,1]
1	[1,2,3,4]
2	[1,3,6,10]
3	[1,4,10,20]
4	[1,5,15,35]
5	[1,6,21,56]
Example 2:

Input: n = 5, k = 3

Output: 35

Explanation:

Second	State After
0	[1,1,1,1,1]
1	[1,2,3,4,5]
2	[1,3,6,10,15]
3	[1,4,10,20,35]
 

Constraints:

1 <= n, k <= 1000
*/
#include <bits/stdc++.h>
using namespace std;
int main(){

    int n = 4, k = 5;
    vector<int> a(n, 1);
    for (int i = 0; i < k; i++)
    {
        vector<int> b(n, 0);
        b[0] = a[0];
        for (int j = 1; j < n; j++)
        {
            b[j] = (b[j - 1] + a[j]) % 1000000007;
        }
        a = b;
    }
    cout << a[n - 1] << endl;
    return 0;

}