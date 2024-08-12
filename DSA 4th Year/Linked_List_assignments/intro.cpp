#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next != NULL)
        {
            cout << "--> ";
        }
        temp = temp->next;
    }
}
void insertAtHead(Node *&head,int data){
    Node *newNode=new Node(data);
    newNode->next=head;
    head=newNode;
}
int main()
{
    Node *first = new Node(11);
    Node *second = new Node(12);
    Node *third = new Node(10);

    first->next = second;
    second->next = NULL;
    insertAtHead(first,10);
    print(first);

    return 0;
}