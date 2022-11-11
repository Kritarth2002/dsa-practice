#include<iostream>
#include<cstring>
using namespace std;
int subsequences(string arr,string output[]){
    if(arr.length()==0)
    {
        output[0]="";
        return 1;\
    }
    int smallout=subsequences(arr.substr(1),output);
    for(int i=0;i<smallout;i++)
    {
        output[i+smallout]=arr[0]+output[i];
    }
    return 2*smallout;
}
int main()
{

    string output[1000];
    int outsize=subsequences("abcd",output);
    for(int i=0;outsize;i++)
        cout<<output[i]<<endl;
    return 0;
}
