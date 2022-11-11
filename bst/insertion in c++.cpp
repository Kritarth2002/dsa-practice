
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};
//iterative insertion
void insert(node *t,int key)
{
    node *p=NULL,*r;
    while(t!=NULL)
    {
        p=t;
        if(t->data==key)
        return;
        else if(key<t->data)
        {
            t=t->left;
        }
        else
        {
            t=t->right;
        }
    }
    //creation of new node for key value..
    r=new node(key);


    if(key <p->data)
    {
        p->left=r;
    }
    else
    p->right=r;

}

void preorder(node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    node *root=new node(30);
    root->left=new node(20);
    root->right=new node(40);
    root->left->left=new node(10);
    root->left->right=new node(25);
    root->right->left=new node(35);
    root->right->right=new node(50);
   // preorder(root);
   insert(root,38);
   preorder(root);
}

