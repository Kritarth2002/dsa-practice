#include<iostream>
using namespace std;
struct node{
int data;
node *left;
node *right;

node (int x)
{
    data=x;
    left=NULL;
    right=NULL;
}
};

int search(int inorder[],int start,int end,int cur)
{
    for(int i=start;i<=end;i++)
    {
        if(cur==inorder[i])
            return i;
    }
}
void inorder_print(node *root)
{
    if(root!=NULL)
    {
        inorder_print(root->left);
        cout<<root->data<<" ";
        inorder_print(root->right);
    }
}
     int idx=0;
node* buildtree(int preorder[],int inorder[],int start,int end)
{

    if(start>end)
        return NULL;
    int ele=preorder[idx];
    idx++;
    node *ptr=new node(ele);
    if(start==end)
        return ptr;
    int pos=search(inorder,start,end,ele);
    ptr->left=buildtree(preorder,inorder,start,pos-1);
    ptr->right=buildtree(preorder,inorder,pos+1,end);
    return ptr;
}
int main()
{

  int inorder[]={4,2,6,5,3};
  int preorder[]={6,2,4,3,5};
  node *root=buildtree(preorder,inorder,0,4);
  inorder_print(root);
}

