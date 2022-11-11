#include<bits/stdc++.h>
using namespace std;
void permute(string s,int l,int r)
{
    if(l==r)
    {
        cout<<s<<endl;
        return;
    }
    for(int i=l;i<=r;i++)
    {
        swap(s[i],s[l]);
        permute(s,l+1,r);
        swap(s[i],s[l]);
    }
}
int main()
{
    string input="abc";
    permute(input,0,input.length()-1);
}
