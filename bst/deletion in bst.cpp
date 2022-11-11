#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *l;
    node *r;
}*root=NULL;
node* insert(node *root, int key)
{
    node *t;
    if(root==NULL)
    {
        t=new node;
        t->data=key;
        t->l=NULL;
        t->r=NULL;
        root=t;
        return t;
    }
    if(key<root->data)
    root->l=insert(root->l,key);
    else if(key>root->data)
    root->r=insert(root->r,key);
    return root;
}
// del function is pending
void inorder(node *root)
{
    if(root==NULL)
    return ;
    inorder(root->l);
    cout<<root->data<<" ";
    inorder(root->r);
}
int main()
{
    //8 3 10 1 6 14 4 7 13
   root=insert(root,8); 
  root= insert(root,3); 
  root= insert(root,10); 
  root= insert(root,1); 
  root= insert(root,6); 
  root= insert(root,14); 
 root=  insert(root,4); 
  root= insert(root,7); 
   root=insert(root,13);  
   inorder(root);
}