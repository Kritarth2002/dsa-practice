#include<iostream>
using namespace std;
struct node{
int data;
node *left;
node *right;


};
node* insert(int data)
{
    node *root=new node;
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return root;
}
node* data(node *&root)
{5
    int data;
    cout<<"enter data"<<endl;
    cin>>data;
    if(root==NULL)
        insert(data);
    else if(root->left==NULL)
    root->left=insert(data);
     if(root->right==NULL)
         cout<<"enter data"<<endl;
    cin>>data;
    root->right=insert(data);
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
    node *root=insert(5);
    data(root);
    inorderprint(root);

}
