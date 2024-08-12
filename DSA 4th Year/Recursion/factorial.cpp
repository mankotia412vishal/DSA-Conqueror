#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    cout<<"Function mein call "<<n<<endl;
    //base case 
    if(n==2) return 2;

    // Recursive Relation

     return n*factorial(n-1);
     
}
int main(){

    int n=5;
    
    cout<<factorial(n);
    return 0;

}