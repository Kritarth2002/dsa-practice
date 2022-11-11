#include<iostream>
using namespace std;
    int n;
struct node{
int data;
node *next;
};
void create(node *&head)
{
    node *temp=head;
    cout<<"enter no of nodes"<<endl;
    cin>>n;
    int i=0;
    while(i<n)
    {
        node *ptr=new node;
        cout<<"enter data"<<endl;
        cin>>ptr->data;
        ptr->next=NULL;
        if(head==NULL)
        {
            head=ptr;
            temp=ptr;
        }
        else
        {
            temp->next=ptr;
            temp=ptr;
        }
        i++;
    }
        temp->next=head;


}
void delatbeg(node *&head)
{
    node *temp=head;
    node *ptr=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=head->next;
    head=head->next;
    delete ptr;
}
void delatend(node *&head)
{
    node *temp=head;
    while(temp->next->next!=head)
    {
        temp=temp->next;
    }
    node *ptr=temp->next;
    temp->next=head;
    delete ptr;

}
void delatpos(node *&head)
{
    node *temp=head;
    node *ptr=head;
    int pos;
    cout<<"enter pos"<<endl;
    cin>>pos;
    if(pos==1)
    {
        delatbeg(head);
    }
    else if(pos==n)
    {
        delatend(head);
    }
    else{
            int i=1;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        ptr=temp->next;
        temp->next=ptr->next;
        delete ptr;
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
    cout<<temp->data<<endl;
}
int main()
{
    node *head=NULL;
    create(head);
    display(head);
    delatpos(head);
    display(head);
}
