#include<iostream>
#include<stack>
using namespace std;

int main(){
    // creation

    stack<int> st;
    

    // insertion 

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);


    // remove 
    st.pop();
    
    // /check  element on top is 

    cout<<"Element on top is "<<st.top()<<endl;

    cout<<"Size of stck is "<<st.size()<<endl;
    if(st.empty()){
        cout<<"Stack is empty \n";
    } 
    else{
        cout<<"Stack is not empty\n";
    }

    
}