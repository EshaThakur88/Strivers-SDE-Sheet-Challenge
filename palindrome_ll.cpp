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
    stack<int> s;
    if(head==nullptr) return 1;

    LinkedListNode<int> *temp=head;

    while(temp){
        s.push(temp->data);
        temp=temp->next;
    }

    LinkedListNode<int> *ptr=head;

    while(ptr){
        if(ptr->data==s.top()){
            s.pop();
            ptr=ptr->next;
        } else {
        return 0;
        }
    }

    if(s.empty()==1){
        return 1;
    }

}