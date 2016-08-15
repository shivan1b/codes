#include<iostream>

using namespace std;

class node{
	public:
		int data;
		node *left, *right;

		node(){}

		node(int d){
			data=d;
			left=NULL;
			right=NULL;
		}

		node *insertNode(node *root, int d){
			if(!root)
				return new node(d);
			if(d<=root->data)
				root->left=insertNode(root->left,d);
			else
				root->right=insertNode(root->right,d);

			return root;
		}

		node *postorder(node *root){
			if(root){
				if(root->left)
					postorder(root->left);
				if(root->right)
					postorder(root->right);
				cout<<root->data<<"\n";
			}
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

        cout<<"Post Order traversal of tree gives:\n";
        np.postorder(root);
}
