#include<stdio.h>
#include<math.h>

int main()
{
    int n,x,y,d,t;

    scanf("%d",&t);

    while(t--)

    {scanf("%d %d %d %d",&n,&x,&y,&d);

    int a=abs(x-y),b=0,c=0;

    if(y==n||y==1) printf("%.0f\n",ceil(1.0*a/d));
    else if(!(a%d)) printf("%d\n",a/d);
    else
        {if(!((n-y)%d)) b=ceil(1.0*(n-x)/d)+((n-y)/d);
         if(!((y-1)%d)) c=ceil(1.0*(x-1)/d)+((y-1)/d);

    if(b&&c){a=(b<c)?b:c; printf("%d\n",a);}
    else if(b) printf("%d\n",b);
    else if(c) printf("%d\n",c);
    else printf("-1\n");}
}
}
