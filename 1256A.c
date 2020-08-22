#include<stdio.h>

int main()
{
    int t,a,b,n,s,i,j;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d %d %d",&a,&b,&n,&s);

        i=s/n;
        j=s%n;

        if(a>=i);
        else j=j+3*(i-a);

        if(b>=j) printf("YES\n");

        else printf("NO\n");

        }
    }

