#include<vector>
/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
    vector<int> v;
    vector<int>::reverse_iterator rit;
    Node *tmp=head;
    
    while(tmp){
        v.push_back(tmp->data);
        tmp=tmp->next;
    }
    
    for(rit=v.rbegin();rit!=v.rend();rit++)
        cout<<*rit<<"\n";
}
