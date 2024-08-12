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
        this->right = NULL;
        this->left = NULL;
    }
};
Node *InsertData(Node *root, int data)
{
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (root->data > data)
    {
        // cout<<"Enter data in the left side of "<<root->data<<" in the bst "<<endl;
        root->left = InsertData(root->left, data);
    }
    else
    {
        // cout<<"Enter data in the right side of "<<root->data<<" in the bst "<<endl;
        root->right = InsertData(root->right, data);
    }
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
void createTreeBST(Node *&root)
{
    cout << "Enter the data ";
    int data;
    cin >> data;

    while (data != -1)
    {

        root = InsertData(root, data);
        cin >> data;
    }
}
void LevelOrderTT(Node *root)
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
Node *ConvertIntoSortedLL(Node *root, Node *&head)
{
    if (root == NULL)
    {
        return NULL;
    }
    // cout<<"Printing the root data "<<root->data<<endl;
    // cin.get();
    ConvertIntoSortedLL(root->right, head);

    cout << root->data << " Vishal 1 " << endl;
    

    root->right = head;
    if (head != NULL)
    {
        head->left = root;
    }
    // update head
    head = root;
    ConvertIntoSortedLL(root->left, head);
    return head;
}
void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->right;
    }
}
int main()
{
    Node *root = NULL;
    createTreeBST(root);
    cout << "printing the level order of the trre\n";
    LevelOrderT(root);

    cout << "\n printing the linkedLIst \n";
    Node *head = NULL;
    head = ConvertIntoSortedLL(root, head);
    cout << "Printing the linkeedddList \n";
    print(head);
    return 0;
}

// 500 250 100 400 300 600 540 700 560
// -1

// 100 250 300 400 500 540 560 600 700 0