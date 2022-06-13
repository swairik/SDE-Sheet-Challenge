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

int findIntersection(Node *head1, Node *head2)
{
    //Write your code here
    int n = 0, m = 0;
    Node *temp1 = head1, *temp2 = head2;
    while(temp1) {
        temp1 = temp1 -> next;
        n++;
    }
    while(temp2) {
        temp2 = temp2 -> next;
        m++;
    }
    temp1 = head1;
    temp2 = head2;
    
    if(n > m) {
        while(n > m) {
            temp1 = temp1 -> next;
            n--;
        }
    }    
    
    if(m > n) {
        while(m > n) {
            temp2 = temp2 -> next;
            m--;
        }
    }
    
    while(temp1 && temp2) {
//         cout << "printign : " << temp1 -> data << " " << temp2 -> data << endl;
        if(temp1 == temp2) {
            return temp1 -> data;
        }
        temp1 = temp1 -> next;
        temp2 = temp2 -> next;
    }
    return -1;
    
}