#include<iostream>
#include<string.h>
using namespace std;


void reverseit(char *s, int i, int j)
{
    if(i<j)
    {
        char c;
        c = s[i];
        s[i] = s[j];
        s[j] = c;
        reverseit(s,i+1,j-1);
    }
    else{
        puts(s);
    }
    
}

int main()
{   
    char *s;
    cout<<"Enter string to reverse: ";
    gets(s);
    //cout<<strlen(s);
    reverseit(s, 0, strlen(s)-1 );
    return 0;
}