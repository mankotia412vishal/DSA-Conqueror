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
        left = NULL;
        right = NULL;
    }
};
Node *BT()
{
    int data;
    cout << "Enter the data \n";
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    Node *root = new Node(data);

    cout << "Enter the data for the left Node for data " << data << endl;
    root->left = BT();
    cout << "Enter the data for the right Node for data " << data << endl;
    root->right = BT();

    return root;
}

void LevelOrder(Node *root)
{
    cout << "\nPrinting the level order \n ";
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->data << endl;
        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
           else{
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

void printTopView(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // create a map for storing Horizontal distances ->topNode data
    map<int, int> topNode;

    // Level Order
    // we will store a pair consisting of node and Horizontal Distance
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();
        Node *frontNode = temp.first;
        int hd = temp.second;

        if (topNode.find(hd) == topNode.end())
        {
            // create a entry in map
            topNode[hd] = frontNode->data;
        }
        if (frontNode->left)
        {
            q.push(make_pair(frontNode->left, hd - 1));
        }
        if (frontNode->right)
        {
            q.push(make_pair(frontNode->right, hd + 1));
        }
    }
    cout << "printing the answer \n";
    for (auto i : topNode)
    {
        cout << i.first << "  -> " << i.second << endl;
    }
}
void BottomView(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    // create a map for storing Horizontal distances ->topNode data
    map<int, int> topNode;

    // Level Order
    // we will store a pair consisting of node and Horizontal Distance
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<Node *, int> temp = q.front();
        q.pop();
        Node *frontNode = temp.first;
        int hd = temp.second;

        // create a entry in map
        topNode[hd] = frontNode->data;

        if (frontNode->left)
        {
            q.push(make_pair(frontNode->left, hd - 1));
        }
        if (frontNode->right)
        {
            q.push(make_pair(frontNode->right, hd + 1));
        }
    }
    cout << "printing the answer \n";
    for (auto i : topNode)
    {
        cout << i.first << "  -> " << i.second << endl;
    }
}

void leftView(Node *root,vector<int>&ans,int lvl){
    // BC

    if(root==NULL){
        return;
    }

    if(lvl==ans.size()){
        ans.push_back(root->data);

    }
    // left
    leftView(root->left,ans,lvl+1);
    leftView(root->right,ans,lvl+1);
}
void righttView(Node *root,vector<int>&ans,int lvl){
    // BC

    if(root==NULL){
        return;
    }

    if(lvl==ans.size()){
        ans.push_back(root->data);

    }
    // left
    
    righttView(root->right,ans,lvl+1);
    righttView(root->left,ans,lvl+1);
}

void BoundaryTraversal(Node *root){
    if(root==NULL){
        return;
    }

    // step 1
    printLeftNodes(root->)
}
int main()
{
    Node *root = BT();
    // LevelOrder(root);
    printTopView(root);
    BottomView(root);
    vector<int> ans;
    leftView(root,ans,0);
    for(auto i:ans){
        cout<<i<<" ";
    }
     cout<<endl;

    return 0;
}