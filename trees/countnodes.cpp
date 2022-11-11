#include<iostream>
using namespace std;
struct node{
int data;
node* left;
node* right;
node(int x)
{
    data=x;
    left=NULL;
    right=NULL;
}
};
int countnodes(node *root)
{
    if(root==NULL)
        return 0;
    return (countnodes(root->left)+countnodes(root->right)+1);
}
int sumofnodes(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return (sumofnodes(root->left)+sumofnodes(root->right)+root->data);
}
int heightree(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    return 1+max(heightree(root->left),heightree(root->right));
}
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
/*int calcdiam(node* root)
{
    if(root==NULL)
        return 0;
        int lheight=heightree(root->left);
        int rheight=heightree(root->right);
        int curdiam=lheight+rheight+1;
        int ld=calcdiam(root->left);
        int rd=calcdiam(root->right);
    return max(curdiam,max(ld,rd));
}*/
//second approach
int height(node *root,int &d)
{
    if(root==NULL)
        return 0;
        int lheight=height(root->left,d);
        int rheight=height(root->right,d);
        if(1+lheight+rheight>d)
            d=1+lheight+rheight;
        return 1+max(lheight,rheight);
}
int main()
{
    bool x=true;
    node *root=new node(1);
    root->left=new node(2);
    root->left->left=new node(4);
    root->left->left->left=new node(5);
    root->right=new node(3);
    root->right->left=new node(8);
    //root->left->right=new node(5);
    root->right->right=new node(7);
    int d=0;
    //cout<<countnodes(root)<<endl;
    //cout<<sumofnodes(root)<<endl;
    //cout<<heightree(root)<<endl;
    cout<<height(root,d);
    //print d for diameter;
    /*isbalancedheight(root,x);
    if(x)
        cout<<"tree is balanced"<<endl;
    else
        cout<<"tree is not balanced"<<endl;*/

}
