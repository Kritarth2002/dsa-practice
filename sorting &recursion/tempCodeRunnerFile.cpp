#include<bits/stdc++.h>
using namespace std;
string reverse(string input)
{
    if(input.length()==0)
    {
        return "";
    }
    char ch=input[0];
    string ans=reverse(input.substr(1));
    return ans+ch;
}
int main()
{
    string ans=reverse("binod");
    cout<<ans;
    return 0;
}
