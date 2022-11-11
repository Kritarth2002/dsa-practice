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
node* search(node *&t,int key)
{

    while(t!=NULL)
    {
        if(key==t->data)
            return t;
        else if(key<t->data)
            t=t->l;
        else
            t=t->r;
    }
    return NULL;
}
void inorder(node *root)
{
    if(root==NULL)
        return;
    inorder(root->l);
    cout<<root->data<<" ";
    inorder(root->r);
}
void preorder(node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->l);
    preorder(root->r);
}
void postorder(node *root)
{
    if(root==NULL)
        return;
    postorder(root->l);
    postorder(root->r);
    cout<<root->data<<" ";
}
int main()
{
    //80, 35, 60, 50, 90, 40, 85, 30, 70
    root=insert(root,80);
    root=insert(root,35);
    root=insert(root,60);
    root=insert(root,50);
    root=insert(root,90);
    root=insert(root,40);
    root=insert(root,85);
    root=insert(root,30);
    root=insert(root,70);
    inorder(root);
    cout<<endl;
    node *x=search(root,85);
    x->data=45;

    preorder(root);
    return 0;
}
