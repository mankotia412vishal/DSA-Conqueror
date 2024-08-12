#include <bits/stdc++.h>
using namespace std;
void LastOcc1(string s,char ch,int i,int &ans){

    // base case
    if(i>=s.length()){
        return;
    }
    // RR
    if(s[i]==ch){
        ans=i;
    }
    LastOcc1(s,ch,i+1,ans);
}
void LastOcc(string s,char ch,int i,int &ans){

    // base case
    if(i<=0){
        return;
    }
    // RR
    if(s[i]==ch){
        ans=i;
        return;
    }
    LastOcc(s,ch,i-1,ans);
}
int main(){

    string s;
    cin>>s;

    int ans=-1;
    char ch;
    cin>>ch;

    // LastOcc1(s,ch,0,ans);
    LastOcc(s,ch,s.length()-1,ans);
//    char *c=strrchr(s,ch);
    cout<<"Answer is "<<ans<<endl;
    // cout<<"Answer is "<<c-s+1<<endl;
    return 0;

}