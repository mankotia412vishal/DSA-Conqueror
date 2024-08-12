#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *&head)
{
    Node *t = head;
    while (t != NULL)
    {
        cout << t->data<<" ";
        t = t->next;
    }
}
int getLength(Node *&head)
{
    int l = 0;
    Node *t = head;
    while (t != NULL)
    {
        l++;
        t = t->next;
    }
    return l;
}
Node *ReverseKgroup(Node *&head, int k)
{
    // edge  cases
    if (head == NULL)
        return head;
    int len = getLength(head);
    if (len < k)
    {
        return head;
    }
    // step 1 reverse K node
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;
    int i = 0;
    while (i < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        i++;
    }
    // if(forward!=NULL){
        head->next=ReverseKgroup(forward, k);
    // }
    return prev;

}
int main()
{
    Node *f = new Node(10);
    Node *s = new Node(11);
    Node *t = new Node(12);
    Node *fourth = new Node(13);
    f->next = s;
    s->next = t;
    t->next = fourth;
    print(f);
    f = ReverseKgroup(f, 5);
    cout<<endl;
    print(f);
    return 0;
}