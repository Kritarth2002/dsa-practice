#include<iostream>
using namespace std;
struct node
{
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
void delatbeg(node *&head)
{
    node *temp=head;
    head=head->next;
    delete temp;
}
void delatend(node *&head)
{
    node *temp=head;
    node *ptr=NULL;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    ptr=temp->next;
    temp->next=NULL;
    delete ptr;
}
void delatpos(node *&head)
{
    node *temp=head;
    node *ptr=NULL;
    int pos;
    cout<<"enter pos you wanna del"<<endl;
    cin>>pos;
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
void printlist(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node *head=NULL;
    createlist(head);
    printlist(head);
    delatpos(head);
    printlist(head);

}
