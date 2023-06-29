/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     //edge cases
     if(head==NULL||head->next==NULL||k==0) return head;

     Node* temp=head;
     int len=1;
     while(temp->next){
          len++;
          temp=temp->next;
     }

     temp->next=head;
     temp=head;
     k=k%len;
     int diff=len-k;

     while(diff>1){   
          temp=temp->next;
          diff--;
     }

     head=temp->next;
     temp->next=NULL;
     return head;
}