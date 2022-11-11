#include <iostream>

using namespace std;
void reverseStringWordWise(char input[])
{
    // Write your code here
    int len=0;
    for(int i=0; input[i]; i++)
    {
        len++;
    }
    int i=0;
    int j=len-1;
    while(i<j)
    {
        char temp=input[j];
        input[j]=input[i];
        input[i]=temp;
        i++;
        j--;
    }


    i=0;
    int start;
    int en;
    while(input[i] != '\0')
    {
        start=i;
        while(input[i] != ' ' )
        {
            i++;
        }
        en=i-1;
        i++;
        while(start<en)
        {
            //swapping the characters at start and end
            char temp=input[start];
            input[start]=input[en];
            input[en]=temp ;
            start++;
            en--;

        }

    }
// repeating the process for the last unprocessed word
    en=i-2;
    while(start<en)
    {
        //swapping the characters at start and end
        char temp=input[start];
        input[start]=input[en];
        input[en]=temp ;
        start++;
        en--;
    }
}
int main()
{
    char input[1000];
    cin.getline(input, 1000);
    reverseStringWordWise(input);
    cout << input << endl;
}
