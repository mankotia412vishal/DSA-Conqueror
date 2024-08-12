#include <bits/stdc++.h>
using namespace std;
static bool cmp(string a,string b){
    // cout<<a<<" "<<b<<endl;
    // int sh;
    // cin>>sh;
    string t1=a+b;
    string t2=b+a;
    // cout<<"print "<<(t1>t2)<<endl;
    return t1<t2;
}
int main(){

    int n = 5;

    string arr[] =  {"3", "30", "34", "5", "9"};
    sort(arr,arr+n,cmp);
    for(auto i:arr){
        cout<<i<<endl;
    }

// Output: "9534330"
    return 0;

}