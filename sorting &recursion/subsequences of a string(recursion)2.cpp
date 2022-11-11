#include<bits/stdc++.h>
using namespace std;
void subsequences(string input,int i,string out)
{
    if(i==input.length())
    {
        cout<<out<<endl;
        return;
    }
    subsequences(input,i+1,out+input[i]);
    subsequences(input,i+1,out);
}
int main()
{
    string input="abc";
    string output="";
    subsequences(input,0,output);
}
