#include <bits/stdc++.h>
using namespace std;

bool checkKey(string &str,int &n,int i, char &key){
    if(i>=n) return false;  //means nahi mili key

    if(str[i]==key){
        return true;
    }
    return checkKey(str,n,i+1,key);
   
}
int main(){

    string str="Vishal";
    int n=str.length();
    int i=0;
    char key='l';
     bool ans=checkKey(str,n,i,key);
    cout<<"Answer is "<<ans<<endl;
    return 0;

}