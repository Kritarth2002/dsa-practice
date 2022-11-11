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
void reverselist(node *&head)
{
    node *pre,*cur,*nxt;
    pre=NULL;
    cur=head;
    nxt=head;
    while(nxt!=NULL)
    {
        nxt=nxt->next;
        cur->next=pre;
        pre=cur;
        cur=nxt;
    }
    head=pre;
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
    node *head=NULL;;
    createlist(head);
    printlist(head);
    reverselist(head);
    printlist(head);

}
