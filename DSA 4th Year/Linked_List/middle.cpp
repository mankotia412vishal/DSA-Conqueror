#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void print(Node *&head){
    Node *temp=head;
    while (temp!=NULL)
    {
        if(temp->next!=NULL)
         cout<<temp->data<<" -> ";
         else cout<<temp->data<<" ";

        temp= temp->next;
    }
    
}
Node * getMiddle(Node *&head){

    // edge cases
    if(head==NULL){
        cout<<"LL is empty \n";
        return head;
    }
    // agar LL mein ek hi node phadai haii
    if(head->next=NULL){
        return head;
    }
    // step 1 create two pointers
    Node *slow=head;
    Node *fast=head;
    while ( fast!=NULL)
    {
      
         fast=fast->next;
         if(fast!=NULL){
            fast=fast->next;
             slow=slow->next;
                
         }

        
    }
  
    return slow;
}
int main(){
    Node *first=new Node(10);
    Node *second=new Node(12);
    Node *third=new Node(13);
    Node *fourh=new Node(14);
    Node *fifth=new Node(15);
    first->next=second;
    second->next=third;
    third->next=fourh;
    fourh->next=fifth;
    print(first);
    cout<<endl;
    cout<<"Middle Node is "<<getMiddle(first)->data<<endl;;



    
    return 0;

}