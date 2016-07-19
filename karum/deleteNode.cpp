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

	Node *insertNode(Node *head, int d){
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
	
	Node *deleteNode(Node *head, int pos){
		Node *tmp=head;
		int c=1;

		if(pos==1){
			head=tmp->next;
			free(tmp);
		}
		else{
			while(c!=pos-1){
				tmp=tmp->next;
				c++;
			}
			
			Node *tm=tmp->next;
			tmp->next=tmp->next->next;
			free(tm);
		}
				
		return head;
	}

	void displayList(Node *head){
		Node *tmp=head;

		cout<<"Elements of the list are:\n";
		while(tmp!=NULL){
			cout<<tmp->data<<"\n";
			tmp=tmp->next;	
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
