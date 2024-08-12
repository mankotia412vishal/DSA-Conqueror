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
void print(Node *&head)
{
    Node *t = head;
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
}
int getLength(Node *&head)
{
    int l = 0;
    Node *t = head;
    while (t != NULL)
    {
        l++;
        t = t->next;
    }
    return l;
}
bool checkForLoop(Node *&head)
{
    if(head==NULL){
        cout<<"LL is empty\n";
        return false;

    }
    Node *slow=head;
    Node *fast=head;
    while (fast!=NULL)
    {
         fast=fast->next;
         if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
         }
         if(slow==fast){
            // loop present
            return true;
         } 
    }
    // fast nUll haii
    return false;
}

Node *   startingPoint(Node *&head)
{
    if(head==NULL){
        cout<<"LL is empty\n";
        return  NULL;

    }
    Node *slow=head;
    Node *fast=head;
    while (fast!=NULL)
    {
         fast=fast->next;
         if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
         }
         if(slow==fast){
            // loop present
           slow=head;
           break;
         } 
    }
    // fast nUll haii
    while (slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}
Node *   RemoveLoop(Node *&head)
{
    if(head==NULL){
        cout<<"LL is empty\n";
        return  NULL;

    }
    Node *slow=head;
    Node *fast=head;
    while (fast!=NULL)
    {
         fast=fast->next;
         if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
         }
         if(slow==fast){
            // loop present
           slow=head;
           break;
         } 
    }
    // fast nUll haii
    Node *prev=fast;
    while (slow!=fast)
    {
        prev=fast;
        slow=slow->next;
        fast=fast->next;
    }
    prev->next=NULL;
    return slow;
}
int main()
{
    Node *f = new Node(10);
    Node *s = new Node(11);
    Node *t = new Node(12);
    Node *fourth = new Node(13);
    Node *fifth = new Node(14);
    Node *sixth = new Node(15);
    Node *seven = new Node(16);
    Node *eight = new Node(17);
    Node *night = new Node(18);
    f->next = s;
    s->next = t;
    t->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seven;
    seven->next = eight;
    eight->next = night;
    night->next = fifth;
    // print(f);
    cout<<"Loop present or not "<<checkForLoop(f);
    cout<<"\nStarting point of the loop "<<startingPoint(f)->data;
    RemoveLoop(f);
    cout<<endl;
    print(f);


    return 0;
}