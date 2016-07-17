#include<iostream>

using namespace std;

class Node{
	public:

	int data;
	Node *next,*head;

	Node(){}

	Node(int d){
		data=d;
		next=NULL;
	}

	Node *addElement(Node *head, int d){

		Node *nde=new Node(d);
		Node *tmp=head;

		if(head==NULL)
			return nde;
		else{
			while(tmp->next)
				tmp=tmp->next;
		}
		
		tmp->next=nde;

		return head;
	}

	void displayList(Node *head){
		Node *nde=head;

		if(head==NULL)
			cout<<"No elements in the list! :(";
		else{
			cout<<"Elements in the list are:\n";
			while(nde){
				cout<<nde->data<<"\n";
				nde=nde->next;
			}
		}
	}
};

int main()
{
	int n,p;
	Node np;
	Node *head=NULL;

	cout<<"Enter the size of linked list: ";
	cin>>n;

	for(int i=0;i<n;i++){
		cout<<"Enter element "<<i<<": ";
		cin>>p;
		head=np.addElement(head,p);
	}

	np.displayList(head);
}
