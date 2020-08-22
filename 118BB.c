#include<stdio.h>

int main()

{
    int n,i,j,a;

scanf("%d",&n);

for(i=0;i<=2*n;i++)
{
     if(i<=n) a=i;
      else a=2*n-i;

	for(j=0;j<=2*n;j++)
	{
		if(j>=n-a&&j<=n)
             {if(!a&&j==n-a) printf("%d",a-(n-j));

                else printf("%d ",a-(n-j));}

       else if(j<=n+a&&j>n)
             {if(j==n+a) printf("%d",a-(j-n));
                 else printf("%d ",a-(j-n));}

    else if(j<n) printf("  ");
	}
     printf("\n");
}
}
