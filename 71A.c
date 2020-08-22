#include<stdio.h>
#include<string.h>

int main()
{
    int t,n;

    scanf("%d\n",&t);

    while(t--)
    {
        char x[101];

        gets(x);

        n=strlen(x);

        if(n>10) printf("%c%d%c\n",x[0],n-2,x[n-1]);

        else puts(x);

    }
}
