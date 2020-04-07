#include<stdio.h>

int main()

{
    int n,i,j,k,min,a=0;

    scanf("%d",&n);

    int x[n];
    int y[n][2];

    for(i=0;i<n;i++)
        scanf("%d",&x[i]);

    for(j=0;j<n;j++)
     {
       min=j;

       for(i=j+1;i<n;i++)
       {
           if(x[i]<x[min])
           {
               min=i;
           }
       }
            if(min!=j)
            {k=x[min];
           x[min]=x[j];
           x[j]=k;

           y[a][0]=j;
           y[a][1]=min;
           a++;}

        }
            printf("%d\n",a);

        for(i=0;i<a;i++)
            printf("%d %d\n",y[i][0],y[i][1]);

}
