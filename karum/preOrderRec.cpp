#include<iostream>

using namespace std;

class node{
	public:

	int data;
	node *lt, *rt;

	node(){}

	node(int d){
		data=d;
		lt=NULL;
		rt=NULL;
	}

	node *insertNode(node *root, int dt) {

		if(root==NULL)
			return new node(dt);
		
		if(dt < root->data)
			root->lt=insertNode(root->lt,dt);
		else
			root->rt=insertNode(root->rt,dt);

		return root;
	}

	void preOrder(node *root) {
		if(root)
			cout<<root->data<<"\n";
		if(root->lt)
			preOrder(root->lt);
		if(root->rt)
			preOrder(root->rt);
	}
};

int main()
{
	int n,d;
	node np;
	node *root=NULL;

	cout<<"Enter the number of elements:";
	cin>>n;

	for(int i=0;i<n;i++){
		cout<<"\nEnter the element "<<i+1<<" for tree:";
		cin>>d;
		root=np.insertNode(root,d);
	}

	cout<<"Pre Order traversal of tree gives:\n";
	np.preOrder(root);
}
