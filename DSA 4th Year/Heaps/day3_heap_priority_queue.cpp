#include <bits/stdc++.h>
using namespace std;
int main()
{
    // max heap
    // priority_queue<int> pq;
    // pq.push(3);
    // pq.push(6);
    // pq.push(9);
    // pq.push(4);
    // pq.push(8);

    // cout << "top element " << pq.top() << endl;

    // pq.pop();
    // cout << "top element " << pq.top() << endl;
    // pq.pop();
    // cout << "top element " << pq.top() << endl;
    // pq.pop();
    // cout << "top element " << pq.top() << endl;
    // pq.pop();
    // cout << "top element " << pq.top() << endl;
    // pq.pop();
    // cout << "size is " << pq.size() << endl;
    // cout << "Max heap is empty  " << pq.empty() << endl;

    cout << "Min Heap Creation  ..........\n\n";
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(3);
    pq.push(6);
    pq.push(9);
    pq.push(4);
    pq.push(8);

    cout << "Top element " << pq.top() << endl;

    pq.pop();
    cout << "size is " << pq.size() << endl;
    cout << "Top element " << pq.top() << endl;

    pq.pop();
    cout << "size is " << pq.size() << endl;
    cout << "Min- heap is empty  " << pq.empty() << endl;
    return 0;
}