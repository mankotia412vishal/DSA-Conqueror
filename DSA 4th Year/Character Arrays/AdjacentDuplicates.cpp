#include<bits/stdc++.h>
using namespace std;
int main(){
    //  string str="acaaabbbacdddd";
     string str="abccbccba";
        int i=0;
     while (i<str.length())
     {
        int j=i+1;
       while (j<str.length() && str[i]==str[j])
       {
        j++;
       }
       if(j-i>1){
        str.erase(i,j-i);
       }
       else{
        i++;
       }
        
     }
     cout<<str<<endl;




}