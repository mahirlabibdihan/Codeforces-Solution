#include <stdio.h>

int main()
{
   int n,i,min,j,k,c=0,sum=0,a=0;

   scanf("%d",&n);

   int x[n],y[n],z[n];

   for(i=0;i<n;i++)
   	{scanf("%d",&x[i]);
     y[i]=1;}

    for(j=0;j<n;j++)
   {
       min=j;   for(i=j+1;i<n;i++)  if(x[i]<x[min])    min=i;

       if(min!=j)  {k=x[min];    x[min]=x[j];   x[j]=k;}
   }

   while(sum<n)

   {c++;

       for(i=0;i<n;i++)

       if(x[i]>=0&&x[i]>=a)  {a++;   x[i]=-1;}

       sum=sum+a;  a=0;
   }

   printf("%d",c);

}
