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
Node *BST_Create(int arr[],int s,int e){
    if(s>e){
        return NULL;

    }
    int mid=(s+e)/2;
    Node *root=new Node(arr[mid]);
    root->left=BST_Create(arr,s,mid-1);
    root->right=BST_Create(arr,mid+1,e);

    return root;


    
}
void LevelOrderT(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main(){
    int inorder[8]={1,2,3,4,5,6,7,8};
    int s=0,e=7;

    Node *root=BST_Create(inorder,s,e);

    LevelOrderT(root);

    
    return 0;

}