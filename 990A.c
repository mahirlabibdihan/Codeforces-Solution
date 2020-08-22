#include<stdio.h>

int main()

{
    long long int n,m,a,b,c,d;

    scanf("%lld %lld %lld %lld",&n,&m,&a,&b);

    d=(n%m)*b;

    c=(((ceil(1.0*n/m))*m)-n)*a;

    (c<d)?printf("%lld",c):printf("%lld",d);
}
