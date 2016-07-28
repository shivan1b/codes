#include<iostream>
#include<cstdlib>

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

		Node *push(Node *head, int data){
			Node *np=new Node(data);
			Node *t=head;
			
			cout<<"Pushing "<<np->data<<"...\n";

			if(head==NULL)
				return np;

			while(t->next!=NULL)
				t=t->next;

			t->next=np;
			
			return head;
		}

		Node *pop(Node *head){
			Node *t=head;
			Node *p;

			if(head==NULL){
				cout<<"Nothing to pop. Stack empty.\n";
				return NULL;
			}

			if(head->next==NULL){
				cout<<"Popping "<<head->data<<"...\n";
				free(head);
				return NULL;
			}

			while(t->next!=NULL){
				p=t;
				t=t->next;
			}

			p->next=NULL;

			cout<<"Popping "<<t->data<<"...\n";

			free(t);

			return head;
		}

		void displayStack(Node *head){

			if(head==NULL)
				cout<<"Nothing to display. Stack empty.\n";
			else{
				cout<<"\nThe list is as follows:\n";

				while(head!=NULL){
					cout<<head->data<<"\n";
					head=head->next;
				}
			}
		}
};

int main()
{
	int d,e;
	Node *head=NULL;
	Node np;

	while(1){
		cout<<"Press 1/2/3 to push pop or display the elements of stack. Press anything else to exit.\n";

		cin>>e;
		switch(e){
			case 1:
				cout<<"Enter the data you want to push: ";
				cin>>d;
				head=np.push(head,d);
				break;
			case 2:
				head=np.pop(head);
				break;
			case 3:
				np.displayStack(head);
				break;
			default:
				goto stack;
		}
	}

	stack:

	return 0;
}
