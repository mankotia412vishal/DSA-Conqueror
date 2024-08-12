#include <bits/stdc++.h>
using namespace std;
  string convertToTitle(int columnNumber) {
    string ans="";
    while(columnNumber>0){
        int ColumnNumber=columnNumber-1;
       
        int rem=ColumnNumber%26;
         cout<<rem<<endl;
        cin.get();
        ans+=('A'+rem);
        columnNumber=ColumnNumber/26;


    }
    reverse(ans.begin(),ans.end());
    return ans;

        
    }
int main(){

    int a=2;
    cout<<convertToTitle(a)<<endl;
    return 0;

}