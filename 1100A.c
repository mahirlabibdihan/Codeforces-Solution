#include<stdio.h>

int main()

{
    int n,k,i,j,a,max;

    scanf("%d %d",&n,&k);

    int x[n],y[k];

    for(i=0; i<n; i++)

        scanf("%d",&x[i]);

    for(i=0; i<k; i++)
    {   a=0;
        y[i]=0;

        for(j=0; j<n; j++)
        { if(j==i+a*k) a++;
           else y[i]=y[i]+x[j];
        }

        if(y[i]<0) y[i]=-1*y[i];
    }

    max=y[0];
    for(i=1; i<k; i++)
    {
        if(y[i]>max) max=y[i];
    }
    printf("%d",max);
}

