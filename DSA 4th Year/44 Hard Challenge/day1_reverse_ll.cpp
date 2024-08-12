#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void printLL(Node *head){
    Node *temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
void reverse(Node *&prev,Node *&curr){
     
   if(curr==NULL) return;

   Node *forward=curr->next;
   curr->next=prev;
   prev=curr;
   curr=forward;
   reverse(prev,curr);
}
int main(){
    Node *first=new Node(11);
    Node *second=new Node(12);
    Node *third=new Node(13);
    first->next=second;
    second->next=third;
    
    cout<<"printing the LL \n";
    printLL(first);
    cout<<"\nprinting the revrrse of the LL ";
    Node *prev=NULL;
    Node *curr=first;
    reverse(prev,curr);
    printLL(prev);
    

    
    return 0;

}