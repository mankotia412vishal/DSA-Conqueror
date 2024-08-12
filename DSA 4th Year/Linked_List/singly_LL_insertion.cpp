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
    ~Node()
    {
        cout << "\nNode with value "<<this->data<<" deleted\n";
    }
};
// I want to insert element at the head of the linked list
void insertAtHead(Node *&head, Node *&tail, int data)
{
    // Check for empty linked list
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        head = newNode;
        return;
    }

    // step 1. create a new node
    Node *newNode = new Node(data);
    // step 2. newNode ko point kar diya head pe
    newNode->next = head;
    // step 3. head ko new Node pe point kar diya haii
    // if(head==NULL){
    //     // yeh meri pheli node hogi
    // //   Node * newNode=new Node(data);
    //   tail=newNode;
    // }
    head = newNode;
}
// I want to insert a node right at the end of the linkedlist

void insertAtTail(Node *&head, Node *&tail, int data)
{
    // Check for empty linked list
    if (tail == NULL)
    {
        // yha pe check karuga ki agar meri tail null se initialise haii
        // to sabse phele new Node create karenge
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // step1 create a Node
    Node *newNode = new Node(data);

    // step2 tail->next =newNode pe
    tail->next = newNode;

    //  step 3 update karo tail ko
    tail = newNode;
}

int findLength(Node *&head)
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
void insertAtPostion(Node *&head, Node *&tail, int data, int position)
{
    // check if LL is empty
    if (head == NULL)
    {
        // create a new Node
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    // handle edge cases
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }
    int len = findLength(head);
    // if(position>=len){

    // }
    if (position >= len)
    {
        insertAtTail(head, tail, data);
        return;
    }
    // step 1 find prev and curr pointer
    int i = 1;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }

    Node *curr = prev->next;

    // step 2 create a new node
    Node *newNode = new Node(data);
    // step 3 phele newNode ke next ko curr pe laga do
    newNode->next = curr;

    // step 4 jo be previous ka next tha usko meinn newNode pe laga dunga
    prev->next = newNode;
}
void print(Node *&head)
{
    // create a temp pointer on head
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "Cannot delete Empty LL\n";
        return;
    }
    // deleting first node
    if (position == 1)
    {
        // step 1 craete a pointer name temp

        Node *temp = head;
        // step 2 head ko update kar do
        head = head->next;
        // step 3 point  temp to null ;
        temp->next = NULL;
        // step 4 delete temp
        delete temp;
        return;
    }
 
    // deleting last node
    
    int len = findLength(head);
       if(position>len){
        cout<<"\nCannot delete the node invalid location\n";
        return;
    }
    if (position == len)
    {
        // step 1 find prev
        int i=1;
        Node *prev=head;
        while(i<position-1){
            prev=prev->next;
            i++;
        }
        // step 2 prev->next=NULL
        prev->next = NULL;
        // step 3 temp create karo aur usko tail pe point karo  ;
        Node *temp = tail;

        // step 4 tail ko update karo
        tail=prev;
        // step 5 delete temp
        delete temp;
        return;
    }

    // delete middle node

    // step 1 find prev and curr
    int i=1;
    Node *prev=head;
    while(i<position-1){
        prev=prev->next;
        i++;

    }
    Node *curr=prev->next;

    // step 2 prev ->next ko current ke next ke sath mark kar do
    prev->next=curr->next;
    // step3  curr ke next ko null kar do
    curr->next=NULL;
    // step 3 delete curr
    delete curr;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 22);
    insertAtHead(head, tail, 23);
    insertAtHead(head, tail, 24);
    insertAtTail(head, tail, 25);

    print(head);
    // cout << "\nhead " << head->data << " tail : " << tail->data << endl;
    // insertAtPostion(head, tail, 101, 11);

    // cout << "\nPrinting data again after inserting at position 2 \n";
    // cout << "\nhead " << head->data << " tail : " << tail->data << endl;
    // print(head);
    deleteNode(5,head,tail);
    print(head);
    return 0;
}