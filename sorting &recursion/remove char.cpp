#include<bits/stdc++.h>
using namespace std;
void remove(char input[],char target)
{
    if(strlen(input)==0)
    {
        return;
    }
    remove(input+1,target);
    if(input[0]==target)
    {
        int i=1;
        for(;input[i]!='\0';i++)
        {
            input[i-1]=input[i];
        }
        input[i-1]='\0';
    }
}
int main()
{
    char input[]="aaaabacaacad";
   remove(input,'a');
   puts(input);
}

