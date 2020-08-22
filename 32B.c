#include<stdio.h>
#include<string.h>

int main()

{
    char x[201];
    gets(x);
    int i,n=strlen(x);

    for(i=0;i<n;i++)
    {   if(x[i]=='.') printf("0");
        else if(x[i]=='-')
        {i++;if(x[i]=='.') printf("1");
            else printf("2");}}
}
