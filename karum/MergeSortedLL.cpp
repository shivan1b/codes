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

		Node *mergeSortedLists(Node *head1, Node *head2){
			if(head1==NULL)
				return head2;
			if(head2==NULL)
				return head1;

			if(head1->data < head2->data){
				head1->next=mergeSortedLists(head1->next,head2);
				return head1;
			}
			else{
				head2->next=mergeSortedLists(head2->next, head1);
				return head2;
			}
		}

		void displayList(Node *head){
                        Node *tmp=head;

                        if(head==NULL)
                                cout<<"No elements in the list! :(\n";
                        else{
                                cout<<"Elements are: \n";
                                while(tmp){
                                        cout<<tmp->data<<"\n";
                                        tmp=tmp->next;
                                }
                        }
                }
};

int main()
{
        int n,p,pos,d,q=2;
        Node np;
        Node *head1=NULL,*head2=NULL, *head;

	while(q--){
		head=NULL;
		cout<<"Enter the size of linked list: ";
		cin>>n;

		for(int i=0;i<n;i++){
                        cout<<"\nEnter element "<<i+1<<": ";
                        cin>>p;
                        head=np.insertElement(head,p);
                }
		if(q==1)
			head1=head;
		else
			head2=head;
	}

	head=np.mergeSortedLists(head1, head2);

	np.displayList(head);
}
