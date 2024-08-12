#include <bits/stdc++.h>
using namespace std;
class DoublyEndedQ
{
public:
    int *arr;
    int size;
    int front;
    int rear;
    DoublyEndedQ(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
        for (int i = 0; i < size; i++)
        {
            arr[i] = 0;
        }
    }
    void PushRear(int data)
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

    void pushFront(int data)
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

        else if (front == -1)
        {
            front = rear = 0;
            arr[front] = data;
        }

        else
        {
            // normal flow
            front--;
            arr[front] = data;
        }
    }

    void popFront()
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

            front++;
        }
    }
    void popRear()
    {

        if (rear == -1)
        {
            cout << "Q is empty,Cannot popppp\n";
        }

        // single element
        else if (front == rear)
        {

            arr[front] = -1;
            front = -1;
            rear = -1;
        }

        // circular queue

        else if (rear == 0)
        {
            rear = size - 1;
        }

        // normal flow
        else
        {

            rear--;
        }
    }
    void print()
    {
        cout << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    DoublyEndedQ q(10);
    q.print();
    q.pushFront(1);
    q.print();
    q.PushRear(2);
    q.print();
    q.PushRear(12);
    q.PushRear(12);
    q.PushRear(12);
    q.PushRear(12);
    q.PushRear(12);
    q.PushRear(12);
    q.PushRear(12);
    q.print();
    

    return 0;
}