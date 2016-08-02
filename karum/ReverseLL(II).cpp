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

		Node *reverseList(Node *head){
			Node *tmp,*hd=head;

			if(head==NULL)
				return head;

			while(head){
				Node *tq=head->next;
				head->next=tmp;
				tmp=head;
				head=tq;
			}
			if(hd)
				hd->next=NULL;

			return tmp;
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
        np.displayList(head);

        head=np.reverseList(head);

        cout<<"After reversing, ";

        np.displayList(head);
}
