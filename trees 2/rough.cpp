#include<iostream>
using namespace std;

int lastIndex(int arr[], int idx, int x, int n){
    // write your code here
    if(idx<0)
    return -1;
    if(arr[idx]==x)
    {
        return idx;
    }
    else
    return lastIndex(arr,idx-1,x,n);

}
int allIndex(int arr[], int idx, int x, int n){
    // write your code here
    if(idx==n)
    return -1;
    if(arr[idx]==x)
    {
        return idx;
    }
    else
    return allIndex(arr,idx-1,x,n);

}
int main()
{
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
    int p = allIndex(arr, 0, d, n);
    cout << p << endl;
}
