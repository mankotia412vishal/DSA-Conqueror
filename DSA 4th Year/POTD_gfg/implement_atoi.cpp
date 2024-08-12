#include <bits/stdc++.h>
using namespace std;
int main(){

    string s="-123";
    int ans=0;
    
    int  sing=0;
    for(int i=0;i<s.length();i++){
        if(s[0]=='-'){
           sing=1;
            
        }
        
        
            if(s[i]>=48 && s[i]<=57 && s[0]!='-'){
                int n=s[i]-48;
                ans=ans*10+n;
                
            }
            else{
                return -1;
            }
        
    }
    if(sing==0){
cout<<ans<<endl;
    }
    else cout<<-ans<<endl;
    
   

    return 0;

}  