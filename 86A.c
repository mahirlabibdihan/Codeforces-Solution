#include<stdio.h>
#include<stdlib.h>

int main()

{
    long long int t,x,y,i,j,c,a,b,d,sum;

    scanf("%lld",&t);

    while(t--)

    { sum=0;
        scanf("%lld %lld %lld %lld",&x,&y,&a,&b);

    if(!x&&!y) ;
    else if((x>0&&y>0)||(x<0&&y<0))
    {
        x=abs(x); y=abs(y);
        c=(x<y)?x:y;
        d=(x>y)?x:y;

        if(2*a>=b) sum+=(c*b)+((d-c)*a);
        else  sum+=(x+y)*a;
    }

        else
    {
       x=abs(x); y=abs(y);
        sum+=(x+y)*a;
    }

    printf("%lld\n",sum);
}
}
