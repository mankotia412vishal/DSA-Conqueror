#include <bits/stdc++.h>
using namespace std;

void print(string s,int i,int j){
    for (int  k = 1; i+k <=s.length(); k++)
    {
        cout<<s.substr(i,k)<<" ";
    }
    
}
void expand(string s,int i,int j){
    while (i>=0 && j<s.length()&& s[i]==s[j])
    {
        
        
        print(s,i,j);
        i--,j++;
        
       
    }
    
}
int main(){

    string s="noon";
    int n=s.length();
    for (int  i = 0; i < n; i++)
    
    {
         expand(s,i,i);


        // expand(s,i,i+1);
    }
    
    return 0;

}