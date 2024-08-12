#include <bits/stdc++.h>
using namespace std;
int main(){

    queue<int> q;

    // insert
    q.push(5);
    q.push(6);
    q.push(25);
    q.push(55);

    // size
    cout<<"Size of queue "<<q.size()<<endl;

    // removal
    q.pop();
    cout<<"Size of queue "<<q.size()<<endl;

    if(q.empty()){
        cout<<"Q is empty\n";
    }
    else{
        cout<<"Q is not empty \n";
    }

    cout<<"Frnt element is "<<q.front()<<endl;
    cout<<"Back  element is "<<q.back()<<endl;
    cout<<"Rear element is "<<q.rear ()<<endl;
    return 0;

}