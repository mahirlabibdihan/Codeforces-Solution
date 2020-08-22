#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,n,i,j;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d\n",&n);

        char x[n+1];

        gets(x);

        for(i=0,j=n-1;i<n/2;i++,j--)
        if(abs(x[i]-x[j])>2||abs(x[i]-x[j])==1) break;

        if(i==n/2) printf("YES\n"); else printf("NO\n");
    }
}
