#include<iostream>
using namespace std;
struct node{
int data;
node *next;
};
void enqueue(node *&head,node *&tail)
{
    node *ptr=new node;
    cout<<"enter data"<<endl;
    cin>>ptr->data;
    ptr->next=NULL;
    if(head == NULL && tail ==NULL)
    {
        head=ptr;
        tail=ptr;
    }
    else
    {
        tail->next=ptr;
        tail=ptr;
    }
}
void dequeue(node *&head,node *&tail)
{
    node *ptr=head;
    if(head==NULL && tail==NULL)
    {
        cout<<"queue is empty"<<endl;
    }
    else{
            cout<<"the dequeued item is "<<head->data;
        head=head->next;
        delete ptr;
    }
}
void peek(node *head)
{
    if(head==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else{
        cout<<"the peek element is"<<head->data<<endl;
    }
}
void display(node *&head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    node *head=NULL,*tail=NULL;
     do
    {
        int ch=0;
        cout<<"enter your choice"<<endl;
        cout<<"1-enqueue"<<endl<<"2-dequeue"<<endl<<"3-peek"<<endl<<"4-display"<<endl<<"5-exit"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            enqueue(head,tail);
            break;
        case 2:
            dequeue(head,tail);
            break;
        case 3:
            peek(head);
            break;
        case 4:
            display(head);
            break;
        default:
           // getch();
            return 0;
            break;
        }
    }while(1);
}
