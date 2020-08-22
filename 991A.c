#include <stdio.h>


int main()
{
    
int a,b,c,n;

scanf("%d %d %d %d",&a,&b,&c,&n);

if(a>=c&&b>=c&&n-(a+b-c)>0)

	printf("%d",n-(a+b-c));

else printf("-1");


    }

