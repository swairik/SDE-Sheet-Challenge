#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

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

*****************************************************************/

Node *addTwoNumbers(Node *head1, Node *head2)
{
    // Write your code here.
    
    Node *head = new Node(-1);
    Node *temp = head;
    bool carry = false;
    
    while(head1 && head2) {
        int s = head1 -> data;
        int t = head2 -> data;
        int sum = s + t + carry;
        carry = (sum > 9);
        sum %= 10;
        temp -> next = new Node(sum);
        
        head1 = head1 -> next;
        head2 = head2 -> next;
        temp = temp -> next;
    }
    
    while(head1) {
        int sum = head1 -> data + carry;
        carry = (sum > 9);
        sum %= 10;
        temp -> next = new Node(sum);
        
        head1 = head1 -> next;
        temp = temp -> next;
    }
    
    while(head2) {
        int sum = head2 -> data + carry;
        carry = (sum > 9);
        sum %= 10;
        temp -> next = new Node(sum);

        head2 = head2 -> next;
        temp = temp -> next;
    }
    if(carry) {
        temp -> next = new Node(1);
    }
    return head -> next;
    
    
}