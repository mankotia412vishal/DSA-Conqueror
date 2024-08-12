#include <bits/stdc++.h>
using namespace std;
void ReverseCounting(int n){
    // base condn
    if(n==0) return;

    cout<<n<<" ";
    ReverseCounting(n-1);
}
int main(){

    int n=10;
    ReverseCounting(n);
    
    return 0;

}