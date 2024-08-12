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
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->next != NULL)
            cout << temp->data << " -> ";
        else
            cout << temp->data << " ";

        temp = temp->next;
    }
}
Node *getMiddle(Node *&head)
{

    // edge cases
    if (head == NULL)
    {
        cout << "LL is empty \n";
        return head;
    }
    // agar LL mein ek hi node phadai haii
    if (head->next = NULL)
    {
        return head;
    }
    // step 1 create two pointers
    Node *slow = head;
    Node *fast = head;
    while (fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }

    return slow;
}
int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
Node *ReverseKNodes(Node *&head, int k)
{
    // edge cases agar LL is empty
    if (head == NULL)
    {
        cout << "LL is empty\n";
        return head;
    }
    // agar single node ho
    // if (head->next = NULL)
    // {
    //     return head;
    // }
    int len = getLength(head);
    // cout << len << endl;
    if (k > len)
    {
        cout << "Enter valid value for k\n ";
        return head;
    }

    // it means  no of nodes node in LL is >=k

    // step 1 Reverse K nodes of the LL
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;
    int count = 0;

    while (count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // step 2 head->next baki recursion ka answer
    if (forward != NULL)
    {
        // we still have nodes left to reverse
        head->next = ReverseKNodes(forward, k);
    }
    // step 3
    return prev;
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(12);
    Node *third = new Node(13);
    Node *fourh = new Node(14);
    Node *fifth = new Node(15);
    // Node *sixth = new Node(16);
    first->next = second;
    second->next = third;
    third->next = fourh;
    fourh->next = fifth;
    // fifth->next = sixth;

    print(first);
    cout << endl;
    // cout<<"Middle Node is "<<getMiddle(first)->data<<endl;

    first = ReverseKNodes(first, 3);
    print(first);

    return 0;
}