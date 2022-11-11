#include<iostream>
using namespace std;
void countsort(int a[],int n)
{
    int k=a[0];
    for(int i=0;i<n;i++)
    {
        k=max(k,a[i]);
    }
    int count[k+1]={0};
    for(int i=0;i<n;i++)
    {
        count[a[i]]++;
    }
    for(int i=1;i<k+1;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    int b[n];
    for(int i=n-1;i>=0;i--)
    {
        b[--count[a[i]]]=a[i];
    }
    for(int i=0;i<n;i++)
    {
        a[i]=b[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    countsort(a,n);
    return 0;
}
