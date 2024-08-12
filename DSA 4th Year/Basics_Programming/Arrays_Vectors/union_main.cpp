#include <bits/stdc++.h>
using namespace std;
int main(){

    set<int> st;
    vector<int> t{1,2,3,4,5};
    vector<int> t1{1,2,3};
    for (int  i = 0; i < t.size(); i++)
    {
         st.insert(t[i]);
    }
    for (int  i = 0; i < t1.size(); i++)
    {
         st.insert(t1[i]);
    }
    for (auto i:st)
    {
        cout<<i<<" ";
    }
    
    

    return 0;

}