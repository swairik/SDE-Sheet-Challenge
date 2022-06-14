#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    // Write your code here.
    LinkedListNode<int> *temp = head;
    stack<LinkedListNode<int>*> st;
    while(temp) {
        st.push(temp);
        temp = temp -> next;
    }
    temp = head;
    int n = 0;
    while(temp && temp != st.top() && n < st.size()) {
        if(temp -> data != st.top() -> data) {
            return false;
        }
        temp = temp -> next;
        st.pop();
        n++;
    }
    return true;
}