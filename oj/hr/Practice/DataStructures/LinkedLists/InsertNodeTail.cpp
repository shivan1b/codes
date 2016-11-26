/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node *tmp=head;
    Node *nd=new Node();
    nd->data=data;
    nd->next=NULL;
    
    if(head==NULL)
        return nd;
    else{
        while(tmp->next)
            tmp=tmp->next;
        
        tmp->next=nd;
    }
    return head;
}
