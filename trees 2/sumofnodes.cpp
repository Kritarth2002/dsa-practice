
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
int sumofnodes(node *root)
{
    if(root==NULL)
        return 0;
    return (sumofnodes(root->left)+sumofnodes(root->right)+root->data);

}

int main()
{
    node *root=new node(1);
    root->left=new node (2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->left=new node(6);
    root->right->right=new node(7);

    cout<<sumofnodes(root);
}

