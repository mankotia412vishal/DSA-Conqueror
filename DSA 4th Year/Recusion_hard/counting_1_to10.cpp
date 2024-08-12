#include<bits/stdc++.h>
using namespace std;
void counting(int n){
    // Base case 
    if(n<=0) return;

    counting(n-1);
    cout<<n<<endl;
}
int main(){
    int n=10;
    counting(n);
}