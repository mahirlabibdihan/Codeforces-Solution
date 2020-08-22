#include<stdio.h>
#include<string.h>

int main()

{
    char x[11],y[11];

    scanf("%s %s",x,y);

    int a=strlen(x),b=strlen(y),i,j;

    for(j=1;j<a;j++)
        if(x[j]>=y[0]) break;

    for(i=0;i<j;i++)
        printf("%c",x[i]);
    printf("%c",y[0]);
}
