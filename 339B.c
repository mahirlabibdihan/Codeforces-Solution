#include<stdio.h>4

int main()

{ long long int n,m,i,sum=0;

scanf("%lld %lld",&n,&m);

int x[m];

for(i=0;i<m;i++)
{
    scanf("%lld",&x[i]);

    if(!i) sum=sum+x[i]-1;

    else if(x[i]>x[i-1])  sum=sum+x[i]-x[i-1];

    else if(x[i]==x[i-1]) sum=sum;

    else if(x[i]<x[i-1]) sum=sum+n-x[i-1]+x[i];
}

 printf("%lld",sum);
}
