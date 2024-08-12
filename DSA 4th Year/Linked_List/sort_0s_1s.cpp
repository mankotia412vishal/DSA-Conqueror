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

void print(Node *&first)
{
    Node *temp = first;
    while (temp != NULL)
    {
        if (temp->next != NULL)
            cout << temp->data << " -> ";
        else
        {
            cout << temp->data << " ";
        }

        temp = temp->next;
    }
}

void SortZeroOnesTwo(Node *&head)
{
    Node *temp = head;
    int zero = 0, one = 0, two = 0;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zero++;
        }
        else if (temp->data == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
        temp = temp->next;
    }
    // cout<<one<<" "<<two<<"zero<<endl;
    // cin.get();
    temp = head;
    while (zero != 0)
    {
        temp->data = 0;

        temp = temp->next;
        zero--;
    }
    while (one != 0)
    {
        temp->data = 1;

        temp = temp->next;
        one--;
    }
    while (two != 0)
    {
        temp->data = 2;

        temp = temp->next;
        two--;
    }
}

Node * Sort2(Node *&head){
     

    //  step 1 create dummy nodes with data (-1)
    Node *zeroHead=new Node(-1);
    Node *zeroTail=zeroHead;

    Node *oneHead=new Node(-1);
    Node *oneTail=oneHead;


    Node *twoHead=new Node(-1);
    Node *twoTail=twoHead;

    // Traverse the oringinal LL
    Node *curr=head;
    while (curr!=NULL)
    {
       if(curr->data==0){
        // take out the zero wali node
        Node *temp=curr;
        curr=curr->next;
        temp->next=NULL;
        // append zero on zerohead bali LL
        zeroTail->next=temp;
        zeroTail=temp;
       }
       else if(curr->data==1){
        Node *temp=curr;
        curr=curr->next;
        temp->next=NULL;
        oneTail->next=temp;
        oneTail=temp;
       }
       else if(curr->data==2){
         Node *temp=curr;
        curr=curr->next;
        temp->next=NULL;
       twoTail->next=temp;
        twoTail=temp;
       }
        
    }
    

    // modify one ,two bali LL
    Node *temp=oneHead;
    oneHead=oneHead->next;
    temp->next=NULL;
    delete temp;

    // modify two bali LL
    temp=twoHead;
    twoHead=twoHead->next;
    temp->next=NULL;
    delete temp;


    // abb yha pr zero one twoi teeno LL ready haii


    // join them connections laga diye

    if(oneHead!=NULL){
        // one wali LL is non empty
        zeroTail->next=oneHead;
        if(twoHead!=NULL){
            oneTail->next=twoHead;
        }
    }

    else{
        // 0 bali LL is empty

        if(twoHead!=NULL){
            zeroTail->next=twoHead;
        }
    }

    // remove the -1
    temp=zeroHead;
    zeroHead=zeroHead->next;
    temp->next=NULL;
    delete temp;
 

    // return head of  the modified LL
    return zeroHead;
}
int main()
{
    Node *first = new Node(2);
    Node *second = new Node(1);
    Node *third = new Node(1);
    Node *fourth = new Node(0);
    Node *fifth = new Node(0);
    Node *sixth = new Node(2);
    Node *seven = new Node(1);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seven;

    print(first);
    cout << endl;
    // SortZeroOnesTwo(first);
    // print(first);
    cout<<endl;
    first=Sort2(first);
    print(first);


    return 0;
}