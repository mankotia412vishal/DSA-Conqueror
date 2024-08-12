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

void print(Node *&first)
{
    Node *temp = first;
    while (temp != NULL)
    {
        if (temp->next != NULL)
            cout << temp->data << " -> ";
        else
        {
            cout << temp->data << " ";
        }

        temp = temp->next;
    }
}

Node *reverse(Node *&prev, Node *&curr)
{

    // base case
    if (curr == NULL)
    {
        return prev;
    }

    // 1 case solve
    Node *forward = curr->next;
    curr->next = prev;

    // RR
    return reverse(curr, forward);
}
Node *solve(Node *head1, Node *&head2)
{
    // step 1 reverse both the LL
    Node *prev = NULL;
    Node *curr = head1;

    head1 = reverse(prev, curr);
    cout << endl;
    print(head1);

    prev = NULL;
    curr = head2;

    head2 = reverse(prev, curr);
    cout << endl;
    print(head2);

    // step 2 add both LL

    Node *ansHead = NULL;
    Node *anstail = ansHead;
    int carry = 0;

    while (head1 != NULL && head2 != NULL)
    {
        // calculate sum
        int sum = carry + head1->data + head2->data;

        int digit = sum % 10;

        int carry = sum / 10; // edge case
        // create a newNode
        Node *newNode = new Node(digit);
        if (ansHead == NULL)
        {
            // first Node insert kar rahe haii
            ansHead = newNode;
            anstail = newNode;
        }
        else
        {

            anstail->next = newNode;
            anstail = newNode;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    while (head1 != NULL)
    {
        int sum = carry + head1->data;
        int digit = sum % 10;

        int carry = sum / 10; // edge case
        // create a newNode
        Node *newNode = new Node(digit);

        anstail->next = newNode;
        anstail = newNode;

        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        int sum = carry + head2->data;
        int digit = sum % 10;

        int carry = sum / 10; // edge case
        // create a newNode
        Node *newNode = new Node(digit);

        anstail->next = newNode;
        anstail = newNode;

        head2 = head2->next;
    }
    // handle carry ko alag se
    while(carry!=0){
        int sum=carry;
        int digit=sum%10;
        carry=sum/10;
        Node *newNode = new Node(digit);

        anstail->next = newNode;
        anstail = newNode;
    }

    // step 3 reverse the ans LL
     prev = NULL;
    curr = ansHead;
      Node *  ans=reverse(prev,curr);
    return ans;
}
int main()
{
    Node *first1 = new Node(2);
    Node *second1 = new Node(4);
    Node *first2 = new Node(2);
    Node *second2 = new Node(3);
    Node *third2 = new Node(4);

    first1->next = second1;
    first2->next = second2;
    second2->next = third2;
    print(first1);
    cout << endl;
    print(first2);
    cout << endl;
    // SortZeroOnesTwo(first);
    // print(first);
    cout << endl;

    Node *ans = solve(first1, first2);
    cout<<endl;
    print(ans);

    return 0;
}