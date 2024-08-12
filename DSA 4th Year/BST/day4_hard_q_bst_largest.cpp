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


int main(){
    Node *root=NULL;
    root=createBST(root);

    
    return 0;

}