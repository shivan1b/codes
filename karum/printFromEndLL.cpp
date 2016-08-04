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

		void displayFromEnd(Node *head){

			if(!head->next){
				cout<<head->data<<"\n";
				return;
			}

			displayFromEnd(head->next);
			cout<<head->data<<"\n";
		}
};

int main()
{
        int n,p,pos,d;
        Node np;
        Node *head=NULL;

        cout<<"Enter the size of linked list: ";
        cin>>n;

        for(int i=0;i<n;i++){
                        cout<<"\nEnter element "<<i+1<<": ";
                        cin>>p;
                        head=np.insertElement(head,p);
                }

	if(!head)
		cout<<"Sorry! No elements in the list. :(\n";
	else{
		cout<<"The elements accessed from the end are: \n";
		np.displayFromEnd(head);
	}
}
