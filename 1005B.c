#include<stdio.h>
#include<string.h>

int main()
{
    char x[200001],y[200001];

    gets(x); gets(y);

    int a=strlen(x),b=strlen(y),i;

    for(i=1;i<=a&&i<=b;i++) if(x[a-i]!=y[b-i]) break;

    printf("%d",a+b-2*(i-1));
}
