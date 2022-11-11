#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int o=0,e=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (a[i]%2!=0)
        {
            o++;
        }
        else
         e++;
        
    }
    int a1[o],a2[e];
    int j=0,k=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
        a1[j]=a[i];
        j++;
        }
        else
        {
        a2[k]=a[i];
        k++;
        }
    }
    for (int i = 0; i <o;   i++)
    {
        /* code */
        for(int j=i+1;j<o;j++)
        {
            if(a1[i]<a1[j])
            {
                int temp=a1[j];
                a1[j]=a1[i];
                a1[i]=temp;
            }
        }
    }
    for (int i = 0; i <o;   i++)
    {
        /* code */
        for(int j=i+1;j<o;j++)
        {
            if(a2[i]>a2[j])
            {
                int temp=a2[j];
                a2[j]=a2[i];
                a2[i]=temp;
            }
        }
    }
    
    for (int i = 0; i < o; i++)
    {
        /* code */
        cout<<a1[i]<<" ";
    }
    cout<<endl;
    for (int i = 0; i < e; i++)
    {
        /* code */
        cout<<a2[i]<<" "; 
    }
    for(int i=0;i<o;i++)
    {
        a[i]=a1[i];
    }
    for(int i=o;i<n;i++)
    {
        a[i]=a2[i-o];
    }
    cout<<endl;
     for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<a[i]<<" "; 
    }
    
}   
    

