#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *left,*right;
    node (int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};
void printlevelorder(node *root)
{
     stack<int> s;
    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node *ptr=q.front();
        q.pop();

        s.push(ptr->data);
       // cout<<ptr->data<<" ";
        if(ptr->left)
            q.push(ptr->left);
        if(ptr->right)
            q.push(ptr->right);
    }
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
}
int main()
{
    node *root=new node(1);
    root->left=new node (2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(8);
    root->right->right=new node(7);

    printlevelorder(root);
}
