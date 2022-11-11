#include<iostream>
using namespace std;
struct node{

    int data;
    node *l,*r;
} *root=NULL;
node* insert(node *p,int key)
{
    node *t;
    if(p==NULL)
    {
        t=new node;
        t->data=key;
        t->l=NULL;
        t->r=NULL;
        root=t;
        return t;
    }
    if(key<p->data)
    p->l=insert(p->l,key);
    else if(key>p->data)
    p->r=insert(p->r,key);
    return p;

}
void inorder(node *root)
{
    if(root==NULL)
        return;
    inorder(root->l);
    cout<<root->data;
    inorder(root->r);
}
int main()
{
    root=insert(root,20);
    root=insert(root,30);
    root=insert(root,40);
    root=insert(root,10);
    root=insert(root,25);
    root=insert(root,35);
    root=insert(root,50);

    inorder(root);
    return 0;
}