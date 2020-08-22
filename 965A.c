#include<stdio.h>
#include<math.h>

int main()

{
    int n,a,b,c,d;

scanf("%d %d %d %d",&n,&a,&b,&c);

d=ceil(1.0*((ceil(1.0*a/b))*n)/c);

printf("%d",d);
}

