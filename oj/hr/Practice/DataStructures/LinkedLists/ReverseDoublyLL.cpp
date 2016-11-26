/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    if(head==NULL || head->next==NULL)
        return head;
    
    swap(head->next, head->prev);
    
    Node *tmp=head->prev;
    while(tmp){
        swap(tmp->next,tmp->prev);
        if(tmp->prev)
            tmp=tmp->prev;
        else break;
    }
    
    head=tmp;
    
    return head;
}
