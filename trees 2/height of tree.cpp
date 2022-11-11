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
int height(node *root)
{
    if(root==NULL)
        return 0;
    return max(height(root->left),height(root->right))+1;

}
int diameter(node *root)
{
    if(root==NULL)
    return 0;
    int lheight=height(root->left);
    int rheight=height(root->right);
    int ld=diameter(root->left);
    int rd=diameter(root->right);
    int cur=lheight+rheight+1;
    return max(cur,max(ld,rd));
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
    cout<<height(root);
    cout<<diameter(root);
}

