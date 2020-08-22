#include <stdio.h>

int main()
{
    int t,n,m,k,i,j,min,max,x[101];

    scanf("%d",&t);

while(t--)
{
    scanf("%d %d",&n,&m);
    
    max=0; min=0;
    for(i=0;i<n;i++)
    	{scanf("%d",&x[i]);
         if(x[i]<x[min]) min=i; 
         if(x[i]>x[max]) max=i;}
 
    if(x[max]-x[min]<=2*m) printf("%d\n",x[min]+m);
  
    else printf("-1\n");}
}
