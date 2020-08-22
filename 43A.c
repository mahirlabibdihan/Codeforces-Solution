#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j;

    scanf("%d",&n);

    char x[n][11],a[11],b[11],c=0,s=0;

    for(i=0;i<n;i++)
        scanf("%s",&x[i][0]);

    strcpy(a,x[0]);

    for(i=0;i<n;i++)
    { j=strcmp(a,x[i]);
        if(j) strcpy(b,x[i]); }

    for(i=0;i<n;i++)
    {   j=strcmp(a,x[i]);
        if(j) s++; else c++; }

    if(s>c) puts(b);
    else puts(a);
}
