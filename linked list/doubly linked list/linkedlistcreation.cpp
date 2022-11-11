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
int main()
{
    node *head=NULL;
    create(head);
    display(head);
}
