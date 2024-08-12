#include <bits/stdc++.h>
using namespace std;
class CircularQueue
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    CircularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        this->front = -1;
        this->rear = -1;
    }

    void push(int data)
    {
        // queue if full
        if (front == 0 && rear == size - 1)
        {

            cout << "Q is full Cnnot insert" << endl;
        }
        else if (rear + 1 < size && rear + 1 == front)
        {
            cout << "Q is full Cnnot insert" << endl;
        }
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            // normal flow
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        // empty check
        if (front == -1)
        {
            cout << "Q is empty,Cannot popppp\n";
        }

        // single element
        else if (front == rear)
        {
            cout << arr[front] << " ";
            arr[front] = -1;
            front = -1;
            rear = -1;
        }

        // circular queue

        else if (front == size - 1)
        {
            front = 0;
        }

        // normal flow
        else
        {
            cout << arr[front] << " ";

            front++;
        }
    }
    bool Empty()
    {
        if (front == -1)
        {
            // cout << "vishal";
            return true;
        }
        return false;
    }
};
int main()
{
    CircularQueue q(5);

    q.push(11);
    q.push(11);
    q.push(11);
    q.push(11);
    q.push(11);

    // q.pop();
    while (!q.Empty())
    {
        q.pop();
    }

    return 0;
}