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

Node *firstNode(Node *head)
{
	//    Write your code here.
    
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* slow=head->next;
    Node* fast=head->next->next;
    while(slow && fast && fast->next){
        if(slow==fast){
            break;
        }
        slow=slow->next;
        fast=fast->next->next;
    }
    if(slow==NULL || fast==NULL || fast->next==NULL){
        return NULL;
    }
    slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
    
}