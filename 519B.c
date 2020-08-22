#include<stdio.h>

int main()

{
    int n,a=0,b=0,c=0,i;
    scanf("%d",&n);

    int x[n],y[n-1],z[n-2];

    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);

        a=a+x[i];
    }

     for(i=0;i<n-1;i++)
    {
        scanf("%d",&y[i]);

        b=b+y[i];
    }

     for(i=0;i<n-2;i++)
    {
        scanf("%d",&z[i]);

        c=c+z[i];
    }

    printf("%d\n",a-b);
    printf("%d\n",b-c);



}
