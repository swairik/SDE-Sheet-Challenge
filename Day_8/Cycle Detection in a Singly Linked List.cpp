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

bool detectCycle(Node *head)
{
	//	Write your code here
    Node *fast = head -> next, *slow = head;
    while(fast && fast -> next) {
        if(fast == slow) {
            return true;
        }
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return false;
    
}