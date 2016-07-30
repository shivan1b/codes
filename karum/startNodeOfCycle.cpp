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

		Node *createCycle(Node *head){
                        Node *t=head;

                        while(t->next!=NULL)
                                t=t->next;

                        t->next=head;

                        return head;
                }

                int startCycle(Node *head){
			Node *hd=head;
                        Node *ahead=head, *trail=head;

                        while(head->next!=NULL){
                                trail=trail->next;

                                if(ahead->next!=NULL && ahead->next->next!=NULL)
                                        ahead=ahead->next->next;

                                if(trail==ahead){
					trail=hd;
					while(trail!=ahead){
						trail=trail->next;
						ahead=ahead->next;
					}

					return trail->data;
				}

                                head=head->next;
                        }
                }
};


int main()
{
	int n,p,pos,d;
        Node np;
        Node *head=NULL;
	
	cout<<"The program assumes there IS a cycle.\n";
        cout<<"Enter the size of linked list (>0): ";
        cin>>n;

        for(int i=0;i<n;i++){
                        cout<<"\nEnter element "<<i+1<<": ";
                        cin>>p;
                        head=np.insertElement(head,p);
                }

        head=np.createCycle(head);

        cout<<"Starting node of the cycle is "<< np.startCycle(head) <<".\n";
}	
