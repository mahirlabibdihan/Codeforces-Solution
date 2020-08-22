#include<stdio.h>

int main()

{
    int n,i,j,k,min;

    scanf("%d",&n);

    int x[n];

    for(i=0;i<n;i++)
        scanf("%d",&x[i]);

     for(j=0;j<n;j++)
     {  min=j; k=x[j];   for(i=j+1;i<n;i++)   if(x[i]<x[min])  min=i;
       if(min!=j)  {  x[j]=x[min];   x[min]=k;}    }

       k=x[n-1];

       j=n-1;

     for(i=0;i<n;i++)
     {
         if(x[n-1]%x[i]==0) k=x[n-1]/x[i];

         if(k==x[j]) ;

         else {if(k!=x[--j]) break;
         }

     }

     printf("%d %d",x[n-1],x[j]);

}
