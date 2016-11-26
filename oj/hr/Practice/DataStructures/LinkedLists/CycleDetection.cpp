/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node* head) {
    if(head==NULL)
        return false;
    
    if(head->next==head)
        return true;
 
    Node *back=head, *forth=head;
    
    while(1){
        if(forth->next->next!=NULL && back->next!=NULL){
            forth=forth->next->next;
            back=back->next;
        }
        else
            break;
        
        if(forth==back)
            return true;
    }
    return false;
}
