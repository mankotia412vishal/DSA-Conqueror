#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "XIX";
   unordered_map<char,int>mp;
   mp['I']=1;
   mp['V']=5;
   mp['X']=10;
   mp['L']=50;
   mp['C']=100;
   mp['D']=500;
   mp['M']=1000;

    int ans=0;
    
    for (int  i = 0; i < str.length(); i++)
    {
      if(mp[str[i]]<mp[str[i+1]]){
        
         ans-=mp[str[i]]; 
      }
      else{
          ans+=mp[str[i]];
            
          
      }
         
    }
    cout << ans << endl;
    return 0;
}