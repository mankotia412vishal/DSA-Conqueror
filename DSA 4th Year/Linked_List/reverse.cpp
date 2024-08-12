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
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void insertAtHead(Node *&head, Node *&tail, int data)
{

    // edge cases check if linked list is empty
    if (head == NULL)
    {
        // step 1 create a new Node with
        Node *newNode = new Node(data);
        // step 2 update head and tail pointer to newNode
        head = newNode;
        tail = newNode;
        return;
    }
    // if linked list is not empty
    // step 1 create a new Node with data
    Node *newNode = new Node(data);
    // step 2 update head to newNode
    newNode->next = head;
    head = newNode;
}
void insertAtTail(Node *&head, Node *&tail, int data)
{
    // check if the linked list is empty
    // edge cases check if linked list is empty
    if (head == NULL)
    {
        // step 1 create a new Node with
        Node *newNode = new Node(data);
        // step 2 update head and tail pointer to newNode
        head = newNode;
        tail = newNode;

        return;
    }

    // if ll is not empty
    // step 1 create a new Node with data
    Node *newNode = new Node(data);
    tail->next = newNode;
    tail = newNode;
}
int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtMiddle(Node *&head, Node *&tail, int data, int position)
{
    // if My LL is empty
    if (head == NULL)
    {
        // step 1 create a newNode
        Node *newNode = new Node(data);
        // step 2 head,tail ko newNode pe
        head = newNode;
        tail = newNode;
        return;
    }
    // if we have to insert at
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    // if we have to insert at last then find the length of LL
    int len = getLength(head);
    // find the prev and curr pointers
    // insert at tail
    if (position == len)
    {
        insertAtTail(head, tail, data);
        return;
    }
    // if we have insert other than head or tail(middle)
    // find the prev and curr pointers
    int i = 1;
    Node *left = head;
    while (i < position - 1)
    {
        i++;
        left = left->next;
    }
    Node *right = left->next;

    // step 1 create a new Node with data
    Node *newNode = new Node(data);
    newNode->next = right;
    left->next = newNode;
}
void deleteNode(Node *&head, Node *&tail, int position)
{
    // if LL is empty
    if (head == NULL)
    {
        cout << "Cannot delete empty LL\n";
        return;
    }
    // agar head se delet karna haii
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }
    // agar last tail se delete karna ho
    // find prev and tail
    int len = getLength(head);
    if (position > len)
    {
        cout << "Enter a valid position of the LL to delete\n";
        return;
    }
    if (position == len)
    {
        Node *temp = tail;
        Node *prev = head;
        int i = 1;
        while (i < position - 1)
        {
            i++;
            prev = prev->next;
        }
        tail = prev;
        tail->next = NULL;
        delete temp;

        return;
    }

    // delete a node form the middle of the LL
    int i = 1;
    // find the prev and curr pointer
    Node *prev = head;

    while (i < position - 1)
    {
        i++;
        prev = prev->next;
    }
    Node *curr = prev->next;
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}
// Recursively reversing the LL
Node *Reverse(Node *&prev, Node *&Curr)
{

    // base case
    if (Curr == NULL)
    {
        // print(Curr);
        return prev;
    }

    Node *forward = Curr->next;
    Curr->next = prev;
    // cout<<endl;
    // print(Curr);
    // cin.get();

    return Reverse(Curr, forward);
}

// Iteratively reversing the LL
Node *IterReverse(Node *&prev, Node *&curr)
{
    int ans=0;
    while (curr != NULL)
    {
        Node *forward = curr->next;
        curr->next = prev;
        // ans+=curr->data;
        prev = curr;
        curr = forward;
    }
    // cout<<"Sum of the nodes is "<<ans<<endl;
    return prev;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 4);
    insertAtHead(head, tail, 3);
    insertAtHead(head, tail, 2);
    insertAtTail(head, tail, 5);
    insertAtTail(head, tail, 6);
    insertAtTail(head, tail, 7);
    insertAtMiddle(head, tail, 101, 1);
    deleteNode(head, tail, 4);

    print(head);
    Node *prev1 = NULL;
    Node *Curr1 = head;
    head = Reverse(prev1, Curr1);
    cout << endl;
    print(head);

    // Reversing the LL iteratively
    Node *left = NULL;
    Node *right = head;
    head = IterReverse(left, right);
    cout << endl;
    print(head);

    return 0;
}