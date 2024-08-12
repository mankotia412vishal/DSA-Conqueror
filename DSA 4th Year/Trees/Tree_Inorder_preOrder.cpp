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
int findPosition(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
// Build Tree from inorder and preorder Traversal
Node *BuildTreeFromInorderPreOrder(int inorder[], int preorder[], int size, int &preIndex, int orderStart, int inorderEnd)
{
    // BC
    if (preIndex >= size || orderStart > inorderEnd)
    {
        return NULL;
    }
    // Step A
    int element = preorder[preIndex++];
    Node *root = new Node(element);
    int pos = findPosition(inorder, size, element);

    //  step B root->left

    root->left = BuildTreeFromInorderPreOrder(inorder, preorder, size, preIndex, orderStart, pos - 1);

    // / Step C root->right solve
    root->right = BuildTreeFromInorderPreOrder(inorder, preorder, size, preIndex, pos + 1, inorderEnd);

    return root;
}
Node *BuildTreeFromInorderPostOrder(int in[], int post[], int size, int &postIndex, int inStart, int inEnd)
{
    // BC
    if (postIndex < 0 || inStart > inEnd)
    {
        return NULL;
    }
    // A
    int element = post[postIndex--];
    Node *root = new Node(element);
    int pos = findPosition(in, size, element);

    root->right = BuildTreeFromInorderPostOrder(in, post, size, postIndex, pos + 1, inEnd);
    root->left = BuildTreeFromInorderPostOrder(in, post, size, postIndex, inStart, pos - 1);

    return root;
}

void LevelOrder(Node *root)
{
    deque<Node *> dq;
    dq.push_back(root);
    dq.push_back(NULL);

    while (!dq.empty())
    {
        // step A fetch the front element in the queue

        Node *temp = dq.front();
        //   step B
        // pop the element from the queue
        dq.pop_front();
        if (temp == NULL)
        {
            cout << endl;
            if (!dq.empty())
            {
                dq.push_back(NULL);
            }
        }
        else
        {

            cout << temp->data << " ";
            // D
            if (temp->left != NULL)
            {
                dq.push_back(temp->left);
            }
            if (temp->right != NULL)
            {
                dq.push_back(temp->right);
            }
        }
    }
}

int main()
{
    // int inorder[] = {40, 20, 50, 10, 60, 30, 70};
    int in[] = {40, 20, 10, 50, 30, 60};
    int pos[] = {40, 20, 50, 60, 30, 10};
    // int preOrder[] = {10, 20, 40, 50, 30, 60, 70};
    // int size = 7;
    int size = 6;
    int preIndex = 0;
    int postIndex = 5;
    int orderStart = 0;
    int inOrderEnd = size - 1;
    Node *root = BuildTreeFromInorderPostOrder(in, pos, size, postIndex, orderStart, inOrderEnd);

    // Node *root = BuildTreeFromInorderPreOrder(inorder, preOrder, size, preIndex, orderStart, inOrderEnd);
    cout << "printing the level order traversal of the tree\n";
    LevelOrder(root);

    return 0;
}