#include<stdio.h>

int main()

{
    long long int n,i,sum=0,j,max=0;

    scanf("%lld",&n);

    long long int x[n];

    for(i=0;i<n;i++)
    {scanf("%lld",&x[i]);
    if(x[i]>x[max]) max=i;
    sum=sum+x[i];}

    j=ceil(1.0*sum/(n-1));

    (x[max]>j)?printf("%lld",x[max]):printf("%lld",j);

}
