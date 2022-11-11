#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};
    int n;
void create(node *&head)
{
    node *temp=NULL;
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
void delatbeg(node *&head)
{
    node *ptr=head;
    head=head->next;
    head->prev=NULL;
    delete ptr;
}
void delatend(node *&head)
{
    node *ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->prev->next=NULL;
    delete ptr;

}
void delatpos(node *&head)
{
    node *ptr=head;
    int pos;
    cout<<"enter pos"<<endl;
    cin>>pos;
    if(pos==1)
    {
        delatbeg(head);
    }
    else if(pos==n)
        delatend(head);
    else{

    int i=1;
    while(i<pos)
    {
        ptr=ptr->next;
        i++;
    }
    ptr->prev->next=ptr->next;
    ptr->next->prev=ptr->prev;
    }
    delete ptr;
}
int main()
{
    node *head=NULL;
    create(head);
    display(head);
    delatpos(head);
    display(head);


}
