#include<stdio.h>

int main()

{
    int n,i;

    scanf("%d",&n);

    int sum=n;

    for(i=0;i<=n;i++)
    sum=sum+i*(n-i);

    printf("%d",sum);
}
