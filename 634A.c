#include<stdio.h>

int main()

{
    int t;
    long long int n;

    scanf("%d",&t);

    while(t--)
    {
       scanf("%lld",&n);

       (n%2)?printf("%lld\n",(n-1)/2):printf("%lld\n",(n/2)-1);

    }
}
