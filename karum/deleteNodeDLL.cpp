#include<iostream>
#include<cstdlib>

using namespace std;

class Node{
	public:

	int data;
	Node *prev, *next;

	Node(){}

	Node(int d){
		data=d;
		prev=NULL;
		next=NULL;
	}

	Node *insertNode(Node *head, int d){
		Node *np=new Node(d);
		Node *t=head;

		if(head==NULL)
			return np;

		while(t->next!=NULL)
			t=t->next;
			
		t->next=np;
		np->prev=t;

		return head;
	}

	Node *deleteNode(Node *head, int pos){
		Node *t=head;
		int c=1;

		if(pos==1){
			head=head->next;
			free(head->prev);
			return head;
		}

		while(c<pos-1){
			t=t->next;
			c++;
		}
		if(t->next->next!=NULL)
			t->next->next->prev=t;
		Node *tm=t->next;
		t->next=t->next->next;
		free(tm);

		return head;
	}

	void displayList(Node *head){
                cout<<"\nElements of the list are:\n";

                while(head){
                        cout<<head->data<<"\n";
                        head=head->next;
                }
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
                        head=np.insertNode(head,p);
                }

        cout<<"\nEnter the position where you wish to delete the element: ";
        cin>>pos;

        if(pos>n)
                cout<<"\nSorry! The position you entered is out of bounds.\n";
        else
                head=np.deleteNode(head,pos);

        np.displayList(head);
}
