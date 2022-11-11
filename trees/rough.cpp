#include <iostream>

using namespace std;
class node
{
    public:
    int data;
    node*l;
    node*r;
    node(int value)
    {
        data=value;
        l=NULL;
        r=NULL;
    }
};
void preorder(node*Node)
{
    if(Node==NULL)
        return;
    cout<<Node->data;
    preorder(Node->l);
    preorder(Node->r);
}

void inorder(node*root)
{
    if(root==NULL)
        return;
    preorder(root->l);
    cout<<root->data<<endl;
    preorder(root->r);
}
void postorder(node*root)
{
    if(root==NULL)
        return;
    preorder(root->l);
    preorder(root->r);
    cout<<root->data<<endl;
}


int main()
{
    node*root=new node(1);
    root->l=new node(2);
    root->r=new node(3);
    root->l->l=new node(4);
    root->l->r=new node(5);
    root->l->l->r=new node(8);
    root->l->l->r->l=new node(12);
    root->l->l->r->r=new node(13);
    root->l->r->l->r=new node(14);
    root->r->l=new node(6);
    root->r->r=new node(7);
    root->r->r->l=new node(10);
    root->r->r->l->l=new node(15);
    root->r->r->r=new node(11);
    root->r->r->r->l=new node(16);
    root->r->r->r->r=new node(17);
    preorder(root);
    postorder(root);

    return 0;
}
