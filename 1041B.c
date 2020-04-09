#include<stdio.h>

int main()

{
    long long int a,b,c,d,e,x,y,i,j,z,p,q,r;

    scanf("%lld %lld %lld %lld",&a,&b,&x,&y);

    c=x;
    d=y;

    while(c%d)
    {
       e=c%d;
       c=d;
       d=e;
    }


    x=x/d;
    y=y/d;

    p=a/x;
    q=b/y;

    r=(p<q)?p:q;

    printf("%lld",r);
}
