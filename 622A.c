#include<stdio.h>

int main()

{
    long long int n,a,s=0,i;

    scanf("%lld",&n);

    for(i=0;s+i<n;i++) s+=i;

    printf("%lld",n-(i*(i-1)/2));

}
