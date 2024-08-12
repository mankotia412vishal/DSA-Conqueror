#include <bits/stdc++.h>
using namespace std;
void Reverse(string &str,int s,int e){
    // base condn
        if(s>=e){
            return;
        }
    // Processing
    swap(str[s],str[e]);
    Reverse(str,s+1,e-1);
}
int main(){

    string str="abbc";
    int s=0,e=str.length()-1;
    Reverse(str,s,e);
    cout<<str<<endl;
    return 0;

}