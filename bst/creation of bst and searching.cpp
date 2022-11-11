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
node* search(node *t,int key)
{

    while(t!=NULL)
    {
        if(key==t->data)
            return t;
        else if(key<t->data)
            t=t->left;
        else
            t=t->right;
    }
    return NULL;
}
/*void preorder(node *root)
{
    if(root==NULL)
        return;
    cout<<root->data;
    preorder(root->left);
    preorder(root->right);
}*/
int main()
{
    node *root=new node(30);
    root->left=new node(20);
    root->right=new node(40);
    root->left->left=new node(10);
    root->left->right=new node(25);
    //root->left->right->left=new node(6);
   // root->left->right->left->right=new node(7);
    root->right->left=new node(35);
    root->right->right=new node(50);
    //preorder(root);
    //leftview(root);
    int key;
    cout<<"enter key value"<<endl;
    cin>>key;
    node *t=search(root,key);
    if(t->data==key)
        cout<<"key found"<<endl;
    else
        cout<<"key not found"<<endl;
}

