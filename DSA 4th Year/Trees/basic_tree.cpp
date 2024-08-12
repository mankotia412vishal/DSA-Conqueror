#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node * BuildTree(){
        int data;
        cout<<"Enter the data "<<endl;
        cin>>data;

        if(data==-1){
            return NULL;
        }
        //  step A, B,C
        Node *root=new Node(data);
        cout<<"Enter data for left of "<<data<<" node "<<endl;

        root->left=BuildTree();
         cout<<"Enter data for right of "<<data<<" node "<<endl;

        root->right=BuildTree();

        return root;
        // my name is Vishal Singh 
        



}
int main(){
    Node *root=NULL;
    root=BuildTree();

    
    return 0;

}