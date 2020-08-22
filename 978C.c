#include<stdio.h>

int main()

{
    int n,m,i,j,a=1;

    scanf("%d %d",&n,&m);

    long long int x[n+1],y[m]; x[0]=0;

    for(i=1;i<=n;i++)
    {
        scanf("%lld",&x[i]);
        x[i]+=x[i-1];
    }

    for(i=0;i<m;i++)
    {
        scanf("%lld",&y[i]);

        for(j=a;y[i]>x[j];j++);  a=j;

        printf("%d %lld\n",a,y[i]-x[j-1]);
    }
}
