#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    stack<int>st;
    st.push(-1);
    vector<int> ans(v.size());
    for(int i=v.size();i>=0;i--){
        int curr=v[i];
        while(st.top()>=curr){
             st.pop();
        }
       
            ans[i]=st.top();
            st.push(curr);


    }
    cout<<"Printing \n";
    for(auto i:ans){
        cout<<i<<" ";
    }
    return 0;

}