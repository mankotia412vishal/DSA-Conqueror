#include <bits/stdc++.h>
using namespace std;
bool check(string s1,string s,int i,int j){
     
    
    return true;;
}
int main(){

   string words[] = {"alice","bob","charlie"};
   string s = "abc";
   int n=sizeof(words)/sizeof(words[0]);
   if(n>s.size()) return false;
   int i=0,j=0;
   for (auto  str :words)
   {
    // bool ans=check(str,s,i,j);
    if(str[i]==s[j]){
        i++,j++;
        break;
     } 
     else{
        return false;
     }
     
   }
   

    return 0;

}