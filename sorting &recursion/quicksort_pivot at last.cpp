#include <iostream>
using namespace std;
int c=0;
int partition(int a[], int l, int h)
{
        int pivot = a[h];
        int i = l;
        int j = h;
    while (i < j)
    {
        while (a[i] < pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if(i<j)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    c++;
          int temp=a[j];
            a[j]=pivot;
            pivot=temp;
            return j;

}
void quicksort(int a[],int l,int h)
{
    if(l<h)
    {
        int pivot=partition(a,l,h);
        quicksort(a,l,pivot-1);
        quicksort(a,pivot+1,h);
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quicksort(a,0,n-1);
     for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
      cout<<endl;
    cout<<" no of steps taken :"<<c;
}
