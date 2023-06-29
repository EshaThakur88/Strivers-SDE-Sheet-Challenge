#include<bits/stdc++.h>
using namespace std;
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

Node *firstNode(Node *head)
{
    if(head==NULL ||head->next ==NULL) return NULL;
    if(head->next==head) return head;
    Node* slow=new Node();
    Node* fast=new Node();
    slow=head;
    fast=head;

    while(fast&&fast->next){
        fast=fast->next->next;
        slow=slow->next;

        if(slow==fast){
            fast=head;
            while(slow!=fast){
                slow=slow->next;
                fast=fast->next;
            }
            return fast;
        }
    }

    return NULL;

}