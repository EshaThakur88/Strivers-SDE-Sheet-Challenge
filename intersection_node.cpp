#include<bits/stdc++.h>
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

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    //APPROACH 1
    // if(firstHead==NULL) return secondHead;
    // if(secondHead==NULL) return firstHead;

    // Node* temp1=new Node();
    // temp1=firstHead;
    // Node* temp2=new Node();
    // temp2=secondHead;

    // unordered_set<Node*> s;

    // while(temp1!=NULL){
    //   s.insert(temp1);
    //   if (temp1->next != NULL)
    //     temp1 = temp1->next;
    //   else
    //     break;
    // }

    // while(temp2!=NULL){
    //     if(s.find(temp2)!=s.end()){
    //         return temp2;
    //     }
    //     else{
    //         if(temp2->next!=NULL) temp2=temp2->next;
    //         else break;
    //     }
    // }
    // return NULL;

    //APPROACH 2
    Node* l1=new Node();
    l1=firstHead;
    Node* l2=new Node();
    l2=secondHead;

    while(l1!=l2){
        l1=(l1==NULL)?secondHead:l1->next;
        l2=(l2==NULL)?firstHead:l2->next;
    }
    return l1;
}
