/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root,string s)
{
    int l=s.length();
    for(int i=0;i<l;){
        node *tmp=root;
        while(!tmp->data){
            if(s[i]=='0')
                tmp=tmp->left;
            else
                tmp=tmp->right;
            i++;
        }
        cout<<tmp->data;
    }    
}
