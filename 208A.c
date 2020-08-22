#include<stdio.h>
#include<string.h>

int main()
{
    char x[201];

    gets(x); int i,n=strlen(x),a=1;

    for(i=0;i<n;i++)
    {
        if(x[i]=='W'&&x[i+1]=='U'&&x[i+2]=='B')  {if(i&&a) printf(" "); i+=2; a=0;}
        else {printf("%c",x[i]); a=1;}
    }
}
