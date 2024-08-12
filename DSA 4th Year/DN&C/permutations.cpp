#include <bits/stdc++.h>
using namespace std;
void printPermutation(string &str,int i){
    // base case
    if(i>=str.length()) {
        cout<<str<<" ";
        return;
    }

    // swapping
    for (int  j = i; j < str.length(); j++)
    {
        // /swap
         swap(str[i],str[j]);
        //  Recursion
         printPermutation(str,i+1);

        //  backtracking
         swap(str[i],str[j]);


    }
    

}
int main(){
    string str="abc";
    printPermutation(str,0);

    
    return 0;

}