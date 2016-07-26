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

		void deleteList(Node *head){
			while(head->next!=NULL){
				Node *t=head;
				cout<<"Freeing "<<t->data<<".\n";
				head=head->next;
				free(t);
			}
			cout<<"Freeing "<<head->data<<".\n";
			free(head);
			cout<<"The list is empty now.\n";
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
                        cout<<"\nEnter element "<<i+1<<": ";
                        cin>>p;
                        head=np.insertElement(head,p);
                }
	np.deleteList(head);
}
