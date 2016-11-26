/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
    Node *tmp=head;
    int d;
    
    while(tmp->next!=NULL){
        d=tmp->data;
        while(tmp->next!=NULL && tmp->next->data==d){
            Node *tm=tmp->next;
            tmp->next=tmp->next->next;
            free(tm);
        }
       
        if(tmp->next!=NULL)
            tmp=tmp->next;
    }
    
    return head;
}

