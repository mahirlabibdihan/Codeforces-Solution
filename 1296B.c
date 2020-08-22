#include<stdio.h>

int main()

{int n;
    unsigned long long int a,x;

    scanf("%d",&n);

    while(n--)

    {
        scanf("%llu",&a);

        x=(10*a)/9;



        (a%9)?printf("%llu\n",x):printf("%llu\n",x-1);
    }
}
