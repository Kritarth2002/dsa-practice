#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *l;
    node *r;
};
void create(node *&root)
{
    node *p, *t;
    int x;
    queue<node *> q;
    cout << "enter data " << endl;
    cin >> x;
    root = new node;
    root->data = x;
    root->l = NULL;
    root->r = NULL;
    q.push(root);
    while (!q.empty())
    {
        p = q.front();
        q.pop();
        cout << "enter data of lchild:  " << p->data<<" "<<endl;
        cin >> x;
        if (x != -1)
        {
            t = new node;
            t->data=x;
            t->l = NULL;
            t->r = NULL;
            p->l=t;
            q.push(t);
        }
        cout << "enter data of rchild:  " <<p->data<<" "<< endl;
        cin >> x;
        if(x!=-1)
        {
            t = new node;
            t->data=x;
            t->l = NULL;
            t->r = NULL;
            p->r=t;
            q.push(t);
        }
    }
}
node* search(node *t,int key)
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
/*void preorder(node *root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->l);
    preorder(root->r);
}*/

int main()
{
    node *root=NULL;
    create(root);
    cout<<search(root,5);
    //preorder(root);
    int key;
    cout<<"enter key value"<<endl;
    cin>>key;
    node *t=search(root,key);
    if(t->data==key)
        cout<<"key found"<<endl;
    else
        cout<<"key not found"<<endl;

}
