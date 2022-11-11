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

int isbalancedheight(node *root,bool &x)
{
    if(root==NULL)
        return 0;
        int lheight=isbalancedheight(root->left,x);
        int rheight=isbalancedheight(root->right,x);
        if(abs(lheight-rheight)>1)
        x=false;

    return max(lheight,rheight)+1;

}
int main()
{
    bool x=true;
    node* root = new node(1);
    root->left = new node(2);
   // root->right = new node(3);
    root->left->left = new node(4);
   // root->left->right = new node(5);
    root->left->left->left = new node(8);
    isbalancedheight(root,x);
    if(x)
        cout<<"balanced";
    else
        cout<<"not balanced";

    //cout<<countnodes(root);
}

