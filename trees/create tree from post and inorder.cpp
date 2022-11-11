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
int search(int in[],int start,int end,int ele)
{
    for(int i=start;i<=end;i++)
    {
        if(in[i]==ele)
            return i;
    }
}
node *buildtree(int post[],int in[],int start, int end)
{
  static int idx=4;
  if(start>end)
    return NULL;
  int ele=post[idx];
  idx--;
  node *cur=new node(ele);
  if(start==end)
    return cur;
  int pos=search(in,start,end,ele);
  cur->left=buildtree(post,in,start,pos-1);
  cur->right=buildtree(post,in,pos+1,end);
  return cur;
}
void inorderprint(node *root)
{
    if(root!=NULL)
    {
        inorderprint(root->left);
        cout<<root->data<<" ";
        inorderprint(root->right);
    }
}
int main()
{
    int postorder[]={4,3,5,1,2};
    int inorder[]={4,2,1,5,3};
    node *root=buildtree(postorder,inorder,0,4);
    inorderprint(root);
}
