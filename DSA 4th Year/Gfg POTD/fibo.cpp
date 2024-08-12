/*
Given a positive integer n, find the nth fibonacci number. Since the answer can be very large, return the answer modulo 1000000007.

Example 1:

Input: 
n = 2
Output: 
1 
Explanation: 
1 is the 2nd number of fibonacci series.

*/

#include <bits/stdc++.h>
using namespace std;
int main(){

    int n=3;
    int a=0,b=1,c;
    for (int  i = 2; i <= n; i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    cout<<c<<endl;
    
    return 0;

}
