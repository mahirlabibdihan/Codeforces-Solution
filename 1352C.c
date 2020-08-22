#include<stdio.h>

int main()
{
    int t,n,i,j,k;

    scanf("%d",&t);

    while(t--)
    {
        int a,b=0;

        scanf("%d %d",&n,&k);

        while(1) { a=k/n; k+=a-b; if(a==b) break; b=a; }

        printf("%d\n",k);
    }
}
