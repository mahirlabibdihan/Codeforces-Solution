#include <stdio.h>


int main()
{

long long int n,k,t;

scanf("%lld %lld %lld",&n,&k,&t);

if(t<=k) printf("%lld",t);

else if(t>=n) printf("%lld",n+k-t);

else printf("%d",k);

}

+-
 