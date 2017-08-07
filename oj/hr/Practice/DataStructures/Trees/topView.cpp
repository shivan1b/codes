/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/

void top_view(node * root)
{
    stack<node*> s;
    node *tmp=root;
    
    while(tmp->left){
        s.push(tmp->left);
        tmp=tmp->left;
    }
    while(!s.empty()){
        cout<<s.top()->data<<" ";
        s.pop();
    }
    tmp=root;
    while(tmp){
        cout<<tmp->data<<" ";
        tmp=tmp->right;
    }
}

