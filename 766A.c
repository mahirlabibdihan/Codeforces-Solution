#include<stdio.h>
#include<string.h>

int main()
{
    char x[100001],y[100001];

    gets(x); gets(y);

    int a=strlen(x),b=strlen(y),c;

    if(strcmp(x,y)) {c=(a>b)?a:b; printf("%d",c);}
    else printf("-1");
}
