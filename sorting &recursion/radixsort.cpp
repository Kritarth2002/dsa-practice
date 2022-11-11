#include<iostream>
using namespace std;
void countsort(int a[],int n,int pos);
void radixsort(int a[],int n)
{
    int k=a[0];
    for(int i=0;i<n;i++)
    {
        k=max(k,a[i]);
    }
    for (int pos=1;k,pos>0;pos=pos*10)
    {
        /* code */
        countsort(a,n,pos);
    }

}
void countsort(int a[],int n,int pos)
{
    int count[10]={0};
    int b[n];
    for(int i=0;i<n;i++)
    {
        count[(a[i]/pos)%10]++;
    }
    //cf
    for(int i=1;i<10;i++)
    {
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--)
    {
              b[--count[(a[i]/pos)%10] ]   =a[i];
    }
    for (int i = 0; i < n; i++)
    {
        a[i]=b[i];
    }

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    radixsort(a,n);
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }


}
