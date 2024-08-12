#include <bits/stdc++.h>
using namespace std;
void reverseQ(queue<int>&q){
    // base case
    if(q.empty()){
        return;
    }

    // ek case solve kar dunga
    int temp=q.front();
    q.pop();
    reverseQ(q);
    q.push(temp);
}
int main(){

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    reverseQ(q);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    cout<<endl;
    return 0;

}