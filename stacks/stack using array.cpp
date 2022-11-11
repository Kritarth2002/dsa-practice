#include<iostream>
using namespace std;
#define n 5
int stack[n];
int top=-1;
void push()
{
    if(top==n-1)
    {
        cout<<"stack overflow"<<endl;
    }
    else
    {
        int data;
        cout<<"enter data to be pushed"<<endl;
        cin>>data;
        ++top;
        stack[top]=data;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        cout<<"popped item is "<<stack[top]<<endl;
        top--;
    }
}
void Top()
{
   if(top==-1)
    {
        cout<<"stack underflow"<<endl;
    }
    else
    {
        cout<<"top item is "<<stack[top]<<endl;
    }
}
void display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<"|"<<stack[i]<<"|"<<endl;
    }
}
void isempty()
{
    if(top==-1)
        cout<<"stack is empty"<<endl;
}
void isfull()
{
    if(top==(n-1))
    cout<<"stack is full"<<endl;

}
int main()
{
    int ch=0;
    do{
        cout<<"enter your choice"<<endl<<"1.Push"<<endl<<"2.pop"<<endl<<"3.top"<<endl<<"4.display"<<endl<<"5.empty"<<endl<<"6.full"<<endl;
    cin>>ch;
    switch(ch)
    {
    case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        Top();
        break;
        case 4:
        display();
        break;
        case 5:
        isempty();
        break;
        case 6:
        isfull();
        break;
        default:
            {
        cout<<"invalid choice"<<endl;
                break;
            }

    }
    }while(1);

}
