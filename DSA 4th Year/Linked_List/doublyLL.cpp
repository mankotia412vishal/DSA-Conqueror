#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node()
    {
        this->data = 0;
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(Node *&head)
{
    // create a new Node
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int getLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    ;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAtHead(Node *&head, Node *&tail, int data)
{
    // check is LL is empty
    if (head == NULL)
    {
        // step 1.  create a newNode
        Node *newNode = new Node(data);

        tail = newNode;
        // tail->prev=NULL;

        head = newNode;
        // head->prev=NULL;
        return;
    }
    // step1 create a new Node
    Node *newNode = new Node(data);
    // step 2 point newNode->next ko head pe
    newNode->next = head;
    // step 3 prev ko update karo
    head->prev = newNode;
    // step 4
    head = newNode;
}
void insertAtTail(Node *&head, Node *&tail, int data)
{
    // check is LL is empty
    if (tail == NULL)
    {
        // step 1.  create a newNode
        Node *newNode = new Node(data);

        tail = newNode;
        // tail->prev=NULL;

        head = newNode;
        // head->prev=NULL;
        return;
    }
    // step 1 create a new Node
    Node *newNode = new Node(data);
    // step 2 update tail pointer to newnode

    // step 3 update prev of newNode to tail
    newNode->prev = tail;
    tail->next = newNode;
    // step 4 update tail
    tail = newNode;
}
void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    // check if LL is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    // edge cases insert at head
    if (position <= 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    // insert at last
    int len = getLength(head);
    if (position > len)
    {
        insertAtTail(head, tail, data);
        return;
    }
    // step 1 craete a new Node with data
    Node *newNode = new Node(data);
    // step 2 find prevNode and CurrNode
    Node *prevNode = head;
    int i = 1;
    while (i < position - 1)
    {
        i++;
        prevNode = prevNode->next;
    }

    Node *currNode = prevNode->next;

    // step 3 update newNode ke next ko
    newNode->next = currNode;
    // step 4

    currNode->prev = newNode;
    // step 5
    prevNode->next = newNode;
    // step 6
    newNode->prev = currNode;
}
void deleteFomPosition(Node *&head, Node *&tail, int position)
{
    // check if LL is empty
    if (head == NULL)
    {
        cout << "Cannot delete bhai\n";
        return;
    }
    // agar single node haii
    if(head->next==NULL){
        Node *temp=head;
        head=NULL;
        tail=NULL;
        delete temp;
        return;
    }
    
    // delete form head
    if (position == 1)
    {
        // delete form head
        // step 1 create a temp pointer
        Node *temp = head;
        // step 2 update head ko head ke next pe
        head=head->next;
        // step 3 head ke prev ko update karo null pe lagao
        head->prev=NULL;
        // step 4  temp ko null pe laga do 
        temp->next=NULL;
        // step 5 delete temp
        delete temp;
        return;
    }
    // delete from any position
    int len=getLength(head);
    cout<<"len "<<len<<endl;
    if(position>len){
        cout<<"Cannot delete a Node from the LL\n ";
        return;
    }
    if(position==len){
        // last Node delete karni haii 
        // step 1 find prev and curr pointer 
        Node *temp=tail;
        // step 2 update tail
        tail=tail->prev;
        // step 3 make temp ->prev to null
        temp->prev=NULL;
        // step 4 make teil->next=NULL;
        tail->next=NULL;
        delete temp;
return;
    }

    // delete from from middle of LL
    // step 1 find positions left,right,curr;
    int i=1;
    Node *left=head;
    while(i<position-1){
        i++;
        left=left->next;

    }
    Node * curr=left->next;
    Node *right=curr->next;
    // step 2 left  ke next ko right pe lagao aur righ ke prev ko left pe lagao 
    left->next=right;
    right->prev=left;
    // step 3 curr ko update ko NULL ke sath
    curr->next=NULL;
    curr->prev=NULL;
    // step 4 delete curr
    delete curr;
    return;


}
int main()
{
    // Node *first = new Node(10);
    // Node *second = new Node(20);
    // Node *third = new Node(30);

    // first->next = second;
    // second->prev = first;

    // second->next = third;
    // third->prev = second;

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 101);
    insertAtHead(head, tail, 102);
    insertAtHead(head, tail, 103);
    insertAtTail(head, tail, 104);
    insertAtPosition(head, tail, 10, 1);
    insertAtPosition(head, tail, 100, 16);
    insertAtPosition(head, tail, 10000, 0);
    insertAtPosition(head, tail, 1, 7);

    print(head);
    cout<<endl;
    // deleteFomPosition(head,tail,1);
    // deleteFomPosition(head,tail,1);
    deleteFomPosition(head,tail,7);
    print(head);

    return 0;
}