#include <bits/stdc++.h>
using namespace std;

void print(int n){
    // base case 
    if(n==0){
        return;
    }
    print(n/10);
    cout<<n%10<<endl;
  cout<<"printing the value of n  "<<n<<endl;
}
int main(){
    int n=647;
    print(n);

    
    return 0;

}