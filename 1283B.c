#include<stdio.h>


    int main()

    {
        int t;

        scanf("%d",&t);

        while(t--)
        { long long int n,k;
            scanf("%lld %lld",&n,&k);
           if(n%k>k/2)
            printf("%lld\n",n-(n%k)+(k/2));
           else
            printf("%lld\n",n);
        }
    }

