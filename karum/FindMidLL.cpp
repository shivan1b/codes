#include<iostream>

using namespace std;

class Node{
        public:
                int data;
                Node *next;

                Node(){}

                Node(int d){
                        data=d;
                        next=NULL;
                }

                Node *insertElement(Node *head,int d){
                        Node *np=new Node(d);
                        Node *tmp=head;

                        if(head==NULL)
                                return np;
                        else
                                while(tmp->next)
                                        tmp=tmp->next;

                        tmp->next=np;

                        return head;
                }

		int findMidNode(Node *head){
			Node *trail, *tmp;
			trail=tmp=head;

			if(tmp){
				while(tmp->next && tmp->next->next){
					tmp=tmp->next->next;
					trail=trail->next;
				}
			}

			return trail->data;
		}
};

int main()
{
        int n,p,pos,d;
        Node np;
        Node *head=NULL;

        cout<<"Enter the size of linked list (>0): ";
        cin>>n;

        for(int i=0;i<n;i++){
                        cout<<"\nEnter element "<<i+1<<": ";
                        cin>>p;
                        head=np.insertElement(head,p);
                }
	
	if(head)
		cout<<"The middle node is "<<np.findMidNode(head)<<"\n";
	else
		cout<<"Sorry! The list is empty.\n";
}
