#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of balls"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s=0,d=0,f=0,sx=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            s++;
        }
        else if(a[i]==2)
        d++;
        else if(a[i]==4)
        f++;
        else 
        sx++;
    }
    cout<<"singles"<<" "<<s<<endl;
    cout<<"doubles"<<" "<<d<<endl;
    cout<<"fours"<<" "<<f<<endl;
    cout<<"six"<<" "<<sx<<endl;
for (int i = 0; i <n;   i++)
    {
        /* code */
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    cout<<"BL_no."<<"|"<<"Score"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<i<<"\t|"<<a[i]<<" "<<endl;
    }
    
    
}