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
			next=this;
		}

		Node *insertNode(Node *head, int d){
                        Node *np=new Node(d);
                        Node *t=head;

                        if(head==NULL)
                                return np;

                        while(t->next!=head)
                                t=t->next;

                        t->next=np;
                        np->next=head;

                        return head;
                }

		Node *deleteNode(Node *head, int pos){
			Node *t=head;

			if(pos==1){
				while(t->next!=head)
					t=t->next;
				t->next=head->next;
				Node *tm=head;
				head=head->next;
				free(tm);

				return head;
			}

			int c=1;

			while(c<pos-1){
				t=t->next;
				c++;
			}

			Node *tm=t->next;
			t->next=t->next->next;
			free(tm);
			
			return head;
		}

		void displayList(Node *head){
                        Node *t=head;
                        cout<<"\nElements of the list are:\n";
                        while(t->next!=head){
                                cout<<t->data<<"\n";
                                t=t->next;
                        }
                        cout<<t->data<<"\n";
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
