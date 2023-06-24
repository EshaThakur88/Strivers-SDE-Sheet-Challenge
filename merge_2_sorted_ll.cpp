#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{
    if(first==NULL) return second;
    if(second==NULL) return first;
    
    //point the returning head pointer to the head  point of list starting with smaller value. 
    if(first->data > second-> data) swap(first,second);
    Node<int> *res=first;

    //iterations: whenever first->data stop being smaller than second->data, swap and repeat the iteration.
    while(first!=NULL && second != NULL){
        Node<int> *temp=NULL;
        while(first!=NULL && first->data<=second->data){
            temp=first;
            first=first->next;
        }
        temp->next=second;
        swap(first,second);
    }
    return res;

}
