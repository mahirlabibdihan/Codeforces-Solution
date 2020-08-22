#include <stdio.h>

int main()
{

int n,x[3],y[3],i;

scanf("%d",&n);

for(i=0;i<n;i++)
	scanf("%d %d",&x[i],&y[i]);

if((x[1]<x[0]&&x[2]<x[0]&&((y[1]<y[0]&&y[2]<y[0])||(y[1]>y[0]&&y[2]>y[0])))||(x[1]>x[0]&&x[2]>x[0]&&((y[1]<y[0]&&y[2]<y[0])||(y[1]>y[0]&&y[2]>y[0])))) printf("YES");
else printf("NO");

}


