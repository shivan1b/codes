/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    Node *curA=headA, *curB=headB;
    
    while(curA!=curB){
        if(curA->next)
            curA=curA->next;
        else
            curA=headB;
        
        if(curB->next)
            curB=curB->next;
        else
            curB=headA;
    }
    
    return curA->data;
}
