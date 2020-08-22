#include<stdio.h>

int main()
{
    int n,i,a=0,b=0; char x[101];

    scanf("%d %s",&n,x);

    for(i=0;i<n;i++)
    {if(x[i]=='0') a++; else b++;}

    if(a==b) {printf("2\n%c ",x[0]); for(i=1;i<n;i++) printf("%c",x[i]);}
    else printf("1\n%s",x);
}

