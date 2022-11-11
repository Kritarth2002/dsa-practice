#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *left,*right;
node (int x)
{
    data=x;
    left=NULL;
    right=NULL;
}
};
int sumatklevel(node *root,int k)
{
    int level=0,sum=0;
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node *ptr=q.front();
        q.pop();
        if(ptr!=NULL)
        {
            if(level==k)
            {
                sum=sum+ptr->data;
            }
            if(ptr->left)
                q.push(ptr->left);
            if(ptr->right)
                q.push(ptr->right);
        }
        else if(!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}
int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->right=new node(5);
    root->left->left=new node(4);
    root->right->left=new node(6);
    root->right->right=new node(7);
    cout<<sumatklevel(root,4);
}
