#include<stdio.h>
#include<math.h>

int main()

{
    long long int t,a,b,i,c;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld %lld",&a,&b);

        for(i=1;;i++)
        {c=ceil(1.0*(pow(10,i)-1));
        if(c>b) break;}

        printf("%lld\n",a*(i-1));
    }
}
