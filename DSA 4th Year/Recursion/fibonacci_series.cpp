#include <bits/stdc++.h>
using namespace std;
int  fib(int n){
    // Base case
    if(n==1){
        return 0;
    }
    if(n==2){
        return 1;
    }
    // RR ->  f(n)=f(n-1)+f(n-2);
    return fib(n-1)+fib(n-2);

}
int main(){
        int n=9;
       cout<<fib(n);
    
    return 0;

}