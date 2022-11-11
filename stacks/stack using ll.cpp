#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
void push(node *&top)
{
    node *temp=new node;
    cout<<"enter data"<<endl;
    cin>>temp->data;
    temp->next=top;
    top=temp;
}
void pop(node *&top)
{
    node *ptr=top;
    if(top==NULL)
    {
        cout<<"stack is empty"<<endl;
    }
    cout<<"popped item is "<<top->data;
    top=top->next;
    delete ptr;
}
void Top(node *&top)
{
    if(top==NULL)
    {
        cout<<"stack is empty"<<endl;
    }
    else
        cout<<"the top item is "<<top->data<<endl;
}
void display(node *&top)
{
    node *ptr=top;
    while(ptr->next!=NULL)
    {
        cout<<"|"<<ptr->data<<"|"<<endl;
        ptr=ptr->next;
    }
}
void isempty(node *&top)
{
    if(top==NULL)
    {
        cout<<"stack is empty"<<endl;
    }
}
int main()
{
    node *top=NULL;
    int ch=0;
    do
    {
        cout<<"enter your choice"<<endl<<"1.Push"<<endl<<"2.pop"<<endl<<"3.top"<<endl<<"4.display"<<endl<<"5.empty"<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
            push(top);
            break;
        case 2:
            pop(top);
            break;
        case 3:
            Top(top);
            break;
        case 4:
            display(top);
            break;
        case 5:
            isempty(top);
            break;
        default:
        {
            cout<<"invalid choice"<<endl;
        }
       }
    }while(1);


}
