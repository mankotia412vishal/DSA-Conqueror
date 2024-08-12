#include <bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    node(){
        this->data=0;
        this->next=NULL;
    }
    node(int data){
        this->data=0;
        this->next=NULL;
    }
    void insertLL(node *&head,node *&tail,int data){
        if(head==NULL){
            node *newNode=new node(data);
            head=newNode;
            tail=head;       
            return;
        }
        

    }
    void printLL(node *h){
        node *t=h;
        while(t->next!=nullptr){
            cout<<t->data<<"->";
            t=t->next;
        }
    }
};
int main(){
    node *head=NULL;
    node *tail=NULL;
    node *obj=new node();
    obj->insertLL(head,tail,10);
    // obj->printLL(head);


    
    return 0;

}