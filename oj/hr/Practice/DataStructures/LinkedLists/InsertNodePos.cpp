/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
    Node *tmp=head;
    Node *np=new Node();
    np->data=data;
    np->next=NULL;
    
    if(head==NULL)
        return np;
    else if(position==0){
        np->next=tmp;
        return np;
    }
    
    int cnt=0;
    while(cnt!=position-1){
        tmp=tmp->next;
        cnt++;
    }
    
    np->next=tmp->next;
    tmp->next=np;
    
    return head;
}
