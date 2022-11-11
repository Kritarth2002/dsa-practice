//if we want to print the subset whose sum is sum then
/*#include<bits/stdc++.h>
using namespace std;
void printf(int input[],vector<int> &ds,int idx,int size,int sum,int k)
{
    if(idx==size)
    {
        if(sum==k)
        {

            for(auto i:ds)
            {
                cout<<i<<" ";
            }
            cout<<endl;

        }
            return;
    }
    printf(input,ds,idx+1,size,sum,k);
    ds.push_back(input[idx]);
    sum=sum+input[idx];
    printf(input,ds,idx+1,size,sum,k);
    ds.pop_back();
    sum=sum-input[idx];
}
int main()
{
    int input[]= {2,4,4,3,1 };
    int size=sizeof(input)/sizeof(input[0]);
    vector<int> ds;
    printf(input,ds,0,size,0,5);
}*/

/*#include<bits/stdc++.h>
using namespace std;
bool printf(int input[],vector<int> &ds,int idx,int size,int sum,int k)
{
    if(idx==size)
    {
        if(sum==k)
        {
            for(auto i:ds)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            return true;
        }
        else
            return false;
    }
    ds.push_back(input[idx]);
    sum=sum+input[idx];
    if(printf(input,ds,idx+1,size,sum,k)==true)
        return true;
    ds.pop_back();
    sum=sum-input[idx];
    if(printf(input,ds,idx+1,size,sum,k)==true)
        return true;
    return false;
}
int main()
{
    int input[]= {1,2,1};
    int size=sizeof(input)/sizeof(input[0]);
    vector<int> ds;
    printf(input,ds,0,size,0,2);
}*/
//if count is to be returned
#include<bits/stdc++.h>
using namespace std;
int printf(int input[],int idx,int size,int sum,int k)
{
    if(idx==size)
    {
        if(sum==k)
        {
            return 1;
        }
        return 0;
    }

   int l= printf(input,idx+1,size,sum+input[idx],k);

    int r=printf(input,idx+1,size,sum,k);
    return l+r;
}
int main()
{
    int input[]= {2,4,4,3,1};
    int size=sizeof(input)/sizeof(input[0]);

    cout<<printf(input,0,size,0,5);
}

