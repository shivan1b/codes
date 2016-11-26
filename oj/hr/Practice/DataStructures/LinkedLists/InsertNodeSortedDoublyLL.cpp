/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    Node *tm=head;
    bool p;
    Node *nd=new Node();
    nd->data=data;
    
    if(head==NULL)
        return nd;
    
    if(head->data > data){
        nd->next=head;
        head->prev=nd;
        head=nd;
        return head;
    }
    
    while(tm->next!=NULL){
            if(tm->next->data < data)
                tm=tm->next;
            else
                break;
    }

    if(tm->next!=NULL)
        tm->next->prev=nd;
    
    nd->prev=tm;
    nd->next=tm->next;
    tm->next=nd;
    
    return head;
}
