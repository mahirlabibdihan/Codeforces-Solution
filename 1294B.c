#include<stdio.h>

int main()

{
    int t,n,i,j,k,min;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        int x[n+1],y[n+1];
        x[0]=0; y[0]=0;

        for(i=1;i<=n;i++)
            scanf("%d %d",&x[i],&y[i]);

        for(j=1;j<=n;j++)
        {
            min=j;

            for(i=j+1;i<=n;i++)
            {
                if(x[i]<x[min]) min=i;
                else if(x[i]==x[min])
                 {if(y[i]<y[min]) min=i;}
            }

            if(min!=j)
            {
                k=x[min];
                x[min]=x[j];
                x[j]=k;

                k=y[min];
                y[min]=y[j];
                y[j]=k;
            }

        }

         for(i=1;i<=n;i++)
         {
             if(x[i]>x[i-1]) { if(y[i]<y[i-1]) break;}
         }

         if(i<=n) printf("NO\n");

         else
         { printf("YES\n");
            for(i=1;i<=n;i++)
            {
                if(x[i]>x[i-1])
                {
                    for(j=0;j<x[i]-x[i-1];j++)
                        printf("R");

                }

                if(y[i]>y[i-1])
                     {
                    for(j=0;j<y[i]-y[i-1];j++)
                        printf("U");

                }
            }
            printf("\n");
         }


    }

}










