#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *l,*r;
    node(int x)
    {
        data=x;
        l=NULL;
        r=NULL;
    }
};
queue<node *> q;
void print_leftview(node *root)
{
    if(root==NULL)
        return;
    q.push(root);
    //q.push(NULL);
    while(!q.empty())
    {
        int n=q.size();
        for(int i=0; i<n; i++)
        {
            node *p=q.front();
            q.pop();
            if(i==0)
            {

                cout<<p->data<<" ";
            }
            if(p->l)
                q.push(p->l);
            if(p->r)
                q.push(p->r);
        }

    }
}
int main()
{
    node *root=new node(1);
    root->l=new node(2);
    root->r=new node(3);
    root->l->l=new node(4);
    root->l->r=new node(5);
    root->r->l=new node(6);
    root->r->r=new node(7);
    print_leftview(root);

}
