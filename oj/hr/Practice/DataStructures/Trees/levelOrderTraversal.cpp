#include<queue>
/*
struct node
{
    int data;
    node* left;
    node* right;
}*/

void LevelOrder(node * root)
{
    queue<node*> q;
    
    q.push(root);
    
    while(!q.empty()){
        node *tmp=q.front();
        cout<<tmp->data<<" ";
        q.pop();
        if(tmp->left)
            q.push(tmp->left);
        if(tmp->right)
            q.push(tmp->right);
    }
}
