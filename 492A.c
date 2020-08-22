#include <stdio.h>

int main()
{

long long int n,i,l,min,j,k;

scanf("%lld %lld",&n,&l);

int x[n];
double y[n+1],max;

for(i=0;i<n;i++)
  scanf("%lld",&x[i]);

 for(j=0;j<n;j++)
     {  min=j;   for(i=j+1;i<n;i++)   if(x[i]<x[min])  min=i;
           
       if(min!=j)  {k=x[min];    x[min]=x[j];   x[j]=k;}    }


 y[0]=x[0];
 y[n]=l-x[n-1];

for(i=1;i<n;i++)
{
  y[i]=1.0*(x[i]-x[i-1])/2;
}  

max=y[0];

for(i=1;i<=n;i++)
   if(y[i]>max) max=y[i];

printf("%.10f",max);
}

