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

Node *findMiddle(Node *head) {
    Node*temp=head;    
    int count=0;    

    while(temp!=NULL)  
    {        
        count++;   
        temp=temp->next;  
    }  

    int cnt=0;  
    Node*temp2=head;  

    if(count%2==0)  
    {            
        while(cnt!=count/2)      
        {         
            cnt++;           
            temp2=temp2->next;     
        }  

    }
    else  
    {            
        while(cnt<count/2)  
        {          
            cnt++;        
            temp2=temp2->next;   
        } 
    }  
    return temp2; 

}

 


