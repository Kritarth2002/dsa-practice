#include<iostream>
#include<cstring>
using namespace std;
string movex(string input)
{
    if(input.length()==0)
        return "";
    char ch=input[0];
    string ans=movex(input.substr(1));
    if(ch=='x')
        return ans+ch;
    else
        return ch+ans;
}

int main()
{
    string c=movex("axxbdxcefxhix");
    cout<<c;
    return 0;
}
