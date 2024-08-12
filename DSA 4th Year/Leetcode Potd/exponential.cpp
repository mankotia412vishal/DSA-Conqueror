/*
Modular Exponentiation for large numbers
MediumAccuracy: 52.56%Submissions: 30K+Points: 4
In need of more Geekbits? Win from a pool of 3500+ Geekbits via DSA-based Coding Contest every sunday!

banner
Implement pow(x, n) % M.
In other words, for a given value of x, n, and M, find  (xn) % M.
 

Example 1:

Input:
x = 3, n = 2, m = 4
Output:
1
Explanation:
32 = 9. 9 % 4 = 1.
Example 2:

Input:
x = 2, n = 6, m = 10
Output:
4
Explanation:
26 = 64. 64 % 10 = 4.

Your Task:
You don't need to read or print anything. Your task is to complete the function PowMod() which takes integers x, n, and M as input parameters and returns xn % M.
 

Expected Time Complexity: O(log(n))
Expected Space Complexity: O(1)
 

Constraints:
1 ≤ x, n, M ≤ 109


*/
#include <bits/stdc++.h>
using namespace std;
int main(){

    int x=3,n=2,m=4;
    // use binary search to find the power of x
    int ans=1;
    while(n>0){
        if(n%2==1){
            ans=(ans*x)%m;
        }
        x=(x*x)%m;
        n=n/2;
    }
    cout<<ans;
    
    return 0;

}