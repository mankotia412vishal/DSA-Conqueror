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
Node *BT()
{
    //
    cout << "Enter the data ";
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);
    cout << "Enter the data for the left Node with data " << data << endl;
    root->left = BT();
    cout << "Enter the data for the right Node with data " << data << endl;
    root->right = BT();

    return root;
}
bool kthAnscestor(Node *root, int &k, int p)
{
    // Base case
    if (root == NULL)
    {
        return false;
    }
    if (root->data == p)
    {
        return true;
    }
    // e case solve
    bool  la = kthAnscestor(root->left, k, p);
    bool ra = kthAnscestor(root->right, k, p);
    // wapas aarahe honge
    // check left ya right me answer mila yah nhi
    if (la || ra)
    {
        k--;
    }
    if (k == 0)
    {
        cout << "Answer is " << root->data << endl;
        k = -1;
    }
    return la || ra;
}
int main()
{
    Node *root = NULL;
    root = BT();
    int k = 1;
    int p = 4;
    bool ans = kthAnscestor(root, k, p);
    cout << endl
         << ans << endl;

    return 0;
}