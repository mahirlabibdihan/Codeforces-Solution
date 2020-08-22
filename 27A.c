#include<stdio.h>

int main()

{
    int n,i,j,k,min;

    scanf("%d",&n);

    int x[n];

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
           x[j]=k;}

           if(x[j]!=j+1) break;

        }

        printf("%d",j+1);

}
