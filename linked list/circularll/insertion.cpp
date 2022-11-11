
#include<iostream>
using namespace std;
    int n;
struct node
{
    int data;
    node *next;
};
void create(node *&head)
{
    node *ptr=head;
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
        temp->next=head;
        i++;
    }

}
void display(node *&head)
{
    node *temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
    cout<<endl;
}
void insertatbeg(node *&head)
{
    node *temp=head;
    node *ptr=new node;
    cout<<"enter value of node to be inserted"<<endl;
    cin>>ptr->data;
    ptr->next=NULL;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    ptr->next=head;
    temp->next=ptr;
    head=ptr;

}
void insertatend(node *&head);
void insertatpos(node *&head)
{
    node *temp=head;

    int i=1;
    int pos;
    cout<<"enter pos"<<endl;
    cin>>pos;
    if(pos==1)
    {
        insertatbeg(head);
    }
    else if(pos==n)
        insertatend(head);
    else
    {
node *ptr=new node;
    cout<<"enter value of node to be inserted"<<endl;
    cin>>ptr->data;
    ptr->next=NULL;
    while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        ptr->next=temp->next;
        temp->next=ptr;
    }


}
void insertatend(node *&head)
{
    node *temp=head;
    node *ptr=new node;
    cout<<"enter value of node to be inserted"<<endl;
    cin>>ptr->data;
    ptr->next=NULL;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->next=head;
}
int main()
{
    node *head=NULL;
    create(head);
    display(head);
    insertatpos(head);
    display(head);
}
