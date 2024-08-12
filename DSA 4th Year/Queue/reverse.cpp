#include <bits/stdc++.h>
using namespace std;
void reverseQ(queue<int> &q)
{
    stack<int> s;

    // step 1 push all the elements into stack
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        // push into stack
        s.push(temp);

    }

    // step 2 put all elements from stack into q

    while (!s.empty())
    {
         int temp=s.top();
         s.pop();
         q.push(temp);
    }
    
}
int main()
{

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