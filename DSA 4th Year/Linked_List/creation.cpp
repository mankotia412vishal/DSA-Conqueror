#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp != NULL)
        {
            cout << temp->data << "-->";
        }

        // cin.get();
        temp = temp->next;
    }
}
int main()
{
    cout << "Printing the LL\n";
    Node *first = new Node(10);

    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifh = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifh;
    fifh->next = NULL;
    print(first);

    return 0;
}