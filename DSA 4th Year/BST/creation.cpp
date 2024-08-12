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
Node *FindNode(Node *root, int target)
{
    if (root == NULL)
        return NULL;

    if (root->data == target)
    {
        return root;
    }
    if (root->data < target)
    {
        return FindNode(root->right, target);
    }
    else
    {

        return FindNode(root->left, target);
    }
}
Node *InsertData(Node *root, int data)
{

    if (root == NULL)
    {
        // paheli nde haii
        root = new Node(data);
        return root;
    }
    //   cout<<root->data<<" Vishal \n";
    if (root->data > data)
    {
        // insert in the left
        root->left = InsertData(root->left, data);
    }
    else
    {
        root->right = InsertData(root->right, data);
    }
    return root;
}
void CreateTree(Node *&root)
{
    int data;
    cout << "Enter the data for the node \n";
    cin >> data;
    while (data != -1)
    {
        root = InsertData(root, data);
        cin >> data;
    }

    // return root;
}
void preorder(Node *root)
{
    // NLR
    if (root == NULL)
        return;

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void Inorder(Node *root)
{
    // LNR
    if (root == NULL)
        return;

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
void Postorder(Node *root)
{
    // LRN
    if (root == NULL)
        return;

    Postorder(root->left);

    Postorder(root->right);
    cout << root->data << " ";
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
int minimumValue(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
        return -1;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp->data;
}
int maximumValue(Node *root)
{
    Node *temp = root;
    if (temp == NULL)
        return NULL;

    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp->data;
}
Node *deleteNodeBST(Node *root, int target)
{
    // base case
    if (root == NULL)
    {
        return NULL;
    }
    // step 1 find karo target koo tree mein
    Node *temp = FindNode(root, target);
    // step 2 I want to delete temp 4 cases bante haii jo
    if (temp->left == NULL && temp->right == NULL)
    {
        // leaf node haii
        delete temp;
        return NULL;
    }
    else if (temp->left == NULL && temp->right != NULL)
    {

        Node *child = temp->right;

        delete temp;
        return child;
    }
    else if (temp->left != NULL && temp->right == NULL)
    {

        Node *child = temp->left;

        delete temp;
        return child;
    }
    else
    {
        // dno child exits karte haii
        // inorder precessor of the left subtree -> left subtree mein maximum  value

        int inorderPre = maximumValue(temp->left);
        temp->data = inorderPre;
        temp->left = deleteNodeBST(temp->left, inorderPre);
        return root;
    }
}
int main()
{

    Node *root = NULL;

    CreateTree(root);
    cout << "\nPrinting The level order Traversal \n";

    LevelOrderT(root);

    cout << "\n printing the Inorder \n";
    Inorder(root);
    cout << "\n printing the Preorder \n";
    preorder(root);
    cout << "\n printing the PopstOrder \n";
    Postorder(root);

    bool ans = FindNode(root, 15);
    cout << "\nPresent or not " << ans << endl;
    int sol = minimumValue(root);
    cout << "\nMinimum Vlaue in the array is " << sol << endl;
    int sol1 = maximumValue(root);
    cout << "\nMinimum Vlaue in the array is " << sol1 << endl;
    // 10 20 5 11 17 2 4 8 6 25 15 -1
    return 0;
}