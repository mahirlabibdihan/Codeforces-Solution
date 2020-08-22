#include <stdio.h>

int main()
{

int n,i,c=0;

scanf("%d",&n);

int x[n],y[n];

for(i=0;i<n;i++)
{scanf("%d %d",&x[i],&y[i]);
if(y[i]-x[i]>=2) c++;}

printf("%d",c);

}





 