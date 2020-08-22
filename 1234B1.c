#include<stdio.h>

int main()

{
    int n,k,i,j;

    scanf("%d %d",&n,&k);

    int x[n],y[k];

    for(i=0;i<n;i++)
        scanf("%d",&x[i]);

    for(i=0;i<k;i++)
        y[i]=0;

    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
            if(x[i]==y[j]) break;


        if(j==k)
        {
            for(j=k-1;j>0;j--)
                y[j]=y[j-1];

            y[0]=x[i];
        }
    }


    for(i=0;y[i]&&i<k;i++);
    n=i;

    printf("%d\n",n);

    for(i=0;i<n;i++)
        printf("%d ",y[i]);

}
