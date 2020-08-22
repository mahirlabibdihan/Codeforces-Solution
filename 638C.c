#include<stdio.h>

int main()

{
    int n,t,k,min,j,i,a;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&k);

        char x[n+1];

        scanf("%s",x);

         for(j=0; j<n; j++)
    {
        min=j;
        for(i=j+1; i<n; i++)if(x[i]<x[min])min=i;


        if(min!=j)
        {
            a=x[j];
            x[j]=x[min];
            x[min]=a;
        }

    }




    if(k<=n/2)
    {
        printf("%c",x[k-1]);

        for(i=k+k-1;i<n;i++)
            printf("%c",x[i]);
    }

    else
    {
        if(!(n%2))
        {


            printf("%c",x[n/2]);
        }

        else
        {
            if(x[n/2]==x[(n/2)-1]) printf("%c%c",x[n/2],x[n-1]);

            else printf("%c",x[n/2]);
        }

        }

        printf("\n");
    }




    }

