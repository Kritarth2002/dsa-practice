#include<iostream>
using namespace std;
struct node{
int data;
node *next;
};
void createlist(node *&head)
{
    node *ptr=NULL;
    int n;
    cout<<"enter no of nodes"<<endl;
    cin>>n;
    int i=0;
    while(i<n)
    {
        node *temp=new node;
        cout<<"enter data"<<endl;
        cin>>temp->data;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            ptr=temp;
        }
        else
        {
            ptr->next=temp;
            ptr=temp;
        }
        i++;
    }
}
int length(node *head)
{
    int i=0;
    node *ptr=head;
    while(ptr!=NULL)
    {
        i++;
        ptr=ptr->next;
    }
    return i;
}
int main()
{
    node *head=NULL;;
    createlist(head);
    cout<<length(head);
}
