#include<stdio.h>

int main()

{
    long long int n,t,i,j,max=0;

    scanf("%lld %lld",&n,&t);

    long long int x[n],y[n];

    for(i=0;i<n;i++)
        {scanf("%lld %lld",&x[i],&y[i]);
        if(y[i]>t) x[i]-=(y[i]-t);
        if(x[i]>x[max]) max=i;}

    printf("%lld",x[max]);
}
