/*
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
*/

Node *removeKthNode(Node *head, int K) {

    Node *start= new Node();

    start->next=head;

    Node *f=start;

    Node *s=start;

    for(int i=1; i<=K; i++){

        f=f->next;

    }

    if(f->next==NULL){
        return head->next;
    }

    while(f->next!=NULL){

        f=f->next;

        s=s->next;

    }

    s->next=s->next->next;

    return head;

}


