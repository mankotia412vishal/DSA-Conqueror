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
// class Node1
// {
// public:
//     int data;
//     Node1 *next;
//     Node1(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//     }
// };
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
Node * reverse(Node *head){
    Node *prev=NULL;
    Node *curr=head;
    Node *forward=curr->next;
    while (curr!=NULL)
    {
         forward=curr->next;
         curr->next=prev;
         prev=curr;
         curr=forward;
    }
    return prev;

}
bool checkPallindrome(Node *&head)

{
    if (head == NULL)
    {
        cout << "LL list is empty\n";
        return true;
    }
    // agar single node haii LL mein
    if (head->next == NULL)
        return true;
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

    // Step B Reverse Sllow ke agge ki LL 
    Node *reversekahead=reverse(slow->next);
    slow->next=reversekahead;

    // step 3
    Node *temp1=head;
    Node *temp2=reversekahead;
    while (temp2!=NULL)
    {
        if(temp1->data!=temp2->data){
            return false;
        }
        else{
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return true;

}
int main()
{
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(1);
    Node *fifth = new Node(2);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    print(first);
    cout << "\nVishal\n";

    bool ispallindrome = checkPallindrome(first);
    if (ispallindrome)
    {
        cout << "LL is Valid Pallindrome\n";
    }
    else
    {
        cout << "LL is not valid Pallindrome\n";
    }

    return 0;
}