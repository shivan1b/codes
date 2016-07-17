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

		Node *insertElementPos(Node *head, int d, int pos){
			Node *np=new Node(d);
			Node *tmp=head;

			int cnt=1;

			if(pos==1){
				np->next=tmp;
				return np;
			}
			while(cnt!=pos-1){
				tmp=tmp->next;
				cnt++;
			}

			np->next=tmp->next;
			tmp->next=np;

			return head;
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

	cout<<"\nEnter the position where you wish to insert the element: ";
	cin>>pos;

	if(pos>n+1)
		cout<<"\nSorry! The position you entered is out of bounds.\n";
	else{
		cout<<"\nInput the data of the node: ";
		cin>>d;
		head=np.insertElementPos(head,d,pos);
	}

        np.displayList(head);}
