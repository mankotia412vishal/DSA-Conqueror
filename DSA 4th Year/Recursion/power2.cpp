#include <bits/stdc++.h>
using namespace std;
int  power(int n){
    // base case 
    if(n==1) return 2;

     return 2*power(n-1);
    
}
int main(){

    int n=10;
    cout<<power(n);
    return 0;

}