#include<iostream>

using namespace std;

class node{
	public:
		int data;
		node *left, *right;

		node(){}

		node(int d) {
			data=d;
			left=NULL;
			right=NULL;
		}

		node *insertNode(node *root, int d) {
			if(!root)
				return new node(d);
			if(d <= root->data)
				root->left=insertNode(root->left,d);
			else
				root->right=insertNode(root->right,d);

			return root;
		}

		node *inorder(node *root) {
			if(root) {
				if(root->left)
					inorder(root->left);
				
				cout<<root->data<<"\n";
				
				if(root->right)
					inorder(root->right);
			}
		}
};

int main()
{
	int n,d;
	node nd;
	node *root=NULL;

	cout<<"Enter the number of elements in the tree:";
	cin>>n;

	for(int i=0;i<n;i++){
		cout<<"\nEnter the element "<<i+1<<" of the tree:";
		cin>>d;
		root=nd.insertNode(root,d);
	}

	cout<<"\nInorder traversal of the tree gives:\n";
	nd.inorder(root);
}
