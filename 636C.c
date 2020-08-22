#include<stdio.h>

int main()

{
    long long int t,n,i,j,sum;

    scanf("%lld",&t);

    while(t--)
    {
        scanf("%lld",&n);

        long long int x[n],max=0,min=0,a=0,b=0;

        for(i=0;i<n;i++)
            scanf("%lld",&x[i]);

        sum=0;


        for(i=0;i<n;i++)
        {
            if(!max&&x[i]>0) {max=x[i]; a=1;  sum+=min;}

            else if(max&&x[i]>max) max=x[i];

            if(!min&&x[i]<0) {min=x[i]; a=0; sum+=max;}

            else if(min&&x[i]>min) min=x[i];

            if(a) min=0;
            else max=0;
        }

        if(a) sum+=max;
        else sum+=min;

        printf("%lld\n",sum);
    }

}

