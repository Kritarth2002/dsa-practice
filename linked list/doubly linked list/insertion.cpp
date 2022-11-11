
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
void create(node *&head)
{
    node *temp=NULL;
    int n;
    cout<<"enter no of nodes"<<endl;
    cin>>n;
    int i=0;
    while(i<n)
    {
        i++;
        node *ptr=new node;
        cout<<"enter data"<<endl;
        cin>>ptr->data;
        ptr->next=NULL;
        ptr->prev=NULL;
        if(head==NULL)
        {
            head=ptr;
            temp=ptr;
        }
        else
        {
            temp->next=ptr;
            ptr->prev=temp;
            temp=ptr;
        }
    }
}
void display(node *&head)
{
    node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"<=>";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
}
void insertatbeg(node *&head)
{
    node *temp=head;
    node *ptr=new node;
    cout<<"enter data of node to be inserted"<<endl;
    cin>>ptr->data;
    ptr->next=NULL;
    ptr->prev=NULL;
    head->prev=ptr;
    ptr->next=head;
    head=ptr;

}
void insertatend(node *&head)
{
    node *temp=head;
    node *ptr=new node;
    cout<<"enter data of node to be inserted"<<endl;
    cin>>ptr->data;
    ptr->next=NULL;
    ptr->prev=NULL;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->prev=temp;
}
void insertatpos(node *&head)
{
    node *temp=head;
    node *ptr=new node;
    cout<<"enter data of node to be inserted"<<endl;
    cin>>ptr->data;
    ptr->next=NULL;
    ptr->prev=NULL;
    int i=1;
    int pos;
    cout<<"enter pos"<<endl;
    cin>>pos;
    while(i<pos-1)
    {
        temp=temp->next;
        i++;
    }
    ptr->prev=temp;
    ptr->next=temp->next;
    temp->next=ptr;
    ptr->next->prev=ptr;
}
int main()
{
    node *head=NULL;
    create(head);
    display(head);
    insertatpos(head);
    display(head);
}


