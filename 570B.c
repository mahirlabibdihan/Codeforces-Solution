#include<stdio.h>

int main()
{
    int n,m,a;

    scanf("%d %d",&n,&m);

    if(m>n/2&&n>1) a=m-1; else if(n>1) a=m+1; else a=m;
    printf("%d",a);
}
