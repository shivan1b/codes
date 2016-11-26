/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    if(head==NULL || head->next==NULL)
        return head;
                  
    Node *nxt=Reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    
    return nxt;
}
