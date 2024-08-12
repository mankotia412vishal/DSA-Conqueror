#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *BuilldTree()
{
    cout << "Enter the data\n";
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }

    // steps A
    Node *root = new Node(data);
    // step B
    cout << "Enter the data " << data << " for the left Node \n";
    root->left = BuilldTree();
    // step C
    cout << "Enter the data " << data << " for the right Node \n";

    root->right = BuilldTree();

    return root;
}

void LevelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // A
        Node *temp = q.front();
        // B
        q.pop();
        // C
        cout << temp->data << " ";
        // D
        if (temp->left != NULL)
        {
            q.push(temp->left);
        }
        if (temp->right != NULL)
        {
            q.push(temp->right);
        }
    }
}
int main()
{
    Node *root = BuilldTree();
    LevelOrderTraversal(root);

    return 0;
}