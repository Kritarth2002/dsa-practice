#include<iostream>
#include<queue>
using namespace std;
struct node{
int data;
node *l;
node *r;
};
void create(node *&root)
{
    node *p,*t;
    root=new node;
    queue <node *>q;
    int x;
    cout<<"enter data of root node"<<endl;
    cin>>x;
    root->data=x;
    root->l=NULL;
    root->r=NULL;
    q.push(root);
    while(!q.empty())
    {
        p=q.front();
        q.pop();
        cout<<"enter data of lchild of  "<<p->data<<endl;
        cin>>x;
        if(x!=-1)
        {
            t=new node;
            t->data=x;
            t->l=NULL;
            t->r=NULL;
            p->l=t;
            q.push(t);
        }
        cout<<"enter data of rchild of  "<<p->data<<endl;
        cin>>x;
        if(x!=-1)
        {
            t=new node;
            t->data=x;
            t->l=NULL;
            t->r=NULL;
            p->r=t;
            q.push(t);
        }
    }

}
void preorder(node *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    preorder(root->l);
    preorder(root->r);
}
node *search(node *root,int key)
{
    if(root==NULL)
        return NULL;
    if(root->data==key)
    {
        return root;
    }
    if(key<root->data)
        search(root->l,key);
    if(key>root->data)
        search(root->r,key);
        return NULL;
}
int main()
{
    node *root;
    create(root);
    //preorder(root);
    int key;
    cout<<"enter key value"<<endl;
    cin>>key;
    node *t=search(root,key);
    if(t->data==key)
    {
        cout<<"key found"<<endl;
    }
    else
        cout<<"key not found"<<endl;
}
