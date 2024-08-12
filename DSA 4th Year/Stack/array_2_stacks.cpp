#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    // data members
    int size;
    int *arr;
    int top1;
    int top2;

    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;

        for (int i = 0; i < size; i++)
        {
            arr[i] = 0;
        }
    }

    // functions

    void push1(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "Space Not available Overflow\n";
        }
        else
        {
            top1++;
            arr[top1] = data;
        }
    }
    void push2(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "Space Not available ,Overflow\n";
        }
        else
        {
            top2--;
            arr[top2] = data;
        }
    }
    void pop1()
    {
        if (top1 == -1)
        {
            cout << "Underflow in stack 1\n";
        }
        else
        {
            arr[top1] = 0;
            top1--;
        }
    }
    void pop2()
    {
        if (top2 == size)
        {
            cout << "Underflow in stack 2\n";
        }
        else
        {
            arr[top2] = 0;
            top2++;
        }
    }

    void print()
    {
        cout << "\n printing the stack1 top1 " << top1 << endl;
        ;
        cout << "\n printing the stack1 top2 " << top2 << endl;
        ;

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack s(9);

    s.push1(10);
    s.print();
    s.push1(20);
    s.print();
    s.push1(30);
    s.print();
    s.push1(40);
    s.print();
    s.push1(50);
    s.print();
    s.push2(60);
    s.print();
    s.push2(70);
    s.print();
    s.pop1();
    s.pop1();
    s.pop1();
    s.pop1();
    s.print();

    return 0;
}