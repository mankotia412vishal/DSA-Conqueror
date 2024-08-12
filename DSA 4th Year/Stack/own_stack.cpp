#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
// properties
    int *arr;
    int top;
    int size;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }

    // functions

    void push(int data)
    {

        if (size - top > 1)
        {
            // space available
            // insert
            top++;
            arr[top] = data;
        }
        else
        {
            // space not available
            cout << "Space not available \n";
        }
    }
    void pop()
    {

        if (top == -1)
        {
            // stack khali haii
            cout << "Stack underflow , Cannot delete element\n";
        }

        else
        {
            // stack is not empty

            top--;
        }
    }

    int getTop()
    {

        if (top == -1)
        {
            // stack empty
            cout << "There is not element in the stack\n";
        }
         
            return arr[top];
        
    }

    // retunr the no of valid elements present in the stack
    int getSize()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Stack s(5);
    // insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    while (!s.isEmpty())
    {
       cout<<s.getTop()<<endl;
       s.pop();
    }
    cout<<"Size of stack "<<s.getSize()<<endl;
 s.pop();
    return 0;
}