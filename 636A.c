#include<stdio.h>
#include<math.h>

int main()

{
    long long int t,n,i,a;

    scanf("%lld",&t);

    while(t--)

    {scanf("%lld",&n);

    for(i=2;pow(2,i)-1<=n;i++)
    {
      a=pow(2,i)-1;
      if(!(n%a)) {n/=a; break;}
    }

    printf("%lld\n",n);}
}
