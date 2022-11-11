#include<bits/stdc++.h>
using namespace std;
struct node()
{
    node *left;
    node *right;
    int data;
};

void delete(node *root)
{
    node *temp=new node();
    while(root!=NULL)
{
    while(root->left!=NULL && root->right!=NULL)
    {
        root=root->left;
    }
}}
int main()
{
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);
}
