/*
Given a singly linked list, sort the list (in ascending order) using insertion sort algorithm.

Example 1:

Input:
N = 10
Linked List = 30->23->28->30->11->14->
              19->16->21->25 
Output : 
11 14 16 19 21 23 25 28 30 30 
Explanation :
The resultant linked list is sorted.
Example 2:

Input : 
N = 7
Linked List=19->20->16->24->12->29->30 
Output : 
12 16 19 20 24 29 30 
Explanation : 
The resultant linked list is sorted.
Your task:
You don't need to read input or print anything. Your task is to complete the function insertionSort() which takes the head of the linked list, sorts the list using insertion sort algorithm and returns the head of the sorted linked list.
 
Expected Time Complexity : O(n2)
Expected Auxiliary Space : O(1)
 
Constraints:
0 <= n <= 5*103

*/
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int x){
            data=x;
            next=NULL;
        }
};
 Node* insertionSort(struct Node* head_ref)
    {
        if(head_ref==NULL || head_ref->next==NULL)
            return head_ref;
        
        Node* curr=head_ref->next;
        Node* prev=head_ref;
        Node* temp;
        while(curr!=NULL){
            temp=curr->next;
            if(curr->data<prev->data){
                Node* temp2=head_ref;
                Node* prev2=NULL;
                while(temp2!=curr && temp2->data<curr->data){
                    prev2=temp2;
                    temp2=temp2->next;
                }
                if(prev2==NULL){
                    prev->next=curr->next;
                    curr->next=head_ref;
                    head_ref=curr;
                }
                else{
                    prev->next=curr->next;
                    prev2->next=curr;
                    curr->next=temp2;
                }
            }
            else{
                prev=curr;
            }
            curr=temp;
        }
        return head_ref;
        
    }
int main(){

    
    return 0;

}