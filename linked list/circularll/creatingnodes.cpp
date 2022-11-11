#include<iostream>
using namespace std;
struct node{
int data;
node *next;
};
void create(node *&head)
{
    node *ptr=head;
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
}
int main()
{
    node *head=NULL;
    create(head);
    display(head);
}
