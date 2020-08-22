#include<stdio.h>

int main()

{
    char x[1000000];
    int i,j;

    gets(x);

    for(i=0;i<strlen(x);i++)
    {
        printf("%c",x[i]);
    }

    for(j=i-1;j>=0;j--)
    {
        printf("%c",x[j]);
    }

}
