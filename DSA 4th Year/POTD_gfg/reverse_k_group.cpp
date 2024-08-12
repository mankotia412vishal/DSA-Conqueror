#include <bits/stdc++.h>
using namespace std;
int main(){

    queue<int>q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(12);
    q.push(15);
    int k=5;

    
    stack<int>st;
    int i=0;
    if(k==0||k>q.size()){
        cout<<"kuch nhi \n";
        return 0;
    }
    while(!q.empty()){
        int temp=q.front();
        q.pop();
        st.push(temp);
        i++;
        if(i==k) break;
    }
    while(!st.empty()){
        int temp=st.top();
        st.pop();
        q.push(temp); 
    }                 
     
    i=0;
    while(!q.empty()&&q.size()-k!=0 ){
        int temp=q.front();  
        q.pop();
        q.push(temp);
        i++;
        if(i==q.size()-k) break;
    }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }



    return 0;

}