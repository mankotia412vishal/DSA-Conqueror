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
    q.push(NULL);

    while (!q.empty())
    {
        // A
        Node *temp = q.front();
        // B
        q.pop();
        // C
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
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
}

void inOrderTraversal(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // LNR
    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}
void preorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // NLR

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(Node *root)
{
    // base case
    if (root == NULL)
    {
        return;
    }

    // LRN

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int Height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftHeight = Height(root->left);
    int rightHeight = Height(root->right);
    int ans = max(leftHeight, rightHeight) + 1;
    return ans;
}
int main()
{
    Node *root = BuilldTree();
    LevelOrderTraversal(root);
    cout << "\nHeight " << Height(root) << endl;

    return 0;
}