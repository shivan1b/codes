/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
    Node *nd=head;
    while(nd){
        cout<<nd->data<<"\n";
        nd=nd->next;
    }
}
