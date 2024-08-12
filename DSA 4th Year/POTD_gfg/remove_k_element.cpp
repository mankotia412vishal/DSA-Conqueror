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
void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node * removeKthElement(Node *head,int k)
{
    Node *prev,*curr=head;
    int count=1;
    while(curr!=NULL)
    {
       
        if(count==k)
        {
            prev->next=curr->next;
            count=0;
        }
        count++;
        prev=curr;
        curr=curr->next;

    }
    return head;

}
int main()
{
    Node *first=new Node(1);
    Node *second=new Node(2);
    Node *third=new Node(3);
    Node *fourth=new Node(4);
    Node *fifth=new Node(5);
    Node *sixth=new Node(6);
    Node *seventh=new Node(7);
    Node *eighth=new Node(8);
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    fifth->next=sixth;
    sixth->next=seventh;
    seventh->next=eighth;

    cout<<"Printing the LL \n";
    printLL(first);
    cout<<endl;
    int k=2;
   Node *head= removeKthElement(first,k);
    cout<<"Printing the LL \n";
    printLL(head);

    return 0;
}