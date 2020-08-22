#include<stdio.h>

int main()
{
    int t,n,i;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        int x[n],y[n],z[n],a=0;

        for(i=0;i<n;i++)
            {scanf("%1d",&x[i]);
            if(!x[i]) {y[i]=0; z[i]=0;}
            else  { y[i]=1; z[i]=0; if(x[i]>1) z[i]=1;} }

        for(i=0;i<n;i++)
        {
            if(y[i]&&!z[i]&&!a) a=1;
            else if(a&&y[i]) {y[i]--; z[i]++;}
        }

    for(i=0;i<n;i++) printf("%d",y[i]); printf("\n");
    for(i=0;i<n;i++) printf("%d",z[i]); printf("\n");
}
}
