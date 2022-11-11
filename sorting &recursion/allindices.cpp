#include<bits/stdc++.h>
using namespace std;
void findallind(int arr[],int i,vector <int> &out,int n,int target)
{
    int size;
    if(i==(n))
        return;
    if(arr[i]==target)
    {
        out.push_back(i);
    }
     findallind(arr,i+1,out,n,target);

}
int main()
{
    int arr[]={1,1,1,1,1,1,1,1,1,1};
    vector<int> out;
    findallind(arr,0,out,10,1);
    for(auto i:out)
    {
        cout<<i<<" ";
    }
}
