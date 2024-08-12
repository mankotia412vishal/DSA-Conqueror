#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {

        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {

        this->data = data;
        this->next = NULL;
    }
};
int getLength(Node *head)
{
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void Extraxct(Node *&head)
{
    int i = 1;
    Node *prev = head;
    Node *curr = head;
    Node *temp = head;
    Node *NaviLLH = NULL;
    Node *NaviLLT = NaviLLH;

    int len = getLength(head);
    while (i <= len)
    {
       
       
        if (i % 2 == 0)
        {
            curr = temp;

            prev->next = curr->next;
            curr->next = NULL;

            if (NaviLLT == NULL)
            {
                Node *newNode = new Node(curr->data);
                NaviLLT = newNode;
                // NaviLLT = newNode;
                NaviLLH = NaviLLT;
               
            }
            else{

           
            Node *newNode = new Node(curr->data);
            NaviLLT->next = newNode;
            NaviLLT = newNode;
         }
         print(head);
         cin.get();
        }
         temp = temp->next;
         prev=temp;
         i++;
    }
  
   
}

int main()
{
    Node *head = new Node(1);
    Node *tail = head;
    Node *second = new Node(2);
    Node *third = new Node(3);
    Node *fourth = new Node(4);
    Node *fifth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // print(head);
    cout << "\n";
    Extraxct(head);

    return 0;
}