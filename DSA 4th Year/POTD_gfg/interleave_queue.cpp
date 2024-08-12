#include <bits/stdc++.h>
using namespace std;

void Interleave(queue<int> &q)
{
    int size = q.size() / 2;
    queue<int> q1;
    int cnt = 0;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        q1.push(temp);
        cnt++;
        if (cnt == size)
            break;
    }
    while (!q.empty() && !q1.empty())
    {
        int first = q1.front();
        q1.pop();
        q.push(first);
        int second = q.front();
        q.pop();
        q.push(second);
    }
    if (q.size() & 1)
    {
        int t = q.front();
        q.pop();
        q.push(t);
    }
}
int main()
{

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);

    Interleave(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}