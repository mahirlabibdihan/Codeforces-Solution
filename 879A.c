#include <stdio.h>


int main()
{

 int n,i;

 scanf("%d",&n);

 int x[n],y[n];

 for(i=0;i<n;i++)
 	scanf("%d %d",&x[i],&y[i]);

for(i=1;i<n;i++)
{
    while(x[i]<=x[i-1])
    {
    	x[i]+=y[i];
    }
}

printf("%d",x[n-1]);
}




 