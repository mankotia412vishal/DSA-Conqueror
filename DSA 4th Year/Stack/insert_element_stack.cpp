#include <bits/stdc++.h>
using namespace std;
void insertSorted(stack<int> &s, int &target)
{
    // base case
    if (s.empty()){
     s.push(target);
    return;
    }
       
    // base case
    if (s.top() >= target)
    {
        s.push(target);
        return;
    }

    int topElement = s.top();
    s.pop();
    insertSorted(s, target);

    // BT
    s.push(topElement);
}

void SortStack(stack<int> &s)
{
    // base case
    if (s.empty())
    {
        return;
    }
    int temp = s.top();
    s.pop();
    SortStack(s);

    insertSorted(s, temp);
     
}
int main()
{

    stack<int> s;
    s.push(7);
    s.push(11);
    s.push(3);
    s.push(5);
    s.push(9);
   
    cout<<endl;
    SortStack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}