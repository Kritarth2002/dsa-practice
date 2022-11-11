#include<bits/stdc++.h>
using namespace std;
void subsequences(string input,int i,string out,vector<string> &x)
{
    if(i==input.length())
    {
        x.push_back(out);
        return;
    }
    subsequences(input,i+1,out+input[i],x);
    subsequences(input,i+1,out,x);
}
int main()
{
    vector<string> x;
    string input="abc";
    string output="";
    string m="ac";
    subsequences(input,0,output,x);
    for(auto i:x)
    {
        if(i==m)
        {
            cout<<"yes found";
            break;

        }
        else
        {
            cout<<"not found"<<endl;
        }

    }
}
