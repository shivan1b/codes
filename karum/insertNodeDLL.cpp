#include<iostream>

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

	Node *insertNodePos(Node *head, int d, int pos){
		Node *np=new Node(d);
		Node *t=head;

		if(pos==1){
			np->next=head;
			head->prev=np;
			head=np;
			return head;
		}
		
		int c=1;
		while(c<pos-1){
			t=t->next;
			c++;
		}

		if(t->next!=NULL){
			Node *tm=t->next;
			np->next=tm;
			tm->prev=np;
		}

		t->next=np;
		np->prev=t;
				
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

	cout<<"Enter the number of elements: ";
	cin>>n;

	for(int i=0;i<n;i++){
		cout<<"\nEnter element "<<i+1<<": ";
		cin>>p;
		head=np.insertNode(head,p);
	}

	cout<<"\nEnter the position where you wish to insert the element: ";
        cin>>pos;

        if(pos>n+1)
                cout<<"\nSorry! The position you entered is out of bounds.\n";
        else{
                cout<<"\nInput the data of the node: ";
                cin>>d;
                head=np.insertNodePos(head,d,pos);
        }

	np.displayList(head);
}
