/*
6450. Determine the Minimum Sum of a k-avoiding Array
User Accepted:12708
User Tried:14178
Total Accepted:13082
Total Submissions:23501
Difficulty:Medium
You are given two integers, n and k.

An array of distinct positive integers is called a k-avoiding array if there does not exist any pair of distinct elements that sum to k.

Return the minimum possible sum of a k-avoiding array of length n.

 

Example 1:

Input: n = 5, k = 4
Output: 18
Explanation: Consider the k-avoiding array [1,2,4,5,6], which has a sum of 18.
It can be proven that there is no k-avoiding array with a sum less than 18.
Example 2:

Input: n = 2, k = 6
Output: 3
Explanation: We can construct the array [1,2], which has a sum of 3.
It can be proven that there is no k-avoiding array with a sum less than 3.
1 <= n, k <= 50
int minimumSum(int n, int k) {
        // write your c++ code here
    }
*/

// the previous code you have wriiten is wrong 
// you have to find the minimum sum of k avoiding array

#include <bits/stdc++.h>
using namespace std;

int minimumSum(int n, int k) {
    if (k == 1) {
        return n * (n + 1) / 2; // Sum of first n positive integers
    }
    if (k == n) {
        return 2 * n - 1; // Minimum possible sum for consecutive odd integers
    }
    return n; // Minimum possible sum for consecutive integers
}

int main() {
    int n = 5, k = 4;
    cout << minimumSum(n, k) << endl;

    n = 2, k = 6;
    cout << minimumSum(n, k) << endl;

    return 0;
}
