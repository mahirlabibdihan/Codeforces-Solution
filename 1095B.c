#include<stdio.h>

int main()

{
    int n,x[100001],i,j,k,y[4],max,min,c=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
        scanf("%d",&x[i]);

    for(j=0;j<2;j++)
    {  min=j;  for(i=j+1;i<n;i++)  if(x[i]<x[min])  min=i;
       if(j!=min) { k=x[min]; x[min]=x[j]; x[j]=k;} y[c++]=x[j]; }

    for(j=0,c=3;j<2;j++)
    { max=j;  for(i=j+1;i<n;i++)  if(x[i]>x[max]) max=i;
        if(j!=max)  {k=x[max];  x[max]=x[j];  x[j]=k;}  y[c--]=x[j]; }

    c=(y[3]-y[1]<y[2]-y[0])?y[3]-y[1]:y[2]-y[0];

    printf("%d",c);
}
