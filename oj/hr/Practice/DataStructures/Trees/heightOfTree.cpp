/*The tree node has data, left child and right child 
struct node
{
    int data;
    node* left;
    node* right;
};

*/
int height(node * root)
{
    if(!root)
        return -1;
    return max(height(root->left), height(root->right)) + 1;
}
  
