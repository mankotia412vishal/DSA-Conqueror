#include <bits/stdc++.h>
using namespace std;
int main(){

    string s1="13";
    string s2="211";
     
    int i=s1.size()-1;
    int j=s2.size()-1;
    int c=0;
    string ans="";
    while (1)
    {


        int n1=(i>=0)?s1[i]-'0':0;
        // cout<<n1<<endl;
        int n2=(j>=0)?s2[j]-'0':0;
        int sum=n1+n2+c;
        int digit=sum%10;
        c=sum/10;
        ans+=digit+'0';
        // cout<<ans<<endl;
        // cin.get();
        i--,j--;
       if(i<0 &&j<0) {
        if(c!=0){
            ans.push_back(c+'0');
        }
        break;
       }
        
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    

    return 0;

}