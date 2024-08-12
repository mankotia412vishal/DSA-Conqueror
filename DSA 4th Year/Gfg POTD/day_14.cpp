#include <bits/stdc++.h>
using namespace std;
void subsequences(string s,int i,int size){
    if(s.length()==0){
        cout<<s<<endl;
        return;
    }
    subsequences(s, i+1,size);
}
int main(){

    string s="abc";
    subsequences(s,0,s.length());

    return 0;

}