#include <bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int target)
{

    // base case
    if (s.empty())
    {
        s.push(target);
        return;
    }

    // 1 case solve karegene
    int t = s.top();
    s.pop();
    insertAtBottom(s, target);

    // BT
    s.push(t);
}
void reverseStack(stack<int> &s)
{
    // base case
    if (s.empty())
        return;

    // 1 case solve karegne

    int target = s.top();
    s.pop();

    // reverse Stack
    reverseStack(s);

    // insert at bottom
    insertAtBottom(s, target);
}
int main()
{

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reverseStack(s);
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}