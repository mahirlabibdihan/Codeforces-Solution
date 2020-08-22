#include<stdio.h>

int main()

{int t,n,min,i,j,k;
scanf("%d",&t);

while(t--)
{
 scanf("%d",&n);
 int x[n];

 for(i=0;i<n;i++)
     scanf("%d",&x[i]);


  for(j=n;j>0;j--)
     {
       min=0;

       for(i=1;i<j;i++)
       {
           if(x[i]<x[min])
           {
               min=i;
           }

           k=x[min];
           x[min]=x[j-1];
           x[j-1]=k;
       }


        }

    for(i=0;i<n;i++)
    printf("%d ",x[i]);
    printf("\n");

}

}
